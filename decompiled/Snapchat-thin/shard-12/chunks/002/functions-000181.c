/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108f28e6c; end: 108f28ed3; +[IMPGetAllWatchedStateForUserRequest descriptor] */

void FUN_108f28e6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f6c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd1ae0,
                        &PTR____CFConstantStringClassReference_110f06838,&PTR_s_impala_1132a33d8,
                        &PTR_s_userId_1132a35d0,2,0x18,0x1c);
    puRam000000011372f6c8 = puVar1;
  }
  return;
}



/* Entry: 108f28ed4; end: 108f28f3b; +[IMPGetAllWatchedStateForUserResponse descriptor] */

void FUN_108f28ed4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f6d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd1b30,
                        &PTR____CFConstantStringClassReference_110f06858,&PTR_s_impala_1132a33d8,
                        &PTR_DAT_1132a3610,2,0x18,0x1c);
    puRam000000011372f6d0 = puVar1;
  }
  return;
}



/* Entry: 108f28f3c; end: 108f28fa3; +[IMPResetWatchedStateForUserRequest descriptor] */

void FUN_108f28f3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f6d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd1b80,
                        &PTR____CFConstantStringClassReference_110f06878,&PTR_s_impala_1132a33d8,
                        &PTR_s_userId_1132a3470,1,0x10,0x1c);
    puRam000000011372f6d8 = puVar1;
  }
  return;
}



/* Entry: 108f28fa4; end: 108f29087; +[IMPResetWatchedStateForUserResponse descriptor] */

void FUN_108f28fa4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f6e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd1bd0,
                        &PTR____CFConstantStringClassReference_110f06898,&PTR_s_impala_1132a33d8,0,0
                        ,4,0x1c);
    puRam000000011372f6e0 = puVar1;
  }
  return;
}



/* Entry: 108f29088; end: 108f29093;  */

bool FUN_108f29088(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 108f29094; end: 108f2910f;  */

undefined * FUN_108f29094(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372f6f0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f068d8,
                        &UNK_10dfae3a8,&UNK_10dfae3dc,3,FUN_108f29110,0);
    do {
      if (puRam000000011372f6f0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372f6f0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372f6f0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372f6f0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372f6f0;
}



/* Entry: 108f29110; end: 108f2911b;  */

bool FUN_108f29110(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 108f2911c; end: 108f29197;  */

undefined * FUN_108f2911c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372f6f8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f068f8,
                        &UNK_10dfae3e8,&UNK_10dfae400,3,FUN_108f29198,0);
    do {
      if (puRam000000011372f6f8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372f6f8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372f6f8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372f6f8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372f6f8;
}



/* Entry: 108f29198; end: 108f291a3;  */

bool FUN_108f29198(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 108f291a4; end: 108f2921f;  */

undefined * FUN_108f291a4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372f700 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f06918,
                        &UNK_10dfae40c,&UNK_10dfae41c,2,FUN_108f29220,0);
    do {
      if (puRam000000011372f700 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372f700;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372f700,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372f700 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372f700;
}



/* Entry: 108f29220; end: 108f2922b;  */

bool FUN_108f29220(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 108f2922c; end: 108f29293; +[IMPListHighlightsRequest descriptor] */

void FUN_108f2922c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f708 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd1c70,
                        &PTR____CFConstantStringClassReference_110f06938,&PTR_DAT_1132a3990,
                        &PTR_s_profileId_1132a4448,4,0x20,0x1c);
    puRam000000011372f708 = puVar1;
  }
  return;
}



/* Entry: 108f29294; end: 108f292fb; +[IMPListHighlightsResponse descriptor] */

void FUN_108f29294(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f710 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd1cc0,
                        &PTR____CFConstantStringClassReference_110f06958,&PTR_DAT_1132a3990,
                        &PTR_DAT_1132a3b28,2,0x18,0x1c);
    puRam000000011372f710 = puVar1;
  }
  return;
}



/* Entry: 108f292fc; end: 108f29363; +[IMPListSavedStoriesV2Request descriptor] */

void FUN_108f292fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f718 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd1d10,
                        &PTR____CFConstantStringClassReference_110f06978,&PTR_DAT_1132a3990,
                        &PTR_s_profileId_1132a41a8,3,0x18,0x1c);
    puRam000000011372f718 = puVar1;
  }
  return;
}



/* Entry: 108f29364; end: 108f293cb; +[IMPListSavedStoriesV2Response descriptor] */

void FUN_108f29364(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f720 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd1d60,
                        &PTR____CFConstantStringClassReference_110f06998,&PTR_DAT_1132a3990,
                        &PTR_DAT_1132a3b68,2,0x18,0x1c);
    puRam000000011372f720 = puVar1;
  }
  return;
}



/* Entry: 108f293cc; end: 108f29433; +[IMPListSavedSpotlightsV2Request descriptor] */

void FUN_108f293cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f728 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd1db0,
                        &PTR____CFConstantStringClassReference_110f069b8,&PTR_DAT_1132a3990,
                        &PTR_s_profileId_1132a4208,3,0x18,0x1c);
    puRam000000011372f728 = puVar1;
  }
  return;
}



/* Entry: 108f29434; end: 108f2949b; +[IMPListSavedSpotlightsV2Response descriptor] */

void FUN_108f29434(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f730 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd1e00,
                        &PTR____CFConstantStringClassReference_110f069d8,&PTR_DAT_1132a3990,
                        &PTR_DAT_1132a3ba8,2,0x18,0x1c);
    puRam000000011372f730 = puVar1;
  }
  return;
}



/* Entry: 108f2949c; end: 108f29503; +[IMPGetHighlightsRequest descriptor] */

void FUN_108f2949c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f738 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd1e50,
                        &PTR____CFConstantStringClassReference_110f069f8,&PTR_DAT_1132a3990,
                        &PTR_s_profileId_1132a3be8,2,0x18,0x1c);
    puRam000000011372f738 = puVar1;
  }
  return;
}



/* Entry: 108f29504; end: 108f2956b; +[IMPGetHighlightsResponse descriptor] */

void FUN_108f29504(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f740 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd1ea0,
                        &PTR____CFConstantStringClassReference_110f06a18,&PTR_DAT_1132a3990,
                        &PTR_DAT_1132a39a8,1,0x10,0x1c);
    puRam000000011372f740 = puVar1;
  }
  return;
}



/* Entry: 108f2956c; end: 108f295d3; +[IMPInternalGetSpotlightVisibilityRequest descriptor] */

void FUN_108f2956c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f748 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd1ef0,
                        &PTR____CFConstantStringClassReference_110f06a38,&PTR_DAT_1132a3990,
                        &PTR_DAT_1132a3c28,2,0x18,0x1c);
    puRam000000011372f748 = puVar1;
  }
  return;
}



/* Entry: 108f295d4; end: 108f2963b; +[IMPInternalGetSpotlightVisibilityResponse descriptor] */

void FUN_108f295d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f750 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd1f40,
                        &PTR____CFConstantStringClassReference_110f06a58,&PTR_DAT_1132a3990,
                        &PTR_DAT_1132a39c8,1,4,0x1c);
    puRam000000011372f750 = puVar1;
  }
  return;
}



/* Entry: 108f2963c; end: 108f296a3; +[IMPReportHighlightRequest descriptor] */

void FUN_108f2963c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f758 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd1f90,
                        &PTR____CFConstantStringClassReference_110f06a78,&PTR_DAT_1132a3990,
                        &PTR_DAT_1132a39e8,1,0x10,0x1c);
    puRam000000011372f758 = puVar1;
  }
  return;
}



/* Entry: 108f296a4; end: 108f2970b; +[IMPReportHighlightResponse descriptor] */

void FUN_108f296a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f760 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd1fe0,
                        &PTR____CFConstantStringClassReference_110f06a98,&PTR_DAT_1132a3990,0,0,4,
                        0x1c);
    puRam000000011372f760 = puVar1;
  }
  return;
}



/* Entry: 108f2970c; end: 108f29773; +[IMPReportHighlightSnapRequest descriptor] */

void FUN_108f2970c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f768 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd2030,
                        &PTR____CFConstantStringClassReference_110f06ab8,&PTR_DAT_1132a3990,
                        &PTR_DAT_1132a3c68,2,0x18,0x1c);
    puRam000000011372f768 = puVar1;
  }
  return;
}



/* Entry: 108f29774; end: 108f297db; +[IMPReportHighlightSnapResponse descriptor] */

void FUN_108f29774(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f770 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd2080,
                        &PTR____CFConstantStringClassReference_110f06ad8,&PTR_DAT_1132a3990,0,0,4,
                        0x1c);
    puRam000000011372f770 = puVar1;
  }
  return;
}



/* Entry: 108f297dc; end: 108f29843; +[IMPInternalReportHighlightRequest descriptor] */

void FUN_108f297dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f778 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd20d0,
                        &PTR____CFConstantStringClassReference_110f06af8,&PTR_DAT_1132a3990,
                        &PTR_DAT_1132a3a08,1,0x10,0x1c);
    puRam000000011372f778 = puVar1;
  }
  return;
}



/* Entry: 108f29844; end: 108f298ab; +[IMPInternalReportHighlightResponse descriptor] */

void FUN_108f29844(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f780 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd2120,
                        &PTR____CFConstantStringClassReference_110f06b18,&PTR_DAT_1132a3990,0,0,4,
                        0x1c);
    puRam000000011372f780 = puVar1;
  }
  return;
}



/* Entry: 108f298ac; end: 108f29913; +[IMPInternalReportHighlightSnapRequest descriptor] */

void FUN_108f298ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f788 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd2170,
                        &PTR____CFConstantStringClassReference_110f06b38,&PTR_DAT_1132a3990,
                        &PTR_DAT_1132a3ca8,2,0x18,0x1c);
    puRam000000011372f788 = puVar1;
  }
  return;
}



/* Entry: 108f29914; end: 108f2997b; +[IMPInternalReportHighlightSnapResponse descriptor] */

void FUN_108f29914(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f790 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd21c0,
                        &PTR____CFConstantStringClassReference_110f06b58,&PTR_DAT_1132a3990,0,0,4,
                        0x1c);
    puRam000000011372f790 = puVar1;
  }
  return;
}



/* Entry: 108f2997c; end: 108f299e7; +[IMPCommonReportInfo descriptor] */

void FUN_108f2997c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f798 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd2210,
                        &PTR____CFConstantStringClassReference_110f06b78,&PTR_DAT_1132a3990,
                        &PTR_s_profileId_1132a4b68,6,0x38,0x1c);
    puRam000000011372f798 = puVar1;
  }
  return;
}



/* Entry: 108f299e8; end: 108f29a4f; +[IMPReportHighlightCallbackRequest descriptor] */

void FUN_108f299e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f7a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd2260,
                        &PTR____CFConstantStringClassReference_110f06b98,&PTR_DAT_1132a3990,
                        &PTR_s_id_p_1132a4848,5,0x30,0x1c);
    puRam000000011372f7a0 = puVar1;
  }
  return;
}



/* Entry: 108f29a50; end: 108f29ab7; +[IMPReportHighlightCallbackResponse descriptor] */

void FUN_108f29a50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f7a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd22b0,
                        &PTR____CFConstantStringClassReference_110f06bb8,&PTR_DAT_1132a3990,0,0,4,
                        0x1c);
    puRam000000011372f7a8 = puVar1;
  }
  return;
}



/* Entry: 108f29ab8; end: 108f29b23; +[IMPAdminListHighlightsRequest descriptor] */

void FUN_108f29ab8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f7b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd2300,
                        &PTR____CFConstantStringClassReference_110f06bd8,&PTR_DAT_1132a3990,
                        &PTR_s_profileId_1132a48e8,5,0x20,0x1c);
    puRam000000011372f7b0 = puVar1;
  }
  return;
}



/* Entry: 108f29b24; end: 108f29b8b; +[IMPAdminListHighlightsResponse descriptor] */

void FUN_108f29b24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f7b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd2350,
                        &PTR____CFConstantStringClassReference_110f06bf8,&PTR_DAT_1132a3990,
                        &PTR_DAT_1132a3ce8,2,0x18,0x1c);
    puRam000000011372f7b8 = puVar1;
  }
  return;
}



/* Entry: 108f29b8c; end: 108f29bf7; +[IMPAdminListSavedStoriesV2Request descriptor] */

void FUN_108f29b8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f7c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd23a0,
                        &PTR____CFConstantStringClassReference_110f06c18,&PTR_DAT_1132a3990,
                        &PTR_s_profileId_1132a4988,5,0x20,0x1c);
    puRam000000011372f7c0 = puVar1;
  }
  return;
}



/* Entry: 108f29bf8; end: 108f29c5f; +[IMPAdminListSavedStoriesV2Response descriptor] */

void FUN_108f29bf8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f7c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd23f0,
                        &PTR____CFConstantStringClassReference_110f06c38,&PTR_DAT_1132a3990,
                        &PTR_DAT_1132a3d28,2,0x18,0x1c);
    puRam000000011372f7c8 = puVar1;
  }
  return;
}



/* Entry: 108f29c60; end: 108f29cc7; +[IMPAdminListManagedSpotlightHighlightsRequest descriptor] */

void FUN_108f29c60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f7d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd2440,
                        &PTR____CFConstantStringClassReference_110f06c58,&PTR_DAT_1132a3990,
                        &PTR_s_profileId_1132a44c8,4,0x20,0x1c);
    puRam000000011372f7d0 = puVar1;
  }
  return;
}



/* Entry: 108f29cc8; end: 108f29d2f; +[IMPAdminListManagedSpotlightHighlightsResponse descriptor] */

void FUN_108f29cc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f7d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd2490,
                        &PTR____CFConstantStringClassReference_110f06c78,&PTR_DAT_1132a3990,
                        &PTR_DAT_1132a3d68,2,0x18,0x1c);
    puRam000000011372f7d8 = puVar1;
  }
  return;
}



/* Entry: 108f29d30; end: 108f29d97; +[IMPAdminListManagedSpotlightHighlightsV2Request descriptor] */

void FUN_108f29d30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f7e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd24e0,
                        &PTR____CFConstantStringClassReference_110f06c98,&PTR_DAT_1132a3990,
                        &PTR_s_profileId_1132a4548,4,0x20,0x1c);
    puRam000000011372f7e0 = puVar1;
  }
  return;
}



/* Entry: 108f29d98; end: 108f29dff; +[IMPAdminListManagedSpotlightHighlightsV2Response descriptor] */

void FUN_108f29d98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f7e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd2530,
                        &PTR____CFConstantStringClassReference_110f06cb8,&PTR_DAT_1132a3990,
                        &PTR_DAT_1132a3da8,2,0x18,0x1c);
    puRam000000011372f7e8 = puVar1;
  }
  return;
}



/* Entry: 108f29e00; end: 108f29e67; +[IMPAdminListSavedSpotlightsV2Request descriptor] */

void FUN_108f29e00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f7f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd2580,
                        &PTR____CFConstantStringClassReference_110f06cd8,&PTR_DAT_1132a3990,
                        &PTR_s_profileId_1132a45c8,4,0x20,0x1c);
    puRam000000011372f7f0 = puVar1;
  }
  return;
}



/* Entry: 108f29e68; end: 108f29ecf; +[IMPAdminListSavedSpotlightsV2Response descriptor] */

void FUN_108f29e68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f7f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd25d0,
                        &PTR____CFConstantStringClassReference_110f06cf8,&PTR_DAT_1132a3990,
                        &PTR_DAT_1132a3de8,2,0x18,0x1c);
    puRam000000011372f7f8 = puVar1;
  }
  return;
}



/* Entry: 108f29ed0; end: 108f29f37; +[IMPAdminGetHighlightsRequest descriptor] */

void FUN_108f29ed0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f800 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd2620,
                        &PTR____CFConstantStringClassReference_110f06d18,&PTR_DAT_1132a3990,
                        &PTR_s_profileId_1132a3e28,2,0x18,0x1c);
    puRam000000011372f800 = puVar1;
  }
  return;
}



/* Entry: 108f29f38; end: 108f29f9f; +[IMPAdminGetHighlightsResponse descriptor] */

void FUN_108f29f38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f808 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd2670,
                        &PTR____CFConstantStringClassReference_110f06d38,&PTR_DAT_1132a3990,
                        &PTR_DAT_1132a3a28,1,0x10,0x1c);
    puRam000000011372f808 = puVar1;
  }
  return;
}



/* Entry: 108f29fa0; end: 108f2a007; +[IMPAdminGetSavedStoryV2Request descriptor] */

void FUN_108f29fa0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f810 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd26c0,
                        &PTR____CFConstantStringClassReference_110f06d58,&PTR_DAT_1132a3990,
                        &PTR_s_profileId_1132a3e68,2,0x18,0x1c);
    puRam000000011372f810 = puVar1;
  }
  return;
}



/* Entry: 108f2a008; end: 108f2a06f; +[IMPAdminGetSavedStoryV2Response descriptor] */

void FUN_108f2a008(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f818 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd2710,
                        &PTR____CFConstantStringClassReference_110f06d78,&PTR_DAT_1132a3990,
                        &PTR_DAT_1132a3a48,1,0x10,0x1c);
    puRam000000011372f818 = puVar1;
  }
  return;
}



/* Entry: 108f2a070; end: 108f2a0d7; +[IMPAdminGetSavedSpotlightV2Request descriptor] */

void FUN_108f2a070(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f820 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd2760,
                        &PTR____CFConstantStringClassReference_110f06d98,&PTR_DAT_1132a3990,
                        &PTR_s_profileId_1132a3ea8,2,0x18,0x1c);
    puRam000000011372f820 = puVar1;
  }
  return;
}



/* Entry: 108f2a0d8; end: 108f2a13f; +[IMPAdminGetSavedSpotlightV2Response descriptor] */

void FUN_108f2a0d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f828 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd27b0,
                        &PTR____CFConstantStringClassReference_110f06db8,&PTR_DAT_1132a3990,
                        &PTR_DAT_1132a3a68,1,0x10,0x1c);
    puRam000000011372f828 = puVar1;
  }
  return;
}



/* Entry: 108f2a140; end: 108f2a1a7; +[IMPListArchivedHighlightsRequest descriptor] */

void FUN_108f2a140(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f830 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd2800,
                        &PTR____CFConstantStringClassReference_110f06dd8,&PTR_DAT_1132a3990,
                        &PTR_s_profileId_1132a4268,3,0x18,0x1c);
    puRam000000011372f830 = puVar1;
  }
  return;
}



/* Entry: 108f2a1a8; end: 108f2a20f; +[IMPListArchivedHighlightsResponse descriptor] */

void FUN_108f2a1a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f838 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd2850,
                        &PTR____CFConstantStringClassReference_110f06df8,&PTR_DAT_1132a3990,
                        &PTR_DAT_1132a3ee8,2,0x18,0x1c);
    puRam000000011372f838 = puVar1;
  }
  return;
}



/* Entry: 108f2a210; end: 108f2a277; +[IMPMoveHighlightsToTopRequest descriptor] */

void FUN_108f2a210(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f840 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd28a0,
                        &PTR____CFConstantStringClassReference_110f06e18,&PTR_DAT_1132a3990,
                        &PTR_s_profileId_1132a3f28,2,0x18,0x1c);
    puRam000000011372f840 = puVar1;
  }
  return;
}



/* Entry: 108f2a278; end: 108f2a2df; +[IMPMoveHighlightsToTopResponse descriptor] */

void FUN_108f2a278(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f848 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd28f0,
                        &PTR____CFConstantStringClassReference_110f06e38,&PTR_DAT_1132a3990,0,0,4,
                        0x1c);
    puRam000000011372f848 = puVar1;
  }
  return;
}



/* Entry: 108f2a2e0; end: 108f2a347; +[IMPDeleteHighlightRequest descriptor] */

void FUN_108f2a2e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f850 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd2940,
                        &PTR____CFConstantStringClassReference_110f06e58,&PTR_DAT_1132a3990,
                        &PTR_s_profileId_1132a3f68,2,0x18,0x1c);
    puRam000000011372f850 = puVar1;
  }
  return;
}



/* Entry: 108f2a348; end: 108f2a3af; +[IMPDeleteHighlightResponse descriptor] */

void FUN_108f2a348(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f858 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd2990,
                        &PTR____CFConstantStringClassReference_110f06e78,&PTR_DAT_1132a3990,0,0,4,
                        0x1c);
    puRam000000011372f858 = puVar1;
  }
  return;
}



/* Entry: 108f2a3b0; end: 108f2a417; +[IMPDeleteHighlightSnapRequest descriptor] */

void FUN_108f2a3b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f860 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd29e0,
                        &PTR____CFConstantStringClassReference_110f06e98,&PTR_DAT_1132a3990,
                        &PTR_s_profileId_1132a42c8,3,0x20,0x1c);
    puRam000000011372f860 = puVar1;
  }
  return;
}



/* Entry: 108f2a418; end: 108f2a47f; +[IMPDeleteHighlightSnapResponse descriptor] */

void FUN_108f2a418(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f868 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd2a30,
                        &PTR____CFConstantStringClassReference_110f06eb8,&PTR_DAT_1132a3990,0,0,4,
                        0x1c);
    puRam000000011372f868 = puVar1;
  }
  return;
}



/* Entry: 108f2a480; end: 108f2a4e7; +[IMPArchiveHighlightRequest descriptor] */

void FUN_108f2a480(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f870 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd2a80,
                        &PTR____CFConstantStringClassReference_110f06ed8,&PTR_DAT_1132a3990,
                        &PTR_s_profileId_1132a3fa8,2,0x18,0x1c);
    puRam000000011372f870 = puVar1;
  }
  return;
}



/* Entry: 108f2a4e8; end: 108f2a54f; +[IMPArchiveHighlightResponse descriptor] */

void FUN_108f2a4e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f878 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd2ad0,
                        &PTR____CFConstantStringClassReference_110f06ef8,&PTR_DAT_1132a3990,0,0,4,
                        0x1c);
    puRam000000011372f878 = puVar1;
  }
  return;
}



/* Entry: 108f2a550; end: 108f2a5b7; +[IMPUnarchiveHighlightRequest descriptor] */

void FUN_108f2a550(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f880 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd2b20,
                        &PTR____CFConstantStringClassReference_110f06f18,&PTR_DAT_1132a3990,
                        &PTR_s_profileId_1132a3fe8,2,0x18,0x1c);
    puRam000000011372f880 = puVar1;
  }
  return;
}



/* Entry: 108f2a5b8; end: 108f2a61f; +[IMPUnarchiveHighlightResponse descriptor] */

void FUN_108f2a5b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f888 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd2b70,
                        &PTR____CFConstantStringClassReference_110f06f38,&PTR_DAT_1132a3990,0,0,4,
                        0x1c);
    puRam000000011372f888 = puVar1;
  }
  return;
}



/* Entry: 108f2a620; end: 108f2a6bf; +[IMPCreateHighlightRequest descriptor] */

undefined * FUN_108f2a620(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f890 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd2bc0,
                        &PTR____CFConstantStringClassReference_110f06f58,&PTR_DAT_1132a3990,
                        &PTR_s_profileId_1132a4ea8,9,0x40,0x1c);
    func_0x00010c229040();
    func_0x00010c2289e0(puVar1,param_2,&UNK_10dfae424);
    puRam000000011372f890 = puVar1;
  }
  return puRam000000011372f890;
}



/* Entry: 108f2a6c0; end: 108f2a727; +[IMPCreateHighlightResponse descriptor] */

void FUN_108f2a6c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f898 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd2c10,
                        &PTR____CFConstantStringClassReference_110f06f78,&PTR_DAT_1132a3990,
                        &PTR_s_highlightId_1132a3a88,1,0x10,0x1c);
    puRam000000011372f898 = puVar1;
  }
  return;
}



/* Entry: 108f2a728; end: 108f2a7c7; +[IMPUpdateHighlightRequest descriptor] */

undefined * FUN_108f2a728(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f8a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd2c60,
                        &PTR____CFConstantStringClassReference_110f06f98,&PTR_DAT_1132a3990,
                        &PTR_s_profileId_1132a4fc8,9,0x50,0x1c);
    func_0x00010c229040();
    func_0x00010c2289e0(puVar1,param_2,&UNK_10dfae42d);
    puRam000000011372f8a0 = puVar1;
  }
  return puRam000000011372f8a0;
}



/* Entry: 108f2a7c8; end: 108f2a82f; +[IMPUpdateHighlightResponse descriptor] */

void FUN_108f2a7c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f8a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd2cb0,
                        &PTR____CFConstantStringClassReference_110f06fb8,&PTR_DAT_1132a3990,
                        &PTR_DAT_1132a3aa8,1,0x10,0x1c);
    puRam000000011372f8a8 = puVar1;
  }
  return;
}



/* Entry: 108f2a830; end: 108f2a897; +[IMPInternalGetHasHighlightsRequest descriptor] */

void FUN_108f2a830(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f8b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd2d00,
                        &PTR____CFConstantStringClassReference_110f06fd8,&PTR_DAT_1132a3990,
                        &PTR_DAT_1132a4028,2,0x10,0x1c);
    puRam000000011372f8b0 = puVar1;
  }
  return;
}



/* Entry: 108f2a898; end: 108f2a8ff; +[IMPInternalGetHasHighlightsResponse descriptor] */

void FUN_108f2a898(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f8b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd2d50,
                        &PTR____CFConstantStringClassReference_110f06ff8,&PTR_DAT_1132a3990,
                        &PTR_DAT_1132a3ac8,1,0x10,0x1c);
    puRam000000011372f8b8 = puVar1;
  }
  return;
}



/* Entry: 108f2a900; end: 108f2a967; +[IMPInternalAdminGetHasHighlightsRequest descriptor] */

void FUN_108f2a900(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f8c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd2da0,
                        &PTR____CFConstantStringClassReference_110f07018,&PTR_DAT_1132a3990,
                        &PTR_DAT_1132a4068,2,0x10,0x1c);
    puRam000000011372f8c0 = puVar1;
  }
  return;
}



/* Entry: 108f2a968; end: 108f2a9cf; +[IMPInternalAdminGetHasHighlightsResponse descriptor] */

void FUN_108f2a968(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f8c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd2df0,
                        &PTR____CFConstantStringClassReference_110f07038,&PTR_DAT_1132a3990,
                        &PTR_DAT_1132a3ae8,1,0x10,0x1c);
    puRam000000011372f8c8 = puVar1;
  }
  return;
}



/* Entry: 108f2a9d0; end: 108f2aa37; +[IMPInternalListHighlightsRequest descriptor] */

void FUN_108f2a9d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f8d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd2e40,
                        &PTR____CFConstantStringClassReference_110f07058,&PTR_DAT_1132a3990,
                        &PTR_s_profileId_1132a4648,4,0x20,0x1c);
    puRam000000011372f8d0 = puVar1;
  }
  return;
}



/* Entry: 108f2aa38; end: 108f2aa9f; +[IMPInternalListHighlightsResponse descriptor] */

void FUN_108f2aa38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f8d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd2e90,
                        &PTR____CFConstantStringClassReference_110f07078,&PTR_DAT_1132a3990,
                        &PTR_DAT_1132a40a8,2,0x18,0x1c);
    puRam000000011372f8d8 = puVar1;
  }
  return;
}



/* Entry: 108f2aaa0; end: 108f2ab3f; +[IMPInternalCreateHighlightRequest descriptor] */

undefined * FUN_108f2aaa0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f8e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd2ee0,
                        &PTR____CFConstantStringClassReference_110f07098,&PTR_DAT_1132a3990,
                        &PTR_s_profileId_1132a50e8,9,0x48,0x1c);
    func_0x00010c229040();
    func_0x00010c2289e0(puVar1,param_2,&UNK_10dfae436);
    puRam000000011372f8e0 = puVar1;
  }
  return puRam000000011372f8e0;
}



/* Entry: 108f2ab40; end: 108f2aba7; +[IMPInternalCreateHighlightResponse descriptor] */

void FUN_108f2ab40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f8e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd2f30,
                        &PTR____CFConstantStringClassReference_110f070b8,&PTR_DAT_1132a3990,
                        &PTR_s_highlightId_1132a3b08,1,0x10,0x1c);
    puRam000000011372f8e8 = puVar1;
  }
  return;
}



/* Entry: 108f2aba8; end: 108f2ac0f; +[IMPInternalGetSavedSpotlightIDsRequest descriptor] */

void FUN_108f2aba8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f8f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd2f80,
                        &PTR____CFConstantStringClassReference_110f070d8,&PTR_DAT_1132a3990,
                        &PTR_s_profileId_1132a4328,3,0x18,0x1c);
    puRam000000011372f8f0 = puVar1;
  }
  return;
}



/* Entry: 108f2ac10; end: 108f2ac77; +[IMPInternalGetSavedSpotlightIDsResponse descriptor] */

void FUN_108f2ac10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f8f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd2fd0,
                        &PTR____CFConstantStringClassReference_110f070f8,&PTR_DAT_1132a3990,
                        &PTR_DAT_1132a40e8,2,0x18,0x1c);
    puRam000000011372f8f8 = puVar1;
  }
  return;
}



/* Entry: 108f2ac78; end: 108f2acf7; +[IMPMediaInfo descriptor] */

undefined * FUN_108f2ac78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f900 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd3020,
                        &PTR____CFConstantStringClassReference_110e0bbf8,&PTR_DAT_1132a3990,
                        &PTR_DAT_1132a5328,10,0x50,0x1c);
    func_0x00010c2289e0();
    puRam000000011372f900 = puVar1;
  }
  return puRam000000011372f900;
}



/* Entry: 108f2acf8; end: 108f2ad63; +[IMPHighlight descriptor] */

void FUN_108f2acf8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f908 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd3070,
                        &PTR____CFConstantStringClassReference_110dc0a38,&PTR_DAT_1132a3990,
                        &PTR_s_story_1132a4ce8,7,0x30,0x1c);
    puRam000000011372f908 = puVar1;
  }
  return;
}



/* Entry: 108f2ad64; end: 108f2adcb; +[IMPHighlightV2 descriptor] */

void FUN_108f2ad64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f910 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd30c0,
                        &PTR____CFConstantStringClassReference_110f07118,&PTR_DAT_1132a3990,
                        &PTR_s_story_1132a4388,3,0x20,0x1c);
    puRam000000011372f910 = puVar1;
  }
  return;
}



/* Entry: 108f2adcc; end: 108f2ae37; +[IMPAdminHighlight descriptor] */

void FUN_108f2adcc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f918 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd3110,
                        &PTR____CFConstantStringClassReference_110f07138,&PTR_DAT_1132a3990,
                        &PTR_s_story_1132a5468,0xc,0x48,0x1c);
    puRam000000011372f918 = puVar1;
  }
  return;
}



/* Entry: 108f2ae38; end: 108f2aea3; +[IMPAdminHighlightV2 descriptor] */

void FUN_108f2ae38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f920 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd3160,
                        &PTR____CFConstantStringClassReference_110f07158,&PTR_DAT_1132a3990,
                        &PTR_s_story_1132a5208,9,0x30,0x1c);
    puRam000000011372f920 = puVar1;
  }
  return;
}



/* Entry: 108f2aea4; end: 108f2af33; +[IMPHighlightSnap descriptor] */

undefined * FUN_108f2aea4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f928 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd31b0,
                        &PTR____CFConstantStringClassReference_110f07178,&PTR_DAT_1132a3990,
                        &PTR_DAT_1132a4a28,5,0x30,0x1c);
    func_0x00010c229040();
    puRam000000011372f928 = puVar1;
  }
  return puRam000000011372f928;
}



/* Entry: 108f2af34; end: 108f2af9b; +[IMPUploadMediaInfo descriptor] */

void FUN_108f2af34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f930 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd3200,
                        &PTR____CFConstantStringClassReference_110f07198,&PTR_DAT_1132a3990,
                        &PTR_DAT_1132a4128,2,0xc,0x1c);
    puRam000000011372f930 = puVar1;
  }
  return;
}



/* Entry: 108f2af9c; end: 108f2b003; +[IMPBoltUploadObject descriptor] */

void FUN_108f2af9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f938 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd3250,
                        &PTR____CFConstantStringClassReference_110f071b8,&PTR_DAT_1132a3990,
                        &PTR_DAT_1132a46c8,4,0x28,0x1c);
    puRam000000011372f938 = puVar1;
  }
  return;
}



/* Entry: 108f2b004; end: 108f2b06f; +[IMPMemoriesSnapObject descriptor] */

void FUN_108f2b004(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f940 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd32a0,
                        &PTR____CFConstantStringClassReference_110f071d8,&PTR_DAT_1132a3990,
                        &PTR_DAT_1132a4ac8,5,0x30,0x1c);
    puRam000000011372f940 = puVar1;
  }
  return;
}



/* Entry: 108f2b070; end: 108f2b0ef; +[IMPThumbnailInfo descriptor] */

undefined * FUN_108f2b070(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f948 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd32f0,
                        &PTR____CFConstantStringClassReference_110e8d958,&PTR_DAT_1132a3990,
                        &PTR_DAT_1132a4dc8,7,0x40,0x1c);
    func_0x00010c2289e0();
    puRam000000011372f948 = puVar1;
  }
  return puRam000000011372f948;
}



/* Entry: 108f2b0f0; end: 108f2b157; +[IMPSpotlightSnapObject descriptor] */

void FUN_108f2b0f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f950 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd3340,
                        &PTR____CFConstantStringClassReference_110f071f8,&PTR_DAT_1132a3990,
                        &PTR_s_storyId_1132a4168,2,0x18,0x1c);
    puRam000000011372f950 = puVar1;
  }
  return;
}



/* Entry: 108f2b158; end: 108f2b1bf; +[IMPHighlightSnapModerationStatus descriptor] */

void FUN_108f2b158(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f958 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd3390,
                        &PTR____CFConstantStringClassReference_110f07218,&PTR_DAT_1132a3990,
                        &PTR_DAT_1132a43e8,3,0x18,0x1c);
    puRam000000011372f958 = puVar1;
  }
  return;
}



/* Entry: 108f2b1c0; end: 108f2b227; +[IMPModerationStatus descriptor] */

void FUN_108f2b1c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f960 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd33e0,
                        &PTR____CFConstantStringClassReference_110f07238,&PTR_DAT_1132a3990,
                        &PTR_DAT_1132a4748,4,0x20,0x1c);
    puRam000000011372f960 = puVar1;
  }
  return;
}



/* Entry: 108f2b228; end: 108f2b293; +[IMPHighlightUpdateEvent descriptor] */

void FUN_108f2b228(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f968 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd3430,
                        &PTR____CFConstantStringClassReference_110f07258,&PTR_DAT_1132a3990,
                        &PTR_s_profileId_1132a4c28,6,0x20,0x1c);
    puRam000000011372f968 = puVar1;
  }
  return;
}



/* Entry: 108f2b294; end: 108f2b377; +[IMPAutoCreateSavedStoryRequest descriptor] */

void FUN_108f2b294(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f970 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd3480,
                        &PTR____CFConstantStringClassReference_110f07278,&PTR_DAT_1132a3990,
                        &PTR_s_userId_1132a47c8,4,0x28,0x1c);
    puRam000000011372f970 = puVar1;
  }
  return;
}



/* Entry: 108f2b378; end: 108f2b383;  */

bool FUN_108f2b378(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 108f2b384; end: 108f2b3ff;  */

undefined * FUN_108f2b384(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372f980 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f072b8,
                        &UNK_10dfae490,&UNK_10dfae4b0,2,FUN_108f2b400,0);
    do {
      if (puRam000000011372f980 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372f980;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372f980,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372f980 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372f980;
}



/* Entry: 108f2b400; end: 108f2b40b;  */

bool FUN_108f2b400(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 108f2b40c; end: 108f2b487;  */

undefined * FUN_108f2b40c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372f988 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f072d8,
                        &UNK_10dfae4b8,&UNK_10dfae500,4,FUN_108f2b488,0);
    do {
      if (puRam000000011372f988 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372f988;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372f988,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372f988 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372f988;
}



/* Entry: 108f2b488; end: 108f2b493;  */

bool FUN_108f2b488(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 108f2b494; end: 108f2b523;  */

undefined * FUN_108f2b494(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372f990 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f072f8,
                        &UNK_10dfae510,&UNK_10dfae554,3,FUN_108f2b524,0,&UNK_10dfae560);
    do {
      if (puRam000000011372f990 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372f990;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372f990,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372f990 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372f990;
}



/* Entry: 108f2b524; end: 108f2b52f;  */

bool FUN_108f2b524(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 108f2b530; end: 108f2b5ab;  */

undefined * FUN_108f2b530(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372f998 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f07318,
                        &UNK_10dfae56a,&UNK_10dfae65c,9,FUN_108f2b5ac,0);
    do {
      if (puRam000000011372f998 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372f998;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372f998,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372f998 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372f998;
}



/* Entry: 108f2b5ac; end: 108f2b5b7;  */

bool FUN_108f2b5ac(uint param_1)

{
  return param_1 < 9;
}



/* Entry: 108f2b5b8; end: 108f2b633;  */

undefined * FUN_108f2b5b8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372f9a0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f07338,
                        &UNK_10dfae680,&UNK_10dfae6a4,4,FUN_108f2b634,0);
    do {
      if (puRam000000011372f9a0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372f9a0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372f9a0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372f9a0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372f9a0;
}



/* Entry: 108f2b634; end: 108f2b63f;  */

bool FUN_108f2b634(uint param_1)

{
  return param_1 < 4;
}


