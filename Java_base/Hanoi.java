package Java_base;


import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Hanoi {
    static void move(int no, int x, int y){
        if(no>1){
            move(no-1,x,6-x-y);
        }
        System.out.println("원반 "+no+" 을 "+x+" 번 기둥에서 "+y+" 번 기둥으로 옮김");
        if(no>1){
            move(no-1,6-x-y,y);
        }
    }
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        System.out.print("원반 수 입력 :");
        int no = Integer.parseInt(br.readLine());

        move(no,1,3);
    }
}
