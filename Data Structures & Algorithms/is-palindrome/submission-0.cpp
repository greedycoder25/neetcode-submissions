class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;

        while(i < j) {
            while(i < j && !isalnum(s[i])) i++;
            while(i < j && !isalnum(s[j])) j--;

            char c1 = tolower(s[i]);
            char c2 = tolower(s[j]);

            if(c1 != c2) return 0;

            i++;
            j--;
        }

        return 1;
    }
};