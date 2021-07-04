##############################
# Country definition for CGX #
##############################
province = {
  id = 1258 # 桂林
}
province = {
  id = 1319 # 南寧
}

#####################
# Country main data #
#####################

country = {
  tag                = CGX
  regular_id         = CHI
  intrinsic_gov_type = paternal_autocrat
  capital            = 1258 # 桂林
  dissent            = 20
  extra_tc           = 10
  manpower           = 20
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 100
  supplies       = 100
  money          = 50
  transports     = 40
  escorts        = 10

  diplomacy = {
    relation = { tag = CHI value = 200 access = yes }
    relation = { tag = CHC value = 200 }
    relation = { tag = U03 value = 50 }
    relation = { tag = SOV value = 100 }
    relation = { tag = JAP value = 50 }
    relation = { tag = U12 value = -200 }
    relation = { tag = CYN value = 100 }
  }
  SpyInfo                = { country = "CGX" NumberOfSpies = 10 }
  SpyInfo                = { country = "CHI" NumberOfSpies = 5 }

  nationalprovinces      = { 1309 1311 1319 2719 2720 2721 2722 2723 2724 2725 2726 2734 2735 2736 2727 2728 2729 1258 1310 2730 2731 2732 2733 }
  ownedprovinces         = { 1258 1310 1311 1309 1319 2719 2720 2721 2722 2723 2724 2725 2726 2727 2728 2729 2730 2731 2732 2733 2734 2735 2736 }
  controlledprovinces    = { 1258 1310 1311 1309 1319 2719 2720 2721 2722 2723 2724 2725 2726 2727 2728 2729 2730 2731 2732 2733 2734 2735 2736 }

  techapps               = { 1010 4400 1020 1030 2280 2290 5050 5310 5010 5180 6500 6510 6530 6590 6600 6610 6680 6620 6630 6700 6660 6560 6030 6120 6110 6130 74900 1040 2300 66520 66540 66530 66510 66500 1890 1170 1270 2720 6140 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 1
    defense_lobby     = 1
    interventionism   = 2
  }
  chiefofnavy            = { type = 9 id = 16119 } # 奥格 H 费德尔 
  chiefofair             = { type = 9 id = 16028 }
  nationalidentity       = "policy_economy_natural-Capitalism"
  socialpolicy           = "policy_social_confucianism"
  nationalculture        = "policy_political_dignitary"

  landunit = {
    id       = { type = 22004 id = 1 }
    name     = "国民革命军第7(钢）军 "
    location = 1884
    division = {
      id             = { type = 22004 id = 3 }
      name           = "陆军第171师（桂军）"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      experience     = 60
    }
    division = {
      id             = { type = 22004 id = 4 }
      name           = "陆军第172师（桂军） "
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      experience     = 60
    }
  }
  landunit = {
    id       = { type = 22004 id = 19 }
    name     = "国民革命军第46军 "
    location = 1321
    division = {
      id             = { type = 22004 id = 20 }
      name           = "陆军第175师（桂军）"
      type           = motorized
      model          = 3
      extra          = artillery
      brigade_model  = 4
      experience     = 35
    }
    division = {
      id             = { type = 22004 id = 21 }
      name           = "陆军第188师（桂军）"
      type           = motorized
      model          = 3
      experience     = 35
    }
    division = {
      id             = { type = 22004 id = 22 }
      name           = "新?第19师（桂军） "
      type           = motorized
      model          = 3
      experience     = 35
    }
  }
  landunit = {
    id       = { type = 22004 id = 15 }
    name     = "国民革命军第48(加钢黄鳝)军 "
    location = 1233
    division = {
      id             = { type = 22004 id = 18 }
      name           = "陆军第138师（桂军）"
      type           = infantry
      model          = 4
      experience     = 35
    }
    division = {
      id             = { type = 22004 id = 16 }
      name           = "陆军第174师（桂军）"
      type           = infantry
      model          = 4
      experience     = 35
    }
    division = {
      id             = { type = 22004 id = 17 }
      name           = "陆军第176师（桂军） "
      type           = infantry
      model          = 4
      experience     = 35
    }
  }
  landunit = {
    id       = { type = 22004 id = 5 }
    name     = "国民革命军第84军 "
    location = 1319
    division = {
      id             = { type = 22004 id = 6 }
      name           = "陆军第131师（桂军） "
      type           = militia
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 22004 id = 7 }
      name           = "陆军第188师（桂军）"
      type           = militia
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 22004 id = 8 }
      name           = "陆军第189师（桂军） "
      type           = infantry
      model          = 40
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 22004 id = 2 }
    name     = "廣西省保安司令部"
    location = 1258
    division = {
      id             = { type = 22004 id = 9 }
      name           = "廣西省保安團"
      type           = militia
      model          = 3
    }
    division = {
      id             = { type = 22004 id = 11 }
      name           = "廣西省民防團"
      type           = militia
      model          = 3
    }
  }
}
