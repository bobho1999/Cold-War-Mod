##############################
# Country definition for AFG #
##############################

country = {
  tag                = AFG
  capital            = 1486 # ������
  manpower           = 100
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = ENG value = -75 }
    relation = { tag = ITA value = 50 }
    relation = { tag = PER value = 25 }
    relation = { tag = SAU value = 50 }
    relation = { tag = SOV value = 1 }
    relation = { tag = TUR value = 50 }
  }

  nationalprovinces      = { 1484 1486 1492 1493 3866 3867 3868 3870 3871 3872 3873 3874 3875 3876 3877 3878 3879 3880 }
  ownedprovinces         = { 1484 1486 1492 1493 2989 3866 3867 3868 3869 3870 3871 3872 3873 3874 3875 3876 3877 3878 3879 3880 }
  controlledprovinces    = { 1484 1486 1492 1493 2989 3866 3867 3868 3869 3870 3871 3872 3873 3874 3875 3876 3877 3878 3879 3880 }

  techapps               = { 1010 1020 66500 66510 78100 1170 1270 1890 2720 5310 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 3
    freedom           = 6
    free_market       = 7
    professional_army = 10
    defense_lobby     = 4
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 54001 } # �º�Ĭ�� ��ϣ�� 
  headofgovernment       = { type = 9 id = 54002 } # �º�Ĭ�� ��ϣķ 
  foreignminister        = { type = 9 id = 54003 } # ���� ������ �º�Ĭ�� ������� 
  armamentminister       = { type = 9 id = 54004 } # �������� ������ ������ 
  ministerofsecurity     = { type = 9 id = 54005 } # �º�Ĭ�� ��ϣķ 
  ministerofintelligence = { type = 9 id = 54006 } # ɳ�� ����ï�� ���� 
  chiefofstaff           = { type = 9 id = 54007 } # �º�Ĭ�� ���ڵ� 
  chiefofarmy            = { type = 9 id = 54008 } # �º�Ĭ�� ���ڵ� 
  chiefofnavy            = { type = 9 id = 54009 } # �º�Ĭ�� ��ϣ�� 
  chiefofair             = { type = 9 id = 54010 } # �º�Ĭ�� ���ڵ� 
  nationalidentity       = "policy_economy_natural"
  socialpolicy           = "policy_social_Islam"
  nationalculture        = "policy_political_regality"

  landunit = {
    id       = { type = 10000 id = 1 }
    name     = "������������ "
    location = 1486
    division = {
      id             = { type = 10000 id = 11 }
      name           = "�ʼҾ����� "
      type           = infantry
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 10000 id = 2 }
      name           = "��������� "
      type           = militia
      model          = 1
      strength       = 80
    }
    division = {
      id             = { type = 10000 id = 3 }
      name           = "��˹�����ʦ "
      type           = militia
      model          = 1
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 10000 id = 4 }
    name     = "��������2�� "
    location = 1486
    division = {
      id             = { type = 10000 id = 5 }
      name           = "��֪���ʦ "
      type           = militia
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 10000 id = 6 }
      name           = "���������ʦ "
      type           = cavalry
      model          = 1
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 10000 id = 7 }
    name     = "��������3�� "
    location = 1493
    division = {
      id             = { type = 10000 id = 8 }
      name           = "�������͵����ʦ "
      type           = militia
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 10000 id = 9 }
      name           = "��������ʦ "
      type           = militia
      model          = 1
      strength       = 100
    }
  }
}