class Solution {
public:

    string encode(vector<string>& strs) {
        string ans;

        for(auto i : strs) {
            ans += to_string(i.size());
            ans += '#';
            ans += i;
        }

        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;

        while(i < s.size()) {
            int len = 0;

            while(s[i] != '#') {
                len = len * 10 + (s[i] - '0');
                i++;
            }

            i++;

            string tp = s.substr(i, len);
            ans.push_back(tp);

            i += len;
        }

        return ans;
    }
};