##############################
# Country definition for BRA #
##############################
province = { id = 847 anti_air = 1 } # 库里蒂巴
province = {
  id = 848 # 阿雷格里港
  anti_air = 2
}
province = {
  id = 876 # 马卡帕
}
province = {
  id = 881 # 累西腓
}
province = { id = 883 anti_air = 2 } # 戈亚斯
province = {
  id = 884 # 维多利亚（巴西）
}
province = {
  id = 885 # 里约热内卢
  anti_air = 1
}
province = {
  id = 886 # 圣保罗
  anti_air = 1
}

#####################
# Country main data #
#####################

country = {
  tag                = BRA
  capital            = 885 # 里约热内卢
  manpower           = 125
  tc_mod                 = 1.1
  research_mod           = 1.15
  peacetime_ic_mod       = 0.7
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 20

  diplomacy = {
    relation = { tag = ARG value = -10 }
    relation = { tag = BOL value = 10 }
    relation = { tag = CHL value = 10 }
    relation = { tag = COL value = 10 }
    relation = { tag = ECU value = 10 }
    relation = { tag = GER value = 50 }
    relation = { tag = IRE value = 20 }
    relation = { tag = PAR value = 10 }
    relation = { tag = POR value = 75 }
    relation = { tag = PRU value = 10 }
    relation = { tag = SOV value = -50 }
    relation = { tag = URU value = 125 }
    relation = { tag = USA value = 120 }
    relation = { tag = VEN value = 10 }
  }

  nationalprovinces      = { 4038 4044 4045 4046 4047 4048 4049 4050 4051 4052 4053 4054 4055 4056 4057 4062 4063 820 822 823 824 825 826 834 835 847 848 872 876 877 878 879 880 881 882 883 884 885 886 887 }
  ownedprovinces         = { 4038 4044 4045 4046 4047 4048 4049 4050 4051 4052 4053 4054 4055 4056 4057 4062 4063 820 822 823 824 825 826 834 835 847 848 872 876 877 878 879 880 881 882 883 884 885 886 887 }
  controlledprovinces    = { 4038 4044 4045 4046 4047 4048 4049 4050 4051 4052 4053 4054 4055 4056 4057 4062 4063 820 822 823 824 825 826 834 835 847 848 872 876 877 878 879 880 881 882 883 884 885 886 887 }

  techapps               = { 5050 5080 5170 5190 5180 5660 5010 1010 2280 2290 2420 2540 3490 3550 3560 3010 3070 3130 3410 6010 6020 6040 6050 8010 8020 8030 8150 8160 8200 8390 8440 8530 9010 7420 7510 66500 66510 66520 66530 66540 1890 1900 2800 2720 1020 1040 1030 1050 1170 1180 1190 5310 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 9
    freedom           = 7
    free_market       = 6
    professional_army = 10
    defense_lobby     = 6
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 34001 } # 热图利奥 瓦尔加斯 
  headofgovernment       = { type = 9 id = 34002 } # 热图利奥 瓦尔加斯 
  foreignminister        = { type = 9 id = 34003 } # 若泽 德 马塞多 苏亚雷斯 
  armamentminister       = { type = 9 id = 34004 } # 小卡费 
  ministerofsecurity     = { type = 9 id = 34005 } # 小马孔德斯 
  ministerofintelligence = { type = 9 id = 34006 } # 菲林托 穆勒 
  chiefofstaff           = { type = 9 id = 34007 } # 加斯帕 杜特拉 
  chiefofarmy            = { type = 9 id = 34008 } # 若昂 内维斯 达 丰托拉 
  chiefofnavy            = { type = 9 id = 34009 } # 阿里斯蒂德斯 吉扬 
  chiefofair             = { type = 9 id = 34010 } # 小萨尔加多 
  nationalidentity       = "policy_economy_Laisser-faire"
  socialpolicy           = "policy_social_integration"
  nationalculture        = "policy_political_dignitary"

  landunit = {
    id       = { type = 18000 id = 1 }
    name     = "巴西第1军 "
    location = 883
    division = {
      id             = { type = 18000 id = 2 }
      name           = "第1步兵师 "
      type           = infantry
      extra          = artillery
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 18000 id = 3 }
      name           = "第2步兵师 "
      type           = infantry
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 18000 id = 4 }
      name           = "第18警备师 "
      type           = militia
      strength       = 100
    }
    division = {
      id             = { type = 18000 id = 5 }
      name           = "第19警备师 "
      type           = militia
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 18000 id = 6 }
    name     = "巴西第2军 "
    location = 885
    division = {
      id             = { type = 18000 id = 7 }
      name           = "第3步兵师"
      type           = infantry
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 18000 id = 8 }
      name           = "第92骑兵师 "
      type           = cavalry
      strength       = 100
      experience     = 15
    }
  }

  navalunit = {
    id       = { type = 18000 id = 11 }
    name     = "巴西运输舰队 "
    location = 885
    base     = 885
    division = {
      id             = { type = 18000 id = 12 }
      name           = "第1运输舰编队 "
      type           = transport
    }
    division = {
      id             = { type = 18000 id = 13 }
      name           = "第2运输舰编队 "
      type           = transport
    }
    division = {
      id             = { type = 18000 id = 14 }
      name           = "第3运输舰编队 "
      type           = transport
    }
    division = {
      id             = { type = 18000 id = 15 }
      name           = "第4运输舰编队 "
      type           = transport
    }
    division = {
      id             = { type = 18000 id = 16 }
      name           = "第5运输舰编队 "
      type           = transport
    }
    division = {
      id             = { type = 18000 id = 17 }
      name           = "第6运输舰编队 "
      type           = transport
    }
  }
  navalunit = {
    id       = { type = 18000 id = 18 }
    name     = "巴西第1舰队 "
    location = 848
    base     = 848
    division = {
      id             = { type = 18000 id = 19 }
      name           = "圣保罗号 "
      type           = battleship
      model          = 0
      extra1         = naval_sa_l
      extra2         = naval_anti_air_l
      extra3         = none
      extra4         = none
      extra5         = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      brigade_model4 = 0
      brigade_model5 = 0
    }
    division = {
      id             = { type = 18000 id = 29 }
      name           = "米那斯格勒斯号 "
      type           = battleship
      model          = 0
      extra1         = naval_sa_l
      extra2         = naval_anti_air_l
      extra3         = none
      extra4         = none
      extra5         = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      brigade_model4 = 0
      brigade_model5 = 0
    }
    division = {
      id             = { type = 18000 id = 21 }
      name           = "比黑尔号 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_anti_air_s
      extra2         = none
      brigade_model1 = 1
      brigade_model2 = 0
    }
    division = {
      id             = { type = 18000 id = 23 }
      name           = "格兰德河·苏尔号 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_anti_air_s
      extra2         = none
      brigade_model1 = 1
      brigade_model2 = 0
    }
  }

  airunit = { 
    id       = { type = 18000 id = 9 }
    name     = "巴西第1空军联队 "
    location = 885
    base     = 885
    division = {
      id             = { type = 18000 id = 10 }
      name           = "第1截击机大队 "
      type           = interceptor
      model          = 0
      strength       = 50
      experience     = 15
    }
  }

  landdivision = { dormant = yes id = { type = 18000 id = 100 } name = "里奥卫戍师 "  type = bergsjaeger model = 1 extra = police locked = yes } 
  landdivision = { dormant = yes id = { type = 18000 id = 101 } name = "里奥卫戍师 "  type = infantry model = 3 extra = police locked = yes } 
  landdivision = { dormant = yes id = { type = 18000 id = 102 } name = "圣保罗卫戍师 "  type = bergsjaeger model = 1 extra = police locked = yes } 
  landdivision = { dormant = yes id = { type = 18000 id = 103 } name = "圣保罗卫戍师 "  type = infantry model = 3 extra = police locked = yes } 
}
