#encoding: utf-8
#! /usr/bin/env python

class MuffledCalculator:
    muffled = False
    def calc(self, expr):
        try:
            return eval(expr)
        except ZeroDivisionError:
            if self.muffled:
                print 'Division by zero is illigial!'
            else:
                raise
