#!/bin/bash
i=0
until [ $i -eq 50 ]; do
echo "$i"
i=$((i+2))
done
