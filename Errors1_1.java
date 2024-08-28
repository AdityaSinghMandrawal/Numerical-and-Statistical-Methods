import java.util.Scanner;

public class Errors1_1{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("\n\nEnter the true value: ");
        float trueVal = scanner.nextFloat();

        System.out.println("Enter the approximate value: ");
        float approxVal = scanner.nextFloat();

        float ea = Math.abs(trueVal - approxVal);
        float er = Math.abs(ea / trueVal);
        float ep = 100 * er;

        System.out.println("\n\nAbsolute Error: " + ea);
        System.out.println("Relative Error: " + er);
        System.out.println("Percentage Error: " + ep + "%");

        scanner.close();
    }
}
