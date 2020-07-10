#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct patient {
char name[25];
char address[20];
int age[2];
char blood_group[10];
};
int main(){
FILE *fp ;
    char data[50];
    fp = fopen("test.txt", "a") ;
    printf( "\n Enter Your Name : ") ;
    while ( strlen ( gets( data ) ) > 0 )
    {
        fputs(data, fp) ;
    }
    fclose(fp) ;
}
