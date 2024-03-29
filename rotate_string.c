/*Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s. A shift on s consists of moving the leftmost character
of s to the rightmost position. For example, if s = "abcde", then it will be "bcdea" after one shift.*/

class Solution 
{
    public:
        bool rotateString(string s, string goal)
        {
            s.append(s);
            
            if (s.find(goal) != string::npos)
                return (s.size() == goal.size() * 2);
            
            return false;
        }
};
