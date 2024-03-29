/*There are n children standing in a line. Each child is assigned a rating value given in the integer array ratings.
You are giving candies to these children subjected to the following requirements:
Each child must have at least one candy.
Children with a higher rating get more candies than their neighbors.
Return the minimum number of candies you need to have to distribute the candies to the children.
 */

class Solution 
{
    public:
        int candy(vector<int>& ratings) 
        {
            vector<int> candy(ratings.size(), 1);
            
            for(int i = 1; i < ratings.size(); i++) 
            {
                if(ratings[i] > ratings[i - 1]) 
                {
                    candy[i] = candy[i - 1] + 1;
                }
            }
            
            for(int i = ratings.size() - 2; i > -1; i--) 
            {
                if(ratings[i] > ratings[i + 1] && candy[i] <= candy[i + 1]) 
                {
                    candy[i] = candy[i + 1] + 1;
                } 
            }
            return accumulate(candy.begin(), candy.end(), 0);
        }
};
