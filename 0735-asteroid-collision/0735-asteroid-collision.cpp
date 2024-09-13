class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        for(auto x : asteroids){
            if(x > 0 || st.empty()){
                st.push(x);
            }
            else{
                while(!st.empty() && st.top() > 0 && st.top() < abs(x)) st.pop();
                if(!st.empty() && st.top() == abs(x)) st.pop();
                else if(st.empty() || st.top() < 0) st.push(x);
            }
        }
        vector<int>ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};