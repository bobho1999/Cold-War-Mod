##############################
# Country definition for CXB #
##############################
province = {
  id = 2810 # 磴口
  infra = { size = 0.1 current_size = 0.1 }
}

#####################
# Country main data #
#####################

country = {
  tag                = CXB
  regular_id         = CHI
  puppet             = CHI
  control            = CHI
  intrinsic_gov_type = paternal_autocrat
  capital            = 1443 # 西寧
  dissent            = 25
  extra_tc           = 2
  manpower           = 15
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 100
  supplies       = 100
  money          = 50
  SpyInfo                = { country = "CXB" NumberOfSpies = 10 }

  nationalprovinces      = { 1275 1276 1277 1442 1441 1440 1443 1274 1444 2796 2797 2798 2799 2800 2801 2805 2806 2807 2955 2956 2958 2959 2960 2961 2963 2808 2809 2804 2802 2803 1273 2810 2811 }
  ownedprovinces         = { 1273 2810 2802 2804 2808 2809 2803 2801 2806 2805 2807 1440 1441 1443 1442 2955 2956 2958 2961 1444 2963 2960 2959 }
  controlledprovinces    = { 1273 2810 2802 2804 2808 2809 2803 2801 2806 2805 2807 1440 1441 1443 1442 2955 2956 2958 2961 1444 2963 2960 2959 }

  techapps               = { 1010 5180 5310 1020 1170 1180 6560 6030 6120 74900 1030 1190 1890 66540 66510 66520 66530 66500 2720 1040 1900 2800 6110 6130 6140 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 1
    defense_lobby     = 10
    interventionism   = 3
  }
  nationalidentity       = "policy_economy_natural"
  socialpolicy           = "policy_social_Islam"
  nationalculture        = "policy_political_conservatism"

  landunit = {
    id       = { type = 22003 id = 1 }
    name     = "国民革命军骑兵第5(哥萨克）军 "
    location = 1435
    division = {
      id             = { type = 22003 id = 2 }
      name           = "陆军第骑兵5师（西北三马） "
      type           = cavalry
      model          = 2
      extra          = artillery
      brigade_model  = 2
      experience     = 35
    }
    division = {
      id             = { type = 22003 id = 3 }
      name           = "陆军暫編騎兵第1师（西北三马）"
      type           = cavalry
      model          = 2
      extra          = artillery
      brigade_model  = 2
      experience     = 35
    }
    division = {
      id             = { type = 22003 id = 4 }
      name           = "陆军暫編騎兵第2师（西北三马） "
      type           = cavalry
      model          = 2
      extra          = artillery
      brigade_model  = 2
      experience     = 35
    }
  }
  landunit = {
    id       = { type = 22003 id = 5 }
    name     = "国民革命军第11军 "
    location = 2811
    division = {
      id             = { type = 22003 id = 6 }
      name           = "陆军第168师（西北三马） "
      type           = militia
      model          = 3
      experience     = 15
    }
    division = {
      id             = { type = 22003 id = 7 }
      name           = "陆军第7师（西北三马）"
      type           = militia
      model          = 3
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 22003 id = 8 }
    name     = "国民革命军第81军 "
    location = 2802
    division = {
      id             = { type = 22003 id = 9 }
      name           = "陆军第35师（西北三马） "
      type           = militia
      model          = 3
      experience     = 15
    }
    division = {
      id             = { type = 22003 id = 15 }
      name           = "陆军暫編第60师（西北三马） "
      type           = militia
      model          = 3
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 22003 id = 10 }
    name     = "国民革命军第82军 "
    location = 1443
    division = {
      id             = { type = 22003 id = 11 }
      name           = "陆军第100师（西北三马） "
      type           = militia
      model          = 3
      experience     = 15
    }
    division = {
      id             = { type = 22003 id = 16 }
      name           = "陆军暫編第61师（西北三马） "
      type           = militia
      model          = 3
      experience     = 15
    }
    division = {
      id             = { type = 22003 id = 17 }
      name           = "陆军新編騎兵第8师（西北三马） "
      type           = cavalry
      model          = 2
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 22003 id = 12 }
    name     = "青海省保安司令部"
    location = 1440
    division = {
      id             = { type = 22003 id = 13 }
      name           = "青海省保安團"
      type           = militia
      model          = 3
    }
    division = {
      id             = { type = 22003 id = 31 }
      name           = "青海省民防團"
      type           = militia
      model          = 3
    }
    division = {
      id             = { type = 22003 id = 14 }
      name           = "青海骑兵师"
      type           = cavalry
      model          = 2
    }
  }
  landunit = {
    id       = { type = 22003 id = 18 }
    name     = "宁夏省保安司令部"
    location = 1273
    division = {
      id             = { type = 22003 id = 19 }
      name           = "宁夏省保安團"
      type           = militia
      model          = 3
    }
    division = {
      id             = { type = 22003 id = 33 }
      name           = "宁夏省民防團"
      type           = militia
      model          = 3
    }
  }

  landdivision = { dormant = yes id = { type = 22003 id = 20 } name = "西北防?"  type = garrison model = 1 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 22003 id = 21 } name = "西北防?"  type = garrison model = 1 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 22003 id = 22 } name = "西北防?"  type = garrison model = 1 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 22003 id = 23 } name = "西北防?"  type = garrison model = 1 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 22003 id = 24 } name = "西北防?"  type = garrison model = 1 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 22003 id = 25 } name = "西北防?"  type = garrison model = 1 extra = engineer brigade_model = 3 locked = yes } 
}
