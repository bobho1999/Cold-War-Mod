##############################
# Country definition for VEN #
##############################
province = {
  id = 804 # 马拉开波
  anti_air = 2
}
province = {
  id = 811 # 加拉加斯
  anti_air = 2
}

#####################
# Country main data #
#####################

country = {
  tag                = VEN
  capital            = 811 # 加拉加斯
  extra_tc           = 5
  manpower           = 12
  research_mod           = 1.15
  peacetime_ic_mod       = 0.75
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 20
  transports     = 30
  escorts        = 4

  diplomacy = {
    relation = { tag = ARG value = 10 }
    relation = { tag = BOL value = -15 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = 20 }
    relation = { tag = COL value = 20 }
    relation = { tag = ECU value = 20 }
    relation = { tag = ENG value = -10 }
    relation = { tag = PAR value = 10 }
    relation = { tag = PRU value = 10 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = 125 }
  }

  nationalprovinces      = { 4032 4033 4034 4035 4036 802 804 810 811 867 869 870 871 873 }
  ownedprovinces         = { 4032 4033 4034 4035 802 804 810 811 867 869 870 }
  controlledprovinces    = { 4032 4033 4034 4035 802 804 810 811 867 869 870 }

  techapps               = { 5050 5080 5170 5190 5180 5660 5010 1010 1100 2280 2290 2420 6020 6040 8010 8020 8390 8530 7430 7510 78100 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 1
    freedom           = 5
    free_market       = 7
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 38001 } # 埃利埃泽 孔特雷拉斯 
  headofgovernment       = { type = 9 id = 38002 } # 埃利埃泽 孔特雷拉斯 
  foreignminister        = { type = 9 id = 38003 } # 埃斯特班 伊尔 博尔格斯 
  armamentminister       = { type = 9 id = 38004 } # 佩德罗 博佩尔蒂 乌里希 
  ministerofsecurity     = { type = 9 id = 38005 } # 圣地亚哥 凯 阿亚拉 
  ministerofintelligence = { type = 9 id = 38006 } # 弗洛里亚瓦尔多 德 瓦斯克斯 林哈里斯 
  chiefofstaff           = { type = 9 id = 38007 } # 伊萨亚斯 梅迪纳 阿加里塔 
  chiefofarmy            = { type = 9 id = 38008 } # 伊萨亚斯 梅迪纳 阿加里塔 
  chiefofnavy            = { type = 9 id = 38009 } # 温贝托 圣布里亚 维拉 
  chiefofair             = { type = 9 id = 38010 } # 大卫 洛佩斯 恩里克斯 
  nationalidentity       = "policy_economy_Laisser-faire"
  socialpolicy           = "policy_social_integration"
  nationalculture        = "policy_political_dignitary"

  landunit = {
    id       = { type = 15800 id = 45 }
    name     = "委内瑞拉第1军 "
    location = 811
    division = {
      id             = { type = 15800 id = 4500 }
      name           = "第1'爱德罗布兰克'主力师 "
      type           = infantry
      extra          = anti_tank
      strength       = 100
    }
    division = {
      id             = { type = 15800 id = 4501 }
      name           = "第1近卫师 "
      type           = militia
      strength       = 100
    }
    division = {
      id             = { type = 15800 id = 4502 }
      name           = "海岸巡逻队 "
      type           = cavalry
      extra          = artillery
      strength       = 100
    }
  }
}
