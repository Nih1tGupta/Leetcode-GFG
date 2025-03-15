class Spreadsheet {
public:
bool ischara(string &s){
    return isalpha(s[0]);
}
int valuelao(string &s){
    if(mp[s]>0){return mp[s];}
    return 0;
}
unordered_map<string,int>mp;
    Spreadsheet(int rows) {
       mp.clear(); 
    }
    
    void setCell(string cell, int value) {
        mp[cell]=value;
    }
    
    void resetCell(string cell) {
        mp.erase(cell);
    }
    
    int getValue(string s) {
        // ='X+Y
    s=s.substr(1);
    int idx=s.find('+');
    string l=s.substr(0,idx);
    string r=s.substr(idx+1);
    int left= ischara(l) ? valuelao(l) : stoi(l);
    int right=ischara(r) ? valuelao(r) : stoi(r);
    return left+right;
    }
};

/**
 * Your Spreadsheet object will be instantiated and called as such:
 * Spreadsheet* obj = new Spreadsheet(rows);
 * obj->setCell(cell,value);
 * obj->resetCell(cell);
 * int param_3 = obj->getValue(formula);
 */