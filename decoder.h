#include <iostream>
#include <string>
using namespace std;

//codon to decode
string stop[3] = {"uaa","uag","uga"}; //stop codon

string codonOne = "guac";


string decoder(string codon)
    {
    for(int i = 0; i<=2; ++i) // loop that looks for stop codon before looking for anything else
        if (codon==stop[i])
            codon = "stop";
    if(codon[0] == codonOne[2])
        if(codon[1]==codonOne[3])
            codon = "Threonine";
    return codon;
    }