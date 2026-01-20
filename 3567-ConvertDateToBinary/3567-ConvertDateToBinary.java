// Last updated: 1/20/2026, 5:26:14 PM
class Solution {
    public String convertDateToBinary(String date) {
        if(date == null ||date.length() != 10 ){
            return "Invalid Format!";
        }
        if(date.charAt(4) != '-' || date.charAt(7) != '-'){
            return "Invalid Format!";
        }
        String [] parts = date.split("-");
        int year = Integer.parseInt(parts[0]);
        int month = Integer.parseInt(parts[1]);
        int day = Integer.parseInt(parts[2]);

        if(year >2100||year <1900||month<1||month>12||day>31||day<1){
            return"Out of Range";
        }

        return Integer.toBinaryString(year) + "-" +
               Integer.toBinaryString(month) + "-" +
               Integer.toBinaryString(day);

    }
}