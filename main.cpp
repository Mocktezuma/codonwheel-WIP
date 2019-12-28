#include <iostream>
#include <string>
#include "decoder.h"
using namespace std;

string codon;

void interface(){
    cout << "Enter a codon: " << endl;
    cin >> codon;
    codon = decoder(codon);
    cout << "your codon is : " << codon << endl;
}



int main(){
    interface();
    return 0;

}