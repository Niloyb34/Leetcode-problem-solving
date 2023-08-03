#include<bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>& nums)
{
    unordered_map<int,int>seen;
    for(int num:nums)
    {

        seen[num]++;
        if(seen[num]>1)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int n,i,x;
    cout<<"Enter the size of the vector : ";
    cin>>n;
    vector<int>nums;
    for(i=0; i<n; i++)
    {
        cin>>x;
        nums.push_back(x);
    }
    if(containsDuplicate(nums))
    {
        cout<<"YES Duplicate found"<<endl;
    }
    else
    {
        cout<<"NO duplicate found"<<endl;
    }
}
