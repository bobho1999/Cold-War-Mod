##############################
# Country definition for ROM #
##############################
province = {
  id = 423 # ��˹̹��
  ic = { size = 4 current_size = 2 }
  infra = { size = 0.8 current_size = 0.7 }
  anti_air = 4
}
province = {
  id = 424 # ������˹��
  ic = { size = 9 current_size = 6 }
  infra = { size = 0.8 current_size = 0.75 }
  anti_air = 5
}
province = {
  id = 425 # Ƥ��ʲ��
  ic = 1
  infra = { size = 0.8 current_size = 0.7 }
}
province = {
  id = 426 # ����Լ��
  ic = 1
  infra = { size = 0.6 current_size = 0.5 }
}
province = {
  id = 428 # ��Ү�����������
  infra = { size = 0.8 current_size = 0.6 }
}
province = {
  id = 431 # ����Үʲ��
  ic = { size = 8 current_size = 5 }
  infra = { size = 0.8 current_size = 0.65 }
  anti_air = 9
}

#####################
# Country main data #
#####################

country = {
  tag                = ROM
  puppet             = SOV
  control            = SOV
  capital            = 424 # ������˹��
  dissent            = 10
  manpower           = 150
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 100

  diplomacy = {
    relation = { tag = BUL value = 100 access = yes }
    relation = { tag = ENG value = 50 }
    relation = { tag = FRA value = 50 }
    relation = { tag = GRE value = 100 }
    relation = { tag = HUN value = -50 }
    relation = { tag = TUR value = 100 }
    relation = { tag = YUG value = 100 }
    relation = { tag = SOV value = 150 }
  }

  nationalprovinces      = { 230 3241 3242 3243 3244 3245 3246 3247 3248 3249 3250 3251 3252 3253 3254 3255 3256 3257 3258 3259 3260 3261 3575 4088 424 425 426 427 428 429 430 431 432 433 434 435 436 495 496 498 3216 3217 3219 233 232 231 3407 423 3416 3569 3570 3571 }
  ownedprovinces         = { 3241 3242 3243 3244 3245 3246 3247 3248 3249 3250 3251 3252 3253 3254 3255 3256 3259 3260 4088 423 424 425 426 427 428 429 430 431 432 433 436 495 496 498 }
  controlledprovinces    = { 3241 3242 3243 3244 3245 3246 3247 3248 3249 3250 3251 3252 3253 3254 3255 3256 3259 3260 4088 423 424 425 426 427 428 429 430 431 432 433 436 495 496 498 }

  techapps               = { 1010 1020 1030 1040 14000 14010 14020 2010 2020 2030 2040 2050 2070 2170 2290 2290 2300 2300 2310 2310 2320 3010 3020 3030 3400 4010 4020 4030 4040 4120 4130 5010 5050 5080 5100 5130 5310 6300 6310 6320 6330 6340 8040 8050 9010 9020 9030 2060 2080 2160 2220 2230 4050 4060 4140 4170 4190 4250 5020 5220 5350 6570 66540 66520 66530 66510 66500 8010 8020 8030 9700 9710 9190 5170 5800 5190 5180 5660 2280 2360 2420 2540 2550 2430 2440 2560 1050 1060 1170 1180 1190 1200 1270 1290 1280 1410 1420 1890 1900 1910 1760 1770 2370 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 10
    freedom           = 3
    free_market       = 2
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 22037 } # �׹���һ�� 
  headofgovernment       = { type = 9 id = 22051 } # �˵�³ ������ 
  foreignminister        = { type = 9 id = 22080 } # ��¶��� ������˹�� 
  armamentminister       = { type = 9 id = 22098 } # ������ ¬�� 
  ministerofsecurity     = { type = 9 id = 22112 } # ̩�¹��� �ܰ¶���˹�� 
  ministerofintelligence = { type = 9 id = 22121 } # �������� ���ά�� 
  chiefofstaff           = { type = 9 id = 22131 } # �׹����� ��˹���� 
  chiefofarmy            = { type = 9 id = 22144 } # ���װ� ��ʲ�� 
  chiefofnavy            = { type = 9 id = 22153 } # ��¶��� ������˹�� 
  chiefofair             = { type = 9 id = 22161 } # ����ŵ���� Լ��˹�� 
  nationalidentity       = "policy_economy_Stalinism-planned"
  socialpolicy           = "policy_social_collectivism"
  nationalculture        = "policy_political_stalinist"
  dormant_ministers      = { 22053 22001 22031 22032 22039 22048 22049 22053 22054 22075 22076 22077 22082 22085 22093 22094 22097 22105 22106 22111 22118 22119 22120 22127 22129 22132 22133 22134 22139 22142 22145 22158 }

  landunit = {
    id       = { type = 20600 id = 1 }
    name     = "�������ǵ�1�� "
    location = 417
    division = {
      id             = { type = 20600 id = 2 }
      name           = "��1����ʦ "
      type           = infantry
      model          = 3
      strength       = 100
      experience     = 10
    }
    division = {
      id             = { type = 20600 id = 3 }
      name           = "��2����ʦ "
      type           = infantry
      model          = 3
      strength       = 100
    }
    division = {
      id             = { type = 20600 id = 4 }
      name           = "��3����ʦ "
      type           = infantry
      model          = 3
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 20600 id = 5 }
    name     = "�������ǵ�2�� "
    location = 422
    division = {
      id             = { type = 20600 id = 6 }
      name           = "��4����ʦ "
      type           = infantry
      model          = 3
      strength       = 100
    }
    division = {
      id             = { type = 20600 id = 7 }
      name           = "��5����ʦ "
      type           = infantry
      model          = 3
      strength       = 100
    }
    division = {
      id             = { type = 20600 id = 8 }
      name           = "��6����ʦ "
      type           = infantry
      model          = 3
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 20600 id = 9 }
      name           = "��7����ʦ "
      type           = infantry
      model          = 3
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 20600 id = 10 }
    name     = "�������ǵ�3�� "
    location = 424
    division = {
      id             = { type = 20600 id = 11 }
      name           = "��8����ʦ "
      type           = infantry
      model          = 3
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 20600 id = 12 }
      name           = "��9����ʦ "
      type           = infantry
      model          = 3
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 20600 id = 13 }
      name           = "��10����ʦ "
      type           = infantry
      model          = 3
      strength       = 100
    }
  }

  navalunit = {
    id       = { type = 19002 id = 27 }
    name     = "�������Ǻ��� "
    location = 423
    base     = 423
    division = {
      id             = { type = 19002 id = 28 }
      name           = "�ѵ��ϵ¹���֧�� "
      type           = destroyer
      model          = 0
      strength       = 7
      max_strength   = 70
    }
    division = {
      id             = { type = 19002 id = 29 }
      name           = "����֧�� "
      type           = submarine
      model          = 1
      strength       = 8
      max_strength   = 80
    }
  }

  airunit = { 
    id       = { type = 20600 id = 42 }
    name     = "�������ǿվ���1���� "
    location = 424
    base     = 424
    division = {
      id             = { type = 20600 id = 43 }
      name           = "��1�ػ������ "
      type           = interceptor
      model          = 1
      strength       = 50
    }
    division = {
      id             = { type = 20600 id = 44 }
      name           = "��1ս����ը����� "
      type           = tactical_bomber
      model          = 1
      strength       = 10
    }
  }
}