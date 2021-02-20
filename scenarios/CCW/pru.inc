##############################
# Country definition for PRU #
##############################
province = {
  id = 830 # 利马
  anti_air = 2
}

#####################
# Country main data #
#####################

country = {
  tag                = PRU
  capital            = 830 # 利马
  extra_tc           = 5
  manpower           = 102
  research_mod           = 1.15
  peacetime_ic_mod       = 0.75
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 12
  escorts        = 2

  diplomacy = {
    relation = { tag = ARG value = 20 }
    relation = { tag = BOL value = 30 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = -25 }
    relation = { tag = COL value = -35 }
    relation = { tag = ECU value = -50 }
    relation = { tag = PAR value = 25 }
    relation = { tag = URU value = 25 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 10 }
  }

  nationalprovinces      = { 4037 4038 4041 4042 4043 4069 4070 4076 816 818 821 829 830 831 }
  ownedprovinces         = { 4041 4042 4043 4069 4076 816 818 821 829 830 831 }
  controlledprovinces    = { 4041 4042 4043 4069 4076 816 818 821 829 830 831 }

  techapps               = { 5050 5180 5660 5010 1010 1100 6020 6040 8010 8020 8150 8390 8530 7420 7510 2280 2290 2300 2360 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 4
    free_market       = 4
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 39001 } # 奥斯卡 贝纳维德 拉雷亚 
  headofgovernment       = { type = 9 id = 39002 } # 曼努埃尔 埃斯特班 罗德里格斯 
  foreignminister        = { type = 9 id = 39003 } # 阿尔贝托 乌略亚 索托马约 
  armamentminister       = { type = 9 id = 39004 } # 埃内斯托 斯克罗思 
  ministerofsecurity     = { type = 9 id = 39005 } # 路易斯 桑切斯 塞罗 
  ministerofintelligence = { type = 9 id = 39006 } # 奥斯卡 吉拉尔迪 
  chiefofstaff           = { type = 9 id = 39007 } # 古斯塔沃 希门尼斯 
  chiefofarmy            = { type = 9 id = 39008 } # 奥斯卡 贝纳维德 拉雷亚 
  chiefofnavy            = { type = 9 id = 39009 } # 埃内斯托 斯克罗思 
  chiefofair             = { type = 9 id = 39010 } # 保罗 德 博迪兹 
  nationalidentity       = "policy_economy_colonial"
  socialpolicy           = "policy_social_integration"
  nationalculture        = "policy_political_dignitary"

  landunit = {
    id       = { type = 17600 id = 1 }
    name     = "秘鲁第1军 "
    location = 830
    division = {
      id             = { type = 17600 id = 2 }
      name           = "第1'波鲁斯'步兵师 "
      type           = motorized
      strength       = 100
    }
    division = {
      id             = { type = 17600 id = 3 }
      name           = "第2步兵师 "
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 17600 id = 4 }
      name           = "第3步兵师 "
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 17600 id = 5 }
      name           = "第1'拉伯加'山地师 "
      type           = bergsjaeger
      strength       = 100
    }
  }

  navalunit = {
    id       = { type = 17600 id = 6 }
    name     = "秘鲁马力拉舰队 "
    location = 830
    base     = 830
    division = {
      id             = { type = 17600 id = 7 }
      name           = "第1驱逐舰编队 "
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 17600 id = 8 }
      name           = "阿扼拉特号 "
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
      id             = { type = 17600 id = 9 }
      name           = "波罗林号 "
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
      id             = { type = 17600 id = 10 }
      name           = "第1潜艇编队 "
      type           = submarine
      model          = 1
    }
  }
}
