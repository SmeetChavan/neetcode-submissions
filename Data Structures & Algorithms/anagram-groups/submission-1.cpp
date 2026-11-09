class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, int> mp = unordered_map<string, int>();
        vector<vector<string>> ans;

        for(auto str : strs){

            string freq = string(26, 'a');

            for(auto c: str){
                freq[c - 'a']++;
            }

            if(mp.count(freq)){
                ans[mp[freq]].push_back(str);
            }
            else{
                mp[freq] = ans.size();
                ans.push_back({str});
            }
        }

        return ans;
    }
};
