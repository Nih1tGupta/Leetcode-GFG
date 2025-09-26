class Solution {
  public:
    void rotateDeque(deque<int>& dq, int type, int k) {
        // code here
        if(type==2){
            while(k--){
                int samne= dq.front();dq.pop_front();
                dq.push_back(samne);
            }
        }
        else{
            while(k--){
                int samne= dq.back();dq.pop_back();
                dq.push_front(samne);
            }
        }
    }
};