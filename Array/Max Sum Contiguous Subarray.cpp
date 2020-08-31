int Solution::maxSubArray(const vector<int> &A) {
    int sum=INT_MIN;
    int cur=0;
    int n=A.size();
    for(int i=0;i<n;i++){
        cur+=A[i];
        if(cur>sum)
            sum=cur;
        if(cur<0)
            cur=0;
    }
    return sum;
}
