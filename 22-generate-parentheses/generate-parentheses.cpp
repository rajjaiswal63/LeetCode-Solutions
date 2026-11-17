class Solution {
public:
    vector<string>ans;
    bool isValidPare(string s){
        int count =0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='(') count++;
            else count--;
            if(count < 0) return false;
        }
        if(count==0) return true;
        return false;
    }
    void sol(string &s, int n){
        if(s.size()==2*n){
            if(isValidPare(s)) ans.push_back(s);
            return;
        }
        s.push_back('(');
        sol(s,n);
        s.pop_back();

        s.push_back(')');
        sol(s,n);
        s.pop_back();
    }
    vector<string> generateParenthesis(int n) {
        string s="";
        sol(s,n);
        return ans;
    }
};