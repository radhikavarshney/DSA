class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> ansr;
        for(char& c: ransomNote)
        {
            ansr[c]++;
        }
        for(char& d: magazine)
        {
            ansr[d]--;
        }
        for (int i=0; i<ansr.size(); i++)
        {
            if(ansr[i]>0)
            {
                return false;
            }
        }
        return true;
    }
};