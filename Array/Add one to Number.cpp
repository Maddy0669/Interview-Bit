vector<int> Solution::plusOne(vector<int> &A) {
    int n=A.size();
    A[n-1] += 1;
    int carry = A[n-1]/10;
    A[n-1] = A[n-1]%10;
    
    for(int i=n-2;i>=0;i--){
        if(carry==1){
            A[i]++;
            carry=A[i]/10;
            A[i]=A[i]%10;
        }
    }
    if(carry==1)
        A.insert(A.begin(), 1);
        
    for(auto it=A.begin();it!=A.end();) {
        (*it==0) ? A.erase(it) : it=A.end();
    }    
    
    return A;
}
