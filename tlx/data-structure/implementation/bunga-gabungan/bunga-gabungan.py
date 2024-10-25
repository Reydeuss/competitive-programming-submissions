# Submission & solution by Reydeus
# Title: Bunga Gabungan
# Level: 300
# Original Problem: https://tlx.toki.id/problems/troc-19/A
# Submission: https://tlx.toki.id/submissions/2404993

a, b = map(int, input().split())
sum = a*a + b*b + 1

print(f"{sum / 4}" if sum % 4 == 0 else "-1")
