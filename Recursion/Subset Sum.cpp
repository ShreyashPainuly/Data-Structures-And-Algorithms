class Solution{ 
private:
    bool issub(vector<int> arr, int sum , int n, int t[101][10001]) {
        //base case
        if(sum == 0) {
            return true;
        } 
        
        if(n == 0) {
            return false;
        }
        
        if(t[n][sum] != -1) {
            return t[n][sum];
        }
        
        if(arr[n-1] > sum) {
            return t[n][sum] = issub(arr, sum, n-1, t);
        }
        else{
            return t[n][sum] = issub(arr, sum, n-1, t) || issub(arr, sum-arr[n-1], n-1, t);
        }
    }
public:
    bool isSubsetSum(vector<int>arr, int sum){
        int n = arr.size();
        int t[101][10001];
        memset(t, -1, sizeof(t));
        return issub(arr, sum , n, t);
    }
};
