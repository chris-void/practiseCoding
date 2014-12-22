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
    def __init__
