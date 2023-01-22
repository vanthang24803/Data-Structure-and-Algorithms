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

## Code Examples : Stacks.cpp , ChangeBinary.cpp