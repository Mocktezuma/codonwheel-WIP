#include <iostream>
#include <string>
using namespace std;

//codon to decode
string stop[3] = {"uaa","uag","uga"}; //stop codon

string decoder(string codon)
    {
    for(int i = 0; i<=2; ++i) 
        {
        if (codon==stop[i]){
            codon = "stop";
            cout << "your codon is :" << codon << endl;
        }
        }
    return codon;
    }