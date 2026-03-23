#include<iostream> 
#include<string> //para getline
#include<cctype> //para tolower

using namespace std;

int main(){
    string linea;
    int i, contador=0;
    char caracter;

    getline(cin,linea);

    for(i=0;i<linea.length();i=i+1){
        caracter=linea[i];

        caracter=tolower(caracter); //facilita la verificacion

        //verificacion
        if(caracter=='a'||caracter=='e'||caracter=='i'||caracter=='o'||caracter=='u'){
        contador=contador+1;
        }
    }

    cout<<contador<<endl;

    return 0;
}


