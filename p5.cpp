class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> rot;
        k=k%n;

        if(n==1 || k==0) return;

        for(int i=n-k;i<n;i++){
            rot.push_back(nums[i]);
        }

        for(int i=0;i<n-k;i++){
            rot.push_back(nums[i]);
        }

        nums=rot;
    }
};