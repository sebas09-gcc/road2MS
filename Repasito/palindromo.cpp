#include <bits/stdc++.h>
using namespace std;

int main(){
    string cadena;
    cin>>cadena;
    bool flag = true;
    cadena.erase(remove(cadena.begin(), cadena.end(), ' '), cadena.end()); // Eliminar espacios en blanco
    transform(cadena.begin(), cadena.end(), cadena.begin(), ::toupper);    // Pasar a mayuscula
    for(int i=0,j=cadena.length();i<cadena.length();i++,j--){
        if(cadena[i]!=cadena[j-1]){
            flag=false;
        }
    }

    cout<<flag;
    return 0;
}