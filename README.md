# mlo-chacha20-rs

Freestanding ChaCha20 cypher.

mlo-chacha20-rs is a portable library written in Rust that implements the
ChaCha20 encryption and decryption algorithm. This library can be used in
freestanding environments that do not have the Rust standard library
available or do not have the C standard library available. Examples of such
environments are operating system kernels, embedded systems and consoles.

This library provides an external C API, therefore the ChaCha20 encryption
and decryption funcions can be called from C or other languages.

