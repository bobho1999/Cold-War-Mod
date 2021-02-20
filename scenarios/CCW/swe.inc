##############################
# Country definition for SWE #
##############################
province = { id = 93 coastalfort = 1 } # 马尔默
province = {
  id = 95 # 卡尔马
  coastalfort = 3
  anti_air = 2
}
province = {
  id = 98 # 哥德堡
  coastalfort = 3
  anti_air = 2
}
province = { id = 99 landfort = 1 } # 舍夫德
province = {
  id = 101 # 斯德哥尔摩
  coastalfort = 3
  anti_air = 2
}
province = {
  id = 127 # 吕勒奥
  landfort = 3
  anti_air = 2
}

#####################
# Country main data #
#####################

country = {
  tag                = SWE
  capital            = 101 # 斯德哥尔摩
  extra_tc           = 5
  manpower           = 485
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
  transports     = 75
  escorts        = 8

  diplomacy = {
    relation = { tag = BEL value = 100 }
    relation = { tag = DEN value = 75 }
    relation = { tag = ENG value = 80 }
    relation = { tag = FIN value = 150 }
    relation = { tag = GER value = 50 }
    relation = { tag = HOL value = 100 }
    relation = { tag = LUX value = 100 }
    relation = { tag = NOR value = 150 }
    relation = { tag = PER value = 50 }
    relation = { tag = USA value = 75 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "EST" NumberOfSpies = 1 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 2 }
  SpyInfo                = { country = "POL" NumberOfSpies = 2 }
  SpyInfo                = { country = "NOR" NumberOfSpies = 4 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 2 }
  SpyInfo                = { country = "DEN" NumberOfSpies = 3 }
  SpyInfo                = { country = "LAT" NumberOfSpies = 1 }
  SpyInfo                = { country = "LIT" NumberOfSpies = 1 }
  SpyInfo                = { country = "GER" NumberOfSpies = 2 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 3 }

  nationalprovinces      = { 112 126 127 122 121 120 119 115 113 114 106 105 104 102 101 100 99 98 97 93 95 96 }
  ownedprovinces         = { 112 126 127 122 121 120 119 113 114 106 105 104 102 101 100 99 98 97 93 95 96 }
  controlledprovinces    = { 112 126 127 122 121 120 119 113 114 106 105 104 102 101 100 99 98 97 93 95 96 }

  techapps               = { 4010 4120 4190 2560 4130 2010 3190 2280 2290 2610 3130 2420 2430 2490 9010 5010 5080 5190 6170 6200 3010 3020 3070 3080 3250 3400 3410 8010 8020 8040 8050 5050 5080 5170 5190 5110 5180 5660 5670 5680 5310 5010 1010 2280 2290 2610 2420 2540 2550 2010 3490 3550 3560 3600 3610 3620 3010 3070 3130 3250 3410 3760 4120 4010 6010 6020 6030 6040 6050 6100 8010 8020 8030 8150 8160 8200 8390 8440 8530 6060 9010 7420 7510 1020 1030 1040 1050 1170 1180 1190 1270 1280 1290 1890 1900 1910 2810 2800 2720 5020 5690 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 10
    freedom           = 6
    free_market       = 7
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 7001 } # 古斯塔夫五世 
  headofgovernment       = { type = 9 id = 7033 } # 佩尔 阿尔宾 汉松 
  foreignminister        = { type = 9 id = 7038 } # 理查德 桑德勒 
  armamentminister       = { type = 9 id = 7047 } # 恩斯特 维格福什 
  ministerofsecurity     = { type = 9 id = 7058 } # 卡尔 施吕特 
  ministerofintelligence = { type = 9 id = 7006 } # 卡洛斯 阿德勒克罗伊茨 
  chiefofstaff           = { type = 9 id = 7007 } # 奥斯卡 尼格伦 
  chiefofarmy            = { type = 9 id = 7008 } # 奥斯卡 尼格伦 
  chiefofnavy            = { type = 9 id = 7009 } # 查尔斯 德 尚 
  chiefofair             = { type = 9 id = 7010 } # 托尔斯滕 弗里斯 
  nationalidentity       = "policy_economy_monopoly"
  socialpolicy           = "policy_social_Catholicism"
  nationalculture        = "policy_political_social-democracy"

  landunit = {
    id       = { type = 29600 id = 1 }
    name     = "瑞典第A军 "
    location = 101
    division = {
      id             = { type = 29600 id = 2 }
      name           = "第1步兵师 "
      type           = motorized
      model          = 0
      extra          = artillery
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 29600 id = 9 }
    name     = "瑞典第G军 "
    location = 127
    division = {
      id             = { type = 29600 id = 10 }
      name           = "第5步兵师 "
      type           = infantry
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 29600 id = 11 }
    name     = "瑞典第J军 "
    location = 102
    division = {
      id             = { type = 29600 id = 12 }
      name           = "'陆地风暴'民兵师 "
      type           = militia
    }
  }

  navalunit = {
    id       = { type = 29600 id = 16 }
    name     = "库斯佛罗曼舰队 "
    location = 101
    base     = 101
    division = {
      id             = { type = 29600 id = 17 }
      name           = "瑞典号 "
      type           = battlecruiser
      model          = 0
      extra1         = naval_sa_l
      extra2         = naval_anti_air_l
      extra3         = none
      extra4         = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      brigade_model4 = 0
    }
    division = {
      id             = { type = 29600 id = 18 }
      name           = "维多利亚多罗丁号 "
      type           = battlecruiser
      model          = 0
      extra1         = naval_sa_l
      extra2         = naval_anti_air_l
      extra3         = none
      extra4         = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      brigade_model4 = 0
    }
    division = {
      id             = { type = 29600 id = 19 }
      name           = "古特斯V世号 "
      type           = battlecruiser
      model          = 0
      extra1         = naval_sa_l
      extra2         = naval_anti_air_l
      extra3         = none
      extra4         = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      brigade_model4 = 0
    }
    division = {
      id             = { type = 29600 id = 21 }
      name           = "克拉斯佛兰芒号 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_anti_air_s
      extra2         = none
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division = {
      id             = { type = 29600 id = 22 }
      name           = "哥特兰号 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_anti_air_s
      extra2         = none
      brigade_model1 = 1
      brigade_model2 = 0
    }
    division = {
      id             = { type = 29600 id = 23 }
      name           = "第1驱逐舰编队 "
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 29600 id = 25 }
      name           = "第1运输舰编队 "
      type           = transport
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 29600 id = 26 }
    name     = "阿哈佛罗得尔舰队 "
    location = 101
    base     = 101
    division = {
      id             = { type = 29600 id = 27 }
      name           = "路安号 "
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
      id             = { type = 29600 id = 28 }
      name           = "打击者号 "
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
    id       = { type = 29600 id = 30 }
    name     = "卡尔罗那维多林根舰队 "
    location = 95
    base     = 95
    division = {
      id             = { type = 29600 id = 31 }
      name           = "奥斯卡II世号 "
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
      id             = { type = 29600 id = 33 }
      name           = "第1潜艇编队 "
      type           = submarine
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 29600 id = 34 }
    name     = "吉伯尔西卡丁恩舰队 "
    location = 98
    base     = 98
    division = {
      id             = { type = 29600 id = 35 }
      name           = "曼宁赫根号 "
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
      id             = { type = 29600 id = 37 }
      name           = "第2潜艇编队 "
      type           = submarine
      model          = 1
    }
  }

  airunit = { 
    id       = { type = 29600 id = 13 }
    name     = "瑞典第I空军联队 "
    location = 101
    base     = 101
    division = {
      id             = { type = 29600 id = 14 }
      name           = "第1战术轰炸机大队 "
      type           = tactical_bomber
      model          = 0
    }
    division = {
      id             = { type = 29600 id = 15 }
      name           = "第1海军轰炸机大队 "
      type           = naval_bomber
      model          = 0
    }
  }
}
