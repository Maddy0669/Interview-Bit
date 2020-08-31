vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    vector<int> ans;
    
    int n1=A.size();
    int n2=B.size();
    
    int i=0,j=0;
    while(i<n1 and j<n2){
        if(A[i]==B[j]){
            ans.push_back(A[i]);
            i++;
            j++;
        }
        else if(A[i]>B[j]){
            j++;
        }
        else if(B[j]>A[i]){
            i++;
        }
    }

    return ans;
}
