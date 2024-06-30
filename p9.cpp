class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total = 0;
        for (int i = 0; i< gas.size(); i++) {
            gas[i] = gas[i] - cost[i];
            total += gas[i];
        }
        if(total < 0) {
            return -1;
        }

        int sum = 0;
        int index = -1;
        int max = gas[gas.size()-1];
        for (int i = gas.size()-1; i>=0; i--) {
            sum += gas[i];
            gas[i] = sum;
            if (sum >= max) {
                max = sum;
                index = i;
            }
        }        
        return index;
    }
};