class Solution {
  public:
    vector<string> binstr(int n) {
        // code here
        vector<string> result;
    if (n <= 0) {return result; }

    queue<string> q;
    q.push("0");
    q.push("1");
    while (q.front().length() < n) {
        string curr = q.front();q.pop();
        q.push(curr + "0");
        q.push(curr + "1");
    }

    while (!q.empty()) {
        result.push_back(q.front());
        q.pop();
    }

    return result;
    }
};