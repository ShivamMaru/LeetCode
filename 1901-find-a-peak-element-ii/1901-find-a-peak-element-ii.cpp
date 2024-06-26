class Solution {
public:
    int maxxfind(vector<vector<int>>& mat,int m , int n, int col){
        int index = -1;
        int maxxvalue = -1;
        for(int i=0; i<m; i++){
            if(mat[i][col] > maxxvalue){
                maxxvalue = mat[i][col];
                index = i;
            }
        }
        return index;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {

        int m = mat.size();
        int n = mat[0].size();
        int low = 0; int high = n-1;
        while(low<=high){

            int mid = (low+(high-low)/2);

            int rowindex = maxxfind(mat , m  ,n , mid);

            int left = mid-1>=0 ? mat[rowindex][mid-1] : -1;
            int right = mid+1<n ? mat[rowindex][mid+1] : -1;

            if(mat[rowindex][mid] > left &&  mat[rowindex][mid]> right )
                return {rowindex,mid};

            else if(mat[rowindex][mid]<left)
                high = mid-1;
            else
                low = mid+1;      
            
         }

         return {-1,-1};
        
    }
};