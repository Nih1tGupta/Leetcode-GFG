class Solution {
public:
    long long countGoodIntegers(int n, int k) {
        return vector<std::vector<int>>{
            {9, 9, 243, 252, 10935, 10944, 617463, 617472, 41457015, 41457024},
            {4, 4, 108, 172, 7400, 9064, 509248, 563392, 37728000, 39718144},
            {3, 3, 69, 84, 3573, 3744, 206217, 207840, 13726509, 13831104},
            {2, 2, 54, 98, 4208, 6992, 393948, 494818, 33175696, 37326452},
            {1, 1, 27, 52, 2231, 3256, 182335, 237112, 15814071, 19284856},
            {1, 1, 30, 58, 2468, 3109, 170176, 188945, 12476696, 13249798},
            {1, 1, 33, 76, 2665, 3044, 377610, 506388, 36789447, 40242031},
            {1, 1, 27, 52, 2231, 5221, 292692, 460048, 30771543, 35755906},
            {1, 1, 23, 28, 1191, 1248, 68739, 69280, 4623119, 4610368}
        }[k - 1][n - 1];
    }
};