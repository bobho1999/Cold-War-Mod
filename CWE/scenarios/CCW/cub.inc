##############################
# Country definition for CUB #
##############################
province = {
  id = 654 # 哈瓦那
  anti_air = 1
}

#####################
# Country main data #
#####################

country = {
  tag                = CUB
  capital            = 654 # 哈瓦那
  manpower           = 15
  research_mod           = 1.15
  peacetime_ic_mod       = 0.75
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 24
  escorts        = 3

  diplomacy = {
    relation = { tag = DOM value = 50 }
    relation = { tag = ENG value = 30 }
    relation = { tag = HAI value = 30 }
    relation = { tag = USA value = 200 }
  }

  nationalprovinces      = { 654 655 656 657 666 }
  ownedprovinces         = { 654 655 656 666 }
  controlledprovinces    = { 654 655 656 666 }

  techapps               = { 5180 5010 1010 8010 8020 7430 7510 1890 2720 1020 1030 1040 1170 1180 2280 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 8
    political_left    = 4
    freedom           = 5
    free_market       = 8
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 33001 } # 若泽 巴尔内特-维纳格拉斯 
  headofgovernment       = { type = 9 id = 33002 } # 米格尔 戈麦斯-阿里亚斯 
  foreignminister        = { type = 9 id = 33003 } # 若泽 巴尔内特-维纳格拉斯 
  armamentminister       = { type = 9 id = 33004 } # 卡洛斯 普里奥 
  ministerofsecurity     = { type = 9 id = 33005 } # 塞尔焦 卡尔博 
  ministerofintelligence = { type = 9 id = 33006 } # 曼努埃尔 费拉拉 
  chiefofstaff           = { type = 9 id = 33007 } # 朱利奥 桑吉利 
  chiefofarmy            = { type = 9 id = 33008 } # 萨尔瓦多 卡斯塔涅达 卡斯特罗 
  chiefofnavy            = { type = 9 id = 33009 } # 罗德里戈 A 芬特斯 
  chiefofair             = { type = 9 id = 33010 } # 多明戈 R 德尔 托罗 
  nationalidentity       = "policy_economy_Laisser-faire"
  socialpolicy           = "policy_social_integration"
  nationalculture        = "policy_political_dignitary"

  landunit = {
    id       = { type = 26000 id = 40 }
    name     = "古巴第1军 "
    location = 654
    division = {
      id             = { type = 26000 id = 4000 }
      name           = "第1步兵师 "
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 26000 id = 4001 }
      name           = "第1'弗罗德塔'骑兵师 "
      type           = cavalry
      model          = 0
      extra          = artillery
      strength       = 100
    }
  }
}
