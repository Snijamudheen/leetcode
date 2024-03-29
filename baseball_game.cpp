/*You are keeping score for a baseball game with strange rules. The game consists of several rounds, where the scores of past rounds may affect future rounds' scores.
At the beginning of the game, you start with an empty record. You are given a list of strings ops, where ops[i] is the ith operation you must apply to the record and is one of the following:
An integer x - Record a new score of x. "+" - Record a new score that is the sum of the previous two scores. It is guaranteed there will always be two previous scores.
"D" - Record a new score that is double the previous score. It is guaranteed there will always be a previous score. "C" - Invalidate the previous score, removing it from the record. 
It is guaranteed there will always be a previous score. Return the sum of all the scores on the record. The test cases are generated so that the answer fits in a 32-bit integer*/

class Solution 
{
    public:
        int calPoints(vector<string>& ops) 
        {     
            vector<int> v;
            int sum = 0;
                
            for (int i = 0; i < ops.size(); i++)
            {      
                if (ops[i] == "C")
                {
                    v.erase(v.end() - 1);
                    continue;
                }
                
                if (ops[i] == "D")
                {
                    v.push_back(2 * v[v.size() - 1]);
                    continue;
                }
                
                if (ops[i] == "+")
                {
                    v.push_back(v[v.size() - 1] + v[v.size() - 2]);
                    continue;
                }
                v.push_back(stoi(ops[i]));
            }
            
            for (int i = 0; i < v.size(); i++)
                sum  = sum + v[i];
             
            return sum;
        }
};
