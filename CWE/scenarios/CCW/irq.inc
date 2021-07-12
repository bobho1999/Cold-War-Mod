##############################
# Country definition for IRQ #
##############################
province = {
  id = 1823 # ��ʿ��
  anti_air = 2
}
province = { id = 1864 anti_air = 1 } # Ħ�ն�
province = { id = 1866 anti_air = 2 } # �͸��

#####################
# Country main data #
#####################

country = {
  tag                = IRQ
  puppet             = ENG
  control            = ENG
  capital            = 1866 # �͸��
  extra_tc           = 5
  manpower           = 15
  research_mod           = 1.15
  peacetime_ic_mod       = 0.75
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 1000
  supplies       = 500
  money          = 10
  transports     = 16
  escorts        = 3

  diplomacy = {
    relation = { tag = AST value = 100 }
    relation = { tag = BHU value = 100 }
    relation = { tag = CAN value = 100 }
    relation = { tag = ENG value = 100 }
    relation = { tag = FRA value = 100 }
    relation = { tag = GER value = 25 }
    relation = { tag = ITA value = 25 }
    relation = { tag = NEP value = 100 }
    relation = { tag = NZL value = 100 }
    relation = { tag = OMN value = 125 }
    relation = { tag = PER value = 125 }
    relation = { tag = SAF value = 100 }
    relation = { tag = SAU value = 125 }
    relation = { tag = USA value = 120 }
    relation = { tag = YEM value = 125 }
  }

  nationalprovinces      = { 1790 1791 1806 1823 1824 1825 1860 1864 1865 1866 3917 3918 3919 3920 3921 3922 3923 }
  ownedprovinces         = { 1790 1791 1806 1823 1824 1860 1864 1865 1866 3917 3918 3919 3920 3921 3922 3923 }
  controlledprovinces    = { 1790 1791 1806 1823 1824 1860 1864 1865 1866 3917 3918 3919 3920 3921 3922 3923 }

  techapps               = { 5050 1010 7410 7510 66500 66510 66520 1020 1030 1040 1050 1170 1180 1890 1900 2800 2720 1910 2810 5310 5180 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 5
    freedom           = 4
    free_market       = 6
    professional_army = 10
    defense_lobby     = 2
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 91001 } # ����һ�� ���� ������ 
  headofgovernment       = { type = 9 id = 91002 } # ���� ���� ���� ��ϣ�� 
  foreignminister        = { type = 9 id = 91003 } # Ŭ�� ��˹ ����� 
  armamentminister       = { type = 9 id = 91004 } # ����һ�� ���� ������ 
  ministerofsecurity     = { type = 9 id = 91005 } # ���� ������ ������ 
  ministerofintelligence = { type = 9 id = 91006 } # ���� ���� ���� ��ϣ�� 
  chiefofstaff           = { type = 9 id = 91007 } # ���˶� ������ 
  chiefofarmy            = { type = 9 id = 91008 } # ���׵���� G Ƥ�� 
  chiefofnavy            = { type = 9 id = 91009 } # A R H �� 
  chiefofair             = { type = 9 id = 91010 } # ���� �� ���ߵ� 
  nationalidentity       = "policy_economy_colonial"
  socialpolicy           = "policy_social_Islam"
  nationalculture        = "policy_political_nationalism"

  landunit = {
    id       = { type = 22500 id = 3 }
    name     = "�����˻ʼҽ����� "
    location = 1866
    division = {
      id             = { type = 22500 id = 4 }
      name           = "��1����ʦ "
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 22500 id = 5 }
      name           = "��2����ʦ "
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 22500 id = 6 }
      name           = "��3����ʦ "
      type           = infantry
      extra          = artillery
      strength       = 100
    }
    division = {
      id             = { type = 22500 id = 7 }
      name           = "��4����ʦ "
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 22500 id = 8 }
      name           = "��1Ħ��ʦ "
      type           = motorized
      strength       = 30
    }
  }

  airunit = { 
    id       = { type = 22500 id = 1 }
    name     = "�����˻ʼҿվ���1���� "
    location = 1866
    base     = 1866
    division = {
      id             = { type = 22500 id = 2 }
      name           = "��1�ػ������ "
      type           = interceptor
      model          = 0
      strength       = 30
    }
  }
}