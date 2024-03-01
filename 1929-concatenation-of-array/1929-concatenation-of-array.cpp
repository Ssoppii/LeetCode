class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> concat;
        concat.insert(concat.end(), nums.begin(), nums.end());
        concat.insert(concat.end(), nums.begin(), nums.end());
        return concat;
    }
};