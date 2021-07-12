##############################
# Country definition for SAL #
##############################

country = {
  tag                = SAL
  capital            = 759 # 圣萨尔瓦多（萨尔瓦多）
  extra_tc           = 5
  manpower           = 65
  research_mod           = 1.15
  peacetime_ic_mod       = 0.75
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 5
  escorts        = 1

  diplomacy = {
    relation = { tag = HON value = 100 }
    relation = { tag = USA value = 100 }
  }

  nationalprovinces      = { 759 }
  ownedprovinces         = { 759 }
  controlledprovinces    = { 759 }

  techapps               = { 5180 5010 1010 8010 8020 7430 7510 2360 2280 2290 2300 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 5
    free_market       = 5
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 77001 } # 马克西米利亚诺 埃尔南斯 马丁内斯 
  headofgovernment       = { type = 9 id = 77002 } # 马克西米利亚诺 埃尔南斯 马丁内斯 
  foreignminister        = { type = 9 id = 77003 } # 米格尔 安杰尔 阿劳约 
  armamentminister       = { type = 9 id = 77004 } # 阿尔贝托 戈梅 萨拉特 
  ministerofsecurity     = { type = 9 id = 77005 } # 菲德尔 克里斯蒂诺 加拉伊 
  ministerofintelligence = { type = 9 id = 77006 } # 奥斯卡 A 博拉尼奥斯 
  chiefofstaff           = { type = 9 id = 77007 } # 马尔科 A 莫利纳 
  chiefofarmy            = { type = 9 id = 77008 } # 马克西米利亚诺 埃尔南斯 马丁内斯 
  chiefofnavy            = { type = 9 id = 77009 } # 劳尔 罗多尔菲 桑切斯 
  chiefofair             = { type = 9 id = 77010 } # 亨伯特 阿伯利 
  nationalidentity       = "policy_economy_natural-Capitalism"
  socialpolicy           = "policy_social_integration"
  nationalculture        = "policy_political_dignitary"

  landunit = {
    id       = { type = 21600 id = 70 }
    name     = "萨尔瓦多第1军 "
    location = 759
    division = {
      id             = { type = 21600 id = 7000 }
      name           = "第1步兵师 "
      type           = infantry
      extra          = artillery
      strength       = 40
    }
  }
}
