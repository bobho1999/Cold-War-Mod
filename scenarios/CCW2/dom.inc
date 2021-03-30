##############################
# Country definition for DOM #
##############################
province = {
  id = 894 # 圣多明各
}

#####################
# Country main data #
#####################

country = {
  tag                = DOM
  capital            = 894 # 圣多明各
  manpower           = 8
  research_mod           = 1.15
  peacetime_ic_mod       = 0.75
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 10
  escorts        = 1

  diplomacy = {
    relation = { tag = CUB value = 50 }
    relation = { tag = HAI value = -30 }
    relation = { tag = USA value = 125 }
  }

  nationalprovinces      = { 668 893 894 892 }
  ownedprovinces         = { 668 893 894 }
  controlledprovinces    = { 668 893 894 }

  techapps               = { 5180 5010 1010 7430 7510 1020 1030 1040 1170 1180 1890 2720 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 2
    freedom           = 5
    free_market       = 8
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 49001 } # 拉菲尔 特鲁西略 
  headofgovernment       = { type = 9 id = 49002 } # 雅辛托 比恩韦尼多 佩纳多 
  foreignminister        = { type = 9 id = 49003 } # 伊莱亚斯 布拉赫 
  armamentminister       = { type = 9 id = 49004 } # 曼努埃尔 德 热苏斯 特龙科索 
  ministerofsecurity     = { type = 9 id = 49005 } # 拉菲尔 特鲁西略 
  ministerofintelligence = { type = 9 id = 49006 } # 赫苏斯 达 科斯塔 鲁伊斯 
  chiefofstaff           = { type = 9 id = 49007 } # 拉菲尔 特鲁西略 
  chiefofarmy            = { type = 9 id = 49008 } # 拉菲尔 特鲁西略 
  chiefofnavy            = { type = 9 id = 49009 } # 温贝托 罗雅斯 
  chiefofair             = { type = 9 id = 49010 } # 阿尼巴尔 巴列霍 索萨 
  nationalidentity       = "policy_economy_Laisser-faire"
  socialpolicy           = "policy_social_integration"
  nationalculture        = "policy_political_dignitary"

  landunit = {
    id       = { type = 28000 id = 75 }
    name     = "多米尼加共和国第1军 "
    location = 894
    division = {
      id             = { type = 28000 id = 7500 }
      name           = "第1步兵旅 "
      type           = infantry
      model          = 0
      extra          = artillery
      strength       = 50
    }
  }
}
