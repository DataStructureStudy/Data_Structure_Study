package Data_Structure_Study.Stack;

import java.util.Scanner;

public class StackTest {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("스택의 용량을 입력하세요");
        int capacity = sc.nextInt();
        IntStack stack = new IntStack(capacity); //capacity개 짜리 스택 생성

        while (true) {
            System.out.println("=========== 스택 정보 ===========");
            System.out.println("스택 용량 : " + stack.capacity());
            System.out.println("스택 크기 : " + stack.size());
            System.out.println("================================");

            System.out.print("[1]푸시 [2]팝 [3]피크 [4]덤프 [0]종료 : ");
            int menu = sc.nextInt();
            if (menu == 0) break;

            int data;
            switch (menu) {
                case 1:
                    System.out.print("데이터 : ");
                    data = sc.nextInt();
                    try {
                        stack.push(data);
                    } catch (IntStack.OverflowIntStackExcetion e) {
                        System.out.println("스택이 가득 찼습니다.");
                    }
                    break;

                case 2:
                    try {
                        System.out.println("데이터 " + stack.pop() + "을 지웠습니다.");
                    } catch (IntStack.EmptyIntStackExcetion e) {
                        System.out.println("스택이 비어있습니다.");
                    }
                    break;

                case 3:
                    try {
                        System.out.println("최상단 데이터 :" + stack.peek());
                    } catch (IntStack.EmptyIntStackExcetion e) {
                        System.out.println("스택이 비어있습니다.");
                    }
                    break;

                case 4:
                    stack.dump();
                    break;
            }
        }
    }
}
