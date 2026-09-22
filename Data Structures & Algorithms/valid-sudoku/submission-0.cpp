class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& b) {
        for(int i=0;i<9;i++){
            vector<int> ct(10,0);
            for(int j=0;j<9;j++){
                int k = b[i][j]-'0';
                if(k>=0 && k<=9){
                    if(ct[k]!=0) return 0;
                    ct[k]++;
                }
                
            }
        }
        for(int j=0;j<9;j++){
            vector<int> ct(10,0);
            for(int i=0;i<9;i++){
                int k = b[i][j]-'0';
                if(k>=0 && k<=9){
                    if(ct[k]!=0) return 0;
                    ct[k]++;
                }
                
            }
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                vector<int> ct(10,0);
                for(int i1=0;i1<3;i1++){
                    for(int j1=0;j1<3;j1++){
                        int id1 = 3*i+i1;
                        int id2 = 3*j+j1;
                        int k = b[id1][id2]-'0';
                        if(k>=0 && k<=9){
                            if(ct[k]!=0) return 0;
                            ct[k]++;
                        }
                    }
                }
            }
        }
        return 1;
    }
};
