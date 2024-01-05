//////////////////BRUTEFORCE METHOD FOR 560. Subarray Sum Equals K
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            int sum=0;  ///ata O(N*N)=O(N2) COMPLEXITY 
            for(int j=i;j<n;i++)
            {
              sum+=nums[j];
              if(sum==k)
            
                  count++;
              
            }
        }
        return count;
        
    }
};
