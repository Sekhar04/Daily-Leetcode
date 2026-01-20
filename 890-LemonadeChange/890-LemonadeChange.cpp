// Last updated: 1/20/2026, 5:26:58 PM
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int i;
        int count = 0;
        int counts = 0;
        for(i = 0;i < bills.size(); i++){
            if(bills[i] == 5) count++;
            if(bills[i] == 10) {
                counts++;
                if(count == 0) return false;
                count--;
        }
        if(bills[i] == 20){
            if (count > 0 && counts > 0){
            counts--;
            count--;
            }else if(count >= 3 && counts == 0){
                count -=3;
            }else{
                return false;
            }
        }
        }
        return true;
    }
};