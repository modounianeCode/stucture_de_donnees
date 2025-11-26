#include<stdio.h>
#include<stdlib.h>
typedef struct cellule {
float note;
struct cellule *suivant;
} notee;
notee* ajouter(notee *ptr,float nouvelle_note){
notee *nouvelle_cellule;
nouvelle_cellule = (notee*) malloc(sizeof(notee));
(*nouvelle_cellule).note = nouvelle_note;
(*nouvelle_cellule).suivant = ptr;
return nouvelle_cellule;
}
notee* saisieListe(){
char choix;float note;
notee *ptr_debut=NULL;
puts("Voulez vous entrer des notes : ");
choix = getchar();
while(choix =='O' || choix =='o'){
puts("Entrer une note : ");
scanf("%f",&note);
ptr_debut = ajouter(ptr_debut,note);
puts("Voulez vous continuer : ");
scanf(" %c",&choix);
}
return ptr_debut;
}
void afficher(notee *ptr_debut){
notee *p;
puts("Les notes saisies sont ");
for(p=ptr_debut;p!=NULL;p=(*p).suivant){
printf("%f |",(*p).note);
}
}
int main(){
notee *e;
e=saisieListe();
afficher(e);
puts("");
return 0;
}
