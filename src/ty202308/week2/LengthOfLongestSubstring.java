package ty202308.week2;

import java.util.HashSet;

public class LengthOfLongestSubstring {
    public static void main(String[] args) {
        LengthOfLongestSubstring obj = new LengthOfLongestSubstring();
        int res = obj.lengthOfLongestSubstring("aab");
        System.out.println(res);

    }

    public int lengthOfLongestSubstring(String s) {
        int res = 0;
        HashSet<Character> characters = new HashSet<>();
        for (int i = 0; i < s.length(); ) {
            for (int j = i; j < s.length(); ) {
                if (!characters.contains(s.charAt(j))) {
                    characters.add(s.charAt(j));
                    j++;
                    res = Math.max(res, j - i);
                } else {
                    res = Math.max(res, j - i );
                    characters.clear();
                    i++;
                    break;
                }
            }
        }
        return res;
    }
}
