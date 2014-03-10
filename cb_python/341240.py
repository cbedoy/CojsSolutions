#!/usr/bin/python
# riesenie by misof
inputs = int(raw_input(""))
while (inputs > 0):
  inputs -= 1
  empty = raw_input("")
  N = int(raw_input(""))
  orig = []
  for i in range(N):
    riadok = raw_input("")
    tokeny = riadok.split(" ")
    orig.append( int( tokeny[1] ))
  orig.sort()
  result = 0
  for i in range(N):
    result += abs( (i+1) - orig[i] )

  print result