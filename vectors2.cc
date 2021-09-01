#include <vector>
#include <iostream>
#include <string>

using namespace std;
using std::string;
using std::vector;

int main(int argc, const char** argv) {
    
    vector<unsigned> scores(11,0);
    unsigned grade;
    while (cin >> grade)
        if (grade <= 100)
            ++scores[grade/10];
    
    for (auto i : scores)
        cout << i << " ";
    cout << endl;

    vector<int> ivec;
    for (decltype(ivec.size()) ix = 0; ix != 10; ++ix)
        ivec.push_back(ix);

    return 0;

}