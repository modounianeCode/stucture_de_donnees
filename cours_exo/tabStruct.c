#include<stdio.h>
typedef struct cellule{
char prenom[30],nom[30];
float note;
int age;
} gestion;
int main(){
int n;
do{
printf("Entrer le nombre d'etudiants a gerer : ");
scanf("%d",&n);
}while(n<0);
gestion etudiant[n];
int i;
puts("::::::::::::::::::::::::::::::::::::::::::::::::::::::");
puts("::::::::::::::::::Remplir les donnees ::::::::::::::::");
puts("::::::::::::::::::::::::::::::::::::::::::::::::::::::");
for(i=0;i<n;i++){
printf("Donnee de l'etudiant %d\n",i+1);
printf("Entrer votre prenom : "); 
scanf("%s",etudiant[i].prenom);
printf("Entrer votre nom : "); 
scanf("%s",etudiant[i].nom);
printf("Entrer votre note : "); 
scanf("%f",&etudiant[i].note);
printf("Entrer votre age : "); 
scanf("%d",&etudiant[i].age);
}
puts("::::::::::::::::::::::::::::::::::::::::::::::::::::::");
puts("::::::::::::::::::Afficher les donnees ::::::::::::::::");
puts("::::::::::::::::::::::::::::::::::::::::::::::::::::::");
for(i=0;i<n;i++){
printf("::::::::Etudiant %d::::::::\n ",i+1);
printf("prenom : %s\n nom : %s\n age : %d ans\n note : %f\n",etudiant[i].prenom,etudiant[i].nom,etudiant[i].age,etudiant[i].note);
}
return 0;
}

