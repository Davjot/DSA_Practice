class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int i = 0;
        int n = arr.size();
        while(i < n){
            if(arr[i] == 0){
                arr.insert(arr.begin() + i, 0);
                i = i + 2;
            }
            else{
                i++;
            }
        }
        arr.resize(n);
    }
};
