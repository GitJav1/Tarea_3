/*
Escribe un programa en pseudocodigo que lea un numero entero 2<=n<=10^6 e imprima "primo" sin el numero es primo, o "no primo" en caso contrario. 
*/

#include<iostream>
#include<cmath> //para sqrt(n)

using namespace std;

int main(){
    int n, k, i;
    bool factor=false;  //primo hasta que se demuestre lo contrario

    cin>>n;

    if(2<=n&&n<=1000000){
        k=int(sqrt(n));

        for(i=2;i<=k;i=i+1){
            if(n%i==0){
                factor=true;
                break;
            }
        }

        if(factor){
            cout<<"no primo"<<endl;
        }
        else{
            cout<<"primo"<<endl;
        }  
    }
    else{
        cout<<"numero fuera de rango"<<endl;
    }

    return 0;
}
