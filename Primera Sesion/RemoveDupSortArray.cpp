#include <bits/stdc++.h>
using namespace std;


int main(){
    int array[] = {0,0,1,1,1,2,2,3,3,4};

    int sizeArray = sizeof(array)/sizeof(int);

    int j=0;
    for(int i=0;i<sizeArray;i++){
        if(array[i]==array[i+1] && i<sizeArray){
            array[i]=-1;
        }
        j++;
    }
    int arr[j];
    int z=0;
    for(int i=0;i<sizeArray;i++){
        if(array[i]!=-1){
            arr[z]=array[i];
            z++;
        }
    }
    for(int i=0;i<z;i++){
        cout<<arr[i];
    }
    cout<<endl<<"Cantidad de elementos: "<<z<<endl;

    //Forma 0(1) - std
    //nums.erase( unique( nums.begin(), nums.end() ), nums.end() );
    //return nums.size();
}