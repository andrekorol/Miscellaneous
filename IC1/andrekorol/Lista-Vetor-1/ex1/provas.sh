#!/bin/sh

export GET_OUT_OF_LOOP=0
while [  $GET_OUT_OF_LOOP -ne 1 ]; do
    python3 provas.py provas.txt
    ./provas < provas.txt >> data.txt
    python3 test.py data.txt || GET_OUT_OF_LOOP=1   
    sh clear_data.sh
done
