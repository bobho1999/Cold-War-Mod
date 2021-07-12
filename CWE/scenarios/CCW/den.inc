##############################
# Country definition for DEN #
##############################
province = {
  id = 92 # 奥尔胡斯
}
province = { id = 292 anti_air = 1 } # 奥尔堡
province = {
  id = 294 # 哥本哈根
  anti_air = 2
}
province = {
  id = 3115 # 埃斯比约
}

#####################
# Country main data #
#####################

country = {
  tag                = DEN
  regular_id         = GER
  capital            = 294 # 哥本哈根
  manpower           = 80
  research_mod           = 1.15
  peacetime_ic_mod       = 0.75
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 60
  escorts        = 10

  diplomacy = {
    relation = { tag = BEL value = 100 }
    relation = { tag = ENG value = 100 }
    relation = { tag = FIN value = 75 }
    relation = { tag = GER value = 25 }
    relation = { tag = HOL value = 100 }
    relation = { tag = LUX value = 100 }
    relation = { tag = NOR value = 150 }
    relation = { tag = PER value = 50 }
    relation = { tag = SWE value = 75 }
    relation = { tag = USA value = 75 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 2 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 1 }
  SpyInfo                = { country = "POL" NumberOfSpies = 1 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 2 }
  SpyInfo                = { country = "NOR" NumberOfSpies = 2 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 1 }
  SpyInfo                = { country = "GER" NumberOfSpies = 3 }
  SpyInfo                = { country = "HOL" NumberOfSpies = 1 }
  SpyInfo                = { country = "USA" NumberOfSpies = 1 }

  nationalprovinces      = { 292 293 294 295 3001 3113 3114 3115 3116 800 91 92 3071 }
  ownedprovinces         = { 292 293 294 295 3001 3113 3114 3115 3116 800 91 92 }
  controlledprovinces    = { 292 293 294 295 3001 3113 3114 3115 3116 800 91 92 }

  techapps               = { 5050 5080 5170 5190 5110 5180 5660 5670 5680 5310 5010 5020 5470 5480 1010 3490 3550 3010 3070 3410 6010 6020 6030 6040 6050 6100 8010 8020 8030 8150 8160 8200 8390 8440 8530 7430 7510 2290 2280 2300 2540 2420 2550 2560 2440 2430 2310 1020 1030 1040 1050 1170 1180 1190 1200 1890 1900 1910 2810 2800 2720 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 10
    freedom           = 8
    free_market       = 6
    professional_army = 10
    defense_lobby     = 1
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 16001 } # 克里斯蒂安 十世 
  headofgovernment       = { type = 9 id = 16002 } # 托瓦尔 斯陶宁 
  foreignminister        = { type = 9 id = 16003 } # 彼得 蒙克 
  armamentminister       = { type = 9 id = 16004 } # 阿尔辛 安德森 
  ministerofsecurity     = { type = 9 id = 16005 } # 卡尔 克里斯蒂安 施泰因茨克 
  ministerofintelligence = { type = 9 id = 16006 } # 埃里克 梅茨 
  chiefofstaff           = { type = 9 id = 16007 } # 威廉 W 普里奥尔 
  chiefofarmy            = { type = 9 id = 16008 } # 埃里克 维特 
  chiefofnavy            = { type = 9 id = 16009 } # 亚尔马 雷希尼策 
  chiefofair             = { type = 9 id = 16010 } # K W 埃塞曼 
  nationalidentity       = "policy_economy_state-monopoly"
  socialpolicy           = "policy_social_Catholicism"
  nationalculture        = "policy_political_social-democracy"

  landunit = {
    id       = { type = 27000 id = 40 }
    name     = "丹麦国防军第I军 "
    location = 92
    division = {
      id             = { type = 27000 id = 41 }
      name           = "第1步兵师 "
      type           = motorized
      model          = 0
      extra          = artillery
      strength       = 15
    }
    division = {
      id             = { type = 27000 id = 42 }
      name           = "第1步兵师 "
      type           = motorized
      model          = 0
      extra          = artillery
      strength       = 15
    }
  }

  navalunit = {
    id       = { type = 27000 id = 44 }
    name     = "丹麦海军第I舰队 "
    location = 294
    base     = 294
    division = {
      id             = { type = 27000 id = 45 }
      name           = "尼尔斯·尤尔号 "
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
      id             = { type = 27000 id = 46 }
      name           = "皮德尔·斯科拉姆号 "
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
      id             = { type = 27000 id = 47 }
      name           = "第1潜艇编队 "
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 27000 id = 48 }
      name           = "第2潜艇编队 "
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 27000 id = 49 }
      name           = "第1运输舰编队 "
      type           = transport
      model          = 0
    }
  }
}
