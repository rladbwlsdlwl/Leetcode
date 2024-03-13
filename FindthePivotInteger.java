class Solution {
    public int pivotInteger(int n) {
        int[] dp = new int[n + 1];

        for(int i=1; i<n+1; i++)
            dp[i] = dp[i-1] + i;

        for(int i=1; i<n+1; i++){
            if(dp[i] == dp[n]-dp[i-1])
                return i;
        }

        return -1;
    }
}
