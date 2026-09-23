class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        int k = min(w1.size(),w2.size());
        string s;
        for(int i=0;i<k;i++){
            s+=w1[i];
            s+=w2[i];
        }
        if(w1.size()>k){
            for(int i=k;i<w1.size();i++){
                s+=w1[i];
            }
        }
        if(w2.size()>k){
            for(int i=k;i<w2.size();i++){
                s+=w2[i];
            }
        }
        return s;
    }
};