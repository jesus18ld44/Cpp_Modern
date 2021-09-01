#include <vector>
#include <iostream>
#include <string>

using namespace std;
using std::vector;

int main(int argc, const char** argv) {
 
    vector<int> v;
    const vector<int> cv;
    auto it1 = v.begin();
    auto it2 = cv.begin();      // type it2 -> vector<int>::const_iterator

    // it's usually best to use a const type when we need to read but do not to write to an object
    // To ask specifically for the const_iterator
    auto it3 = v.cbegin();      // whether v is const or not cbegin() always return a const_iterator

    vector<string> text(10, "hi");

    for (auto it = text.cbegin();
        it != text.cend() && !it->empty(); ++it)
        cout << *it << endl;
    
    vector<int> vi {1,2,3,4,5,6,7,8,9};
    auto mid = vi.begin() + (vi.size()/2);
    cout << *mid << endl;

    return 0;
}