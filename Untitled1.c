#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    char a;
    printf("\t \t \t \t \t \t Welcome To A4 Hospital\n");
    printf("How can this program help you !!! \n");
    printf("1. Admit a patient \n");
    printf("2. Visit a patient \n");
    printf("3. consult OPD doctor \n");
    printf("enter the number with your choice \n");
    n=getchar();
switch(n){
case '1':
    printf("enter the full name of patient \n");
    scanf("%s",&a);
    printf("%s",a);
    break;
case '2':
    printf("second choice");
    break;
case '3':
    printf("3. consult OPD doctor");
    break;
case '4':
    exit(0);
}
return 0;
}