<<<<<<< HEAD
class Solution {
public:
    int hIndex(vector<int>& citations) {
        int size = citations.size();

        int first = 0;
        int mid;
        int count = size;
        int step;

        while (count > 0) {
            step = count / 2;
            mid = first + step;
            if (citations[mid] < size - mid) {
                first = mid + 1;
                count -= (step + 1);
            }
            else {
                count = step;
            }
        }

        return size - first;
    }
=======
class Solution {
public:
    int hIndex(vector<int>& citations) {
        int size = citations.size();

        int first = 0;
        int mid;
        int count = size;
        int step;

        while (count > 0) {
            step = count / 2;
            mid = first + step;
            if (citations[mid] < size - mid) {
                first = mid + 1;
                count -= (step + 1);
            }
            else {
                count = step;
            }
        }

        return size - first;
    }
>>>>>>> 6200c8704614e918c8bfa5357c648dd1b4f7eb74
};