class Solution {
public:
    int hammingWeight(uint32_t n) {
    int counter=0;
//        cout<<k<<"The Value of K ";
    while(n) {
        counter+=n%2;
        n=n/2;
   }
   return counter;
    }
};