void Solution::merge(vector<int> &A, vector<int> &B) {
    
    int n1=A.size();
    int n2=B.size();
    vector<int> c(n1+n2);
    
    int i=0,j=0,k=0;
    while(i<n1 and j<n2){
        if(A[i]<B[j]){
            c[k]=A[i];
            k++;
            i++;
        }
        else{
            c[k]=B[j];
            j++;
            k++;
        }
    }
    while(i<n1)
        c[k++]=A[i++];
    while(j<n2)
        c[k++]=B[j++];
    
    for(int i=0;i<n2;i++)
        A.push_back(0);
    
    for(int i=0;i<n1+n2;i++)
        A[i]=c[i];
    
}
