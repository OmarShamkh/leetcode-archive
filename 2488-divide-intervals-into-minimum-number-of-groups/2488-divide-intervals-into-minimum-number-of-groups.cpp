class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        vector<int> start, end;
        for(auto v : intervals){
            start.push_back(v[0]);
            end.push_back(v[1]);
        }
        sort(start.begin(), start.end());
        sort(end.begin(), end.end());

        int l = 0 , r =0 , ans = 0, g = 0;
        while(l < intervals.size()){
            if(start[l] <= end[r]){
                l++;
                g++;
            }
            else{
                g--;
                r++;
            }
            ans = max(ans,g);
        }
        return ans;
    }
};