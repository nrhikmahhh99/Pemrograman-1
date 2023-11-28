def maksimal(a, b):
    if a > b:
        return a
    else:
        return b

def minimal(a, b):
    if a < b:
        return a
    else:
        return b

batas = 0
maks = -100000
minim = 100000
bilangan = int(input())
nilai = list(map(int,input().split()))

maks = max(nilai)
minim = min(nilai)

print(f"\n{maks} {minim}")
