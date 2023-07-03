<<<<<<< HEAD
#include <iostream>
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
    cout << objetoUnion.dato << endl;
    /*objetoEstructura.dato = 57;
    objetoUnion.dato = 57;

    int tamanio1 = sizeof(objetoEstructura);
    int tamanio2 = sizeof(objetoUnion);

    cout<<tamanio1<<endl
    <<tamanio2<<endl;
*/

    return 0;
=======
#include <iostream>
using namespace std;

struct TipoEstructura{
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
    cout<<objetoUnion.dato<<endl;
    /*objetoEstructura.dato = 57;
    objetoUnion.dato = 57;

    int tamanio1 = sizeof(objetoEstructura);
    int tamanio2 = sizeof(objetoUnion);

    cout<<tamanio1<<endl
    <<tamanio2<<endl;
*/

    return 0;
>>>>>>> fb5e4637af840f06141db36e2ff03df2a8ab14a3
}