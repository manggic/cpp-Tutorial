#include <iostream>
#include <string>
#include <vector>
using namespace std;



int main(){  
  
  char * originalFile = "originalFile.txt";
  char * editedFile = "editedFile.txt";
  char * info = "i am information";


  //rename old file 'originalFile' into 'editedFile'
  rename(originalFile, editedFile);
 
  // delete this file
  remove(editedFile);

  // open file in write mode
  FILE * fh = fopen(originalFile, "w");

  fputs(info, fh); // add info content to the originalFile.txt
  fclose(fh);

  // open this file in append mode 
  FILE * fh = fopen(originalFile, "a");


  // read a file and console output on screen
  FILE * fh = fopen(originalFile, "r");
  char string[100];
  while(fgets(string, 100, fh)) {
    printf("%s\n", string);
}
  return 0;
}