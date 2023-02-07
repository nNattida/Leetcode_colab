//Leet code 1. Two Sum

// Online C++ compiler to run C++ program online
#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std;

int main() {
    // Write C++ code here
    vector<int> nums = {3,3}; // input
    int target = 6;
    int len = nums.size();
    unordered_map<int, int> temp_nums;
    
    for (int i=0; i < len; i++){
        int remain = target - nums[i];
        if(temp_nums.count(remain)){
            cout << temp_nums[remain] << i; //output
        }
        temp_nums[nums[i]] = i;      
    }
    
    //For check key and value in unordered map
    for(const auto& key_value: temp_nums) {
        int key = key_value.first;
        int value = key_value.second;
        //cout << key << " - " << value << endl;
    }
  
    return 0;
}
