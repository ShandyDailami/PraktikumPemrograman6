def hitung(nilai1, nilai2):
    return int(nilai1) - int(nilai2)

def mutlak(angka):
    return abs(angka)

for i in range(3):
    x1, y1, x2, y2 = input().split()
    hasil = hitung(x1, x2) + hitung(y1, y2)
    print(f'{mutlak(hasil)}\n')