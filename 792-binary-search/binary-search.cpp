class Solution {
public:
    int binarysearch(vector <int>& arr,int target,int st,int end){
        if(st<=end){
            int mid=st+(end-st)/2;
            if(arr[mid]==target) return mid;
            if(arr[mid]<target){
                return binarysearch(arr,target,mid+1,end);
            }
            else return binarysearch(arr,target,st,mid-1);
        }
        return -1;
    }
    int search(vector<int>& arr, int target) {
        return binarysearch(arr,target,0,arr.size()-1);
        
    }
};