#include<iostream>
#include<set>
#include<vector>

using namespace std;

class Soluti1on{
    public:
    bool hasDuplicate(vector<int>& nums)
    {
        set<int> nums2(nums.begin(), nums.end());
        if(nums2.size()==nums.size())
        return false;
        else 
        return true;
    }
};

int main()
{
    Solution solution;
    vector<int> nums;
    int n;
    for(int i=0; i<4; ++i)
    {
        cin>>n;
        nums.push_back(n);
    }
    cout<<solution.hasDuplicate(nums);
   
    return 0;
}