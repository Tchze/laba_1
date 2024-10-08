#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

double fun(double x){
    return pow(x+125,3)-45*x-18;
}

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
    int variant;
    printf("Enter variant:\n");
    read_u(&variant);
    while(variant!=1&&variant!=2){
        printf("Wrong variant:\n");
        read_u(&variant);
    }

    double x1,x2;
    double delta;
    int n;
    if(variant==1){
        printf("Enter following data.\n");
        printf("Enter X1.\n");
        read_d(&x1);
        printf("Enter X2.\n");
        read_d(&x2);
        printf("Enter N.\n");
        read_i(&n);
        --n;
        delta=fabs((x2-x1)/n);
    }else{
        printf("Enter following data.\n");
        printf("Enter X1.\n");
        read_d(&x1);
        printf("Enter X2.\n");
        read_d(&x2);
        printf("Enter delta.\n");
        read_d(&delta);

        n=(int)fabs((x2-x1)/delta);
    }
    for(int i=0;i<58;++i){
        printf("*");
    }
    printf("\n*  N   *              X         *                F(X)    *\n");
    for(int i=0;i<58;++i){
        printf("*");
    }
    printf("\n+------+------------------------+------------------------+\n");
    char s[256]="Press any key to continue...";
    char c=1;
    int k=12;
    for(int i=0;(i<=n);){
        int t=0;
        while(t<k&&i<=n){
            printf("|%6d|%24.3lf|%24.3lf|\n",i+1,x1,fun(x1));
            printf("+------+------------------------+------------------------+\n");
            x1+=delta;
            ++i;
            ++t;
        }
        if(i<=n){
            if(c){
                k=14;
                printf("%s",s);
                c=0;
            }
            getch();
            printf("\r");
        }
    }

    return 0;
}
