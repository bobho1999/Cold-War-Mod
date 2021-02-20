##############################
# Country definition for FRA #
##############################
province = {
  id = 18 # 加莱
}
province = {
  id = 32 # 布雷斯特
}
province = {
  id = 35 # 南特
}
province = {
  id = 38 # 瑟堡
}
province = {
  id = 44 # 里尔
}
province = {
  id = 56 # 巴黎
}
province = {
  id = 62 # 欧塞尔
}
province = {
  id = 72 # 梅斯
  landfort = 10
  anti_air = 5
}
province = { id = 73 landfort = 10 anti_air = 5 } # 斯特拉斯堡
province = { id = 74 landfort = 1 } # 萨尔布吕肯
province = { id = 224 landfort = 1 } # 科布伦茨
province = { id = 315 landfort = 1 } # 弗赖堡
province = { id = 316 landfort = 10 anti_air = 5 } # 米卢斯
province = {
  id = 325 # 波尔多
}
province = {
  id = 359 # 图卢兹
}
province = {
  id = 364 # 马赛
}
province = {
  id = 365 # 土伦
}
province = { id = 366 landfort = 5 } # 尼斯
province = {
  id = 528 # 里昂
}
province = { id = 875 supplypool = 100 } # 卡宴
province = {
  id = 939 # 突尼斯
}
province = {
  id = 949 # 阿尔及尔
  supplypool = 500
  oilpool = 500
}
province = {
  id = 953 # 奥兰（瓦赫兰）
}
province = {
  id = 958 # 卡萨布兰卡
}
province = {
  id = 981 # 达喀尔
}
province = {
  id = 993 # 阿比让
}
province = {
  id = 1037 # 吉布提
  supplypool = 200
  oilpool = 100
}
province = {
  id = 1089 # 杜阿拉
}
province = {
  id = 1092 # 利伯维尔
  supplypool = 200
  oilpool = 50
}
province = {
  id = 1137 # 塔那那利佛
  supplypool = 200
  oilpool = 50
}
province = { id = 1168 landfort = 1 } # 卡尔斯鲁厄
province = {
  id = 1337 # 西?
  infra = { size = 0.9 current_size = 0.8 }
  supplypool = 500
  oilpool = 500
}
province = { id = 3045 landfort = 5 } # 迪涅
province = { id = 3046 landfort = 5 } # 萨瓦
province = { id = 3061 landfort = 1 } # 特里尔
province = { id = 3062 landfort = 1 } # 凯撒斯劳滕

#####################
# Country main data #
#####################

country = {
  tag                = FRA
  ai                 = "fra_1950.ai"
  capital            = 56 # 巴黎
  dissent            = 8
  manpower           = 100
  # Resource Reserves
  energy         = 5000
  metal          = 5000
  rare_materials = 2500
  oil            = 500
  supplies       = 2500
  money          = 100
  transports     = 350
  escorts        = 60
  free = {
    oil            = 20
  }

  diplomacy = {
    relation = { tag = ENG value = 150 access = yes }
    relation = { tag = USA value = 50 access = yes }
    relation = { tag = SIA value = -100 }
    relation = { tag = SYR value = 0 access = yes }
  }
  SpyInfo                = { country = "FRA" NumberOfSpies = 10 }

  nationalprovinces      = { 1326 1328 1333 1334 1335 1337 1338 3702 3703 3704 3706 3705 3708 3709 3710 3711 3712 3707 364 365 366 527 528 3044 3045 3046 323 324 325 326 327 328 3037 3038 62 63 317 318 319 361 3030 3047 3050 32 33 34 35 36 58 3020 3021 367 320 322 360 3034 3035 3036 3048 3049 57 59 60 61 321 3031 3032 3033 72 73 316 529 3051 3052 3053 3054 37 38 39 40 41 3011 3022 3023 3024 55 56 3026 3027 3028 3029 18 42 43 44 53 54 64 3025 3107 358 359 362 363 3039 3040 3041 3042 3043 3714 1306 1329 3713 3716 1336 1332 3715 }
  ownedprovinces         = { 1337 364 365 366 527 528 3044 3045 3046 323 324 325 326 327 328 3037 3038 62 63 317 318 319 361 3030 3047 3050 32 33 34 35 36 58 3020 3021 367 320 322 360 3034 3035 3036 3048 3049 57 59 60 61 321 3031 3032 3033 72 73 316 529 3051 3052 3053 3054 37 38 39 40 41 3011 3022 3023 3024 55 56 3026 3027 3028 3029 18 42 43 44 53 54 64 3025 3107 358 359 362 363 3039 3040 3041 3042 3043 3801 3802 3800 3803 74 224 3061 1168 315 374 223 3062 373 377 1089 1092 1077 1093 3377 1075 1076 3374 3376 1078 1088 1082 3378 3372 3370 1070 1083 1014 1013 3309 3308 935 939 938 936 937 934 3311 941 940 942 943 3315 944 945 946 949 947 3314 3312 3313 958 961 3319 965 956 952 953 950 948 951 970 3317 969 960 959 962 967 966 968 3316 974 975 3321 976 973 3320 977 978 3322 986 980 985 993 995 994 979 991 990 989 987 981 984 1081 1084 3326 998 3325 997 996 1087 3373 1086 1080 1079 3371 1137 1134 1037 1004 1005 1003 1006 3324 3323 875 899 898 1689 1690 1692 1691 3966 3964 3960 1751 3961 3963 3962 1135 3596 3586 1016 1015 928 }
  controlledprovinces    = { 1337 364 365 366 527 528 3044 3045 3046 323 324 325 326 327 328 3037 3038 62 63 317 318 319 361 3030 3047 3050 32 33 34 35 36 58 3020 3021 367 320 322 360 3034 3035 3036 3048 3049 57 59 60 61 321 3031 3032 3033 72 73 316 529 3051 3052 3053 3054 37 38 39 40 41 3011 3022 3023 3024 55 56 3026 3027 3028 3029 18 42 43 44 53 54 64 3025 3107 358 359 362 363 3039 3040 3041 3042 3043 3801 3802 3800 3803 74 224 3061 1168 315 374 223 3062 373 377 1089 1092 1077 1093 3377 1075 1076 3374 3376 1078 1088 1082 3378 3372 3370 1070 1083 1014 1013 3309 3308 935 939 938 936 937 934 3311 941 940 942 943 3315 944 945 946 949 947 3314 3312 3313 958 961 3319 965 956 952 953 950 948 951 970 3317 969 960 959 962 967 966 968 3316 974 975 3321 976 973 3320 977 978 3322 986 980 985 993 995 994 979 991 990 989 987 981 984 1081 1084 3326 998 3325 997 996 1087 3373 1086 1080 1079 3371 1137 1134 1037 1004 1005 1003 1006 3324 3323 875 899 898 1689 1690 1692 1691 3966 3964 3960 1751 3961 3963 3962 1135 3596 3586 928 1016 1015 }

  techapps               = { 1010 1020 1030 1040 1050 5220 5410 5050 5010 5100 5110 5310 1010 1020 1030 1040 1050 1200 1290 1280 1270 8700 8730 8100 8000 8010 8020 8030 8060 8050 8080 8040 2280 2290 2300 2310 5080 5170 5190 5800 1190 1180 1170 1410 1420 1430 1440 1890 1900 1910 1760 1770 1780 1660 1060 9700 9710 9010 9020 9030 5470 5480 5490 5180 5670 5660 5680 8390 8150 8660 8130 8140 8200 8160 2320 2540 2550 2560 2010 2020 2030 2040 2060 4120 4130 4010 4020 4030 4060 74600 8070 8120 66540 66510 66500 66520 66530 4140 4050 3070 3080 3090 3010 3020 3030 3190 3200 3210 3130 3140 3150 3320 3330 3340 3250 3260 3270 2420 2430 2440 1540 1550 1560 1300 1310 6010 6020 6040 6050 6060 6070 6080 6100 26100 26200 2360 2370 5020 5290 5690 1920 2720 2800 2810 2820 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 6
    freedom           = 10
    free_market       = 8
    professional_army = 5
    defense_lobby     = 7
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 2031 } # 夏尔 戴高乐 
  headofgovernment       = { type = 9 id = 2046 } # 夏尔 戴高乐 
  foreignminister        = { type = 9 id = 2061 } # 勒内 卢辛 马西格里 
  armamentminister       = { type = 9 id = 2090 } # 勒内 普利文 
  ministerofsecurity     = { type = 9 id = 2116 } # 安德烈 勒 乔奎 
  ministerofintelligence = { type = 9 id = 2136 } # 罗杰 兰特诺伊斯 
  chiefofstaff           = { type = 9 id = 2152 } # 皮埃尔 博金斯-毛诺里 
  chiefofarmy            = { type = 9 id = 2158 } # 让-马里 拉特尔 德 塔西尼 
  chiefofnavy            = { type = 9 id = 2178 } # 艾蒂安 施伦博格 
  chiefofair             = { type = 9 id = 2194 } # 雷蒙德 罗科斯 
  nationalidentity       = "policy_economy_monopoly"
  socialpolicy           = "policy_social_Catholicism"
  nationalculture        = "policy_political_conservatism"
  dormant_ministers      = { 2002 2033 2036 2003 2049 2053 2004 2091 2005 2117 2006 }

  landunit = {
    id       = { type = 30101 id = 1 }
    name     = "法国第1集团军 "
    location = 377
    division = {
      id             = { type = 30104 id = 1 }
      name           = "法国第1集团军司令部 "
      type           = hq
      model          = 2
      extra          = police
      brigade_model  = 0
      experience     = 50
    }
  }
  landunit = {
    id       = { type = 30101 id = 2 }
    name     = "法国第1军团 "
    location = 374
    division = {
      id             = { type = 30104 id = 2 }
      name           = "第10步兵师 "
      type           = motorized
      model          = 2
      experience     = 50
    }
    division = {
      id             = { type = 30104 id = 3 }
      name           = "第1装甲师 "
      type           = armor
      model          = 3
      experience     = 50
    }
    division = {
      id             = { type = 30104 id = 4 }
      name           = "第2摩洛哥师 "
      type           = infantry
      model          = 4
      experience     = 50
    }
    division = {
      id             = { type = 30104 id = 6 }
      name           = "第4摩洛哥山地师 "
      type           = bergsjaeger
      model          = 3
      experience     = 50
    }
  }
  landunit = {
    id       = { type = 30101 id = 3 }
    name     = "法国第2军团 "
    location = 314
    division = {
      id             = { type = 30104 id = 7 }
      name           = "第1摩托化步兵师 "
      type           = motorized
      model          = 2
      experience     = 45
    }
    division = {
      id             = { type = 30104 id = 9 }
      name           = "第3阿尔及利亚师 "
      type           = infantry
      model          = 4
      experience     = 45
    }
    division = {
      id             = { type = 30104 id = 10 }
      name           = "第5装甲师 "
      type           = armor
      model          = 3
      experience     = 45
    }
    division = {
      id             = { type = 30104 id = 11 }
      name           = "第14摩托化步兵师 "
      type           = motorized
      model          = 2
      experience     = 45
    }
  }
  landunit = {
    id       = { type = 30101 id = 4 }
    name     = "法国第2集团军 "
    location = 314
    division = {
      id             = { type = 30104 id = 12 }
      name           = "法国第2集团军司令部 "
      type           = hq
      model          = 2
      extra          = engineer
      brigade_model  = 0
      experience     = 45
    }
  }
  landunit = {
    id       = { type = 30101 id = 5 }
    name     = "法国第3军团 "
    location = 377
    division = {
      id             = { type = 30104 id = 13 }
      name           = "第27山地师 "
      type           = bergsjaeger
      model          = 3
      experience     = 35
    }
    division = {
      id             = { type = 30104 id = 14 }
      name           = "第19步兵师 "
      type           = infantry
      model          = 4
      experience     = 35
    }
  }
  landunit = {
    id       = { type = 30101 id = 6 }
    name     = "叙利亚集团军 "
    location = 1792
    division = {
      id             = { type = 30104 id = 15 }
      name           = "第3装甲师 "
      type           = armor
      model          = 3
      experience     = 5
    }
    division = {
      id             = { type = 30104 id = 16 }
      name           = "第23步兵师 "
      type           = infantry
      model          = 5
      experience     = 5
    }
    division = {
      id             = { type = 30104 id = 17 }
      name           = "第25步兵师 "
      type           = infantry
      model          = 5
      experience     = 5
    }
    division = {
      id             = { type = 30104 id = 18 }
      name           = "第36步兵师 "
      type           = infantry
      model          = 5
      experience     = 5
    }
  }

  navalunit = {
    id       = { type = 30102 id = 1 }
    name     = "法国第1舰队 "
    location = 32
    base     = 32
    division = {
      id             = { type = 30105 id = 1 }
      name           = "贝阿恩号 "
      type           = carrier
      model          = 1
      extra1         = cag
      brigade_model1 = 2
      experience     = 35
    }
    division = {
      id             = { type = 30105 id = 2 }
      name           = "黎塞留号 "
      type           = battleship
      model          = 3
      extra1         = naval_sa_l
      extra2         = naval_fire_controll_l
      extra3         = naval_spotter_l
      extra4         = naval_anti_air_l
      extra5         = none
      brigade_model1 = 1
      brigade_model2 = 2
      brigade_model3 = 2
      brigade_model4 = 4
      brigade_model5 = 0
      experience     = 35
    }
    division = {
      id             = { type = 30105 id = 3 }
      name           = "迪尤肯号 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = naval_spotter_l
      extra3         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 3
      experience     = 35
    }
    division = {
      id             = { type = 30105 id = 4 }
      name           = "迪盖·特鲁安号 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 3
      brigade_model2 = 2
      experience     = 35
    }
    division = {
      id             = { type = 30105 id = 5 }
      name           = "贞德号 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_spotter_s
      extra2         = naval_anti_air_s
      brigade_model1 = 2
      brigade_model2 = 3
      experience     = 35
    }
    division = {
      id             = { type = 30105 id = 6 }
      name           = "埃米尔·贝尔坦号 "
      type           = light_cruiser
      model          = 2
      extra1         = naval_fire_controll_s
      extra2         = naval_spotter_s
      brigade_model1 = 1
      brigade_model2 = 2
      experience     = 35
    }
    division = {
      id             = { type = 30105 id = 7 }
      name           = "第1驱逐舰支队 "
      type           = destroyer
      model          = 0
      extra1         = naval_anti_air_s
      brigade_model1 = 3
      experience     = 35
    }
    division = {
      id             = { type = 30105 id = 8 }
      name           = "第2驱逐舰支队 "
      type           = destroyer
      model          = 1
      extra1         = naval_asw
      brigade_model1 = 2
      experience     = 35
    }
    division = {
      id             = { type = 30105 id = 9 }
      name           = "第1潜艇支队 "
      type           = submarine
      model          = 2
      experience     = 35
    }
    division = {
      id             = { type = 30105 id = 10 }
      name           = "第2潜艇支队 "
      type           = submarine
      model          = 1
      experience     = 35
    }
    division = {
      id             = { type = 30105 id = 11 }
      name           = "第1运输舰支队 "
      type           = transport
      strength       = 100
      experience     = 35
    }
    division = {
      id             = { type = 30105 id = 12 }
      name           = "第2运输舰支队 "
      type           = transport
      strength       = 100
      experience     = 35
    }
  }
  navalunit = {
    id       = { type = 30102 id = 2 }
    name     = "法国第2舰队 "
    location = 364
    base     = 364
    division = {
      id             = { type = 30105 id = 14 }
      name           = "洛林号 "
      type           = battleship
      model          = 1
      extra1         = naval_sa_l
      extra2         = naval_fire_controll_l
      extra3         = naval_spotter_l
      extra4         = naval_anti_air_l
      extra5         = naval_radar_l
      brigade_model1 = 1
      brigade_model2 = 2
      brigade_model3 = 2
      brigade_model4 = 4
      brigade_model5 = 2
      experience     = 35
    }
    division = {
      id             = { type = 30105 id = 15 }
      name           = "絮弗伦号 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = naval_spotter_l
      extra3         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 2
      brigade_model3 = 3
      experience     = 35
    }
    division = {
      id             = { type = 30105 id = 16 }
      name           = "图拉维尔号 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = naval_spotter_l
      extra3         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 3
      experience     = 35
    }
    division = {
      id             = { type = 30105 id = 17 }
      name           = "乔治·莱格号 "
      type           = light_cruiser
      model          = 3
      extra1         = naval_spotter_s
      extra2         = naval_anti_air_s
      brigade_model1 = 2
      brigade_model2 = 3
      experience     = 35
    }
    division = {
      id             = { type = 30105 id = 18 }
      name           = "荣耀号 "
      type           = light_cruiser
      model          = 3
      extra1         = naval_spotter_s
      extra2         = naval_anti_air_s
      brigade_model1 = 2
      brigade_model2 = 3
      experience     = 35
    }
    division = {
      id             = { type = 30105 id = 19 }
      name           = "蒙卡尔姆号 "
      type           = light_cruiser
      model          = 3
      extra1         = naval_spotter_s
      extra2         = naval_anti_air_s
      brigade_model1 = 2
      brigade_model2 = 3
      experience     = 35
    }
    division = {
      id             = { type = 30105 id = 20 }
      name           = "第3驱逐舰支队 "
      type           = destroyer
      model          = 2
      extra1         = naval_asw
      brigade_model1 = 2
      experience     = 35
    }
    division = {
      id             = { type = 30105 id = 21 }
      name           = "第4驱逐舰支队 "
      type           = destroyer
      model          = 2
      extra1         = naval_anti_air_s
      brigade_model1 = 3
      experience     = 35
    }
    division = {
      id             = { type = 30105 id = 22 }
      name           = "第3潜艇支队 "
      type           = submarine
      model          = 1
      experience     = 35
    }
    division = {
      id             = { type = 30105 id = 23 }
      name           = "第4潜艇支队 "
      type           = submarine
      model          = 1
      experience     = 35
    }
    division = {
      id             = { type = 30105 id = 24 }
      name           = "第5潜艇支队 "
      type           = submarine
      model          = 1
      experience     = 35
    }
    division = {
      id             = { type = 30105 id = 25 }
      name           = "第3运输舰支队 "
      type           = transport
      strength       = 100
      experience     = 35
    }
    division = {
      id             = { type = 30105 id = 26 }
      name           = "第4运输舰支队 "
      type           = transport
      strength       = 100
      experience     = 35
    }
    division = {
      id             = { type = 30105 id = 27 }
      name           = "第5运输舰支队 "
      type           = transport
      strength       = 100
      experience     = 35
    }
  }

  airunit = { 
    id       = { type = 30103 id = 1 }
    name     = "中东空军联队 "
    location = 72
    base     = 72
    division = {
      id             = { type = 30106 id = 1 }
      name           = "第21截击大队 "
      type           = multi_role
      model          = 2
      strength       = 100
      experience     = 35
    }
    division = {
      id             = { type = 30106 id = 2 }
      name           = "第1战术轰炸机大队 "
      type           = tactical_bomber
      model          = 1
      strength       = 100
      experience     = 35
    }
  }
  airunit = { 
    id       = { type = 30103 id = 2 }
    name     = "新喀里多尼亚空军联队 "
    location = 359
    base     = 359
    division = {
      id             = { type = 30106 id = 3 }
      name           = "第1海军轰炸机大队 "
      type           = naval_bomber
      model          = 2
      strength       = 100
      experience     = 35
    }
  }
  airunit = { 
    id       = { type = 30103 id = 3 }
    name     = "西非空军联队 "
    location = 32
    base     = 32
    division = {
      id             = { type = 30106 id = 4 }
      name           = "第2海军轰炸机大队 "
      type           = naval_bomber
      model          = 2
      strength       = 100
      experience     = 35
    }
  }
  airunit = { 
    id       = { type = 30103 id = 4 }
    name     = "法国远征军空军联队 "
    location = 56
    base     = 56
    division = {
      id             = { type = 30106 id = 5 }
      name           = "'洛林'战斗机大队 "
      type           = multi_role
      model          = 2
      strength       = 100
      experience     = 35
    }
    division = {
      id             = { type = 30106 id = 6 }
      name           = "'阿尔萨斯'战术轰炸机大队 "
      type           = tactical_bomber
      model          = 2
      strength       = 100
      experience     = 35
    }
  }

  landdivision = { dormant = yes id = { type = 13500 id = 33 } name = "東方遠征军?戰第1旅"  type = marine model = 4 extra = artillery brigade_model = 5 } 
  landdivision = { dormant = yes id = { type = 13500 id = 34 } name = "東方遠征军?戰第2旅"  type = marine model = 4 extra = engineer brigade_model = 5 } 
  landdivision = { dormant = yes id = { type = 13500 id = 35 } name = "東方遠征军?戰第3旅"  type = marine model = 4 extra = police brigade_model = 5 } 
  landdivision = { dormant = yes id = { type = 13500 id = 31 } name = "峴港守備队"  type = infantry model = 4 extra = police brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 13500 id = 32 } name = "西?守備队"  type = infantry model = 4 extra = police brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 13500 id = 39 } name = "河內守備队"  type = infantry model = 4 extra = police brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 13500 id = 36 } name = "法军傘兵"  type = paratrooper model = 4 extra = artillery brigade_model = 5 } 
  landdivision = { dormant = yes id = { type = 13500 id = 37 } name = "法军傘兵"  type = paratrooper model = 4 extra = artillery brigade_model = 5 } 
  landdivision = { dormant = yes id = { type = 13500 id = 38 } name = "法军傘兵"  type = paratrooper model = 4 extra = artillery brigade_model = 5 } 
  landdivision = { dormant = yes id = { type = 13500 id = 40 } name = "法國駐寮部队"  type = infantry model = 4 extra = police brigade_model = 3 locked = yes } 
}
