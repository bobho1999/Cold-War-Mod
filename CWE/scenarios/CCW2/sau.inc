##############################
# Country definition for SAU #
##############################
province = { id = 1804 anti_air = 2 } # �����
province = {
  id = 1821 # ����
}
province = {
  id = 3911 # ���
}

#####################
# Country main data #
#####################

country = {
  tag                = SAU
  capital            = 1807 # ���ŵ�
  extra_tc           = 5
  manpower           = 75
  research_mod           = 1.15
  peacetime_ic_mod       = 0.5
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 12

  diplomacy = {
    relation = { tag = AFG value = 50 }
    relation = { tag = AST value = 50 }
    relation = { tag = ENG value = 100 }
    relation = { tag = FRA value = 10 }
    relation = { tag = IRQ value = 125 }
    relation = { tag = ITA value = -25 }
    relation = { tag = OMN value = 125 }
    relation = { tag = PER value = 100 }
    relation = { tag = SOV value = 1 }
    relation = { tag = TUR value = 50 }
    relation = { tag = YEM value = 125 }
  }

  nationalprovinces      = { 1804 1805 1807 1808 1809 1818 1821 3911 3912 3913 3914 3915 3916 1822 1820 1504 3906 3907 }
  ownedprovinces         = { 1804 1805 1807 1808 1809 1818 1821 3911 3912 3913 3914 3915 3916 }
  controlledprovinces    = { 1804 1805 1807 1808 1809 1818 1821 3911 3912 3913 3914 3915 3916 }

  techapps               = { 1010 1100 7430 7510 2360 2280 2290 2300 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 5
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 63001 } # �������� ������ ���� ɳ�� 
  headofgovernment       = { type = 9 id = 63002 } # ɳ�� ���� ɳ�� 
  foreignminister        = { type = 9 id = 63003 } # ������ ���� ɳ�� 
  armamentminister       = { type = 9 id = 63004 } # ������ ���� ɳ�� 
  ministerofsecurity     = { type = 9 id = 63005 } # ������ ���� ɳ�� 
  ministerofintelligence = { type = 9 id = 63006 } # ������ ���� ɳ�� 
  chiefofstaff           = { type = 9 id = 63007 } # ɳ�� ���� ɳ�� 
  chiefofarmy            = { type = 9 id = 63008 } # ������ ���� ɳ�� 
  chiefofnavy            = { type = 9 id = 63009 } # ������ ���� ɳ�� 
  chiefofair             = { type = 9 id = 63010 } # ������ ɳ�� 
  nationalidentity       = "policy_economy_Laisser-faire"
  socialpolicy           = "policy_social_Islam"
  nationalculture        = "policy_political_regality"

  landunit = {
    id       = { type = 22600 id = 1 }
    name     = "ɳ�ذ������ʼҵ�1�� "
    location = 1807
    division = {
      id             = { type = 22600 id = 2 }
      name           = "�ʼҵ�1����ʦ "
      type           = infantry
    }
    division = {
      id             = { type = 22600 id = 3 }
      name           = "�ʼ����� "
      type           = motorized
    }
    division = {
      id             = { type = 22600 id = 4 }
      name           = "�ʼҵ�1'�����'���ʦ "
      type           = cavalry
    }
  }
}
