class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
         set<int>st;
        sort(arr.begin(),arr.end());

        int cnt=1;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]==arr[i+1])cnt++;
            else{
                if(st.find(cnt)==st.end()){
                    st.insert(cnt);
                    cnt=1;
                }
                else{
                    return false;
                }

            }
        }

        if(st.find(cnt)!=st.end())return false;
        return true;
    }
};