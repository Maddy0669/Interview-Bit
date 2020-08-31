vector<int> Solution::repeatedNumber(const vector<int> &A) {
    long long int sum=0;
    long long int ssum=0;
    long long int n=A.size();
    vector<int> ans;
    long long int sm=(long long int)(n*(n+1))/2;
    long long int ssm=(long long int)(n*(n+1)*(2*n+1))/6;
    
    for(int i=0;i<n;i++){
        long long int temp = (long long int)A[i];
        sum+=temp;
        ssum+=temp*temp;
    }
    long long int BmA = sm-sum;
    long long int BpA = (ssm-ssum)/BmA;
    
    ans.push_back(abs(BpA-BmA)/2);
    ans.push_back(abs(BpA+BmA)/2);
    
    return ans;
}
