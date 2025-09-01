class Solution {
  public:
  


    int sumOfModes(vector<int>& arr, int k) {
    // int n = (int)arr.size();
    // long long ans = 0;
    // for (int i = 0; i + k <= n; ++i) {
    //     unordered_map<int, int> freq;
    //     for (int j = i; j < i + k; ++j){++freq[arr[j]];}
    //     int bestVal = INT_MAX;
    //     int bestCnt = -1;
    //     for (const auto& p : freq) {
    //         int val = p.first, cnt = p.second;
    //         if (cnt > bestCnt || (cnt == bestCnt && val < bestVal)) {
    //             bestCnt = cnt;bestVal = val;
    //         }
    //     }
    //     ans += bestVal;
    // }
    // return ans;
    
      int n = arr.size();
    if(n < k) return 0;

    unordered_map<int,int> freq;                
    map<int, set<int>> bucket;                  
    int maxFreq = 0;

    auto add = [&](int x) {
        int f = freq[x];
        if(f > 0) {
            bucket[f].erase(x);
            if(bucket[f].empty()) bucket.erase(f);
        }
        freq[x]++;
        bucket[f+1].insert(x);
        maxFreq = max(maxFreq, f+1);
    };

    auto remove = [&](int x) {
        int f = freq[x];
        bucket[f].erase(x);
        if(bucket[f].empty()) bucket.erase(f);
        freq[x]--;
        if(freq[x] > 0) bucket[f-1].insert(x);
        if(bucket.find(maxFreq) == bucket.end()) maxFreq--;
    };

    auto getMode = [&]() {
        return *bucket[maxFreq].begin(); 
    };

    for(int i=0;i<k;i++) add(arr[i]);
    int ans = getMode();

    for(int i=0,j=k;j<n;i++,j++){
        remove(arr[i]);
        add(arr[j]);
        ans += getMode();
    }

    return ans;
    }
};