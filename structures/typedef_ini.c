// using typedef keyword

#include<stdio.h>
#include<string.h>

//typede_f  keyword used to create alias of some function

typedef struct chemicalengineeringstudent {
   
     char name[100];
     int roll_no;
     float cgpa;


}ces; //nickname

int main() {
   
    ces s1 = {"ansh", 04, 7.7};
    strcpy(s1.name, "ansh");
    
    printf("name of the student is : %s\n", s1.name);
    printf("roll no of the student is : %d\n", s1.roll_no);
    printf("cgpa of the student is : %f\n", s1.cgpa);

    return 0;
}



