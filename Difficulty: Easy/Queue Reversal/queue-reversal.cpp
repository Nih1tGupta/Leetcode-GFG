class Solution {
  public:
    void reverseQueue(queue<int> &q) {
        // code here
        // FIRST FILL QUEUE
        // THEN STEP BY STEP-.FROM FRONT PUT IT TO BACK]
        stack<int>st;
        while(!q.empty()){
            int temp=q.front();
            q.pop();
            st.push(temp);
        }
        while(!st.empty()){
            int temp1=st.top();
            st.pop();
            q.push(temp1);
        }
    }
};