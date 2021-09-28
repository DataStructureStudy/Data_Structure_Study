package Data_Structure_Study.Queue;

public class Queue { //링 버퍼
    private int max_capacity; //최대 용량
    private int front; //앞
    private int rear;//뒤
    private int num;//데이터 수
    private String[] que;//큐 본체

   class EmptyQueue extends RuntimeException{
       EmptyQueue(){
           System.out.println("큐 공백");
       }
   }

   class OverQueue extends RuntimeException{
        OverQueue(){ System.out.println("큐 포화"); }
    }

    Queue(int max_capacity){
        num = front = rear =0; //3가지 변수 한번에 초기화 가능
        this.max_capacity = max_capacity;
        try{
            que = new String[max_capacity];
        }catch (OutOfMemoryError e) {
            e.printStackTrace(); // 개발자 한테 보여주는 에러.
            System.out.println("메모리 터짐");
            this.max_capacity = 0;
        }
    }
    boolean is_empty(){
       if(num<=0) {
           return true;
       }return false;
    }
    boolean is_full(){
       if(max_capacity <= num){
           return true;
       }return false;
    }
    //인큐
    String enque(String data){
       if(is_full()) throw new OverQueue();
    que[rear++] = data;
    num++;
    if(rear == max_capacity) rear = 0; //덮어쓰기
    return data;
   }

   String deque(){
       if(is_empty()) throw new EmptyQueue();
       String delete_data = que[front++];
       num--;
       if(front==max_capacity) front =0; //덮어쓰기
       return delete_data;
   }

   String peek(){
       if(is_empty()) throw new EmptyQueue();
       return que[front];
   }

   int capacity(){
       return max_capacity;
   }
   int size(){
       return num;
   }
   void dump(){
       if(is_empty()) System.out.println("큐 비어 있음");
       else{
           for(int i=0; i<num; i++){
              //int idx = (i+front)%max_capacity;
               System.out.print(que[i]+"  ");
           }
           System.out.println();
       }
   }
   int indexOf(String target){
       for(int i=0; i<num; i++){
          // int idx = (i+front) % max_capacity;
           if(que[i].equals(target))
               return i;
       }
       return -1;
   }
}
