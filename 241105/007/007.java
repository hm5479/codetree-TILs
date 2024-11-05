import java.util.Scanner;

class ccc{
    String code;
    String place;
    int time;

    ccc(String c, String p, int t){
        code = c;
        place = p;
        time = t;
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String code = sc.next();
        String place = sc.next();
        int time = sc.nextInt();

        ccc a = new ccc(code, place, time);
        System.out.println("secret code : " + a.code);
        System.out.println("meeting point : " + a.place);
        System.out.println("time : " + a.time);

    }
}