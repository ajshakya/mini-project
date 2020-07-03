#include<stdio.h>
#include<conio.h>

int ad(){ //admit/discharge section
int z,x;
printf("\n \n \t \t \t \t Do you want to Admit or Discharge a Patient ? \n \n");
printf("\t \t \t \t 1. Admit \t \t \t 2.Discharge \n \n");
printf("\t \t \t \t \t  Enter your choice :- ");
scanf("%d",&z);
if(z==1){ //admit section
        char name[30],address[30],blood;
        int age,adts, d1, d2, m1, m2, year;;
//        printf("enter patients name = ");
//        scanf("%s",&name);
//        printf("enter patients address = ");
//        scanf("%s",&address);
        printf("enter patients age = ");
        scanf("%d",&age);
//        printf("enter patients blood group = ");
//        scanf("%s",&blood);
        printf("enter patients admitting sector \n");
        printf("1. Neuro \t 2. Cardio \t 3.Ortho \n");
        scanf("%d",&adts);
        if(adts==1){
            adts="Neuro";
        }
        if(adts==2){
            adts="Cardio";
        }
        if(adts==3){
            adts="Ortho";
        }
        printf("admitting date (dd/mm/yy): ");
        scanf("%d,%d/%d,&,d/%d", &d1,&d2,&m1,&m2,&year);

}
else if(z==2){ //discharge section
    printf("z is 2");
}
else{
    printf("\n \t \t     Please enter (1) for admitting a patient and (2) for discharging a patient !");

    x=ad();
}}
int s(int n){ //selects option
    int a;
    switch(n){
case 1:
    a = ad();
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
