# 1. N と M を受け取る (例: 3 3)
n, m = map(int, input().split())

# 2. Aの行を丸ごとリストとして受け取る (例: [5, 5, 3])
a = list(map(int, input().split()))

# 3. Bの行を丸ごとリストとして受け取る (例: [11, 1000, 1000])
b = list(map(int, input().split()))

# 4. ソートする
a.sort()
b.sort()

# 5. 出力（結果を確認する）
# print("--- 結果 ---")
# print("A (ソート後 シャリ):", a)
# print("B (ソート後 ネタ):", b)
## ネタはシャリの2倍じゃないといけない

##ここから解き始める
b_index=0
count=0
for index,x in enumerate(a):
    for y in range(b_index,len(b)):
        if x*2<=b[y]:
            count+=1
            b_index+=1
            break
print(count)