int Solution::isPalindrome(string A) {
    int n=A.size();
    int k=0;
    for(int i=0;i<n;i++){
        if(isalnum(A[i])){
            char ch=A[i];
            if(isalpha(ch))
                ch=tolower(ch);
            A[k++]=ch;
        }
    }
    int ans=1;
    k--;
    //cout<<A;
    
    int j=0;
    while(j<k){
        if(A[j]!=A[k]){
            ans=0;
            break;
        }
        j++;
        k--;
    }
    return ans;
}
