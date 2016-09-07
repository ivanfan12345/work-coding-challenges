#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <map>
#include <string>

using namespace std;
int main(int argc , char* argv[])
{
  string myStr;
  string line;
  bool stupid[122] = { 0,0,0,0,0,0,0,0,0,0
                      ,0,0,0,0,0,0,0,0,0,0
                      ,0,0,0,0,0,0,0,0,0,0
                      ,0,0,0,0,0,0,0,0,0,0
                      ,0,0,0,0,0,0,0,0,0,0
                      ,0,0,0,0,0,0,0,0,0,0
                      ,0,0,0,0,0,0,0,0,0,0
                      ,0,0,0,0,0,0,0,0,0,0
                      ,0,0,0,0,0,0,0,0,0,0
                      ,0,0,0,0,0,0,0,0,0,0
                      ,0,0,0,0,0,0,0,0,0,0
                      ,0,0,0,0,0,0,0,0,0,0,0,0};
  
  /*cout << "Enter your stupid ass string: ";
  cin >> myStr ;
  cout << "=======================================" << endl;
  cout << "Stupid: " << myStr << endl;            
  */
  cout << "File Name: " << argv[1] << endl;
  ifstream myfile (argv[1]);
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      //cout << line << '\n';
      //cout << line.length() << endl;                           
      for(int j = 0 ; j < line.length() ; j ++) {
        if(stupid[int(line[j])] == 0){
          stupid[int(line[j])] = 1;
        }
      }
    }
    myfile.close();
  }
  else {
    cout << "Unable to open file";
  }
  for(int i=97; i < 123 ; i++){
    if(stupid[i] == 0) {
      cout << static_cast<char>(i) << " WAS NOT USED" << endl;
      }
  }     
	return 0;
}
