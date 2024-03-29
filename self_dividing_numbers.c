/*A self-dividing number is a number that is divisible by every digit it contains.
For example, 128 is a self-dividing number because 128 % 1 == 0, 128 % 2 == 0, and 128 % 8 == 0. A self-dividing number is not allowed to contain the digit zero.
Given two integers left and right, return a list of all the self-dividing numbers in the range [left, right].*/

class Solution 
{
    public:
        vector<int> selfDividingNumbers(int left, int right) 
        {
            vector<int> ans;

            while(left <= right)
            {
                int n = left;

                while(n > 0)
                {
                    int r = n % 10;

                    if(r == 0)
                        break;
                    if(left%r != 0)
                        break;
                    else
                        n = n / 10;
                }

                if(n == 0)
                    ans.push_back(left);

                left++;
            }
            return ans;
        }
};
