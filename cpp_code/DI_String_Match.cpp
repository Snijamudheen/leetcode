/* A permutation perm of n + 1 integers of all the integers in the range [0, n] can be represented as a string s of length n where:
s[i] == 'I' if perm[i] < perm[i + 1], and
s[i] == 'D' if perm[i] > perm[i + 1].
Given a string s, reconstruct the permutation perm and return it. If there are multiple valid permutations perm, return any of them.*/

class Solution 
{
    public:
        vector<int> diStringMatch(string s) 
        {
            vector<int> res;

            for (int l = 0, i = 0, h = s.size(); i <= s.size(); ++i)
                res.push_back(i == s.size() || s[i] == 'I' ? l++ : h--);
                
            return res;
        } 
};
