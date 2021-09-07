#include <iostream>
#include <chrono>

using namespace std;

constexpr size_t sz = 100;

int *returnPointer() {
    int *ptr = new int[sz]; 
    for (size_t idx = 0; idx != sz; ++idx) {
        *(ptr+idx) = idx;
    }
    return ptr;
}

/*
* Devuelve suma de 2 arrays
* la longitud del array debe ser 4
*/
int *sumaArrays(const int *arr1, const int *arr2) {
    int *ret = new int[sz];
    for (size_t idx = 0; idx != sz; ++idx) {
        *(ret+idx) = *(arr1+idx) + *(arr2+idx);
    }
    return ret;
}

void printArray4(const int *array) {
    cout << "Longitud array: " << sz << endl;
    for (size_t i = 0; i != sz; ++i)
        cout << *(array+i) << " ";
    cout << endl;
    
}

void initArray(int *arr, int val) {
    for (size_t i = 0; i != sz; ++i){
        *(arr+i) = val;
    }
}

int main(int argc, const char** argv) {
 
    int *ptr = returnPointer();
    cout << "Prueba: " << ptr[1] << endl;

    auto start_time = chrono::high_resolution_clock::now();

    int arr1[sz], arr2[sz];
    initArray(arr1, 10);
    initArray(arr2, 15);

    const int *res = sumaArrays(arr1,arr2);
    printArray4(res);

    auto end_time = chrono::high_resolution_clock::now();
    chrono::duration<double> elapsed_seconds = end_time - start_time;
    cout << "Tiempo: " << elapsed_seconds.count() << endl;

    delete[] ptr;
    delete[] res;
    return 0;
}