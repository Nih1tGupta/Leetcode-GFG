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
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ing, vector<string>& supplies) {
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
        unordered_set<string>s(supplies.begin(),supplies.end());
        int sz=recipes.size();
        vector<bool>vis(sz,0);
        vector<string>v;
        int curr=0;
        while(sz--){
            for(int i=0;i<recipes.size();i++){
                if(vis[i])continue;
                auto material=ing[i];
                int c=0;
                vector<string>t;
                for(auto it:material){
                    if(s.find(it)!=s.end()){ c++;}
                    else{t.push_back(it);}
                }
                if(c==material.size()){
                    s.insert(recipes[i]);
                    v.push_back(recipes[i]);
                    vis[i]=true;
                    curr++;
                }
                else{
                    ing[i]=t;
                }
            }
        }
        return v;
    }
};