class TaskManager {
public:
set<pair<int,int>>st;
map<int,int>task_user;
map<int,int>task_pr;
    TaskManager(vector<vector<int>>& tasks) {
        int m=tasks.size();
        for(int i=0;i<m;i++){
            int u=tasks[i][0];int t=tasks[i][1]; int p=tasks[i][2];
            st.insert({p,t});
            task_user[t]=u;
            task_pr[t]=p;
        }
    }
    
    void add(int u, int t, int p) {
         st.insert({p,t});
            task_user[t]=u;
            task_pr[t]=p;
    }
    
    void edit(int t, int np) {
        int old=task_pr[t];
        task_pr[t]=np;
        st.erase({old,t});
        st.insert({np,t});
    }
    
    void rmv(int t) {
         int old=task_pr[t];
        st.erase({old,t});
        task_user.erase(t);
        task_pr.erase(t);
    }
    
    int execTop() {
        if(st.empty())return -1;
        pair<int,int>v=*st.rbegin();
        st.erase(v); 
        return task_user[v.second];
    }
};

/**
 * Your TaskManager object will be instantiated and called as such:
 * TaskManager* obj = new TaskManager(tasks);
 * obj->add(userId,taskId,priority);
 * obj->edit(taskId,newPriority);
 * obj->rmv(taskId);
 * int param_4 = obj->execTop();
 */