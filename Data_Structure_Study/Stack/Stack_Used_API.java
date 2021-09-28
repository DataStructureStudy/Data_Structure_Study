package Data_Structure_Study.Stack;


import java.util.Stack;
public class Stack_Used_API{

    public static void main(String[] args){

        Stack<Integer> stack = new Stack<>();

        for(int i =0; i<10; i++){
            stack.push(i);
        }
        System.out.println("스택 : "+stack);
        System.out.println("피크 실행: "+stack.peek());
        System.out.println("검색:"+stack.search(7));
        while (!stack.empty()){
            System.out.print("팝"+stack.pop());
        }

    }
}

