class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.find(part)!=string::npos){
            // Using s.find(part) != -1 in while is not ideal because std::string::find() returns size_t, which is an unsigned integer. Instead, it is better to compare with std::string::npos:
            s.erase(s.find(part),part.length());
        }
        return s;
    }
};