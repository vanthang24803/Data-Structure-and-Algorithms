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
               

