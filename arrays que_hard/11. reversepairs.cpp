#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums)
{
    int n = nums.size();
    set<vector<int>>vt;
    
    for(int i=0; i<n; i++)
    {
        unordered_set<int>st;
        for(int j=i+1; j<n; j++)
        {
            int k = -(nums[i]+nums[j]);
            if(st.find(k)!=st.end())
            {
                vector<int>temp = {nums[i],nums[j],k};
                sort(temp.begin(),temp.end());
                vt.insert(temp);
            }
            
            st.insert(nums[j]);
        }
        
    }
    
    vector<vector<int>>ans(vt.begin(),vt.end());
    return ans;
}

int main() 
{
    int n;
    cin>>n;
    
    vector<int>nums(n);
    
    for(int i=0; i<n; i++)
    {
        cin>>nums[i];
    }
    
    vector<vector<int>>ans = threeSum(nums);
    
    for(auto it : ans)
    {
        for(auto ele : it)
        {
            cout<<ele<<" ";
        }
        cout<<", ";
    }
}