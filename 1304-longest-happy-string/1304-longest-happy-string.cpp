class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int,char>>pq;
        if(a > 0) pq.push({a,'a'});
        if(b > 0) pq.push({b,'b'});
        if(c > 0) pq.push({c,'c'});
        string ans = "";

        while(pq.size() > 1){
            pair<int,char>max_one = pq.top();pq.pop();
            pair<int,char>max_two = pq.top();pq.pop();

            if(max_one.first >= 2){
                ans+= max_one.second;
                ans+= max_one.second;
                max_one.first -=2;
            }
            else{
                ans +=max_one.second;
                max_one.first -=1;
            }
            if(max_two.first >=2 && max_two.first >= max_one.first){
                ans +=max_two.second;
                ans +=max_two.second;
                max_two.first -=2;
            }
            else{
                ans +=max_two.second;
                max_two.first -=1;
            }
            if(max_one.first > 0) pq.push(max_one);
            if(max_two.first > 0) pq.push(max_two);
        }
        if(pq.empty())
            return ans;
        if(pq.top().first >= 2){
            ans+=pq.top().second;
            ans+=pq.top().second;
        }
        else{
            ans+=pq.top().second;
        }
        return ans;
    }
};