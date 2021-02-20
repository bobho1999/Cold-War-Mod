##############################
# Country definition for ETH #
##############################

country = {
  tag                = ETH
  capital            = 1046 # 亚的斯亚贝巴
  manpower           = 120
  research_mod           = 1.2
  peacetime_ic_mod       = 0.5
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = ENG value = 50 }
    relation = { tag = FRA value = 25 }
    relation = { tag = IRE value = 100 }
    relation = { tag = ITA value = -200 }
    relation = { tag = JAP value = 35 }
  }

  nationalprovinces      = { 1033 1038 1039 1042 1043 1044 1045 1046 1047 1048 1049 1050 1051 1052 1053 1054 3349 3350 3351 }
  ownedprovinces         = { 1042 1043 1044 1045 1046 1047 1048 1049 1050 1051 1052 1053 1054 3349 3350 3351 }
  controlledprovinces    = { 1042 1043 1044 1045 1046 1047 1048 1049 1050 1051 1052 1053 1054 3349 3350 3351 }

  techapps               = { 1010 1100 7420 7510 66500 66510 66520 66530 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 7
    professional_army = 10
    defense_lobby     = 8
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 65001 } # 海尔 塞拉西一世 
  headofgovernment       = { type = 9 id = 65002 } # 贝济隆德 特克勒 哈瓦里亚特 
  foreignminister        = { type = 9 id = 65003 } # 埃鲁伊 沃尔德 塞拉西 
  armamentminister       = { type = 9 id = 65004 } # 埃鲁伊 沃尔德 塞拉西 
  ministerofsecurity     = { type = 9 id = 65005 } # 贝济隆德 特克勒 哈瓦里亚特 
  ministerofintelligence = { type = 9 id = 65006 } # 海尔 塞拉西一世 
  chiefofstaff           = { type = 9 id = 65007 } # 穆卢盖塔 亲王 
  chiefofarmy            = { type = 9 id = 65008 } # 德斯塔 达姆蒂维 
  chiefofnavy            = { type = 9 id = 65009 } # 塞尤姆 亲王 
  chiefofair             = { type = 9 id = 65010 } # 约翰 鲁滨逊 
  nationalidentity       = "policy_economy_natural"
  socialpolicy           = "policy_social_integration"
  nationalculture        = "policy_political_dignitary"

  landunit = {
    id       = { type = 31000 id = 1 }
    name     = "埃塞俄比亚皇家近卫军 "
    location = 1046
    division = {
      id             = { type = 31000 id = 2 }
      name           = "皇家近卫军 "
      type           = infantry
      model          = 0
      strength       = 30
    }
    division = {
      id             = { type = 31000 id = 3 }
      name           = "第11民兵师 "
      type           = militia
      model          = 0
      strength       = 70
    }
    division = {
      id             = { type = 31000 id = 4 }
      name           = "第12民兵师 "
      type           = militia
      model          = 0
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 31000 id = 5 }
    name     = "埃塞俄比亚第1军 "
    location = 1052
    division = {
      id             = { type = 31000 id = 6 }
      name           = "第1民兵师 "
      type           = militia
      model          = 0
      strength       = 60
    }
    division = {
      id             = { type = 31000 id = 7 }
      name           = "第2民兵师 "
      type           = militia
      model          = 0
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 31000 id = 8 }
    name     = "埃塞俄比亚第2军 "
    location = 1043
    division = {
      id             = { type = 31000 id = 9 }
      name           = "第3民兵师 "
      type           = militia
      model          = 0
      strength       = 60
    }
    division = {
      id             = { type = 31000 id = 10 }
      name           = "第4民兵师 "
      type           = militia
      model          = 0
      strength       = 60
    }
  }
}
