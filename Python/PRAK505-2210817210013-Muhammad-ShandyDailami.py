def biodata(tahun, nama, asal):
    tahun_sekarang = 2020
    print(f'Perkenalkan Nama Saya: {nama}')
    print(f'Umur Saya: {tahun_sekarang - tahun}')
    print(f'Saya Adalah Angkatan: {tahun_sekarang}')
    return (f'Asal Saya Dari: {asal}\n')

for i in range(2):
    tahun = int(input())
    nama = input()
    asal = input()
    print(biodata(tahun, nama, asal))