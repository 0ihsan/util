src := $(wildcard *.c)
bin := $(src:.c=)

all:$(bin)

$(bin):$(src)
	cc -w -o $@ $<
