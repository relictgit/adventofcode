target		:=	bin
objs		:=	main.o

CXX			:=	g++
CXXFLAGS	:=	-Wall -Werror
gdb			:=	-g
opt			:=	-O2

all: $(target)

deps		:=	$(patsubst %.o,%.d,$(objs))
-include $(deps)
DEPFLAGS = -MMD -MF $(@:.o=.d)

bin: $(objs)
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< $(DEPFLAGS)

clean:
	rm -f $(target) $(objs) $(deps)
