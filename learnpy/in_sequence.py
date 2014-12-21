# encoding utf-8
#! /usr/bin/env python

# check PIN && usr name
database = [
        ['albert',  '1234'],
        ['dilbert', '4242'],
        ['smith',   '7524'],
        ['jones',   '9843']
        ]

usrname = raw_input('Usr name: ')
pin = raw_input('PIN code: ')

if[usrname, pin] in database: print 'Access granted!'


