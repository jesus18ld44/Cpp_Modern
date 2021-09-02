#include <iostream>
#include <string>

using namespace std;
using std::string;

int main(int argc, const char** argv) {
 
    unsigned cnt = 42;
    constexpr unsigned sz = 3;

    int arr[10];          // array of 10 ints
    int *parr[sz];          // array of 42 pointers to int

    int a1[sz] = {0,1,2};
    int a2[] = {0,1,2};
    int a3[5] = {0,1,2};    // equivalent to a3[] = {0,1,2,0,0}

    string a4[3] = {"hi", "bye"};   // equivalent to a4[] = {"hi", "bye", ""}

    // complicated array declarations
    int *ptrs[10];              // ptrs is an array of ten pointers to int
    int (*pArray)[10] = &arr;   // pArray points to an array of ten ints
    // it can be easier to read array declarations from the inside out
    // Inside the parenthesis mean that pArray is a pointers
    // Looking right, we see that pArray points to an array of size 10
    // looking left, we see that the elements in that array are ints
    // pArray is a pointer to an array of ten ints

    int (&arrRef)[10] = arr;    // arrRed refers to an array of ten ints
    int *(&arry)[10] = ptrs;
    // arry is a reference
    // looking right, we see that the object to which arry refers is an array of size 10
    // looking left, we see that the element type is pointer to int
    // Thus, arry is a reference to an array of 10 pointers


    

    return 0;
}