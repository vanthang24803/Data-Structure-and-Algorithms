## Cấu Trúc Dữ Liệu Danh Sách Liên Kết (Linked List)

` Phân loại `

>Danh sách liên kết đơn- Linked List
>Danh sách liên kết đôi - Doubly Linked List
>Danh sách liên kết vòng - Circular Linked List.

## Danh Sách Liên Kết Đơn (Single Linked List)

` Khái niệm `

>Danh sách liên kết đơn(Single linked list) là ví dụ tốt nhất và đơn giản nhất về cấu trúc dữ liệu động sử dụng con trỏ để cài đặt. Do đó, kiến thức con trỏ là rất quan trọng để hiểu cách danh sách liên kết hoạt động, vì vậy nếu bạn chưa có kiến thức về con trỏ thì bạn nên học về con trỏ trước. Bạn cũng cần hiểu một chút về cấp phát bộ nhớ động. Để đơn giản và dễ hiểu, phần nội dung cài đặt danh sách liên kết của bài này sẽ chỉ trình bày về danh sách liên kết đơn.

>Danh sách liên kết đơn là một tập hợp các Node được phân bố động, được sắp xếp theo cách sao cho mỗi Node chứa một giá trị (Data) và một con trỏ (Next). Con trỏ sẽ trỏ đến phần tử kế tiếp của danh sách liên kết đó. Nếu con trỏ mà trỏ tới NULL, nghĩa là đó là phần tử cuối cùng của linked list.

` So Sánh Mảng Vs Linked List`

>Kích Thuớc : -Kích thuớc thay đổi trong quá trình thêm / xóa phần tử , Kich thước tối đa phụ thuộc vào bộ nhớ .

>Cấp phát bộ nhớ : Cấp phát động , bộ nhớ được truy cập trong quá trình chạy .

>Thứ tự và Sắp Xếp : Được lưu trữ trên các ô ngẫu nhiên .

>Truy Cập : Truy cập ngẫu nhiên cần phải duyệt từ đầu -> cuối phần tử đó (Độ phức tạp : O(n))

>Tìm kiếm : Chỉ có thể tìm kiếm tuyến tính .


## Code Examples : Single.cpp

` Cách Thêm Phần Tử Vào Danh Sách Liên kết Đơn `

>Việc thêm phần tử vào danh sách liên kết rất đơn giản, chỉ với ĐPT là O(1).

>Thêm phần tử vào đầu : Để thêm một node  temp vào đầu danh sách liên kết l rất đơn giản ta chỉ cần gán tạo mới một node temp sau đó gắn temp->next = l là được.

>Thêm phần tử vào cuối : Để thêm một node  temp vào cuối danh sách liên kết l rất đơn giản ta chỉ cần gán tạo mới một node temp sau đó gắn temp->next = NUlL là được.

>Thêm phần tử vào khác đầu và cuối : Để thêm phần tử vào chỉ số k, ta cần phần tìm node trỏ đến phần tử có chỉ số k-1 , Chúng ta cần tìm con trỏ trỏ đến phần tử chỉ số k-1 và thay đổi liên kết giữa chúng .

## Code Examples : AddElemet.cpp


` Xóa phần tử của Danh Sách Liên kết Đơn `

>Việc xóa phần tử trong dach sách liên kết cũng rất đơn giản với độ phức tạp là O(n).

>Xóa phần tử đầu : Để xóa phần tử đầu tiên trong danh sách liên kết l, ta chỉ cần gán l = l->next, và nhớ giải phóng bộ nhớ của node đã xóa .

>Xóa phần tử cuối : Để xóa phần tử cuối cùng trong listLinker ta cần tìm node của phần tử trước phần tử cuối và gán next của nó bằng NULL, cũng phải xóa bỏ vùng nhớ đã cấp phát cho node cuối cùng .

>Xóa phần tử khác đầu và cuối : Để xóa phần tử ở vị trí k ta cần phải tìm node p của phần tử k-1 và gán p->next = p->next->next .


## Code Examples : DeleteElement.cpp

` Truy cập các phần tử trong Danh sách liên kết đơn `

>Một nhược điểm của danh sách liên kết so với mảng là khó truy vấn các phẩn tử, không thể sử dụng toán tử [] như mảng, mà phải thông qua phần tử đầu hoặc cuối .

## Code Examples : GetElement.cpp
               

` Thay đổi vị trí Member trong Danh sách liên kết đơn `

>Nhập vào một số nguyên dương n, tiếp theo là n số nguyên của một dãy số, hãy cài đặt nó vào một danh sách liên kết đơn. Tiếp theo nhập hai số nguyên a và b.
>Hãy thay đổi giá trị của những phần tử có giá trị a thành giá trị b. In ra màn hình danh sách đó, sau một phần tử có đúng một khoảng trắng

## Code Example : Convert.cpp


` Xóa phần tử lớn nhất trong Danh sách lên kết đơn `

## Code Example : RemoveMax.cpp

## Danh Sách Liên Kết Đôi (Doubly Linked List)

` Khái niệm `
>Danh Sách Liên Kết Đôi (Doubly Linked List) là một tập hợp các Node được phân bố củ động sao cho Mỗi [Node] chứa :
    >Một giá trị (Data)
    >Một con trỏ [Next] trỏ đến phần tử kế tiếp của danh sách liên kết đó , nếu con trỏ là [NULL] nghĩa là đó là phần tử cuối cùng của DouList
    >Một con trỏ [Pre] sẽ trỏ tới phần tử trước của Danh sách Liên kết đó , Nếu con trỏ mà trỏ tới [NULL] nghĩa là đó là 1 phần tử đầu của DouList .

## Code Example : DouList.cpp

` Thêm phần tử vào đầu Danh Sách Liên Kết Đôi `
  >Thêm vào đầu 
  >Thêm vào cuối 
  >Thêm vào phần tử khác 

## Code Example : AddDouList.cpp

` Xóa Phần Tử ở Danh Sách Liên Kết Đôi `
>Xóa phần tử ở Danh Sách Liên Kết Đôi Có Độ Phức Tạp O(1) , tương tự như Danh sách Liên kết Đơn
  >Xóa phần tử đầu : Để xóa phần tử đầu tiên trong danh sách liên kết đôi l, ta phải quan tâm tới phần tử l->head->next, chuyển liến kết pre của nó về [NULL], cuối cùng là cập nhật l->head = l->head->next, và nhớ xóa vùng nhớ đã cập phát cho [node] đã xóa.
  >Xóa phần tử cuối : Để xóa phần tử cuối cùng trong danh sách liên kết đôi l, ta phải quan tâm tới phần tử l->tail->pre, chuyển liến kết next của nó về [NULL], cuối cùng là cập nhật l->tail= l->tail->pre, và nhớ xóa vùng nhớ đã cập phát cho [node] đã xóa.
  >Xóa phần tử khác : Để xóa phần tử vị trí k thì ta cần phải xử lý hai phần từ ở vị trí k-1 và k+1.

## Code Example : RemoveDouList.cpp  


## Danh Sách Liên Kết Vòng  (Cicular Linked List)

` Khái niệm `

>Danh sách liên kết vòng (Circular Linked List) là một biến thể của Danh sách liên kết (Linked List), trong đó phần tử đầu tiên trỏ tới phần tử cuối cùng và phần tử cuối cùng trỏ tới phần tử đầu tiên.

>Cả hai loại Danh sách liên kết đơn (Singly Linked List) và Danh sách liên kết đôi (Doubly Linked List) đều có thể được tạo thành dạng Danh sách liên kết vòng .

## Code Example : CircularList.cpp

