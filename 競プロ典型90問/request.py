import requests

API_KEY = "fsq3B/NARUivs0bVYZ6xnmBIoCa+5AugBMHMIblnFf/sAMU="

# ① 検索
search_url = "https://api.foursquare.com/v3/places/search"
headers = {
    "Accept": "application/json",
    "Authorization": API_KEY
}
params = {
    "query": "cafe",
    "near": "Tokyo",
    "limit": 5
}

search_resp = requests.get(search_url, headers=headers, params=params)
search_data = search_resp.json()
print(search_data)

# ② 各スポットの詳細で rating を取得
for place in search_data.get("results", []):
    fsq_id = place.get("fsq_id")
    detail_url = f"https://api.foursquare.com/v3/places/{fsq_id}"
    detail_resp = requests.get(detail_url, headers=headers)
    detail_data = detail_resp.json()
    
    name = detail_data.get("name")
    rating = detail_data.get("rating")            # 評価
    total_ratings = detail_data.get("stats", {}).get("total_ratings")  # レビュー件数
    
    print(f"{name}: 評価 {rating} ({total_ratings}件)")