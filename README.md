toy_printf_buffer
=================

to prove that printf is buffered

printf某些内容时,操作系统仅仅是把该内容放到了stdout的缓冲队列里了,并没有实际的写到屏幕上,
但是,只要看到有 \n(因为是行缓冲) 则会立即刷新stdout,因此就马上能够打印了.
如果想printf("+++++++");马上打印，就得使用fflush(stdout)强迫把stdout内容输出并清空stdout。
