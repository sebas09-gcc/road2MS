#include <bits/stdc++.h>
using namespace std;


int main(){
    string cad_numero;
    cin>>cad_numero;
    int num_int=0;
    for(int i=0;i<cad_numero.length();i++){
        if(cad_numero[i]=='I'){
            if((cad_numero[i+1]=='V' ||  cad_numero[i+1]=='X') && i<=cad_numero.length()-1){
                num_int-=1;
            }
            else num_int+=1;
        }
        else if (cad_numero[i]=='X'){
            if((cad_numero[i+1]=='L' ||  cad_numero[i+1]=='C') && i<=cad_numero.length()-1){
                num_int-=10;
            }
            else num_int+=10;
        }
        else if (cad_numero[i]=='C'){
            if((cad_numero[i+1]=='D' ||  cad_numero[i+1]=='M') && i<=cad_numero.length()-1){
                num_int-=100;
            }
            else num_int+=100;
        }
        else if (cad_numero[i]=='V')num_int+=5;
        else if (cad_numero[i]=='L')num_int+=50;
        else if (cad_numero[i]=='D')num_int+=500;
        else if (cad_numero[i]=='M')num_int+=1000;
    }
    cout<<num_int;
    return 0;
}