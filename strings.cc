#include <iostream>
#include <string>

using std::string;
using namespace std;

int main(int argc, char const *argv[])
{
    
    // cout << "Enter 2 numbers: " << endl;
    // int v1, v2;
    // cin >> v1 >> v2;
    // cout << "the sum is of " << v1 << " and " << v2 << 
    //     " is: " << v1+v2 << endl;
    
    // initializing strings
    string s1;              // default initialization; s1 is the empty string
    string s2 = s1;         // s2 is a copy of s1
    string s3 = "hiya";     // s3 is a copy of the string literal
    string s4(10, 'c');     //s4 is `cccccccccc`

    // cout << "length of `s4(10, 'c')` -->  " << s4.size() << endl;
    
    // cin reads characters until the next whitespace character is encountered
    // If the input is 'Jesus Arevalo' the output is 'Jesus'

    string line;
    // while (getline(cin, line))
    while (getline(cin, line))
        if (!line.empty())
            cout << line << "::" << line.size() << endl;

    return 0;
}
