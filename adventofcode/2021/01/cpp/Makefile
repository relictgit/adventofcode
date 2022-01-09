target		:=	bin
objs		:=	main.o count_increasing_number.o count_increase_sum_of_num.o read_input.o

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
	$(CXX) $(CXXFLAGS) $(opt) -c $< $(DEPFLAGS)

clean:
	rm -f $(target) $(objs) $(deps)
