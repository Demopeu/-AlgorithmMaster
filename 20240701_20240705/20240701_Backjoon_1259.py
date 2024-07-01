while True:
    num = input()
    if num == '0':
        break
    print("yes" if len(num) == 1 else "yes" if num == num[::-1] else "no")
