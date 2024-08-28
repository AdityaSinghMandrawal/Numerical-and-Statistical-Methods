import math

true_val = float(input("\n\nEnter the true value: "))
approx_val = float(input("Enter the approximate value: "))

ea = abs(true_val - approx_val)
er = abs(ea / true_val)
ep = 100 * er

print("\n\nAbsolute Error:", ea)
print("Relative Error:", er)
print("Percentage Error:", ep, "%")
