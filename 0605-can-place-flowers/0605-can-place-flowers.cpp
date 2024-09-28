class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int cnt = 1;
        int ans = 0;
        for(int i=0; i<flowerbed.size(); i++){
            if(flowerbed[i] == 0){
                cnt++;
            }
            else{
                ans += (cnt-1) /2;
                cnt = 0;
            }
        }
        if(cnt != 0) ans += cnt/2;
        return ans >= n;
    }
};