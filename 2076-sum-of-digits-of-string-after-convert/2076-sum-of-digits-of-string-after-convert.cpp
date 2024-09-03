class Solution {
public:
    int getLucky(string s, int k) {
        int sum = 0;
        for(char c : s){
            int n = c - 'a' + 1;
            while(n > 0){
                sum += n%10;
                n /=10;
            }
        }
        if( k == 1) return sum;

        for(int i=1; i<k; i++){
            int sum2 = 0; 
            while(sum > 0){
                sum2 += sum%10;
                sum /= 10;
            }
            sum = sum2;
        }

        return sum;
    }
};