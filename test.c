#include<stdio.h>
#include<conio.h>
void main(){
int age;
char b[20],address[20];
printf("Enter Patients Full Name");
scanf("%s",&b);
printf("Enter Age Of Patient");
scanf("%d",&age);
printf("Enter Patients Address");
scanf("%s",&address);
printf("%s %d %s",b,age,address);
getch();
}
