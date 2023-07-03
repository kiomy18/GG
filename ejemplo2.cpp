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

    objetoUnion.datoH = 0;
    objetoUnion.datoL = 127;
    bitset<16> binario16(objetoUnion.dato);

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