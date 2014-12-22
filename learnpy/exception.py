# encoding: utf-8
#! /usr/bin/env python

# try-catch
try:
    x = input('Enter the 1st number: ')
    y = input('Enter the 2nd number: ')
    print x/y
except ZeroDivisionError:
    print "The second number can't be zero!"i
except TypeError:
    print "That was not a number!"
