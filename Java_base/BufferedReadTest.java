package Java_base;

import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.OutputStreamWriter;

public class BufferedReadTest {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        String s =br.readLine(); // 요런거 쓸 때 IOException
        int num = Integer.parseInt(br.readLine());

        int num2 = br.read(); //아스키 코드로 저장.
        bw.write(s+"\n"); // 문자열
        bw.write(num+"\n"); // 정수
        bw.write(num2+"\n"); // 아스키 코드
        bw.flush();
        bw.close();
    }
}
