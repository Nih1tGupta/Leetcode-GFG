class Solution {
public:
    int maxContainers(int n, int w, int maxi) {
        int c=maxi/w;
        return (n*n>c)?c:n*n;
    }
};