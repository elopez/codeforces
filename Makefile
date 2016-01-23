UPTO?=k
PROBLEMS=$(shell bash -c 'echo {a..${UPTO}}')

.PHONY: populate clean

populate:
	for i in ${PROBLEMS}; do cp -n template.cpp $$i.cpp; done

clean:
	$(RM) -f *.o a.out ${PROBLEMS}

%: %.cpp
	g++ -Wall -Wextra -O2 -ggdb -lm -std=c++11 $< -o $@
