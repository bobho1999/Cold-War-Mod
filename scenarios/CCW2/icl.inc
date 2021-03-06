##############################
# Country definition for ICL #
##############################
province = {
  id = 1 # �׿���δ��
  ic = 2
  anti_air = 1
}

#####################
# Country main data #
#####################

country = {
  tag                = ICL
  capital            = 1 # �׿���δ��
  manpower           = 5
  # Resource Reserves
  energy         = 500
  metal          = 500
  rare_materials = 200
  oil            = 200
  supplies       = 200
  money          = 0

  diplomacy = {
    relation = { tag = USA value = 200 }
    relation = { tag = DEN value = 100 }
    relation = { tag = FRA value = 100 }
    relation = { tag = ENG value = 150 }
  }

  nationalprovinces      = { 1 2 }
  ownedprovinces         = { 1 2 }
  controlledprovinces    = { 1 2 }

  techapps               = { 1010 1020 14010 14020 2290 4010 4020 4120 4130 5050 5080 6010 2280 1030 1270 1040 1890 2720 5310 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 8
    freedom           = 2
    free_market       = 4
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 581001 } # ˹�� ��Լ���� 
  headofgovernment       = { type = 9 id = 581022 } # ˹�ط� J. ˹�ط�ɭ 
  foreignminister        = { type = 9 id = 581011 } # ˹�ط� J. ˹�ط�ɭ 
  armamentminister       = { type = 9 id = 581023 } # �˵� ����Ŭɭ 
  ministerofsecurity     = { type = 9 id = 581024 } # ����� Լ���� 
  ministerofintelligence = { type = 9 id = 581025 } # Ӣ�߶� �������� 
  chiefofstaff           = { type = 9 id = 581015 } # �¹�˹�� ���׵�³�� 
  chiefofarmy            = { type = 9 id = 581016 } # �� ��÷��ϣ 
  chiefofnavy            = { type = 9 id = 581017 } # ���� ����ɭ 
  chiefofair             = { type = 9 id = 581018 } # ��˹�� E.V. ������ 
}
