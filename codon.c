#include<stdio.h>
main()
{
    char seq[100],com[100];
    int i,k;
    printf("enter the sequence");
    scanf("%s",&seq);
    int n=strlen(seq);
    for(k=0;k<n;k=k+3){
        for (i=k;i<k+3;i++){
            printf("%c",seq[i]);
        }
    printf("\n");
}
}
