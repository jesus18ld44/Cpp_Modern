#include <iostream>
#include <string>

using namespace std; 
using std::string;

int main(int argc, char const *argv[])
{
    const string hexdigits = "0123456789ABCDEF";
    cout << "Enter a series of numbers separated by spaces" << endl;
    string result;
    string::size_type n;

    while (cin >> n)
    {
        if (n < hexdigits.size())
            result += hexdigits[n];
    }

    cout << "Your hex number is: " << result << endl;

    return 0;
}
