##############################
# Country definition for POL #
##############################
province = {
  id = 303 # ����
  ic = { size = 5 current_size = 2 }
  infra = { size = 1 current_size = 0.65 }
  anti_air = 2
}
province = {
  id = 305 # ����
  infra = { size = 1 current_size = 0.65 }
  landfort = 1
  anti_air = 1
}
province = {
  id = 307 # ������
  anti_air = 2
}
province = {
  id = 473 # ����˹��
}
province = {
  id = 479 # �����Ʒ�
  ic = { size = 3 current_size = 1 }
  infra = { size = 0.8 current_size = 0.65 }
  anti_air = 2
}
province = {
  id = 483 # ����
  ic = { size = 3 current_size = 1 }
  infra = { size = 0.8 current_size = 0.7 }
  anti_air = 2
}
province = {
  id = 485 # ��ɳ
  ic = { size = 12 current_size = 5 }
  infra = { size = 0.8 current_size = 0.55 }
  anti_air = 3
}
province = { id = 486 landfort = 2 } # ��ķ��
province = {
  id = 489 # ����÷ϣ��
  infra = { size = 0.8 current_size = 0.75 }
}
province = {
  id = 509 # ���߻�
  infra = { size = 0.8 current_size = 0.55 }
  anti_air = 1
}

#####################
# Country main data #
#####################

country = {
  tag                = POL
  puppet             = SOV
  control            = SOV
  capital            = 485 # ��ɳ
  dissent            = 15
  manpower           = 275
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 5000
  money          = 100

  nationalprovinces      = { 303 304 305 306 307 308 473 479 480 481 482 483 484 485 486 487 488 489 505 508 509 1400 2602 291 3111 3081 3082 3083 3156 3157 3084 3085 3158 3159 3150 3151 3154 3153 3132 3131 3155 3160 3110 3161 3149 3148 3147 3152 4090 3133 3134 3146 3143 3086 3109 3162 3574 3145 3144 3573 302 }
  ownedprovinces         = { 303 304 305 306 307 308 473 479 480 481 482 483 484 485 486 487 488 489 505 508 509 1400 2602 291 3111 3081 3082 3083 3156 3157 3084 3085 3158 3159 3150 3151 3154 3153 3132 3131 3155 3160 3110 3161 3149 3148 3147 3152 4090 3133 3134 3146 3143 3086 3109 3162 3574 3145 3144 3573 302 }
  controlledprovinces    = { 303 304 305 306 307 308 473 479 480 481 482 483 484 485 486 487 488 489 505 508 509 1400 2602 291 3111 3081 3082 3083 3156 3157 3084 3085 3158 3159 3150 3151 3154 3153 3132 3131 3155 3160 3110 3161 3149 3148 3147 3152 4090 3133 3134 3146 3143 3086 3109 3162 3574 3145 3144 3573 302 }

  techapps               = { 1010 1020 1030 1040 14010 14020 2010 2020 2030 2040 2050 2070 2170 2290 2290 2300 2300 2310 2310 2320 3010 3020 3030 3400 4010 4020 4030 4040 4120 4130 5010 5050 5080 5100 5130 5310 6300 6310 6320 6330 6340 8040 8050 9010 9020 9030 2060 2080 2160 2220 2230 4050 4060 4140 4170 4190 4250 5020 5220 5350 6570 66540 66520 66530 66510 66500 8010 8020 8030 9700 9710 9190 5170 5800 5190 5180 5660 2280 2360 2420 2540 2550 2430 2440 2560 1050 1060 1170 1180 1190 1200 1270 1290 1280 1410 1420 1890 1900 1910 1760 1770 2370 26100 26200 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 10
    freedom           = 4
    free_market       = 3
    professional_army = 3
    defense_lobby     = 8
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 13021 } # ŵ���� �Ͷ����� 
  headofgovernment       = { type = 9 id = 13022 } # ���»� ��������-Ī����˹�� 
  foreignminister        = { type = 9 id = 13023 } # ��ά�� �ҵ� 
  armamentminister       = { type = 9 id = 13086 } # ���˶� ����-��÷��˹�� 
  ministerofsecurity     = { type = 9 id = 13099 } # ����ɽ�� �����Ȼ� 
  ministerofintelligence = { type = 9 id = 13111 } # ˹̹��˹�߷� �Ų���˹ 
  chiefofstaff           = { type = 9 id = 13122 } # ���Ķ� ���� ��÷��˹�� 
  chiefofarmy            = { type = 9 id = 13127 } # ���Ķ� ���� ��÷��˹�� 
  chiefofnavy            = { type = 9 id = 13133 } # �ǵ� �����Ļ� 
  chiefofair             = { type = 9 id = 13137 } # ��˹�߷� ��Ү������ 
  dormant_ministers      = { 13055 13050 13051 13067 13080 13083 13101 13116 13124 13125 13129 13014 13016 13017 13019 13020 13043 }

  landunit = {
    id       = { type = 18600 id = 18 }
    name     = "������1���ž� "
    location = 485
    division = {
      id             = { type = 18600 id = 19 }
      name           = "��1����ʦ "
      type           = infantry
      model          = 3
    }
    division = {
      id             = { type = 18600 id = 20 }
      name           = "��2����ʦ "
      type           = infantry
      model          = 3
    }
    division = {
      id             = { type = 18600 id = 21 }
      name           = "��3����ʦ "
      type           = infantry
      model          = 3
    }
    division = {
      id             = { type = 18600 id = 22 }
      name           = "��4����ʦ "
      type           = infantry
      model          = 3
    }
    division = {
      id             = { type = 18600 id = 23 }
      name           = "��5����ʦ "
      type           = infantry
      model          = 3
    }
    division = {
      id             = { type = 18600 id = 58 }
      name           = "ŵ����޵������ "
      type           = cavalry
      model          = 2
    }
  }
  landunit = {
    id       = { type = 18600 id = 24 }
    name     = "������2���ž� "
    location = 479
    division = {
      id             = { type = 18600 id = 25 }
      name           = "��6����ʦ "
      type           = infantry
      model          = 3
    }
    division = {
      id             = { type = 18600 id = 26 }
      name           = "��7����ʦ "
      type           = infantry
      model          = 3
    }
    division = {
      id             = { type = 18600 id = 27 }
      name           = "��8����ʦ "
      type           = infantry
      model          = 3
    }
    division = {
      id             = { type = 18600 id = 28 }
      name           = "��9����ʦ "
      type           = infantry
      model          = 3
    }
    division = {
      id             = { type = 18600 id = 57 }
      name           = "�����Ʒ������ "
      type           = cavalry
      model          = 2
    }
  }
  landunit = {
    id       = { type = 18600 id = 29 }
    name     = "������3���ž� "
    location = 303
    division = {
      id             = { type = 18600 id = 30 }
      name           = "��10����ʦ "
      type           = infantry
      model          = 3
    }
    division = {
      id             = { type = 18600 id = 31 }
      name           = "��11����ʦ "
      type           = infantry
      model          = 3
    }
    division = {
      id             = { type = 18600 id = 32 }
      name           = "��12����ʦ "
      type           = infantry
      model          = 3
    }
    division = {
      id             = { type = 18600 id = 33 }
      name           = "��13����ʦ "
      type           = infantry
      model          = 3
    }
    division = {
      id             = { type = 18600 id = 56 }
      name           = "�����߽������ "
      type           = cavalry
      model          = 2
    }
  }

  navalunit = {
    id       = { type = 30013 id = 114 }
    name     = "�������� "
    location = 303
    base     = 303
    division = {
      id             = { type = 30013 id = 115 }
      name           = "��1����֧�� "
      type           = destroyer
      model          = 2
      strength       = 50
      max_strength   = 50
    }
    division = {
      id             = { type = 30013 id = 117 }
      name           = "��1Ǳ֧ͧ�� "
      type           = submarine
      model          = 2
    }
  }

  airunit = { 
    id       = { type = 18600 id = 59 }
    name     = "������1�վ����� "
    location = 485
    base     = 485
    division = {
      id             = { type = 18600 id = 60 }
      name           = "��1�ػ������ "
      type           = interceptor
      model          = 1
    }
    division = {
      id             = { type = 18600 id = 62 }
      name           = "��1ս����ը����� "
      type           = tactical_bomber
      model          = 1
    }
  }
}