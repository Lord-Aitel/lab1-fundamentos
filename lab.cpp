#include<iostream>
#include <Contador.h>

using namespace std;

int main()
{
    Contador Contador(100);

    Contador.Incrementar(10);
 
    cout << Contador.argumento << endl;
    
    Contador.Decrementar(20);
    
    cout << Contador.argumento << endl; 

}