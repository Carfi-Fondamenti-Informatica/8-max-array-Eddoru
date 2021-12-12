#include <iostream>
#include "lib.h"

int main() {
int dimensione;
std::cin >> dimensione;
float num [dimensione];
for(int i=0; i<dimensione; i++){

    std::cin>> num[i];
}
    numMAX(num,dimensione);

std::cout << numMAX(num,dimensione) << std::endl;

return 0;
}
