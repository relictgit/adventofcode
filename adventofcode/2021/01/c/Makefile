target	:=	bin
objs	:=	main.o read_file.o

C		:=	gcc
CFLAGS	:=	-Wall -Werror
gdb		:=	-g
opt		:=	-O2

all: $(target)

deps	:=	$(patsubst %.o,%.d,$(objs))
-include $(deps)
DEPFLAGS = -MMD -MF $(@:.o=.d)

bin: $(objs)
	$(C) $(CFLAGS) $^ -o $@

%.o: %.c
	$(C) $(CFLAGS) $(opt) $(gdb) -c $< $(DEPFLAGS)

clean:
	rm -f $(target) $(objs) $(deps)
