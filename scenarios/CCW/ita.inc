##############################
# Country definition for ITA #
##############################
province = {
  id = 368 # ������
  landfort = 5
  anti_air = 3
}
province = { id = 369 anti_air = 3 } # ¬��
province = {
  id = 370 # ����
  anti_air = 3
}
province = {
  id = 378 # ����˹
  anti_air = 2
}
province = { id = 512 anti_air = 1 } # ��������
province = { id = 513 anti_air = 1 } # ��������
province = {
  id = 515 # ��������
}
province = {
  id = 519 # ����
  anti_air = 1
}
province = {
  id = 521 # �ǲ���˹
}
province = {
  id = 523 # ������
  anti_air = 1
}
province = {
  id = 525 # ����Ī
  anti_air = 2
}
province = { id = 531 landfort = 5 anti_air = 3 } # ����
province = {
  id = 534 # ��������
  anti_air = 1
  supplypool = 500
  oilpool = 100
}
province = {
  id = 1056 # Ħ�ӵ�ɳ
  supplypool = 500
  oilpool = 100
}
province = { id = 3193 landfort = 5 } # ���ڰ�

#####################
# Country main data #
#####################

country = {
  tag                = ITA
  capital            = 519 # ����
  manpower           = 710
  tc_mod                 = 1.05
  research_mod           = 0.9
  peacetime_ic_mod       = 0.75
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 50
  transports     = 500
  escorts        = 300

  diplomacy = {
    relation = { tag = AFG value = 50 }
    relation = {
      tag        = ALB
      value      = 10
      guaranteed = { year = 1934 month = march day = 17 }
    }
    relation = { tag = ARG value = 30 }
    relation = { tag = AST value = 1 }
    relation = {
      tag        = AUS
      value      = 125
      guaranteed = { year = 1934 month = march day = 17 }
    }
    relation = { tag = BEL value = -5 }
    relation = { tag = BHU value = 1 }
    relation = { tag = BUL value = 150 }
    relation = { tag = CAN value = 1 }
    relation = { tag = CHL value = 30 }
    relation = { tag = CZE value = 15 }
    relation = { tag = ENG value = -50 }
    relation = { tag = FIN value = 50 }
    relation = { tag = FRA value = 50 }
    relation = { tag = GER value = 50 }
    relation = {
      tag        = GRE
      value      = -35
      guaranteed = { year = 1934 month = march day = 17 }
    }
    relation = { tag = HOL value = -20 }
    relation = {
      tag        = HUN
      value      = 125
      guaranteed = { year = 1934 month = march day = 17 }
    }
    relation = { tag = IRE value = 20 }
    relation = { tag = IRQ value = 25 }
    relation = { tag = NEP value = 1 }
    relation = { tag = NZL value = 1 }
    relation = { tag = OMN value = 50 }
    relation = { tag = POR value = 65 }
    relation = {
      tag        = ROM
      value      = 50
      guaranteed = { year = 1934 month = march day = 17 }
    }
    relation = { tag = SAF value = 1 }
    relation = { tag = SAU value = -25 }
    relation = {
      tag        = SCH
      value      = 1
      guaranteed = { year = 1935 month = may day = 16 }
    }
    relation = { tag = SPR value = -50 }
    relation = {
      tag        = TUR
      value      = 1
      guaranteed = { year = 1934 month = march day = 17 }
    }
    relation = { tag = YEM value = 50 }
    relation = { tag = YUG value = 75 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 4 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 2 }
  SpyInfo                = { country = "CZE" NumberOfSpies = 2 }
  SpyInfo                = { country = "AUS" NumberOfSpies = 3 }
  SpyInfo                = { country = "SPR" NumberOfSpies = 3 }
  SpyInfo                = { country = "POL" NumberOfSpies = 2 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 1 }
  SpyInfo                = { country = "NOR" NumberOfSpies = 1 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 1 }
  SpyInfo                = { country = "YUG" NumberOfSpies = 4 }
  SpyInfo                = { country = "HUN" NumberOfSpies = 2 }
  SpyInfo                = { country = "BUL" NumberOfSpies = 2 }
  SpyInfo                = { country = "BEL" NumberOfSpies = 1 }
  SpyInfo                = { country = "DEN" NumberOfSpies = 1 }
  SpyInfo                = { country = "HOL" NumberOfSpies = 1 }
  SpyInfo                = { country = "ARG" NumberOfSpies = 3 }
  SpyInfo                = { country = "USA" NumberOfSpies = 3 }
  SpyInfo                = { country = "ALB" NumberOfSpies = 2 }
  SpyInfo                = { country = "GRE" NumberOfSpies = 1 }
  SpyInfo                = { country = "JAP" NumberOfSpies = 1 }
  SpyInfo                = { country = "ROM" NumberOfSpies = 1 }
  SpyInfo                = { country = "TUR" NumberOfSpies = 4 }
  SpyInfo                = { country = "POR" NumberOfSpies = 1 }
  SpyInfo                = { country = "GER" NumberOfSpies = 3 }

  nationalprovinces      = { 1034 1055 1056 1058 1896 1897 1899 3193 3194 3195 3196 3197 3198 3199 3203 3204 3205 3206 3207 3208 3209 3226 3228 3230 3352 3576 368 369 370 371 378 379 4080 4083 512 513 514 515 516 517 518 519 520 521 522 523 524 525 526 531 534 3200 }
  ownedprovinces         = { 1034 1055 1056 1058 1896 1897 1899 3193 3194 3195 3196 3197 3198 3199 3203 3204 3205 3206 3207 3208 3209 3226 3228 3230 3352 3576 368 369 370 371 378 379 4080 4083 512 513 514 515 516 517 518 519 520 521 522 523 524 525 526 531 534 }
  controlledprovinces    = { 1034 1055 1056 1058 1896 1897 1899 3193 3194 3195 3196 3197 3198 3199 3203 3204 3205 3206 3207 3208 3209 3226 3228 3230 3352 3576 368 369 370 371 378 379 4080 4083 512 513 514 515 516 517 518 519 520 521 522 523 524 525 526 531 534 }

  techapps               = { 5050 5080 5170 5190 5110 5180 5660 5670 5680 5310 5010 5020 1010 1410 2280 2290 2610 2300 2420 2540 2550 2010 2020 3490 3550 3560 3010 3020 3070 3080 3130 3140 3250 3260 3190 3200 3410 3420 3820 3760 6010 6020 6040 6050 4120 4010 8010 8020 8030 8040 8150 8160 8170 8200 8390 8400 8530 8540 8600 9010 9020 9030 7410 7510 66500 66540 66510 66520 66530 6060 6070 6080 5800 2360 2370 2310 2560 2570 2030 2040 2430 2440 2450 26100 26200 1020 1030 1040 1050 1060 1170 1190 1180 1200 1270 1280 1290 1300 1310 1760 1770 1890 1900 1910 1920 2810 2820 2800 2720 1540 1550 1420 1430 1440 5410 5220 }
  blueprints             = { 6550 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 8
    political_left    = 6
    freedom           = 5
    free_market       = 7
    professional_army = 10
    defense_lobby     = 7
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 3001 } # ά����� ����Ŭ���� ���� 
  headofgovernment       = { type = 9 id = 3002 }
  foreignminister        = { type = 9 id = 3003 } # ���� �������� ����ŵ 
  armamentminister       = { type = 9 id = 3004 }
  ministerofsecurity     = { type = 9 id = 3005 } # ���� ��������-��� 
  ministerofintelligence = { type = 9 id = 3006 } # ������ ��÷ 
  chiefofstaff           = { type = 9 id = 3007 } # ������˹�� ��������� 
  chiefofarmy            = { type = 9 id = 3008 } # �������� �������� 
  chiefofnavy            = { type = 9 id = 3009 } # ��÷��� ���������� 
  chiefofair             = { type = 9 id = 3010 } # ������ ���� 
  nationalidentity       = "policy_economy_state-monopoly"
  socialpolicy           = "policy_social_nazi"
  nationalculture        = "policy_political_fascist"

  landunit = {
    id       = { type = 23500 id = 1 }
    name     = "�������I�� "
    location = 531
    leader   = 6054
    division = {
      id             = { type = 23500 id = 3 }
      name           = "��22'������˹'�Ա�ʦ "
      type           = motorized
      extra          = artillery
      brigade_model  = 2
      strength       = 70
      experience     = 40
    }
  }
}
