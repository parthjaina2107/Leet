class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int j = -1;
        for(int i = 0;i<arr.size();i++){
            if(arr[i]==0){
                j=i;
                break;
            }
        }
        if(j==-1) return;
        for(int i =j+1 ; i<arr.size();i++){
            if(arr[i]!=0){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                j++;
            }
        }
    }
};