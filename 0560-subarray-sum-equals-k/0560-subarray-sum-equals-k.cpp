class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        
        int c=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            mp[sum]++;
            sum+=nums[i];
            if(mp.find(sum-k)!=mp.end()){
                c+=mp[sum-k];
            }

        }
        return c;
    }
};