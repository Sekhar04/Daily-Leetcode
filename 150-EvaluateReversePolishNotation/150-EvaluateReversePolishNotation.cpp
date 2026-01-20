// Last updated: 1/20/2026, 5:27:54 PM
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (string s : tokens)
        {
            if (s == "+" || s == "*" || s == "/" || s == "-")
            {
                int v1, v2;
                v1 = st.top(); st.pop();
                v2 = st.top(); st.pop();
                if (s == "+") {st.push(v2 + v1);}
                if (s == "*") {st.push(v2 * v1);}
                if (s == "/") {st.push(v2 / v1);}
                if (s == "-") {st.push(v2 - v1);}
            }
            else
            {
                st.push(stoi(s));
            }
        }
        return st.top();
    }
};