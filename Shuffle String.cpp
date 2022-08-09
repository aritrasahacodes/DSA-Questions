class Solution {
public:
    bool myCompare(pair <int,char>p1, pair<int,char> p2)
    {
        return p1.first<p2.first;
    }
    
    string restoreString(string s, vector<int>& indices) {
        vector<pair<int,char>>p;
        for(int i=0;i<s.size();i++)
        {
            p.push_back(make_pair(indices[i],s[i]));
        }
        
        sort(p.begin(),p.end(),myCompare);
        string ans;
        for(int i=0;i!=p.size();i++)
        {
            ans[i]=p[i].second;
        }
        return ans;
    }
};