#include<stdio.h>
#include<stdlib.h>
void remplir(int *t, int n){
int *p,i=1;
puts("Remplir le tableau ");
for(p=t;p<t+n;p++){
printf("t[%d] = ",i);
scanf("%d",p);
i++;
}
}
void trier_croissant(int *t, int n){
int i,j,x;
for(i = 0;i<n-1;i++){
for(j=i+1;j<n;j++){
if(t[i]>t[j]){
x=t[i];
t[i]=t[j];
t[j]=x;
}
}
}
}
int main(){
puts("Programme permettant de trier un tableau de facon croissante");
printf("Entrer la taille du tableau : ");
int taille;
scanf("%d",&taille);
int *t;
t = (int*) malloc(taille*sizeof(int));
remplir(t,taille);
trier_croissant(t,taille);
puts("Tableau trie");
for (int i = 0;i<taille;i++){
printf("%d |",t[i]);
}
return 0;
}
