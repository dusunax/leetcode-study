class Solution {
public:
    int climbStairs(int n) {
        if(n == 0 || n == 1){
            return 1;
        }
        vector<int> dp(n + 1);
        dp[0] = dp[1] = 1;
        for(int i = 2; i <= n; i++){
            dp[i] = dp[i-1] + dp[i - 2];
        }
        return dp[n];
    }
};

// dp 문제로 배열을 생성해준다
// 계단 방식
// 1                                1개
// 1 + 1, 2                         2개
// 1 + 1 + 1, 2 + 1, 1 + 2          3개
// 1 + 1 + 1 + 1, 1 + 1 + 2, 1 + 2 + 1, 2 + 1 + 1, 2 + 2  ---> 5개
// 즉 피보나찌 수열의 형태를 띈다 왜냐면 2칸을 뛰기 때문에 한칸전에 1을 더하고 두칸 전에 경우의 수에 2를 더해주면 되기때문
// 즉 f(n) = f(n - 1) + f(n - 2)
// 만약 계단 방식이 3칸까지이면 즉 f(n) = f(n - 1) + f(n - 2) + f(n - 3)
// 시간복잡도는 n만큼 순회하여 O(n)
