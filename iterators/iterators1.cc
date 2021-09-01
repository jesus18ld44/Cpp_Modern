#include <vector>
#include <iostream>
#include <string>
#include <cctype>

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
    
    for (auto it = s.begin(); it != s.end(); ++it) {
        *it = toupper(*it);
    }

    cout << s << endl;

    return 0;
}