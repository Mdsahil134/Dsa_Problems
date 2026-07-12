class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> temp = arr;

        sort(temp.begin(), temp.end());
        temp.erase(unique(temp.begin(), temp.end()), temp.end());

        unordered_map<int, int> rank;

        for (int i = 0; i < temp.size(); i++) {
            rank[temp[i]] = i + 1;
        }

        vector<int> ans;

        for (int x : arr) {
            ans.push_back(rank[x]);
        }

        return ans;
    }
};