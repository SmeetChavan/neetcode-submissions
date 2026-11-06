class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, int> mp = unordered_map<string, int>();
        vector<vector<string>> ans;

        for(auto str : strs){

            string sortedStr = str;
            sort(sortedStr.begin(), sortedStr.end());

            if(mp.count(sortedStr)){
                ans[mp[sortedStr]].push_back(str);
            }
            else{
                mp[sortedStr] = ans.size();
                ans.push_back({str});
            }
        }

        return ans;
    }
};
