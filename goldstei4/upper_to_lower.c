/*
upper_to_lower 
@author: Justus Goldstein-Shirley [goldstei4]
*/

#include <stdio.h>

/* 
 * A procedure that, given a valid filename, changes all characters in the file
 * to lowercase. 
 */
void upper_to_lower(char* name){
  FILE *file;
  file = fopen(name, "r");
  if(file == NULL){
    perror("No such file.");
  }else{

    //Find length of file [1]
    int length;
    fpos_t position;
    fgetpos( file, &position );
    fseeko( file, 0, SEEK_END );
    length = ftello( file );
    fsetpos( file, &position );

    //Save contents of file to array as lowercase
    char contents[length];
    int i;
    for(i=0; i<length; i++){
      contents[i] = tolower(fgetc(file));
    }
    fclose(file);

    //Write contents back into file
    file = fopen(name, "w");
    for(i=0; i<length; i++){
      fputc(contents[i], file);
    }
  }
  fclose(file);
}

int main(){
  upper_to_lower("test.txt");
  return 0;
}

/*
[1] The code for finding the length of the file was copied wholesale from StackOverflow user Potatoswatter's answer to fang_dejavu's question "Counting unknown numbers of chars from a file in C", found <http://stackoverflow.com/questions/2645598/counting-unknown-numbers-of-chars-from-a-file-in-c> and accessed 1/29/14.

[2] Help with basic file i/o came from "Intro to File Input/Output in C" at <http://www.cs.bu.edu/teaching/c/file-io/intro/>, accessed 1/29/14.
*/
