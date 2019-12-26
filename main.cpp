#include <iostream>
using namespace std;


string codon;


int readInput(){
    cout << "Enter a codon: " << endl;
    cin >> codon;
    cout << "your codon is " << codon << endl;

    return 0;
}



int main(){
    readInput();
    return 1;
}