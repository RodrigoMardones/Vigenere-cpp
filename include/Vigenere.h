#ifndef VIGENERE_H
#define VIGENERE_H
#include <string>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;


class Vigenere
{
    public:
        Vigenere();
        //recibe como parametro a para setearlo como pass
        Vigenere(string a);
        void set_pass(string a);
        //recibe como parametro b para encriptar
        string encriptar(string palabra);
        //recibe como parametro b para desencriptar
        string desencriptar(string cifrado);
        //recalcula el largo para evaluar
        string llave(string palabra);

        virtual ~Vigenere();

    protected:

        //clave de encriptacion
        string pass = "TAQUION";
    private:

};

#endif // VIGENERE_H
