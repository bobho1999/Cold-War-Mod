##############################
# Country definition for CHL #
##############################
province = {
  id = 840 # ʥ���Ǹ磨������
  anti_air = 2
}
province = {
  id = 856 # ���ظ�
}

#####################
# Country main data #
#####################

country = {
  tag                = CHL
  capital            = 840 # ʥ���Ǹ磨������
  manpower           = 15
  research_mod           = 1.1
  peacetime_ic_mod       = 0.75
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 20
  transports     = 40
  escorts        = 6

  diplomacy = {
    relation = { tag = ARG value = -20 }
    relation = { tag = BOL value = -50 }
    relation = { tag = BRA value = 10 }
    relation = { tag = COL value = 15 }
    relation = { tag = ECU value = 20 }
    relation = { tag = GER value = 50 }
    relation = { tag = ITA value = 30 }
    relation = { tag = JAP value = 20 }
    relation = { tag = PAR value = 35 }
    relation = { tag = PRU value = -25 }
    relation = { tag = URU value = 20 }
    relation = { tag = USA value = 100 }
    relation = { tag = VEN value = 20 }
  }

  nationalprovinces      = { 3959 4070 839 840 841 842 856 860 861 864 }
  ownedprovinces         = { 3959 4070 839 840 841 842 856 860 861 864 }
  controlledprovinces    = { 3959 4070 839 840 841 842 856 860 861 864 }

  techapps               = { 5050 5080 5170 5190 5180 5660 5010 1010 2280 2290 3490 3550 3010 3070 3410 6010 6020 6030 6040 6050 6200 8010 8020 8030 8150 8160 8200 8390 8440 8530 7430 7510 1020 1030 1040 1050 1170 1180 1190 1890 1900 2800 2720 2300 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    freedom           = 7
    free_market       = 8
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 44001 } # ��ͼ�� ����ɽ���� ������ 
  headofgovernment       = { type = 9 id = 44002 } # ��˹���� ��˹ ʥ ������ 
  foreignminister        = { type = 9 id = 44003 } # �׸�� ��³��� �������� 
  armamentminister       = { type = 9 id = 44004 } # ���»��� ϣ���� 
  ministerofsecurity     = { type = 9 id = 44005 } # ��ͼ�� ����ɽ���� ������ 
  ministerofintelligence = { type = 9 id = 44006 } # ������ ������ ƽ�� 
  chiefofstaff           = { type = 9 id = 44007 } # C.J. �� �� Ī�� 
  chiefofarmy            = { type = 9 id = 44008 } # E. ŵ���� ����˹ 
  chiefofnavy            = { type = 9 id = 44009 } # C.J. �� �� Ī�� 
  chiefofair             = { type = 9 id = 44010 } # ����� ��ϣ�� �ʲ��� 
  nationalidentity       = "policy_economy_natural-Capitalism"
  socialpolicy           = "policy_social_integration"
  nationalculture        = "policy_political_social-democracy"

  landunit = {
    id       = { type = 12500 id = 1 }
    name     = "����½����I�� "
    location = 840
    division = {
      id             = { type = 12500 id = 2 }
      name           = "��1����ʦ "
      type           = motorized
      model          = 0
      extra          = artillery
      strength       = 100
    }
    division = {
      id             = { type = 12500 id = 3 }
      name           = "��2����ʦ "
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 12500 id = 4 }
      name           = "��1ɽ��ʦ "
      type           = bergsjaeger
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 12500 id = 5 }
      name           = "��1���ʦ "
      type           = cavalry
      model          = 0
      strength       = 100
    }
  }

  navalunit = {
    id       = { type = 12500 id = 6 }
    name     = "������I���� "
    location = 840
    base     = 840
    division = {
      id             = { type = 12500 id = 7 }
      name           = "��1���𽢱�� "
      type           = destroyer
      model          = 1
      extra1         = naval_anti_air_s
      brigade_model1 = 0
    }
    division = {
      id             = { type = 12500 id = 9 }
      name           = "�������� "
      type           = battleship
      model          = 0
      extra1         = naval_sa_l
      extra2         = naval_fire_controll_l
      extra3         = naval_anti_air_l
      extra4         = none
      extra5         = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
      brigade_model4 = 0
      brigade_model5 = 0
    }
    division = {
      id             = { type = 12500 id = 14 }
      name           = "������˹�� "
      type           = heavy_cruiser
      model          = 0
      extra1         = naval_sa_l
      extra2         = naval_fire_controll_l
      extra3         = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division = {
      id             = { type = 12500 id = 10 }
      name           = "�������º� "
      type           = light_cruiser
      model          = 0
      extra1         = naval_anti_air_s
      extra2         = naval_fire_controll_s
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division = {
      id             = { type = 12500 id = 11 }
      name           = "���·�˺� "
      type           = light_cruiser
      model          = 0
      extra1         = naval_anti_air_s
      extra2         = naval_fire_controll_s
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division = {
      id             = { type = 12500 id = 12 }
      name           = "��1Ǳͧ��� "
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 12500 id = 13 }
      name           = "��2Ǳͧ��� "
      type           = submarine
      model          = 1
    }
  }
}