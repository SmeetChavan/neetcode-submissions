class Solution {
public:

    string encode(vector<string>& strs) {
        string ans;

        for(auto str: strs){
            ans += (to_string(str.size()) + '#' + str);
        }

        return ans;
    }

    vector<string> decode(string s) {

        vector<string> ans;

        int i = 0;
        while(i < s.size()){

            int delimiterPos = s.find('#', i);
            int len = stoi(s.substr(i, delimiterPos - i));
            i = delimiterPos + 1;

            string answerStr = s.substr(i, len);
            ans.push_back(answerStr);
            i += len;
        }

        return ans;
    }
};
