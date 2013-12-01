
HEADER_PATH := h/
LIB_PATH := lib/


PHONY :=
PHONY += clean 
PHONY += all
PHONY += pack

DIRS := src 
SRCS := main.c
OBJS := $(SRCS:.c=.o) 
DEPS := $(SRCS:.c=.d)
LIBS := $(shell find ./lib/ -name '*.a')
LIBS := $(notdir $(LIBS))
LIBS := $(patsubst lib%.a,%,$(LIBS))
LIBS := $(addprefix -l, $(LIBS))
TARGET := prog


all: $(DIRS) $(OBJS) pack 
	echo all done


$(DIRS): FORCE
	$(MAKE) -C $@

$(OBJS): %.o: %.c
	$(CC) -I$(HEADER_PATH) -c -g  $< -o $@        

$(DEPS): %.d: %.c
	@set -e; rm -f $@; \
	$(CC) -I$(HEADER_PATH) -M $(CPPFLAGS) $< > $@.$$$$; \
	sed 's,\($*\)\.o[ :]*,\1.o $@ : ,g' < $@.$$$$ > $@; \
	rm -f $@.$$$$


pack: FORCE
	$(CC)  -g $(OBJS) -L$(LIB_PATH) $(LIBS) -o $(TARGET) 

FORCE:



clean: 
	-find ./ -name '*.[ado]' | xargs rm
	-rm $(TARGET)


.PHONY: $(PHONY)

