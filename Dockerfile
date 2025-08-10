FROM ubuntu:latest

WORKDIR /app
COPY main main

CMD ["./main" "123"]
