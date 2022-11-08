def max_bilangan(angka1, angka2, angka3, angka4):
    if angka1 > angka2 and angka1 > angka3 and angka1 > angka4:
        return angka1
    elif angka2 > angka1 and angka2 > angka3 and angka2 > angka4:
        return angka2
    elif angka3 > angka1 and angka3 > angka2 and angka3 > angka4:
        return angka3
    else:
        return angka4
for i in range(3):
    angka1, angka2, angka3, angka4 = input().split()
    angka1 = int(angka1)
    angka2 = int(angka2)
    angka3 = int(angka3)
    angka4 = int(angka4)
    print(f'{max_bilangan(angka1, angka2, angka3, angka4)}\n')