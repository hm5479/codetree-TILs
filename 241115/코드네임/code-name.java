import java.util.Scanner;

class Person{
    public String codeName;
    public int score;

    public Person(String codeName, int score) {
        this.codeName = codeName;
        this.score = score;
    }
    
    @Override
    public String toString(){
        return codeName + " " + Integer.toString(score);
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        Person[] pArr = new Person[5];

        for(int i=0; i< pArr.length; i++){
            String c;
            int s;
            c = scan.next();
            s = scan.nextInt();
            pArr[i] = new Person(c,s);
        }

        int index = 0;
        for(int i=0; i<pArr.length; i++){
            if(pArr[index].score > pArr[i].score)
                index = i;
        }

        System.out.println(pArr[index].toString());
        
    }
}
