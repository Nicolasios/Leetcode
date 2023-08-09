package ty202308.week2;

import java.util.Arrays;

public class ReverseString {
    //    编写一个函数，其作用是将输入的字符串反转过来。输入字符串以字符数组 s 的形式给出。
    //    不要给另外的数组分配额外的空间，你必须原地修改输入数组、使用 O(1) 的额外空间解决这一问题。

    public static void main(String[] args) {
        String s = "abcdefghijk";
        char[] chars = s.toCharArray();
        ReverseString reverseString = new ReverseString();
        reverseString.reverseString(chars);
        String out = Arrays.toString(chars);
        System.out.println(out);
        System.out.println(s);
    }

    public void reverseString(char[] s) {
        int length = s.length;
        for (int begin = 0, end = length - 1; begin <= end; begin++, end--) {
            char tmp = s[begin];
            s[begin] = s[end];
            s[end] = tmp;
        }
    }
}
