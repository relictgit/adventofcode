target		:=	bin
objs		:=	main.o read_input.o calc_position.o

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
