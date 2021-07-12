##############################
# Country definition for OMN #
##############################
province = {
  id = 1819 # 马斯喀特
  anti_air = 2
}

#####################
# Country main data #
#####################

country = {
  tag                = OMN
  puppet             = ENG
  control            = ENG
  capital            = 1819 # 马斯喀特
  extra_tc           = 5
  manpower           = 1
  research_mod           = 1.15
  peacetime_ic_mod       = 0.5
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 200
  supplies       = 200
  money          = 10
  transports     = 12
  escorts        = 2

  diplomacy = {
    relation = { tag = AST value = 150 }
    relation = { tag = BHU value = 150 }
    relation = { tag = CAN value = 150 }
    relation = { tag = ENG value = 150 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = { tag = IRQ value = 125 }
    relation = { tag = ITA value = 50 }
    relation = { tag = NEP value = 150 }
    relation = { tag = NZL value = 150 }
    relation = { tag = SAF value = 150 }
    relation = { tag = SAU value = 125 }
    relation = { tag = TUR value = 35 }
    relation = { tag = USA value = 100 }
    relation = { tag = YEM value = 150 }
  }

  nationalprovinces      = { 1819 3907 3908 }
  ownedprovinces         = { 1819 3908 3907 }
  controlledprovinces    = { 1819 3908 3907 }

  techapps               = { 1010 7430 7510 1890 2720 1020 1030 1040 1170 1180 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 5
    professional_army = 10
    defense_lobby     = 2
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 92001 } # 赛义德 本 泰穆尔 
  headofgovernment       = { type = 9 id = 92002 } # 赛义德 本 泰穆尔 
  foreignminister        = { type = 9 id = 92003 } # 赛义德 本 泰穆尔 
  armamentminister       = { type = 9 id = 92004 } # 詹穆姆斯 E 德伦蒙德 
  ministerofsecurity     = { type = 9 id = 92005 } # 亨利 L W L 伯恩汉姆 
  ministerofintelligence = { type = 9 id = 92006 } # 杰弗里 丹尼斯 
  chiefofstaff           = { type = 9 id = 92007 } # 赛义德 本 泰穆尔 
  chiefofarmy            = { type = 9 id = 92008 } # 赛义德 本 泰穆尔 
  chiefofnavy            = { type = 9 id = 92009 } # 杰弗里 克莱顿 
  chiefofair             = { type = 9 id = 92010 } # 阿卜达拉 本 泰穆尔 
  nationalidentity       = "policy_economy_natural"
  socialpolicy           = "policy_social_Islam"
  nationalculture        = "policy_political_theocracy"

  landunit = {
    id       = { type = 11114 id = 1 }
    name     = "阿曼第1军 "
    location = 1819
    division = {
      id             = { type = 11114 id = 2 }
      name           = "皇家近卫军 "
      type           = cavalry
      strength       = 15
    }
  }
}
