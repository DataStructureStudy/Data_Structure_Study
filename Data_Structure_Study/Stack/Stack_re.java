package Data_Structure_Study.Stack;

public class Stack_re {
    public static void main(String[] args){
        StringStack stack = new StringStack(10);

        String hello = "Hello";
        for(int i=0; i<hello.length(); i++){
                stack.push(hello.charAt(i));
        }
        stack.dump();
        System.out.println();
        while(stack.is_empty()){
            System.out.println("스택["+stack.size()+"]의 값: "+stack.pop());
        }

    }
}
