class ProductOfNumbers {
public:
vector<int>v;
int pro=1;
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        if(num==0){
            v.clear();
            pro=1;
        }
        else{
            pro*=num;
            v.push_back(pro);
        }
    }
    
    int getProduct(int k) {
        if(v.size()<k)return 0;
        if(v.size()==k)return v.back();
        return v.back()/v[v.size()-k-1];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */