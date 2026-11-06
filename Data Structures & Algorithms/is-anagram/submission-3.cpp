class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() != t.size()){
            return false;
        }

        unordered_map<char, int> smap;
        unordered_map<char, int> tmap;


        for(int i = 0 ; i < s.size() ; ++i){
            if(smap.count(s[i]) == 0) smap[s[i]] = 1;
            else smap[s[i]]++;

            if(tmap.count(t[i]) == 0) tmap[t[i]] = 1;
            else tmap[t[i]]++;
        }

        // for(int i = 0 ; i < s.size() ; ++i){
        //     if((smap[s[i]] != tmap[s[i]]) || (smap[t[i]] != tmap[t[i]])){
        //         return false;
        //     }
        // }

        for(auto p : smap){
            if(tmap[p.first] != p.second){
                return false;
            }
        }
        for(auto p : tmap){
            if(smap[p.first] != p.second){
                return false;
            }
        }

        return true;
    }
};
