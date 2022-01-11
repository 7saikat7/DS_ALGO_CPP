class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        if(s.empty()==true)
        {
            return;
        }
        reverse(s.begin(),s.end());
    }
};