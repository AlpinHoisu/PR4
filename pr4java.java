public class pr4 {

    public static void main(String[] args) {

        long time = System.currentTimeMillis();

        long a = 0;
        int b = 3;
        int c = 3;
        long repCount = 100000000;

        for (long i = 1; i <= repCount; i++)
            a += b * 2 + c - i;
        }

        System.out.println("Время выполнения программы: " + (System.currentTimeMillis() - time) + "миллисекунд");
        System.out.println("Результат работы: " + a);
    }

}