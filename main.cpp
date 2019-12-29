#include <iostream>
#include <string>
#include "decoder.h"
using namespace std;

string codon;

void interface(){
    cout << "Enter a codon: " << endl;
    cin >> codon;
    if (codon.length()==3)
    {
        codon = decoder(codon); // function that decodes codon into an amino acid from a sequence of G,U,A,C characters.
        cout << "your codon is : " << codon << endl; // return result from codon as an amino acid or stop.
    }
    else
    {
        cout << "Error: your codon must be 3 characters long." << endl; // return error when codon is not 3 characters long.
    }
    
}



int main(){
    interface();
    return 0;

}