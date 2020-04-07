def is_prime(a):
	for x in range(2, int(a**0.5)+1):
		if a%x==0:
			return False
	return True

n=int(input("nhap mot so de kiem tra: "))
if is_prime(n):
	print("day la so nguyen to")
else: print("day khong phai la so nguyen to")
input()
