#include<stdio.h>
int somme_chiffres_nombre(int nombre){
if(nombre < 10) return nombre;
else  return (nombre%10)+somme_chiffres_nombre(nombre/10);
}
int main(){
int nombr;
puts("Programmme pour calculer la somme des chiffres d'un nombre");
puts("Le nombre entre doit etre positif ou nul");
do{
printf("Donner un nombre : ");
scanf("%d",&nombr);
}while(nombr < 0);
int somme = somme_chiffres_nombre(nombr);
printf("La somme des chiffres de %d est %d\n",nombr,somme);
return 0;
}
