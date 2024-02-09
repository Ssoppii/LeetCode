class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(), deck.end(), greater<int>());
        vector<int> answer;

        for (auto num:deck) {
            if (answer.size() == 0) {
                answer.insert(answer.begin(), num);
            }
            else {
                rotate(answer.begin(), answer.end()-1, answer.end());
                answer.insert(answer.begin(), num);
            }
        }

        return answer;
    }
};