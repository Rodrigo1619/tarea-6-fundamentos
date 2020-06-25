#include "iostream"
#include "conio.h"
using namespace std;

int main ()
{
    cout<<endl<<"Tamanho de arreglo con su suma y promedio"<<endl<<endl;
    int x;
    int suma=0;
    float promedio=0;
    cout<<"Ingrese el tamanho de su arreglo: "<<endl; //generando el tamaño del arreglo
    cin>>x;
    int valores[x];
    cout<<"Ingrese los numeros segun el tamanho que le dio al arreglo: "<<endl;
    
    for (int i=0;i<x; i++)
    {
        cin>>valores[i];
    }
    cout<<"El tamanho del arreglo es: "<<endl; //definiendo el tamaño del arreglo para el usuario
    for (int i=0; i<x; i++)
    {
        cout<<valores[i]<<endl;
    }
    for (int i=0; i<x; i++)
    {
        suma+=valores[i]; //haciendo la suma del arreglo segun sus componentes
    }
    cout<<"La suma del arreglo es: "<<endl<<suma<<endl;
    for (int i=0; i<x;i++)
    {
        promedio= suma/x;  //haciendo el proemdio de todos esos componentes 
    }
    cout<<"El promedio del arreglo es: "<<endl<<promedio<<endl;

    getch ();
    return 0;
}
