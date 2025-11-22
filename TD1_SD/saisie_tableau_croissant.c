#include<stdio.h>
void recherche_dichotomique(int t[],int n,int elt){
    int g=0,d=n-1,m;
    do{
    m = (g+d)/2;
    if(elt > t[m]) {g = m+1;}
    if(elt < t[m]) {d = m-1;}
    }while(g<=d && elt!=t[m]);
    if(t[m]==elt) printf("L'element %d est dans le tableau\n",elt);
    else printf("L'element %d n'est pas dans le tableau\n",elt);
}
void recherche_sequentielle(int t[],int n,int elt){
    int i,indice=-1;
   for(i = 0; i < n; i++){
   if(t[i]==elt){
   indice = i;
}
}
  if(indice != -1)
  {
  printf("L'element %d est dans le tableau\n",elt);
  }
  else
    {
  printf("L'element %d n'est pas dans le tableau\n",elt);
    }
}
void saisie_croissant(int t[],int n){
    int k=0;
    puts("Remplir le tableau ");
    printf("t[%d]:",k);
    scanf("%d",&t[k]);
    for(k = 1; k < n; k++){
    printf("t[%d]:",k);
    scanf("%d",&t[k]);
    while(t[k-1] >= t[k]){
    puts("Saisir un nombre plus grand");
    printf("t[%d]:",k);
    scanf("%d",&t[k]);
    }
    }
    puts("Tableau trie de facon croissante");
    for(k = 0; k<n;k++){
    printf("%d |",t[k]);
    }
}
int main(){
    int taille;
    printf("Entrer la taille du tableau : ");
    scanf("%d",&taille);
    int t[taille];
    saisie_croissant(t,taille);
    puts("");
    int elt;
    printf("Entrer l'element que vous rechercher : ");
    scanf("%d",&elt);
    //recherche_dichotomique(t,taille,elt);
    recherche_sequentielle(t,taille,elt);
   return 0;
}
