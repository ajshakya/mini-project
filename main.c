#include<stdio.h>
char admt(){
int age;
char b[20],address[20];
printf("Enter Patients Full Name = ");
scanf("%s",&b);
printf("Enter Age Of Patient = ");
scanf("%d",&age);
printf("Enter Patients Address = ");
scanf("%s",&address);
printf("%s %d %s",b,age,address);
}
char selct(int n){
    char a;
    switch(n){
case 1:
    a = admt();
    break;
case 2:
    printf("2st case");
    break;
case 3:
    printf("3st case");
    break;
case 4:
    printf("4st case");
    break;
default:
    printf("errror");
    }
}
void main(){
    int n;
    printf(" \t \t \t \t \t    Welcome To A4 Hospital \n");
    printf(" \t \t \t \t \t ---------------------------- \n");
    printf(" \t \t \t \t \t      A4 Hospital Pvt.Ltd\n");
    printf(" \t \t \t \t \t       Kathmandu, Nepal \n");
    printf(" \t \t \t \t \t          011-4234233 \n");
    printf(" \t \t \t \t \t ---------------------------- \n \n \n");
    printf(" \t \t \t \t \t  How can this program help you !!! \n \n");

    printf("\n \t \t \t  1. Admit a patient \t \t \t \t 2. Visit a patient\n");
    printf("\n \n \t \t \t  3. Consult OPD doctor \t \t \t 4. Billing\n");
    printf("\n \n \t \t \t \t \t  Enter your choice :- ");
    scanf("%i",&n);
    int slt = selct(n);
}
