#include<stdio.h>
void inserer(int t[],int n,int vi){
*(t+n) = vi;
int k = n;
for(int i=1;i<=n;i++){
while(k>0 && t[k-1]>vi){
t[k]=t[k-1];
k--;
}
t[k]=vi;
}
puts("----tableau apres insertion de l'element----");
for(int i=0;i<=n;i++){
printf("%d |",t[i]);
}
puts("");
}

void saisir(int t[],int n,int vi){
puts("---------- saisir les elements du tableau ----------");
for(int i=0;i<n;i++){
printf("t[%d]:",i+1);
scanf("%d",&t[i]);
}
}
int main(){
int taille,vi;
printf("Entrer la taille du tableau : ");
scanf("%d",&taille);
int t[taille];
printf("Entrer la valeur a inserer : ");
scanf("%d",&vi);
saisir(t,taille,vi);
inserer(t,taille,vi);
return 0;
}
