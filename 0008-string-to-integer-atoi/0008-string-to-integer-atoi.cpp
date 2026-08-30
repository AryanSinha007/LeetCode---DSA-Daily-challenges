class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        while(i<s.size() && s[i]==' '){
            i++;
        }
        s=s.substr(i);
        if(s.size() == 0) return 0;
        int sign=+1;
        long ans=0;
        if(s[0]=='-') sign=-1;
        i=(s[0]=='+'||s[0]=='-') ? 1 : 0;
        
        
        while(i<s.length() && isdigit(s[i])){
            
        
        
            ans=ans*10+(s[i]-'0');
            if(sign==-1 && -1*ans<INT_MIN) return INT_MIN;
            if(sign==+1 && +1*ans>INT_MAX) return INT_MAX;
            i++;
        }
        return (int)(sign*ans);



    }
};