##############################
# Country definition for SPA #
##############################
province = { id = 331 ic = 2 } # �϶��Ͷ�
province = { id = 332 ic = 2 anti_air = 2 } # ��άҮ��
province = { id = 333 ic = 2 } # ������˹
province = {
  id = 334 # ����³����
  anti_air = 2
}
province = {
  id = 341 # ������
  anti_air = 3
}
province = { id = 346 anti_air = 2 } # Τ����
province = {
  id = 347 # ��ά����
}
province = {
  id = 354 # ��������
  anti_air = 2
}
province = { id = 355 ic = 2 } # ��˹������
province = { id = 356 ic = 2 anti_air = 2 } # ��������
province = {
  id = 357 # ��������
}
province = {
  id = 535 # ���忨��
}
province = {
  id = 957 # �ݴ�
  anti_air = 1
}
province = {
  id = 963 # ��˹������˹
}
province = {
  id = 3264 # �ӵ�˹
}

#####################
# Country main data #
#####################

country = {
  tag                = SPA
  intrinsic_gov_type = fascist
  capital            = 341 # ������
  dissent            = 5
  manpower           = 250
  # Resource Reserves
  energy         = 3500
  metal          = 3500
  rare_materials = 2500
  oil            = 3500
  supplies       = 3500
  money          = 0
  transports     = 83
  escorts        = 16

  diplomacy = {
    relation = { tag = SOV value = 150 }
  }
  SpyInfo                = { country = "POR" NumberOfSpies = 5 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 1 }
  SpyInfo                = { country = "ENG" NumberOfSpies = 2 }
  SpyInfo                = { country = "BEL" NumberOfSpies = 1 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 3 }
  SpyInfo                = { country = "HOL" NumberOfSpies = 1 }
  SpyInfo                = { country = "TUR" NumberOfSpies = 1 }
  SpyInfo                = { country = "SPA" NumberOfSpies = 2 }

  nationalprovinces      = { 356 357 535 536 537 3577 3578 352 353 354 355 3263 346 347 348 349 350 351 3264 3265 343 3270 3271 341 342 3266 3267 3268 3269 329 330 3262 333 338 339 340 3272 3273 3274 331 332 334 3275 3276 954 955 957 3318 963 964 971 972 1091 3375 }
  ownedprovinces         = { 1091 3262 3263 3264 3265 3266 3267 3268 3269 3270 3271 3272 3273 3274 3275 3276 329 330 331 3318 332 333 334 3375 338 339 340 341 342 343 346 347 349 350 351 352 353 354 355 356 357 3577 3578 535 536 537 954 955 957 963 964 971 972 }
  controlledprovinces    = { 1091 3262 3263 3264 3265 3266 3267 3268 3269 3270 3271 3272 3273 3274 3275 3276 329 330 331 3318 332 333 334 3375 338 339 340 341 342 343 346 347 349 350 351 352 353 354 355 356 357 3577 3578 535 536 537 954 955 957 963 964 971 972 }

  techapps               = { 1010 1020 1030 1040 1190 1200 14010 14020 2010 2020 2030 2040 2050 2060 2070 2080 2150 2160 2170 2180 2220 2230 2290 2300 2310 2320 2330 2330 2340 2400 2410 2450 2460 2470 2510 2520 2530 3010 3020 3030 3070 3080 3130 3140 3150 3250 3400 3410 4010 4020 4030 4040 4050 4060 4120 4130 4140 4170 4190 4220 4250 5010 5020 5050 5080 5100 5190 5200 5220 5310 5350 5360 6010 6020 6040 6050 6060 6070 6080 8010 8020 8040 8050 9010 9020 9030 9040 1050 1170 1180 1270 1280 1290 1300 1890 1900 1910 2810 2800 2720 5170 5110 5800 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 4
    freedom           = 4
    free_market       = 4
    professional_army = 4
    defense_lobby     = 5
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 10032 } # ������˹�� ���ʸ� �͹��ɵ� 
  headofgovernment       = { type = 9 id = 10046 } # ������˹�� ���ʸ� �͹��ɵ� 
  foreignminister        = { type = 9 id = 10061 } # �������� M ��̩��-���������� 
  armamentminister       = { type = 9 id = 10090 } # �Ƶ¶� ��ά�� ��¡�� 
  ministerofsecurity     = { type = 9 id = 10130 } # ����˹ ����˹ ������˹ 
  ministerofintelligence = { type = 9 id = 10162 } # ���� �¸����� ��Ĭ�� 
  chiefofstaff           = { type = 9 id = 10187 } # ����˹ ��ɭ���� ����������˹ 
  chiefofarmy            = { type = 9 id = 10206 } # �Ƶ¶� ��ά�� ��¡�� 
  chiefofnavy            = { type = 9 id = 10233 } # ������˹�� �׸����� �޵����˹ 
  chiefofair             = { type = 9 id = 10250 } # ���»��� ������˹ �������� 
  dormant_leaders        = { 3413 3416 3427 3455 3466 3492 3493 3494 }
  dormant_ministers      = { 10001 10045 10054 10003 10089 10047 10154 10275 10204 10188 10189 10008 10227 10211 10009 10229 10010 10247 10039 10002 10048 10005 10006 10007 10049 }

  landunit = {
    id       = { type = 25001 id = 901 }
    name     = "�ϴ��������� "
    location = 341
    division = {
      id             = { type = 25001 id = 1 }
      name           = "�������11����ʦ "
      type           = infantry
      model          = 3
    }
    division = {
      id             = { type = 25001 id = 2 }
      name           = "�������12����ʦ "
      type           = infantry
      model          = 3
    }
    division = {
      id             = { type = 25001 id = 3 }
      name           = "�������13����ʦ "
      type           = infantry
      model          = 3
    }
  }
  landunit = {
    id       = { type = 25001 id = 902 }
    name     = "����¬���Ǿ��� "
    location = 347
    division = {
      id             = { type = 25001 id = 4 }
      name           = "�������21����ʦ "
      type           = infantry
      model          = 3
    }
    division = {
      id             = { type = 25001 id = 5 }
      name           = "�������22����ʦ "
      type           = infantry
      model          = 2
    }
    division = {
      id             = { type = 25001 id = 6 }
      name           = "�������23����ʦ "
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 3
    }
  }
  landunit = {
    id       = { type = 25001 id = 903 }
    name     = "ͼ���Ǿ��� "
    location = 354
    division = {
      id             = { type = 25001 id = 7 }
      name           = "�������31����ʦ "
      type           = infantry
      model          = 3
    }
    division = {
      id             = { type = 25001 id = 8 }
      name           = "�������32����ʦ "
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 3
    }
  }
  landunit = {
    id       = { type = 25001 id = 904 }
    name     = "�ڸǶ����� "
    location = 356
    division = {
      id             = { type = 25001 id = 9 }
      name           = "�������41����ʦ "
      type           = infantry
      model          = 3
    }
    division = {
      id             = { type = 25001 id = 10 }
      name           = "�������42����ʦ "
      type           = infantry
      model          = 2
    }
    division = {
      id             = { type = 25001 id = 11 }
      name           = "�������43����ʦ "
      type           = infantry
      model          = 2
    }
  }
  landunit = {
    id       = { type = 25001 id = 905 }
    name     = "���������� "
    location = 329
    division = {
      id             = { type = 25001 id = 12 }
      name           = "�������51����ʦ "
      type           = infantry
      model          = 3
    }
    division = {
      id             = { type = 25001 id = 13 }
      name           = "�������52����ʦ "
      type           = infantry
      model          = 2
    }
  }
  landunit = {
    id       = { type = 25001 id = 906 }
    name     = "���������� "
    location = 331
    division = {
      id             = { type = 25001 id = 14 }
      name           = "�������61����ʦ "
      type           = infantry
      model          = 3
    }
    division = {
      id             = { type = 25001 id = 15 }
      name           = "�������62����ʦ "
      type           = infantry
      model          = 2
    }
  }
  landunit = {
    id       = { type = 25001 id = 907 }
    name     = "��˹�����Ǿ��� "
    location = 339
    division = {
      id             = { type = 25001 id = 16 }
      name           = "�������71����ʦ "
      type           = infantry
      model          = 3
    }
    division = {
      id             = { type = 25001 id = 17 }
      name           = "�������72����ʦ "
      type           = infantry
      model          = 2
    }
  }
  landunit = {
    id       = { type = 25001 id = 908 }
    name     = "�������Ǿ��� "
    location = 334
    division = {
      id             = { type = 25001 id = 18 }
      name           = "�������81����ʦ "
      type           = infantry
      model          = 3
    }
    division = {
      id             = { type = 25001 id = 19 }
      name           = "�������82����ʦ "
      type           = infantry
      model          = 2
    }
  }
  landunit = {
    id       = { type = 25001 id = 909 }
    name     = "Ħ������ "
    location = 957
    division = {
      id             = { type = 25001 id = 20 }
      name           = "�������91����ʦ "
      type           = infantry
      model          = 3
    }
    division = {
      id             = { type = 25001 id = 21 }
      name           = "�������92����ʦ "
      type           = infantry
      model          = 2
    }
    division = {
      id             = { type = 25001 id = 22 }
      name           = "�������93����ʦ "
      type           = infantry
      model          = 2
    }
    division = {
      id             = { type = 25001 id = 23 }
      name           = "̩������ "
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 3
    }
    division = {
      id             = { type = 25001 id = 24 }
      name           = "������ "
      type           = infantry
      model          = 2
    }
  }
  landunit = {
    id       = { type = 25001 id = 910 }
    name     = "����˹���׾��� "
    location = 340
    division = {
      id             = { type = 25001 id = 25 }
      name           = "�������101����ʦ "
      type           = infantry
      model          = 3
    }
    division = {
      id             = { type = 25001 id = 26 }
      name           = "�������102����ʦ "
      type           = infantry
      model          = 2
    }
  }
  landunit = {
    id       = { type = 25001 id = 911 }
    name     = "��������˾� "
    location = 535
    division = {
      id             = { type = 25001 id = 27 }
      name           = "��������˾� "
      type           = infantry
      model          = 2
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 25001 id = 912 }
    name     = "������˾� "
    location = 963
    division = {
      id             = { type = 25001 id = 927 }
      name           = "������˾� "
      type           = infantry
      model          = 2
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 25001 id = 913 }
    name     = "������� "
    location = 341
    division = {
      id             = { type = 25001 id = 28 }
      name           = "��1���ʦ "
      type           = cavalry
      model          = 2
    }
    division = {
      id             = { type = 25001 id = 29 }
      name           = "��1'��³����'̹��ʦ "
      type           = armor
      model          = 2
    }
  }

  navalunit = {
    id       = { type = 25001 id = 500 }
    name     = "��ս���� "
    location = 334
    base     = 334
    division = {
      id             = { type = 25001 id = 501 }
      name           = "�������� "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_sa_l
      extra2         = naval_fire_controll_l
      extra3         = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 2
    }
    division = {
      id             = { type = 25001 id = 502 }
      name           = "�������Ǻ� "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 2
    }
    division = {
      id             = { type = 25001 id = 503 }
      name           = "�׸����������˹�� "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 2
    }
    division = {
      id             = { type = 25001 id = 504 }
      name           = "��Τ�������Ͻ��� "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 2
    }
    division = {
      id             = { type = 25001 id = 505 }
      name           = "��1����֧�� "
      type           = destroyer
      model          = 1
      extra1         = naval_anti_air_s
      brigade_model1 = 2
    }
    division = {
      id             = { type = 25001 id = 506 }
      name           = "��2����֧�� "
      type           = destroyer
      model          = 0
      extra1         = naval_anti_air_s
      brigade_model1 = 2
    }
  }
  navalunit = {
    id       = { type = 25001 id = 507 }
    name     = "�������ɺ������� "
    location = 357
    base     = 357
    division = {
      id             = { type = 25001 id = 508 }
      name           = "�ŵ�˹��Ŭ��˹�� "
      type           = light_cruiser
      model          = 0
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 2
    }
    division = {
      id             = { type = 25001 id = 509 }
      name           = "�������� "
      type           = light_cruiser
      model          = 0
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 2
    }
    division = {
      id             = { type = 25001 id = 510 }
      name           = "��3����֧�� "
      type           = destroyer
      model          = 1
      extra1         = naval_anti_air_s
      brigade_model1 = 2
    }
    division = {
      id             = { type = 25001 id = 511 }
      name           = "��4����֧�� "
      type           = destroyer
      model          = 0
      extra1         = naval_fire_controll_s
      brigade_model1 = 0
    }
    division = {
      id             = { type = 25001 id = 517 }
      name           = "��5����֧�� "
      type           = destroyer
      model          = 2
      extra1         = naval_fire_controll_s
      brigade_model1 = 0
    }
    division = {
      id             = { type = 25001 id = 515 }
      name           = "�������˶�����佢 "
      type           = transport
    }
    division = {
      id             = { type = 25001 id = 516 }
      name           = "�������غ����佢 "
      type           = transport
    }
  }
  navalunit = {
    id       = { type = 25001 id = 512 }
    name     = "B���� "
    location = 346
    base     = 346
    division = {
      id             = { type = 25001 id = 513 }
      name           = "��1Ǳ֧ͧ�� "
      type           = submarine
      model          = 1
    }
  }

  airunit = { 
    id       = { type = 25001 id = 201 }
    name     = "����ţ˹�վ����� "
    location = 357
    base     = 357
    division = {
      id             = { type = 25001 id = 202 }
      name           = "��1-G-20��ը����� "
      type           = tactical_bomber
      strength       = 100
    }
    division = {
      id             = { type = 25001 id = 203 }
      name           = "��1-G-5�ػ������ "
      type           = interceptor
      model          = 2
      strength       = 30
    }
  }
  airunit = { 
    id       = { type = 25001 id = 204 }
    name     = "��Ͽ�վ����� "
    location = 346
    base     = 346
    division = {
      id             = { type = 25001 id = 205 }
      name           = "��2-G-20��ը����� "
      type           = tactical_bomber
      strength       = 50
    }
    division = {
      id             = { type = 25001 id = 206 }
      name           = "��2-G-5�ػ������ "
      type           = interceptor
      model          = 1
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 25001 id = 207 }
    name     = "�����վ����� "
    location = 346
    base     = 346
    division = {
      id             = { type = 25001 id = 208 }
      name           = "��3-G-20��ը����� "
      type           = tactical_bomber
      strength       = 50
    }
    division = {
      id             = { type = 25001 id = 209 }
      name           = "��3-G-5�ػ������ "
      type           = interceptor
      model          = 1
      strength       = 75
    }
  }
  airunit = { 
    id       = { type = 25001 id = 210 }
    name     = "���޿վ����� "
    location = 957
    base     = 957
    division = {
      id             = { type = 25001 id = 211 }
      name           = "��1-G-10֧Ԯ����� "
      type           = cas
      strength       = 30
    }
    division = {
      id             = { type = 25001 id = 212 }
      name           = "��4-G-5�ػ������ "
      type           = interceptor
      model          = 1
      strength       = 30
    }
  }
  airunit = { 
    id       = { type = 25001 id = 213 }
    name     = "����վ����� "
    location = 341
    base     = 341
    division = {
      id             = { type = 25001 id = 214 }
      name           = "��1-G-40��ը����� "
      type           = strategic_bomber
      strength       = 50
    }
    division = {
      id             = { type = 25001 id = 215 }
      name           = "��5-G-5�ػ������ "
      type           = interceptor
      model          = 1
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 25001 id = 216 }
    name     = "��������վ�ָ�Ӳ� "
    location = 357
    base     = 357
    division = {
      id             = { type = 25001 id = 217 }
      name           = "��6-G-5�ػ������ "
      type           = interceptor
      model          = 1
      strength       = 30
    }
  }
  airunit = { 
    id       = { type = 25001 id = 218 }
    name     = "������վ����� "
    location = 334
    base     = 334
    division = {
      id             = { type = 25001 id = 219 }
      name           = "��2-G-40��ը����� "
      type           = strategic_bomber
      strength       = 30
    }
    division = {
      id             = { type = 25001 id = 220 }
      name           = "��7-G-5�ػ������ "
      type           = interceptor
      model          = 2
      strength       = 50
    }
  }
  airunit = { 
    id       = { type = 25001 id = 807 }
    name     = "������� "
    location = 341
    base     = 341
    division = {
      id             = { type = 25001 id = 808 }
      name           = "�������� "
      type           = transport_plane
      strength       = 100
    }
  }
}