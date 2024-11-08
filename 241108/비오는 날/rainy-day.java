import java.util.Scanner;

class DateData{
    String date, day, weather;
    int[] intDate = new int[3];

    DateData(String date, String day, String weather){
        this.date = date;
        this.day = day;
        this.weather=weather;

        String[] tmp = date.split("-");
        for(int i=0; i<3; i++){
            intDate[i] = Integer.parseInt(tmp[i]);
        }
    }

    @Override
    public String toString(){
        return date + " " + day + " " + weather;
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        n = sc.nextInt();

        DateData[] dataArr = new DateData[n];
        for(int i=0; i<n; i++){
            String date, day, weather;
            date = sc.next();
            day = sc.next();
            weather = sc.next();

            dataArr[i] = new DateData(date, day, weather);
        }

        int rainCnt = 0;
        DateData[] rainyDays = new DateData[n];
        for(DateData d : dataArr){
            if(d.weather.equals("Rain"))
                rainyDays[rainCnt++] = d;
        }

        int minIndex = 0;
        for(int i=1; i<rainCnt; i++){
            if(rainyDays[minIndex].intDate[0] > rainyDays[i].intDate[0])
                minIndex = i;

            else if(rainyDays[minIndex].intDate[0] == rainyDays[i].intDate[0])
                if(rainyDays[minIndex].intDate[1] > rainyDays[i].intDate[1])
                    minIndex = i;

                else if (rainyDays[minIndex].intDate[1] == rainyDays[i].intDate[1])
                    if(rainyDays[minIndex].intDate[2] > rainyDays[i].intDate[2])
                        minIndex = i;
        }

        System.out.println(rainyDays[minIndex]);
    }
}