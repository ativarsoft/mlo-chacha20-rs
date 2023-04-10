# Copyright (C) 2023 Mateus de Lima Oliveira

all: mlo-chacha20-rs

mlo-chacha20-rs:
	cargo build --release --offline

test:
	RUST_BACKTRACE="1" cargo test

clean:
	cargo clean

.PHONY: mlo-chacha20-rs test clean
