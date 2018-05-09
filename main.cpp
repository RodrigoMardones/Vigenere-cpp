#include <iostream>
#include <string>
#include "Vigenere.h"
#include <bits/stdc++.h>

using namespace std;


int main(){

    int op;
    Vigenere a;
    string b = "";
    do{
        cout <<"---------------------"  << endl;
        cout <<" Encriptado Vigenere"  << endl;
        cout <<"---------------------"  << endl;
        cout <<"|1) Encriptar dato"  << endl;
        cout <<"|2) Desencriptar dato"  << endl;
        cout <<"|3) establer pass"  << endl;
        cout <<"|0) salir"  << endl;
        cout << "-------------------"   << endl;
        cin >> op;
        switch(op){
            case 1:
                cout << "Ingrese frase en mayusculas:" ;
                cin >> b;
                //se debe capitalizar
                b = a.encriptar(b);
                cout << "Valor encriptador : " << b << endl;
            break;
            case 2:
                cout << "Ingrese frase en mayusculas:" ;
                cin >> b;
                b = a.desencriptar(b);
                cout << "Valor desencriptado : " << b << endl;
            break;
            case 3:
                cout << "Ingrese frase en mayusculas:" ;
                cin >> b;
                a.set_pass(b);
            break;
            case 0:
            break;
        }
    }while(op!=0);
}
