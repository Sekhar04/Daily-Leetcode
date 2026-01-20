// Last updated: 1/20/2026, 5:27:03 PM
class Solution {
    public boolean lemonadeChange(int[] bills) {
        int fives = 0;
        int tens = 0;
        for (int i = 0; i < bills.length && fives >= 0; i++) {
            switch (bills[i]) {
                case 5: 
                    fives++; 
                    break;
                case 10: 
                    fives--; 
                    tens++; 
                    break;
                case 20:
                    if (tens > 0) {
                        tens--;
                        fives--;
                    }
                    else {
                        fives -= 3;
                    }
            }
        }
        return fives >= 0;
    }
}