class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> wealth;

        for (int i = 0; i < accounts.size(); i++) {
            int k = 0;
            for (int j = 0; j < accounts[i].size(); j++) {
                wealth.push_back(k += accounts[i][j]);
            }
        }
        auto wealths = max_element(wealth.begin(), wealth.end());
        int max = (*wealths);
        return max;
    }
};
