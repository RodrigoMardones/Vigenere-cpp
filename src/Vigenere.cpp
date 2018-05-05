#include "Vigenere.h"
#include <string>
#include <iostream>
using namespace std;


Vigenere::Vigenere(){
    //ctor
}

Vigenere::Vigenere(string a){
    pass = a;
}

Vigenere::~Vigenere(){
    //dtor
}
void Vigenere::set_pass(string a){
    pass = a;
}

