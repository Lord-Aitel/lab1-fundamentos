#include<iostream>
#include <Contador.h>

Contador::Contador(int argumento)
{
    this->argumento = argumento;
}
string  Contador::Incrementar(int num){
    
    argumento = 0;

    for(int i;  i=num; i++)
    {
        argumento += i;
    }

    cout<< argumento;
}
/*
string Contador::Decrementar(int num){
    
}
*/