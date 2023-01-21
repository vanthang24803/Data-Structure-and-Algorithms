## Cấu trúc dữ liệu mảng (Array)

## Mảng tĩnh

` Khái niệm `
>Mảng (Array) là một trong các cấu trúc dữ liệu cũ và quan trọng nhất. Mảng có thể lưu giữ một số phần tử cố định và các phần tử này nền có cùng kiểu. Hầu hết các cấu trúc dữ liệu đều sử dụng mảng để triển khai giải thuật. Dưới đây là các khái niệm quan trọng liên quan tới Mảng.

>Mảng gồm các bản ghi có kiểu giống nhau, có kích thước cố định, mỗi phần tử được xác định bởi chỉ số .

>Mảng là cấu trúc dữ liệu được cấp phát liên tục cơ bản.

` Cấu tạo `
>Phần tử: Mỗi mục được lưu giữ trong một mảng được gọi là một phần tử.
>Chỉ mục (Index): Mỗi vị trí của một phần tử trong một mảng có một chỉ mục số được sử dụng để nhận diện phần tử.

` Ưu điểm `
>Truy câp phần tử vơi thời gian hằng số O(1).
>Sử dụng bộ nhớ hiệu quả.
>Tính cục bộ về bộ nhớ.
 
` Nhược điểm `
>Không thể thay đổi kích thước của mảng khi chương trình dang thực hiện.

## Code Examples : Array.cpp

## Mảng Động (Dynamic Array)

` Khái niệm `
>Mảng động (dynamic aray) : cấp phát bộ nhớ cho mảng một cách động trong quá trình chạy chương trình trong C là malloc và calloc, trong C++ là new.

>Sử dụng mảng động ta bắt đầu với mảng có 1 phần tử, khi số lượng phần tử vượt qua khả năng của ảng thì ta gấp đôi kích thước mảng cũ và copy phần tử mảng cũ vào nửa đầu của mảng mới.

` Ưu điểm `
>Tránh lãng phí bộ nhớ khi phải khai báo mảng có kích thước lớn ngay từ đầu.

` Nhược điểm `
>Phải thực hiện them thao tác copy phần tử mỗi khi thay đổi kích thước.
>Một số thời gian thực hiện thao tác không còn là hằng số nữa.

## Code Examples : DynamicArr.cpp

## Mảng 2 Chiều 

` Khái niệm `
>Mảng hai chiều kích thước (m,n) gồm m hàng và n cột, thực chất có thể xem như là m mảng một chiều kích thước n.

>Với a[i][j] là phần tử hàng thứ i và cột thứ j trong mảng hai chiều a .
>(Hàng và cột được đánh số từ 0).

## Code Examples : Matrix.cpp