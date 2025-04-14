#!/bin/bash
read -p "Enter a character: " vow
flag=0 
case "$vow" in
"a"|"e"|"i"|"o"|"u"|"A"|"E"|"I"|"O"|"U") flag=1;
esac
if [ $flag -eq 1 ]; then
echo "The character is a vowel"
else
echo "The character is not a vowel"
fi


