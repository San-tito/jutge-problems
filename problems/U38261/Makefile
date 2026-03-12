CXX := g++
CXXFLAGS := -g3 -D_GLIBCXX_DEBUG -Wall -Wextra -Werror -Wno-sign-compare -std=c++17 -fno-extended-identifiers

PROGRAM := program
SRCS := $(wildcard *.cc)
INPUTS := $(wildcard sample-*.in sample-*.inp)
OUTPUTS := $(patsubst %.in,%.cor,$(INPUTS))
OUTPUTS := $(patsubst %.inp,%.cor,$(OUTPUTS))

.PHONY: all clean test

all: $(PROGRAM)

$(PROGRAM): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(PROGRAM)

test: $(PROGRAM)
	@echo "Running tests..."
	@pass=0; fail=0; \
	for infile in $(INPUTS); do \
		outfile="$${infile%.*}.out"; \
		expected="$${infile%.*}.cor"; \
		if [ ! -f "$$expected" ]; then \
			echo "$$infile: ⚠️ Missing expected output $$expected"; continue; \
		fi; \
		$(PROGRAM) < "$$infile" > "$$outfile"; \
		if diff -q "$$outfile" "$$expected" > /dev/null; then \
			echo "$$infile: ✅ OK"; pass=$$((pass+1)); \
		else \
			echo "$$infile: ❌ FAIL"; fail=$$((fail+1)); \
			diff "$$outfile" "$$expected"; \
		fi; \
		rm -f "$$outfile"; \
	done; \
	echo "Summary: $$pass passed, $$fail failed."

