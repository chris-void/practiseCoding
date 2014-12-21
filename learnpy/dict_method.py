#encoding: utf-8
#! /usr/bin/env python

# 使用get()的简单数据库

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

# use the right key 
key = request # if the request is not a / p

if request == 'p': key = 'phone'
if request == 'a': key = 'addr'

# use get() to get the default val
person = people.get(name, {})
label = labels.get(key, key)
result = person.get(key, 'not available')

# 如果名字在字典内则打印
print "%s's %s is %s. " % (name, label, result)


