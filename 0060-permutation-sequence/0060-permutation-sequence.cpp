class Solution {
    int getFactorial(int n){
        if(n<=1)
            return n;
        if(divisor.find(100+n)!=divisor.end()){
            return divisor[100+n];
        }
        divisor[100+n] = n*getFactorial(n-1);
        return divisor[100+n];
    }
    map<int,int> divisor;
public:
    Solution(){
        for(int i=2;i<=9;i++){
            divisor[i] = getFactorial(i-1);
        }
    }
    void helper(string st,int n,int k,string& answer){
        if(n<=1){
            answer = answer + st[0];
            return;
        }
        int index = k/divisor[n];
        answer += st[index];
        k = k%divisor[n];
        n = n-1;
        helper(st.substr(0,index)+st.substr(index+1),n,k,answer);
    }
    string getPermutation(int n, int k) {
        string st = "";
        for(int i=1;i<=n;i++){
            st += 48+i;
        }
        string answer="";
        helper(st,n,k-1,answer);
        return answer;
        
    }
};
    