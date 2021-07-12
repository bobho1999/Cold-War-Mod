##############################
# Country definition for HON #
##############################
province = { id = 760 anti_air = 1 } # 特古西加尔巴（洪都拉斯）
province = {
  id = 806 # 圣佩德罗苏拉（洪都拉斯）
}

#####################
# Country main data #
#####################

country = {
  tag                = HON
  capital            = 760 # 特古西加尔巴（洪都拉斯）
  extra_tc           = 5
  manpower           = 5
  research_mod           = 1.15
  peacetime_ic_mod       = 0.75
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 20
  escorts        = 3

  diplomacy = {
    relation = { tag = ENG value = 50 }
    relation = { tag = GUA value = 100 }
    relation = { tag = NIC value = 100 }
    relation = { tag = SAL value = 100 }
    relation = { tag = USA value = 100 }
  }

  nationalprovinces      = { 760 805 806 807 }
  ownedprovinces         = { 760 805 806 807 }
  controlledprovinces    = { 760 805 806 807 }

  techapps               = { 5180 5010 1010 7430 7510 8010 8020 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 4
    free_market       = 6
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 79001 } # 蒂武西奥 卡里亚 安迪纳 
  headofgovernment       = { type = 9 id = 79002 } # 卡洛斯 阿尔贝托 乌克莱斯 
  foreignminister        = { type = 9 id = 79003 } # 蒂武西奥 卡里亚 安迪纳 
  armamentminister       = { type = 9 id = 79004 } # 罗伯托 米凯莱蒂 贝恩 
  ministerofsecurity     = { type = 9 id = 79005 } # 卡洛斯 阿尔贝托 乌克莱斯 
  ministerofintelligence = { type = 9 id = 79006 } # 雷蒙多 施托赫勒 加西亚 
  chiefofstaff           = { type = 9 id = 79007 } # 蒂武西奥 卡里亚 安迪纳 
  chiefofarmy            = { type = 9 id = 79008 } # 雷蒙多 施托赫勒 加西亚 
  chiefofnavy            = { type = 9 id = 79009 } # 卡洛斯 沃佩尔 科梅萨 
  chiefofair             = { type = 9 id = 79010 } # 古斯塔沃 施密特 
  nationalidentity       = "policy_economy_natural"
  socialpolicy           = "policy_social_integration"
  nationalculture        = "policy_political_dignitary"

  landunit = {
    id       = { type = 19500 id = 55 }
    name     = "洪都拉斯陆军第VII军 "
    location = 760
    division = {
      id             = { type = 19500 id = 5500 }
      name           = "第1'弗兰卡马那哲'步兵旅 "
      type           = infantry
      extra          = artillery
      strength       = 60
    }
  }
}
