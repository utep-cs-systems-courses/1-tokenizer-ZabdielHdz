CFLAGS=-g -O3



all: uimain



tokenizer.o: tokenizer.h

history.o: tokenizer.h

uimain.o: uimain.c



uimain: tokenizer.o history.o uimain.o

	cc -o $@ $^ $(CFLAGS) $(OBJS)



clean:

	rm -f *.o uimain *~ *#



run: uimain

	./uimain
