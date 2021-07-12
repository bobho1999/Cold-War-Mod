##############################
# Country definition for YUG #
##############################
province = {
  id = 380 # 卢布尔雅那
  ic = { size = 2 current_size = 1 }
  infra = { size = 0.8 current_size = 0.6 }
}
province = {
  id = 381 # 戈斯皮奇
  infra = { size = 0.8 current_size = 0.65 }
}
province = {
  id = 382 # 萨格勒布
  ic = { size = 3 current_size = 1 }
  infra = { size = 0.8 current_size = 0.55 }
  anti_air = 2
}
province = {
  id = 384 # 斯普利特
  ic = { size = 2 current_size = 1 }
  infra = { size = 0.7 current_size = 0.65 }
  anti_air = 1
}
province = {
  id = 386 # 萨拉热窝
  ic = { size = 4 current_size = 2 }
  infra = { size = 0.7 current_size = 0.55 }
}
province = {
  id = 388 # 拉古萨（杜布罗夫尼克）
  infra = { size = 0.8 current_size = 0.65 }
  anti_air = 2
}
province = {
  id = 413 # 斯科普里
  infra = { size = 0.6 current_size = 0.5 }
}
province = {
  id = 453 # 贝尔格莱德
  ic = { size = 9 current_size = 7 }
  infra = { size = 0.8 current_size = 0.75 }
  anti_air = 2
}
province = {
  id = 454 # 奥西耶克
  infra = { size = 0.8 current_size = 0.75 }
  anti_air = 1
}

#####################
# Country main data #
#####################

country = {
  tag                = YUG
  capital            = 453 # 贝尔格莱德
  dissent            = 20
  manpower           = 155
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 5000
  money          = 100

  diplomacy = {
    relation = { tag = BUL value = 25 }
    relation = { tag = FRA value = 50 }
    relation = { tag = GRE value = 100 }
    relation = { tag = HUN value = 100 }
    relation = { tag = ROM value = 100 }
    relation = { tag = ALB value = 1000 access = yes }
  }

  nationalprovinces      = { 3211 3212 3213 3214 3215 3216 3217 3218 3219 3220 3221 3222 3223 380 381 382 383 384 385 386 387 388 389 413 414 415 418 451 452 453 454 455 459 493 494 3210 3202 4081 4082 3201 3200 }
  ownedprovinces         = { 3211 3212 3213 3214 3215 3216 3217 3218 3219 3220 3221 3222 3223 380 381 382 383 384 385 386 387 388 389 413 414 415 418 451 452 453 454 455 459 493 494 3210 3202 4081 4082 3201 }
  controlledprovinces    = { 3211 3212 3213 3214 3215 3216 3217 3218 3219 3220 3221 3222 3223 380 381 382 383 384 385 386 387 388 389 413 414 415 418 451 452 453 454 455 459 493 494 3210 3202 4081 4082 3201 }

  techapps               = { 1010 1020 1030 1040 14000 14010 14020 2010 2020 2030 2040 2050 2170 2290 2290 2300 2300 2310 2310 2320 3010 3020 3030 3400 4010 4020 4030 4040 4120 4130 5010 5050 5080 5100 5130 5310 6300 6310 6320 6330 6340 8040 8050 9010 9020 9030 2060 2160 2220 2230 4050 4060 4140 4170 4190 4250 5020 5220 5350 6570 66540 66520 66530 66510 66500 8010 8020 8030 9700 9710 9190 5170 5800 5190 5180 5660 2280 2360 2420 2540 2550 2430 2440 2560 1050 1060 1170 1180 1190 1200 1270 1290 1280 1410 1420 1890 1900 1910 1760 1770 26100 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 6
    freedom           = 5
    free_market       = 5
    professional_army = 3
    defense_lobby     = 7
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 20031 } # 约瑟普·布罗兹·铁托 
  headofgovernment       = { type = 9 id = 20037 } # 约瑟普·布罗兹·铁托 
  foreignminister        = { type = 9 id = 20045 } # 斯塔诺耶 西米奇 
  armamentminister       = { type = 9 id = 20054 } # 米伦蒂耶 波波维奇 
  ministerofsecurity     = { type = 9 id = 20062 } # 科卡 波波维奇 
  ministerofintelligence = { type = 9 id = 20069 } # 亚历山大 兰科维奇 
  chiefofstaff           = { type = 9 id = 20075 } # 阿尔沙 约瓦诺维奇 
  chiefofarmy            = { type = 9 id = 20101 } # 约瑟普·布罗兹·铁托 
  chiefofnavy            = { type = 9 id = 20102 } # 约瑟普·布罗兹·铁托 
  chiefofair             = { type = 9 id = 20093 } # 伊万 罗拉 里巴尔 
  nationalidentity       = "policy_economy_Leninism-market"
  socialpolicy           = "policy_social_revolutionary"
  nationalculture        = "policy_political_new-democratic"
  dormant_ministers      = { 20002 20003 20004 20005 20006 20034 20035 20041 20042 20043 20048 20051 20052 20058 20059 20060 20065 20066 20067 20072 20073 20079 20080 20085 20086 20090 20091 20097 }

  landunit = {
    id       = { type = 30201 id = 1 }
    name     = "南斯拉夫第1集团军 "
    location = 453
    division = {
      id             = { type = 30204 id = 1 }
      name           = "第1'波季'步兵师 "
      type           = infantry
      model          = 3
      strength       = 70
    }
    division = {
      id             = { type = 30204 id = 2 }
      name           = "第6步兵师 "
      type           = infantry
      model          = 3
      strength       = 70
    }
    division = {
      id             = { type = 30204 id = 3 }
      name           = "第1骑兵师 "
      type           = cavalry
      model          = 2
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 30201 id = 2 }
    name     = "南斯拉夫第2集团军 "
    location = 413
    division = {
      id             = { type = 30204 id = 4 }
      name           = "第2'波斯尼亚'步兵师 "
      type           = infantry
      model          = 3
      strength       = 70
    }
    division = {
      id             = { type = 30204 id = 5 }
      name           = "第3'弗尔巴斯'步兵师 "
      type           = infantry
      model          = 3
      strength       = 70
    }
    division = {
      id             = { type = 30204 id = 6 }
      name           = "第7步兵师 "
      type           = infantry
      model          = 3
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 30201 id = 3 }
    name     = "南斯拉夫第3集团军 "
    location = 414
    division = {
      id             = { type = 30204 id = 7 }
      name           = "第4'黑塞哥维那'步兵师 "
      type           = infantry
      model          = 3
      strength       = 70
    }
    division = {
      id             = { type = 30204 id = 8 }
      name           = "第5步兵师 "
      type           = infantry
      model          = 3
      strength       = 70
    }
    division = {
      id             = { type = 30204 id = 9 }
      name           = "第8步兵师 "
      type           = infantry
      model          = 3
      strength       = 70
    }
  }
}
