#include <stdio.h>
#include <stdlib.h>


struct Student{

int age;
double gpa;
char grade;
char name[50];
char major[50];
char year[50];

};


int main(){

    struct Student student1;
student1.age=21;
student1.gpa=3.46;
student1.grade='A';
strcpy(student1.name, "Marvin Nyanjui");
strcpy(student1.major, "Software Engineering");
strcpy(student1.year,"Second");

printf("Age:%d\nGpa:%f\nGrade: %c\nName:%s\nMajor:%s\nYear:%s\n", student1.age, student1.gpa, student1.grade, student1.name, student1.major, student1.year);
printf("%p",&student1);

    return 0;
}
