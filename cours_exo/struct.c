#include<stdio.h>
typedef struct etudiant{
char *nom;//pointeur en lecture seule chaine litterale
char prenom[20];//tableau de caracteres
int age ;
float taille;
char filiere[20];
int carte_etudiant;
} e;
int main(){
e etudiant1;
puts("Remplir vos informations");
puts("-------------------------");
puts("-----Informations--------");
puts("-------------------------");
etudiant1.nom = "Modou";
printf("Entrer votre prenom : ");
scanf("%s",etudiant1.prenom);
printf("Entrer votre age : ");
scanf("%d",&etudiant1.age);
printf("Entrer votre taille : ");
scanf("%f",&etudiant1.taille);
printf("Entrer votre filiere : ");
scanf("%s",etudiant1.filiere);
printf("Entrer votre numero de carte etudiant : ");
scanf("%d",&etudiant1.carte_etudiant);
puts("----------------------------------");
puts("-----Informations affiches--------");
puts("----------------------------------");
printf("Bonjour ,%s %s, vous avez %d ans et votre taille est  %f. Vous etes dans la filiere %s et votre numero de carte etudiant est %d\n",etudiant1.nom
,etudiant1.prenom,etudiant1.age,etudiant1.taille,etudiant1.filiere,etudiant1.carte_etudiant);
return 0;
}
