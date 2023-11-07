import time

test_list = [x for x in range(0, 1000001)]

# 0 ~ 1000000를 set 에 저장한다
test_set = set([x for x in range(00, 1000001)])

# 특정 데이터가 리스트에 있는지 확인할 때 
t_0 = time.time()
print(1000000 in test_list)
t_1 = time.time()

print("리스트에서 걸린 시간: {}".format(t_1 - t_0))

t_0 = time.time()
print(1000000 in test_set)
t_1 = time.time()

print("셋에서 걸린 시간: {}".format(t_1 - t_0))