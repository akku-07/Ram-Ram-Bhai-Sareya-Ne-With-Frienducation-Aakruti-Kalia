class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.size()==1)return 1;

        sort(points.begin(),points.end());
        int count=1;
        int shots=points[0][1];
        
        for(int i=1;i<points.size();i++){
            if(points[i][0]<=shots && points[i][1]>=shots){
                continue;
            }
            if(!(points[i][0]<shots || points[i][1]<shots)){
                count++;
            }
            shots = points[i][1];
        }

        
        return count;
    }
};