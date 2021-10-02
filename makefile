all:$(patsubst %.c,%,$(wildcard *.c))

%: %.c
	cc -w -o $@ $<
