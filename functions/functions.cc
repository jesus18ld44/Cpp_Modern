#include <iostream>
#include <string>

using std::string;
using namespace std;


 void reset(int *ip) {
    *ip = 0;       // changes the value of the object to which ip points
    // ip = 0;        // changes the local copy of ip; the argument is unchanged
 }

// In C++ generally use reference parameters instead of pointers parameters
void reset_cpp (int &i) {
    i = 0;
}

bool isShorter(const string &s1, const string &s2) {
    return s1.size() < s2.size();
}

string::size_type find_char(const string &s, char c, string::size_type &occurs) {
    auto ret = s.size();
    occurs = 0;
    for (decltype(ret) i = 0; i != s.size(); ++i) {
        if (s[i] == c) {
            if (ret == s.size()) 
                ret = i;
            ++occurs;
        
        }

    }
    return ret;
}

void print(const int *arr) {
    if (arr)
        while (*arr)
            cout << *arr++;
}
void print(const int *beg, const int *end) {
    while (beg!=end)
        cout << *beg++ << endl;
}

int* sumaArrays(const int *array1, const int *array2) {
    
    decltype(sizeof(array1)/sizeof(*array1)) lon = sizeof(array1)/sizeof(*array1);
    int *res = new int[5];

    for (decltype(lon) idx = 0; idx != lon; ++idx) {
        *res = *array1 + *array2;
        ++array1;
        ++array2;
    }
    
    return res;
}

int main(int argc, const char** argv) {
    
    int intArray[5]{1,2,3,4,5};
    int i = 5;
    int array1[] = {1,1,1,1};
    int array2[] = {2,2,2,2};

    reset(&i);
    cout << i << endl;
    
    int j = 10;
    reset_cpp(j);
    cout << j << endl;

    string s1 = "Hola", s2 = "Jesus";
    cout << isShorter(s1,s2) << endl;
    cout << "Longitud 'hola': " << s1.size() << endl;

    string::size_type cnt = 0;
    auto pos = find_char(s2, 's', cnt);
    cout << "Posicion primera 's' en 'Jesus': " << ++pos << endl 
        << "Numero de 's': " << cnt << endl;

    print(begin(intArray), end(intArray));
    cout << "Array: " << intArray << endl;      // intArray es un puntero al primer elemento
    cout << "Tamaño: " << sizeof(intArray)/sizeof(intArray[0]) << endl;

    // int *ret = new int[5];
    int *ret = new int[5];
    ret = sumaArrays(array1,array2);
    print(ret);

    return 0;
}