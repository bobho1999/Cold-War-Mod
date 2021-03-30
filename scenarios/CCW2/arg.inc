##############################
# Country definition for ARG #
##############################
province = {
  id = 667 # ����ŵ˹����˹
  anti_air = 5
}
province = {
  id = 853 # ��������
  anti_air = 2
}
province = {
  id = 858 # ���ߴ�ά�Ǻ���׼����
}

#####################
# Country main data #
#####################

country = {
  tag                = ARG
  capital            = 667 # ����ŵ˹����˹
  manpower           = 50
  tc_mod                 = 1.1
  research_mod           = 1.15
  peacetime_ic_mod       = 0.75
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 20
  transports     = 65
  escorts        = 10

  diplomacy = {
    relation = { tag = BOL value = 50 }
    relation = { tag = BRA value = -10 }
    relation = { tag = CHL value = -20 }
    relation = { tag = COL value = 10 }
    relation = { tag = ENG value = 75 }
    relation = { tag = ECU value = 10 }
    relation = { tag = GER value = 75 }
    relation = { tag = IRE value = 20 }
    relation = { tag = ITA value = 30 }
    relation = { tag = PAR value = 50 }
    relation = { tag = PRU value = 20 }
    relation = { tag = URU value = -50 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 10 }
  }
  SpyInfo                = { country = "ARG" NumberOfSpies = 1 }
  SpyInfo                = { country = "CAN" NumberOfSpies = 1 }
  SpyInfo                = { country = "BRA" NumberOfSpies = 3 }

  nationalprovinces      = { 4060 4061 4065 4066 4067 4068 4073 4074 4075 667 843 844 845 850 851 852 853 854 855 857 858 859 862 863 865 866 }
  ownedprovinces         = { 4060 4061 4065 4066 4067 4068 4073 4074 4075 667 843 844 845 850 851 852 853 854 855 857 858 859 862 863 865 }
  controlledprovinces    = { 4060 4061 4065 4066 4067 4068 4073 4074 4075 667 843 844 845 850 851 852 853 854 855 857 858 859 862 863 865 }

  techapps               = { 5050 5080 5170 5190 5180 5660 5010 1010 2280 2290 2420 2540 3550 3010 3070 3130 3410 6010 6020 6040 6050 9010 7510 8010 8020 8030 8040 78100 9710 9700 66500 66510 66540 66520 66530 5310 5020 3080 4120 2300 1020 1030 1040 2360 2550 2430 1050 1890 2800 2720 1900 1910 2810 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 8
    freedom           = 6
    free_market       = 7
    professional_army = 4
    defense_lobby     = 4
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 35001 } # ����˹�� P ��˹�� 
  headofgovernment       = { type = 9 id = 35002 } # ����˹�� P ��˹�� 
  foreignminister        = { type = 9 id = 35003 } # ����˹ ��Τ���� ����˹ 
  armamentminister       = { type = 9 id = 35004 } # �������� ��Լ 
  ministerofsecurity     = { type = 9 id = 35005 } # ���� ��˹���� 
  ministerofintelligence = { type = 9 id = 35006 } # ���� �� �� ���� 
  chiefofstaff           = { type = 9 id = 35007 } # ��Ŭ���� A �޵����˹ 
  chiefofarmy            = { type = 9 id = 35008 } # ��Ŭ���� A �޵����˹ 
  chiefofnavy            = { type = 9 id = 35009 } # ����� S ������ 
  chiefofair             = { type = 9 id = 35010 } # ������� ���޵� 
  nationalidentity       = "policy_economy_Laisser-faire"
  socialpolicy           = "policy_social_integration"
  nationalculture        = "policy_political_dignitary"

  landunit = {
    id       = { type = 12000 id = 1 }
    name     = "����͢��7�� "
    location = 667
    division = {
      id             = { type = 12000 id = 706 }
      name           = "����͢���ָ�Ӳ� "
      type           = hq
      model          = 0
      extra          = anti_air
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 12000 id = 2 }
      name           = "��3������� "
      type           = infantry
      model          = 4
      extra          = police
      brigade_model  = 3
      strength       = 30
      experience     = 55
    }
    division = {
      id             = { type = 12000 id = 3 }
      name           = "��2ɣ���� "
      type           = infantry
      model          = 4
      extra          = police
      brigade_model  = 3
      strength       = 30
      experience     = 55
    }
    division = {
      id             = { type = 12000 id = 4 }
      name           = "��1����˹�� "
      type           = infantry
      model          = 4
      extra          = police
      brigade_model  = 3
      strength       = 30
      experience     = 55
    }
  }
  landunit = {
    id       = { type = 12000 id = 6 }
    name     = "����͢��8�� "
    location = 667
    division = {
      id             = { type = 12000 id = 7 }
      name           = "��4Ħ�л�ʦ "
      type           = motorized
      model          = 4
      extra          = artillery
      brigade_model  = 3
      strength       = 30
      experience     = 55
    }
    division = {
      id             = { type = 12000 id = 8 }
      name           = "��4����ʦ "
      type           = infantry
      model          = 4
      extra          = artillery
      brigade_model  = 3
      strength       = 30
      experience     = 55
    }
  }

  navalunit = {
    id       = { type = 12000 id = 13 }
    name     = "����͢��1���� "
    location = 853
    base     = 853
    division = {
      id             = { type = 12000 id = 14 }
      name           = "ά�ؿ��ޡ��¡�÷�º� "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_sa_l
      extra2         = naval_anti_air_l
      extra3         = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
    }
    division = {
      id             = { type = 12000 id = 16 }
      name           = "���ʺ� "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_sa_l
      extra2         = naval_anti_air_l
      extra3         = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
    }
    division = {
      id             = { type = 12000 id = 18 }
      name           = "Ī���޺� "
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
      id             = { type = 12000 id = 20 }
      name           = "���ߵ�ά�Ǻ� "
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
      id             = { type = 12000 id = 22 }
      name           = "ӡ����ÿ��� "
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
      id             = { type = 12000 id = 24 }
      name           = "�ﲨ���º� "
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
      id             = { type = 12000 id = 26 }
      name           = "���ɸ��޽����� "
      type           = light_cruiser
      model          = 0
      extra1         = naval_anti_air_s
      extra2         = none
      brigade_model1 = 1
      brigade_model2 = 0
    }
    division = {
      id             = { type = 12000 id = 28 }
      name           = "������������ "
      type           = light_cruiser
      model          = 0
      extra1         = naval_anti_air_s
      extra2         = none
      brigade_model1 = 1
      brigade_model2 = 0
    }
    division = {
      id             = { type = 12000 id = 30 }
      name           = "��1���𽢱�� "
      type           = destroyer
      model          = 1
      extra1         = naval_anti_air_s
      brigade_model1 = 1
    }
    division = {
      id             = { type = 12000 id = 32 }
      name           = "��2���𽢱�� "
      type           = destroyer
      model          = 1
      extra1         = naval_anti_air_s
      brigade_model1 = 1
    }
    division = {
      id             = { type = 12000 id = 34 }
      name           = "��1Ǳͧ��� "
      type           = submarine
      model          = 1
    }
  }

  airunit = { 
    id       = { type = 12000 id = 9 }
    name     = "����͢���ն� "
    location = 667
    base     = 667
    division = {
      id             = { type = 12000 id = 10 }
      name           = "��1�ػ������ "
      type           = interceptor
      model          = 0
      strength       = 50
    }
  }
  airunit = { 
    id       = { type = 12000 id = 11 }
    name     = "�������ն� "
    location = 667
    base     = 667
    division = {
      id             = { type = 12000 id = 12 }
      name           = "��1�������ϴ�� "
      type           = naval_bomber
      model          = 5
      strength       = 50
    }
  }

  landdivision = { dormant = yes id = { type = 12000 id = 100 } name = "����͢ɳ��������ָ�Ӳ� "  type = hq model = 1 strength = 5 experience = 100 } 
}