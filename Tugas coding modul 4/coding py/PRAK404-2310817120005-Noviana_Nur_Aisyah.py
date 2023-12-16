while True:
        print("Pilih program:\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit")
        pilihan = int(input("Masukkan pilihan: "))

        if pilihan == 1:
            angka1 = float(input("Masukkan nilai pertama: "))
            angka2 = float(input("Masukkan nilai kedua: "))
            hasil = angka1 + angka2
            print(f"Hasil Penjumlahan antara {angka1:.2f} dengan {angka2:.2f} adalah {hasil:.2f}\n")

        elif pilihan == 2:
            angka1 = float(input("Masukkan nilai pertama: "))
            angka2 = float(input("Masukkan nilai kedua: "))
            hasil = angka1 - angka2
            print(f"Hasil pengurangan antara {angka1:.2f} dengan {angka2:.2f} adalah {hasil:.2f}\n")

        elif pilihan == 3:
            angka1 = float(input("Masukkan nilai pertama: "))
            angka2 = float(input("Masukkan nilai kedua: "))
            hasil = angka1 * angka2
            print(f"Hasil perkalian antara {angka1:.2f} dengan {angka2:.2f} adalah {hasil:.2f}\n")

        elif pilihan == 4:
            angka1 = float(input("Masukkan nilai pertama: "))
            angka2 = float(input("Masukkan nilai kedua: "))
            hasil = angka1 / angka2
            print(f"Hasil pembagian antara {angka1:.2f} dengan {angka2:.2f} adalah {hasil:.2f}\n")

        elif pilihan == 5:
            print("Terimakasih, telah menggunakan kalkulator, Noviana Nur Aisyah")
            break

        else:
            print("Input anda salah, silahkan coba lagi\n")