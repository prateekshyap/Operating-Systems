<p> # Creating a user program </p>

<h2>Steps to create a user program</h2>

<p>Add MyFirstProgram.c (or something similar) to xv6.</p>

<p>Add the program to Makefile</p>

<p>_MyFirstProgram\ in UPROGS= and MyFirstProgram.c in EXTRA=</p>

```sh

make clean//inside xv6 folder

make

make qemu //or make qemu-nox

ls

MyFirstProgram

```