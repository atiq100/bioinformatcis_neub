#include<stdio.h>

int main()
{
    int n, i=0, a=0, c=0, g=0, u=0;
    char rna[100];

    printf("Enter RNA sequence: ");

    scanf("%s", &rna);

    int total_nucleotides = strlen(rna);

    for(i=0; i<total_nucleotides; i++)
    {
        if(rna[i]=='A') a++;

        else if(rna[i]=='U') u++;

        else if(rna[i]=='G') g++;

        else if(rna[i]=='C') c++;

    }

    printf("Total nucleotides = %d\n", total_nucleotides);
    printf("A = %d\nC = %d\nG = %d\nU = %d\n", a, c, g,u);

    return 0;
}
