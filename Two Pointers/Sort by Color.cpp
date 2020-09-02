void Solution::sortColors(vector<int> &A) {
    int n=A.size();
    int i=0,j=0,k=n-1;
    
    while(i<=k){
        if(A[i]==0){
            swap(A[j],A[i]);
            j++;
            i++;
        }
        else if(A[i]==2){
            swap(A[i],A[k]);
                k--;
        }
        else
            i++;
    }
}
