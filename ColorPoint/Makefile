CC=g++
DEBUG=-g
CFLAGS=-Wall $(DEBUG)
LDFLAGS=

SOURCES=Color.cc Point.cc Main.cc
OBJECTS=$(subst .cc,.o,$(SOURCES))
TARGET=point

.PHONY: all depend clean

all: depend $(TARGET)

.depend: $(SOURCES)
	rm -f .depend
	$(CC) $(CFLAGS) -MM $^ >> .depend

depend: .depend

include .depend

$(TARGET): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

%.o: %.cc
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -f *.o *~ $(TARGET)
