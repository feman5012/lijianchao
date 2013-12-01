
HEADER_PATH := ../../h/
LIB_PATH := ../../lib/

PHONY :=
PHONY += all

SRCS := instrument.c
OBJS := $(SRCS:.c=.o)
DEPS := $(SRCS:.c=.d)


LIB_NAME := instrument
LIBS := $(LIB_PATH)lib$(LIB_NAME).a

all: $(DEPS) $(OBJS) $(LIBS)
	echo instrument done

$(OBJS): %.o: %.c
	$(CC) -I$(HEADER_PATH) -c -g  $< -o $@	

$(DEPS): %.d: %.c
	@set -e; rm -f $@; \
	$(CC) -I$(HEADER_PATH) -M $(CPPFLAGS) $< > $@.$$$$; \
	sed 's,\($*\)\.o[ :]*,\1.o $@ : ,g' < $@.$$$$ > $@; \
	rm -f $@.$$$$


$(LIBS): $(OBJS)
	ar rc $@ $^

.PHONY: $(PHONY)
