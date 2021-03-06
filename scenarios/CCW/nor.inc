##############################
# Country definition for NOR #
##############################
province = {
  id = 107 # ��˹½
  coastalfort = 3
  anti_air = 2
}
province = { id = 109 anti_air = 1 } # ˹�����
province = {
  id = 110 # ������
  coastalfort = 3
  anti_air = 2
}
province = { id = 118 coastalfort = 2 } # ��¡��ķ
province = {
  id = 125 # �ɶ�ά��
  anti_air = 1
}
province = {
  id = 129 # �߶���
}

#####################
# Country main data #
#####################

country = {
  tag                = NOR
  capital            = 107 # ��˹½
  extra_tc           = 10
  manpower           = 102
  research_mod           = 1.2
  peacetime_ic_mod       = 0.75
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 400
  escorts        = 5

  diplomacy = {
    relation = { tag = BEL value = 100 }
    relation = { tag = DEN value = 150 }
    relation = { tag = ENG value = 90 }
    relation = { tag = FIN value = 75 }
    relation = { tag = HOL value = 100 }
    relation = { tag = LUX value = 100 }
    relation = { tag = SWE value = 150 }
    relation = { tag = USA value = 75 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 4 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 1 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 4 }
  SpyInfo                = { country = "CZE" NumberOfSpies = 1 }
  SpyInfo                = { country = "GER" NumberOfSpies = 3 }
  SpyInfo                = { country = "SPR" NumberOfSpies = 2 }
  SpyInfo                = { country = "POL" NumberOfSpies = 2 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 3 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 2 }
  SpyInfo                = { country = "DEN" NumberOfSpies = 2 }
  SpyInfo                = { country = "HOL" NumberOfSpies = 1 }

  nationalprovinces      = { 107 108 109 110 111 116 117 118 123 124 125 128 129 }
  ownedprovinces         = { 107 108 109 110 111 116 117 118 123 124 125 128 129 }
  controlledprovinces    = { 107 108 109 110 111 116 117 118 123 124 125 128 129 }

  techapps               = { 5050 5080 5170 5190 5180 5660 5010 5020 1010 2280 2290 2420 2540 3490 3550 3560 3600 3610 3010 3070 3130 3410 6010 6020 6030 6040 6050 6100 8010 8020 8030 8150 8160 8200 8390 8440 8530 7420 7510 1020 1030 1040 1050 1170 1180 1190 1270 1280 1290 1890 1900 1910 2720 2800 2810 5310 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 9
    freedom           = 7
    free_market       = 7
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 14001 } # �������� 
  headofgovernment       = { type = 9 id = 14002 } # Լ�� ���˹�ֶ� 
  foreignminister        = { type = 9 id = 14003 } # ������ ���� 
  armamentminister       = { type = 9 id = 14004 } # ������ ������ 
  ministerofsecurity     = { type = 9 id = 14005 } # �����Τ H ���� 
  ministerofintelligence = { type = 9 id = 14006 } # �������׵� ��ɪ��-·�� 
  chiefofstaff           = { type = 9 id = 14007 } # ���� ·�� 
  chiefofarmy            = { type = 9 id = 14008 } # ����˹̹ K ���� 
  chiefofnavy            = { type = 9 id = 14009 } # �ӿ˲� �� �� ���� 
  chiefofair             = { type = 9 id = 14010 } # �ӿ˲� �� �� ���� 
  nationalidentity       = "policy_economy_state-monopoly"
  socialpolicy           = "policy_social_Catholicism"
  nationalculture        = "policy_political_social-democracy"

  landunit = {
    id       = { type = 12600 id = 1 }
    name     = "Ų����I�� "
    location = 107
    division = {
      id             = { type = 12600 id = 2 }
      name           = "��1����ʦ "
      type           = motorized
      strength       = 50
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 12600 id = 11 }
    name     = "Ų����VI�� "
    location = 125
    division = {
      id             = { type = 12600 id = 12 }
      name           = "��6����ʦ "
      type           = infantry
      strength       = 50
      experience     = 40
    }
  }

  navalunit = {
    id       = { type = 12600 id = 20 }
    name     = "Ų����I���� "
    location = 107
    base     = 107
    division = {
      id             = { type = 12600 id = 21 }
      name           = "��1Ǳͧ��� "
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 12600 id = 22 }
      name           = "��2Ǳͧ��� "
      type           = submarine
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 12600 id = 25 }
    name     = "Ų����III���� "
    location = 125
    base     = 125
    division = {
      id             = { type = 12600 id = 26 }
      name           = "�޸��� "
      type           = heavy_cruiser
      model          = 0
      extra1         = naval_sa_l
      extra2         = naval_anti_air_l
      extra3         = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
    }
    division = {
      id             = { type = 12600 id = 30 }
      name           = "����˹�� "
      type           = heavy_cruiser
      model          = 0
      extra1         = naval_sa_l
      extra2         = naval_anti_air_l
      extra3         = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
    }
  }
}
