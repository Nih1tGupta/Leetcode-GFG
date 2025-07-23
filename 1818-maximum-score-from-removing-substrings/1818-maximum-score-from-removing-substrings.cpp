class Solution {
public:
      int removePairs(string& s, char first, char second, int reward) {
        string st; // simulate stack
        int score = 0;

        for (char ch : s) {
            // If we find the target pair (first followed by second), pop and earn reward
            if (!st.empty() && st.back() == first && ch == second) {
                st.pop_back();    // remove matched first character
                score += reward;  // add score
            } else {
                st.push_back(ch); // push current char
            }
        }

        s = st; // update s to leftover characters for next pass
        return score;
    }

    // // Build the remaining string after removals
    // string rem = "";
    // while (!st.empty()) {
    //     rem += st.top();
    //     st.pop();
    // }
    // reverse(rem.begin(), rem.end());
    // s = rem;
    // return res;
    // }


    int maximumGain(string s, int x, int y) {
        // int n=s.length();
        // long long maxi=-1;
        // for(int i=0;i+1<n;i++){
        //     string temp=s;
        //     if(s[i]=='a' and s[i+1]=='b'){
        //         temp.erase(i,2);
        //         maxi=max(maxi, x+maximumGain(temp,x,y));
        //     }
        //     else if(s[i]=='b' and s[i+1]=='a'){
        //         temp.erase(i,2);
        //         maxi=max(maxi, y+maximumGain(temp,x,y));
        //     }
        // }   exponential-> n*n^n/2
        // return maxi;
        
        // greedy+stack
         int total = 0;

        // Greedily remove the more valuable pair first
        if (x > y) {
            total += removePairs(s, 'a', 'b', x); // remove "ab"
            total += removePairs(s, 'b', 'a', y); // remove "ba"
        } else {
            total += removePairs(s, 'b', 'a', y); // remove "ba"
            total += removePairs(s, 'a', 'b', x); // remove "ab"
        }

        return total;
    }
};