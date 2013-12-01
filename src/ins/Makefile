
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
#LIBS1 = $(shell find ./lib/ -name '*.a')
#LIBS2 = $(notdir $(LIB1))
#LIBS3 = $(patsubst lib%.a,%,$(LIBS2))
LIBS = $(addprefix -l, $(patsubst lib%.a,%,$(notdir $(shell find ./lib/ -name '*.a'))))
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
	$(CC)  -g -L$(LIB_PATH) $(LIBS) $(OBJS)  $(LIBS) -o $(TARGET) 

FORCE:



clean: 
	-find ./ -name '*.[ado]' | xargs rm
	-rm $(TARGET)


.PHONY: $(PHONY)

