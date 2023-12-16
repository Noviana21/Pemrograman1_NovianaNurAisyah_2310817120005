def Biodata(tahunLahir, Namaku, Asal):
    tahun_sekarang = 2023
    sekarang = 2023 - tahunLahir

    print("\nOutput:")
    print(f"Perkenalkan Nama Saya: {Namaku}")
    print(f"Umur Saya: {sekarang}")
    print(f"Saya Adalah Angkatan: {tahun_sekarang}")
    print(f"Asal Saya dari: {Asal}")

def main():
    tahunLahir = int(input())
    Namaku = input()
    Asal = input()
    Biodata(tahunLahir, Namaku, Asal)

main()