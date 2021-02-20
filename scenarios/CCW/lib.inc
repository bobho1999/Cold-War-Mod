##############################
# Country definition for LIB #
##############################
province = {
  id = 992 # 蒙罗维亚
  anti_air = 1
}

#####################
# Country main data #
#####################

country = {
  tag                = LIB
  puppet             = USA
  control            = USA
  capital            = 992 # 蒙罗维亚
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
  transports     = 10
  escorts        = 1

  diplomacy = {
    relation = { tag = PHI value = 200 }
    relation = { tag = USA value = 200 }
  }

  nationalprovinces      = { 992 }
  ownedprovinces         = { 992 }
  controlledprovinces    = { 992 }

  techapps               = { 1010 7430 7510 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 5
    freedom           = 3
    free_market       = 4
    professional_army = 10
    defense_lobby     = 3
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 69001 } # 埃德温 J 巴克利 
  headofgovernment       = { type = 9 id = 69002 } # 埃德温 J 巴克利 
  foreignminister        = { type = 9 id = 69003 } # 克拉伦斯 L 辛普森 
  armamentminister       = { type = 9 id = 69004 } # 弗雷德里克 K 尼尔森 
  ministerofsecurity     = { type = 9 id = 69005 } # 亨利 R 格里梅斯 
  ministerofintelligence = { type = 9 id = 69006 } # 亨利 M 鲁滨逊 
  chiefofstaff           = { type = 9 id = 69007 } # 本杰明 奥戴维斯 
  chiefofarmy            = { type = 9 id = 69008 } # 艾弗 维尔京 
  chiefofnavy            = { type = 9 id = 69009 } # 雷吉纳尔德 布兰登 
  chiefofair             = { type = 9 id = 69010 } # 文 洛伊 尚 
  nationalidentity       = "policy_economy_colonial"
  socialpolicy           = "policy_social_integration"
  nationalculture        = "policy_political_dignitary"

  landunit = {
    id       = { type = 25500 id = 1 }
    name     = "利比里亚第1军 "
    location = 992
    division = {
      id             = { type = 25000 id = 2 }
      name           = "共和国警卫第1师 "
      type           = infantry
      extra          = artillery
      strength       = 100
    }
    division = {
      id             = { type = 25500 id = 3 }
      name           = "共和国警卫第2师 "
      type           = infantry
      strength       = 100
    }
  }
}
