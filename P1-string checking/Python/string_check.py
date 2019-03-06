a=input("Enter the string:")
print("No repeating elements") if set.__len__(set(a))==len(a) else print("Elements repeating")