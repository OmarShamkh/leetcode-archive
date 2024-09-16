class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int>v(timePoints.size());
        int res = INT_MAX;
        for(int i=0; i<timePoints.size(); i++){
            v[i] = convertToMinutes(timePoints[i]);
        }
        sort(v.begin(), v.end());
        for(int i=0; i<v.size()-1; i++){
            res = min(res , v[i+1]-v[i]);
        }
        return min(res, 24 * 60 - v[v.size() - 1] + v[0]);
    }
    int convertToMinutes(string s){
        string h = s.substr(0,2);
        int hh = stoi(h);
        string m = s.substr(3);
        int mm = stoi(m);
        return hh*60 + mm;
    }
};