class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int maxi=nums[0];

        for(int i=1;i<n;i++){
            if(maxi<=0) return false;
            maxi--;
            maxi=max(maxi,nums[i]);
        }
        return true;
    }
};