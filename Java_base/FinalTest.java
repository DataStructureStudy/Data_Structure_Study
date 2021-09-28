package Java_base;

class A1{
    final void abc(){
        System.out.println("왈왈");
    }
}
public class FinalTest extends A1 {
    final void abc(int a) {
        if(a==1)
        System.out.println("왈왈");
    }

    public static void main(String[] ar) {
        FinalTest ft = new FinalTest();
        ft.abc();
        ft.abc(1);
    }
}
