bilangan = int(input('Input\n'))

if bilangan == 0:
    print("\nOutput \nNol")
elif bilangan > 0 and bilangan < 10:
    print("\nOutput \nSatuan")
elif bilangan >= 10 and bilangan < 20:
    print("\nOutput \nBelasan")
elif bilangan >= 20 and bilangan < 100:
    print("\nOutput \nPuluhan")
else:
    print("\nOutput \nAnda Menginput Melebihi Limit Bilangan")