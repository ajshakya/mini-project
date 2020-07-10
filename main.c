#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
struct patient {
char name[25];
char address[20];
char problem[10];
char age[3];
char phone[10];
};
int inp(){ //admit section
FILE *fp ;
struct patient p[10];
int i,a;
fp = fopen("test.txt", "a+") ;
for(i=0;i<1;i++){
            printf("enter your name : ");
            scanf("%s",&p[i].name);
                    printf("enter your address : ");
                    scanf("%s",&p[i].address);
                        printf("enter your problem : ");
                        scanf("%s",&p[i].problem);
                                printf("enter your age : ");
                                scanf("%s",&p[i].age);

                    fputs(" Name : ",fp);
                    fputs(p[i].name,fp);
                        fputs("\t address : ",fp);
                        fputs(p[i].address,fp);
                            fputs("\t problem : ",fp);
                            fputs(p[i].problem,fp);
                                fputs("\t age : ",fp);
                                fputs(p[i].age,fp);
                                    fputs("\n",fp);
                    fclose(fp);
                    system("cls");
                    a=main();
}

}
int s(int n){ //selects option
    int a;
    switch(n){
case 1:
    a = inp();
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
    }
}
int opt(){ // option Selection
    int n,slt;
    printf(" \t \t \t \t \t ---------------------------- \n \n \n");
    printf(" \t \t \t \t \t  How can this program help you !!! \n \n");
    printf("\n \t \t \t  1. Admit / Discharge a patient \t \t 2. Visit a patient\n");
    printf("\n \n \t \t \t  3. Consult OPD doctor \t \t \t 4. Billing\n");
    printf("\n \n \t \t \t \t \t  Enter your choice :- ");
    scanf("%d",&n);
        if(n==1 || n==2 || n==3 || n==4){
            int slt = s(n);
        }
            else{
            n=opt();
            }

    }
int main(){ //main intro section
    int n;
    printf(" \t \t \t \t \t    Welcome To A4 Hospital \n");
    printf(" \t \t \t \t \t ---------------------------- \n");
    printf(" \t \t \t \t \t      A4 Hospital Pvt.Ltd\n");
    printf(" \t \t \t \t \t       Kathmandu, Nepal \n");
    printf(" \t \t \t \t \t          011-4234233 \n");
    n=opt();
    return(0);
}
