
HEADER_PATH := ../../h/
LIB_PATH := ../../lib/

PHONY :=
PHONY += all

SRCS := test.c
OBJS := $(SRCS:.c=.o)
DEPS := $(SRCS:.c=.d)


LIB_NAME := test
LIBS := $(LIB_PATH)lib$(LIB_NAME).a

all: $(DEPS) $(OBJS) $(LIBS)
	echo test done

$(OBJS): %.o: %.c
	$(CC) -I$(HEADER_PATH) -c -g -finstrument-functions -fno-inline $< -o $@	

$(DEPS): %.d: %.c
	@set -e; rm -f $@; \
	$(CC) -I$(HEADER_PATH) -M $(CPPFLAGS) $< > $@.$$$$; \
	sed 's,\($*\)\.o[ :]*,\1.o $@ : ,g' < $@.$$$$ > $@; \
	rm -f $@.$$$$


$(LIBS): $(OBJS)
	ar rc $@ $^

.PHONY: $(PHONY)
