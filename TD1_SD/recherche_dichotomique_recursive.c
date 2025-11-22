#include<stdio.h>
void saisir(int t[],int n){
  puts("Remplir le tableau ");
  for(int i=0;i<n;i++){
  printf("t[%d]:",i+1);
  scanf("%d",&t[i]);
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
printf("Entrer l'element a rechercher : ");
scanf("%d",&elt);
int resultat = recherche_dichotomie_recursive(t,g,d,elt);
if(resultat == -1) printf("%d n'est pas dans le tableau\n",elt);
else printf("%d est pas dans le tableau\n",elt);
return 0;
}
