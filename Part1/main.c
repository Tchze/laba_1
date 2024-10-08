#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define Name "Oleksandr"
#define LastName "Turchyn"
#define GroupName "RS-41"
#define Faculty "RTF"
#define University "Igor Sikorsky KPI"

void read_u(unsigned int* a){
    unsigned int t=0;
    char ts[256];
    scanf("%u",&t);
    gets(ts);
    while(t==0){
        printf("Enter the number ");
        scanf("%u",&t);
        gets(ts);
    }
    (*a)=t;
}

void read_i(int* a){
    int t=0;
    char ts[256];
    scanf("%d",&t);
    gets(ts);
    while(t==0){
        printf("Enter the number ");
        scanf("%d",&t);
        gets(ts);
    }
    (*a)=t;
}

void read_f(float* a){
    float t=0;
    char ts[256];
    scanf("%f",&t);
    gets(ts);
    while(t==0){
        printf("Enter the number ");
        scanf("%f",&t);
        gets(ts);
    }
    (*a)=t;
}

void read_d(double* a){
    double t=0;
    char ts[256];
    scanf("%lf",&t);
    gets(ts);
    while(t==0){
        printf("Enter the number ");
        scanf("%lf",&t);
        gets(ts);
    }
    (*a)=t;
}

int main(){
    unsigned int age = 18;
    unsigned int semestr;
    float admissionScore;
    int grade1;
    int grade2;
    int grade3;
    int grade4;
    int grade5;
    double averageGrade;

    printf("%s %s Enter following data.\n",Name,LastName);
    printf("Enter semestr.\n");
    read_u(&semestr);
    printf("Enter your admission score.\n");
    read_f(&admissionScore);
    printf("Enter grade #1:\n");
    read_u(&grade1);
    printf("Enter grade #2:\n");
    read_u(&grade2);
    printf("Enter grade #3:\n");
    read_u(&grade3);
    printf("Enter grade #4:\n");
    read_u(&grade4);
    printf("Enter grade #5:\n");
    read_u(&grade5);
    printf("Enter your age:\n");
    read_u(&age);
    averageGrade=(double)(grade1+grade2+grade3+grade4+grade5)/5;

    system("cls");

    printf("%s\n",University);
    printf("Faculty: %s\n",Faculty);
    printf("Group: %s\n",GroupName);
    printf("---------------\n");
    printf("student: %s %s\n",Name,LastName);
    printf("age: %u\n",age);
    printf("semestr: %u\n",semestr);
    printf("---------------\n");
    printf("admission score: %.2f\n",admissionScore);
    printf("average grade: %.3f\n",averageGrade);
    getch();
    system("cls");
    return 0;
}