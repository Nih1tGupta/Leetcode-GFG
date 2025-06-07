class Solution {
public:
    typedef pair<char, int> P;
    struct comp{
        bool operator()(P &p1, P& p2){
            if(p1.first == p2.first) {
                return p1.second < p2.second;
            }
            return p1.first > p2.first;
        }
    };
    string clearStars(string s) {
        string res=s;
        priority_queue<P, vector<P>, comp> pq;
        for(int i=0;i<res.length();i++){
            if(res[i]!='*'){pq.push({res[i],i});}
            else{
                int idx=pq.top().second;
                pq.pop();
                res[idx]='*';
            }
        }
        string v;
    for(int i=0;i<res.length();i++){
        if(res[i]!='*'){v+=res[i];}
    }
    return v;
    }
};