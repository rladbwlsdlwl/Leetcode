class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());

        int i=0;
        for(i=0; i<costs.size(); i++){
            coins -= costs[i];
            if(coins < 0)
                break;
        }

        return i;
    }
};
