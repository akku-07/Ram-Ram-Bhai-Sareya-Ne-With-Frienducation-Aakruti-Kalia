class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();

        vector<vector<int>> zero(n,vector<int>(m,-1));

        set<int> cols;
        set<int> rows;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    cols.insert(j);
                    rows.insert(i);
                }
            }
        }

        for(int i=0;i<n;i++){
            if(rows.find(i)!=rows.end()){
                for(int j=0;j<m;j++){
                    matrix[i][j]=0;
                }
            }
        }

        for(int i=0;i<m;i++){
            if(cols.find(i)!=cols.end()){
                for(int j=0;j<n;j++){
                    matrix[j][i]=0;
                }
            }
        }

        return;

    }
};