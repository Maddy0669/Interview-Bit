bool compare(int n1,int n2){
    string s1=to_string(n1);
    string s2=to_string(n2);
    
    return s1+s2>s2+s1;
}

string Solution::largestNumber(const vector<int> &A) {
    vector<int> a(A);
    int n=A.size();
    
    sort(a.begin(),a.end(),compare);
    string ans="";
    
    for(int i=0;i<n;i++)
        ans+=to_string(a[i]);
    
    int count=0;
    for(int i=0;i<n;i++)
        if(a[i]==0)
            count++;
            
    if(count==n)
        ans="0";
            
    return ans;
}