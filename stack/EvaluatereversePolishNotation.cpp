// 

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int s = tokens.size();
        for (int i = 0; i < s; i++) {
            if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "/" ||
                tokens[i] == "*") {
                if (tokens[i] == "+") {
                    int p1 = st.top();
                    st.pop();
                    int p2 = st.top();
                    st.pop();
                    st.push(p1 + p2);
                }
                else if (tokens[i] == "-") {
                    int p1 = st.top();
                    st.pop();
                    int p2 = st.top();
                    st.pop();
                    st.push(p2 - p1);
                }
                else if (tokens[i] == "*") {
                    int p1 = st.top();
                    st.pop();
                    int p2 = st.top();
                    st.pop();
                    st.push(p1 * p2);
                }
                else{
                    int p1 = st.top();
                    st.pop();
                    int p2 = st.top();
                    st.pop();
                    st.push(p2 /
                            p1); // Corrected order of operands for division
                }
            } else {
                int x = stoi(tokens[i]);
                st.push(x);
            }
        }
        return st.top();
    }
};