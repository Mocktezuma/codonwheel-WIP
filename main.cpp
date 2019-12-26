#include <iostream>
#include <string>
#include "decoder.h"
using namespace std;


int interface(string codon){
    cout << "Enter a codon: " << endl;
    cin >> codon;
    codon = decoder(codon);
    cout << "your codon is " << codon << endl;

    return 0;
}



int main(){
    interface(codon);

    return 0;

}