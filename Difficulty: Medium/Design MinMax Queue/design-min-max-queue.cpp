class SpecialQueue {

  public:

    queue<int>q;
    deque<int>minQ,maxQ;
    void enqueue(int x) {
        // Insert element into the queue
        q.push(x);
        while(!maxQ.empty() and x>maxQ.back())maxQ.pop_back();
        maxQ.push_back(x);
        
        while(!minQ.empty() and x<minQ.back())minQ.pop_back();
        minQ.push_back(x);
        
    }

    void dequeue() {
        // Remove element from the queue
        if(q.empty())return;
        int val=q.front(); q.pop();
        if(!maxQ.empty() and maxQ.front()==val)maxQ.pop_front();
         if(!minQ.empty() and minQ.front()==val)minQ.pop_front();
    }

    int getFront() {
        // Get front element
        return q.front();
    }

    int getMin() {
        // Get minimum element
        return minQ.front();
    }

    int getMax() {
        // Get maximum element
        return maxQ.front();
    }
};