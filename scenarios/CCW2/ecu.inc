##############################
# Country definition for ECU #
##############################
province = {
  id = 814 # 瓜亚基尔
}
province = { id = 815 anti_air = 2 } # 基多

#####################
# Country main data #
#####################

country = {
  tag                = ECU
  capital            = 815 # 基多
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
  transports     = 12
  escorts        = 1

  diplomacy = {
    relation = { tag = ARG value = 10 }
    relation = { tag = BOL value = -20 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = 20 }
    relation = { tag = COL value = 20 }
    relation = { tag = PAR value = 25 }
    relation = { tag = PRU value = -50 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 20 }
  }

  nationalprovinces      = { 4039 814 815 817 }
  ownedprovinces         = { 4039 814 815 817 }
  controlledprovinces    = { 4039 814 815 817 }

  techapps               = { 5180 5660 5010 1010 1100 6020 6040 8010 8020 8030 8040 7430 7510 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    freedom           = 5
    free_market       = 8
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 40001 } # 费代里科 派斯 奇里沃加 
  headofgovernment       = { type = 9 id = 40002 } # 费代里科 派斯 奇里沃加 
  foreignminister        = { type = 9 id = 40003 } # 阿尔贝托 拉雷亚 奇里沃加 
  armamentminister       = { type = 9 id = 40004 } # 法比安 德尔 卡斯泰洛 
  ministerofsecurity     = { type = 9 id = 40005 } # 达维德 弗洛雷斯 
  ministerofintelligence = { type = 9 id = 40006 } # 奥雷利奥 莫斯克拉 纳瓦埃斯 
  chiefofstaff           = { type = 9 id = 40007 } # 贝尼尼奥 安德拉德 弗洛雷斯 
  chiefofarmy            = { type = 9 id = 40008 } # 吉尔贝托 恩里克斯 加洛 
  chiefofnavy            = { type = 9 id = 40009 } # 胡安 拉蒙 卡斯特罗 
  chiefofair             = { type = 9 id = 40010 } # 科姆 雷内拉 巴尔巴托 
  nationalidentity       = "policy_economy_Laisser-faire"
  socialpolicy           = "policy_social_integration"
  nationalculture        = "policy_political_dignitary"

  landunit = {
    id       = { type = 29000 id = 50 }
    name     = "厄瓜多尔第1军 "
    location = 815
    division = {
      id             = { type = 29000 id = 5000 }
      name           = "第1步兵旅 "
      type           = infantry
      model          = 0
      extra          = artillery
      strength       = 100
    }
  }
}
