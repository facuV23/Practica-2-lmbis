#include <iostream>
#include "matematica.h"

using namespace std;

int main (void){


int16_t n=0;


    cout<<"querio sumar 1,1,1,1"<<endl;
    int16_t x[]={1,1,1,1};
    cout<<"resultado:"<<Sumar_Array(x,4)<<endl;

    cout<<"querio sumar 1,1,1,1,2,6,-10"<<endl;
    int16_t x1[]={1,1,1,1,2,6,-10};
    cout<<"resultado:"<<Sumar_Array(x1,7)<<endl;
    
    

}