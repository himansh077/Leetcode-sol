class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int> first, last, freq;
        
        int n = nums.size();
        
        for(int i=0;i<n;i++){
            if(first.find(nums[i])==first.end())
                first[nums[i]] = i;
            
            last[nums[i]] = i;
            freq[nums[i]]++;
        }
        
        int degree = 0;
        for(auto &p : freq)
            degree = max(degree, p.second);
        
        int ans = n;
        
        for(auto &p : freq){
            if(p.second == degree){
                int len = last[p.first] - first[p.first] + 1;
                ans = min(ans, len);
            }
        }
        
        return ans;
    }
};