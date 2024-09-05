class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>fr;
        for(int i=0; i<arr.size(); i++){
            fr[arr[i]]++;
        }
        set<int>st;
        for(auto x : fr){
            st.insert(x.second);
        }
        return fr.size() == st.size();
    }
};