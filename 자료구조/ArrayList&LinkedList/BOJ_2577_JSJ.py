# 문자열로 답을 입력받고
# 답을 한글자씩 0~9 숫자를 나타내는 배열에 더함
A = input()
B = input()
C = input()
ans = str(int(A) * int(B) * int(C))
numbers = [0 for i in range(10)]
for c in ans:
    numbers[int(c)] += 1
for c in numbers:
    print(c)

    