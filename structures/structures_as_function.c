//using functions in structures

#include<stdio.h>
#include<string.h>
//user defined decleration
struct student {

    char name[100];
    int roll_no;
    float cgpa;

};

int main() {
 struct student s1;

 s1.cgpa = 7.67;
 s1.roll_no = 04;
 //s1.name = "ansh";
 strcpy(s1.name, "ansh");
 
 printf("student name = %s\n", s1.name);
 printf("student roll no = %d\n", s1.roll_no);
 printf("student cgpa is = %f\n", s1.cgpa);
 return 0;


}