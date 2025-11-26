#include<stdio.h>
#include<string.h>
int palindrome(char s[],int g,int d){
char *p = s;
if(g>=d) return 1;
if(*(p+g) ==' ') return palindrome(s,g+1,d);
if(*(p+d) ==' ') return palindrome(s,g,d-1);
if(s[g] != s[d]) return -1;
if(s[g] == s[d] ) return palindrome(s,g+1,d-1);
}
int main(){
char string[30];
int g=0,d;
printf("Entrer le mot ou la phrase que vous voulez : ");
fgets(string,30,stdin);
d= strlen(string)-2;
printf("%d\n",d);
int resultat = palindrome(string,g,d);
if(resultat == -1 ) printf("Le mot %s n'est pas palindrome\n",string);
else printf("Le mot %s est palindrome\n",string);
return 0;
}
