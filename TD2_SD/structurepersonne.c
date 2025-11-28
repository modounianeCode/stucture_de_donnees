#include<stdio.h>
typedef struct personne{
char nom[10];
char prenom[20];
char adresse[60];
int age;
int sexe;//booleen (0 ou 1)
} human;
int main(){
human p;
puts("Informations personnelles");
puts("Entrer votre nom ");
scanf("%s",p.nom);
puts("Entrer votre prenom ");
scanf("%s",p.prenom);
puts("Entrer votre adresse ");
scanf("%s",p.adresse);
puts("Entrer votre age ");
scanf("%d",&p.age);
puts("Sexe \n homme = 0 \t femme = 1");
do{
puts("Entrer votre sexe ");
scanf("%d",&p.sexe);
} while(p.sexe !=1 && p.sexe != 0);
puts("Personne infos");
if(p.sexe == 0){
printf("prenom\tnom\tage\tadresse\tsexe\n");
printf("%s\t%s\t%d\t%s\thomme\n",p.prenom,p.nom,p.age,p.adresse);
}
else {
printf("%s\t%s\t%d\t%s\tfemme\n",p.prenom,p.nom,p.age,p.adresse);
}
}

