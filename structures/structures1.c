#include<stdio.h>
#include<string.h>

struct student {


    char name[100];
    int roll_no;
    float cgpa;
    

};

int main(){
  struct student s1 = {"ansh", 04, 7.7};
  printf("\nroll no of student is : %d", s1.roll_no);



   return 0; 
}