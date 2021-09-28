package Data_Structure_Study.Queue;


import java.util.Scanner;

public class QueueMain {
    public static void main(String[] ar) throws InterruptedException {
        Scanner sc = new Scanner(System.in);

        System.out.println("최대 용량 입력 하세요");
        int max_cap = sc.nextInt();

        Queue que = new Queue(max_cap);

        String[] name = {"박정현","조영훈","박기범","나지성","안병기","김법기"};
        System.out.println("현재 대기자 수: "+name.length);


       for(int i=0; i<name.length; i++){
           System.out.println((i+1)+"번 대기자 : " + que.enque(name[i]));
       }
       System.out.print("대기 순서 : ");
       que.dump();

        System.out.println(que.indexOf("나지성"));

       for(int i =1; i<=name.length; i++){
           System.out.println(i+"번 대기자 입장 :" +que.deque());
           Thread.sleep(2000); //아두이노 시간지연.  2초 지연.
       }
       que.dump();
    }
}
