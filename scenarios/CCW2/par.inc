##############################
# Country definition for PAR #
##############################
province = {
  id = 837 # 亚松森
  anti_air = 1
}

#####################
# Country main data #
#####################

country = {
  tag                = PAR
  capital            = 837 # 亚松森
  extra_tc           = 5
  manpower           = 105
  research_mod           = 1.15
  peacetime_ic_mod       = 0.75
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = ARG value = 50 }
    relation = { tag = BRA value = 10 }
    relation = { tag = BOL value = -50 }
    relation = { tag = CHL value = 35 }
    relation = { tag = COL value = 10 }
    relation = { tag = ECU value = 25 }
    relation = { tag = PRU value = 25 }
    relation = { tag = URU value = 20 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 10 }
  }

  nationalprovinces      = { 4058 4059 4060 4061 4062 4063 4067 837 846 }
  ownedprovinces         = { 4058 4059 837 846 }
  controlledprovinces    = { 4058 4059 837 846 }

  techapps               = { 5180 5660 5010 1010 6010 6020 6030 6040 6050 6200 7420 7510 2280 1020 1030 1040 1050 1170 1180 1190 1890 1900 2800 2720 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 5
    freedom           = 3
    free_market       = 6
    professional_army = 10
    defense_lobby     = 8
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 42001 } # 欧塞比奥 阿亚拉 
  headofgovernment       = { type = 9 id = 42002 } # 欧塞比奥 阿亚拉 
  foreignminister        = { type = 9 id = 42003 } # 路易斯 阿尔贝托 里亚尔特 
  armamentminister       = { type = 9 id = 42004 } # 费代里科 查维斯 
  ministerofsecurity     = { type = 9 id = 42005 } # 尼古拉斯 德尔加多 
  ministerofintelligence = { type = 9 id = 42006 } # 胡安 曼努埃尔 弗吕托 
  chiefofstaff           = { type = 9 id = 42007 } # 伊戈尔 埃尔恩 
  chiefofarmy            = { type = 9 id = 42008 } # 曼努埃尔 T. 阿蓬特 
  chiefofnavy            = { type = 9 id = 42009 } # 曼努埃尔 T. 阿蓬特 
  chiefofair             = { type = 9 id = 42010 } # 维森特 阿尔莫纳西德 
  nationalidentity       = "policy_economy_monopoly"
  socialpolicy           = "policy_social_integration"
  nationalculture        = "policy_political_dignitary"

  landunit = {
    id       = { type = 15600 id = 60 }
    name     = "巴拉圭第1军 "
    location = 837
    division = {
      id             = { type = 15600 id = 6000 }
      name           = "第1步兵师 "
      type           = infantry
      extra          = artillery
      strength       = 100
    }
    division = {
      id             = { type = 15600 id = 6001 }
      name           = "第1民兵师 "
      type           = militia
      strength       = 100
    }
  }
}
