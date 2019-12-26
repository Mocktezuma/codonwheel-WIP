#include <iostream>
#include <string>


std::string codon; //codon to decode

std::string stop[3] = {"uaa","uag","uga"}; //stop codon

string decoder(string codon)
    {
    for(int i = 0; i<=3; ++i) 
        {
        if (codon=stop[i])
            codon = "stop";
            return codon;
        }
    return 0;
    }
