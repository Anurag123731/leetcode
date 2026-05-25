
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
         vector<vector<int>>a(m,vector<int>(n,-1));
          
        ListNode* temp=head;
       

    int minr = 0, minc = 0;
    int maxr = m - 1, maxc = n - 1;
    int x = 1;

    while (minr <= maxr && minc <= maxc) {
        for (int j = minc; j <= maxc; j++) {
            if(temp==NULL) return a;
            a[minr][j] = temp->val;
            temp=temp->next;
        }
        minr++;

        if (minr > maxr || minc > maxc) break;

        for (int i = minr; i <= maxr; i++) {
            if(temp==NULL) return a;
            a[i][maxc] = temp->val;
            temp=temp->next;
        }
        maxc--;

        if (minr > maxr || minc > maxc) break;

        for (int j = maxc; j >= minc; j--) {
            if(temp==NULL) return a;
            a[maxr][j] = temp->val;
            temp=temp->next;
        }
        maxr--;

        if (minr > maxr || minc > maxc) break;

        for (int i = maxr; i >= minr; i--) {
            if(temp==NULL) return a;
            a[i][minc] = temp->val;
            temp=temp->next;
        }
        minc++;
    }
    return a;
        
    }
};
