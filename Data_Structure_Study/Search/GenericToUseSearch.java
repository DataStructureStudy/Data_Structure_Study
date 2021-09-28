package Data_Structure_Study.Search;

import java.util.Arrays;
import java.util.Scanner;
import java.util.Comparator;

public class GenericToUseSearch {

    static class PhyscData {
        //신체검사 데이터 저장
        private String name = " "; //이름
        private int height = 0; // 키
        private double vision = 0.0; // 시력

        //생성자 : 해당 클래스랑 이름이 같아야하고 리턴타입 없고 주 용도는 필드값 초기화임.
        public PhyscData(String name, int height, double vision) {
            this.name = name;
            this.height = height;
            this.vision = vision;
        }

        @Override
        public String toString() {
            return name + " " + height + " " + vision;
        }

        public static final Comparator<PhyscData> HEIGET_ORDER = new HeightOrderComparator();

        public static class HeightOrderComparator implements Comparator<PhyscData> {
            @Override
            public int compare(PhyscData d1, PhyscData d2) {
                return (d1.height > d2.height) ? 1 : (d1.height < d2.height) ? -1 : 0;
                //삼항 연산자.
                // Integer.compare(d1.height, d2.height); 사용 가능.
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        PhyscData[] x = { //클래스 배열
                new PhyscData("아무개", 168, 0.45), //0
                new PhyscData("조영훈", 180, 0.3),
                new PhyscData("나지성", 183, 0.5),
                new PhyscData("김법기", 184, 0.7),
                new PhyscData("박기범", 185, 0),
                new PhyscData("박정현", 186, 0.1),
                new PhyscData("안병기", 190, 1.1), //6

        };

        System.out.print("몇 cm인 사람을 찾고 있나요? : ");
        int height = sc.nextInt();
        int idx = Arrays.binarySearch(x, new PhyscData(" ", height, 0.0), PhyscData.HEIGET_ORDER);
        //클래스 배열, 클래스 필드 정보, 정렬기준

        if (idx < 0) {
            System.out.println("요소가 없습니다");
        } else {
            System.out.println("x[" + idx + "]에 있습니다.");
            System.out.println("찾은 데이터 : " + x[idx]); //toString() 자동 호출
        }
    }
}
