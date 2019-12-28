#include <iostream>
#include <string>
/*
TODO: impement tree structure to the codon
*/
using namespace std;

#include <iostream>
using namespace std;

//declaration for new tree node
struct node  { 
string codon; 
struct node *A; 
struct node *G;
struct node *C;
struct node *U; 
}; 
  
//allocates new node 
struct node* newNode(string codon) { 
  // declare and allocate new node  
  struct node* node = new struct node(); 
  
  node->codon = codon;    // Assign codon to this node
  
  // Initialize A and G children as NULL 
node->A = NULL; 
node->G = NULL; 
node->C = NULL;
node->U = NULL;
return(node); 
} 
  
int codontree(string codon) { 
  /*create root node*/
struct node *rootNode = newNode(codon[0]);  
cout<<"General tree created is as follows:"<<endl;
cout<<"\t\t\t "<<rootNode->codon<<endl;
cout<<"\t\t\t "<<"/ "<<"\\"<<endl; rootNode->A        = newNode(codon[1]); 
rootNode->G       = newNode("C"); 
cout<<"\t\t\t"<<rootNode->A->codon<<"  "<<rootNode->G->codon;
cout<<endl; rootNode->A->A  = newNode(codon[2]); 
cout<<"\t\t\t"<<"/"<<endl;
cout<<"\t\t      "<<rootNode->A->A->codon;
   
return 0; 
}