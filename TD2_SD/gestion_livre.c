#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct livre {
char titre[30];
char auteur[30];
int annee_production;
int nombre_pages;
struct livre *suivant;
} l;
void menu(){
int menu;
puts("Menu");
puts("1 - ajouter un livre");
puts("2 - rechercher un livre");
puts("0 - sortir");
printf("Entrez le numero de l'option choisie : ");
scanf("%d",&menu);
switch (menu){
case 1: {
l liste;
l = saisieliste;
};break;
case 2 : {

};break;
case 3 : printf("Merci de votre collaboration");break;
default : printf("Vous avez choisi un numero invalide ");
}
}
l* ajouter(l* ptr_debut,char titre[], char auteur[], int annee, int nbr_pages){
l* new_c;
new_c = (l*) malloc(sizeof(l*));
new_c->titre = titre;
new_c->auteur = auteur;
new_c->annee = annee;
new_c->nbr_pages = nbr_pages;
new_c->suivant = ptr_debut;
return new_c;
}
l* saisieliste(){
char choix, titre[30], auteur[30];
int annee,nbr_pages;
l *ptr=NULL;
puts("Voulez vous entrer des informations : ");
choix = getchar();
while(choix =='O' || choix =='o'){
puts("Entrer les informations ");
printf("Auteur : ");
scanf("%s",auteur);
printf("Titre : ");
scanf("%s",titre);
printf("Annee : ");
scanf("%d",&annee);
printf("Nombre de pages : ");
scanf("%d",&nbr_pages);
ptr = ajouter(ptr,auteur,titre,annee,note);
puts("Voulez vous continuer : ");
choix = getchar();
}
return ptr;
}

