import time

def unbounded_knapsack_dp(capacity, weights, values):
    n = len(weights)
    dp = [0] * (capacity + 1)

    # 開始時刻を記録
    start_time = time.time()

    for c in range(capacity + 1):
        for i in range(n):
            if weights[i] <= c:
                dp[c] = max(dp[c], values[i] + dp[c - weights[i]])

    # 終了時刻を記録
    end_time = time.time()

    # 実行時間を計算
    execution_time = end_time - start_time

    return dp[capacity], execution_time

# アイテムの重さと価値
weights = [5, 12,15,20,21]
values = [3,10,13,18,20]
# ナップサックの容量
capacity = 50

# 最大価値と実行時間を取得
max_value, exec_time = unbounded_knapsack_dp(capacity, weights, values)
print(f"ナップサックの最大価値: {max_value}")
print(f"実行時間: {exec_time:.6f} 秒")