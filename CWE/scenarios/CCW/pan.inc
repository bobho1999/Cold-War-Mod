##############################
# Country definition for PAN #
##############################
province = {
  id = 888 # 巴拿马城
  anti_air = 2
}
province = {
  id = 4024 # 博卡斯◆德尔托罗
}

#####################
# Country main data #
#####################

country = {
  tag                = PAN
  capital            = 888 # 巴拿马城
  extra_tc           = 5
  manpower           = 1
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
  escorts        = 3

  diplomacy = {
    relation = { tag = USA value = 175 }
    relation = { tag = COL value = 50 }
  }

  nationalprovinces      = { 4023 4024 4025 888 889 }
  ownedprovinces         = { 4023 4024 4025 888 }
  controlledprovinces    = { 4023 4024 4025 888 }

  techapps               = { 5180 5010 1010 8010 8020 7430 7510 1020 1030 1040 2280 2290 2360 2300 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 5
    freedom           = 4
    free_market       = 4
    professional_army = 10
    defense_lobby     = 4
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 95001 } # 阿莫迪奥 阿里亚斯 德拉马德里 
  headofgovernment       = { type = 9 id = 95002 } # 阿莫迪奥 阿里亚斯 德拉马德里 
  foreignminister        = { type = 9 id = 95003 } # 纳尔奇索 加拉伊 迪亚兹 
  armamentminister       = { type = 9 id = 95004 } # 丹尼尔 C 平松 
  ministerofsecurity     = { type = 9 id = 95005 } # 伊格纳西奥 E 门多萨 
  ministerofintelligence = { type = 9 id = 95006 } # 埃塞克尔 费尔南德斯 延 
  chiefofstaff           = { type = 9 id = 95007 } # 胡安 雷蒙 
  chiefofarmy            = { type = 9 id = 95008 } # 玻利瓦尔 比利亚里诺 
  chiefofnavy            = { type = 9 id = 95009 } # 胡安 A 埃尔南斯 
  chiefofair             = { type = 9 id = 95010 } # 胡安 雷蒙 
  nationalidentity       = "policy_economy_colonial"
  socialpolicy           = "policy_social_self-movement"
  nationalculture        = "policy_political_nationalism"

  landunit = {
    id       = { type = 14600 id = 50 }
    name     = "巴拿马第1军 "
    location = 888
    division = {
      id             = { type = 14600 id = 5000 }
      name           = "第1步兵师 "
      type           = infantry
      strength       = 60
    }
  }
}
