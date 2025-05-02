class Solution {
public:
    void floodFill_helper(vector<vector<int>>& image, int sr, int sc,
                          int height, int width, int origin_color, int color) {
        if (sr < 0 || sc < 0 || height - 1 < sr || width - 1 < sc ||
            image[sr][sc] != origin_color || image[sr][sc] == color)
            return;

        image[sr][sc] = color;
        floodFill_helper(image, sr + 1, sc, height, width, origin_color, color);
        floodFill_helper(image, sr - 1, sc, height, width, origin_color, color);
        floodFill_helper(image, sr, sc - 1, height, width, origin_color, color);
        floodFill_helper(image, sr, sc + 1, height, width, origin_color, color);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
        int height = image.size();
        int width = image[0].size();
        floodFill_helper(image, sr, sc, height, width, image[sr][sc],
                         color); // right
        return image;
    }
};
/*
Giải thích thuật toán
Dùng đệ quy để duỵet qua các ô trong mảng (DFS)
+Điều kiện dừng: Nằm ngoài ảnh, không phải khối cùng màu, khối đã tô hoặc trùng với màu tô
+Thay đổi màu của ô 
+Gọi Đệ quy  trên dưới trái phải 
*/