#!/bin/bash
cd /home/adam/code/cpp/pointer/dma2
g++ -c dog.cpp
g++ -c main.cpp
g++ dog.cpp main.cpp -o a.out
echo "Compilation complete!"
