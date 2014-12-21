#encoding: utf-8
#! /usr/bin/env python

# easy database

people = {
        'Alice': 
        {
            'phone': '2341',
            'addr' : 'Foo driver 23'
            },
        
        'Beth' :
        {
            'phone': '9102',
            'addr' : 'Bar st 42'
            },

        'Cecil' :
        {
            'phone': '3158',
            'addr' : 'Baz avenue 33 '
            },
        
        }

# 标签说明
labels = {
        'phone' : 'phone number',
        'addr'  : 'address'
        }
name = raw_input('Name: ')

# 查找phone # or addr?
request = raw_input('phone number(p) or address(a)? ')

if request == 'p': key = 'phone'
if request == 'a': key = 'addr'

# 如果名字在字典内则打印
if name in people: print "%s's %s is %s. " % \
        (name, labels[key], people[name][key] )


