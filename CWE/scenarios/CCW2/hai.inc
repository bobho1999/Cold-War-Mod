##############################
# Country definition for HAI #
##############################
province = {
  id = 892 # 太子港
  anti_air = 1
}

#####################
# Country main data #
#####################

country = {
  tag                = HAI
  capital            = 892 # 太子港
  extra_tc           = 5
  manpower           = 9
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
  escorts        = 1

  diplomacy = {
    relation = { tag = CUB value = 30 }
    relation = { tag = DOM value = -30 }
    relation = { tag = USA value = 100 }
  }

  nationalprovinces      = { 892 893 894 668 }
  ownedprovinces         = { 892 }
  controlledprovinces    = { 892 }

  techapps               = { 5180 1010 8010 8020 7430 7510 1020 1040 1030 1170 1180 1890 2720 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 5
    freedom           = 2
    free_market       = 4
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 78001 } # 斯泰尼奥 文森特 
  headofgovernment       = { type = 9 id = 78002 } # 斯泰尼奥 文森特 
  foreignminister        = { type = 9 id = 78003 } # 阿尔伯特 布朗谢 
  armamentminister       = { type = 9 id = 78004 } # 埃米利 莱斯科 
  ministerofsecurity     = { type = 9 id = 78005 } # 路易斯 达布特斯 贝勒加德 
  ministerofintelligence = { type = 9 id = 78006 } # 塞巴斯蒂安 德 阿隆德 
  chiefofstaff           = { type = 9 id = 78007 } # 埃米利 莱斯科 
  chiefofarmy            = { type = 9 id = 78008 } # 埃米利 莱斯科 
  chiefofnavy            = { type = 9 id = 78009 } # 阿尔弗雷德 内穆尔 
  chiefofair             = { type = 9 id = 78010 } # G.爱德华 罗伊 
  nationalidentity       = "policy_economy_natural"
  socialpolicy           = "policy_social_integration"
  nationalculture        = "policy_political_dignitary"

  landunit = {
    id       = { type = 17500 id = 53 }
    name     = "海地第1军 "
    location = 892
    division = {
      id             = { type = 17500 id = 5301 }
      name           = "第1步兵师 "
      type           = infantry
      extra          = artillery
      strength       = 100
    }
  }
}
