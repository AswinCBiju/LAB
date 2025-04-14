#!/bin/bash
echo "Enter a number"
read a
rem=$((a % 2))
if [ $rem -eq 0 ]; then
echo "The number is even"
else
echo "The number is odd"
fi

