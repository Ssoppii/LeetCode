class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> answer;

        if (groupSizes.size() == 1) {
            answer.push_back({0});
            return answer;
        }

        for (int i=1;i<=groupSizes.size();i++) {
            vector<int> tmp;
            for (int j=0;j<groupSizes.size();j++) {
                if (tmp.size() == i) {
                    answer.push_back(tmp);
                    tmp.clear();
                }
                if (groupSizes[j] == i) {
                    tmp.push_back(j);
                }
            }
            if (tmp.size() > 0) answer.push_back(tmp);
        }

        return answer;
    }
};