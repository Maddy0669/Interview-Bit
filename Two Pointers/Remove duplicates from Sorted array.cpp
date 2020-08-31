int Solution::removeDuplicates(vector<int> &A) {
    int n=A.size();
    if(n==1)
        return 1;
        
    int i=1,j=1;
    
    while(i<n){
        if(A[i]!=A[i-1]){
            A[j]=A[i];
            j++;
            i++;
        }
        else
            i++;
    }
    return j;
}