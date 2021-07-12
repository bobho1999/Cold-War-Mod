##############################
# Country definition for SCH #
##############################
province = { id = 372 landfort = 4 anti_air = 3 } # 贝林佐纳
province = { id = 530 landfort = 5 anti_air = 3 } # 日内瓦
province = {
  id = 532 # 伯尔尼
  landfort = 5
  anti_air = 5
}
province = { id = 533 landfort = 5 anti_air = 3 } # 苏黎世
province = { id = 3192 landfort = 5 } # 巴塞尔

#####################
# Country main data #
#####################

country = {
  tag                = SCH
  capital            = 532 # 伯尔尼
  extra_tc           = 5
  manpower           = 135
  tc_mod                 = 1.1
  research_mod           = 1.2
  peacetime_ic_mod       = 0.75
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 25

  diplomacy = {
    relation = { tag = ENG value = 50 }
    relation = { tag = FRA value = 1 }
    relation = { tag = GER value = 50 }
    relation = { tag = AUS value = 50 }
    relation = { tag = ITA value = 1 }
    relation = { tag = SOV value = 1 }
    relation = { tag = USA value = 1 }
  }

  nationalprovinces      = { 3192 372 530 532 533 }
  ownedprovinces         = { 3192 372 530 532 533 }
  controlledprovinces    = { 3192 372 530 532 533 }

  techapps               = { 5050 5080 5170 5190 5110 5180 5660 5670 5680 5310 5010 5020 1010 2280 2290 2610 2420 2540 2550 6010 6020 6030 6040 6050 6200 9010 7420 7510 1050 1040 1030 1020 1270 1280 1290 1300 1310 1890 1900 1910 1920 2820 2810 2800 2720 2300 2310 2560 2430 2440 2450 2570 2010 2020 2360 2370 5800 5410 }
  blueprints             = { 6480 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 2
    freedom           = 7
    free_market       = 9
    professional_army = 10
    defense_lobby     = 8
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 17001 } # 阿尔伯特 迈尔 
  headofgovernment       = { type = 9 id = 17002 } # 阿尔伯特 迈尔 
  foreignminister        = { type = 9 id = 17003 } # 朱塞佩 莫塔 
  armamentminister       = { type = 9 id = 17004 } # 阿尔伯特 迈尔 
  ministerofsecurity     = { type = 9 id = 17005 } # 约翰内斯 鲍曼 
  ministerofintelligence = { type = 9 id = 17006 } # 罗杰 马松 
  chiefofstaff           = { type = 9 id = 17007 } # 雅各布 I 胡贝尔 
  chiefofarmy            = { type = 9 id = 17008 } # 约翰 奥古斯特 祖特尔 
  chiefofnavy            = { type = 9 id = 17009 } # 勒内 冯 格拉芬里德 
  chiefofair             = { type = 9 id = 17010 } # 奥斯卡 比德 
  nationalidentity       = "policy_economy_monopoly"
  socialpolicy           = "policy_social_Catholicism"
  nationalculture        = "policy_political_republicanism"

  landunit = {
    id       = { type = 30600 id = 1 }
    name     = "瑞士第I军 "
    location = 532
    division = {
      id             = { type = 30600 id = 2 }
      name           = "第1猎兵师 "
      type           = motorized
      extra          = artillery
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 30600 id = 3 }
    name     = "瑞士第II军 "
    location = 533
    division = {
      id             = { type = 30600 id = 4 }
      name           = "第2步兵师 "
      type           = infantry
      extra          = artillery
      strength       = 100
    }
    division = {
      id             = { type = 30600 id = 5 }
      name           = "第1山地师 "
      type           = bergsjaeger
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 30600 id = 6 }
    name     = "瑞士第III军 "
    location = 530
    division = {
      id             = { type = 30600 id = 7 }
      name           = "第3步兵师 "
      type           = infantry
      extra          = anti_tank
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 30600 id = 8 }
      name           = "第4步兵师 "
      type           = infantry
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 30600 id = 9 }
      name           = "第2摩托化山地师 "
      type           = bergsjaeger
      strength       = 30
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 30600 id = 10 }
    name     = "瑞士第IV军 "
    location = 372
    division = {
      id             = { type = 30600 id = 11 }
      name           = "第5步兵师 "
      type           = infantry
      extra          = police
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 30600 id = 12 }
      name           = "第6步兵师 "
      type           = infantry
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 30600 id = 13 }
      name           = "第3山地师 "
      type           = bergsjaeger
      strength       = 30
      experience     = 20
    }
  }

  airunit = { 
    id       = { type = 30600 id = 14 }
    name     = "瑞士空军第I'德·海因尔特'航空队 "
    location = 532
    base     = 532
    division = {
      id             = { type = 30600 id = 15 }
      name           = "第1战术轰炸机大队 "
      type           = tactical_bomber
      model          = 0
      strength       = 40
      experience     = 15
    }
  }
}
