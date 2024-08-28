import math

true_value = float(input("\n\nEnter the true value: "))
approx_val1 = float(input("\nEnter the first approximate value: "))
approx_val2 = float(input("Enter the second approximate value: "))
approx_val3 = float(input("Enter the third approximate value: "))

ea1 = abs(true_value - approx_val1)
ea2 = abs(true_value - approx_val2)
ea3 = abs(true_value - approx_val3)

print("\n\nAbsolute error for approximation 1:", ea1)
print("Absolute error for approximation 2:", ea2)
print("Absolute error for approximation 3:", ea3)

best_approx = approx_val1 if ea1 < min(ea2, ea3) else approx_val2 if ea2 < ea3 else approx_val3

print("\n\nBest approximation is:", round(best_approx, 2))
