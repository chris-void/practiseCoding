# encoding: utf-8
#! /usr/bin/env python

__metaclass__ = type
class Bird:
    def __init__(self):
        self.hungry = True
    def eat(self):
        if self.hungry:
            print 'Aaaaaah'
            self.hungry = False
        else:
            print 'No. Thanks!'

class SongBird(Bird):
    def __init__(self):
        super(SongBird, self).__init__()
        self.sound = 'Squawk!'
    def sing(self):
        print self.sound

sb = SongBird()

print sb.sing()
print sb.eat()

