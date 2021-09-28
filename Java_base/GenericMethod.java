package Java_base;


import java.util.Arrays;

public class GenericMethod{
    public <T extends Number>void method1(T t){
        System.out.println(t.intValue());//값을 정수로 리턴하는 Number 클래스의 메서드
    }
    static void pirnt(){
        System.out.println("ㅎㅇ");
    }
    public void print(){
        System.out.println("ㅎㅇ");
    }

    static void print1(){
        System.out.println("밥");
    }
    public static void main(String[] ar){
        GenericMethod g = new GenericMethod();


    }
}






























