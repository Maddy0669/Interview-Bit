int Solution::solve(vector<int> &A) {
    int ans=-1;
    
    sort(A.begin(),A.end());
    int n=A.size();
    
    if(A[n-1]==0)
        return 1;
    if(A[n-1]<0)
        return -1;
        
    for(int i=n-2;i>=0;i--){
        if(A[i]!=A[i+1])
            if(A[i]==n-i-1)
                ans=1;
    }
    return ans;
}
