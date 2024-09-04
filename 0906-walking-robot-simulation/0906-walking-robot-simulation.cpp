class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        set<pair<int,int>> sett;
        vector<int> cur = {0,0}; // 0 1 2 3
        vector<vector<int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        int maxd = 0;
        int pos = 0;
        for (auto& obstacle : obstacles) {
            sett.insert({obstacle[0], obstacle[1]});
        }
        for(int i=0; i<commands.size(); i++){
            if(commands[i] == -1){
                pos = (pos + 1) % 4;
                continue;
            }
            if(commands[i] == -2){
                pos = (pos + 3) % 4;
                continue;
            }
            vector<int> direction = directions[pos];
            for (int j = 0; j<commands[i]; j++) {
                int nextX = cur[0] + direction[0];
                int nextY = cur[1] + direction[1];
                if (sett.contains({nextX, nextY})) {
                    break;
                }
                cur[0] = nextX;
                cur[1] = nextY;
            }
            maxd = max(maxd, (cur[0]*cur[0] + cur[1]*cur[1]));
        }
        return maxd;
    }
};