#include<stdio.h>
#define std 1000
#define tc 100
#define staf 20

typedef long long int ll;  //work like declear

struct adress{
 int flat_no;
 int house_no;
 char street[100];
 char country[100];
};
struct student{
 char name[100];
 struct adress add;
 int id,age;
 double cgpa;
};
struct teacher{
 char name[100];
 struct adress add;
 int id,age;
 double salary;
} y[tc];
typedef struct {
 char name[100];
 struct adress add;
 int id,age;
 double salary;
}stuff;

int main()
{
    struct student x[std];
    stuff z[staf];
    int i,n,m,p;
    ll;
     //student info
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %s %d %lf %d %d %s %s",&x[i].id,x[i].name,&x[i].age,&x[i].cgpa,&x[i].add.flat_no,&x[i].add.house_no,x[i].add.street,x[i].add.country);
    }
    for(i=0;i<n;i++){
        printf("%d %s %d %lf %d %d %s %s",x[i].id,x[i].name,x[i].age,x[i].cgpa,x[i].add.flat_no,x[i].add.house_no,x[i].add.street,x[i].add.country);
    }
//    teacher info

    scanf("%d",&m);
    for(i=0;i<m;i++){
        scanf("%d %s %d %lf %d %d %s %s",&y[i].id,y[i].name,&y[i].age,&y[i].salary,&y[i].add.flat_no,&y[i].add.house_no,y[i].add.street,y[i].add.country);
    }
    for(i=0;i<m;i++){
        printf("%d %s %d %lf %d %d %s %s",&y[i].id,y[i].name,&y[i].age,&y[i].salary,y[i].add.flat_no,y[i].add.house_no,y[i].add.street,y[i].add.country);
    }

//    stuff info
    scanf("%d",&p);
    for(i=0;i<p;i++){
        scanf("%d %s %d %lf %d %d %s %s",&z[i].id,z[i].name,&z[i].age,&z[i].salary,&z[i].add.flat_no,&z[i].add.house_no,z[i].add.street,z[i].add.country);
    }
    for(i=0;i<p;i++){
        printf("%d %s %d %lf %d %d %s %s",z[i].id,z[i].name,z[i].age,z[i].salary,z[i].add.flat_no,z[i].add.house_no,z[i].add.street,z[i].add.country);
    }

}
