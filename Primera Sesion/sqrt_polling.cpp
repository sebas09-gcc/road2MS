#include <bits/stdc++.h>
using namespace std;

int sqr(int x){
    if(x<2) {
        return x;
    }
    int i=1;
    while(i<=x/i) {
        i++;
    }
    return i-1;
}

int main(){
    int x;
    cin>>x;
    //cout<<pow(x,0.5);
    cout<<sqr(x);
    return 0;
}

