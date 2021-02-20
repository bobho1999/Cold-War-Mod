##############################
# Country definition for SAF #
##############################
province = {
  id = 1108 # 沃尔维斯港（鲸湾港）
  anti_air = 2
}
province = {
  id = 1116 # 开普敦
  anti_air = 4
}
province = {
  id = 1117 # 伊丽莎白港
  anti_air = 1
}
province = {
  id = 1119 # 德班
  anti_air = 3
}
province = { id = 1120 anti_air = 3 } # 约翰内斯堡

#####################
# Country main data #
#####################

country = {
  tag                = SAF
  capital            = 1121 # 比勒陀利亚
  extra_tc           = 5
  manpower           = 620
  tc_mod                 = 1.1
  research_mod           = 1.15
  peacetime_ic_mod       = 0.7
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 40
  escorts        = 12

  diplomacy = {
    relation = { tag = AST value = 200 }
    relation = { tag = BEL value = 35 }
    relation = { tag = BHU value = 200 }
    relation = { tag = CAN value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FIN value = 50 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = { tag = IRE value = 80 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = 1 }
    relation = { tag = NEP value = 200 }
    relation = { tag = NZL value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = POR value = 125 }
    relation = { tag = USA value = 125 }
    relation = { tag = YEM value = 150 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "USA" NumberOfSpies = 2 }
  SpyInfo                = { country = "HOL" NumberOfSpies = 1 }

  nationalprovinces      = { 1106 1107 1108 1109 1110 1113 1114 1115 1116 1117 1118 1119 1120 1121 3388 3389 3390 3391 3392 3393 3394 3395 3396 }
  ownedprovinces         = { 1106 1107 1108 1109 1110 1113 1114 1115 1116 1117 1118 1119 1120 1121 3389 3390 3391 3393 3394 3395 3396 3398 3399 3400 }
  controlledprovinces    = { 1106 1107 1108 1109 1110 1113 1114 1115 1116 1117 1118 1119 1120 1121 3389 3390 3391 3393 3394 3395 3396 3398 3399 3400 }

  techapps               = { 5050 5080 5170 5190 5180 5660 5670 5310 5010 1010 1100 1660 1830 2280 2290 2420 2540 6010 6020 6030 6040 6050 6200 8010 8020 8030 8150 8160 8200 8390 8440 8530 7410 7510 2360 2370 2300 2310 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 5
    freedom           = 10
    free_market       = 8
    professional_army = 10
    defense_lobby     = 2
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 70001 } # 克拉伦登勋爵 G H H 威利尔斯 
  headofgovernment       = { type = 9 id = 70002 } # 詹姆斯 赫尔佐格 
  foreignminister        = { type = 9 id = 70003 } # 詹姆斯 赫尔佐格 
  armamentminister       = { type = 9 id = 70004 } # 尼古拉斯 哈文加 
  ministerofsecurity     = { type = 9 id = 70005 } # 扬 C 史末资 
  ministerofintelligence = { type = 9 id = 70006 } # 扬 C 史末资 
  chiefofstaff           = { type = 9 id = 70007 } # 皮埃尔 范 莱茵维尔 
  chiefofarmy            = { type = 9 id = 70008 } # 扬 C 史末资 
  chiefofnavy            = { type = 9 id = 70009 } # 皮埃尔 奥利弗-科诺尔 
  chiefofair             = { type = 9 id = 70010 } # 皮埃尔 范 莱茵维尔 
  nationalidentity       = "policy_economy_colonial"
  socialpolicy           = "policy_social_integration"
  nationalculture        = "policy_political_nationalism"

  landunit = {
    id       = { type = 26600 id = 1 }
    name     = "海角卫戍司令部 "
    location = 1116
    division = {
      id             = { type = 26600 id = 2 }
      name           = "海角卫戍师 "
      type           = militia
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 26600 id = 3 }
    name     = "威特沃特斯兰德卫戍司令部 "
    location = 1120
    division = {
      id             = { type = 26600 id = 4 }
      name           = "威特沃特斯兰德卫戍师 "
      type           = militia
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 26600 id = 5 }
    name     = "纳塔尔卫戍司令部 "
    location = 1119
    division = {
      id             = { type = 26600 id = 6 }
      name           = "纳塔尔卫戍师 "
      type           = militia
      strength       = 50
    }
  }

  navalunit = {
    id       = { type = 26600 id = 7 }
    name     = "南非海军第1舰队 "
    location = 1116
    base     = 1116
    division = {
      id             = { type = 26600 id = 8 }
      name           = "第1驱逐舰编队 "
      type           = destroyer
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 26600 id = 9 }
      name           = "第2驱逐舰编队 "
      type           = destroyer
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 26600 id = 10 }
      name           = "第1运输舰编队 "
      type           = transport
    }
    division = {
      id             = { type = 26600 id = 11 }
      name           = "第2运输舰编队 "
      type           = transport
    }
    division = {
      id             = { type = 26600 id = 12 }
      name           = "第3运输舰编队 "
      type           = transport
    }
    division = {
      id             = { type = 26600 id = 13 }
      name           = "第4运输舰编队 "
      type           = transport
    }
    division = {
      id             = { type = 26600 id = 14 }
      name           = "第5运输舰编队 "
      type           = transport
    }
    division = {
      id             = { type = 26600 id = 15 }
      name           = "第6运输舰编队 "
      type           = transport
    }
  }
}
