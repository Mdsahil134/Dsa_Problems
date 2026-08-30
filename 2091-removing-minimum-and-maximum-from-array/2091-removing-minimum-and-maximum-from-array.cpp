class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        int mi = 0;
        int li = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] < nums[mi])
                mi = i;

            if (nums[i] > nums[li])
                li = i;
        }

        int left = max(mi, li) + 1;

        int right = n - min(mi, li);

        int both = min(mi, li) + 1 + n - max(mi, li);

        return min({left, right, both});
    }
};