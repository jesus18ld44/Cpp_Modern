#include <iostream>
#include <string>
#include <cctype>

using namespace std;
using std::string;

int main(int argc, char const *argv[])
{

    // string str("some string");
    // for (auto c : str) 
    //     cout << c << endl;

    string s("Hello World !!!!_");
    //punct_cnt has the same type that s.size returns
    decltype(s.size()) punct_cnt = 0;
    for (auto c : s)
        if (ispunct(c))
            ++punct_cnt;
    cout << punct_cnt << " punctuation characters in " << s << endl;
    
    // for (auto &c : s)
    //     c = toupper(c);
    // cout << s << endl;
    
    // before accessing the character, we check that s is not empty. 
    // Any time we use a subscript, we must ensure that there is a value at the given location
    if (!s.empty())
        cout << s[0] << endl;

    for (decltype(s.size()) index = 0;
        index != s.size() && !isspace(s[index]); 
        ++index)
            s[index] = toupper(s[index]);
    
    cout << s << endl;
    
    
    
    return 0;


}
