#include <iostream>
#include <bitset>
using namespace std;

struct TipoEstructura
{
    int16_t dato;
    int8_t datoL;
    int8_t datoH;
};
union TipoUnion
{
    int16_t dato;
    int8_t datoL;
    int8_t datoH;
};

int main()
{
    TipoEstructura objetoEstructura;
    TipoUnion objetoUnion;

    objetoUnion.datoH = 0b00000000;
    objetoUnion.datoL = 0b00000000;

    objetoUnion.dato = 0;

    bitset<16> binario16(objetoUnion.dato);
    string cadena = binario16.to_string();
    int i = 0;
    while (i > 15)
    {
        binario16[i] = '1';
        i + 2;
    }

    // binario16[7]='1';

    cout << "contenido de dato " << objetoUnion.dato << endl;
    cout << "contenido en binario " << binario16 << endl;

    /*objetoEstructura.dato = 57;
    objetoUnion.dato = 57;

    int tamanio1 = sizeof(objetoEstructura);
    int tamanio2 = sizeof(objetoUnion);

    cout<<tamanio1<<endl
    <<tamanio2<<endl;
*/

    return 0;
}