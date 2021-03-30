##############################
# Country definition for NIC #
##############################
province = {
  id = 539 # ���ǹ�
}

#####################
# Country main data #
#####################

country = {
  tag                = NIC
  capital            = 539 # ���ǹ�
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
  transports     = 5
  escorts        = 1

  diplomacy = {
    relation = { tag = HON value = 100 }
    relation = { tag = USA value = 100 }
  }

  nationalprovinces      = { 4019 4020 4021 4022 539 }
  ownedprovinces         = { 4019 4020 539 }
  controlledprovinces    = { 4019 4020 539 }

  techapps               = { 5180 5010 1010 8010 8020 7430 7510 1020 1030 1040 1170 1180 1890 2720 2800 1900 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 2
    freedom           = 4
    free_market       = 7
    professional_army = 10
    defense_lobby     = 8
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 48001 } # ���� �͵�˹�� ������ 
  headofgovernment       = { type = 9 id = 48002 } # ������ ������˹ ������ 
  foreignminister        = { type = 9 id = 48003 } # �����ɶ� ������ �߼�˹ 
  armamentminister       = { type = 9 id = 48004 } # ����˹������ ��Ħ�� ������ 
  ministerofsecurity     = { type = 9 id = 48005 } # ���������� ���׶�˹ �Ŷ��� 
  ministerofintelligence = { type = 9 id = 48006 } # �����ɶ� ������ �߼�˹ 
  chiefofstaff           = { type = 9 id = 48007 } # ����˹������ ��Ħ�� ������ 
  chiefofarmy            = { type = 9 id = 48008 } # �¹�˹�� �����߶� ������� 
  chiefofnavy            = { type = 9 id = 48009 } # ��˹���� ������˹ �ŵ��� 
  chiefofair             = { type = 9 id = 48010 } # ���ж�Ī R ���ǵ��� 
  nationalidentity       = "policy_economy_natural-Capitalism"
  socialpolicy           = "policy_social_integration"
  nationalculture        = "policy_political_dignitary"

  landunit = {
    id       = { type = 11600 id = 45 }
    name     = "������ϵ�1�� "
    location = 539
    division = {
      id             = { type = 11600 id = 4500 }
      name           = "��ͳ�������� "
      type           = infantry
      extra          = artillery
      strength       = 60
    }
  }
}