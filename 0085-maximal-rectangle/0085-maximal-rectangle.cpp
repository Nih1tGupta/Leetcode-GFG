class Solution {
public:
    vector<int>getnsr(vector<int>&height){
        stack<int>st;
         int n=height.size();
            vector<int>NSR(n);
        for(int i=n-1;i>=0;i--){
            if(st.empty()){NSR[i]=n;}
            else{
                while(!st.empty() and height[st.top()]>=height[i]){st.pop();}
                if(st.empty()){NSR[i]=n;}
                else{NSR[i]=st.top();}
            }
            st.push(i);
        }
            return NSR;                             
    }                           
    vector<int>getnsl(vector<int>&height){
          stack<int>st;
         int n=height.size();
            vector<int>NSL(n);
        for(int i=0;i<n;i++){
            if(st.empty()){NSL[i]=-1;}
            else{
                while(!st.empty() and height[st.top()]>=height[i]){st.pop();}
                if(st.empty()){NSL[i]=-1;}
                else{NSL[i]=st.top();}
            }
            st.push(i);
        }
            return NSL;   
    }
    int maxarea(vector<int>&height){
        
        vector<int>NSR=getnsr(height);
         vector<int>NSL=getnsl(height);
        int n=height.size();
        vector<int>width(n);
        for(int i=0;i<n;i++){width[i]=(NSR[i]-NSL[i]-1);}
        int maxii=0;
        for(int i=0;i<n;i++){
            int a=width[i]*height[i];
            maxii=max(maxii,a);
        }
        return maxii;
    }
    
    
    int maximalRectangle(vector<vector<char>>& matrix) {
        int m=matrix.size();int n=matrix[0].size();
//         converting to 1D ARRRAY
        vector<int>height(n);
        for(int i=0;i<n;i++){  height[i]=(matrix[0][i]=='1')?1:0;  }
        int maxi=maxarea(height);
        
        for(int row=1;row<m;row++){
            for(int col=0;col<n;col++){
                if(matrix[row][col]=='0'){height[col]=0;}
                else{height[col]+=1;}
            }
                maxi=max(maxi,maxarea(height));
        }
        return maxi;
    }
};