#include<stdio.h>
main(){
char seq[100],com[100];
int i;
printf("Enter the sequence:");
scanf("%s",&seq);
int n=strlen(seq);
for (i=0;i<n;i++)
{
 if(seq[i]=='A')
        com[i]='T';
        else if(seq[i]=='T')
        com[i]='A';
        else if(seq[i]=='G')
        com[i]='C';
        else if(seq[i]=='C')
        com[i]='G';
        else{
        continue;
        }

}
for (i=0;i<n;i++)
{
printf("%c",com[i]);
}
}
