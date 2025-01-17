// Distance Between Bus Stops

#include <iostream>
#include <vector>

class Solution {
public:
    int distanceBetweenBusStops(std::vector<int>& distance, int start, int destination) {
        int sum = 0;
        for (int i = 0; i < distance.size(); i++) {
            sum += distance[i];
        }
        int clockwise = 0;
        int counterclockwise = 0;
        if (start < destination) {
            for (int i = start; i < destination; i++) {
                clockwise += distance[i];
            }
            counterclockwise = sum - clockwise;
        } else {
            for (int i = destination; i < start; i++) {
                clockwise += distance[i];
            }
            counterclockwise = sum - clockwise;
        }
        return std::min(clockwise, counterclockwise);
    }
};

int main() {
    Solution solution;
    std::vector<int> distance = {1, 2, 3, 4};
    int start = 0;
    int destination = 1;
    std::cout << solution.distanceBetweenBusStops(distance, start, destination) << std::endl;
    return 0;
}