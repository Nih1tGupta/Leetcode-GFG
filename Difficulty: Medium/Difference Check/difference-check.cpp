class Solution {
  public:
    int timeToSeconds(const string& timeStr) {
    int h = stoi(timeStr.substr(0, 2));  // Extract "HH"
    int m = stoi(timeStr.substr(3, 2));  // Extract "MM"
    int s = stoi(timeStr.substr(6, 2));  // Extract "SS"
    return h * 3600 + m * 60 + s;
}
    int minDifference(vector<string> &arr) {
         vector<int> seconds;

    // Convert all time strings to seconds
    for (string& t : arr) {
        seconds.push_back(timeToSeconds(t));
    }

    // Sort the seconds
    sort(seconds.begin(), seconds.end());

    int minDiff = INT_MAX;

    // Check difference between consecutive times
    for (int i = 1; i < seconds.size(); ++i) {
        int diff = seconds[i] - seconds[i - 1];
        minDiff = min(minDiff, diff);
    }

    // Check wrap-around difference (midnight)
    int wrapAroundDiff = (86400 - seconds.back()) + seconds[0];
    minDiff = min(minDiff, wrapAroundDiff);

    return minDiff;
        
    }
};
