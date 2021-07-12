##############################
# Country definition for COL #
##############################
province = {
  id = 803 # 巴兰基亚
  anti_air = 2
}
province = { id = 813 anti_air = 2 } # 波哥大
province = {
  id = 4029 # 卡利
}

#####################
# Country main data #
#####################

country = {
  tag                = COL
  capital            = 813 # 波哥大
  manpower           = 28
  research_mod           = 1.1
  peacetime_ic_mod       = 0.75
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 10
  escorts        = 2

  diplomacy = {
    relation = { tag = ARG value = 10 }
    relation = { tag = BOL value = 1 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = 15 }
    relation = { tag = ECU value = 20 }
    relation = { tag = GER value = -20 }
    relation = { tag = PAN value = 50 }
    relation = { tag = PAR value = 10 }
    relation = { tag = PRU value = -35 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 20 }
  }

  nationalprovinces      = { 4023 4024 4025 4026 4027 4028 4029 4030 4031 4032 4033 4034 4035 4036 4037 4038 4039 4044 802 803 804 810 811 812 813 819 867 868 869 870 888 889 890 871 873 820 818 4076 814 815 817 4041 }
  ownedprovinces         = { 4026 4027 4028 4029 4030 4031 4037 803 812 813 819 868 890 }
  controlledprovinces    = { 4026 4027 4028 4029 4030 4031 4037 803 812 813 819 868 890 }

  techapps               = { 5050 5180 5660 5010 1010 6010 6020 6030 6040 6050 6200 8010 8020 8150 8390 8530 7430 7510 1020 1030 1040 1050 1170 1180 1190 1890 1900 2800 2720 2290 2280 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 7
    freedom           = 7
    free_market       = 8
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 37001 } # 阿方索 洛佩斯 普马雷霍 
  headofgovernment       = { type = 9 id = 37002 } # 阿方索 洛佩斯 普马雷霍 
  foreignminister        = { type = 9 id = 37003 } # 埃内斯托 冈萨雷斯 彼德拉伊塔 
  armamentminister       = { type = 9 id = 37004 } # 贝尼托 埃尔南斯 
  ministerofsecurity     = { type = 9 id = 37005 } # 乔治 罗亚 马丁内斯 
  ministerofintelligence = { type = 9 id = 37006 } # 费尔南多 隆多诺-隆多诺 
  chiefofstaff           = { type = 9 id = 37007 } # 乔治 梅尔卡多 桑切斯 
  chiefofarmy            = { type = 9 id = 37008 } # 爱德华多 波里尔 埃斯科巴尔 
  chiefofnavy            = { type = 9 id = 37009 } # 路易斯 阿塞韦多 
  chiefofair             = { type = 9 id = 37010 } # 格尔曼 奥拉诺 
  nationalidentity       = "policy_economy_Laisser-faire"
  socialpolicy           = "policy_social_integration"
  nationalculture        = "policy_political_dignitary"

  landunit = {
    id       = { type = 23000 id = 40 }
    name     = "哥伦比亚第I军 "
    location = 813
    division = {
      id             = { type = 23000 id = 4000 }
      name           = "第1步兵师 "
      type           = infantry
      model          = 0
      extra          = artillery
      strength       = 80
    }
    division = {
      id             = { type = 23000 id = 4001 }
      name           = "第1'莫特'骑兵旅 "
      type           = cavalry
      model          = 0
      strength       = 80
    }
  }

  navalunit = {
    id       = { type = 23000 id = 4002 }
    name     = "哥伦比亚第I舰队 "
    location = 803
    base     = 803
    division = {
      id             = { type = 23000 id = 4003 }
      name           = "第1驱逐舰编队 "
      type           = destroyer
      model          = 0
    }
  }
}
