q = int(input('Input \n'))

if q == 0:
    print('\nOutput \nNol')
elif q > 0 and q <= 10:
    print('\nOutput \nSatuan')
elif q >= 11 and q < 20:
    print('\nOutput \nBelasan')
elif q >= 20 and q <= 99:
    print('\nOutput \nPuluhan')
else:
    print('\nOutput \nAnda Menginput Melebihi Limit Bilangan')

# 3 0 100 62 13