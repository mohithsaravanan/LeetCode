class Solution {

public:
    string addBinary(string a, string b) {
        int i = a.size() - 1, j = b.size() - 1, carry = 0, valA = 0, valB = 0,
            sum = 0;
        string result = "";
        while (i >= 0 || j >= 0) {
            valA = (i >= 0) ? a[i] - '0' : 0;
            valB = (j >= 0) ? b[j] - '0' : 0;
            sum = valA ^ valB ^ carry;
            result.insert(result.begin(), '0' + sum);
            carry = (valA + valB + carry) / 2;
            i--;
            j--;
        }

        if (carry == 1)
            result.insert(result.begin(), '1');
        return result;
    }
};