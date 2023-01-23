## Cấu trúc dữ liệu ngăn xếp và hàng đợi (Stacks and queues)

` Khái niệm `

>Stack là một loại container adaptor, được thiết kế để hoạt động theo kiểu LIFO (Last - in first - out) (vào sau ra trước), tức là một kiểu danh sách mà việc bổ sung và loại bỏ một phần tử được thực hiển ở cuối danh sách. Vị trí cuối cùng của stack gọi là đỉnh (top) của ngăn xếp.

>Stack giống như việc giáo viên kiểm tra vở bài tập của học sinh vậy, ai nộp sau cùng thì vở bài tập của người đó sẽ được giáo viên kiểm tra đầu tiên, đương nhiên người nộp vợ đầu tiên sẽ được kiểm tra cuối cùng.

>Stack có các hàm sau :

   >[size] : trả về kích thước hiện tại của [stack].
   >[empty] : true [stack] nếu rỗng, và ngược lại.
   >[push] : đẩy phần tử vào [stack].
   >[pop] : loại bỏ phẩn tử ở đỉnh của [stack].
   >[top] : truy cập tới phần tử ở đỉnh [stack].

>Độ Phức Tạp O(1)

## Code Examples : Stacks.cpp , ChangeBinary.cpp (Chuyển Num (10) sang Binary (2)) ,    EnCodeString.cpp(Mã hóa Chuỗi )


## Cấu trúc dữ liệu ngăn xếp (Queue)

>Queue(hàng đợi) là một loại container, được thiết kế để hoạt động theo kiểu FIFO (First- in first – out) (vào trước ra trước), tức là một kiểu danh sách mà việc bổ sung được thực hiển ở cuối danh sách và loại bỏ ở đầu danh sách .

>Trong queue, có hai vị trí quan trọng là vị trí đầu danh sách (front), nơi phần tử được lấy ra, và vị trí cuối danh sách (back), nơi phần tử cuối cùng được thêm vào.

>Các Phương thức của Queues :

   >[size] : Trả về số lượng phần tử của [queue] .
   >[empty] : Trả về true(1) nếu [queue] rỗng, ngược lại là false (0) .
   >[front] : Truy xuất phần tử ở đầu [queue] (phần tử đầu tiên được thêm vào) .
   >[back] :Truy xuất phần tử ở cuối [queue] (phần tử cuối cùng được thêm vào) .
   >[push] : Thêm phần tử có giá trị x vào cuối [queue]. Kích thước [queue] tăng thêm 1.
   >[pop] :	Loại bỏ phần tử ở đầu [queue]. Kích thước queue giảm đi 1.



## Code Examples : Queues.cpp , Palindrome.cpp (Số Siêu Nguyên Tố) ,