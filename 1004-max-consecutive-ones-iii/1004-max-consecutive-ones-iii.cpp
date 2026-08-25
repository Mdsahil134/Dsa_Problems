class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
       
        int l=0;
        int r=0;
        int maxlen=0;
        int z=0;
        int n=nums.size();
        while(r<n){
            if(nums[r]==0){
                z++;
            }
            r++;
            while(z>k){
                if(nums[l]==0){
                    z--;
                }
                 l++;
            }
            maxlen=max(maxlen,r-l);

        }
        return maxlen;

    }
};