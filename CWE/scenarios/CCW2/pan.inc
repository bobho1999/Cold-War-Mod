##############################
# Country definition for PAN #
##############################
province = {
  id = 888 # ��������
  anti_air = 2
}
province = {
  id = 4024 # ����˹���¶�����
}

#####################
# Country main data #
#####################

country = {
  tag                = PAN
  capital            = 888 # ��������
  extra_tc           = 5
  manpower           = 1
  research_mod           = 1.15
  peacetime_ic_mod       = 0.75
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 12
  escorts        = 3

  diplomacy = {
    relation = { tag = USA value = 175 }
    relation = { tag = COL value = 50 }
  }

  nationalprovinces      = { 4023 4024 4025 888 889 }
  ownedprovinces         = { 4023 4024 4025 888 }
  controlledprovinces    = { 4023 4024 4025 888 }

  techapps               = { 5180 5010 1010 8010 8020 7430 7510 1020 1030 1040 2280 2290 2360 2300 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 5
    freedom           = 4
    free_market       = 4
    professional_army = 10
    defense_lobby     = 4
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 95001 } # ��Ī�ϰ� ������˹ ���������� 
  headofgovernment       = { type = 9 id = 95002 } # ��Ī�ϰ� ������˹ ���������� 
  foreignminister        = { type = 9 id = 95003 } # �ɶ����� ������ ������ 
  armamentminister       = { type = 9 id = 95004 } # ����� C ƽ�� 
  ministerofsecurity     = { type = 9 id = 95005 } # ���������� E �Ŷ��� 
  ministerofintelligence = { type = 9 id = 95006 } # �����˶� �Ѷ��ϵ�˹ �� 
  chiefofstaff           = { type = 9 id = 95007 } # ���� ���� 
  chiefofarmy            = { type = 9 id = 95008 } # �����߶� ��������ŵ 
  chiefofnavy            = { type = 9 id = 95009 } # ���� A ������˹ 
  chiefofair             = { type = 9 id = 95010 } # ���� ���� 
  nationalidentity       = "policy_economy_colonial"
  socialpolicy           = "policy_social_self-movement"
  nationalculture        = "policy_political_nationalism"

  landunit = {
    id       = { type = 14600 id = 50 }
    name     = "��������1�� "
    location = 888
    division = {
      id             = { type = 14600 id = 5000 }
      name           = "��1����ʦ "
      type           = infantry
      strength       = 60
    }
  }
}