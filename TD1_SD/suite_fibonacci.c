#include<stdio.h>
int suite_fibonacci(int nombre){
if(nombre < 2) return nombre;
else return suite_fibonacci(nombre-1)+suite_fibonacci(nombre-2);
}
int main(){
puts("Programme permettant de calculer la suite de fibonacci");
puts("Le nombre de terme doit etre positif");
int n_terme;
do{
printf("Entrer le nombbre de terme de la suite : ");
scanf("%d",&n_terme);
}while(n_terme < 0);
int somme = suite_fibonacci(n_terme);
printf("La somme des %d termes de la suite de fibonacci est : %d\n",n_terme,somme);
return 0;
}
