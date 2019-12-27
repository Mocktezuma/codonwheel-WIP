#include <iostream>
#include <string>
#include "codontree.h"
using namespace std;

//codon to decode
string stop[3] = {"uaa","uag","uga"}; //stop codon

string amino[] = {"aga","aug"};

string decoder(string codon)
    {
    for(int i = 0; i<=2; ++i) 
        {
        if (codon==stop[i]){
            codon = "stop";
            return codon;
        }
        return codon;
        }
    return codon;
    }