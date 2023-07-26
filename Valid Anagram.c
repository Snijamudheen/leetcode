//Given two strings s and t, return true if t is an anagram of s, and false otherwise.
//An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

class Solution 
{
  public:
      bool isAnagram(string s, string t) 
      {
          sort(s.begin(), s.end());
          sort(t.begin(), t.end());
        
          return s == t;
      }
};
