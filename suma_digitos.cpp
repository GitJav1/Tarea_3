#include<iostream>

using namespace std;

int main(){
    int entero,digito,suma=0;

    cin>>entero;

    while(entero>0){
        digito=entero%10;
        entero=entero/10;
        suma=suma+digito;
    }

    cout<<suma<<endl;

    return 0;
}

