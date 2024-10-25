#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

Student:
    name --> string
    id --> string
    age --> int
    grades --> int array
*/
typedef struct{
    char name[50];
    char id[10];
    int age;
    int grades[3];
}Student;


typedef struct{
    int x;
    int y;
}Point;



void print_student(Student student);

void print_points(Point points[]);

int main()
{
    Student s1;
    strcpy(s1.name,"BoB");
    strcpy(s1.id,"00235");
    s1.age = 45;
    s1.grades[0] = 81;
    s1.grades[1] = 64;
    s1.grades[2] = 47;

    print_student(s1);

    Point p1 = {5, 10}; // x=5, y=10
    printf("p1.x: %d\n",p1.x);
    printf("p1.y: %d\n",p1.y);

    Point points[10];
    for(int i = 0; i < 10; i++){
        points[i].x = i;
        points[i].y = 10 - i;
    }
    print_points(points);
    return 0;
}

void print_student(Student student){
    printf("Name: %s\n",student.name);
    printf("Age: %d\n",student.age);
    printf("ID: %s\n",student.id);
    printf("Grades: ");
    for(int i = 0; i < 3; i++){
        printf(" %d", student.grades[i]);
    }
    printf("\n");
}

void print_points(Point points[]){
    for(int i = 0; i < 10; i++){
        printf("p%d = (%d,%d)\n",i,points[i].x, points[i].y);
    }

}
