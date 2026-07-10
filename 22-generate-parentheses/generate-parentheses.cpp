class Solution {
public:
vector<string>res;
string cur;
void solve(int n,int open,int close ){
    if(cur.size()==(2*n)){
        res.push_back(cur);
        return;
    }
    if(open<n){
        cur.push_back('(');
        solve(n,open+1,close);
        cur.pop_back();

    }
     if(close<open){
        cur.push_back(')');
        solve(n,open,close+1);
        cur.pop_back();

    }

}
    vector<string> generateParenthesis(int n) {
       
        solve(n,0,0);
        return res;
        
    }
};