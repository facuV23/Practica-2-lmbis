#include <stdint.h>

int32_t Sumar_Array (int16_t* x, int16_t xn){

int32_t resutado=0;

for (int i = 0; i < xn; i++)
{
    resutado=x[i]+resutado;
}

return resutado;

}

int16_t Multiplicar_Sat (int16_t n1, int16_t n2){

int32_t resutado=n1*n2;
// agg lo de saturado aca (ponele)
return resutado;

}