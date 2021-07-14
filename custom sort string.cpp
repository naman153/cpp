class Solution {
public:
    static string m_order;
    static bool compare(char a, char b) {
        return m_order.find(a) < m_order.find(b);
    }
    
    string customSortString(string order, string str) {
        m_order = order;
        sort(str.begin(), str.end(), compare);
        return str;
        
    }
};
string Solution::m_order;
