#include<stdio.h>

int main()
{
    int n, i=0, a=0, c=0, g=0, t=0;
    char dna[100];

    printf("Enter DNA sequence: ");

    scanf("%s", &dna);

    int total_nucleotides = strlen(dna);

    for(i=0; i<total_nucleotides; i++)
    {
        if(dna[i]=='A') a++;

        else if(dna[i]=='T') t++;

        else if(dna[i]=='G') g++;

        else if(dna[i]=='C') c++;

    }

    printf("Total nucleotides = %d\n", total_nucleotides);
    printf("A = %d\nC = %d\nG = %d\nT = %d\n", a, c, g, t);

    return 0;
}
