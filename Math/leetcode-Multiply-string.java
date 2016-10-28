public class Solution {
    public String multiply(String num1, String num2) {
        int m = num1.length();
        int n = num2.length();
        int[] res = new int[m + n];
        
        for(int i = m - 1; i >= 0; i--){
            for(int j = n - 1; j >= 0; j--){
                int mul = (num1.charAt(i) - '0') * (num2.charAt(j) - '0');
                int pos1 = i + j;
                int pos2 = i + j + 1;
                
                int sum = mul + res[pos2];
                
                res[pos1] += sum/10;
                res[pos2] = sum % 10;
            }
        }
        StringBuilder finalR = new StringBuilder();
        for(int t : res){
            if(!(t == 0 && finalR.length() == 0)){
                finalR.append(t);
            }
        }
        
        return finalR.length() == 0 ? "0":finalR.toString();
    }
}