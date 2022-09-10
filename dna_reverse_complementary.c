#include<stdio.h>

main()
{
    int n;

    char seq[100], com[100];
    int i;


    printf("ENTER THE SEQUENCE:");
    scanf("%s",&seq);
    n = strlen(seq);

    for(i=0;i<n;i++)
    {
        if(seq[i]=='A')
        com[i]='T';
        else if(seq[i]=='T')
        com[i]='A';
        else if(seq[i]=='G')
        com[i]='C';
        else if(seq[i]=='C')
        com[i]='G';
        else if(seq[i]==' ')
        com[i]='_';
        else{
            continue;
        }
    }
    com[100]=strrev(com);
    for(i=0;i<n;i++){
    printf("%c",com[i]);
    }
}
