#include <iostream>
#include <vector>
#include <string>

using namespace std;
using std::vector;
using std::string;

int main() {

    int ia[3][4]; 
    int (*ptr)[4] = ia;

    cout << (*ptr)[1] << endl;
    cout << *(*(++ptr)) << endl;

    size_t cnt = 0;
    for (auto& row : ia)
        for (auto& col : row) {
            col = cnt;
            ++cnt;
        }

    cout << "cnt: " << cnt << endl;

    for (const auto &row : ia) { 
        for (auto col : row)
            cout << col << " ";
        cout << endl; 
    }

    cout << endl;

    for (auto p = ia; p != ia + 3; ++p) {
        for (auto q = *p; q != *p + 4; ++q)
            cout << *q << ' ';
        cout << endl;
    }

    cout << endl;

    for (auto p = begin(ia); p != end(ia); ++p) {
        for (auto q = begin(*p); q != end(*p); ++q)
            cout << *q << ' ';
        cout << endl;
    }

    return 0;
}	
