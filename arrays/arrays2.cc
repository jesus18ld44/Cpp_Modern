#include <iostream>
#include <string>

using namespace std;
using std::string;

int main() {

    constexpr unsigned sz = 5;
    int arr[]{0,1,2,3,4};

    int (*ptrArr)[sz] = &arr;
    int *ptr = arr;

    // for (auto idx : *ptrArr)
    //     cout << idx << endl;

    for (auto i : *ptrArr) {
        cout << "ptr[]: " << (i) << endl;
    }

    string nums[] = {"one", "two", "three"};
    
    string * p1 = &nums[0];
    string * p2 = nums;      //both are equivalent

    cout << *p1 << " " << *p2 << endl;

    string (*pString)[3] = &nums;   
    for (auto i : *pString)
        cout << "pString: " << i << endl; 
    
    string *beg = begin(nums);      // pointer to the first element in ia
    cout << "*beg: " << *beg << endl;
    cout << "++(*beg): " << *(++beg) << endl;
    

    return 0;
}
