#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main () {

    int i,tecla;
    int ci,cf,li,lf;
    li=5;
    lf=24;
    ci=5;
    cf=70;
    textcolor(7);
    textbackground(4);
    for (i=ci;i<=cf;i++){ //desenha as linhas horizontais
        gotoxy(i,li);  //col,lin
        printf("%c",205);
        gotoxy(i,lf); 
        printf("%c",205);
        }
    for (i=li;i<=lf;i++){ //desenha as linhas verticais
        gotoxy(ci,i); printf("%c",186);
        gotoxy(cf,i); printf("%c",186);
       }   
    gotoxy(ci,li);  printf("%c",201);
    gotoxy(cf,li);  printf("%c",187);
    gotoxy(ci,lf); printf("%c",200);
    gotoxy(cf,lf); printf("%c",188);
    
    textcolor(15);
    textbackground(0);
    printf("\n\n");

    system("pause");
	return 0;
}