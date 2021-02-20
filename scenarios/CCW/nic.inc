##############################
# Country definition for NIC #
##############################
province = {
  id = 539 # 马那瓜
}

#####################
# Country main data #
#####################

country = {
  tag                = NIC
  capital            = 539 # 马那瓜
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
  transports     = 5
  escorts        = 1

  diplomacy = {
    relation = { tag = HON value = 100 }
    relation = { tag = USA value = 100 }
  }

  nationalprovinces      = { 4019 4020 4021 4022 539 }
  ownedprovinces         = { 4019 4020 539 }
  controlledprovinces    = { 4019 4020 539 }

  techapps               = { 5180 5010 1010 8010 8020 7430 7510 1020 1030 1040 1170 1180 1890 2720 2800 1900 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 2
    freedom           = 4
    free_market       = 7
    professional_army = 10
    defense_lobby     = 8
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 48001 } # 胡安 巴蒂斯塔 萨卡萨 
  headofgovernment       = { type = 9 id = 48002 } # 朱利安 伊利亚斯 纳瓦罗 
  foreignminister        = { type = 9 id = 48003 } # 利昂纳多 阿奎罗 瓦加斯 
  armamentminister       = { type = 9 id = 48004 } # 安纳斯塔西奥 索摩查 加西亚 
  ministerofsecurity     = { type = 9 id = 48005 } # 阿尔卡西奥 特雷尔斯 门多萨 
  ministerofintelligence = { type = 9 id = 48006 } # 利昂纳多 阿奎罗 瓦加斯 
  chiefofstaff           = { type = 9 id = 48007 } # 安纳斯塔西奥 索摩查 加西亚 
  chiefofarmy            = { type = 9 id = 48008 } # 奥古斯托 卡拉瓦尔 安东尼奥 
  chiefofnavy            = { type = 9 id = 48009 } # 古斯塔沃 弗洛雷斯 门迭塔 
  chiefofair             = { type = 9 id = 48010 } # 吉列尔莫 R 库亚德拉 
  nationalidentity       = "policy_economy_natural-Capitalism"
  socialpolicy           = "policy_social_integration"
  nationalculture        = "policy_political_dignitary"

  landunit = {
    id       = { type = 11600 id = 45 }
    name     = "尼加拉瓜第1军 "
    location = 539
    division = {
      id             = { type = 11600 id = 4500 }
      name           = "总统警卫部队 "
      type           = infantry
      extra          = artillery
      strength       = 60
    }
  }
}
