FROM debian:buster-slim

RUN apt update && apt install -y git gcc g++ gdb
