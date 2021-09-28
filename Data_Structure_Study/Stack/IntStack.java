package Data_Structure_Study.Stack;

public class IntStack {
    private int max; //스택 용량
    private int top; //스택 포인터
    private int[] stack; //스택 배열

    //사용자 예외 메서드///
    //실행 시 예외 : 스택이 꽉참 있음
    class OverflowIntStackExcetion extends RuntimeException {
        public OverflowIntStackExcetion() {
        }
    }

    // 실행 예외 : 스택이 비어 있음
    class EmptyIntStackExcetion extends RuntimeException {
        public EmptyIntStackExcetion() {
        }
    }

    //스택을 초기화해주고 스택이라는 객체를 만들어줌
    IntStack(int capacity) {
        this.top = -1;
        this.max = capacity;
        try {
            stack = new int[max];
        } catch (OutOfMemoryError e) { //메모리 누수 관련
            max = 0;
        }
    }

    //스택 메서드
    int push(int data) throws OverflowIntStackExcetion {
        if (this.top >= this.max) { // == 부호도 가능한데 등가부호를 사용하는 이유가 있음
            throw new OverflowIntStackExcetion();
        }
        return this.stack[++this.top] = data;
    }

    int pop() throws EmptyIntStackExcetion {
        if (this.top < 0) {
            throw new EmptyIntStackExcetion(); //C언어에서 exit()함수 쓰는거랑 비슷한거
        }
        return this.stack[this.top--];
    }

    //상단 data추출
    int peek() throws EmptyIntStackExcetion {
        if (this.top < 0) {
            throw new EmptyIntStackExcetion();
        }
        return this.stack[this.top];
    }

    //인덱스검색 >> 이진검색 가능
    int indexOf(int data) {
        for (int i = top; i > 0; i--) {
            if (data == this.stack[i]) {
                return i; //검색 성공
            }
        }
        return -1; //실패
    }

    int capacity() {
        return this.max;
    }

    int size() {
        return this.top + 1;
    }

    boolean is_empty() {
        if (this.top < 0) {
            System.out.println("스택이 비어있습니다.");
            return false;
        } else {
            return true;
        }
    }

    boolean is_full() {
        if (this.top >= this.max) {
            System.out.println("스택이 포화 상태 입니다.");
            return false;
        } else return true;
    }

    //스택의 모든 data를 바닥부터 꼭대기 까지 보여줌
    void dump() throws EmptyIntStackExcetion {
        if (this.top < 0) {
            throw new EmptyIntStackExcetion();
        } else {
            for (int i = 0; i < top; i++) {
                System.out.println("스택[" + i + "]의 값: " + stack[i]);
            }
        }
    }
}

