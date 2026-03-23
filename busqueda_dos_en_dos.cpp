#include<iostream>
#include<vector>
#include<algorithm> //para max y min

using namespace std;

int busqueda_de_2_en_2(const vector<int>& lista, int n, int objetivo){
    int i=0,j;        

    //avanzando de 2 en 2
    while(i<=n-1&&lista[i]<objetivo){
        i=i+2;    
    }

    //retrocediendo 1
    i=i-1;

    //revisando i y i+1
    for(j=max(i,0);j<=min(n-1,i+1);j=j+1){
        if(lista[j]==objetivo){
            return j;
        }
    }

    return -1;
}

int main(){
    int n, i, objetivo, resultado;

    cin>>n;

    if(n<=0){
        cout<<"el tamaño debe ser positivo";
        return 1;
    }

    vector<int> lista(n);   //creando el vector de tamaño n

    for(i=0;i<=n-1;i=i+1){
        cin>>lista[i];
    }    

    cin>>objetivo;

    resultado=busqueda_de_2_en_2(lista, n, objetivo);

    cout<<resultado<<endl;

    return 0;
}








