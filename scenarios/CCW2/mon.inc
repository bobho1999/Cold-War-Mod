##############################
# Country definition for MON #
##############################

country = {
  tag                = MON
  puppet             = SOV
  capital            = 1404 # 庫?（烏蘭巴托）
  manpower           = 7
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 200
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = SOV value = 200 }
  }
  SpyInfo                = { country = "MON" NumberOfSpies = 10 }

  nationalprovinces      = { 1420 1419 1434 1436 1437 1438 1399 1404 1385 2940 2948 2949 2950 2951 2954 2982 }
  ownedprovinces         = { 1420 1419 1434 1436 1437 1438 1399 1404 1385 2940 2948 2949 2950 2951 2954 2982 }
  controlledprovinces    = { 1420 1419 1434 1436 1437 1438 1399 1404 1385 2940 2948 2949 2950 2951 2954 2982 }

  techapps               = { 1010 7810 5310 5010 5180 1170 1180 1020 1030 1040 1190 6500 6510 6530 6590 6600 6610 6680 78100 1050 1200 1890 1900 1910 1760 2280 2290 2540 2550 2300 66500 66510 66520 66530 66540 6570 6300 6310 6330 6320 6340 2420 2720 2800 2810 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 8
    freedom           = 5
    free_market       = 3
    professional_army = 2
    defense_lobby     = 4
    interventionism   = 1
  }
  chiefofnavy            = { type = 9 id = 16078 } # 哈拉尔德 彼得森 
  chiefofair             = { type = 9 id = 16049 } # 汉斯 赫托夫 
  nationalidentity       = "policy_economy_natural"
  socialpolicy           = "policy_social_collectivism"
  nationalculture        = "policy_political_stalinist"

  landunit = {
    id       = { type = 30500 id = 1 }
    name     = "蒙古共和国第1军 "
    location = 1404
    division = {
      id             = { type = 30500 id = 2 }
      name           = "蒙古第1骑兵师 "
      type           = cavalry
      model          = 4
      extra          = artillery
      brigade_model  = 0
    }
    division = {
      id             = { type = 30500 id = 3 }
      name           = "蒙古第2骑兵师 "
      type           = cavalry
      model          = 4
      extra          = artillery
      brigade_model  = 0
    }
    division = {
      id             = { type = 30500 id = 4 }
      name           = "蒙古第3骑兵师 "
      type           = cavalry
      model          = 4
      extra          = artillery
      brigade_model  = 0
    }
    division = {
      id             = { type = 30500 id = 5 }
      name           = "蒙古第4骑兵师 "
      type           = cavalry
      model          = 4
      extra          = artillery
      brigade_model  = 0
    }
  }
}
