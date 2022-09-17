#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;
string find_Amino_Acid(string codon)
{
    if(codon == "UUU" || codon == "UUC") return "Phe";
    else if(codon == "UUA" || codon == "UUG") return "Leu";
}
int main()
{
    string rna, codon="";
    cin >> rna;
    int len = rna.length();
    for(int i=0; i<len; i+=3)
    {
        codon = rna.substr(i, 3);
        cout << codon << " -> " << find_Amino_Acid(codon) << "\n";
    }
    return 0;
}