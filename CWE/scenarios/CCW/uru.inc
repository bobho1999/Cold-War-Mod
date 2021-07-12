##############################
# Country definition for URU #
##############################
province = {
  id = 849 # �ɵ�ά����
  anti_air = 1
}

#####################
# Country main data #
#####################

country = {
  tag                = URU
  capital            = 849 # �ɵ�ά����
  extra_tc           = 5
  manpower           = 102
  research_mod           = 1.2
  peacetime_ic_mod       = 0.7
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 30
  escorts        = 4

  diplomacy = {
    relation = { tag = ARG value = -50 }
    relation = { tag = BOL value = 10 }
    relation = { tag = BRA value = 125 }
    relation = { tag = CHL value = 20 }
    relation = { tag = COL value = 10 }
    relation = { tag = ECU value = 10 }
    relation = { tag = PAR value = 20 }
    relation = { tag = PRU value = 25 }
    relation = { tag = SOV value = -100 }
    relation = { tag = USA value = 100 }
    relation = { tag = VEN value = 10 }
  }

  nationalprovinces      = { 849 }
  ownedprovinces         = { 849 }
  controlledprovinces    = { 849 }

  techapps               = { 5180 5660 5010 5050 5080 5170 5190 1010 1100 6020 6040 7420 7510 78100 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 5
    free_market       = 5
    professional_army = 10
    defense_lobby     = 4
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 41001 } # �Ӳ��ﰣ�� ���� 
  headofgovernment       = { type = 9 id = 41002 } # �Ӳ��ﰣ�� ���� 
  foreignminister        = { type = 9 id = 41003 } # ���� ��˹������ 
  armamentminister       = { type = 9 id = 41004 } # �������׶� �Ͷ����׶� 
  ministerofsecurity     = { type = 9 id = 41005 } # ����� ����ϲ��� 
  ministerofintelligence = { type = 9 id = 41006 } # ����˹����ŵ Ƥ���� ������˹ 
  chiefofstaff           = { type = 9 id = 41007 } # ��Ŭ���� ����� ��˹��³�� 
  chiefofarmy            = { type = 9 id = 41008 } # ���� ������ �Ŷ��� 
  chiefofnavy            = { type = 9 id = 41009 } # ����˹ �ܿ�ѷ ���ﱴ 
  chiefofair             = { type = 9 id = 41010 } # ��ķ ���������� ������ 
  nationalidentity       = "policy_economy_natural-Capitalism"
  socialpolicy           = "policy_social_integration"
  nationalculture        = "policy_political_dignitary"

  landunit = {
    id       = { type = 13700 id = 40 }
    name     = "�������1�� "
    location = 849
    division = {
      id             = { type = 13700 id = 4000 }
      name           = "��4'���͵¸���'���� "
      type           = infantry
      extra          = artillery
      strength       = 100
    }
  }
}