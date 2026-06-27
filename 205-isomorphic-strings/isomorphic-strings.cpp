class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) return false;

        vector<int> mapS(256, -1); // mapping from s to t
        vector<int> mapT(256, -1); // mapping from t to s

        for (int i = 0; i < s.size(); i++) {
            char c1 = s[i];
            char c2 = t[i];

            // If mapping already exists, check consistency
            if (mapS[c1] != -1 && mapS[c1] != c2) return false;
            if (mapT[c2] != -1 && mapT[c2] != c1) return false;

            // Otherwise, establish mapping
            mapS[c1] = c2;
            mapT[c2] = c1;
        }
        return true;
    }
};
