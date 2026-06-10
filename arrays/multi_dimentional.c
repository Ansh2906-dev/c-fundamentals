#include <stdio.h>

int main() {

int marks[2][3];//2 x 3 matrix 
 // {{1,2},{3,4}} // _ _ _ , _ _ _ in memory location
//two sq brackets means no of roys needed, arr=array name

  marks[0][0] = 90;
  marks[0][1] = 80;
  marks[0][2] = 70;

  marks[1][0] = 60;
  marks[1][1] = 50;
  marks[1][2] = 40;

 printf("%d", marks[0][2]); //output

 return 0;


}