class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>res;
        string s="123456789";
        int l=0;
        int h=0;
        int k=low;
        int y=high;
        int hh=0;
        while(y>0){
            y/=10;
            hh++;
        }
        while(k>0){
            k/=10;
            h++;
        }
        
        while(h<=hh){
            l=0;
        while(l+h<=s.length()){
            string temp=s.substr(l,h);
            int n=stoi(temp);
            if(n>=low && n<=high){
                res.push_back(n);
            }
            l++;
            
        }
       
        h++;
        
        }
        return res;
    }
};