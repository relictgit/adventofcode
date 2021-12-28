target		:=	bin
objs		:=	count_increasing_number.o count_increase_sum_of_num.o main.o

CXX			:=	g++
CXXFLAGS	:= -Wall -Werror

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
