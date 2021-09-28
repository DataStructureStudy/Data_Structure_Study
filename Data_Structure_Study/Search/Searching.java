package Data_Structure_Study.Search;

import java.util.Arrays;
import java.util.Scanner;
public class Searching { //검색
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        //1차원 문자열 배열임.
        String[] x = {
                "abstract",   "assert",       "boolean",   "break",      "byte",
                "case",       "catch",        "char",      "class",      "const",
                "continue",   "default",      "do",        "double",     "else",
                "enum",       "extends",      "final",     "finally",    "float",
                "for",        "goto",         "if",        "implements", "import",
                "instanceof", "int",          "interface", "long",       "native",
                "new",        "package",      "private",   "protected",  "public",
                "return",     "short",        "static",    "strictfp",   "super",
                "switch",     "synchronized", "this",      "throw",      "throws",
                "transient",  "try",          "void",      "volatile",   "while"
        };

        System.out.print("원하는 키워드 입력 : ");
        String key = sc.next();
        int idx = Arrays.binarySearch(x,key);
        //삽입 포인트가 리턴

        if(idx < 0) System.out.println("못 찾음" + "삽입 포인트 = " + idx);
        else System.out.println("찾음 "+idx+" 에 있음");

    }
}

