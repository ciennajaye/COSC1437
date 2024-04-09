#include <iostream>
#include <vector>

using namespace std;

//function declaration
int vectorSum(vector <int> nums2);

int main ()
{
    int nums[] = {4,5,6,7,8};

    //calling recursive function
    vector<int> nums2 (nums, nums+(sizeof(nums)/sizeof(nums[0])));

    //output
    cout << vectorSum(nums2) << endl;

    return 0;
}

//recursive function
int vectorSum(vector<int> nums2)
{
    if (nums2.size() <= 1)
    {
        return nums2[0];
    }
    else
    {
        vector <int> vectorRecursive(nums2.begin()+1, nums2.begin()+nums2.size());
        return nums2[0] + vectorSum(vectorRecursive);
    }
}