#include <iostream>
#include <string>
using namespace std;

//codon to decode
string stop[3] = {"uaa","uag","uga"}; //stop codon

string codonOneA[4] = {"ag","au","aa","ac"};
string codonOneG[4] = {"ga","gc","gu","gg"};
string codonOneC[4] = {"ca","cc","cu","cg"};
string codonOneU[4] = {"ua","uc","uu","ug"};

string decoder(string codon)
    {
    for(int i = 0; i<=2; ++i) // loop that looks for stop codon before looking for anything else
        if (codon==stop[i])
            codon = "stop";
    
    return codon;
    }