#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, char **argv){

  int numRows = 0;
  int numColumns = 0;

  ifstream file;
  string answer = "";
  cout << "would you like to do your own file? y or n " << endl;
  cin >> answer;

  string fName = "";

  if (answer == "y"){
    cout << "Enter file: ";
    cin >> fName;

    file.open(fName);
    int lineNum = 0;
    std::string line;
    if(file.is_open()){
      string myArray[numRows];
      while(getline(file, line)){
        lineNum++;
        if(lineNum == 1){
          //std::string rows = line;
          //int rows = int(line);
          //numRows = std::stoi(rows);
          stringstream rows(line);
          rows >> numRows;
          cout << numRows << endl;
        }else if(lineNum == 2){
          //std::string columns = line;
          //int columns = int(line);
          //numColumns = std::stoi(columns);
          //numColumns = columns;
          stringstream columns(line);
          columns >> numColumns;
          cout << numColumns << endl;
        }else{
          myArray[lineNum-3];
        }
        char theArray[numRows][numColumns];
        int total = numRows * numColumns;

        for(int x = 0; x < numRows; ++x){
          string s = myArray[x];
          char newArray[total];
          //strcpy(newArray, s.c_str());
          for(int y = 0; y < s.length(); ++y){
            for(int i = 0; i < numRows; ++i){
              for(int j = 0; j < numRows; ++i){
                theArray[i][j] = s[y];
              }
            }
          }
        }
        cout << theArray << endl;
      }
    }
    file.close();
  }
}
