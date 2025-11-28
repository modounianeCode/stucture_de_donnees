#include<stdio.h>
#include<stdlib.h>
typedef struct livre{
char titre[30];
char auteur[30];
int annee;
int nbpages;
}l;
void menu(){
int choix;
char continuer;
l livre;
puts("gestion des livres");
puts("1 - Ajouter ");
puts("2- rechercher");
puts("0- Quitter");
puts("Entrer le numero de votre choix : ");
scanf("%d",&choix);
switch (choix){
case 1 : {
puts("Vous avez choisi d'ajouter de nouveaux livres");
livre =ajouter(livre);
};break;
case 2:{
puts("Vous voulez rechercher un livre ");
};break;
default : puts("Merci d'avoir visiter notre librairie");
}
}
l ajouter(l nbrLivre[4]){
int i=0;
puts("Vous avez le droit d'ajouter 4 livres");
for(i=0;i<4;i++){
printf("Livre %d\n",i+1);
printf("Entrer le titre : ");
scanf("%s",nbrLivre[i].titre)
printf("Entrer le nom de l'auteur : ");
scanf("%s",nbrLivre[i].auteur);
printf("\n Entrez l'annee de publication : ");
scanf("%d",&nbrLivre[i].annee;
printf("\n Entrez le nombre de pages du livre : ");
scanf("%d",&nbrLivre[i].nbpages);
}
return nbrLivre;
}
int main(){
menu();
return 0;
}
