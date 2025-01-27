class Solution {
public:
    vector<int> topoSortBfs(int n, unordered_map<int, list<int>>& adjList) {
        vector<int> result;
        queue<int> q;
        unordered_map<int, int> indegree;

        for (auto& pair : adjList) {
            int node = pair.first;
            for (auto& neighbor : pair.second) {
                indegree[neighbor]++;
            }
        }

        for (int i = 0; i < n; i++) {
            if (indegree[i] == 0) {
                q.push(i);
            }
        }

        while (!q.empty()) {
            int currentNode = q.front();
            q.pop();

            result.push_back(currentNode);

            for (auto& neighbor : adjList[currentNode]) {
                indegree[neighbor]--;
                if (indegree[neighbor] == 0) {
                    q.push(neighbor);
                }
            }
        }

        if (result.size() == n) {
            return result;
        } else {
            return {};
        }
    }

    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int, list<int>> adjList;

        for (auto& prerequisite : prerequisites) {
            int u = prerequisite[0];
            int v = prerequisite[1];
            adjList[v].push_back(u);
        }

        return topoSortBfs(numCourses, adjList);
    
    }
};