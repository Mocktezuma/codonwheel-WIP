#include <iostream>
#include <string>
using namespace std;

//codon to decode
string stop[3] = {"uaa","uag","uga"}; //stop codon

string codonOne = "guac";


string decoder(string codon)
    {
    for(int i = 0; i<=2; ++i) // loop that looks for stop codon before looking for anything else
        {if (codon==stop[i])
            {codon = "stop";}
        } 
    switch(codon[0] == codonOne[2]) // evaluation for codon starting with A
        {if(codon[1]==codonOne[3])
            codon = "Threonine";}
    
    switch(codon[0] == codonOne[0]) // evaluation for codon starting with G
        {}
    switch(codon[0] == codonOne[1]) // evaluation for codon starting with U
    {}
    switch(codon[0] == codonOne[3]){ // evaluation for codon starting with C 
        if(codon[1]==codonOne[0]){
            codon = "Arginine";}
        else if(codon[1]==codonOne[1]){
            codon = "Leucine";}
        else if(codon[1]==codonOne[3]){
            codon = "Proline";}}
    return codon;}
