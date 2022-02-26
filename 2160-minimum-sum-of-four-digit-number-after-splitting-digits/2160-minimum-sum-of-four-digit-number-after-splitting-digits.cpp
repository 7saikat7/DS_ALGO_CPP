class Solution {
public:
    int minimumSum(int num) {
    vector<int> vec;
    for(int i=0;i<4;i++){
        int temp=num % 10;
        vec.push_back(temp);
        num=num/10;
    }
    sort(vec.begin(),vec.end());
    int num1=vec[0]*10+vec[2];
    int num2=vec[1]*10+vec[3];
    
    
    return num1+num2;
    
}};