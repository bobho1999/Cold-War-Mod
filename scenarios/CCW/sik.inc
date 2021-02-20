##############################
# Country definition for SIK #
##############################

country = {
  tag                = SIK
  capital            = 1432 # 伊犁（伊?）
  dissent            = 20
  manpower           = 50
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 1000
  oil            = 1000
  supplies       = 1000
  money          = 100
  SpyInfo                = { country = "SIK" NumberOfSpies = 10 }

  nationalprovinces      = { 1435 1445 1447 1421 1432 1433 1446 1430 1431 2978 2979 2980 2981 2982 2983 2984 2985 2986 2987 2988 2989 2998 2999 2997 3464 3481 3480 3478 3471 3472 3470 2965 2962 2957 }
  ownedprovinces         = { 2983 3478 3480 1432 3464 2984 1421 }
  controlledprovinces    = { 2983 3478 3480 1432 3464 2984 1421 }

  techapps               = { 1010 7810 78100 1020 66500 66510 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 72001 } # 阿合买提江 
  headofgovernment       = { type = 9 id = 72002 } # 阿巴索夫 
  foreignminister        = { type = 9 id = 72003 } # 阿合买提江 
  armamentminister       = { type = 9 id = 72004 } # 哈比杜拉 胡塞诺夫 
  ministerofsecurity     = { type = 9 id = 72005 } # 张希良 
  ministerofintelligence = { type = 9 id = 72006 } # 维克托 波里诺夫 
  chiefofstaff           = { type = 9 id = 72007 } # 阿合买提江 
  chiefofarmy            = { type = 9 id = 72008 } # 阿合买提江 
  chiefofnavy            = { type = 9 id = 72009 } # 萨镇冰 
  chiefofair             = { type = 9 id = 72010 } # 彼得 奥尔洛夫 
  nationalidentity       = "policy_economy_natural"
  socialpolicy           = "policy_social_Islam"
  nationalculture        = "policy_political_conservatism"

  landunit = {
    id       = { type = 30951 id = 1 }
    name     = "东突第1军 "
    location = 1432
    division = {
      id             = { type = 30954 id = 1 }
      name           = "东突第一师 "
      type           = militia
      model          = 2
    }
    division = {
      id             = { type = 30954 id = 2 }
      name           = "东突第二师 "
      type           = militia
      model          = 2
    }
    division = {
      id             = { type = 30954 id = 3 }
      name           = "东突第三师 "
      type           = militia
      model          = 2
    }
    division = {
      id             = { type = 30954 id = 4 }
      name           = "苏械第1师 "
      type           = infantry
      model          = 22
      extra          = artillery
      brigade_model  = 6
    }
    division = {
      id             = { type = 30954 id = 5 }
      name           = "苏械第2师 "
      type           = infantry
      model          = 22
      extra          = artillery
      brigade_model  = 6
    }
  }
}
