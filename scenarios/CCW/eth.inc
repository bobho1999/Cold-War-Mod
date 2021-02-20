##############################
# Country definition for ETH #
##############################

country = {
  tag                = ETH
  capital            = 1046 # �ǵ�˹�Ǳ���
  manpower           = 120
  research_mod           = 1.2
  peacetime_ic_mod       = 0.5
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = ENG value = 50 }
    relation = { tag = FRA value = 25 }
    relation = { tag = IRE value = 100 }
    relation = { tag = ITA value = -200 }
    relation = { tag = JAP value = 35 }
  }

  nationalprovinces      = { 1033 1038 1039 1042 1043 1044 1045 1046 1047 1048 1049 1050 1051 1052 1053 1054 3349 3350 3351 }
  ownedprovinces         = { 1042 1043 1044 1045 1046 1047 1048 1049 1050 1051 1052 1053 1054 3349 3350 3351 }
  controlledprovinces    = { 1042 1043 1044 1045 1046 1047 1048 1049 1050 1051 1052 1053 1054 3349 3350 3351 }

  techapps               = { 1010 1100 7420 7510 66500 66510 66520 66530 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 7
    professional_army = 10
    defense_lobby     = 8
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 65001 } # ���� ������һ�� 
  headofgovernment       = { type = 9 id = 65002 } # ����¡�� �ؿ��� ���������� 
  foreignminister        = { type = 9 id = 65003 } # ��³�� �ֶ��� ������ 
  armamentminister       = { type = 9 id = 65004 } # ��³�� �ֶ��� ������ 
  ministerofsecurity     = { type = 9 id = 65005 } # ����¡�� �ؿ��� ���������� 
  ministerofintelligence = { type = 9 id = 65006 } # ���� ������һ�� 
  chiefofstaff           = { type = 9 id = 65007 } # ��¬���� ���� 
  chiefofarmy            = { type = 9 id = 65008 } # ��˹�� ��ķ��ά 
  chiefofnavy            = { type = 9 id = 65009 } # ����ķ ���� 
  chiefofair             = { type = 9 id = 65010 } # Լ�� ³��ѷ 
  nationalidentity       = "policy_economy_natural"
  socialpolicy           = "policy_social_integration"
  nationalculture        = "policy_political_dignitary"

  landunit = {
    id       = { type = 31000 id = 1 }
    name     = "���������ǻʼҽ����� "
    location = 1046
    division = {
      id             = { type = 31000 id = 2 }
      name           = "�ʼҽ����� "
      type           = infantry
      model          = 0
      strength       = 30
    }
    division = {
      id             = { type = 31000 id = 3 }
      name           = "��11���ʦ "
      type           = militia
      model          = 0
      strength       = 70
    }
    division = {
      id             = { type = 31000 id = 4 }
      name           = "��12���ʦ "
      type           = militia
      model          = 0
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 31000 id = 5 }
    name     = "���������ǵ�1�� "
    location = 1052
    division = {
      id             = { type = 31000 id = 6 }
      name           = "��1���ʦ "
      type           = militia
      model          = 0
      strength       = 60
    }
    division = {
      id             = { type = 31000 id = 7 }
      name           = "��2���ʦ "
      type           = militia
      model          = 0
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 31000 id = 8 }
    name     = "���������ǵ�2�� "
    location = 1043
    division = {
      id             = { type = 31000 id = 9 }
      name           = "��3���ʦ "
      type           = militia
      model          = 0
      strength       = 60
    }
    division = {
      id             = { type = 31000 id = 10 }
      name           = "��4���ʦ "
      type           = militia
      model          = 0
      strength       = 60
    }
  }
}