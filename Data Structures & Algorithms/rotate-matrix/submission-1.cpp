class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int half = n/2;
        n--;
        for(int i=0; i<half; i++) {
            for(int j=i; j<n-i; j++) {
                int a = n-j, b = i;
                for(int k=0; k<3; k++) {
                    swap(matrix[a][b], matrix[n-b][a]);
                    swap(a,b);
                    a = n-a;
                }
            }
        }
        //i,j -> j,n-i -> n-i,n-j -> n-j,i -> i,j
    }
};
