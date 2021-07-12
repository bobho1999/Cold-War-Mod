##############################
# Country definition for CHI #
##############################
province = {
  id = 1203 # 唐山
  supplypool = 4000
  oilpool = 2000
}
province = {
  id = 1204 # 天津市
  landfort = 8
  supplypool = 500
  oilpool = 100
}
province = {
  id = 1205 # 北京
  landfort = 10
}
province = { id = 1210 landfort = 7 } # 保定
province = { id = 1211 landfort = 8 } # 石家莊
province = {
  id = 1215 # 青島
  landfort = 8
  supplypool = 500
}
province = {
  id = 1216 # 濟南
  landfort = 10
}
province = {
  id = 1217 # 連雲港
  landfort = 8
  supplypool = 500
}
province = { id = 1218 landfort = 5 } # 徐州
province = {
  id = 1228 # 郑州
  landfort = 7
}
province = {
  id = 1231 # 襄陽
}
province = {
  id = 1232 # 漢口市
}
province = {
  id = 1235 # 南京市
}
province = {
  id = 1237 # 上海市
  infra = { size = 1 current_size = 0.7 }
}
province = {
  id = 1238 # 杭州
}
province = {
  id = 1240 # 溫州
}
province = {
  id = 1244 # 福州
}
province = {
  id = 1247 # 廈門
}
province = {
  id = 1248 # 汕頭
  ic = { size = 0 current_size = 0 }
}
province = {
  id = 1251 # 南昌
}
province = {
  id = 1255 # 長沙
}
province = { id = 1264 anti_air = 2 } # 恩施
province = {
  id = 1269 # 西安
  landfort = 7
}
province = {
  id = 1276 # 蘭州
  landfort = 7
}
province = {
  id = 1313 # 廣州市
}
province = {
  id = 1318 # 茂名
}
province = {
  id = 1320 # 湛江
}
province = {
  id = 1321 # 瓊山
}
province = {
  id = 1322 # 高雄
  infra = { size = 0.7 current_size = 0.5 }
  supplypool = 1000
  oilpool = 100
}
province = {
  id = 1323 # 台北
  infra = { size = 0.6 current_size = 0.5 }
  anti_air = 2
}
province = {
  id = 1325 # 欽縣
  ic = { size = 0 current_size = 0 }
}
province = {
  id = 1326 # 海防
}
province = {
  id = 1328 # 河內
  infra = { size = 0.9 current_size = 0.8 }
}
province = {
  id = 1360 # 成都市
}
province = {
  id = 1364 # 貴陽
}
province = { id = 1435 ic = { size = 0 current_size = 0 } } # 哈密
province = { id = 1447 ic = { size = 0 current_size = 0 } } # 和闐
province = { id = 1887 landfort = 8 } # 潼關
province = { id = 2980 ic = { size = 0 current_size = 0 } } # 吐魯番

#####################
# Country main data #
#####################

country = {
  tag                = CHI
  capital            = 1280 # 重慶市
  dissent            = 20
  extra_tc           = 50
  manpower           = 200
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 1000
  oil            = 1000
  supplies       = 1000
  money          = 20
  transports     = 80
  escorts        = 10

  diplomacy = {
    relation = { tag = CHC value = -100 }
    relation = { tag = CGX value = 100 access = yes }
    relation = { tag = SOV value = 0 }
    relation = { tag = JAP value = 0 }
    relation = { tag = CYN value = 100 access = yes }
    relation = { tag = CXB value = 100 access = yes }
    relation = { tag = CSX value = 100 access = yes }
  }
  SpyInfo                = { country = "CHI" NumberOfSpies = 10 }
  SpyInfo                = { country = "CHC" NumberOfSpies = 5 }
  SpyInfo                = { country = "CGX" NumberOfSpies = 5 }

  nationalprovinces      = { 1170 1192 1193 1202 1203 1204 1205 1206 1207 1208 1209 1210 1211 1212 1213 1214 1215 1216 1217 1218 1219 1220 1221 1222 1223 1224 1225 1226 1227 1228 1229 1230 1231 1232 1233 1234 1235 1236 1237 1238 1239 1240 1241 1242 1243 1244 1245 1246 1247 1248 1249 1250 1251 1252 1253 1254 1255 1256 1257 1258 1259 1260 1261 1262 1263 1264 1265 1266 1267 1268 1269 1270 1271 1272 1273 1274 1275 1276 1277 1278 1279 1280 1281 1282 1283 1293 1294 1305 1307 1308 1309 1310 1311 1312 1313 1314 1315 1316 1317 1318 1319 1320 1321 1322 1323 1324 1325 1327 1360 1361 1362 1363 1364 1365 1374 1375 1377 1378 1379 1380 1381 1382 1385 1386 1387 1388 1389 1390 1394 1395 1396 1397 1398 1399 1401 1402 1403 1404 1418 1419 1420 1421 1430 1431 1432 1433 1434 1435 1436 1437 1438 1439 1440 1441 1442 1443 1444 1445 1446 1447 1448 1450 1451 1452 1453 1455 1530 1595 1623 1779 1810 1811 1875 1876 1884 1885 1886 1887 1888 1889 1890 1894 1898 2605 2606 2607 2608 2609 2610 2611 2612 2613 2614 2615 2616 2617 2618 2619 2620 2621 2622 2623 2624 2625 2626 2627 2628 2629 2630 2631 2632 2633 2634 2635 2636 2637 2638 2639 2640 2641 2642 2643 2644 2645 2646 2647 2648 2649 2650 2651 2652 2653 2654 2655 2656 2657 2658 2659 2660 2661 2662 2663 2664 2665 2666 2667 2668 2669 2670 2671 2672 2673 2674 2675 2676 2677 2678 2679 2680 2681 2682 2683 2684 2685 2686 2687 2688 2689 2690 2691 2692 2693 2694 2695 2696 2697 2698 2699 2700 2701 2702 2703 2704 2705 2706 2707 2708 2709 2710 2711 2712 2713 2714 2715 2716 2717 2718 2719 2720 2721 2722 2723 2724 2725 2726 2727 2728 2729 2730 2731 2732 2733 2734 2735 2736 2737 2738 2739 2740 2741 2742 2743 2744 2745 2746 2747 2748 2749 2750 2751 2752 2753 2754 2755 2756 2757 2758 2759 2760 2761 2762 2763 2764 2765 2766 2767 2768 2769 2770 2771 2772 2773 2774 2775 2776 2777 2778 2779 2780 2781 2782 2783 2784 2785 2786 2787 2788 2789 2790 2791 2792 2793 2794 2795 2796 2797 2798 2799 2800 2801 2802 2803 2804 2805 2806 2807 2808 2809 2810 2811 2812 2813 2814 2815 2816 2817 2818 2819 2820 2821 2822 2823 2824 2825 2826 2827 2828 2829 2830 2831 2832 2833 2834 2835 2836 2837 2838 2839 2840 2841 2842 2843 2844 2845 2846 2847 2848 2849 2850 2851 2852 2853 2854 2855 2856 2857 2858 2859 2860 2861 2862 2863 2864 2865 2866 2867 2868 2869 2870 2871 2872 2873 2875 2876 2877 2878 2879 2880 2881 2882 2883 2884 2885 2886 2887 2888 2889 2890 2891 2892 2893 2894 2895 2896 2897 2898 2899 2900 2901 2902 2903 2904 2905 2906 2907 2908 2909 2910 2911 2912 2913 2914 2915 2916 2917 2918 2919 2920 2921 2922 2923 2924 2925 2926 2927 2928 2929 2930 2931 2932 2933 2934 2935 2936 2937 2938 2939 2940 2941 2942 2943 2944 2945 2946 2947 2948 2949 2950 2951 2952 2953 2954 2957 2962 2964 2965 2966 2967 2968 2969 2970 2971 2972 2973 2974 2975 2976 2977 2978 2979 2980 2981 2982 2983 2984 2985 2986 2987 2988 2989 2996 2997 2998 2999 3000 3464 3470 3471 3472 3478 3480 3481 3590 3591 3592 3593 3594 3767 3768 2874 2990 2991 2992 2993 2994 2995 3669 2955 2956 2958 2959 2960 2961 2963 }
  ownedprovinces         = { 2973 2972 1282 2977 2975 1281 1220 1235 1236 1237 2608 2622 2623 2625 2626 2627 2628 2629 2630 2795 1218 2607 2617 1217 2610 1222 2652 2614 2650 1875 1221 1884 1885 2649 2648 1233 2647 2646 2616 1234 2645 2633 2634 2644 1238 2631 2632 2635 2642 2643 2636 2637 2639 2638 1241 1240 2640 2641 2996 1251 2693 2694 2695 1242 2696 2691 2697 2692 2698 2699 1252 2688 2690 2689 1254 2686 2687 1250 2700 1255 1256 2685 2683 2684 2682 2680 2681 1260 2670 2671 1261 1257 2679 2678 2676 1259 2672 2677 2674 1253 1232 2660 2659 2661 1886 1266 1231 2667 2666 2668 2669 1264 2665 2664 2663 2662 2656 2657 2653 2658 2655 2872 1203 2673 1205 1204 2873 2871 1810 2866 1210 2870 2793 2869 1211 2868 1280 2766 1265 2767 2773 1263 1889 2768 2769 2770 2771 2772 1360 1279 2780 1888 2651 1361 2775 2774 2776 2777 2778 1890 2779 2976 3000 1364 1262 1363 2744 2745 1365 2737 2738 2740 2743 2741 2742 1244 2704 2703 2701 1243 2702 1246 1245 2705 1247 2706 2606 3590 3592 3594 1313 2714 1249 1248 2708 1312 2711 2707 1325 2716 2739 1318 2715 2713 2712 1321 2717 2718 1223 1228 2846 2849 1876 2845 2847 1230 2848 1227 2840 2843 2844 1229 2839 1224 2838 1269 1887 2786 2784 1268 2783 1267 2782 2781 1278 2788 2787 1270 1275 1215 1216 2855 2853 2854 1430 1431 1433 1435 1445 1446 1447 2957 2965 2978 2979 2980 2981 2985 2986 2987 2997 2998 2999 3470 3471 3472 1322 1323 1324 2605 2990 2991 2995 2797 2800 1276 2798 2799 1277 1274 3591 3593 1320 3481 2962 3708 3707 1328 1326 3702 }
  controlledprovinces    = { 2973 2972 1282 2977 2975 1281 1220 1235 1236 1237 2608 2622 2623 2625 2626 2627 2628 2629 2630 2795 1218 2607 2617 1217 2610 1222 2652 2614 2650 1875 1221 1884 1885 2649 2648 1233 2647 2646 2616 1234 2645 2633 2634 2644 1238 2631 2632 2635 2642 2643 2636 2637 2639 2638 1241 1240 2640 2641 2996 1251 2693 2694 2695 1242 2696 2691 2697 2692 2698 2699 1252 2688 2690 2689 1254 2686 2687 1250 2700 1255 1256 2685 2683 2684 2682 2680 2681 1260 2670 2671 1261 1257 2679 2678 2676 1259 2672 2677 2674 1253 1232 2660 2659 2661 1886 1266 1231 2667 2666 2668 2669 1264 2665 2664 2663 2662 2656 2657 2653 2658 2655 2872 1203 2673 1205 1204 2873 2871 1810 2866 1210 2870 2793 2869 1211 2868 1280 2766 1265 2767 2773 1263 1889 2768 2769 2770 2771 2772 1360 1279 2780 1888 2651 1361 2775 2774 2776 2777 2778 1890 2779 2976 3000 1364 1262 1363 2744 2745 1365 2737 2738 2740 2743 2741 2742 1244 2704 2703 2701 1243 2702 1246 1245 2705 1247 2706 2606 3590 3592 3594 1313 2714 1249 1248 2708 1312 2711 2707 1325 2716 2739 1318 2715 2713 2712 1321 2717 2718 1223 1228 2846 2849 1876 2845 2847 1230 2848 1227 2840 2843 2844 1229 2839 1224 2838 1269 1887 2786 2784 1268 2783 1267 2782 2781 1278 2788 2787 1270 1275 1215 1216 2855 2853 2854 1430 1431 1433 1435 1445 1446 1447 2957 2965 2978 2979 2980 2981 2985 2986 2987 2997 2998 2999 3470 3471 3472 1322 1323 1324 2605 2990 2991 2995 2797 2800 1276 2798 2799 1277 1274 3591 3593 1320 3481 2962 3702 1326 1328 3707 3708 }

  techapps               = { 1010 8000 1020 1030 1040 5050 5080 2280 2290 2300 5310 5010 5180 5660 5680 5670 9700 9710 9010 9020 9030 4120 4130 4010 4020 1050 1170 1180 1190 1890 8010 6560 6030 6120 6110 6130 6140 6150 74900 66540 66520 66530 66510 66500 2720 1900 2800 6170 1910 2810 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 9
    professional_army = 3
    defense_lobby     = 8
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 52022 } # 蒋介石 
  headofgovernment       = { type = 9 id = 52029 } # 宋子文 
  foreignminister        = { type = 9 id = 52038 } # 王世杰 
  armamentminister       = { type = 9 id = 52143 } # 俞鴻鈞
  ministerofsecurity     = { type = 9 id = 52142 } # 張厲生
  ministerofintelligence = { type = 9 id = 52078 } # 戴笠 
  chiefofstaff           = { type = 9 id = 52088 } # 白崇禧 
  chiefofarmy            = { type = 9 id = 52099 } # 何应钦 
  chiefofnavy            = { type = 9 id = 52104 } # 桂永清 
  chiefofair             = { type = 9 id = 52010 } # 周至柔 
  nationalidentity       = "policy_economy_Laisser-faire"
  socialpolicy           = "policy_social_confucianism"
  nationalculture        = "policy_political_dignitary"

  landunit = {
    id       = { type = 11616 id = 24 }
    name     = "中央军事委員會"
    location = 1280
    leader   = 50048
    division = {
      id             = { type = 11616 id = 25 }
      name           = "中央军事委员会直属骑兵师"
      type           = cavalry
      model          = 15
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 26 }
      name           = "嫡系官教导总队"
      type           = infantry
      model          = 5
      strength       = 65
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 27 }
      name           = "嫡系军事委员会 "
      type           = hq
      model          = 2
      strength       = 75
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 42 }
    name     = "國民革命军第1军 "
    location = 2788
    division = {
      id             = { type = 11616 id = 43 }
      name           = "陆军第1师（嫡系） "
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 44 }
      name           = "陆军第78师（嫡系）"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 65
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 45 }
      name           = "陆军第167师（嫡系） "
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 75
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 38 }
    name     = "國民革命军第2军 "
    location = 1293
    division = {
      id             = { type = 11616 id = 39 }
      name           = "陆军第9师（嫡系） "
      type           = motorized
      model          = 4
      extra          = artillery
      brigade_model  = 4
      experience     = 60
    }
    division = {
      id             = { type = 11616 id = 40 }
      name           = "陆军第76师（嫡系）"
      type           = motorized
      model          = 4
      extra          = artillery
      brigade_model  = 4
      experience     = 60
    }
    division = {
      id             = { type = 11616 id = 41 }
      name           = "陆军預備第2师（嫡系） "
      type           = motorized
      model          = 4
      extra          = artillery
      brigade_model  = 4
      experience     = 60
    }
  }
  landunit = {
    id       = { type = 11616 id = 35 }
    name     = "國民革命军第3军 "
    location = 1211
    division = {
      id             = { type = 11616 id = 36 }
      name           = "陆军第7师（嫡系） "
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 37 }
      name           = "陆军第12师（嫡系）"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 65
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 32 }
    name     = "國民革命军第4（铁）军 "
    location = 2686
    division = {
      id             = { type = 11616 id = 33 }
      name           = "陆军第59师（嫡系） "
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 83
      experience     = 35
    }
    division = {
      id             = { type = 11616 id = 34 }
      name           = "陆军第90师（嫡系）"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 65
      experience     = 35
    }
    division = {
      id             = { type = 11616 id = 238 }
      name           = "陆军第120师（嫡系）"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 65
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 165 }
    name     = "國民革命军第5(虎羆)军 "
    location = 1232
    leader   = 50069
    division = {
      id             = { type = 11616 id = 166 }
      name           = "陆军第45师（嫡系） "
      type           = mechanized
      model          = 1
      extra          = b_u7
      brigade_model  = 5
      experience     = 60
      locked         = yes
    }
    division = {
      id             = { type = 11616 id = 168 }
      name           = "陆军第96师（嫡系） "
      type           = mechanized
      model          = 1
      extra          = b_u7
      brigade_model  = 5
      experience     = 60
      locked         = yes
    }
    division = {
      id             = { type = 11616 id = 167 }
      name           = "陆军第200（钢铁虎羆）师"
      type           = armor
      model          = 4
      extra          = heavy_armor
      brigade_model  = 2
      experience     = 85
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 11616 id = 28 }
    name     = "國民革命军第6军 "
    location = 1280
    division = {
      id             = { type = 11616 id = 29 }
      name           = "陆军201师（青年军） "
      type           = motorized
      model          = 4
      extra          = artillery
      brigade_model  = 4
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 30 }
      name           = "陆军202师（青年军）"
      type           = infantry
      model          = 5
      extra          = artillery
      brigade_model  = 4
      strength       = 65
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 31 }
      name           = "陆军204师（青年军）"
      type           = infantry
      model          = 5
      extra          = engineer
      brigade_model  = 3
      strength       = 75
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 177 }
    name     = "國民革命军第8军 "
    location = 1227
    division = {
      id             = { type = 11616 id = 178 }
      name           = "陆军荣誉第1（百战精锐）师 "
      type           = motorized
      model          = 4
      extra          = artillery
      brigade_model  = 4
      experience     = 85
    }
    division = {
      id             = { type = 11616 id = 179 }
      name           = "陆军第103师（嫡系）"
      type           = motorized
      model          = 4
      extra          = artillery
      brigade_model  = 4
      experience     = 60
    }
    division = {
      id             = { type = 11616 id = 180 }
      name           = "陆军第166师（嫡系） "
      type           = motorized
      model          = 4
      extra          = artillery
      brigade_model  = 4
      experience     = 60
    }
  }
  landunit = {
    id       = { type = 11616 id = 205 }
    name     = "國民革命军第9军 "
    location = 1227
    division = {
      id             = { type = 11616 id = 206 }
      name           = "陆军205师（青年军）  "
      type           = motorized
      model          = 4
      extra          = artillery
      brigade_model  = 4
      experience     = 85
    }
    division = {
      id             = { type = 11616 id = 207 }
      name           = "陆军206师（青年军） "
      type           = infantry
      model          = 5
      extra          = engineer
      brigade_model  = 5
      experience     = 60
    }
  }
  landunit = {
    id       = { type = 11616 id = 264 }
    name     = "國民革命军第10军 "
    location = 1231
    division = {
      id             = { type = 11616 id = 275 }
      name           = "陆军第3师（嫡系） "
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      experience     = 85
    }
    division = {
      id             = { type = 11616 id = 276 }
      name           = "陆军第20师（嫡系）"
      type           = motorized
      model          = 4
      extra          = artillery
      brigade_model  = 4
      experience     = 60
    }
    division = {
      id             = { type = 11616 id = 277 }
      name           = "陆军新編第1师（嫡系） "
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      experience     = 60
    }
  }
  landunit = {
    id       = { type = 11616 id = 202 }
    name     = "國民革命军第12军 "
    location = 1216
    division = {
      id             = { type = 11616 id = 203 }
      name           = "陆军第111师（旁系東北军） "
      type           = infantry
      model          = 3
      extra          = b_u4
      brigade_model  = 5
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 204 }
      name           = "陆军第112师（旁系東北军）"
      type           = infantry
      model          = 3
      extra          = b_u4
      brigade_model  = 5
      strength       = 65
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 253 }
      name           = "陆军新編第3师（旁系東北军）"
      type           = infantry
      model          = 3
      extra          = b_u4
      brigade_model  = 5
      strength       = 65
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 181 }
    name     = "國民革命军第13军 "
    location = 1203
    division = {
      id             = { type = 11616 id = 182 }
      name           = "陆军第4师（嫡系） "
      type           = motorized
      model          = 4
      extra          = artillery
      brigade_model  = 4
      experience     = 60
      locked         = yes
    }
    division = {
      id             = { type = 11616 id = 183 }
      name           = "陆军第54师（嫡系）"
      type           = motorized
      model          = 4
      extra          = artillery
      brigade_model  = 4
      experience     = 60
      locked         = yes
    }
    division = {
      id             = { type = 11616 id = 184 }
      name           = "陆军第89师（嫡系） "
      type           = motorized
      model          = 4
      extra          = artillery
      brigade_model  = 4
      experience     = 60
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 11616 id = 213 }
    name     = "國民革命军第14军 "
    location = 1203
    division = {
      id             = { type = 11616 id = 214 }
      name           = "陆军第10师（嫡系） "
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      experience     = 60
      locked         = yes
    }
    division = {
      id             = { type = 11616 id = 215 }
      name           = "陆军第83师（嫡系）"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      experience     = 60
      locked         = yes
    }
    division = {
      id             = { type = 11616 id = 216 }
      name           = "陆军第85师（嫡系） "
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      experience     = 60
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 11616 id = 217 }
    name     = "國民革命军第15军 "
    location = 2839
    division = {
      id             = { type = 11616 id = 218 }
      name           = "陆军第64师（杂牌豫军） "
      type           = militia
      model          = 4
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 219 }
      name           = "陆军第135师（杂牌豫军）"
      type           = militia
      model          = 4
      strength       = 65
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 228 }
    name     = "國民革命军第16军 "
    location = 1205
    division = {
      id             = { type = 11616 id = 229 }
      name           = "陆军第22师（嫡系） "
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      experience     = 60
    }
    division = {
      id             = { type = 11616 id = 230 }
      name           = "陆军第94师（嫡系）"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      experience     = 60
    }
    division = {
      id             = { type = 11616 id = 231 }
      name           = "陆军第109师（嫡系） "
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      experience     = 60
    }
  }
  landunit = {
    id       = { type = 11616 id = 220 }
    name     = "國民革命军第17军 "
    location = 2806
    division = {
      id             = { type = 11616 id = 221 }
      name           = "陆军第48师（杂牌陝军） "
      type           = militia
      model          = 4
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 222 }
      name           = "陆军第84师（杂牌陝军）"
      type           = militia
      model          = 4
      strength       = 65
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 76 }
    name     = "國民革命军第18(土木尖兵)军 "
    location = 1237
    leader   = 50120
    division = {
      id             = { type = 11616 id = 77 }
      name           = "陆军第11（土木支柱）师 "
      type           = mechanized
      model          = 1
      extra          = b_u8
      brigade_model  = 0
      experience     = 85
      locked         = yes
    }
    division = {
      id             = { type = 11616 id = 78 }
      name           = "陆军第18师（嫡系）"
      type           = mechanized
      model          = 1
      extra          = b_u7
      brigade_model  = 5
      experience     = 60
      locked         = yes
    }
    division = {
      id             = { type = 11616 id = 79 }
      name           = "陆军第118师（嫡系） "
      type           = mechanized
      model          = 1
      extra          = b_u7
      brigade_model  = 5
      experience     = 60
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 11616 id = 254 }
    name     = "國民革命军第20军 "
    location = 1257
    division = {
      id             = { type = 11616 id = 255 }
      name           = "陆军第133师（旁系川军） "
      type           = militia
      model          = 4
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 256 }
      name           = "陆军第134师（旁系川军）"
      type           = militia
      model          = 4
      strength       = 65
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 257 }
    name     = "國民革命军第21军 "
    location = 1236
    division = {
      id             = { type = 11616 id = 258 }
      name           = "陆军第145师（旁系川军） "
      type           = militia
      model          = 4
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 259 }
      name           = "陆军第146师（旁系川军）"
      type           = militia
      model          = 4
      strength       = 65
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 260 }
      name           = "陆军新編第7师（旁系川军）"
      type           = militia
      model          = 4
      strength       = 65
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 261 }
    name     = "國民革命军第22军 "
    location = 2812
    division = {
      id             = { type = 11616 id = 262 }
      name           = "陆军第86师（杂牌陝军） "
      type           = militia
      model          = 4
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 278 }
      name           = "陆军新編第11旅（杂牌陝军） "
      type           = militia
      model          = 4
      max_strength   = 50
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 263 }
    name     = "國民革命军第24军 "
    location = 1281
    division = {
      id             = { type = 11616 id = 265 }
      name           = "陆军第136师（旁系川军） "
      type           = militia
      model          = 4
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 266 }
      name           = "陆军第137师（旁系川军）"
      type           = militia
      model          = 4
      strength       = 65
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 267 }
    name     = "國民革命军第25军 "
    location = 1220
    division = {
      id             = { type = 11616 id = 268 }
      name           = "陆军第40师（嫡系） "
      type           = motorized
      model          = 4
      extra          = artillery
      brigade_model  = 4
      experience     = 60
    }
    division = {
      id             = { type = 11616 id = 269 }
      name           = "陆军第108师（嫡系） "
      type           = motorized
      model          = 4
      extra          = artillery
      brigade_model  = 4
      experience     = 60
    }
    division = {
      id             = { type = 11616 id = 270 }
      name           = "陆军第148师（嫡系） "
      type           = motorized
      model          = 4
      extra          = artillery
      brigade_model  = 4
      experience     = 60
    }
  }
  landunit = {
    id       = { type = 11616 id = 279 }
    name     = "國民革命军第26军 "
    location = 1255
    division = {
      id             = { type = 11616 id = 280 }
      name           = "陆军第41师（嫡系） "
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      experience     = 60
    }
    division = {
      id             = { type = 11616 id = 281 }
      name           = "陆军第44师（嫡系）"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      experience     = 60
    }
    division = {
      id             = { type = 11616 id = 282 }
      name           = "陆军第148师（嫡系） "
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      experience     = 60
    }
  }
  landunit = {
    id       = { type = 11616 id = 249 }
    name     = "國民革命军第27军 "
    location = 1228
    division = {
      id             = { type = 11616 id = 250 }
      name           = "陆军第31师（嫡系） "
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      experience     = 60
    }
    division = {
      id             = { type = 11616 id = 251 }
      name           = "陆军第47师（嫡系）"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      experience     = 60
    }
    division = {
      id             = { type = 11616 id = 252 }
      name           = "陆军第49师（嫡系） "
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      experience     = 60
    }
  }
  landunit = {
    id       = { type = 11616 id = 271 }
    name     = "國民革命军第28军 "
    location = 1218
    division = {
      id             = { type = 11616 id = 272 }
      name           = "陆军第52师（嫡系） "
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 273 }
      name           = "陆军第80师（嫡系）"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 65
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 274 }
      name           = "陆军第192师（嫡系）"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 65
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 14 }
    name     = "國民革命军第30军 "
    location = 1887
    division = {
      id             = { type = 11616 id = 300 }
      name           = "陆军第27师（旁系西北军） "
      type           = militia
      model          = 4
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 15 }
      name           = "陆军第30师（旁系西北军） "
      type           = militia
      model          = 4
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 16 }
      name           = "陆军第67师（旁系西北军）"
      type           = militia
      model          = 4
      strength       = 65
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 161 }
    name     = "國民革命军第31军 "
    location = 1253
    division = {
      id             = { type = 11616 id = 162 }
      name           = "陆军第208师（青年军） "
      type           = motorized
      model          = 4
      extra          = artillery
      brigade_model  = 4
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 163 }
      name           = "陆军第209师（青年军）"
      type           = infantry
      model          = 5
      extra          = engineer
      brigade_model  = 3
      strength       = 65
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 22002 id = 40 }
    name     = "國民革命军第32军 "
    location = 2838
    division = {
      id             = { type = 22002 id = 41 }
      name           = "陆军第139师（旁系晋军） "
      type           = militia
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 22002 id = 42 }
      name           = "陆军第141师（旁系晋军）"
      type           = militia
      model          = 4
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 22002 id = 1 }
    name     = "國民革命军第35(晋绥之剑）军 "
    location = 1208
    division = {
      id             = { type = 22002 id = 2 }
      name           = "陆军第101师（旁系晋军） "
      type           = infantry
      model          = 5
      extra          = artillery
      brigade_model  = 4
      experience     = 35
    }
    division = {
      id             = { type = 22002 id = 3 }
      name           = "新編第31师（旁系晋军） "
      type           = infantry
      model          = 5
      extra          = artillery
      brigade_model  = 4
      experience     = 35
    }
    division = {
      id             = { type = 22002 id = 4 }
      name           = "新編第32师（旁系晋军） "
      type           = infantry
      model          = 5
      extra          = artillery
      brigade_model  = 4
      experience     = 35
    }
  }
  landunit = {
    id       = { type = 11616 id = 95 }
    name     = "國民革命军第36军 "
    location = 1275
    division = {
      id             = { type = 11616 id = 96 }
      name           = "陆军第28师（嫡系） "
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 107 }
      name           = "陆军第123师（嫡系） "
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 108 }
      name           = "陆军第165师（嫡系） "
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 83
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 11 }
    name     = "國民革命军第38军 "
    location = 1228
    division = {
      id             = { type = 11616 id = 13 }
      name           = "陆军第17师（杂牌陝军）"
      type           = militia
      model          = 4
      strength       = 65
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 301 }
      name           = "陆军第55师（杂牌陝军）"
      type           = militia
      model          = 4
      strength       = 65
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 12 }
      name           = "陆军第177师（杂牌陝军） "
      type           = militia
      model          = 4
      strength       = 83
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 17 }
    name     = "國民革命军第40军 "
    location = 1224
    division = {
      id             = { type = 11616 id = 18 }
      name           = "陆军第39师（旁系西北军） "
      type           = militia
      model          = 4
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 302 }
      name           = "陆军第106师（旁系西北军） "
      type           = militia
      model          = 4
      strength       = 83
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 145 }
    name     = "國民革命军第41军 "
    location = 2845
    division = {
      id             = { type = 11616 id = 146 }
      name           = "陆军第104师（旁系川军） "
      type           = militia
      model          = 4
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 148 }
      name           = "陆军第122师（旁系川军） "
      type           = militia
      model          = 4
      strength       = 75
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 147 }
      name           = "陆军第124师（旁系川军）"
      type           = militia
      model          = 4
      strength       = 65
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 8 }
    name     = "國民革命军第42军 "
    location = 1435
    division = {
      id             = { type = 11616 id = 9 }
      name           = "陆军第128师（嫡系） "
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 10 }
      name           = "陆军預備第7师（嫡系）"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 65
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 303 }
      name           = "陆军暫編第58师（嫡系）"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 65
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 127 }
    name     = "國民革命军第44军 "
    location = 1233
    division = {
      id             = { type = 11616 id = 128 }
      name           = "陆军第150师（旁系川军） "
      type           = militia
      model          = 4
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 129 }
      name           = "陆军第162师（旁系川军）"
      type           = militia
      model          = 4
      strength       = 65
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 133 }
      name           = "陆军暫編第25师（旁系川军）"
      type           = militia
      model          = 4
      strength       = 65
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 142 }
    name     = "國民革命军第47军 "
    location = 1278
    division = {
      id             = { type = 11616 id = 143 }
      name           = "陆军第127师（旁系川军） "
      type           = militia
      model          = 4
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 144 }
      name           = "陆军第125师（旁系川军）"
      type           = militia
      model          = 4
      strength       = 65
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 101 }
    name     = "國民革命军第49军 "
    location = 2627
    division = {
      id             = { type = 11616 id = 102 }
      name           = "陆军第26师（旁系東北军） "
      type           = infantry
      model          = 3
      extra          = b_u4
      brigade_model  = 5
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 103 }
      name           = "陆军第79师（旁系東北军）"
      type           = infantry
      model          = 3
      extra          = b_u4
      brigade_model  = 5
      strength       = 65
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 109 }
      name           = "陆军第105师（旁系東北军）"
      type           = infantry
      model          = 3
      extra          = b_u4
      brigade_model  = 5
      strength       = 65
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 152 }
    name     = "國民革命军第50军 "
    location = 1887
    division = {
      id             = { type = 11616 id = 153 }
      name           = "陆军第163师（旁系川军） "
      type           = militia
      model          = 4
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 164 }
      name           = "陆军第164师（旁系川军） "
      type           = militia
      model          = 4
      strength       = 83
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 117 }
    name     = "國民革命军第51军 "
    location = 1216
    division = {
      id             = { type = 11616 id = 118 }
      name           = "陆军第113师（旁系東北军） "
      type           = infantry
      model          = 3
      extra          = b_u4
      brigade_model  = 5
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 119 }
      name           = "陆军第114师（旁系東北军）"
      type           = infantry
      model          = 3
      extra          = b_u4
      brigade_model  = 5
      strength       = 65
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 21 }
    name     = "國民革命军第52（千里驹）军 "
    location = 1203
    division = {
      id             = { type = 11616 id = 23 }
      name           = "陆军第2师（嫡系）"
      type           = motorized
      model          = 4
      extra          = artillery
      brigade_model  = 4
      experience     = 35
      locked         = yes
    }
    division = {
      id             = { type = 11616 id = 22 }
      name           = "陆军第25（千里驹）师 "
      type           = motorized
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      experience     = 60
      locked         = yes
    }
    division = {
      id             = { type = 11616 id = 237 }
      name           = "陆军第95（赵子龙）师"
      type           = motorized
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      experience     = 60
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 11616 id = 97 }
    name     = "國民革命军第53军 "
    location = 1203
    division = {
      id             = { type = 11616 id = 98 }
      name           = "陆军第116师（東北军） "
      type           = motorized
      model          = 4
      extra          = artillery
      brigade_model  = 4
      experience     = 60
      locked         = yes
    }
    division = {
      id             = { type = 11616 id = 99 }
      name           = "陆军第130师（東北军）"
      type           = motorized
      model          = 4
      extra          = artillery
      brigade_model  = 4
      experience     = 60
      locked         = yes
    }
    division = {
      id             = { type = 11616 id = 100 }
      name           = "陆军荣誉第2师（嫡系） "
      type           = motorized
      model          = 4
      extra          = artillery
      brigade_model  = 4
      experience     = 60
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 11616 id = 185 }
    name     = "國民革命军第54军 "
    location = 1313
    division = {
      id             = { type = 11616 id = 187 }
      name           = "陆军第63师（嫡系）"
      type           = motorized
      model          = 4
      extra          = artillery
      brigade_model  = 4
      experience     = 60
    }
    division = {
      id             = { type = 11616 id = 188 }
      name           = "陆军第198师（嫡系） "
      type           = motorized
      model          = 4
      extra          = artillery
      brigade_model  = 4
      experience     = 60
    }
    division = {
      id             = { type = 11616 id = 186 }
      name           = "陆军新編第8师（嫡系） "
      type           = motorized
      model          = 4
      extra          = artillery
      brigade_model  = 4
      experience     = 60
    }
  }
  landunit = {
    id       = { type = 11616 id = 114 }
    name     = "國民革命军第55军 "
    location = 2849
    division = {
      id             = { type = 11616 id = 115 }
      name           = "陆军第29师（旁系西北军） "
      type           = militia
      model          = 4
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 116 }
      name           = "陆军第74师（旁系西北军）"
      type           = militia
      model          = 4
      strength       = 65
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 122 }
      name           = "陆军第181师（旁系西北军）"
      type           = militia
      model          = 4
      strength       = 65
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 124 }
    name     = "國民革命军第56军 "
    location = 1280
    division = {
      id             = { type = 11616 id = 125 }
      name           = "陆军第163师（旁系川军） "
      type           = militia
      model          = 4
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 126 }
      name           = "陆军第164师（旁系川军）"
      type           = militia
      model          = 4
      strength       = 65
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 134 }
      name           = "陆军新編第17师（旁系川军）"
      type           = militia
      model          = 4
      strength       = 65
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 195 }
    name     = "國民革命军第59军 "
    location = 1218
    division = {
      id             = { type = 11616 id = 196 }
      name           = "陆军第38师（旁系西北军） "
      type           = militia
      model          = 4
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 283 }
      name           = "陆军第180师（旁系西北军） "
      type           = militia
      model          = 4
      strength       = 83
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 59 }
    name     = "國民革命军第62军 "
    location = 2991
    division = {
      id             = { type = 11616 id = 68 }
      name           = "陆军第95师（旁系粤军） "
      type           = motorized
      model          = 4
      extra          = artillery
      brigade_model  = 4
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 60 }
      name           = "陆军第151师（旁系粤军） "
      type           = motorized
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 61 }
      name           = "陆军第157师（旁系粤军）"
      type           = motorized
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 53 }
    name     = "國民革命军第63军 "
    location = 1313
    division = {
      id             = { type = 11616 id = 55 }
      name           = "陆军第152师（旁系粤军）"
      type           = militia
      model          = 4
      strength       = 65
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 54 }
      name           = "陆军第153师（旁系粤军） "
      type           = militia
      model          = 4
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 69 }
      name           = "陆军第186师（旁系粤军）"
      type           = militia
      model          = 4
      strength       = 65
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 50 }
    name     = "國民革命军第64军 "
    location = 2713
    division = {
      id             = { type = 11616 id = 51 }
      name           = "陆军第131师（旁系粤军） "
      type           = militia
      model          = 4
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 52 }
      name           = "陆军第156师（旁系粤军）"
      type           = militia
      model          = 4
      strength       = 65
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 70 }
      name           = "陆军第159师（旁系粤军）"
      type           = militia
      model          = 4
      strength       = 65
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 56 }
    name     = "國民革命军第65军 "
    location = 2637
    division = {
      id             = { type = 11616 id = 57 }
      name           = "陆军第154师（旁系粤军） "
      type           = militia
      model          = 4
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 58 }
      name           = "陆军第160师（旁系粤军）"
      type           = militia
      model          = 4
      strength       = 65
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 71 }
      name           = "陆军第187师（旁系粤军）"
      type           = militia
      model          = 4
      strength       = 65
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 62 }
    name     = "國民革命军第66军 "
    location = 1230
    division = {
      id             = { type = 11616 id = 63 }
      name           = "陆军第13师（嫡系） "
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 64 }
      name           = "陆军第185师（嫡系）"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 65
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 80 }
      name           = "陆军第193师（嫡系）"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 65
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 111 }
    name     = "國民革命军第67军 "
    location = 1208
    division = {
      id             = { type = 11616 id = 112 }
      name           = "陆军新編第22师（嫡系） "
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 113 }
      name           = "陆军騎兵第7师（嫡系）"
      type           = cavalry
      model          = 14
      strength       = 65
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 193 }
    name     = "國民革命军第68军 "
    location = 1223
    division = {
      id             = { type = 11616 id = 194 }
      name           = "陆军第81师（旁系西北军） "
      type           = militia
      model          = 4
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 284 }
      name           = "陆军第119师（旁系西北军） "
      type           = militia
      model          = 4
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 285 }
      name           = "陆军第143师（旁系西北军） "
      type           = militia
      model          = 4
      strength       = 83
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 90 }
    name     = "國民革命军第70军 "
    location = 1323
    division = {
      id             = { type = 11616 id = 91 }
      name           = "陆军第75师（嫡系） "
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 110 }
      name           = "陆军第107师（嫡系） "
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 83
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 46 }
    name     = "國民革命军第71军 "
    location = 1203
    division = {
      id             = { type = 11616 id = 48 }
      name           = "陆军第87师（嫡系）"
      type           = motorized
      model          = 4
      extra          = artillery
      brigade_model  = 4
      experience     = 60
      locked         = yes
    }
    division = {
      id             = { type = 11616 id = 49 }
      name           = "陆军第88师（嫡系） "
      type           = motorized
      model          = 4
      extra          = artillery
      brigade_model  = 4
      experience     = 60
      locked         = yes
    }
    division = {
      id             = { type = 11616 id = 47 }
      name           = "陆军第91师（嫡系） "
      type           = motorized
      model          = 4
      extra          = artillery
      brigade_model  = 4
      experience     = 60
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 11616 id = 92 }
    name     = "國民革命军第72军 "
    location = 1204
    division = {
      id             = { type = 11616 id = 93 }
      name           = "陆军第34师（旁系川军） "
      type           = militia
      model          = 4
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 123 }
      name           = "陆军新編第13师（旁系川军） "
      type           = militia
      model          = 4
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 135 }
      name           = "陆军新編第15师（旁系川军） "
      type           = militia
      model          = 4
      strength       = 83
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 86 }
    name     = "國民革命军第73军 "
    location = 2617
    division = {
      id             = { type = 11616 id = 87 }
      name           = "陆军第15师（旁系湘军） "
      type           = motorized
      model          = 4
      extra          = artillery
      brigade_model  = 4
      experience     = 60
    }
    division = {
      id             = { type = 11616 id = 88 }
      name           = "陆军第77师（旁系湘军）"
      type           = motorized
      model          = 4
      extra          = artillery
      brigade_model  = 4
      experience     = 60
    }
    division = {
      id             = { type = 11616 id = 89 }
      name           = "陆军第193师（嫡系） "
      type           = motorized
      model          = 4
      extra          = artillery
      brigade_model  = 4
      experience     = 60
    }
  }
  landunit = {
    id       = { type = 11616 id = 72 }
    name     = "國民革命军第74(御林)军 "
    location = 1235
    leader   = 50014
    division = {
      id             = { type = 11616 id = 73 }
      name           = "陆军第51（飞虎奇兵）师 "
      type           = mechanized
      model          = 1
      extra          = b_u8
      brigade_model  = 0
      experience     = 85
      locked         = yes
    }
    division = {
      id             = { type = 11616 id = 74 }
      name           = "陆军第57（御林虎贲）师"
      type           = mechanized
      model          = 1
      extra          = b_u8
      brigade_model  = 0
      experience     = 85
      locked         = yes
    }
    division = {
      id             = { type = 11616 id = 75 }
      name           = "陆军第58（民族铁骨）师 "
      type           = mechanized
      model          = 1
      extra          = b_u8
      brigade_model  = 0
      experience     = 85
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 11616 id = 65 }
    name     = "國民革命军第75军 "
    location = 2662
    division = {
      id             = { type = 11616 id = 66 }
      name           = "陆军第16师（嫡系） "
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 67 }
      name           = "陆军第76师（嫡系）"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 65
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 305 }
    name     = "國民革命军第76军 "
    location = 1269
    division = {
      id             = { type = 11616 id = 306 }
      name           = "陆军第24师（嫡系） "
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 307 }
      name           = "陆军第144师（嫡系）"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 65
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 199 }
    name     = "國民革命军第77军 "
    location = 1218
    division = {
      id             = { type = 11616 id = 201 }
      name           = "陆军第37师（旁系西北军）"
      type           = militia
      model          = 4
      strength       = 65
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 200 }
      name           = "陆军第132师（旁系西北军） "
      type           = militia
      model          = 4
      strength       = 83
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 130 }
    name     = "國民革命军第79军 "
    location = 2776
    division = {
      id             = { type = 11616 id = 132 }
      name           = "陆军第98师（嫡系）"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 65
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 131 }
      name           = "陆军第194师（杂牌湖北军） "
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 136 }
      name           = "陆军暫編第2师（嫡系）"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 65
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 154 }
    name     = "國民革命军第80军 "
    location = 2788
    division = {
      id             = { type = 11616 id = 155 }
      name           = "陆军新編第27师（嫡系） "
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 156 }
      name           = "陆军新編第37师（嫡系）"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 65
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 140 }
    name     = "國民革命军第85军 "
    location = 1215
    division = {
      id             = { type = 11616 id = 141 }
      name           = "陆军第23师（嫡系） "
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 149 }
      name           = "陆军第110师（嫡系） "
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 83
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 157 }
    name     = "國民革命军第88军 "
    location = 1218
    division = {
      id             = { type = 11616 id = 286 }
      name           = "陆军第62师（嫡系） "
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 158 }
      name           = "陆军新編第21师（嫡系） "
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 83
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 159 }
    name     = "國民革命军第90军 "
    location = 1227
    division = {
      id             = { type = 11616 id = 160 }
      name           = "陆军第53师（嫡系） "
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 287 }
      name           = "陆军第61师（嫡系） "
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 83
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 197 }
    name     = "國民革命军第91军 "
    location = 1440
    division = {
      id             = { type = 11616 id = 198 }
      name           = "陆军第191师（嫡系） "
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 288 }
      name           = "陆军新編第4师（嫡系） "
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 83
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 232 }
    name     = "國民革命军第92军 "
    location = 1205
    division = {
      id             = { type = 11616 id = 239 }
      name           = "陆军第21师（嫡系） "
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 289 }
      name           = "陆军第56师（嫡系） "
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 290 }
      name           = "陆军第142师（嫡系） "
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 83
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 189 }
    name     = "國民革命军第94军 "
    location = 1204
    division = {
      id             = { type = 11616 id = 190 }
      name           = "陆军第5师（嫡系） "
      type           = motorized
      model          = 4
      extra          = artillery
      brigade_model  = 4
      experience     = 60
    }
    division = {
      id             = { type = 11616 id = 191 }
      name           = "陆军第43师（嫡系）"
      type           = motorized
      model          = 4
      extra          = artillery
      brigade_model  = 4
      experience     = 60
    }
    division = {
      id             = { type = 11616 id = 192 }
      name           = "陆军第121师（嫡系） "
      type           = motorized
      model          = 4
      extra          = artillery
      brigade_model  = 4
      experience     = 60
    }
  }
  landunit = {
    id       = { type = 11616 id = 240 }
    name     = "國民革命军第95军 "
    location = 1360
    division = {
      id             = { type = 11616 id = 241 }
      name           = "陆军第126师（旁系川军） "
      type           = militia
      model          = 4
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 242 }
      name           = "陆军新編第9师（旁系川军）"
      type           = militia
      model          = 4
      strength       = 65
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 243 }
    name     = "國民革命军第96军 "
    location = 1216
    division = {
      id             = { type = 11616 id = 244 }
      name           = "陆军暫編第12师（旁系東北军） "
      type           = infantry
      model          = 3
      extra          = b_u4
      brigade_model  = 5
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 245 }
      name           = "陆军暫編第14师（旁系東北军） "
      type           = infantry
      model          = 3
      extra          = b_u4
      brigade_model  = 5
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 291 }
      name           = "陆军暫編第15师（旁系東北军） "
      type           = infantry
      model          = 3
      extra          = b_u4
      brigade_model  = 5
      strength       = 83
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 5 }
    name     = "國民革命军第97军 "
    location = 2854
    division = {
      id             = { type = 11616 id = 6 }
      name           = "陆军第32师（嫡系） "
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 7 }
      name           = "陆军第82师（嫡系）"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 65
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 304 }
      name           = "陆军新編第20师（嫡系）"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 65
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 137 }
    name     = "國民革命军第98军 "
    location = 1217
    division = {
      id             = { type = 11616 id = 138 }
      name           = "陆军第117师（嫡系） "
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 139 }
      name           = "陆军預備第4师（嫡系）"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 65
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 19 }
    name     = "國民革命军第99军 "
    location = 1252
    division = {
      id             = { type = 11616 id = 20 }
      name           = "陆军第60师（嫡系） "
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 308 }
      name           = "陆军第92师（嫡系）"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 65
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 81 }
      name           = "陆军第99师（嫡系）"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 65
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 83 }
    name     = "國民革命军第100军 "
    location = 2626
    division = {
      id             = { type = 11616 id = 84 }
      name           = "陆军第19师（嫡系） "
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 85 }
      name           = "陆军第63师（嫡系）"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 65
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 150 }
      name           = "陆军預備第9师（嫡系）"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 65
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 169 }
    name     = "國民革命军新编第1(天下第一)军 "
    location = 1203
    leader   = 50265
    division = {
      id             = { type = 11616 id = 172 }
      name           = "陆军第50师（嫡系） "
      type           = bergsjaeger
      model          = 4
      extra          = engineer
      brigade_model  = 4
      experience     = 85
      locked         = yes
    }
    division = {
      id             = { type = 11616 id = 170 }
      name           = "陆军新编第38（天下第一）师 "
      type           = mechanized
      model          = 1
      extra          = b_u8
      brigade_model  = 0
      experience     = 85
      locked         = yes
    }
    division = {
      id             = { type = 11616 id = 171 }
      name           = "陆军新编第30师（嫡系）"
      type           = bergsjaeger
      model          = 4
      extra          = engineer
      brigade_model  = 4
      experience     = 85
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 11616 id = 94 }
    name     = "國民革命军新编第2军 "
    location = 1433
    division = {
      id             = { type = 11616 id = 120 }
      name           = "陆军新编第45师（嫡系） "
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 121 }
      name           = "陆军新编第46师（嫡系）"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      strength       = 65
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 173 }
    name     = "國民革命军新编第6(御虎)军 "
    location = 1203
    leader   = 50195
    division = {
      id             = { type = 11616 id = 174 }
      name           = "陆军新编第22（中國虎）师 "
      type           = mechanized
      model          = 1
      extra          = b_u8
      brigade_model  = 0
      experience     = 85
      locked         = yes
    }
    division = {
      id             = { type = 11616 id = 175 }
      name           = "陆军新编第14（西北健旅）师"
      type           = mechanized
      model          = 1
      extra          = b_u8
      brigade_model  = 0
      experience     = 85
      locked         = yes
    }
    division = {
      id             = { type = 11616 id = 176 }
      name           = "陆军第207师（嫡系） "
      type           = bergsjaeger
      model          = 4
      extra          = engineer
      brigade_model  = 4
      experience     = 85
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 11616 id = 246 }
    name     = "國民革命军新编第8军 "
    location = 2838
    division = {
      id             = { type = 11616 id = 247 }
      name           = "陆军新编第6师（旁系西北军） "
      type           = militia
      model          = 4
      strength       = 83
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 248 }
      name           = "陆军暫编第29师（旁系西北军）"
      type           = militia
      model          = 4
      strength       = 65
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 22002 id = 32 }
    name     = "國民革命军暫編第3军 "
    location = 2813
    division = {
      id             = { type = 22002 id = 33 }
      name           = "暫編第10师（旁系晋军） "
      type           = militia
      model          = 2
      experience     = 15
    }
    division = {
      id             = { type = 22002 id = 34 }
      name           = "暫編第11师（旁系晋军） "
      type           = militia
      model          = 2
      experience     = 15
    }
    division = {
      id             = { type = 22002 id = 35 }
      name           = "暫編第17师（旁系晋军）"
      type           = militia
      model          = 2
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 310 }
    name     = "國民革命军暫編第2军 "
    location = 2681
    division = {
      id             = { type = 11616 id = 311 }
      name           = "陆军預備第6师（旁系粤军） "
      type           = militia
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 312 }
      name           = "陆军暫編第7师（旁系粤军） "
      type           = militia
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 313 }
      name           = "陆军暫編第8师（旁系粤军）"
      type           = militia
      model          = 4
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 314 }
    name     = "國民革命军暫編第4军 "
    location = 1268
    division = {
      id             = { type = 11616 id = 315 }
      name           = "陆军第47师（嫡系） "
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 316 }
      name           = "陆军暫編第4师（嫡系） "
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 5
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 104 }
    name     = "國民革命军骑兵第3军 "
    location = 1228
    division = {
      id             = { type = 11616 id = 106 }
      name           = "陆军骑兵第9师（嫡系）"
      type           = cavalry
      model          = 14
      strength       = 65
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 105 }
      name           = "陆军骑兵第10师（嫡系） "
      type           = cavalry
      model          = 14
      strength       = 83
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 317 }
    name     = "國民革命军骑兵第4军 "
    location = 2813
    division = {
      id             = { type = 11616 id = 318 }
      name           = "陆军骑兵第1师（旁系晋军） "
      type           = cavalry
      model          = 14
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 319 }
      name           = "陆军骑兵第2师（旁系晋军）"
      type           = cavalry
      model          = 14
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 1 }
    name     = "江蘇省保安司令部"
    location = 1235
    division = {
      id             = { type = 11616 id = 2 }
      name           = "江蘇省保安團"
      type           = militia
      model          = 4
    }
    division = {
      id             = { type = 11616 id = 4 }
      name           = "江蘇省民防團"
      type           = militia
      model          = 4
    }
  }
  landunit = {
    id       = { type = 11616 id = 82 }
    name     = "浙江省保安司令部"
    location = 1238
    division = {
      id             = { type = 11616 id = 151 }
      name           = "浙江省保安團"
      type           = militia
      model          = 4
    }
    division = {
      id             = { type = 11616 id = 224 }
      name           = "浙江省民防團"
      type           = militia
      model          = 4
    }
  }
  landunit = {
    id       = { type = 11616 id = 225 }
    name     = "安徽省保安司令部"
    location = 1221
    division = {
      id             = { type = 11616 id = 226 }
      name           = "安徽省保安團 "
      type           = militia
      model          = 4
    }
    division = {
      id             = { type = 11616 id = 233 }
      name           = "安徽省民防團 "
      type           = militia
      model          = 4
    }
  }
  landunit = {
    id       = { type = 11616 id = 234 }
    name     = "福建省保安司令部"
    location = 1244
    division = {
      id             = { type = 11616 id = 235 }
      name           = "福建省保安團 "
      type           = militia
      model          = 4
    }
    division = {
      id             = { type = 11616 id = 292 }
      name           = "福建省民防團 "
      type           = militia
      model          = 4
    }
  }
  landunit = {
    id       = { type = 11616 id = 293 }
    name     = "江西省保安司令部"
    location = 1251
    division = {
      id             = { type = 11616 id = 294 }
      name           = "江西省保安團 "
      type           = militia
      model          = 4
    }
    division = {
      id             = { type = 11616 id = 296 }
      name           = "江西省民防團 "
      type           = militia
      model          = 4
    }
  }
  landunit = {
    id       = { type = 11616 id = 297 }
    name     = "河南省保安司令部"
    location = 1223
    division = {
      id             = { type = 11616 id = 298 }
      name           = "河南省保安團 "
      type           = militia
      model          = 4
    }
    division = {
      id             = { type = 11616 id = 309 }
      name           = "河南省民防團 "
      type           = militia
      model          = 4
    }
  }
  landunit = {
    id       = { type = 11616 id = 320 }
    name     = "湖北省保安司令部"
    location = 1232
    division = {
      id             = { type = 11616 id = 321 }
      name           = "湖北省保安團 "
      type           = militia
      model          = 4
    }
    division = {
      id             = { type = 11616 id = 341 }
      name           = "湖北省民防團 "
      type           = militia
      model          = 4
    }
  }
  landunit = {
    id       = { type = 11616 id = 342 }
    name     = "湖南省保安司令部"
    location = 1255
    division = {
      id             = { type = 11616 id = 343 }
      name           = "湖南省保安團 "
      type           = militia
      model          = 4
    }
    division = {
      id             = { type = 11616 id = 345 }
      name           = "湖南省民防團 "
      type           = militia
      model          = 4
    }
  }
  landunit = {
    id       = { type = 11616 id = 346 }
    name     = "山東省保安司令部"
    location = 1216
    division = {
      id             = { type = 11616 id = 347 }
      name           = "山東省保安團 "
      type           = militia
      model          = 4
    }
    division = {
      id             = { type = 11616 id = 349 }
      name           = "山東省民防團 "
      type           = militia
      model          = 4
    }
  }
  landunit = {
    id       = { type = 11616 id = 350 }
    name     = "河北省保安司令部"
    location = 1205
    division = {
      id             = { type = 11616 id = 351 }
      name           = "河北省保安團 "
      type           = militia
      model          = 4
    }
    division = {
      id             = { type = 11616 id = 353 }
      name           = "河北省民防團 "
      type           = militia
      model          = 4
    }
  }
  landunit = {
    id       = { type = 11616 id = 354 }
    name     = "陝西省保安司令部"
    location = 1269
    division = {
      id             = { type = 11616 id = 355 }
      name           = "陝西省保安團 "
      type           = militia
      model          = 4
    }
    division = {
      id             = { type = 11616 id = 357 }
      name           = "陝西省民防團 "
      type           = militia
      model          = 4
    }
  }
  landunit = {
    id       = { type = 11616 id = 358 }
    name     = "甘肅省保安司令部"
    location = 1276
    division = {
      id             = { type = 11616 id = 359 }
      name           = "甘肅省保安團 "
      type           = militia
      model          = 4
    }
    division = {
      id             = { type = 11616 id = 361 }
      name           = "甘肅省民防團 "
      type           = militia
      model          = 4
    }
  }
  landunit = {
    id       = { type = 11616 id = 362 }
    name     = "四川省保安司令部"
    location = 1360
    division = {
      id             = { type = 11616 id = 363 }
      name           = "四川省保安團 "
      type           = militia
      model          = 4
    }
    division = {
      id             = { type = 11616 id = 365 }
      name           = "四川省民防團 "
      type           = militia
      model          = 4
    }
  }
  landunit = {
    id       = { type = 11616 id = 366 }
    name     = "貴州省保安司令部"
    location = 1364
    division = {
      id             = { type = 11616 id = 367 }
      name           = "貴州省保安團 "
      type           = militia
      model          = 4
    }
    division = {
      id             = { type = 11616 id = 369 }
      name           = "貴州省民防團 "
      type           = militia
      model          = 4
    }
  }
  landunit = {
    id       = { type = 11616 id = 370 }
    name     = "西康省保安司令部"
    location = 1281
    division = {
      id             = { type = 11616 id = 371 }
      name           = "西康省保安團 "
      type           = militia
      model          = 4
    }
    division = {
      id             = { type = 11616 id = 373 }
      name           = "西康省民防團 "
      type           = militia
      model          = 4
    }
  }
  landunit = {
    id       = { type = 11616 id = 374 }
    name     = "新疆省警備總司令部"
    location = 1433
    division = {
      id             = { type = 11616 id = 375 }
      name           = "新疆省保安團 "
      type           = militia
      model          = 4
    }
    division = {
      id             = { type = 11616 id = 376 }
      name           = "新疆省員警總队 "
      type           = militia
      model          = 4
    }
    division = {
      id             = { type = 11616 id = 377 }
      name           = "新疆省民防團 "
      type           = militia
      model          = 4
    }
  }
  landunit = {
    id       = { type = 11616 id = 378 }
    name     = "廣東省保安司令部"
    location = 1313
    division = {
      id             = { type = 11616 id = 379 }
      name           = "廣東省保安團 "
      type           = militia
      model          = 4
    }
    division = {
      id             = { type = 11616 id = 381 }
      name           = "廣東省民防團 "
      type           = militia
      model          = 4
    }
  }
  landunit = {
    id       = { type = 11616 id = 382 }
    name     = "臺灣省警備總司令部"
    location = 1323
    division = {
      id             = { type = 11616 id = 383 }
      name           = "台灣省保安團 "
      type           = militia
      model          = 4
      locked         = yes
    }
    division = {
      id             = { type = 11616 id = 384 }
      name           = "台灣省員警總队 "
      type           = militia
      model          = 4
      locked         = yes
    }
    division = {
      id             = { type = 11616 id = 385 }
      name           = "台灣省民防團 "
      type           = militia
      model          = 4
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 11616 id = 386 }
    name     = "鄭州警備司令部"
    location = 1228
    division = {
      id             = { type = 11616 id = 387 }
      name           = "鄭州保安大队"
      type           = militia
      model          = 4
      extra          = none
      brigade_model  = 0
      locked         = yes
    }
    division = {
      id             = { type = 11616 id = 388 }
      name           = "鄭州員警大队"
      type           = militia
      model          = 4
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 11616 id = 389 }
    name     = "北平警備司令部"
    location = 1205
    division = {
      id             = { type = 11616 id = 390 }
      name           = "北平保安大队"
      type           = militia
      model          = 4
      extra          = police
      brigade_model  = 1
      locked         = yes
    }
    division = {
      id             = { type = 11616 id = 391 }
      name           = "北平員警大队"
      type           = militia
      model          = 4
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 11616 id = 392 }
    name     = "天津警備司令部"
    location = 1204
    division = {
      id             = { type = 11616 id = 393 }
      name           = "天津保安大队"
      type           = militia
      model          = 4
      extra          = none
      brigade_model  = 0
      locked         = yes
    }
    division = {
      id             = { type = 11616 id = 394 }
      name           = "天津員警大队"
      type           = militia
      model          = 4
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 11616 id = 395 }
    name     = "徐州警備司令部"
    location = 1218
    division = {
      id             = { type = 11616 id = 396 }
      name           = "徐州保安大队"
      type           = militia
      model          = 4
      extra          = none
      brigade_model  = 0
      locked         = yes
    }
    division = {
      id             = { type = 11616 id = 397 }
      name           = "徐州員警大队"
      type           = militia
      model          = 4
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 11616 id = 398 }
    name     = "保定警備司令部"
    location = 1210
    division = {
      id             = { type = 11616 id = 399 }
      name           = "保定保安大队"
      type           = militia
      model          = 4
      extra          = none
      brigade_model  = 0
      locked         = yes
    }
    division = {
      id             = { type = 11616 id = 400 }
      name           = "保定員警大队"
      type           = militia
      model          = 4
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 11616 id = 401 }
    name     = "石家莊警備司令部"
    location = 1211
    division = {
      id             = { type = 11616 id = 402 }
      name           = "石家莊保安大队"
      type           = militia
      model          = 4
      extra          = none
      brigade_model  = 0
      locked         = yes
    }
    division = {
      id             = { type = 11616 id = 403 }
      name           = "石家莊員警大队"
      type           = militia
      model          = 4
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 11616 id = 406 }
    name     = "濟南警備司令部"
    location = 1216
    division = {
      id             = { type = 11616 id = 407 }
      name           = "濟南保安大队"
      type           = militia
      model          = 4
      extra          = none
      brigade_model  = 0
      locked         = yes
    }
    division = {
      id             = { type = 11616 id = 408 }
      name           = "濟南員警大队"
      type           = militia
      model          = 4
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 11616 id = 409 }
    name     = "蘭州警備司令部"
    location = 1276
    division = {
      id             = { type = 11616 id = 410 }
      name           = "蘭州保安大队"
      type           = militia
      model          = 4
      extra          = none
      brigade_model  = 0
      locked         = yes
    }
    division = {
      id             = { type = 11616 id = 411 }
      name           = "蘭州員警大队"
      type           = militia
      model          = 4
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 11616 id = 416 }
    name     = "青島警備司令部"
    location = 1215
    division = {
      id             = { type = 11616 id = 417 }
      name           = "青島保安大队"
      type           = militia
      model          = 4
      extra          = none
      brigade_model  = 0
      locked         = yes
    }
    division = {
      id             = { type = 11616 id = 418 }
      name           = "青島員警大队"
      type           = militia
      model          = 4
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 11616 id = 419 }
    name     = "南京警備司令部"
    location = 1235
    division = {
      id             = { type = 11616 id = 420 }
      name           = "南京保安大队"
      type           = militia
      model          = 4
      extra          = none
      brigade_model  = 0
      locked         = yes
    }
    division = {
      id             = { type = 11616 id = 421 }
      name           = "南京員警大队"
      type           = militia
      model          = 4
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 11616 id = 422 }
    name     = "上海警備司令部"
    location = 1237
    division = {
      id             = { type = 11616 id = 423 }
      name           = "上海保安大队"
      type           = militia
      model          = 4
      extra          = none
      brigade_model  = 0
      locked         = yes
    }
    division = {
      id             = { type = 11616 id = 424 }
      name           = "上海員警大队"
      type           = militia
      model          = 4
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 11616 id = 425 }
    name     = "漢口警備司令部"
    location = 1232
    division = {
      id             = { type = 11616 id = 426 }
      name           = "漢口保安大队"
      type           = militia
      model          = 4
      extra          = none
      brigade_model  = 0
      locked         = yes
    }
    division = {
      id             = { type = 11616 id = 427 }
      name           = "漢口員警大队"
      type           = militia
      model          = 4
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 11616 id = 428 }
    name     = "九江警備司令部"
    location = 1252
    division = {
      id             = { type = 11616 id = 429 }
      name           = "九江保安大队"
      type           = militia
      model          = 4
      extra          = none
      brigade_model  = 0
      locked         = yes
    }
    division = {
      id             = { type = 11616 id = 430 }
      name           = "九江員警大队"
      type           = militia
      model          = 4
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 11616 id = 431 }
    name     = "西安警備司令部"
    location = 1269
    division = {
      id             = { type = 11616 id = 432 }
      name           = "西安保安大队"
      type           = militia
      model          = 4
      extra          = none
      brigade_model  = 0
      locked         = yes
    }
    division = {
      id             = { type = 11616 id = 433 }
      name           = "西安員警大队"
      type           = militia
      model          = 4
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 11616 id = 434 }
    name     = "潼關警備司令部"
    location = 1887
    division = {
      id             = { type = 11616 id = 435 }
      name           = "潼關保安大队"
      type           = militia
      model          = 4
      extra          = none
      brigade_model  = 0
      locked         = yes
    }
    division = {
      id             = { type = 11616 id = 436 }
      name           = "潼關員警大队"
      type           = militia
      model          = 4
      locked         = yes
    }
  }

  navalunit = {
    id       = { type = 22000 id = 413 }
    name     = "中华民國第1舰队 "
    location = 1237
    base     = 1237
    division = {
      id             = { type = 22000 id = 419 }
      name           = "太平號 "
      type           = destroyer
      model          = 2
    }
    division = {
      id             = { type = 22000 id = 420 }
      name           = "太康號 "
      type           = destroyer
      model          = 2
    }
  }

  airunit = { 
    id       = { type = 11616 id = 323 }
    name     = "中華民國空军第1大队 "
    location = 1232
    base     = 1232
    division = {
      id             = { type = 11616 id = 324 }
      name           = "第1轟炸機大队 "
      type           = tactical_bomber
      model          = 4
      strength       = 80
      experience     = 15
    }
  }
  airunit = { 
    id       = { type = 11616 id = 325 }
    name     = "中華民國空军第2大队 "
    location = 1237
    base     = 1237
    division = {
      id             = { type = 11616 id = 326 }
      name           = "第2運輸機大队 "
      type           = transport_plane
      model          = 1
      strength       = 80
      experience     = 15
    }
  }
  airunit = { 
    id       = { type = 11616 id = 327 }
    name     = "中華民國空军第3大队 "
    location = 1218
    base     = 1218
    division = {
      id             = { type = 11616 id = 328 }
      name           = "第3戰鬥機大队 "
      type           = multi_role
      model          = 2
      strength       = 80
      experience     = 60
    }
  }
  airunit = { 
    id       = { type = 11616 id = 329 }
    name     = "中華民國空军第4大队 "
    location = 1205
    base     = 1205
    division = {
      id             = { type = 11616 id = 330 }
      name           = "第4戰鬥機大队 "
      type           = multi_role
      model          = 2
      strength       = 80
      experience     = 60
    }
  }
  airunit = { 
    id       = { type = 11616 id = 331 }
    name     = "中華民國空军第5大队 "
    location = 1235
    base     = 1235
    division = {
      id             = { type = 11616 id = 332 }
      name           = "第5戰鬥機大队 "
      type           = multi_role
      model          = 2
      strength       = 80
      experience     = 60
    }
  }
  airunit = { 
    id       = { type = 11616 id = 333 }
    name     = "中華民國空军第8大队 "
    location = 1237
    base     = 1237
    division = {
      id             = { type = 11616 id = 334 }
      name           = "第8轟炸機大队 "
      type           = tactical_bomber
      model          = 4
      strength       = 80
      experience     = 60
    }
  }
  airunit = { 
    id       = { type = 11616 id = 335 }
    name     = "中華民國空军第10大队 "
    location = 1235
    base     = 1235
    division = {
      id             = { type = 11616 id = 336 }
      name           = "第10運輸機大队 "
      type           = transport_plane
      model          = 1
      strength       = 80
      experience     = 60
    }
  }
  airunit = { 
    id       = { type = 11616 id = 337 }
    name     = "中華民國空军第11大队 "
    location = 1269
    base     = 1269
    division = {
      id             = { type = 11616 id = 338 }
      name           = "第11戰鬥機大队 "
      type           = multi_role
      model          = 2
      strength       = 80
      experience     = 60
    }
  }
  airunit = { 
    id       = { type = 11616 id = 339 }
    name     = "中華民國空军第12大队 "
    location = 1235
    base     = 1235
    division = {
      id             = { type = 11616 id = 340 }
      name           = "第12偵照機大队 "
      type           = interceptor
      model          = 4
      strength       = 80
      experience     = 60
    }
  }

  landdivision = { dormant = yes id = { type = 11616 id = 610 } name = "大西南防線"  type = garrison model = 1 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 11616 id = 611 } name = "大西南防線"  type = garrison model = 1 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 11616 id = 612 } name = "大西南防線"  type = garrison model = 1 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 11616 id = 613 } name = "大西南防線"  type = garrison model = 1 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 11616 id = 614 } name = "大西南防線"  type = garrison model = 1 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 11616 id = 615 } name = "大西南防線"  type = garrison model = 1 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 11616 id = 616 } name = "大西南防線"  type = garrison model = 1 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 11616 id = 617 } name = "大西南防線"  type = garrison model = 1 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 11616 id = 618 } name = "大西南防線"  type = garrison model = 1 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 11616 id = 619 } name = "大西南防線"  type = garrison model = 1 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 11616 id = 620 } name = "長江防線"  type = garrison model = 1 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 11616 id = 621 } name = "長江防線"  type = garrison model = 1 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 11616 id = 622 } name = "江陰要塞"  type = garrison model = 1 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 11616 id = 623 } name = "長江防線"  type = garrison model = 1 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 11616 id = 624 } name = "長江防線"  type = garrison model = 1 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 11616 id = 625 } name = "長江防線"  type = garrison model = 1 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 11616 id = 626 } name = "長江防線"  type = garrison model = 1 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 11616 id = 627 } name = "長江防線"  type = garrison model = 1 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 11616 id = 628 } name = "長江防線"  type = garrison model = 1 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 11616 id = 629 } name = "長江防線"  type = garrison model = 1 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 11616 id = 630 } name = "長江防線"  type = garrison model = 1 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 11616 id = 631 } name = "長江防線"  type = garrison model = 1 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 11616 id = 632 } name = "長江防線"  type = garrison model = 1 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 11616 id = 633 } name = "長江防線"  type = garrison model = 1 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 11616 id = 634 } name = "長江防線"  type = garrison model = 1 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 11616 id = 635 } name = "長江防線"  type = garrison model = 1 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 11616 id = 636 } name = "長江防線"  type = garrison model = 1 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 11616 id = 637 } name = "長江防線"  type = garrison model = 1 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 11616 id = 638 } name = "金門防衛司令部"  type = garrison model = 1 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 11616 id = 639 } name = "瓊北要塞"  type = garrison model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 11616 id = 640 } name = "舟山群島防衛司令部"  type = garrison model = 1 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 11616 id = 641 } name = "澎湖防衛司令部"  type = garrison model = 1 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 11616 id = 642 } name = "吳淞要塞"  type = garrison model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 11616 id = 643 } name = "台北守備队"  type = garrison model = 1 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 11616 id = 644 } name = "高雄守備队"  type = garrison model = 1 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 11616 id = 645 } name = "台南守備队"  type = garrison model = 1 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 11616 id = 646 } name = "台中守備队"  type = garrison model = 1 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 11616 id = 647 } name = "花蓮守備队"  type = garrison model = 1 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 11616 id = 404 } name = "錦州保安大队"  type = militia model = 4 extra = none brigade_model = 0 locked = yes } 
  landdivision = { dormant = yes id = { type = 11616 id = 405 } name = "錦州員警大队"  type = militia model = 4 extra = none brigade_model = 0 locked = yes } 
  landdivision = { dormant = yes id = { type = 11616 id = 412 } name = "瀋陽保安大队"  type = militia model = 4 extra = none brigade_model = 0 locked = yes } 
  landdivision = { dormant = yes id = { type = 11616 id = 414 } name = "瀋陽員警大队"  type = militia model = 4 extra = none brigade_model = 0 locked = yes } 
  landdivision = { dormant = yes id = { type = 11616 id = 413 } name = "長春保安大队"  type = militia model = 4 extra = none brigade_model = 0 locked = yes } 
  landdivision = { dormant = yes id = { type = 11616 id = 415 } name = "長春員警大队"  type = militia model = 4 extra = none brigade_model = 0 locked = yes } 
}
