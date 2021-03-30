##############################
# Country definition for GUA #
##############################
province = {
  id = 665 # �����˹�ۣ�Σ��������
}
province = { id = 757 anti_air = 1 } # Σ�������ǣ�Σ��������

#####################
# Country main data #
#####################

country = {
  tag                = GUA
  capital            = 757 # Σ�������ǣ�Σ��������
  extra_tc           = 5
  manpower           = 7
  research_mod           = 1.15
  peacetime_ic_mod       = 0.75
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 16
  escorts        = 2

  diplomacy = {
    relation = { tag = HON value = 100 }
    relation = { tag = USA value = 125 }
    relation = { tag = ENG value = 50 }
  }

  nationalprovinces      = { 664 665 757 759 }
  ownedprovinces         = { 664 665 757 }
  controlledprovinces    = { 664 665 757 }

  techapps               = { 5180 5010 1010 8010 7430 7510 1020 1030 1040 1170 1180 1890 2720 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 4
    free_market       = 6
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 46001 } # ���� ��ά�� ��˹������ 
  headofgovernment       = { type = 9 id = 46002 } # ���� ��ά�� ��˹������ 
  foreignminister        = { type = 9 id = 46003 } # �������׶� ˹���� ���� 
  armamentminister       = { type = 9 id = 46004 } # ��Ү��Ī ������˹ ���״�ŵ 
  ministerofsecurity     = { type = 9 id = 46005 } # T. ��˹���� ������˹ 
  ministerofintelligence = { type = 9 id = 46006 } # ���»��� �����Ǹ��� ������ 
  chiefofstaff           = { type = 9 id = 46007 } # �Ѵ���� ��˹ ������˹ 
  chiefofarmy            = { type = 9 id = 46008 } # ���� ��ά�� ��˹������ 
  chiefofnavy            = { type = 9 id = 46009 } # ����˹ �Ŷ��� ���ﱴ 
  chiefofair             = { type = 9 id = 46010 } # R ��������ͼ�� Ƥ�ڴ� 
  nationalidentity       = "policy_economy_natural-Capitalism"
  socialpolicy           = "policy_social_integration"
  nationalculture        = "policy_political_dignitary"

  landunit = {
    id       = { type = 16500 id = 65 }
    name     = "Σ��������I�� "
    location = 757
    division = {
      id             = { type = 16500 id = 6500 }
      name           = "��1'������V������'������ "
      type           = infantry
      extra          = artillery
      strength       = 100
    }
  }
}