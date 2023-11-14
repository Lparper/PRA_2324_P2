#include<vector>
#include "DyV.h"



int main(){
std::vector<int> a{0, 2, 5, 7, 11};
std::vector<float> b{2.1, 3.4, 7.9, 8.0};
std::vector<short> c{1, 2, 3};

std::cout << "Busqueda Binaria Int: "<< BusquedaBinaria(2, a, 0, 4) << "\n";
std::cout << "Busqueda Binaria Double: "<<BusquedaBinaria(2.2, b, 0, 3) << "\n";
std::cout << "Busqueda Binaria Short: "<<BusquedaBinaria(1, c, 0, 2) << "\n";

}
