class Solution {
public:
vector<string> res;
void solve(int n,string&s){
    if(n==s.size()){
    res.push_back(s);
    return;
    }
    if(isalpha(s[n])){
        s[n]=tolower(s[n]);
        solve(n+1,s);
        s[n]=toupper(s[n]);
        solve(n+1,s);
    }
    else{
        solve(n+1,s);
    }
    


}
    vector<string> letterCasePermutation(string s) {
        solve(0,s);
        return res;
        
    }
};