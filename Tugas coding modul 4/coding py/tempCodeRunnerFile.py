angkaPertama, angkaKedua = map(int, input("Masukkan Angka Pertama dan Angka Kedua   : ").split())


if angkaPertama < angkaKedua:
    print("Urutan Angka Terkecil ke Terbesar        :")
    for i in range(angkaPertama, angkaKedua + 1, +1):
        j = angkaKedua - (i - angkaPertama)
        print(f"{i} {j}", end="")
        if i != angkaKedua:
            print(" - ", end="")
        else: print("")
            
elif angkaPertama > angkaKedua:
    print("Urutan Angka Terbesar ke Terkecil        :")
    for i in range(angkaPertama, angkaKedua - 1, -1):
        j = angkaKedua + (angkaPertama - i)
        print(f"{i} {j}", end=" ")
        if i != angkaKedua:
            print(" - ", end="")
        else: print("")