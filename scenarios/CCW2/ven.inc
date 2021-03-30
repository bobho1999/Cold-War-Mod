##############################
# Country definition for VEN #
##############################
province = {
  id = 804 # ��������
  anti_air = 2
}
province = {
  id = 811 # ������˹
  anti_air = 2
}

#####################
# Country main data #
#####################

country = {
  tag                = VEN
  capital            = 811 # ������˹
  extra_tc           = 5
  manpower           = 12
  research_mod           = 1.15
  peacetime_ic_mod       = 0.75
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 20
  transports     = 30
  escorts        = 4

  diplomacy = {
    relation = { tag = ARG value = 10 }
    relation = { tag = BOL value = -15 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = 20 }
    relation = { tag = COL value = 20 }
    relation = { tag = ECU value = 20 }
    relation = { tag = ENG value = -10 }
    relation = { tag = PAR value = 10 }
    relation = { tag = PRU value = 10 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = 125 }
  }

  nationalprovinces      = { 4032 4033 4034 4035 4036 802 804 810 811 867 869 870 871 873 }
  ownedprovinces         = { 4032 4033 4034 4035 802 804 810 811 867 869 870 }
  controlledprovinces    = { 4032 4033 4034 4035 802 804 810 811 867 869 870 }

  techapps               = { 5050 5080 5170 5190 5180 5660 5010 1010 1100 2280 2290 2420 6020 6040 8010 8020 8390 8530 7430 7510 78100 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 1
    freedom           = 5
    free_market       = 7
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 38001 } # �������� ��������˹ 
  headofgovernment       = { type = 9 id = 38002 } # �������� ��������˹ 
  foreignminister        = { type = 9 id = 38003 } # ��˹�ذ� ���� ������˹ 
  armamentminister       = { type = 9 id = 38004 } # ����� ������� ����ϣ 
  ministerofsecurity     = { type = 9 id = 38005 } # ʥ���Ǹ� �� ������ 
  ministerofintelligence = { type = 9 id = 38006 } # ���������߶��� �� ��˹��˹ �ֹ���˹ 
  chiefofstaff           = { type = 9 id = 38007 } # ������˹ ÷���� �������� 
  chiefofarmy            = { type = 9 id = 38008 } # ������˹ ÷���� �������� 
  chiefofnavy            = { type = 9 id = 38009 } # �±��� ʥ������ ά�� 
  chiefofair             = { type = 9 id = 38010 } # ���� ����˹ �����˹ 
  nationalidentity       = "policy_economy_Laisser-faire"
  socialpolicy           = "policy_social_integration"
  nationalculture        = "policy_political_dignitary"

  landunit = {
    id       = { type = 15800 id = 45 }
    name     = "ί��������1�� "
    location = 811
    division = {
      id             = { type = 15800 id = 4500 }
      name           = "��1'�����޲�����'����ʦ "
      type           = infantry
      extra          = anti_tank
      strength       = 100
    }
    division = {
      id             = { type = 15800 id = 4501 }
      name           = "��1����ʦ "
      type           = militia
      strength       = 100
    }
    division = {
      id             = { type = 15800 id = 4502 }
      name           = "����Ѳ�߶� "
      type           = cavalry
      extra          = artillery
      strength       = 100
    }
  }
}