##############################
# Country definition for ROM #
##############################
province = {
  id = 423 # 康斯坦察
  ic = { size = 4 current_size = 2 }
  infra = { size = 0.8 current_size = 0.7 }
  anti_air = 4
}
province = {
  id = 424 # 布加勒斯特
  ic = { size = 9 current_size = 6 }
  infra = { size = 0.8 current_size = 0.75 }
  anti_air = 5
}
province = {
  id = 425 # 皮特什蒂
  ic = 1
  infra = { size = 0.8 current_size = 0.7 }
}
province = {
  id = 426 # 克拉约瓦
  ic = 1
  infra = { size = 0.6 current_size = 0.5 }
}
province = {
  id = 428 # 米耶尔库雷亚丘克
  infra = { size = 0.8 current_size = 0.6 }
}
province = {
  id = 431 # 普洛耶什蒂
  ic = { size = 8 current_size = 5 }
  infra = { size = 0.8 current_size = 0.65 }
  anti_air = 9
}

#####################
# Country main data #
#####################

country = {
  tag                = ROM
  puppet             = SOV
  control            = SOV
  capital            = 424 # 布加勒斯特
  dissent            = 10
  manpower           = 150
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 100

  diplomacy = {
    relation = { tag = BUL value = 100 access = yes }
    relation = { tag = ENG value = 50 }
    relation = { tag = FRA value = 50 }
    relation = { tag = GRE value = 100 }
    relation = { tag = HUN value = -50 }
    relation = { tag = TUR value = 100 }
    relation = { tag = YUG value = 100 }
    relation = { tag = SOV value = 150 }
  }

  nationalprovinces      = { 230 3241 3242 3243 3244 3245 3246 3247 3248 3249 3250 3251 3252 3253 3254 3255 3256 3257 3258 3259 3260 3261 3575 4088 424 425 426 427 428 429 430 431 432 433 434 435 436 495 496 498 3216 3217 3219 233 232 231 3407 423 3416 3569 3570 3571 }
  ownedprovinces         = { 3241 3242 3243 3244 3245 3246 3247 3248 3249 3250 3251 3252 3253 3254 3255 3256 3259 3260 4088 423 424 425 426 427 428 429 430 431 432 433 436 495 496 498 }
  controlledprovinces    = { 3241 3242 3243 3244 3245 3246 3247 3248 3249 3250 3251 3252 3253 3254 3255 3256 3259 3260 4088 423 424 425 426 427 428 429 430 431 432 433 436 495 496 498 }

  techapps               = { 1010 1020 1030 1040 14000 14010 14020 2010 2020 2030 2040 2050 2070 2170 2290 2290 2300 2300 2310 2310 2320 3010 3020 3030 3400 4010 4020 4030 4040 4120 4130 5010 5050 5080 5100 5130 5310 6300 6310 6320 6330 6340 8040 8050 9010 9020 9030 2060 2080 2160 2220 2230 4050 4060 4140 4170 4190 4250 5020 5220 5350 6570 66540 66520 66530 66510 66500 8010 8020 8030 9700 9710 9190 5170 5800 5190 5180 5660 2280 2360 2420 2540 2550 2430 2440 2560 1050 1060 1170 1180 1190 1200 1270 1290 1280 1410 1420 1890 1900 1910 1760 1770 2370 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 10
    freedom           = 3
    free_market       = 2
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 22037 } # 米哈伊一世 
  headofgovernment       = { type = 9 id = 22051 } # 彼得鲁 格罗扎 
  foreignminister        = { type = 9 id = 22080 } # 格奥尔基 特特雷斯库 
  armamentminister       = { type = 9 id = 22098 } # 瓦西里 卢卡 
  ministerofsecurity     = { type = 9 id = 22112 } # 泰奥哈里 杰奥尔杰斯库 
  ministerofintelligence = { type = 9 id = 22121 } # 季米特里 扬科维奇 
  chiefofstaff           = { type = 9 id = 22131 } # 米哈伊尔 拉斯卡尔 
  chiefofarmy            = { type = 9 id = 22144 } # 达米安 拉什库 
  chiefofnavy            = { type = 9 id = 22153 } # 格奥尔基 伊利埃斯卡 
  chiefofair             = { type = 9 id = 22161 } # 埃马诺伊尔 约内斯库 
  dormant_ministers      = { 22053 22001 22031 22032 22039 22048 22049 22053 22054 22075 22076 22077 22082 22085 22093 22094 22097 22105 22106 22111 22118 22119 22120 22127 22129 22132 22133 22134 22139 22142 22145 22158 }

  landunit = {
    id       = { type = 20600 id = 1 }
    name     = "罗马尼亚第1军 "
    location = 417
    division = {
      id             = { type = 20600 id = 2 }
      name           = "第1步兵师 "
      type           = infantry
      model          = 3
      strength       = 100
      experience     = 10
    }
    division = {
      id             = { type = 20600 id = 3 }
      name           = "第2步兵师 "
      type           = infantry
      model          = 3
      strength       = 100
    }
    division = {
      id             = { type = 20600 id = 4 }
      name           = "第3步兵师 "
      type           = infantry
      model          = 3
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 20600 id = 5 }
    name     = "罗马尼亚第2军 "
    location = 422
    division = {
      id             = { type = 20600 id = 6 }
      name           = "第4步兵师 "
      type           = infantry
      model          = 3
      strength       = 100
    }
    division = {
      id             = { type = 20600 id = 7 }
      name           = "第5步兵师 "
      type           = infantry
      model          = 3
      strength       = 100
    }
    division = {
      id             = { type = 20600 id = 8 }
      name           = "第6步兵师 "
      type           = infantry
      model          = 3
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 20600 id = 9 }
      name           = "第7步兵师 "
      type           = infantry
      model          = 3
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 20600 id = 10 }
    name     = "罗马尼亚第3军 "
    location = 424
    division = {
      id             = { type = 20600 id = 11 }
      name           = "第8步兵师 "
      type           = infantry
      model          = 3
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 20600 id = 12 }
      name           = "第9步兵师 "
      type           = infantry
      model          = 3
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 20600 id = 13 }
      name           = "第10步兵师 "
      type           = infantry
      model          = 3
      strength       = 100
    }
  }

  navalunit = {
    id       = { type = 19002 id = 27 }
    name     = "罗马尼亚海军 "
    location = 423
    base     = 423
    division = {
      id             = { type = 19002 id = 28 }
      name           = "费迪南德国王支队 "
      type           = destroyer
      model          = 0
      strength       = 7
      max_strength   = 70
    }
    division = {
      id             = { type = 19002 id = 29 }
      name           = "海豚支队 "
      type           = submarine
      model          = 1
      strength       = 8
      max_strength   = 80
    }
  }

  airunit = { 
    id       = { type = 20600 id = 42 }
    name     = "罗马尼亚空军第1联队 "
    location = 424
    base     = 424
    division = {
      id             = { type = 20600 id = 43 }
      name           = "第1截击机大队 "
      type           = interceptor
      model          = 1
      strength       = 50
    }
    division = {
      id             = { type = 20600 id = 44 }
      name           = "第1战术轰炸机大队 "
      type           = tactical_bomber
      model          = 1
      strength       = 10
    }
  }
}
