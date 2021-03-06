##############################
# Country definition for SIA #
##############################
province = {
  id = 1343 # ����
}
province = {
  id = 1348 # �ο�������
}

#####################
# Country main data #
#####################

country = {
  tag                = SIA
  capital            = 1343 # ����
  dissent            = 20
  manpower           = 200
  peacetime_ic_mod       = 0.8
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 1000
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 10
  escorts        = 2

  diplomacy = {
    relation = { tag = ENG value = 70 }
    relation = { tag = FRA value = -100 }
  }
  SpyInfo                = { country = "SIA" NumberOfSpies = 10 }

  nationalprovinces      = { 1303 1330 1331 1339 1341 1342 1343 1344 1345 1347 1348 3722 3723 3724 3725 3726 3727 3728 3729 3730 3731 3732 3733 3734 3735 }
  ownedprovinces         = { 1345 1343 1342 1331 1330 1341 1344 1303 1347 1348 3729 3730 3728 3727 3726 3724 3725 3723 3731 3722 3732 3733 3734 3735 }
  controlledprovinces    = { 1345 1343 1342 1331 1330 1341 1344 1303 1347 1348 3729 3730 3728 3727 3726 3724 3725 3723 3731 3722 3732 3733 3734 3735 }

  techapps               = { 1010 1020 1030 1040 5050 7810 5310 5010 5180 6500 6510 6530 6590 6600 6610 6680 6620 6700 6630 1170 1890 2280 8010 8020 8390 78100 2290 2540 2420 3070 3010 4120 4010 66500 66510 66520 66530 66540 9700 9710 9010 1050 2720 1900 2800 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 5
    freedom           = 3
    free_market       = 4
    professional_army = 2
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 62032 }
  headofgovernment       = { type = 9 id = 62037 } # ���� ��Ү�� 
  foreignminister        = { type = 9 id = 62048 } # ���� ��Ү�� 
  armamentminister       = { type = 9 id = 62064 } # ���� ��Ү�� 
  ministerofsecurity     = { type = 9 id = 62078 } # ���� ��Ү�� 
  ministerofintelligence = { type = 9 id = 62088 } # ��Ү �������ο�߷ 
  chiefofstaff           = { type = 9 id = 62093 } # �� â���� ���ɵ�Լ�¹�����ɳ 
  chiefofarmy            = { type = 9 id = 62099 } # ��ͽ ���������� 
  chiefofnavy            = { type = 9 id = 62104 } # ��Ү �Ȳ������ 
  chiefofair             = { type = 9 id = 62109 } # ��Ү ����Ȼ�Ͽ� 
  nationalidentity       = "policy_economy_colonial"
  socialpolicy           = "policy_social_Buddhism"
  nationalculture        = "policy_political_regality"
  dormant_leaders        = { 62031 62042 100003 100009 100013 100024 100033 100042 100050 }

  landunit = {
    id       = { type = 11744 id = 1 }
    name     = "�ʼ�̩��½�� "
    location = 1343
    division = {
      id             = { type = 11744 id = 2 }
      name           = "��1����ʦ "
      type           = infantry
      model          = 3
      extra          = anti_tank
      brigade_model  = 1
      strength       = 90
    }
    division = {
      id             = { type = 11744 id = 3 }
      name           = "��2����ʦ "
      type           = infantry
      model          = 3
      strength       = 80
    }
    division = {
      id             = { type = 11744 id = 4 }
      name           = "��3����ʦ "
      type           = militia
      model          = 3
      strength       = 80
    }
  }

  navalunit = {
    id       = { type = 11744 id = 15 }
    name     = "�ʼ�̩������ "
    location = 1343
    base     = 1343
    division = {
      id             = { type = 11744 id = 16 }
      name           = "�����Ү�� "
      type           = light_cruiser
      model          = 0
      extra1         = naval_anti_air_s
      brigade_model1 = 2
    }
    division = {
      id             = { type = 11744 id = 18 }
      name           = "���ͺ� "
      type           = destroyer
      model          = 0
      extra1         = naval_anti_air_s
      brigade_model1 = 2
    }
    division = {
      id             = { type = 11744 id = 17 }
      name           = "��ɳľ�� "
      type           = submarine
      model          = 0
    }
  }
}
