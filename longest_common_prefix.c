/*Write a function to find the longest common prefix string amongst an array of strings. If there is no common prefix, return an empty string "".*/

class Solution 
{
    public:
        string longestCommonPrefix(vector<string>& strs) 
        {
            string ans = "";
        
            for(int i = 0; i < strs[0].size(); i++)
            {
                char c = strs[0][i];

                for(int j = 1; j < strs.size(); j++)
                {
                    if(c != strs[j][i])
                        return ans;
                }

                ans.push_back(c);
            }

            return ans;
        }
};
