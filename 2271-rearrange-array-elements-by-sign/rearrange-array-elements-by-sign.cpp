class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        vector<int> pos, neg;

        for(int i : nums){
            if(i>0) pos.push_back(i);
            else neg.push_back(i);
        }
        vector<int> ans;
        int n = pos.size();

        for(int i = 0;i<n;i++){
             ans.push_back(pos[i]);
             ans.push_back(neg[i]);
        }
        return ans;
    }
};