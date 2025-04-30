class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy_day = 0;
        int sell_day = 0;
        int max = 0;

        for (sell_day; sell_day < prices.size(); sell_day++) {
            if (prices[buy_day] >= prices[sell_day])
                buy_day = sell_day;
            else {
                if (prices[sell_day] - prices[buy_day] > max)
                    max = prices[sell_day] - prices[buy_day];
            }
        }
        return max;
    }
};

/*
GIẢI THÍCH THUẬT TOÁN
Mục tiêu: Tìm lợi nhuận lớn nhất, ngày bán > ngày mua

1 Các biến tạm lưu buyday,sellday, max
2 Loop: Tăng dần theo ngày bán
3   Nếu giá ngày mua hiện tại lớn hơn giá ngày bán đang xét -> YES: ngày mua là ngày bán hiện tại (Thời điểm tốt để mua)
4       ->NO: Nếu giá bán hiện tại - giá mua trước đó > max(lợi nhuận hiện tại): YES-> max = giá bán hiện tại - giá mua trước đó. 
*/