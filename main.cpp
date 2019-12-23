#include <iostream>
using namespace std;


string n;


int readInput(){
    cout << "Enter a codon: " << endl;
    cin >> n;
    cout << "your codon is " << n << endl;

    return 0;
}



int main(){
    
    readInput();
    return 1;
}