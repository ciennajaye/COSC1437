#include <iostream>
#include <vector>

using namespace std;

//function declaration
void reversevector(int i, vector<int> nums);

//recursive function
void reverseVector(int i, vector<int> &nums) {
    int n = nums.size();
    if (i >= n / 2) return;
    swap(nums[i], nums[n-i-1]);
    reverseVector(i + 1, nums);
}

int main() {
    vector<int> nums = {1,2,3,4,5,6,7,8,9,10};

    //calling recursive function
    reverseVector(0, nums);

    //output
    for (auto i: nums) {
        cout << i << " ";
    }
    cout << "" << endl;
    return 0;
}
