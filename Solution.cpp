class Solution {
public:
    int minLength(string s) {
        stack<char> st;
        for (char& c : s) {
            if (!st.empty()) {
                char top = st.top();
                if (c == 'B') {
                    if (top == 'A') {
                        st.pop();
                        continue;
                    }
                } else if (c == 'D') {
                    if (top == 'C') {
                        st.pop();
                        continue;
                    }
                }
            }
            st.push(c);
        }
        return st.size();
    }
};
