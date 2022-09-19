

INCLUDE_PATH=/usr/include/

all: install

.PHONY: install

install:
	cp -v version.h $(INCLUDE_PATH)
