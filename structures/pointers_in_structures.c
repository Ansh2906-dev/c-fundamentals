#include<stdio.h>
#include<string.h>

struct student {


    char name[100];
    int roll_no;
    float cgpa;

};

void printinfo(struct student s1);

int main(){
  struct student s1 = {"ansh", 04, 7.7};
  printinfo(s1);
  // printf("roll no of student is : %d\n", s1.roll_no);

  // //pointers

  // struct student *ptr = &s1; // or (*ptr).name
  // printf("roll no of student is : %d\n", ptr->roll_no); // arrow operator ->
  
  // printf("name of the student is : %s\n", ptr->name);

  // printf("cgpa of the student is :%f\n", ptr->cgpa);
return 0; 
}

// (*ptr).roll_no  is equal to ptr->roll_no
void printinfo(struct student s1) {
  printf("roll no of student is : %d\n", s1.roll_no); // dot operator
  
  printf("name of the student is : %s\n", s1.name);

  printf("cgpa of the student is :%f\n", s1.cgpa);

}