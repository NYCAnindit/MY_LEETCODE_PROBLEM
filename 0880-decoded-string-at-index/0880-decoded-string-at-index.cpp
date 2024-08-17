class Solution {
public:
    string decodeAtIndex(string s, int k) {
        long long size=0;
        int n=s.size();
        for(auto c :s){
            if(isalpha(c)){
                size++;
            }
            else{
                size=size*(c-'0');
            }
        }
        for(int i=n-1;i>=0;i--){
            k=k%size;
            if(k==0 && isalpha(s[i])){
                return string(1,s[i]);
            }
            if(isalpha(s[i])){
                size--;
            }
            else{
                size = size/(s[i]-'0');
            }
        }
        
        return "";
    }
};