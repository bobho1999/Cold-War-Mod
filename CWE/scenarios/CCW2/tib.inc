##############################
# Country definition for TIB #
##############################

country = {
  tag                = TIB
  capital            = 1453 # 拉薩
  manpower           = 10
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10
  SpyInfo                = { country = "TIB" NumberOfSpies = 10 }

  nationalprovinces      = { 1283 1448 1450 1451 1452 1453 2964 2966 2967 2968 2969 2970 2971 1442 1443 1444 2955 2956 2958 2959 2960 2961 2963 2972 2973 1281 1282 1877 1878 1454 1284 1455 2675 1473 3864 3865 3842 3843 3844 3846 2962 }
  ownedprovinces         = { 1283 1448 1450 1451 1452 1453 2964 2968 2969 2971 }
  controlledprovinces    = { 1283 1448 1450 1451 1452 1453 2964 2968 2969 2971 }

  techapps               = { 7810 5310 1010 78100 1020 66500 66510 66520 66530 2280 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 5
    free_market       = 5
    professional_army = 1
    defense_lobby     = 1
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 73001 } # 达赖喇嘛
  headofgovernment       = { type = 9 id = 73018 } # 阿旺晋美 
  foreignminister        = { type = 9 id = 73021 } # 阿旺晋美 
  armamentminister       = { type = 9 id = 73004 } # 蒙多
  ministerofsecurity     = { type = 9 id = 73005 } # 拉鲁赛
  ministerofintelligence = { type = 9 id = 73006 } # 晋美图灵 
  chiefofstaff           = { type = 9 id = 73007 } # 炯拉
  chiefofarmy            = { type = 9 id = 73008 } # 炯拉
  chiefofnavy            = { type = 9 id = 73009 } # 炯拉
  chiefofair             = { type = 9 id = 73010 } # 炯拉
  nationalidentity       = "policy_economy_natural"
  socialpolicy           = "policy_social_Buddhism"
  nationalculture        = "policy_political_theocracy"

  landunit = {
    id       = { type = 10030 id = 1 }
    name     = "藏?第一?"
    location = 1453
    division = {
      id             = { type = 1030 id = 2 }
      name           = "第一?"
      type           = bergsjaeger
      model          = 0
      strength       = 60
    }
  }
}
