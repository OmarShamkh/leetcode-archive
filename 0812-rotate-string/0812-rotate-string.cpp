class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()) return false;
        string conc = s + s;
        return conc.find(goal) < conc.size();
    }
};