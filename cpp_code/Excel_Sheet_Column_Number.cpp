/*Given a string columnTitle that represents the column title as appears in an Excel sheet, return its corresponding column number.*/

class Solution 
{
    public:
        int titleToNumber(string columnTitle) 
        { 
            int result = 0;
            for(char c : columnTitle)
            {
                int d = c - 'A' + 1;
                result = result * 26 + d;
            }
            return result;
        }
};
