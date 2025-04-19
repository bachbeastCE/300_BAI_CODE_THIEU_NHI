#include <stdio.h>

// https://nguyenvanhieu.vn/lap-trinh-c/

// Phần 1. Giới thiệu về ngôn ngữ lập trình C

// Khai báo biến: <kiểu dữ liệu> <tên biến>
//  Ví dụ:
int a;
char c;

// Khai báo hằng: const <kiểu dữ liệu> <tên hằng> = <giá trị>
// Ví dụ
const int MAX = 100;
const float PI = 3.14;

// CÁC KIỂU DỮ LIỆU CƠ BẢN TRONG C
// 1 Kiểu dữ liệu nguyên thuỷ (primitive data types)
char c;   // 1 byte
int i;    // 4 byte
float f;  // 4 byte
double d; // 8 byte

// 2 Kiểu dữ liệu dẫn xuất (derived data types)
// 2.1 Có dấu ( signed )
signed char c;  // 1 byte
signed int i;   // 4 byte
signed short s; // 2 byte
signed long l;  // 8 byte

// 2.2 Không có dấu ( unsigned )
unsigned char c;  // 1 byte
unsigned int i;   // 4 byte
unsigned short s; // 2 byte
unsigned long l;  // 8 byte

// 2.3 Kiểu số thực (floating-point types)
float f;        // 4 byte
double d;       // 8 byte
long double ld; // 10 byte

// 3 Kiểu dữ liệu người dùng (user-defined data types)
// 3.1 Kiểu dữ liệu cấu trúc (struct)
struct Student
{
    char name[50];
    int age;
    float gpa;
};
// 3.2 Kiểu dữ liệu liên kết (union)
union Data
{
    int i;
    float f;
    char c;
};
// 3.3 Kiểu dữ liệu kiểu liệt kê (enum)
enum Color
{
    RED,
    GREEN,
    BLUE
};

// 3.4 Kiểu dữ liệu kiểu con trỏ (pointer)
int *p;  // con trỏ kiểu int
char *p; // con trỏ kiểu char

// 3.5 Kiểu dữ liệu kiểu hàm (function)
int add(int a, int b)
{
    return a + b;
}

// NHẬP XUẤT

// 1. printf()
/*
Kiểu dữ liệu	Định dạng
int	                    %d
char	                %c
float	                %f
double	                %lf
short int	            %hd
unsigned int	        %u
long int	            %li
long long int	        %lli
unsigned long int	    %lu
unsigned long long int	%llu
signed char	            %c
unsigned char	        %c
long double	            %Lf
Cơ số 16                %x
Cơ số 8                 %o
Cơ số 2                 %b
Câu ký tự	            %s
*/

//  printf("Gia tri c = %c", c);

// 2. scanf()
// int a;
// printf("nNhap a = ");
// scanf("%d", &a); // đừng quên dấu &

// 3. gets() và puts()
// 3.1 gets() - Nhập chuỗi
// char str[100];
// printf("Nhap chuoi: ");
// gets(str); // Nhập chuỗi từ bàn phím

// 3.2 puts() - Xuất chuỗi
// char str[100] = "Hello World";
// puts(str);

// TOÁN TỬ
/*
+	phép toán cộng
–	phép toán trừ
*	phép toán nhân
/	phép toán chia
%	phép toán lấy số dư(chỉ áp dụng cho số nguyên)

*/

// Toán tử gán (Assignment Operators)
/*
Toán tử	Viết gọn	Viết đầy đủ
=	    a = b	    a = b
+=	    a += b	    a = a+b
-=	    a -= b	    a = a-b
*=	    a *= b	    a = a*b
/=	    a /= b	    a = a/b
%=	    a %= b	    a = a%b

*/

// Toán tử quan hệ (Relational Operators)
/*
Toán tử	Ý nghĩa	Ví dụ
==	so sánh bằng	7 == 3 cho kết quả là 0
>	so sánh lớn hơn	5 > 1 cho kết quả là 1
<	so sánh nhỏ hơn	5 < 2 cho kết quả là 0
!=	so sánh khác	5 != 4 cho kết quả là 1
>=	lớn hơn hoặc bằng	8 >= 3 cho kết quả là 1
<=	nhỏ hơn hoặc bằng	5 <= 0 cho kết quả là 0

*/

// Toán tử logic (Logical Operators)
/*
Toán tử	Ý nghĩa	Ví dụ
&&	phép toán AND	(5 > 3) && (3 < 2) cho kết quả là 0
||	phép toán OR	(5 > 3) || (3 < 2) cho kết quả là 1
!	phép toán NOT	!(5 > 3) cho kết quả là 0
*/

// Toán tử bit (Bitwise Operators)
/*
Toán tử	Ý nghĩa	Ví dụ
&	phép toán AND bit	5 & 3 cho kết quả là 1
|	phép toán OR bit	5 | 3 cho kết quả là 7
^	phép toán XOR bit	5 ^ 3 cho kết quả là 6
~	phép toán NOT bit	~5 cho kết quả là -6
<<	phép toán dịch trái	5 << 1 cho kết quả là 10
>>	phép toán dịch phải	5 >> 1 cho kết quả là 2
*/

// Toán tử điều kiện (Conditional Operator)
/*
Toán tử	        Ý nghĩa	                        Ví dụ
? :	            phép toán điều kiện	        (5 > 3) ? printf("True") : printf("False");
*/
