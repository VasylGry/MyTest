ARM_DIR=~/delphi/nautilus/staging_dir/gcc-linaro-5.3-2016.02-x86_64_arm-linux-gnueabihf
CC=$(ARM_DIR)/bin/arm-linux-gnueabihf-gcc
INCLUDE=$(ARM_DIR)/5.3.1/include/
LIB=$(ARM_DIR)/lib
CFLAGS=-I$($INCLUDE)
LFLAGS=-L$($LIB) -Wl
TARGET=hello

all: $(TARGET)

hello.o: hello.c
	 $(CC) -c -o hello.o hello.c $(CFLAGS) 

hello: hello.o
	$(CC) -o hello hello.o $(LFLAGS) 

.PHONY: clean

clean:
	echo Cleaning project build dir...
	rm -f *.o *.d  $(TARGET)
