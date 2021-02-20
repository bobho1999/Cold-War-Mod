##############################
# Country definition for NOR #
##############################
province = {
  id = 107 # 奥斯陆
  coastalfort = 3
  anti_air = 2
}
province = { id = 109 anti_air = 1 } # 斯塔万格
province = {
  id = 110 # 卑尔根
  coastalfort = 3
  anti_air = 2
}
province = { id = 118 coastalfort = 2 } # 特隆赫姆
province = {
  id = 125 # 纳尔维克
  anti_air = 1
}
province = {
  id = 129 # 瓦尔德
}

#####################
# Country main data #
#####################

country = {
  tag                = NOR
  capital            = 107 # 奥斯陆
  extra_tc           = 10
  manpower           = 102
  research_mod           = 1.2
  peacetime_ic_mod       = 0.75
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 400
  escorts        = 5

  diplomacy = {
    relation = { tag = BEL value = 100 }
    relation = { tag = DEN value = 150 }
    relation = { tag = ENG value = 90 }
    relation = { tag = FIN value = 75 }
    relation = { tag = HOL value = 100 }
    relation = { tag = LUX value = 100 }
    relation = { tag = SWE value = 150 }
    relation = { tag = USA value = 75 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 4 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 1 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 4 }
  SpyInfo                = { country = "CZE" NumberOfSpies = 1 }
  SpyInfo                = { country = "GER" NumberOfSpies = 3 }
  SpyInfo                = { country = "SPR" NumberOfSpies = 2 }
  SpyInfo                = { country = "POL" NumberOfSpies = 2 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 3 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 2 }
  SpyInfo                = { country = "DEN" NumberOfSpies = 2 }
  SpyInfo                = { country = "HOL" NumberOfSpies = 1 }

  nationalprovinces      = { 107 108 109 110 111 116 117 118 123 124 125 128 129 }
  ownedprovinces         = { 107 108 109 110 111 116 117 118 123 124 125 128 129 }
  controlledprovinces    = { 107 108 109 110 111 116 117 118 123 124 125 128 129 }

  techapps               = { 5050 5080 5170 5190 5180 5660 5010 5020 1010 2280 2290 2420 2540 3490 3550 3560 3600 3610 3010 3070 3130 3410 6010 6020 6030 6040 6050 6100 8010 8020 8030 8150 8160 8200 8390 8440 8530 7420 7510 1020 1030 1040 1050 1170 1180 1190 1270 1280 1290 1890 1900 1910 2720 2800 2810 5310 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 9
    freedom           = 7
    free_market       = 7
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 14001 } # 哈康七世 
  headofgovernment       = { type = 9 id = 14002 } # 约翰 尼高斯沃尔 
  foreignminister        = { type = 9 id = 14003 } # 哈尔夫丹 库特 
  armamentminister       = { type = 9 id = 14004 } # 阿道夫 伊德瑞布 
  ministerofsecurity     = { type = 9 id = 14005 } # 特里格韦 H 赖伊 
  ministerofintelligence = { type = 9 id = 14006 } # 阿尔弗雷德 罗瑟尔-路德 
  chiefofstaff           = { type = 9 id = 14007 } # 奥托 路格 
  chiefofarmy            = { type = 9 id = 14008 } # 克利斯坦 K 莱克 
  chiefofnavy            = { type = 9 id = 14009 } # 加克博 冯 德 李普 
  chiefofair             = { type = 9 id = 14010 } # 加克博 冯 德 李普 
  nationalidentity       = "policy_economy_state-monopoly"
  socialpolicy           = "policy_social_Catholicism"
  nationalculture        = "policy_political_social-democracy"

  landunit = {
    id       = { type = 12600 id = 1 }
    name     = "挪威第I军 "
    location = 107
    division = {
      id             = { type = 12600 id = 2 }
      name           = "第1步兵师 "
      type           = motorized
      strength       = 50
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 12600 id = 11 }
    name     = "挪威第VI军 "
    location = 125
    division = {
      id             = { type = 12600 id = 12 }
      name           = "第6步兵师 "
      type           = infantry
      strength       = 50
      experience     = 40
    }
  }

  navalunit = {
    id       = { type = 12600 id = 20 }
    name     = "挪威第I舰队 "
    location = 107
    base     = 107
    division = {
      id             = { type = 12600 id = 21 }
      name           = "第1潜艇编队 "
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 12600 id = 22 }
      name           = "第2潜艇编队 "
      type           = submarine
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 12600 id = 25 }
    name     = "挪威第III舰队 "
    location = 125
    base     = 125
    division = {
      id             = { type = 12600 id = 26 }
      name           = "罗根号 "
      type           = heavy_cruiser
      model          = 0
      extra1         = naval_sa_l
      extra2         = naval_anti_air_l
      extra3         = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
    }
    division = {
      id             = { type = 12600 id = 30 }
      name           = "埃迪斯号 "
      type           = heavy_cruiser
      model          = 0
      extra1         = naval_sa_l
      extra2         = naval_anti_air_l
      extra3         = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
    }
  }
}
