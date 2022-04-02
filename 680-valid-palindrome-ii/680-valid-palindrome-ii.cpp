class Solution {
public:
    bool validPalindrome(string s) {
    int n=s.length()-1;
    int counter=0;
    return is_palindrome(s,0,n,counter);
    }
    bool is_palindrome(string s,int left,int right,int counter){
        if(counter>1) return false;
        while(left<right){
            if(s[left]==s[right]) {left++;right--;}
            else {return is_palindrome(s,left+1,right,counter+1) || is_palindrome(s,left,right-1,counter+1);}
    }
        return  true;
    }
    
};