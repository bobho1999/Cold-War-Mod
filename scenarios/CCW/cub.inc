##############################
# Country definition for CUB #
##############################
province = {
  id = 654 # ������
  anti_air = 1
}

#####################
# Country main data #
#####################

country = {
  tag                = CUB
  capital            = 654 # ������
  manpower           = 15
  research_mod           = 1.15
  peacetime_ic_mod       = 0.75
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 24
  escorts        = 3

  diplomacy = {
    relation = { tag = DOM value = 50 }
    relation = { tag = ENG value = 30 }
    relation = { tag = HAI value = 30 }
    relation = { tag = USA value = 200 }
  }

  nationalprovinces      = { 654 655 656 657 666 }
  ownedprovinces         = { 654 655 656 666 }
  controlledprovinces    = { 654 655 656 666 }

  techapps               = { 5180 5010 1010 8010 8020 7430 7510 1890 2720 1020 1030 1040 1170 1180 2280 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 8
    political_left    = 4
    freedom           = 5
    free_market       = 8
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 33001 } # ���� �Ͷ�����-ά�ɸ���˹ 
  headofgovernment       = { type = 9 id = 33002 } # �׸�� ����˹-������˹ 
  foreignminister        = { type = 9 id = 33003 } # ���� �Ͷ�����-ά�ɸ���˹ 
  armamentminister       = { type = 9 id = 33004 } # ����˹ ����� 
  ministerofsecurity     = { type = 9 id = 33005 } # ������ ������ 
  ministerofintelligence = { type = 9 id = 33006 } # ��Ŭ���� ������ 
  chiefofstaff           = { type = 9 id = 33007 } # ������ ɣ���� 
  chiefofarmy            = { type = 9 id = 33008 } # �����߶� ��˹������ ��˹���� 
  chiefofnavy            = { type = 9 id = 33009 } # �޵���� A ����˹ 
  chiefofair             = { type = 9 id = 33010 } # ������ R �¶� ���� 
  nationalidentity       = "policy_economy_Laisser-faire"
  socialpolicy           = "policy_social_integration"
  nationalculture        = "policy_political_dignitary"

  landunit = {
    id       = { type = 26000 id = 40 }
    name     = "�Ű͵�1�� "
    location = 654
    division = {
      id             = { type = 26000 id = 4000 }
      name           = "��1����ʦ "
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 26000 id = 4001 }
      name           = "��1'���޵���'���ʦ "
      type           = cavalry
      model          = 0
      extra          = artillery
      strength       = 100
    }
  }
}