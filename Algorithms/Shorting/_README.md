## Giải Thuật Sắp Xếp (Shorting)

## Sắp xếp nổi bọt (Bubble Shorting)

` Khái niệm `

>Sắp xếp nổi bọt là một giải thuật sắp xếp đơn giản. Giải thuật sắp xếp này được tiến hành dựa trên việc so sánh cặp phần tử liền kề nhau và tráo đổi thứ tự nếu chúng không theo thứ tự.

>Giải thuật này không thích hợp sử dụng với các tập dữ liệu lớn khi mà độ phức tạp trường hợp xấu nhất và trường hợp trung bình là Ο(n2) với n là số phần tử.

>Giải thuật sắp xếp nổi bọt là giải thuật chậm nhất trong số các giải thuật sắp xếp cơ bản. Giải thuật này còn chậm hơn giải thuật đổi chỗ trực tiếp mặc dù số lần so sánh bằng nhau, nhưng do đổi chỗ hai phần tử kề nhau nên số lần đổi chỗ nhiều hơn.

` Cách hoạt động `: 

>Thuật toán cho cách sắp xếp này sẽ lần lượt đưa các số lớn nhất về ví trí cuối dãy bằng cách so sánh các cặp số kề nhau.

>Chúng ta thấy rằng giải thuật sắp xếp nổi bọt so sánh mỗi cặp phần tử trong mảng trừ khi cả toàn bộ mảng đó đã hoàn toàn được sắp xếp theo thứ tự tăng dần. Điều này có thể làm tăng độ phức tạp, tức là tăng các thao tác so sánh và tráo đổi không cần thiết nếu như mảng này không cần sự tráo đổi nào nữa khi tất cả các phần tử đã được sắp xếp theo thứ tự tăng dần rồi .

>Để tránh việc này xảy ra, chúng ta có thể sử dụng một biến [swapped] chẳng hạn để giúp chúng ta biết có cần thực hiện thao tác tráo đổi thứ tự hay không. Nếu không cần thiết thì thoát khỏi vòng lặp.

## Code Examples : Bubble.cpp


## Sắp Xếp Chèn (Insertion Short)

` Khái niệm `

>Sắp xếp chèn là một giải thuật sắp xếp dựa trên so sánh in-place. Ở đây, một danh sách con luôn luôn được duy trì dưới dạng đã qua sắp xếp. Sắp xếp chèn là chèn thêm một phần tử vào danh sách con đã qua sắp xếp. Phần tử được chèn vào vị trí thích hợp sao cho vẫn đảm bảo rằng danh sách con đó vẫn sắp theo thứ tự.

>Giải thuật này không thích hợp sử dụng với các tập dữ liệu lớn khi độ phức tạp trường hợp xấu nhất và trường hợp trung bình là Ο(n2) với n là số phần tử.

` Cách hoạt động `

>Ban đầu ta sẽ khởi tạo dãy con bằng a[0], đương nhiên với dãy con một phần tử thì nó đã được sắp xếp.
  >Ta bắt đầu xét từ phần tử có chỉ số 1 đến n-1.
  >Sau khi chèn phần tử a[1] vào dãy con đã sắp xếp, dãy a sẽ thay đổi như sau. Ta tiếp tục xét phần tử a[2].
  >Sau khi chèn phần tử a[2] vào dãy con đã sắp xếp, dãy a sẽ thay đổi như sau. Ta tiếp tục xét phần tử a[3].
  >Sau khi chèn phần tử a[3] vào dãy con đã sắp xếp, dãy a sẽ thay đổi như sau. Ta tiếp tục xét phần tử a[4]
  >Sau khi chèn phần tử a[4] vào dãy con đã sắp xếp, dãy a sẽ thay đổi như sau. Ta tiếp tục xét phần tử a[5].
  >Sau khi chèn phần tử a[5] vào dãy con đã sắp xếp, dãy a sẽ thay đổi như sau. Ta tiếp tục xét phần tử a[6].
  >Sau khi chèn phần tử a[6] vào dãy con đã sắp xếp, dãy a sẽ thay đổi như sau. Ta tiếp tục xét phần tử a[7].
  >Chèn a[7] vào dãy a xong là ta đã hoàn thành quá trình sắp xếp.

## Code Example : Insertion.cpp

## Sắp Xếp Chọn (Selection Short)

` Khái niệm `

>Giải thuật sắp xếp chọn (Selection Sort) là một giải thuật đơn giản. Giải thuật sắp xếp này là một giải thuật dựa trên việc so sánh in-place, trong đó danh sách được chia thành hai phần, phần được sắp xếp (sorted list) ở bên trái và phần chưa được sắp xếp (unsorted list) ở bên phải. Ban đầu, phần được sắp xếp là trống và phần chưa được sắp xếp là toàn bộ danh sách ban đầu.

>Phần tử nhỏ nhất được lựa chọn từ mảng chưa được sắp xếp và được tráo đổi với phần bên trái nhất và phần tử đó trở thành phần tử của mảng được sắp xếp. Tiến trình này tiếp tục cho tới khi toàn bộ từng phần tử trong mảng chưa được sắp xếp đều được di chuyển sang mảng đã được sắp xếp.

>Giải thuật này không phù hợp với tập dữ liệu lớn khi mà độ phức tạp trường hợp xấu nhất và trường hợp trung bình là O(n2) với n là số phần tử.

` Cách hoạt động `
 
>Ban đầu ta sẽ khởi tạo dãy con bằng a[0], đương nhiên với dãy con một phần tử thì nó đã được sắp xếp.

>Ta bắt đầu xét từ phần tử có chỉ số 0 đến n-1.

   >Đầu tiên ta tìm phần tử nhỏ nhất trong dãy trong khoảng từ 0 đến 7. Sau đó hoán đổi cho phần tử a[0].
   >Tiếp theo tìm phần tử nhỏ nhất trong dãy trong khoảng từ 1 đến 7. Sau đó hoán đổi cho phần tử a[1].
   >Tiếp theo tìm phần tử nhỏ nhất trong dãy trong khoảng từ 2 đến 7. Sau đó hoán đổi cho phần tử a[2].
   >Tiếp theo tìm phần tử nhỏ nhất trong dãy trong khoảng từ 3 đến 7. Sau đó hoán đổi cho phần tử a[3].
   >Tiếp theo tìm phần tử nhỏ nhất trong dãy trong khoảng từ 4 đến 7. Sau đó hoán đổi cho phần tử a[4].
   >Tiếp theo tìm phần tử nhỏ nhất trong dãy trong khoảng từ 5 đến 7. Sau đó hoán đổi cho phần tử a[5].
   >Tiếp theo tìm phần tử nhỏ nhất trong dãy trong khoảng từ 6 đến 7. Sau đó hoán đổi cho phần tử a[6].
   >Còn 1 phần tử cuối cùng chắc chắn đã ở vị trí đúng.


## Code Examples : Selection.cpp

## Sắp Xếp Trộn (Merge Short)

` Khái niệm `

>Sắp xếp trộn (Merge Sort) là một giải thuật sắp xếp dựa trên giải thuật Chia để trị (Divide and Conquer). Với độ phức tạp thời gian trường hợp xấu nhất là Ο(n log n) thì đây là một trong các giải thuật đáng được quan tâm nhất.

>Đầu tiên, giải thuật sắp xếp trộn chia mảng thành hai nửa và sau đó kết hợp chúng lại với nhau thành một mảng đã được sắp xếp .

` Ý tưởng `

    mergeSort(a[], l,  r)
    if r > l
        1. Tìm chỉ số nằm giữa mảng để chia mảng thành 2 nửa:
                middle m = (l+r)/2
        2. Gọi đệ quy hàm mergeSort cho nửa đầu tiên:  
                mergeSort(a, l, m)
        3. Gọi đệ quy hàm mergeSort cho nửa thứ hai:
                mergeSort(a, m+1, r)
        4. Gộp 2 nửa mảng đã sắp xếp ở (2) và (3):
                merge(a, l, m, r)

## Code Example : Merge.cpp


