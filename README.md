<p> # Operating-Systems
Small Experiments in Unix system calls and kernel coding </p>

<h2>Steps to install qemu and xv6</h2>

```sh

sudo apt-get update 

sudo apt-get install build-essential

sudo apt-get install qemu

git clone git://github.com/mit-pdos/xv6-public.git

make //inside xv6 folder

sudo apt-get install qemu-system-i386

make qemu //or make qemu-nox

```

<h2>Attach gdb to xv6</h2>

<p>Open two terminals</p>

<p>First terminal-</p>

```sh

make qemu-nox-gdb

```

<p>Second terminal-</p>

```sh

gdb

source .gdbinit

```
