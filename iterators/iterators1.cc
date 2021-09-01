#include <vector>
#include <iostream>
#include <string>

using namespace std;
using std::string;
using std::vector;

int main(int argc, const char** argv) {
    
    string s("some string");
    if (s.begin() != s.end()) {
        auto it = s.begin();
        *it = toupper(*it);
    }

    cout << s << endl;
    
    return 0;
}