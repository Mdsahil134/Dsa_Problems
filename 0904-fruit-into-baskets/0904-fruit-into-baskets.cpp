class Solution {
public:
    int totalFruit(vector<int>& fruits) {
         unordered_map<int,int>mp;
        int r=0;
        int l=0;
        int n=fruits.size();
        int maxlen=0;
        while(r<n){
                mp[fruits[r]]++;
                r++;
              
                while(mp.size()>2){
                 mp[fruits[l]]--;
                    if(mp[fruits[l]] == 0){
                         mp.erase(fruits[l]);
                    }
                l++;
            }
              maxlen=max(maxlen,r-l);
        }
        return maxlen;
    }
};