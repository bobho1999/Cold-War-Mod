##############################
# Country definition for GUA #
##############################
province = {
  id = 665 # 巴里奥斯港（危地马拉）
}
province = { id = 757 anti_air = 1 } # 危地马拉城（危地马拉）

#####################
# Country main data #
#####################

country = {
  tag                = GUA
  capital            = 757 # 危地马拉城（危地马拉）
  extra_tc           = 5
  manpower           = 7
  research_mod           = 1.15
  peacetime_ic_mod       = 0.75
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 16
  escorts        = 2

  diplomacy = {
    relation = { tag = HON value = 100 }
    relation = { tag = USA value = 125 }
    relation = { tag = ENG value = 50 }
  }

  nationalprovinces      = { 664 665 757 759 }
  ownedprovinces         = { 664 665 757 }
  controlledprovinces    = { 664 665 757 }

  techapps               = { 5180 5010 1010 8010 7430 7510 1020 1030 1040 1170 1180 1890 2720 }

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
  headofstate            = { type = 9 id = 46001 } # 乔治 乌维科 卡斯塔涅达 
  headofgovernment       = { type = 9 id = 46002 } # 乔治 乌维科 卡斯塔涅达 
  foreignminister        = { type = 9 id = 46003 } # 阿尔弗雷多 斯金纳 克莱 
  armamentminister       = { type = 9 id = 46004 } # 吉耶尔莫 弗洛雷斯 阿伦达诺 
  ministerofsecurity     = { type = 9 id = 46005 } # T. 卡斯特罗 多明格斯 
  ministerofintelligence = { type = 9 id = 46006 } # 爱德华多 比利亚格兰 阿里萨 
  chiefofstaff           = { type = 9 id = 46007 } # 费代里科 蓬斯 瓦伊德斯 
  chiefofarmy            = { type = 9 id = 46008 } # 乔治 乌维科 卡斯塔涅达 
  chiefofnavy            = { type = 9 id = 46009 } # 托马斯 门多萨 乌里贝 
  chiefofair             = { type = 9 id = 46010 } # R 布埃纳文图勒 皮内达 
  nationalidentity       = "policy_economy_natural-Capitalism"
  socialpolicy           = "policy_social_integration"
  nationalculture        = "policy_political_dignitary"

  landunit = {
    id       = { type = 16500 id = 65 }
    name     = "危地马拉第I军 "
    location = 757
    division = {
      id             = { type = 16500 id = 6500 }
      name           = "第1'阿道夫·V·霍尔'步兵旅 "
      type           = infantry
      extra          = artillery
      strength       = 100
    }
  }
}
