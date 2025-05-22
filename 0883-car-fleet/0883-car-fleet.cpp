#include <vector>
#include <algorithm>

class Car {
public:
    int position;
    double time;
    Car(int p, double t) : position(p), time(t) {}
};

class Solution {
public:
    int carFleet(int target, std::vector<int>& position, std::vector<int>& speed) {
        int N = position.size();
        std::vector<Car> cars;
        for (int i = 0; i < N; ++i)
            cars.emplace_back(position[i], static_cast<double>(target - position[i]) / speed[i]);
        
        std::sort(cars.begin(), cars.end(), [](const Car& a, const Car& b) {
            return a.position < b.position;
        });

        int ans = 0, t = N;
        while (--t > 0) {
            if (cars[t].time < cars[t-1].time) ans++; // if cars[t] arrives sooner, it can't be caught
            else cars[t-1] = cars[t]; // else, cars[t-1] arrives at same time as cars[t]
        }

        return ans + (t == 0 ? 1 : 0); // lone car is fleet (if it exists)
    }
};
