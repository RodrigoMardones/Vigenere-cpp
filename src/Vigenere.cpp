#include "Vigenere.h"
#include <string>
#include <iostream>
#include <bits/stdc++.h>

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

string Vigenere::llave(string palabra){

    int x = palabra.size();
    //valor a retornar
    string ret = pass;
    for(int i= 0; ;i++){
        if(x == 0)
            i = 0;
        if( ret.size() == palabra.size())
            break;
        ret.push_back(ret[i]);
    }
    return ret;
}

string Vigenere::encriptar(string palabra){
    //clave alargada para evaluar
    string key = llave(palabra);
    string cifrado;
    //comparacion de caracater por caracter para el encriptado del dato
    for( int i=0 ; i<palabra.size() ; i++ ){
        //evaluado del dato
        int a = (palabra[i] + key[i])%26;
        //conversion a acsii
        a += 'A';
        //sumado a atributo encriptado
        cifrado.push_back(a);
    }
    return cifrado;
}

string Vigenere::desencriptar(string cifrado){

    string key = llave(cifrado);
    string origin;

    for( int i=0 ; i<cifrado.size() ; i++ ){

        int a = (cifrado[i] - key[i] + 26 )%26;

        a += 'A';

        origin.push_back(a);
    }
    //limpia encriptado
    return origin;
}
Vigenere::~Vigenere(){
    //dtor
}
