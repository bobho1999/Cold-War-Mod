##############################
# Country definition for TUR #
##############################
province = {
  id = 409 # 伊斯坦布尔
  landfort = 10
}
province = {
  id = 437 # 伊兹密尔
}
province = { id = 439 anti_air = 4 } # 伊兹米特
province = {
  id = 448 # 安卡拉
  anti_air = 4
}
province = {
  id = 3941 # 奥斯曼尼耶
}

#####################
# Country main data #
#####################

country = {
  tag                = TUR
  capital            = 448 # 安卡拉
  extra_tc           = 5
  manpower           = 765
  tc_mod                 = 1.1
  research_mod           = 1.15
  peacetime_ic_mod       = 0.75
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 20
  transports     = 35
  escorts        = 10

  diplomacy = {
    relation = { tag = AFG value = 50 }
    relation = { tag = BUL value = 75 }
    relation = { tag = ENG value = 75 }
    relation = { tag = FRA value = 50 }
    relation = { tag = GER value = 10 }
    relation = {
      tag        = GRE
      value      = 100
      guaranteed = { year = 1934 month = december day = 30 }
    }
    relation = { tag = ITA value = 1 }
    relation = { tag = OMN value = 35 }
    relation = { tag = PER value = -50 }
    relation = {
      tag        = ROM
      value      = 100
      guaranteed = { year = 1934 month = december day = 30 }
    }
    relation = { tag = SAU value = 50 }
    relation = { tag = SOV value = 100 }
    relation = { tag = YEM value = 35 }
    relation = {
      tag        = YUG
      value      = 100
      guaranteed = { year = 1934 month = december day = 30 }
    }
  }

  nationalprovinces      = { 1851 1852 1853 1854 1855 3284 3285 3934 3935 3936 3937 3938 3940 3941 3943 3944 3945 3946 3947 408 409 437 438 439 440 441 442 443 445 446 447 448 449 450 3942 }
  ownedprovinces         = { 1851 1852 1853 1854 1855 3284 3285 3934 3935 3936 3937 3938 3940 3941 3943 3944 3945 3946 3947 408 409 437 438 439 440 441 442 443 445 446 447 448 449 450 3942 }
  controlledprovinces    = { 1851 1852 1853 1854 1855 3284 3285 3934 3935 3936 3937 3938 3940 3941 3943 3944 3945 3946 3947 408 409 437 438 439 440 441 442 443 445 446 447 448 449 450 3942 }

  techapps               = { 5050 5080 5170 5190 5180 5660 5010 1010 2280 2290 2420 2540 3490 3550 3560 3010 3070 3130 3410 6010 6020 6030 6040 6050 6200 8010 8020 8030 8150 8160 8200 8390 8440 8530 7410 7510 78100 9710 9700 9020 9010 9030 2300 2360 2550 2430 2010 2020 26100 1020 1030 1040 1050 1170 1180 1190 1290 1280 1270 1300 1890 1900 1910 2720 2800 2810 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 4
    free_market       = 6
    professional_army = 10
    defense_lobby     = 6
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 12001 }
  headofgovernment       = { type = 9 id = 12002 } # 穆斯塔法 伊斯梅特 伊纳尼 
  foreignminister        = { type = 9 id = 12003 } # 特福维克 罗特 阿洛斯
  armamentminister       = { type = 9 id = 12004 } # 泽卡伊 阿帕伊登 
  ministerofsecurity     = { type = 9 id = 12005 } # 许克吕 卡亚 
  ministerofintelligence = { type = 9 id = 12006 } # 许克吕 阿里 厄盖尔 
  chiefofstaff           = { type = 9 id = 12007 } # 费夫齐 查克马克 
  chiefofarmy            = { type = 9 id = 12008 } # 穆罕默德 努里 亚穆特 
  chiefofnavy            = { type = 9 id = 12009 } # 穆罕默德 阿里 翁根 
  chiefofair             = { type = 9 id = 12010 } # 阿里 庞加特
  nationalidentity       = "policy_economy_Laisser-faire"
  socialpolicy           = "policy_social_Islam"
  nationalculture        = "policy_political_social-democracy"

  landunit = {
    id       = { type = 11700 id = 8 }
    name     = "土耳其第1军 "
    location = 448
    division = {
      id             = { type = 11700 id = 9 }
      name           = "第1步兵师 "
      type           = infantry
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
    division = {
      id             = { type = 11700 id = 10 }
      name           = "第3步兵师 "
      type           = motorized
      extra          = artillery
      strength       = 100
      organisation   = 30
      experience     = 15
      defaultorganisation = 0
    }
  }
  landunit = {
    id       = { type = 11700 id = 11 }
    name     = "土耳其第2军 "
    location = 409
    division = {
      id             = { type = 11700 id = 12 }
      name           = "第5步兵师 "
      type           = motorized
      extra          = artillery
      strength       = 100
      organisation   = 30
      experience     = 15
      defaultorganisation = 0
    }
  }
  landunit = {
    id       = { type = 11700 id = 13 }
    name     = "土耳其第3军 "
    location = 408
    division = {
      id             = { type = 11700 id = 14 }
      name           = "第7步兵师 "
      type           = infantry
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
  }
  landunit = {
    id       = { type = 11700 id = 15 }
    name     = "土耳其第4军 "
    location = 445
    division = {
      id             = { type = 11700 id = 16 }
      name           = "第9步兵师 "
      type           = infantry
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
  }
  landunit = {
    id       = { type = 11700 id = 17 }
    name     = "土耳其第5军 "
    location = 450
    division = {
      id             = { type = 11700 id = 18 }
      name           = "第11步兵师 "
      type           = infantry
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
  }
  landunit = {
    id       = { type = 11700 id = 19 }
    name     = "土耳其第6军 "
    location = 1851
    division = {
      id             = { type = 11700 id = 20 }
      name           = "第13步兵师 "
      type           = motorized
      extra          = artillery
      strength       = 100
      organisation   = 30
      experience     = 15
      defaultorganisation = 0
    }
  }
  landunit = {
    id       = { type = 11700 id = 21 }
    name     = "土耳其第7军 "
    location = 1855
    division = {
      id             = { type = 11700 id = 22 }
      name           = "第15步兵师 "
      type           = infantry
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
  }
  landunit = {
    id       = { type = 11700 id = 23 }
    name     = "土耳其第8军 "
    location = 1854
    division = {
      id             = { type = 11700 id = 24 }
      name           = "第17步兵师 "
      type           = infantry
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
  }
  landunit = {
    id       = { type = 11700 id = 25 }
    name     = "土耳其第9军 "
    location = 1852
    division = {
      id             = { type = 11700 id = 26 }
      name           = "第19步兵师 "
      type           = infantry
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
  }
  landunit = {
    id       = { type = 11700 id = 27 }
    name     = "土耳其第10军 "
    location = 1853
    division = {
      id             = { type = 11700 id = 28 }
      name           = "第1山地师 "
      type           = bergsjaeger
      extra          = engineer
      strength       = 80
      organisation   = 30
      experience     = 15
      defaultorganisation = 0
    }
  }
  landunit = {
    id       = { type = 11700 id = 29 }
    name     = "提克西里托普骑兵军 "
    location = 442
    division = {
      id             = { type = 11700 id = 30 }
      name           = "第1骑兵师 "
      type           = cavalry
      extra          = artillery
      strength       = 100
      organisation   = 30
      experience     = 15
      defaultorganisation = 0
    }
    division = {
      id             = { type = 11700 id = 31 }
      name           = "第3骑兵师 "
      type           = cavalry
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
    division = {
      id             = { type = 11700 id = 32 }
      name           = "第5骑兵师 "
      type           = cavalry
      strength       = 50
      organisation   = 30
      defaultorganisation = 0
    }
  }

  navalunit = {
    id       = { type = 11700 id = 1 }
    name     = "土耳其提克登兹富利苏舰队 "
    location = 439
    base     = 439
    division = {
      id             = { type = 11700 id = 3 }
      name           = "雅乌滋号 "
      type           = battlecruiser
      model          = 0
      extra1         = naval_sa_l
      extra2         = naval_fire_controll_l
      extra3         = naval_anti_air_l
      extra4         = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
      brigade_model4 = 0
    }
    division = {
      id             = { type = 11700 id = 4 }
      name           = "哈米迪赫号 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_anti_air_s
      extra2         = naval_fire_controll_s
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division = {
      id             = { type = 11700 id = 5 }
      name           = "米加迪赫号 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_anti_air_s
      extra2         = naval_fire_controll_s
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division = {
      id             = { type = 11700 id = 7 }
      name           = "第1驱逐舰编队 "
      type           = destroyer
      model          = 0
      extra1         = naval_fire_controll_s
      brigade_model1 = 0
    }
    division = {
      id             = { type = 11700 id = 6 }
      name           = "第1潜艇编队 "
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 11700 id = 100 }
      name           = "富罗提那里滋帕沙号 "
      type           = transport
    }
  }

  airunit = { 
    id       = { type = 11700 id = 33 }
    name     = "土耳其哈瓦托鲁路克空军联队 "
    location = 448
    base     = 448
    division = {
      id             = { type = 25635 id = 34 }
      name           = "第1阿维西大队 "
      type           = interceptor
      model          = 0
      strength       = 48
      organisation   = 30
      defaultorganisation = 0
    }
    division = {
      id             = { type = 25635 id = 35 }
      name           = "第1塔克特大队 "
      type           = tactical_bomber
      model          = 0
      strength       = 52
      organisation   = 30
      defaultorganisation = 0
    }
  }

  landdivision = { dormant = yes id = { type = 25635 id = 36 } name = "伊斯坦布尔守备师 "  type = garrison model = 2 extra = artillery brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 25635 id = 37 } name = "安卡拉卫戍师 "  type = infantry model = 2 extra = artillery locked = yes } 
  landdivision = { dormant = yes id = { type = 25635 id = 38 } name = "加济安泰普卫戍师 "  type = infantry model = 2 extra = police locked = yes } 
  landdivision = { dormant = yes id = { type = 25635 id = 39 } name = "特拉比松卫戍师 "  type = infantry model = 2 extra = artillery locked = yes } 
  landdivision = { dormant = yes id = { type = 25635 id = 40 } name = "伊兹密尔卫戍师 "  type = infantry model = 2 extra = police locked = yes } 
}
