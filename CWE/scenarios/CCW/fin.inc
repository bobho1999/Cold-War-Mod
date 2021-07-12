##############################
# Country definition for FIN #
##############################
province = {
  id = 141 # 图尔库
  coastalfort = 1
  anti_air = 2
}
province = {
  id = 142 # 赫尔辛基
  coastalfort = 1
  anti_air = 3
}
province = { id = 143 anti_air = 2 } # 坦佩雷
province = {
  id = 4091 # 汉科港
}

#####################
# Country main data #
#####################

country = {
  tag                = FIN
  capital            = 142 # 赫尔辛基
  extra_tc           = 10
  manpower           = 285
  tc_mod                 = 1.1
  research_mod           = 1.3
  peacetime_ic_mod       = 0.95
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 80
  escorts        = 40

  diplomacy = {
    relation = { tag = AST value = 65 }
    relation = { tag = AUS value = 55 }
    relation = { tag = BEL value = 100 }
    relation = { tag = BUL value = 35 }
    relation = { tag = CZE value = 50 }
    relation = { tag = DEN value = 75 }
    relation = { tag = ENG value = 85 }
    relation = { tag = EST value = 120 }
    relation = { tag = FRA value = 85 }
    relation = { tag = GER value = 25 }
    relation = { tag = GRE value = 40 }
    relation = { tag = HOL value = 100 }
    relation = { tag = HUN value = 75 }
    relation = { tag = IRE value = 50 }
    relation = { tag = ITA value = 50 }
    relation = { tag = JAP value = 20 }
    relation = { tag = LAT value = 90 }
    relation = { tag = LIT value = 80 }
    relation = { tag = LUX value = 100 }
    relation = { tag = NOR value = 75 }
    relation = { tag = NZL value = 50 }
    relation = { tag = POL value = 100 }
    relation = { tag = POR value = 50 }
    relation = { tag = ROM value = 40 }
    relation = { tag = SAF value = 50 }
    relation = { tag = SOV value = 1 }
    relation = { tag = SPR value = 35 }
    relation = { tag = SWE value = 150 }
    relation = { tag = USA value = 90 }
    relation = { tag = YUG value = 35 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 1 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 1 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 4 }
  SpyInfo                = { country = "LAT" NumberOfSpies = 1 }
  SpyInfo                = { country = "LIT" NumberOfSpies = 2 }
  SpyInfo                = { country = "POL" NumberOfSpies = 3 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 3 }
  SpyInfo                = { country = "NOR" NumberOfSpies = 4 }
  SpyInfo                = { country = "EST" NumberOfSpies = 2 }
  SpyInfo                = { country = "YUG" NumberOfSpies = 1 }
  SpyInfo                = { country = "HUN" NumberOfSpies = 1 }
  SpyInfo                = { country = "DEN" NumberOfSpies = 2 }
  SpyInfo                = { country = "USA" NumberOfSpies = 1 }
  SpyInfo                = { country = "ITA" NumberOfSpies = 1 }

  nationalprovinces      = { 103 115 130 131 132 136 137 138 139 140 141 142 143 144 145 146 147 148 149 3117 3119 3282 3283 4091 }
  ownedprovinces         = { 103 115 130 131 136 137 138 139 140 141 142 143 144 147 148 149 3117 4091 }
  controlledprovinces    = { 103 115 130 131 136 137 138 139 140 141 142 143 144 147 148 149 3117 4091 }

  techapps               = { 5050 5080 5170 5110 5170 5190 5180 5660 5670 5010 1010 2280 2290 2420 2540 3550 3010 3410 6010 6020 6040 6050 6060 6550 6500 6580 6590 8010 8020 8030 8150 8160 8200 8390 8440 8530 9010 9020 9030 7420 7510 66510 66500 66520 66530 66540 5800 5310 5020 1020 1030 1040 1050 1270 1280 1290 1760 1890 1900 1910 2810 2800 2720 1920 2820 2300 2430 2550 2360 26100 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 1
    freedom           = 7
    free_market       = 9
    professional_army = 10
    defense_lobby     = 9
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 29001 } # 佩尔 E 斯温胡武德 
  headofgovernment       = { type = 9 id = 29002 } # 托伊沃 M 基维迈基 
  foreignminister        = { type = 9 id = 29003 } # 安蒂 V 哈克塞尔 
  armamentminister       = { type = 9 id = 29004 } # 阿尔维 A 奥克萨拉 
  ministerofsecurity     = { type = 9 id = 29005 } # 于尔约 W 普哈卡 
  ministerofintelligence = { type = 9 id = 29006 } # 埃斯科 列基 
  chiefofstaff           = { type = 9 id = 29007 } # 阿尔维 A 奥克萨拉 
  chiefofarmy            = { type = 9 id = 29008 } # 胡戈 奥斯特曼 
  chiefofnavy            = { type = 9 id = 29009 } # 韦伊内 瓦尔韦 
  chiefofair             = { type = 9 id = 29010 } # 亚尔 伦德奎斯特 
  nationalidentity       = "policy_economy_Laisser-faire"
  socialpolicy           = "policy_social_Catholicism"
  nationalculture        = "policy_political_social-democracy"

  landunit = {
    id       = { type = 32000 id = 1 }
    name     = "芬兰国防军第I军 "
    location = 146
    division = {
      id             = { type = 32000 id = 706 }
      name           = "芬兰军队全国总指挥部 "
      type           = hq
      model          = 0
      extra          = b_u9
      strength       = 100
      experience     = 80
    }
    division = {
      id             = { type = 32000 id = 2 }
      name           = "第1'赫尔辛基'步兵师 "
      type           = motorized
      model          = 10
      extra          = artillery
      brigade_model  = 2
      experience     = 100
    }
    division = {
      id             = { type = 32000 id = 21 }
      name           = "第1骑兵旅 "
      type           = cavalry
      model          = 1
      strength       = 100
      experience     = 80
    }
  }
  landunit = {
    id       = { type = 32000 id = 3 }
    name     = "芬兰国防军第II军 "
    location = 145
    division = {
      id             = { type = 32000 id = 4 }
      name           = "第3'米凯利'步兵师 "
      type           = motorized
      model          = 10
      extra          = artillery
      brigade_model  = 2
      experience     = 100
    }
    division = {
      id             = { type = 32000 id = 5 }
      name           = "第4步兵师 "
      type           = infantry
      model          = 1
      experience     = 80
    }
    division = {
      id             = { type = 32000 id = 7 }
      name           = "第21步兵师 "
      type           = infantry
      model          = 1
      experience     = 80
    }
  }
  landunit = {
    id       = { type = 32000 id = 8 }
    name     = "芬兰国防军第III军 "
    location = 145
    division = {
      id             = { type = 32000 id = 9 }
      name           = "第2'维堡'步兵师 "
      type           = motorized
      model          = 10
      extra          = anti_tank
      brigade_model  = 0
      experience     = 100
    }
    division = {
      id             = { type = 32000 id = 10 }
      name           = "第10步兵师 "
      type           = infantry
      model          = 1
      experience     = 80
    }
  }
  landunit = {
    id       = { type = 32000 id = 11 }
    name     = "芬兰国防军第V军 "
    location = 149
    division = {
      id             = { type = 32000 id = 12 }
      name           = "第12步兵师 "
      type           = infantry
      model          = 1
      experience     = 80
    }
    division = {
      id             = { type = 32000 id = 13 }
      name           = "第13步兵师 "
      type           = infantry
      model          = 1
      experience     = 80
    }
  }
  landunit = {
    id       = { type = 32000 id = 14 }
    name     = "芬兰国防军第IX军 "
    location = 142
    division = {
      id             = { type = 32000 id = 15 }
      name           = "第6步兵师 "
      type           = infantry
      model          = 1
      experience     = 80
    }
    division = {
      id             = { type = 32000 id = 23 }
      name           = "第22步兵师 "
      type           = infantry
      model          = 1
      experience     = 80
    }
  }
  landunit = {
    id       = { type = 32000 id = 17 }
    name     = "芬兰独立边防军 "
    location = 136
    division = {
      id             = { type = 32000 id = 18 }
      name           = "第1'瓦萨'猎兵旅 "
      type           = bergsjaeger
      model          = 8
      strength       = 100
      experience     = 100
    }
    division = {
      id             = { type = 32000 id = 19 }
      name           = "第2猎兵师 "
      type           = bergsjaeger
      model          = 8
      strength       = 100
      experience     = 100
    }
    division = {
      id             = { type = 32000 id = 20 }
      name           = "第3猎兵师 "
      type           = bergsjaeger
      model          = 8
      strength       = 100
      experience     = 100
    }
  }

  navalunit = {
    id       = { type = 32000 id = 24 }
    name     = "芬兰海军第I舰队 "
    location = 142
    base     = 142
    division = {
      id             = { type = 32000 id = 25 }
      name           = "伊尔玛利宁号 "
      type           = heavy_cruiser
      model          = 0
      extra1         = naval_sa_l
      extra2         = naval_anti_air_l
      extra3         = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division = {
      id             = { type = 32000 id = 26 }
      name           = "维纳莫宁号 "
      type           = heavy_cruiser
      model          = 0
      extra1         = naval_sa_l
      extra2         = naval_anti_air_l
      extra3         = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
    }
  }
  navalunit = {
    id       = { type = 32000 id = 27 }
    name     = "芬兰海军第II舰队 "
    location = 142
    base     = 142
    division = {
      id             = { type = 32000 id = 28 }
      name           = "维特西伦号 "
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 32000 id = 29 }
      name           = "水獭号 "
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 32000 id = 30 }
      name           = "维斯西斯号 "
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 32000 id = 31 }
      name           = "伊库·特尔索号 "
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 32000 id = 32 }
      name           = "水貂号 "
      type           = submarine
      model          = 0
    }
  }
}
