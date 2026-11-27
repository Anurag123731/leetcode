class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {

        int n = customers.size();

        int currLoss = 0;

        // Initial window
        for (int i = 0; i < minutes; i++) {
            if (grumpy[i] == 1)
                currLoss += customers[i];
        }

        int maxLoss = currLoss;
        int idx = 0;

        int i = 1;
        int j = minutes;

        while (j < n) {

            if (grumpy[j] == 1)
                currLoss += customers[j];

            if (grumpy[i - 1] == 1)
                currLoss -= customers[i - 1];

            if (currLoss > maxLoss) {
                maxLoss = currLoss;
                idx = i;
            }

            i++;
            j++;
        }

        // Apply secret technique
        for (int k = idx; k < idx + minutes; k++) {
            grumpy[k] = 0;
        }

        int sum = 0;

        for (int k = 0; k < n; k++) {
            if (grumpy[k] == 0)
                sum += customers[k];
        }

        return sum;
    }
};