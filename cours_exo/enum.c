#include<stdio.h>
enum day {alt,tal,ala,alx,ajj,gaw,dib};
int main(){
typedef enum day bis;
bis b1 = 5;
switch(b1){
case alt : printf("Tayla altine\n");break;
case 2 : printf("Tayla talata\n");break;
case 3 : printf("Tayla alarba\n");break;
case 4 : printf("Tayla alxames\n");break;
case 5 : printf("Tayla ajjuma\n");break;
case 6 : printf("Tayla gaawu\n");break;
case 7 : printf("Tayla dibeer\n");break;
default : puts("Da nga juum");break;
}

return 0;
}
