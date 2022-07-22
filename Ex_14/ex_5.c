#include<stdio.h>
#include<string.h>
#define CSIZE 4
struct name{
    char fname[15];
    char lname[15];
};
struct student{
    struct name user;
    float grade[3];
    float average;
};
void set_grade(struct student stu[]); 
void set_average(struct student stu[]);
void set_info_all(struct student stu[];
void set_average_all(struct student stu[]);

int main()
{
    struct student stu[CSIZE];
    set_grade(stu);
    set_average(stu);
    set_info_all(stu);
    set_average_all(stu);
    return 0;
}

void set_grade(struct student stu[])
{
    int i = 0;
    do{
        printf("Enter the student name(first_name last_name):\n");
        scanf("%s %s", stu[i].user.fname, stu[i].user.lname);
        printf("Enter the 3 score of %s:\n", stu[i].user.fname);
        scanf("%f %f %f", &stu[i].grade[0], &stu[i].grade[1], &stu[i].grade[2]);
    }while(++i < CSIZE);
}

void set_average(struct student stu[])
{
    for(int i=0; i<CSIZE; i++)
        stu[i].average = (stu[i].grade[0] +stu[i].grade[1] +stu[i].grade[2]) / 3;
}

void set_info_all(struct student stu[])
{
    for(int i=0; i<CSIZE; i++)
        printf("No.%d: %s.%s : %5.2f%5.2f%5.2f, average=%5.2f\n", i, stu[i].user.fname,
                user[i].user.lname, stu[i].grade[0], stu[i].grade[1], stu[i].grade[2], stu[i].average);
}

void set_average_all(struct student stu[])
{
    float sum = 0.0;
    for(int i=0; i<CSIZE; i++)
        sum += stu[i].average;
    printf("Class average is %f", sum / 4);
}