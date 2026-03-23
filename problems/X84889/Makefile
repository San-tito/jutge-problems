CXX := g++
CXXFLAGS := -g3 -D_JUDGE_ -D_GLIBCXX_DEBUG -O2 -Wall -Wextra -Werror -Wno-sign-compare -std=c++11 -fno-extended-identifiers

OBJS = main.o guanyadors.o

all: program

$(OBJS): player.hh

program: $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

.PHONY: clean
clean:
	-rm -f program $(OBJS)
