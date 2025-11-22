#include<stdio.h>
int pgcd(int x, int y){
if(y == 0) return x;
else return pgcd(y,x%y);
}
int main(){
int a,b;
puts("Programme pour calculer le pgcd de deux nombres");
printf("Entrer le 1er nombre : ");
scanf("%d",&a);
printf("Entrer le 2eme nombre : ");
scanf("%d",&b);
int resultat = pgcd(a,b);
printf("pgcd (%d, %d) = %d\n",a,b,resultat);
return 0;
}
