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
    //comparacion de caracater por caracter para el encriptado del dato
    for(int i=0;i<palabra.size();i++){
        //evaluado del dato
        int a = (palabra[i] + ret[i])%26;
        //conversion a acsii
        a+='A';
        //sumado a atributo encriptado
        enc+=a;
    }
    return enc;
}

string Vigenere::desencriptar(string palabra){

    string ret = largo(palabra);
    string des = "";

    for(int i=0;i<palabra.size();i++){
        int a = (enc[i]-ret[i] + 26 )%26;
        a+='A';
        des+=a;
    }
    //limpia encriptado
    enc = "";
    return des;
}
Vigenere::~Vigenere(){
    //dtor
}
