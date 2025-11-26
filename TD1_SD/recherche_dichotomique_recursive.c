#include<stdio.h>
void saisir(int t[],int n){
  puts("Remplir le tableau ");
  printf("t[%d]:",1);
  scanf("%d",&t[0]);
  for(int i=1;i<n;i++){
  index : 
  printf("t[%d]:",i+1);
  scanf("%d",&t[i]);
  while(t[i-1] >= t[i]){
  printf("Le tableau doit etre trie ! . Entrer un nombre plus grand!!!\n");
  goto index;
  }
  }
}
void afficher(int *t,int n){
puts("::::::::  Affichage du tableau  :::::::");
for(int i = 0; i < n;i++){
printf("%d |",t[i]);
}
}
int recherche_dichotomie_recursive(int t[],int g, int d, int elt){
int m = (g+d)/2;
if(g>d) return -1;
if(elt>t[m]) return recherche_dichotomie_recursive(t,m+1,d,elt);
if(elt<t[m]) return recherche_dichotomie_recursive(t,g,m-1,elt);
if(elt == t[m]) return elt;
}
int main(){
int n;
printf("Entrer la taille du tableau : ");
scanf("%d",&n);
int t[n];
int g=0,d=n-1;
int elt;
saisir(t,n);
afficher(t,n);
puts("");
printf("Entrer l'element a rechercher : ");
scanf("%d",&elt);
int resultat = recherche_dichotomie_recursive(t,g,d,elt);
if(resultat == -1) printf("%d n'est pas dans le tableau\n",elt);
else printf("%d est dans le tableau\n",elt);
return 0;
}
