class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }

        unordered_map<char,int> mp = unordered_map<char,int>();

        for(auto c : s){
            if(mp.count(c)){
                mp[c]++;
            }
            else{
                mp[c] = 1;
            }
        }

        for(auto c : t){
            if(!mp.count(c)){
                return false;
            }

            mp[c]--;

            if(mp[c] < 0){
                return false;
            }
        }

        for(auto p : mp){
            if(p.second != 0){
                return false;
            }
        }

        return true;
    }
};
