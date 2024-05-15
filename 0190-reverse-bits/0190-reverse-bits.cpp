class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t abc =0;
uint32_t reverse = 0;
uint32_t right = 2147483648;
while(right > 0){
abc = n&1;
n= n>>1;
reverse = reverse << 1;
reverse = reverse | abc;
right = right >> 1;

    }
    
return reverse;
        
    }
};