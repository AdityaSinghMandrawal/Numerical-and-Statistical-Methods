import java.util.Scanner;

public class Errors1_2{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("\n\nEnter the true value: ");
        float trueValue = scanner.nextFloat();

        System.out.println("\nEnter the first approximate value: ");
        float approxVal1 = scanner.nextFloat();

        System.out.println("Enter the second approximate value: ");
        float approxVal2 = scanner.nextFloat();

        System.out.println("Enter the third approximate value: ");
        float approxVal3 = scanner.nextFloat();

        float ea1 = Math.abs(trueValue - approxVal1);
        float ea2 = Math.abs(trueValue - approxVal2);
        float ea3 = Math.abs(trueValue - approxVal3);

        System.out.println("\n\nAbsolute error for approximation 1: " + ea1);
        System.out.println("Absolute error for approximation 2: " + ea2);
        System.out.println("Absolute error for approximation 3: " + ea3);

        float bestApprox;
        if (ea1 < ea2) {
            bestApprox = (ea1 < ea3) ? approxVal1 : approxVal3;
        } else {
            bestApprox = (ea2 < ea3) ? approxVal2 : approxVal3;
        }

        System.out.println("\n\nBest approximation is: " + bestApprox);

        scanner.close();
    }
}
