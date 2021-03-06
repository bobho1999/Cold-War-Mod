##############################
# Country definition for HON #
##############################
province = { id = 760 anti_air = 1 } # �ع����Ӷ��ͣ��鶼��˹��
province = {
  id = 806 # ʥ������������鶼��˹��
}

#####################
# Country main data #
#####################

country = {
  tag                = HON
  capital            = 760 # �ع����Ӷ��ͣ��鶼��˹��
  extra_tc           = 5
  manpower           = 5
  research_mod           = 1.15
  peacetime_ic_mod       = 0.75
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 20
  escorts        = 3

  diplomacy = {
    relation = { tag = ENG value = 50 }
    relation = { tag = GUA value = 100 }
    relation = { tag = NIC value = 100 }
    relation = { tag = SAL value = 100 }
    relation = { tag = USA value = 100 }
  }

  nationalprovinces      = { 760 805 806 807 }
  ownedprovinces         = { 760 805 806 807 }
  controlledprovinces    = { 760 805 806 807 }

  techapps               = { 5180 5010 1010 7430 7510 8010 8020 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 4
    free_market       = 7
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 79001 } # �������� ������ ������ 
  headofgovernment       = { type = 9 id = 79002 } # ����˹ �������� �ڿ���˹ 
  foreignminister        = { type = 9 id = 79003 } # �������� ������ ������ 
  armamentminister       = { type = 9 id = 79004 } # �޲��� �׿����� ���� 
  ministerofsecurity     = { type = 9 id = 79005 } # ����˹ �������� �ڿ���˹ 
  ministerofintelligence = { type = 9 id = 79006 } # ���ɶ� ʩ�к��� ������ 
  chiefofstaff           = { type = 9 id = 79007 } # �������� ������ ������ 
  chiefofarmy            = { type = 9 id = 79008 } # ���ɶ� ʩ�к��� ������ 
  chiefofnavy            = { type = 9 id = 79009 } # ����˹ ����� ��÷�� 
  chiefofair             = { type = 9 id = 79010 } # ��˹���� ʩ���� 
  nationalidentity       = "policy_economy_natural"
  socialpolicy           = "policy_social_integration"
  nationalculture        = "policy_political_dignitary"

  landunit = {
    id       = { type = 19500 id = 55 }
    name     = "�鶼��˹½����VII�� "
    location = 760
    division = {
      id             = { type = 19500 id = 5500 }
      name           = "��1'������������'������ "
      type           = infantry
      extra          = artillery
      strength       = 60
    }
  }
}
