##############################
# Country definition for PRU #
##############################
province = {
  id = 830 # ����
  anti_air = 2
}

#####################
# Country main data #
#####################

country = {
  tag                = PRU
  capital            = 830 # ����
  extra_tc           = 5
  manpower           = 102
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
  escorts        = 2

  diplomacy = {
    relation = { tag = ARG value = 20 }
    relation = { tag = BOL value = 30 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = -25 }
    relation = { tag = COL value = -35 }
    relation = { tag = ECU value = -50 }
    relation = { tag = PAR value = 25 }
    relation = { tag = URU value = 25 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 10 }
  }

  nationalprovinces      = { 4037 4038 4041 4042 4043 4069 4070 4076 816 818 821 829 830 831 }
  ownedprovinces         = { 4041 4042 4043 4069 4076 816 818 821 829 830 831 }
  controlledprovinces    = { 4041 4042 4043 4069 4076 816 818 821 829 830 831 }

  techapps               = { 5050 5180 5660 5010 1010 1100 6020 6040 8010 8020 8150 8390 8530 7420 7510 2280 2290 2300 2360 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 4
    free_market       = 4
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 39001 } # ��˹�� ����ά�� ������ 
  headofgovernment       = { type = 9 id = 39002 } # ��Ŭ���� ��˹�ذ� �޵����˹ 
  foreignminister        = { type = 9 id = 39003 } # �������� ������ ������Լ 
  armamentminister       = { type = 9 id = 39004 } # ����˹�� ˹����˼ 
  ministerofsecurity     = { type = 9 id = 39005 } # ·��˹ ɣ��˹ ���� 
  ministerofintelligence = { type = 9 id = 39006 } # ��˹�� �������� 
  chiefofstaff           = { type = 9 id = 39007 } # ��˹���� ϣ����˹ 
  chiefofarmy            = { type = 9 id = 39008 } # ��˹�� ����ά�� ������ 
  chiefofnavy            = { type = 9 id = 39009 } # ����˹�� ˹����˼ 
  chiefofair             = { type = 9 id = 39010 } # ���� �� ������ 
  nationalidentity       = "policy_economy_colonial"
  socialpolicy           = "policy_social_integration"
  nationalculture        = "policy_political_dignitary"

  landunit = {
    id       = { type = 17600 id = 1 }
    name     = "��³��1�� "
    location = 830
    division = {
      id             = { type = 17600 id = 2 }
      name           = "��1'��³˹'����ʦ "
      type           = motorized
      strength       = 100
    }
    division = {
      id             = { type = 17600 id = 3 }
      name           = "��2����ʦ "
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 17600 id = 4 }
      name           = "��3����ʦ "
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 17600 id = 5 }
      name           = "��1'������'ɽ��ʦ "
      type           = bergsjaeger
      strength       = 100
    }
  }

  navalunit = {
    id       = { type = 17600 id = 6 }
    name     = "��³���������� "
    location = 830
    base     = 830
    division = {
      id             = { type = 17600 id = 7 }
      name           = "��1���𽢱�� "
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 17600 id = 8 }
      name           = "�������غ� "
      type           = heavy_cruiser
      model          = 0
      extra1         = naval_sa_l
      extra2         = naval_anti_air_l
      extra3         = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division = {
      id             = { type = 17600 id = 9 }
      name           = "�����ֺ� "
      type           = heavy_cruiser
      model          = 0
      extra1         = naval_sa_l
      extra2         = naval_anti_air_l
      extra3         = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division = {
      id             = { type = 17600 id = 10 }
      name           = "��1Ǳͧ��� "
      type           = submarine
      model          = 1
    }
  }
}