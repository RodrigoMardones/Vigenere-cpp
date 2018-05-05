#ifndef VIGENERE_H
#define VIGENERE_H
#include <string>
#include <iostream>
using namespace std;


class Vigenere
{
    public:

        Vigenere();
        void set_pass(string a);
        string encriptar(string a );
        string desencriptar(string a);
        virtual ~Vigenere();

    protected:
        //dato a encriptar
        string data = "";
        //clave de encriptacion
        string pass = "";
        //dato encriptado
        string enc = "";
    private:

};

#endif // VIGENERE_H
