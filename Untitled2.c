#include<stdio.h>
struct patient {
char name[25];
char address[20];
char problem[10];
char age[3];
char phone[10];
};

int inp(){
FILE *fp ;
struct patient p[10];
int i;
fp = fopen("test.txt", "a+") ;
char a;
for(i=0;i<1;i++){
            printf("enter your name : ");
            gets(p[i].name);
                    printf("enter your address : ");
                    gets(p[i].address);
                        printf("enter your problem : ");
                        gets(p[i].problem);
                                printf("enter your age : ");
                                gets(p[i].age);

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
}

}

int main(){

inp();

}

