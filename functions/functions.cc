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

int main(int argc, const char** argv) {
    
    int i = 5;
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

    return 0;
}