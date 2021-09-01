#include <vector>
#include <iostream>
#include <string>

using namespace std;
using std::string;
using std::vector;

int main(int argc, const char** argv) {

    vector<int> ivec;
    vector<string> articles{"a", "an", "the"};  // cannot use ()

    vector<string> svec(10, "hi");
    vector<int> v1(10);         // 10 elements with value 0
    vector<int> v2{10};         // one element with value 10

    vector<int> v3;
    for (int i = 0; i != 100; ++i)
        v2.push_back(i);

    string word;
    vector<string> text;
    while (cin >> word) 
        text.push_back(word);

    return 0;

}