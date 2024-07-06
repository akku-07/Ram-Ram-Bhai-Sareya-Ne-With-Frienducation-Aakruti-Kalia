class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> result;

        auto it = lower_bound(intervals.begin(), intervals.end(), newInterval);

        intervals.insert(it, newInterval);

        for (const auto& interval : intervals) {
            if (result.empty() || result.back()[1] < interval[0]) {
                result.push_back(interval);
            } else {
                result.back()[1] = max(result.back()[1], interval[1]);
            }
        }

        return result;
    }
};