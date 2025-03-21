class Solution {
public:
    // bool possible( vector<string>& ing, vector<string>& supplies){
    //      int sz=ing.size();int n=supplies.size();
    //      int c=0;
    //      for(int i=0;i<sz;i++){
    //         for(int j=0;j<n;j++){
    //             if(ing[i]==supplies[j]){c++;}
    //         }
    //      }
    //      return (c==sz);
    // }
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
        // vector<string>v;
        // unordered_set<string>st;
        // for(int i=0;i<recipes.size();i++){
        //     string tomake=recipes[i];
        //     if(possible(ing[i],supplies)){
        //         v.push_back(tomake);
        //         st.insert(tomake);
        //         supplies.push_back(tomake);
        //     }
        // }
        // for(int i=0;i<recipes.size();i++){
        //     string tomake=recipes[i];
        //     if(possible(ing[i],supplies)){
        //         if(st.find(tomake)==st.end()){
        //             v.push_back(tomake);
        //         }
        //     }
        // }
        // return v;
        int n = recipes.size();
        vector<string> ans;
        unordered_set<string> st(supplies.begin(), supplies.end());
        int cnt = n;
        while (cnt--) {
            for (int i = 0; i < n; i++) {
                bool flag = true;
                if (st.find(recipes[i]) != st.end())
                    continue;
                for (int j = 0; j < ingredients[i].size(); j++) {
                    if (st.find(ingredients[i][j]) == st.end()) {
                        flag = false;
                        break;
                    }
                }
                if (flag) {
                    ans.push_back(recipes[i]);
                    st.insert(recipes[i]);
                }
            }
        }
        return ans;
    }
};