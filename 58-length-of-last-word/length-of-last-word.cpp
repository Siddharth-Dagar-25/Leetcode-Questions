class Solution {
public:
    int lengthOfLastWord(string s) {
       int v =0;
       for(int i =s.length()-1;i>=0;i--){
           if(s[i]!=' '){
             v+=1;
           }
           else if(v>0) return v;
           
       } 
       return v;
    }
};