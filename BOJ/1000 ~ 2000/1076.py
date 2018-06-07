resistence = { "black" : {"value" : 0, "mul" : 1 },      "brown"  : {"value" : 1, "mul": 10},
              "red"   : {"value" : 2, "mul" : 100},     "orange" : {"value" : 3, "mul": 1000},
              "yellow": {"value" : 4, "mul" : 10000},   "green"  : {"value" : 5, "mul" : 100000},
              "blue"  : {"value" : 6, "mul": 1000000},  "violet" : {"value" : 7, "mul": 10000000},
              "grey"  : {"value" : 8, "mul": 100000000}, "white"  : {"value" : 9, "mul" : 1000000000}}
first_resist = input()
second_resist = input()
third_resist = input()
print(int(str(resistence[first_resist]["value"]) + str(resistence[second_resist]["value"])) * resistence[third_resist]["mul"])
