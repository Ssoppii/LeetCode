class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        map<int, int> dct;
        for (auto &i:nums) {
            dct[i]++;
        }
        vector<vector<int>> answer;
        

        while (!dct.empty()) {
            vector<int> tmp, toErase;
            for (auto &[f, s]:dct) {
                tmp.push_back(f);
                s--;
                if (s==0) toErase.push_back(f);
            }
            answer.push_back(tmp);
            for (auto &i:toErase) {
                dct.erase(i);
            }

        }
        return answer;
    }
};