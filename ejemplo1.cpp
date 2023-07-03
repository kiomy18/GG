#include <iostream>
using namespace std;

int main()
{
    int8_t dato;
    int tamanio;

    dato = 49;
    tamanio = sizeof(dato); //cantidad de RAM en BYTES

    cout<<"Dato = "<<dato<<endl;
    cout<<"Tamanio = "<<tamanio<<" byte(s)"<<endl;

    return 0;
}