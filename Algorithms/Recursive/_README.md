## Giải thuật đệ quy (Recursion)


` Khái niệm `

>Một số ngôn ngữ lập trình cho phép việc một module hoặc một hàm được gọi tới chính nó. Kỹ thuật này được gọi là Đệ qui (Recursion). Trong đệ qui, một hàm a có thể: gọi trực tiếp chính hàm a này hoặc gọi một hàm b mà trả về lời gọi tới hàm a ban đầu. Hàm a được gọi là hàm đệ qui.

` Đặc điểm  `

>Một hàm đệ qui có thể tiếp tục diễn ra vô số lần giống như một vòng lặp vô hạn. Để tránh điều này, bạn phải ghi nhớ hai thuộc tính sau của hàm đệ qui:

   >Điều kiện cơ bản: phải có ít nhất một điều kiện để khi mà gặp điều kiện này thì việc gọi chính hàm đó (gọi đệ qui) sẽ dừng lại.
   
   >Tiệm cận: mỗi khi hàm đệ qui được gọi thì nó càng tiệm cận tới điều kiện cơ bản.

` Triển khai  `

>Nhiều ngôn ngữ lập trình triển khai sự đệ qui theo cách thức của các ngăn xếp (stack). Nói chung, mỗi khi một hàm (hàm gọi – caller) gọi hàm khác (hàm được gọi – callee) hoặc gọi chính nó (callee), thì hàm caller truyền điều khiển thực thi tới callee. Tiến trình truyền này cũng có thể bao gồm một số dữ liệu từ caller tới callee.

` So sánh Đệ quy và Vòng Lặp `

>Nhiều người có thể nói rằng tại sao lại sử dụng đệ qui trong khi sử dụng vòng lặp cũng có thể làm được các tác vụ tương tự. Lý do đầu tiên là đệ qui làm cho chương trình dễ đọc hơn và với các hệ thống CPU cải tiến ngày nay thì đệ qui là hiệu quả hơn rất nhiều khi so với các vòng lặp

` Độ Phức Tạp Thời Gian (Time complexity) của hàm đệ quy `

>Với vòng lặp, chúng ta lấy số vòng lặp để tính độ phức tạp thời gian. Tương tự với đệ qui, giả sử mọi thứ là hằng số, chúng ta tính thời gian một lời gọi đệ qui được tạo ra. Một lời gọi được tạo ra tới một hàm sẽ là Ο(1), Do đó với n là thời gian một lời gọi đệ qui được tạo ra thì độ phức tạp thời gian hàm đệ qui sẽ là Ο(n).

` Độ phức tạp của bộ nhớ (Space complexity) của hàm đệ quy `
>Độ phức tạp bộ nhớ được ước lượng dựa vào lượng bộ nhớ cần thêm cho một module được thực thi. Với vòng lặp, trình biên dịch hầu như không cần thêm bộ nhớ. Trình biên dịch sẽ tự cập nhật giá trị của biến được sử dụng ngay trong vòng lặp. Nhưng với đệ qui, hệ thống cần lưu giữ các bản ghi động mỗi khi một lời gọi đệ qui được tạo. Do đó có thể nói rằng, độ phức tạp bộ nhớ của hàm đệ qui là cao hơn so với vòng lặp.


## Code Examples :   Factorial.cpp (Giai thừa) ,   Exponential.cpp (Lũy Thừa)    , GreatestCommon.cpp (Ước chung lớn nhất) , Fibonacci.cpp (Dãy Fibonachi) , ChangeBinary.cpp (Chuyển từ num -> binary)
