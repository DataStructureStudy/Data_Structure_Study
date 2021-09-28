package Data_Structure_Study.Queue;

import java.util.LinkedList;
import java.util.Queue;

public class QueueAPI {
    public static void main(String[] args) {
        Queue<String> que = new LinkedList<>();

        String[] name = {"박정현","조영훈","박기범","나지성","안병기","김법기"};

        for(int i=0; i<name.length; i++){
            que.add(name[i]);
        }
        System.out.println(que.poll());
        System.out.println(que.poll());
        System.out.println(que.poll());
        System.out.println(que.poll());
        System.out.println(que.poll());
        System.out.println(que.poll());

    }

}
