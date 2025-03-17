# Guanrui Huang
import sys

def main():

    # at least two nums are required to run the program
    if len(sys.argv) < 3:
        print("Usage: python diff.py num1 num2 [num3 ...]")
        return
    
    # print nums that received
    print(f"Received {len(sys.argv) - 1} numbers:")
    for i, arg in enumerate(sys.argv[1:], start=1):
        print(f"{i:2}: {arg}")
    
    # calculate the diferent of nums
    differences = []
    for i in range(1, len(sys.argv) - 1):
        try:
            num1 = float(sys.argv[i])
            num2 = float(sys.argv[i + 1])
            differences.append(num1 - num2)
        except ValueError:
            print(f"Error: Invalid number detected in arguments: '{sys.argv[i]}' or '{sys.argv[i + 1]}'")
            return
    
    # print the diferent of nums
    print("Differences between adjacent numbers:")
    print(" ".join(f"{diff:.2f}" for diff in differences))
    
if __name__ == "__main__":
    main()