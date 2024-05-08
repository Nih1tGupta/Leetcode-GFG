class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
         int n = nums2.size();
        vector<int> store(n,-1);
        stack<int> st;

        for(int i=0;i<n;i++){
            while(!st.empty() && nums2[i]>nums2[st.top()]){
                store[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }

        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums2[i]] = store[i]==-1 ? -1 : nums2[store[i]];
        }

        vector<int> ans(nums1.size(),-1);
        for(int i=0;i<nums1.size();i++){
            ans[i] = mp[nums1[i]];
        }

        return ans;
    }
};