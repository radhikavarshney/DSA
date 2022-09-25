class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<int>> r(9), c(9), b(9);
        for(int i=0;i<9;i++)
        {
            for(int j=0; j<9;j++)
            {
                if(board[i][j]!='.')
                {
                    int now=board[i][j];
                    int var=j/3+(i/3)*3;
                    if(r[i].count(now)||c[j].count(now)||b[var].count(now))
                    {
                        return false;
                    }
                    r[i].insert(now);
                    c[j].insert(now);
                    b[var].insert(now);
                }
            }
        }
       return true; 
    }
};
