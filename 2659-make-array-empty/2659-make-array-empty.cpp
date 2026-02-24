class Solution {
public:
    long long countOperationsToEmptyArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> idx(n);
        
        for(int i=0;i<n;i++)
            idx[i]=i;
        
        sort(idx.begin(), idx.end(), [&](int a,int b){
            return nums[a]<nums[b];
        });
        
        long long ans=n;
        
        for(int i=1;i<n;i++)
            if(idx[i]<idx[i-1])
                ans+=n-i;
        
        return ans;
    }
};