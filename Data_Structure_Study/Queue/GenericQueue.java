package Data_Structure_Study.Queue;

public class GenericQueue<E>{
    private int max;
    private int num;
    private int front;
    private int rear;
    private E[] que;

    static class OverQueue extends RuntimeException{
        OverQueue(){}
    }
    static class EmptyQueue extends RuntimeException{
        EmptyQueue(){}
    }


    boolean is_empty(){
        if(num <=0 ) return true;
        return false;
    }
    boolean is_full(){
        if(num >= max) return true;
        return false;
    }

    GenericQueue(int max){
        num=rear=front=0;
        this.max = max;
        try{
            que = (E[])new Object[max]; //
        }catch (OutOfMemoryError e){
            e.printStackTrace();
            this.max =0;
        }
    }

    E enque(E data) {
        if (is_full()) throw new OverQueue();
        que[rear++] = data;
        num++;
        if(rear == max) rear=0;
        return data;
    }
    E deque(){
        if(is_empty()) throw new EmptyQueue();
        E delete_data = que[front++];
        num--;
        if(front ==max) front =0;
        return delete_data;
    }
    E peek(){
        if(is_empty()) throw new EmptyQueue();
        return que[front];
    }

    int capacity(){
        return max;
    }
    int size(){
        return num;
    }
    void dump(){
        if(is_empty()) System.out.println("큐는 비어 있습니다.");
        for(int i = 0; i<num; i++){
            System.out.println(i+"번 데이터: " + que[(i+front)%max]);
        }
        System.out.println();
    }
    public static void main(String[] args){
        GenericQueue<Integer> intque = new GenericQueue<>(10);

        for(int i=0; i< intque.capacity(); i++){
            intque.enque(i*485);
        }

        intque.dump();


        for(int i=0; i<intque.capacity(); i++){
            System.out.println(intque.deque());
        }
        intque.dump();
    }
}
