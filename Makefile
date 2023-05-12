# Copyright (C) 2023 Mateus de Lima Oliveira

MLO_CHACHA20_RS=build/libmlo_chacha20_rs.a
LIBS=$(MLO_CHACHA20_RS)
BIN=chacha20

all: $(MLO_CHACHA20_RS) $(BIN)

$(MLO_CHACHA20_RS):
	cargo build --release --offline -Z unstable-options --out-dir="build/"

chacha20.o: chacha20.c chacha20.h $(MLO_CHACHA20_RS)
	$(CC) $(CFLAGS) $(LDFLAGS) -c -o $@ $<

chacha20: chacha20.o
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^ $(LIBS)

test: $(BIN)
	true $(shell ./chacha20)
	test $(.SHELLSTATUS)

clean:
	cargo clean
	rm -f -r build/
	rm -f *.o
	rm -f $(BIN)

.PHONY: mlo-chacha20-rs test clean

