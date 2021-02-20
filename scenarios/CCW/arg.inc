##############################
# Country definition for ARG #
##############################
province = {
  id = 667 # 布宜诺斯艾利斯
  anti_air = 5
}
province = {
  id = 853 # 布兰卡港
  anti_air = 2
}
province = {
  id = 858 # 里瓦达维亚海军准将城
}

#####################
# Country main data #
#####################

country = {
  tag                = ARG
  capital            = 667 # 布宜诺斯艾利斯
  manpower           = 50
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
  transports     = 65
  escorts        = 10

  diplomacy = {
    relation = { tag = BOL value = 50 }
    relation = { tag = BRA value = -10 }
    relation = { tag = CHL value = -20 }
    relation = { tag = COL value = 10 }
    relation = { tag = ENG value = 75 }
    relation = { tag = ECU value = 10 }
    relation = { tag = GER value = 75 }
    relation = { tag = IRE value = 20 }
    relation = { tag = ITA value = 30 }
    relation = { tag = PAR value = 50 }
    relation = { tag = PRU value = 20 }
    relation = { tag = URU value = -50 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 10 }
  }
  SpyInfo                = { country = "ARG" NumberOfSpies = 1 }
  SpyInfo                = { country = "CAN" NumberOfSpies = 1 }
  SpyInfo                = { country = "BRA" NumberOfSpies = 3 }

  nationalprovinces      = { 4060 4061 4065 4066 4067 4068 4073 4074 4075 667 843 844 845 850 851 852 853 854 855 857 858 859 862 863 865 866 }
  ownedprovinces         = { 4060 4061 4065 4066 4067 4068 4073 4074 4075 667 843 844 845 850 851 852 853 854 855 857 858 859 862 863 865 }
  controlledprovinces    = { 4060 4061 4065 4066 4067 4068 4073 4074 4075 667 843 844 845 850 851 852 853 854 855 857 858 859 862 863 865 }

  techapps               = { 5050 5080 5170 5190 5180 5660 5010 1010 2280 2290 2420 2540 3550 3010 3070 3130 3410 6010 6020 6040 6050 9010 7510 8010 8020 8030 8040 78100 9710 9700 66500 66510 66540 66520 66530 5310 5020 3080 4120 2300 1020 1030 1040 2360 2550 2430 1050 1890 2800 2720 1900 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 8
    freedom           = 6
    free_market       = 7
    professional_army = 4
    defense_lobby     = 4
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 35001 } # 阿古斯丁 P 胡斯托 
  headofgovernment       = { type = 9 id = 35002 } # 阿古斯丁 P 胡斯托 
  foreignminister        = { type = 9 id = 35003 } # 卡洛斯 萨韦德拉 拉马斯 
  armamentminister       = { type = 9 id = 35004 } # 阿尔贝托 许约 
  ministerofsecurity     = { type = 9 id = 35005 } # 拉蒙 卡斯蒂略 
  ministerofintelligence = { type = 9 id = 35006 } # 乔治 德 拉 托雷 
  chiefofstaff           = { type = 9 id = 35007 } # 曼努埃尔 A 罗德里格斯 
  chiefofarmy            = { type = 9 id = 35008 } # 曼努埃尔 A 罗德里格斯 
  chiefofnavy            = { type = 9 id = 35009 } # 佩德罗 S 卡萨尔 
  chiefofair             = { type = 9 id = 35010 } # 安东尼奥 帕罗迪 
  nationalidentity       = "policy_economy_Laisser-faire"
  socialpolicy           = "policy_social_integration"
  nationalculture        = "policy_political_dignitary"

  landunit = {
    id       = { type = 12000 id = 1 }
    name     = "阿根廷第7军 "
    location = 667
    division = {
      id             = { type = 12000 id = 706 }
      name           = "阿根廷最高指挥部 "
      type           = hq
      model          = 0
      extra          = anti_air
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 12000 id = 2 }
      name           = "第3朋各罗旅 "
      type           = infantry
      model          = 4
      extra          = police
      brigade_model  = 3
      strength       = 30
      experience     = 55
    }
    division = {
      id             = { type = 12000 id = 3 }
      name           = "第2桑河旅 "
      type           = infantry
      model          = 4
      extra          = police
      brigade_model  = 3
      strength       = 30
      experience     = 55
    }
    division = {
      id             = { type = 12000 id = 4 }
      name           = "第1卡那斯旅 "
      type           = infantry
      model          = 4
      extra          = police
      brigade_model  = 3
      strength       = 30
      experience     = 55
    }
  }
  landunit = {
    id       = { type = 12000 id = 6 }
    name     = "阿根廷第8军 "
    location = 667
    division = {
      id             = { type = 12000 id = 7 }
      name           = "第4摩托化师 "
      type           = motorized
      model          = 4
      extra          = artillery
      brigade_model  = 3
      strength       = 30
      experience     = 55
    }
    division = {
      id             = { type = 12000 id = 8 }
      name           = "第4步兵师 "
      type           = infantry
      model          = 4
      extra          = artillery
      brigade_model  = 3
      strength       = 30
      experience     = 55
    }
  }

  navalunit = {
    id       = { type = 12000 id = 13 }
    name     = "阿根廷第1舰队 "
    location = 853
    base     = 853
    division = {
      id             = { type = 12000 id = 14 }
      name           = "维特卡罗·德·梅奥号 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_sa_l
      extra2         = naval_anti_air_l
      extra3         = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
    }
    division = {
      id             = { type = 12000 id = 16 }
      name           = "布朗号 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_sa_l
      extra2         = naval_anti_air_l
      extra3         = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
    }
    division = {
      id             = { type = 12000 id = 18 }
      name           = "莫尔罗号 "
      type           = battleship
      model          = 0
      extra1         = naval_sa_l
      extra2         = naval_anti_air_l
      extra3         = none
      extra4         = none
      extra5         = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      brigade_model4 = 0
      brigade_model5 = 0
    }
    division = {
      id             = { type = 12000 id = 20 }
      name           = "里瓦德维亚号 "
      type           = battleship
      model          = 0
      extra1         = naval_sa_l
      extra2         = naval_anti_air_l
      extra3         = none
      extra4         = none
      extra5         = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      brigade_model4 = 0
      brigade_model5 = 0
    }
    division = {
      id             = { type = 12000 id = 22 }
      name           = "印得棚得卡号 "
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
      id             = { type = 12000 id = 24 }
      name           = "里波塔德号 "
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
      id             = { type = 12000 id = 26 }
      name           = "波郎格罗将军号 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_anti_air_s
      extra2         = none
      brigade_model1 = 1
      brigade_model2 = 0
    }
    division = {
      id             = { type = 12000 id = 28 }
      name           = "普瑞兰将军号 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_anti_air_s
      extra2         = none
      brigade_model1 = 1
      brigade_model2 = 0
    }
    division = {
      id             = { type = 12000 id = 30 }
      name           = "第1驱逐舰编队 "
      type           = destroyer
      model          = 1
      extra1         = naval_anti_air_s
      brigade_model1 = 1
    }
    division = {
      id             = { type = 12000 id = 32 }
      name           = "第2驱逐舰编队 "
      type           = destroyer
      model          = 1
      extra1         = naval_anti_air_s
      brigade_model1 = 1
    }
    division = {
      id             = { type = 12000 id = 34 }
      name           = "第1潜艇编队 "
      type           = submarine
      model          = 1
    }
  }

  airunit = { 
    id       = { type = 12000 id = 9 }
    name     = "阿根廷航空队 "
    location = 667
    base     = 667
    division = {
      id             = { type = 12000 id = 10 }
      name           = "第1截击机大队 "
      type           = interceptor
      model          = 0
      strength       = 50
    }
  }
  airunit = { 
    id       = { type = 12000 id = 11 }
    name     = "攻击航空队 "
    location = 667
    base     = 667
    division = {
      id             = { type = 12000 id = 12 }
      name           = "第1海空联合大队 "
      type           = naval_bomber
      model          = 5
      strength       = 50
    }
  }

  landdivision = { dormant = yes id = { type = 12000 id = 100 } name = "阿根廷沙卡拉兵团指挥部 "  type = hq model = 1 strength = 5 experience = 100 } 
}
