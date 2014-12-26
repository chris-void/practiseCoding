# encoding: utf-8
#! /usr/bin/env python

class checkIndex(key):
    """
    key应该是整数
    如果不是整数：TypoError
    如果是负数： IndexError（因为序列式无限长的）
    """
    if not isinstance(key, (int, long)):
        raise TypeError
    if key<0:
        raise IndexError

class ArithmeticSequence:
    def __init__(self, start=0, step=1):
        """
        init
        start -> 序列中的第一个值  
        step -> 相邻的值的差
        changed -> 用户修改的值的字典
        """
        self.start = start
        self.step = step
        self.changed = {}

    def __getitem__(self, key):
        """
        get an item for the ArithmeticSequence 
        """
        checkIndex(key)

        try:
            return self.changed[key]
        except KeyError:
            return self.start + key * self.step

    def __setitem__(self, key, value):
        """
        修改算数序列中的一个项
        """
        checkIndex(key)
        self.changed[key] = value 

s = ArithmeticSequence(1, 2)

