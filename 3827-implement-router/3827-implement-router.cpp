class Router {
 using Packet = array<int, 3>;
    queue<Packet> q;
    set<Packet> st;
    map<int, vector<int>> mp;
    int limit;
    
    void removePacket() {
        auto p = q.front();
        st.erase(p);
        *lower_bound(mp[p[1]].begin(), mp[p[1]].end(), p[2]) = 0;
        q.pop();
    }
    
public:
    Router(int memoryLimit) {
        limit = memoryLimit;
    }
    
    bool addPacket(int src, int dest, int timestamp) {
        Packet packet = {src, dest, timestamp};
        if (st.contains(packet)) return false;
        
        if (q.size() == limit) removePacket();
        
        q.push(packet);
        st.insert(packet);
        mp[dest].push_back(timestamp);
        
        return true;
    }
    
    vector<int> forwardPacket() {
        if (q.empty()) return {};
        auto p = q.front();
        removePacket();
        return {p[0], p[1], p[2]};
    }
    
    int getCount(int dest, int startTime, int endTime) {
        auto &v = mp[dest];
        return upper_bound(v.begin(), v.end(), endTime) - lower_bound(v.begin(), v.end(), startTime);
    }
};

/**
 * Your Router object will be instantiated and called as such:
 * Router* obj = new Router(memoryLimit);
 * bool param_1 = obj->addPacket(source,destination,timestamp);
 * vector<int> param_2 = obj->forwardPacket();
 * int param_3 = obj->getCount(destination,startTime,endTime);
 */