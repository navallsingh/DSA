class Solution {
public:
    bool isAnagram(string s, string t) {
    if(s.length() != t.length()) return false;

    array <int , 26> count = {0};

    for(int i = 0;i<s.length();i++){
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }
    for(int k : count){
    if(k!=0){
        return false;
    }

}
return true;

}

};