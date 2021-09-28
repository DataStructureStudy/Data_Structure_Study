package Java_base;

public class StaticTest {
    int a;
    static int b;
    static int n1 = 600;
    static int n2= 500;

    public StaticTest(int a) {
        this.a = a;
    }

    // 인스턴스 필드 초기화
    static int add(){

        return StaticTest.n1 + StaticTest.n2;
    }
    static {
        b = add();
        System.out.println("나는 정적 블록~ 제일 먼저 실행~");
    }

    public static void main(String[] ar){
        StaticTest st = new StaticTest(10);
        System.out.println("인스턴스 : "+st.a);
        System.out.println("정적 : "+StaticTest.b);

    }
}
