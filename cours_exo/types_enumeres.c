#include<stdio.h>
enum jour{lun,mar,mer,jeu,ven,sam,dim};
typedef enum jour day;
void afficher_jour(day d){
switch (d) {
case dim : printf("Dimanche"); break;
case lun : printf("Lundi"); break;
case mar : printf("Mardi"); break;
case mer : printf("Mercredi"); break;
case jeu : printf("Jeudi"); break;
case ven : printf("Vendredi"); break;
case sam : printf("samedi"); break;
default : printf("%d est une erreur",d);break;
}
}
day jour_suivant(day d){
return (d+1);
}
int main(){
day jour = ven;
afficher_jour(jour);
printf("\n");
afficher_jour(7);
printf("\n");
afficher_jour(jour_suivant(jour));
printf("\n");
return 0;
}
