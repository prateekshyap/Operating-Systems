<p> # Creating a system call </p>

<h2>Steps to create a system call</h2>

<p>Define a new system call with its index in syscall.h</p>

<p>Add the same system call to syscall.c in array of function pointers (order of addition is important, index should be same as syscall.h)</p>

<p>Add a function prototype in syscall.c</p>

<p>Define the function in sysproc.h</p>

<p>Add system call to usys.S</p>

<p>Add prototype to user.h</p>

<p>Write a C program and call the function in it. Follow the steps to add a user program</p>