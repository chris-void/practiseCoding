#将N个随机值的数组排序

Double a[] = new Double[N];
for (int i=0; i<a.length; i++){
    a[i] = StdRandom.uniform();
}
Quick.sort(a);
