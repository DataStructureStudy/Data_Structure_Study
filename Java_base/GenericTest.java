package Java_base;

public class GenericTest {
    static class GenericClass<T>{
        private T xyz; // 제네릭 T타입 변수 xyz
        GenericClass(T t){ //제네릭 클래스 생성자
            this.xyz =t;
        }
        T getXyz(){ //getter
            return xyz;
        }
    }
    public static void main(String[] args){
        GenericClass<String> s= new GenericClass<String>("ABC");
        GenericClass<Integer> n = new GenericClass<Integer>(123);

        System.out.println(s.getXyz()); // 출력 ABC
        System.out.println(n.getXyz()); // 출력 123
    }
}
