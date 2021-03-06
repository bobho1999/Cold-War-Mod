##############################
# Country definition for BOL #
##############################
province = {
  id = 832 # ����˹������ά�ǣ�
  anti_air = 1
}

#####################
# Country main data #
#####################

country = {
  tag                = BOL
  capital            = 832 # ����˹������ά�ǣ�
  manpower           = 5
  research_mod           = 1.2
  peacetime_ic_mod       = 0.75
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = ARG value = 50 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = -50 }
    relation = { tag = COL value = 1 }
    relation = { tag = ECU value = -20 }
    relation = { tag = GER value = 15 }
    relation = { tag = PAR value = -50 }
    relation = { tag = PRU value = 30 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = 85 }
    relation = { tag = VEN value = -15 }
  }

  nationalprovinces      = { 4064 4071 4072 822 827 828 832 833 836 837 838 839 }
  ownedprovinces         = { 4064 4071 4072 827 828 832 833 836 838 }
  controlledprovinces    = { 4064 4071 4072 827 828 832 833 836 838 }

  techapps               = { 5180 5660 5010 1010 6010 6020 6040 6050 7430 7510 6060 6070 66500 66510 66520 66530 66540 1890 2720 1020 1030 1040 1050 1170 1180 1190 1900 2800 2280 2290 5310 5050 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    freedom           = 7
    free_market       = 8
    professional_army = 10
    defense_lobby     = 8
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 43001 } # ��˹ �ع��� ������ŵ 
  headofgovernment       = { type = 9 id = 43002 } # ��˹ �ع��� ������ŵ 
  foreignminister        = { type = 9 id = 43003 } # ���� ������ ������˹ 
  armamentminister       = { type = 9 id = 43004 } # Ī��� ����ϣ���� 
  ministerofsecurity     = { type = 9 id = 43005 } # ���� ɣ��˹ ������˹ 
  ministerofintelligence = { type = 9 id = 43006 } # ����˹ ����������ŵ 
  chiefofstaff           = { type = 9 id = 43007 } # �϶����� �������ް��� ����˹ 
  chiefofarmy            = { type = 9 id = 43008 } # ��˹ ���� 
  chiefofnavy            = { type = 9 id = 43009 } # ���� ������ ����˹ 
  chiefofair             = { type = 9 id = 43010 } # �տ��� �϶��Ͷ� ���� 
  nationalidentity       = "policy_economy_Laisser-faire"
  socialpolicy           = "policy_social_integration"
  nationalculture        = "policy_political_nationalism"

  landunit = {
    id       = { type = 17000 id = 40 }
    name     = "����ά�ǵ�1�� "
    location = 832
    division = {
      id             = { type = 17000 id = 4000 }
      name           = "��1�����߶�ʦ "
      type           = infantry
      model          = 0
      extra          = artillery
      strength       = 100
    }
    division = {
      id             = { type = 17000 id = 4001 }
      name           = "����ά�ǵ�1�� "
      type           = militia
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 17000 id = 4002 }
      name           = "����ά�ǵ�2�� "
      type           = militia
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 17000 id = 4003 }
      name           = "��1��ı�Ҳ������ "
      type           = cavalry
      model          = 0
      strength       = 100
    }
  }
}
