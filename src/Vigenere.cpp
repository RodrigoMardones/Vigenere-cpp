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

void Vigenere::set_pass(string a){
    pass = a;
}

string Vigenere::largo(string palabra){

    int val = palabra.size();
    //valor a retornar
    string ret = "";
    for(int i= 0; ;i++){
        if(val==0){
            i = 0;
        }
        if(pass.size() == palabra.size()){
            break;
        }
        ret+=pass[i];
    }
    return ret;
}

string Vigenere::encriptar(string palabra){
    //clave alargada para evaluar
    string ret = largo(palabra);
    for(int i=0;i<palabra.size();i++){
        int a = (palabra[i] + ret[i])%26;
        a+='A';
        enc+=a;
    }
    return enc;
}

string Vigenere::desencriptar(string palabra){

}
Vigenere::~Vigenere(){
    //dtor
}
