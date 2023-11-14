bilangan_kelipatan, simbol = input("Input\n").split()

print("\nOutput:")
for i in range(1, 51):
    if i % bilangan_kelipatan == 0:
        print(simbol, end=' ')
    else:
        print(i, end=' ')