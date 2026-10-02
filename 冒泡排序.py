

num=[8,3,6,2,7,1]
nums=len(num)#算出数组的长度，nums=6
for i in range(nums):  # i=0,1,2,3,4，5；总共循环6轮/改成nums-1，最后一轮不用比较，直接循环5轮，更加标准
    for j in range(nums - 1 - i):#随着循环的进行，每轮少比较i次
        if num[j] > num[j + 1]:
            num[j], num[j + 1] = num[j + 1], num[j]#根据比较的结果，交换位置

print(num)#输出结果
#如果从大到小排序，只需将>改成<

