##############################
# Country definition for DEN #
##############################
province = {
  id = 92 # �¶���˹
}
province = { id = 292 anti_air = 1 } # �¶���
province = {
  id = 294 # �籾����
  anti_air = 2
}
province = {
  id = 3115 # ��˹��Լ
}

#####################
# Country main data #
#####################

country = {
  tag                = DEN
  regular_id         = GER
  capital            = 294 # �籾����
  manpower           = 80
  research_mod           = 1.15
  peacetime_ic_mod       = 0.75
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 60
  escorts        = 10

  diplomacy = {
    relation = { tag = BEL value = 100 }
    relation = { tag = ENG value = 100 }
    relation = { tag = FIN value = 75 }
    relation = { tag = GER value = 25 }
    relation = { tag = HOL value = 100 }
    relation = { tag = LUX value = 100 }
    relation = { tag = NOR value = 150 }
    relation = { tag = PER value = 50 }
    relation = { tag = SWE value = 75 }
    relation = { tag = USA value = 75 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 2 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 1 }
  SpyInfo                = { country = "POL" NumberOfSpies = 1 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 2 }
  SpyInfo                = { country = "NOR" NumberOfSpies = 2 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 1 }
  SpyInfo                = { country = "GER" NumberOfSpies = 3 }
  SpyInfo                = { country = "HOL" NumberOfSpies = 1 }
  SpyInfo                = { country = "USA" NumberOfSpies = 1 }

  nationalprovinces      = { 292 293 294 295 3001 3113 3114 3115 3116 800 91 92 3071 }
  ownedprovinces         = { 292 293 294 295 3001 3113 3114 3115 3116 800 91 92 }
  controlledprovinces    = { 292 293 294 295 3001 3113 3114 3115 3116 800 91 92 }

  techapps               = { 5050 5080 5170 5190 5110 5180 5660 5670 5680 5310 5010 5020 5470 5480 1010 3490 3550 3010 3070 3410 6010 6020 6030 6040 6050 6100 8010 8020 8030 8150 8160 8200 8390 8440 8530 7430 7510 2290 2280 2300 2540 2420 2550 2560 2440 2430 2310 1020 1030 1040 1050 1170 1180 1190 1200 1890 1900 1910 2810 2800 2720 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 10
    freedom           = 8
    free_market       = 6
    professional_army = 10
    defense_lobby     = 1
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 16001 } # ����˹�ٰ� ʮ�� 
  headofgovernment       = { type = 9 id = 16002 } # ���߶� ˹���� 
  foreignminister        = { type = 9 id = 16003 } # �˵� �ɿ� 
  armamentminister       = { type = 9 id = 16004 } # ������ ����ɭ 
  ministerofsecurity     = { type = 9 id = 16005 } # ���� ����˹�ٰ� ʩ̩��Ŀ� 
  ministerofintelligence = { type = 9 id = 16006 } # ����� ÷�� 
  chiefofstaff           = { type = 9 id = 16007 } # ���� W ����¶� 
  chiefofarmy            = { type = 9 id = 16008 } # ����� ά�� 
  chiefofnavy            = { type = 9 id = 16009 } # �Ƕ��� ��ϣ��� 
  chiefofair             = { type = 9 id = 16010 } # K W ������ 
  nationalidentity       = "policy_economy_state-monopoly"
  socialpolicy           = "policy_social_Catholicism"
  nationalculture        = "policy_political_social-democracy"

  landunit = {
    id       = { type = 27000 id = 40 }
    name     = "�����������I�� "
    location = 92
    division = {
      id             = { type = 27000 id = 41 }
      name           = "��1����ʦ "
      type           = motorized
      model          = 0
      extra          = artillery
      strength       = 15
    }
    division = {
      id             = { type = 27000 id = 42 }
      name           = "��1����ʦ "
      type           = motorized
      model          = 0
      extra          = artillery
      strength       = 15
    }
  }

  navalunit = {
    id       = { type = 27000 id = 44 }
    name     = "���󺣾���I���� "
    location = 294
    base     = 294
    division = {
      id             = { type = 27000 id = 45 }
      name           = "���˹���ȶ��� "
      type           = heavy_cruiser
      model          = 0
      extra1         = naval_sa_l
      extra2         = naval_anti_air_l
      extra3         = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division = {
      id             = { type = 27000 id = 46 }
      name           = "Ƥ�¶���˹����ķ�� "
      type           = heavy_cruiser
      model          = 0
      extra1         = naval_sa_l
      extra2         = naval_anti_air_l
      extra3         = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division = {
      id             = { type = 27000 id = 47 }
      name           = "��1Ǳͧ��� "
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 27000 id = 48 }
      name           = "��2Ǳͧ��� "
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 27000 id = 49 }
      name           = "��1���佢��� "
      type           = transport
      model          = 0
    }
  }
}