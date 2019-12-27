#include <iostream>
#include <string>
#include "decoder.h"
using namespace std;

string codon;

int interface(){
    cout << "Enter a codon: " << endl;
    cin >> codon;
    decoder(codon);
    cout << "your codon is : " << codon << endl;
    return 0;
}



int main(){
    interface();

    return 0;

}