class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> sortedArr = arr;
        sort(sortedArr.begin(), sortedArr.end());
        
        unordered_map<int, int> rank;
        int currentRank = 1;
        for (int num : sortedArr) {
            if (rank.find(num) == rank.end()) {
                rank[num] = currentRank++;
            }
        }
        
        for (int i = 0; i < arr.size(); i++) {
            arr[i] = rank[arr[i]];
        }
        
        return arr;
    }
};
