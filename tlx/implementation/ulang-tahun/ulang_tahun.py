# Code & Solution by Reydeuss @ Github
# Original Problem Link: https://tlx.toki.id/problems/osn-2006/C

n, q = input().split(' ')

buku_kuning = dict()

for _ in range(int(n)):
    nama, nomor = input().split(' ')
    buku_kuning[nama] = nomor

for _ in range(int(q)):
    print(buku_kuning[input()])
