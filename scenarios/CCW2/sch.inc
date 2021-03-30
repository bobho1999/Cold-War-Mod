##############################
# Country definition for SCH #
##############################
province = { id = 372 landfort = 4 anti_air = 3 } # ��������
province = { id = 530 landfort = 5 anti_air = 3 } # ������
province = {
  id = 532 # ������
  landfort = 5
  anti_air = 5
}
province = { id = 533 landfort = 5 anti_air = 3 } # ������
province = { id = 3192 landfort = 5 } # ������

#####################
# Country main data #
#####################

country = {
  tag                = SCH
  capital            = 532 # ������
  extra_tc           = 5
  manpower           = 135
  tc_mod                 = 1.1
  research_mod           = 1.2
  peacetime_ic_mod       = 0.75
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 25

  diplomacy = {
    relation = { tag = ENG value = 50 }
    relation = { tag = FRA value = 1 }
    relation = { tag = GER value = 50 }
    relation = { tag = AUS value = 50 }
    relation = { tag = ITA value = 1 }
    relation = { tag = SOV value = 1 }
    relation = { tag = USA value = 1 }
  }

  nationalprovinces      = { 3192 372 530 532 533 }
  ownedprovinces         = { 3192 372 530 532 533 }
  controlledprovinces    = { 3192 372 530 532 533 }

  techapps               = { 5050 5080 5170 5190 5110 5180 5660 5670 5680 5310 5010 5020 1010 2280 2290 2610 2420 2540 2550 6010 6020 6030 6040 6050 6200 9010 7420 7510 1050 1040 1030 1020 1270 1280 1290 1300 1310 1890 1900 1910 1920 2820 2810 2800 2720 2300 2310 2560 2430 2440 2450 2570 2010 2020 2360 2370 5800 5410 }
  blueprints             = { 6480 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 2
    freedom           = 7
    free_market       = 9
    professional_army = 10
    defense_lobby     = 8
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 17001 } # �������� ���� 
  headofgovernment       = { type = 9 id = 17002 } # �������� ���� 
  foreignminister        = { type = 9 id = 17003 } # ������ Ī�� 
  armamentminister       = { type = 9 id = 17004 } # �������� ���� 
  ministerofsecurity     = { type = 9 id = 17005 } # Լ����˹ ���� 
  ministerofintelligence = { type = 9 id = 17006 } # �޽� ���� 
  chiefofstaff           = { type = 9 id = 17007 } # �Ÿ��� I ������ 
  chiefofarmy            = { type = 9 id = 17008 } # Լ�� �¹�˹�� ���ض� 
  chiefofnavy            = { type = 9 id = 17009 } # ���� �� ��������� 
  chiefofair             = { type = 9 id = 17010 } # ��˹�� �ȵ� 
  nationalidentity       = "policy_economy_monopoly"
  socialpolicy           = "policy_social_Catholicism"
  nationalculture        = "policy_political_republicanism"

  landunit = {
    id       = { type = 30600 id = 1 }
    name     = "��ʿ��I�� "
    location = 532
    division = {
      id             = { type = 30600 id = 2 }
      name           = "��1�Ա�ʦ "
      type           = motorized
      extra          = artillery
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 30600 id = 3 }
    name     = "��ʿ��II�� "
    location = 533
    division = {
      id             = { type = 30600 id = 4 }
      name           = "��2����ʦ "
      type           = infantry
      extra          = artillery
      strength       = 100
    }
    division = {
      id             = { type = 30600 id = 5 }
      name           = "��1ɽ��ʦ "
      type           = bergsjaeger
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 30600 id = 6 }
    name     = "��ʿ��III�� "
    location = 530
    division = {
      id             = { type = 30600 id = 7 }
      name           = "��3����ʦ "
      type           = infantry
      extra          = anti_tank
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 30600 id = 8 }
      name           = "��4����ʦ "
      type           = infantry
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 30600 id = 9 }
      name           = "��2Ħ�л�ɽ��ʦ "
      type           = bergsjaeger
      strength       = 30
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 30600 id = 10 }
    name     = "��ʿ��IV�� "
    location = 372
    division = {
      id             = { type = 30600 id = 11 }
      name           = "��5����ʦ "
      type           = infantry
      extra          = police
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 30600 id = 12 }
      name           = "��6����ʦ "
      type           = infantry
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 30600 id = 13 }
      name           = "��3ɽ��ʦ "
      type           = bergsjaeger
      strength       = 30
      experience     = 20
    }
  }

  airunit = { 
    id       = { type = 30600 id = 14 }
    name     = "��ʿ�վ���I'�¡��������'���ն� "
    location = 532
    base     = 532
    division = {
      id             = { type = 30600 id = 15 }
      name           = "��1ս����ը����� "
      type           = tactical_bomber
      model          = 0
      strength       = 40
      experience     = 15
    }
  }
}