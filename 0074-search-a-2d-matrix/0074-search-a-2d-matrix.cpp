class Solution {
public:

    bool search(vector<int> arr , int m , int target){

        int low = 0; int high = m-1;
        while(low<=high){
            int mid = (low+(high-low)/2);

            if(arr[mid] == target)
                return true;
            else if(arr[mid] > target)
                high = mid-1;
            else
                low = mid+1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int m = matrix[0].size();
        bool x;

        for(int i=0; i<matrix.size(); i++){

            x |= search(matrix[i] , m , target);

            
        }

        return x;
    }
};