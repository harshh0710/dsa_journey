class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> freq;
        if (s.size() != t.size()){
            return false;
        } 
        for(char c:s){
            freq[c]++;
        } 
        for(char c:t) {
            if(freq[c]==0){
                return false; 
            } 
            freq[c]--;
        }
        return true;
    }
};