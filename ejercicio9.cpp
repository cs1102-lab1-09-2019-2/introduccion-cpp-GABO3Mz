#include <iostream>
using std::cout;
using std::endl;

int main() {

    int i = 1;
    while (i <= 10) {
        if (i%2==0) {
            //imprimir numeros pares verticalmente
            cout<<i<<endl;
        }
        i++;

    }
    return 0;
}
