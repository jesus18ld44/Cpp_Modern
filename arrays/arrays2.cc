#include <iostream>
#include <string>

using namespace std;
using std::string;

int main() {

    constexpr unsigned sz = 5;
    int arr[]{0,1,2,3,4};

    int (*ptrArr)[sz] = &arr;
    int *ptr = arr;

    // for (auto idx : *ptrArr)
    //     cout << idx << endl;

    cout << "*ptrArr: " << **ptrArr << " " << "ptrArr: " << ptrArr << " " << "ptrArr++: " << ptrArr++ << endl;
    cout << "ptr: " << *ptr << " " << "ptr++" << ptr++ << endl;

    return 0;
}
