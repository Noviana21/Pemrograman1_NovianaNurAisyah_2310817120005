detik = int(input("Input\n"))

hari = detik // (24 * 3600)
jam = (detik % (24 * 3600)) // 3600
menit = (detik % 3600) // 60
detik2 = detik % 60

if hari > 0:
    print(f'\nOutput\n{hari} hari {jam:02d}:{menit:02d}:{detik2:02d}')
else:
    print(f'\nOutput\n{jam:02d}:{menit:02d}:{detik2:02d}')
 
 # 3600 1432 8453 21542 125478