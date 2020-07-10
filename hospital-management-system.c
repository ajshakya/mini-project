#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void Title();
void welcomescreen();
int inp();
int opt();
int s(int n);
void search_rec ();
void patients_rec();
void doctors_rec();

struct patient {
char name[25];
char address[20];
char problem[30];
char gender[10];
char age[3];
char phone[10];
}p;

struct doctor{
char dname[25];
char specialist[20];
}d;

int main(){ //main intro section


    welcomescreen();
    Title();


}

void welcomescreen()
{
    int n;
    printf(" \n\n\n\t \t \t \t \t    Welcome To A4 Hospital \n");
    printf(" \t \t \t \t \t ---------------------------- \n");
    printf(" \t \t \t \t \t      A4 Hospital Pvt.Ltd\n");
    printf(" \t \t \t \t \t       Kathmandu, Nepal \n");
    printf(" \t \t \t \t \t          011-4234233 \n");
    n=opt();

}

void Title()
{
    printf("\n\n------------------------------------------------------------------------------------------------------------------------");
    printf("\n\n \t \t \t \t \t   ***** A4 HOSPITAL  *****");
    printf("\n\n------------------------------------------------------------------------------------------------------------------------");
}

int opt(){ // option Selection
    int n,slt;
    Title();
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

int s(int n){ //select option
    int a;
    switch(n){
case 1:
    a = inp();
    break;
case 2:
    printf("\t\t2st case");
    search_rec();

    break;
case 3:
    printf("3st case");
    break;
case 4:
    printf("4st case");
    break;
    }
}


int inp(){ //admit section
FILE *fp ;
struct patient p[10];
int i,a;
fp = fopen("patient.txt", "a+") ;
for(i=0;i<1;i++){
            printf("enter your name : ");
            scanf("%s",&p[i].name);
                    printf("enter Address : ");
                    scanf("%s",&p[i].address);
                        printf("enter Problem : ");
                        scanf("%s",&p[i].problem);
                            printf("enter Gender : ");
                            scanf("%s",&p[i].gender);
                                printf("enter Age : ");
                                scanf("%s",&p[i].age);
                                    printf("Enter contact no.");
                                    scanf("%s",&p[i].phone);

                    fputs(" Name : ",fp);
                    fputs(p[i].name,fp);
                        fputs("\t address : ",fp);
                        fputs(p[i].address,fp);
                            fputs("\t problem : ",fp);
                            fputs(p[i].problem,fp);
                                    fputs("\t Gender : ",fp);
                                    fputs(p[i].gender,fp);
                                        fputs("\t age : ",fp);
                                        fputs(p[i].age,fp);
                                            fputs("\t Contact no. : ",fp);
                                            fputs(p[i].phone,fp);
                                                fputs("\n",fp);
                    fclose(fp);
                    system("cls");
                    a=main();
}

}

void doctor() // doctor admit
{
    struct doctor d;
    FILE *fp;
    fp=fopen("doctor.txt","a");
    if(fp==NULL)
    {
        printf("File doesn't exist");
        exit(1);
    }

    printf("Enter details of doctor");
    gets(d.dname);
    fflush(stdin);
    gets(d.specialist);
    fwrite(&d,sizeof(d),1,fp);
    fclose(fp);
    getch();

}

void search_rec ()
{
    int choose;
    system("cls");
    printf("\n\n\n\n\t\t\t\t Choose record to be search(1/2) \t\t\t");
    printf("\n\t\t\t\t    1.Patients record");
    printf("\n\t\t\t\t    2.Doctors record");
    printf("\n\t\t\tEnter your choice :-");
    scanf("%d",&choose);

    switch(choose)
    {
        case 1:
          patients_rec();
          break;
        case 2:
            doctors_rec();
            break;

        default:
            printf("Please choose correct option");
    }

}

void patients_rec()
{
    int found=0;
    char name[20];
    system("cls");
    Title();
    FILE *fp;
    fp=fopen("patient.txt","r");
    if(fp==NULL)
    {
        printf("\n\t\t\t\t file doesnot exist");
        exit(1);
    }
    printf("\n \n \n \n \t \t    !!!Search Patient Record!!! ");
    printf("\n \n \t\t \t Enter patient name to be viewed \t\t\t");
    scanf("%s",&name);
        if(strcmp(p.name,name)== 0)
        {
            printf("it worked");
            found=1;
           printf("\nRecord of patient with Name %s is as follows:",name);
           printf("\n\nName :%s",p.name);
           printf("\n\n Address :%s",p.address);
           printf("\n\n Gender :%s",p.gender);
           printf("\n\n age :%d",p.age);
           printf("\n\n problem :%s",p.problem);
           printf("\n\n contact no. :%s",p.phone);
    }
            if(found==0)
            printf("\n Record Not found in this file!");

            fclose(fp);
            getch();
    }




 void doctors_rec()
 {
    char name[25];
    int found=0;
    system("cls");
    Title();
    FILE *fp;
    fp=fopen("doctor.txt","r");
    {
        printf("\n\t\t\t\t file doesn't exist");
        exit(1);
    }
    printf("/n/n/n/n/t/t/t    !!!Search Doctors Information!!!");
    printf("/n/n/t/t/t Enter Doctors name to be viewed /t/t/t");
    scanf("%s",&name);
    fflush(stdin);
    while(fread(&p,sizeof(p),1,fp)==1)
    {
        if(strcmp(p.name,name)==0)
        {
           found=1;
           printf("\nRecord of Doctor with Name %s is as follows:",name);
           printf("\n\nName :%s",d.dname);
           printf("\nspecialties :%s",d.specialist);

            break;
        }
    }
            if(found==0)
            printf("\n Record Not found s!");


    fclose(fp);
    getch();
}

