class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> answer(encoded.size()+1);
        answer[0] = first;
        
        for (int i=0;i<encoded.size();i++) {
            answer[i+1] = answer[i] ^ encoded[i];
        }
            
        return answer;
    }
};