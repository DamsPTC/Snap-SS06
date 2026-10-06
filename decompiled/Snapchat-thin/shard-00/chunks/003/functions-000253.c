/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1005acd38; end: 1005ace87;  */

void FUN_1005acd38(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined1 auStack_120 [96];
  long lStack_c0;
  long lStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined1 auStack_48 [24];
  
  if (*(char *)(param_2 + 0x5c) != '\x01') {
    *(undefined1 *)(param_2 + 0x5c) = 1;
    do {
      lVar7 = lRam00000001137f66d8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(0x1137f66d8,0x10);
      if (bVar5) {
        cVar4 = ExclusiveMonitorsStatus();
        lRam00000001137f66d8 = lRam00000001137f66d8 + 1;
      }
    } while (cVar4 != '\0');
    func_0x000107c60c94(auStack_48,param_2 + 0x18);
    FUN_1005acf78(&uStack_90,param_2 + 0x40);
    uStack_58 = *(undefined4 *)(param_2 + 0x58);
    uStack_68 = uStack_88;
    uStack_70 = uStack_90;
    uStack_60 = uStack_80;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_90 = 0;
    uVar2 = *(undefined1 *)(param_2 + 0x30);
    uVar10 = *(undefined8 *)(param_2 + 0x34);
    uVar3 = *(undefined1 *)(param_2 + 0x5d);
    uStack_98 = *(undefined8 *)(param_2 + 0x68);
    uStack_a0 = *(undefined8 *)(param_2 + 0x60);
    if (*(long *)(param_2 + 0x68) != 0) {
      plVar1 = (long *)(*(long *)(param_2 + 0x68) + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_1005ad1bc(param_1,lVar7,auStack_48,&uStack_70,uVar2,uVar10,uVar3,&uStack_a0);
    FUN_1005ad23c(&uStack_a0);
    func_0x0001005ad2a8(&uStack_70);
    func_0x0001005ad2a8(&uStack_90);
    func_0x000107c60ca0(auStack_48);
    return;
  }
  lVar6 = 0x10;
  func_0x000107c60e30();
  func_0x000107c60c0c();
  lVar7 = lVar6;
  func_0x000107c60e54(lVar6,PTR___ZTISt11logic_error_110346a38,PTR___ZNSt11logic_errorD1Ev_110346148
                     );
  func_0x000107c60e40(lVar6);
  lVar8 = lVar7;
  func_0x000107c60bd8();
  puVar9 = auStack_120;
  pcStack_a8 = FUN_1005ace88;
  lStack_c0 = lVar7;
  lStack_b8 = lVar6;
  puStack_b0 = &stack0xfffffffffffffff0;
  (**(code **)(**(long **)(lVar8 + 0x18) + 0x40))(auStack_120);
  FUN_1005ad2e0(auStack_120);
  func_0x000107c61180();
  FUN_1005ae430(auStack_120);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1005ace88; end: 1005acf1b; -[SCNNetworkTypesHttpRequestBuilder build] */

void FUN_1005ace88(long param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_80 [96];
  
  puVar1 = auStack_80;
  (**(code **)(**(long **)(param_1 + 0x18) + 0x40))(auStack_80);
  FUN_1005ad2e0(auStack_80);
  func_0x000107c61180();
  FUN_1005ae430(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1005acf1c; end: 1005acf33;  */

long * FUN_1005acf1c(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 in_CY;
  long *plVar1;
  long *plVar2;
  
  plVar1 = param_1;
  FUN_1004b52a0();
  if (!(bool)in_CY) {
    plVar2 = plVar1 + 2;
    FUN_1005ac9f0();
    *plVar1 = (long)plVar2;
    plVar1[1] = (long)plVar2;
    plVar1[2] = (long)(plVar2 + param_4 * 6);
    return plVar2;
  }
  func_0x000105301748();
  return param_1;
}



/* Entry: 1005acf34; end: 1005acf77;  */

void FUN_1005acf34(void)

{
  long in_x3;
  
  if (in_x3 != 0) {
    FUN_1005acf1c();
    FUN_1005acff0();
    FUN_1005ad088();
  }
  func_0x0001005ad144();
  return;
}



/* Entry: 1005acf78; end: 1005acfef;  */

undefined8 * FUN_1005acf78(undefined8 *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1005acf34(param_1,*param_2,param_2[1],(param_2[1] - *param_2) / 0x30);
  return param_1;
}



/* Entry: 1005acff0; end: 1005ad02b;  */

void FUN_1005acff0(void)

{
  return;
}



/* Entry: 1005ad02c; end: 1005ad073;  */

void FUN_1005ad02c(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001005ad004();
  while (unaff_x21 != unaff_x19) {
    FUN_1005ad0bc();
    func_0x0001005ad110();
  }
  func_0x0001005ad124();
  return;
}



/* Entry: 1005ad074; end: 1005ad087;  */

void FUN_1005ad074(void)

{
  FUN_1005ad02c();
  return;
}



/* Entry: 1005ad088; end: 1005ad0bb;  */

void FUN_1005ad088(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  FUN_1005ad074();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1005ad0bc; end: 1005ad0d3;  */

void FUN_1005ad0bc(void)

{
  func_0x0001005ad0c8();
  func_0x000107c60c94();
  FUN_1005ad104();
  return;
}



/* Entry: 1005ad0d4; end: 1005ad103;  */

void FUN_1005ad0d4(void)

{
  func_0x0001005ad0c8();
  func_0x000107c60c94();
  FUN_1005ad104();
  return;
}



/* Entry: 1005ad104; end: 1005ad153;  */

void FUN_1005ad104(long param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            (param_1 + 0x18,unaff_x20 + 0x18);
  return;
}



/* Entry: 1005ad154; end: 1005ad17f;  */

long FUN_1005ad154(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_1005ad26c(param_1);
  }
  return param_1;
}



/* Entry: 1005ad180; end: 1005ad1bb;  */

void FUN_1005ad180(void)

{
  return;
}



/* Entry: 1005ad1bc; end: 1005ad23b;  */

undefined8 *
FUN_1005ad1bc(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined1 param_7,undefined8 *param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar2 = param_3[1];
  uVar1 = *param_3;
  param_1[3] = param_3[2];
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  func_0x0001005ad190(param_1 + 4,param_4);
  *(undefined1 *)(param_1 + 8) = param_5;
  *(undefined8 *)((long)param_1 + 0x44) = param_6;
  *(undefined1 *)((long)param_1 + 0x4c) = param_7;
  uVar1 = *param_8;
  param_1[0xb] = param_8[1];
  param_1[10] = uVar1;
  *param_8 = 0;
  param_8[1] = 0;
  return param_1;
}



/* Entry: 1005ad23c; end: 1005ad263;  */

long FUN_1005ad23c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1005ad264; end: 1005ad26b;  */

void FUN_1005ad264(void)

{
  return;
}



/* Entry: 1005ad26c; end: 1005ad2d3;  */

void FUN_1005ad26c(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_1005ae464();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 1005ad2d4; end: 1005ad2df;  */

void FUN_1005ad2d4(void)

{
  return;
}



/* Entry: 1005ad2e0; end: 1005ad3fb;  */

void FUN_1005ad2e0(undefined8 *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar3 = PTR_PTR_1126e0250;
  func_0x000107c610f4(PTR_PTR_1126e0250);
  puVar5 = param_1 + 4;
  uVar7 = *param_1;
  puVar4 = param_1 + 1;
  FUN_1001011a4(puVar4);
  func_0x000107c61180();
  FUN_1005ad4a0(puVar5);
  func_0x000107c61180();
  uVar1 = *(undefined1 *)(param_1 + 8);
  lVar6 = (long)param_1 + 0x44;
  FUN_1005ae24c(lVar6);
  func_0x000107c61180();
  uVar2 = *(undefined1 *)((long)param_1 + 0x4c);
  param_1 = param_1 + 10;
  FUN_1005ae280();
  func_0x000107c61180();
  func_0x000107c47068(puVar3,param_2,uVar7,puVar4,puVar5,uVar1,lVar6,uVar2,param_1);
  FUN_1005ae410();
  func_0x0001005ae418();
  func_0x0001005ae420();
  func_0x0001005ae428();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1005ad3fc; end: 1005ad44f; -[SIGNavigationBarButtonItem setShowBadgeCount:] */

void FUN_1005ad3fc(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined1 *)(param_1 + 0x10) = param_3;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1005ad450;
  puStack_20 = &UNK_110d62ca0;
  lStack_18 = param_1;
  func_0x000107c437dc(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 1005ad450; end: 1005ad49f;  */

void FUN_1005ad450(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  func_0x000107c61174(param_2);
  uVar1 = param_2;
  func_0x000107c61164(param_2,PTR_s_navigationBarButtonItem_didChang_112613338);
  if ((uVar1 & 1) != 0) {
    func_0x000107c4d4f0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1005ad4a0; end: 1005ad513;  */

void FUN_1005ad4a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126e0248;
  func_0x000107c610f4(PTR_PTR_1126e0248);
  lVar2 = param_1;
  FUN_1005ad514(param_1);
  func_0x000107c61180();
  func_0x000107c46cc8(puVar1,param_2,lVar2,(long)*(int *)(param_1 + 0x18));
  FUN_1005ae244();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1005ad514; end: 1005ad5cb;  */

void FUN_1005ad514(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c3e170(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      (param_1[1] - *param_1) / 0x30);
  func_0x000107c61180();
  lVar1 = param_1[1];
  for (lVar4 = *param_1; lVar4 != lVar1; lVar4 = lVar4 + 0x30) {
    lVar3 = lVar4;
    FUN_1005ad63c(lVar4);
    func_0x000107c61180();
    func_0x000107c3d798(puVar2,param_2,lVar3);
    func_0x0001005ad840();
  }
  func_0x000107c40794(puVar2);
  FUN_1005ae190();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1005ad5cc; end: 1005ad63b; -[SIGNavigationBarButton navigationBarButtonItem:didChangeShowBadgeCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005ad5cc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112794ff8;
  func_0x000107c4ff34(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  func_0x000107c61170(uVar1);
  lVar2 = *(long *)(param_1 + _DAT_112794fc4);
  func_0x000107c3e620();
  if (lVar2 != 0) {
    func_0x000107c3c628(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bed3dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateBadgeViewVisibilityIfNeed_112592918)
    ;
    return;
  }
  return;
}



/* Entry: 1005ad63c; end: 1005ad6d3;  */

void FUN_1005ad63c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126dfde0;
  func_0x000107c610f4(PTR_PTR_1126dfde0);
  lVar2 = param_1;
  FUN_1001011a4(param_1);
  func_0x000107c61180();
  param_1 = param_1 + 0x18;
  FUN_1001011a4(param_1);
  func_0x000107c61180();
  func_0x000107c4706c(puVar1,param_2,lVar2,param_1);
  FUN_1005ad830();
  func_0x0001005ad838();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1005ad6d4; end: 1005ad753; -[SCFriendsFeedNavigationServiceImpl _observeBadgeEvents] */

/* WARNING: Possible PIC construction at 0x0001005ad72c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005ad730) */
/* WARNING: Removing unreachable block (ram,0x0001005ad734) */
/* WARNING: Removing unreachable block (ram,0x0001005ad740) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005ad6d4(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_PTR_1126c56d0;
  uVar4 = *(ulong *)(param_1 + _DAT_112751470);
  func_0x000107c61174(uVar4);
  func_0x000107c61158(puVar2);
  uVar3 = uVar4;
  func_0x000107c6115c(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1005ad754; end: 1005ad82f; -[SCNNetworkTypesHeader initWithKey:value:] */

undefined1 *
FUN_1005ad754(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_11270b870;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1005ad830; end: 1005ad847;  */

void FUN_1005ad830(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1005ad848; end: 1005ad8bf;  */

uint FUN_1005ad848(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined **ppuVar3;
  
  ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2970;
  func_0x000107c49820();
  uVar1 = 4;
  if (ppuVar3 != (undefined **)0x5) {
    uVar1 = 0;
  }
  uVar2 = 3;
  if (ppuVar3 != (undefined **)0x4) {
    uVar2 = uVar1;
  }
  uVar1 = 2;
  if (ppuVar3 != (undefined **)0x3) {
    uVar1 = uVar2;
  }
  uVar2 = param_1 - 1;
  if (3 < param_1 - 2U) {
    uVar2 = 0;
  }
  if (ppuVar3 != (undefined **)0x0) {
    uVar2 = (uint)(ppuVar3 == (undefined **)0x2);
  }
  if ((long)ppuVar3 < 3) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 1005ad8c0; end: 1005ae18f; -[SCLegacyCameraNavigationServiceImpl initWithTabItemUiContainer:swipeViewContainer:allowedTransitionDirections:navigationLogger:userInfoServices:fingerDownWarmer:appLifecycleManager:sigViewController:cameraWorkflowDelegate:swipeViewDelegate:sendSnapDelegate:circumstanceEngine:appStartExperimentReader:mainCameraScopeServices:mainCameraScopeExposer:cameraConfigurationServices:presenter:purgeBehavior:preloadDelayInMilliseconds:tabPresentationInterceptor:featureStartupEventBus:barStyle:preferences:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1005ad8c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,long param_24,
             undefined8 param_25)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined *puStack_a0;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_19);
  func_0x000107c61174(param_22);
  func_0x000107c61174(param_23);
  func_0x000107c61174(param_25);
  puStack_a0 = PTR_PTR_1126f3590;
  puVar2 = &uStack_a8;
  uStack_a8 = param_1;
  func_0x000107c61154(puVar2,PTR_s_initWithTabItemUiContainer_swipe_112531d88,param_3,param_4,
                      param_17,param_9,param_20,param_21,param_14,param_15,param_22,param_23,param_7
                      ,param_24,param_25);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar2 + (long)_DAT_1127513e4) = param_5;
    func_0x000107c611a0((long)puVar2 + (long)_DAT_1127513e8,param_6);
    lVar11 = (long)_DAT_1127513ec;
    func_0x000107c61174(param_9);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar11);
    *(undefined8 *)((long)puVar2 + lVar11) = param_9;
    func_0x000107c61170(uVar3);
    lVar11 = (long)_DAT_1127513f0;
    func_0x000107c61174(param_8);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar11);
    *(undefined8 *)((long)puVar2 + lVar11) = param_8;
    func_0x000107c61170(uVar3);
    lVar11 = (long)_DAT_1127513f4;
    func_0x000107c61174(param_10);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar11);
    *(undefined8 *)((long)puVar2 + lVar11) = param_10;
    func_0x000107c61170(uVar3);
    func_0x000107c611a0((long)puVar2 + (long)_DAT_1127513f8,param_11);
    func_0x000107c611a0((long)puVar2 + (long)_DAT_1127513fc,param_12);
    func_0x000107c611a0((long)puVar2 + (long)_DAT_112751400,param_13);
    lVar11 = (long)_DAT_112751404;
    func_0x000107c61174(param_14);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar11);
    *(undefined8 *)((long)puVar2 + lVar11) = param_14;
    func_0x000107c61170(uVar3);
    lVar11 = (long)_DAT_112751408;
    func_0x000107c61174(param_16);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar11);
    *(undefined8 *)((long)puVar2 + lVar11) = param_16;
    func_0x000107c61170(uVar3);
    lVar11 = (long)_DAT_11275140c;
    func_0x000107c61174(param_17);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar11);
    *(undefined8 *)((long)puVar2 + lVar11) = param_17;
    func_0x000107c61170(uVar3);
    func_0x000107c611a0((long)puVar2 + (long)_DAT_112751410,param_18);
    func_0x000107c52804(param_3);
    FUN_100456ca0();
    uVar3 = param_3;
    func_0x000107c4d4bc(param_3);
    func_0x000107c61180();
    func_0x000107c591f8();
    func_0x000107c61170(uVar3);
    uVar3 = param_3;
    func_0x000107c4d4bc();
    func_0x000107c61180();
    uVar10 = *(undefined8 *)((long)puVar2 + (long)_DAT_112751414);
    *(undefined8 *)((long)puVar2 + (long)_DAT_112751414) = uVar3;
    func_0x000107c61170(uVar10);
    puVar4 = puVar2;
    func_0x000107c5abc4();
    uVar3 = param_3;
    func_0x000107c4d500();
    func_0x000107c61180();
    lVar11 = (long)_DAT_112751418;
    func_0x000107c61174();
    uVar10 = *(undefined8 *)((long)puVar2 + lVar11);
    *(undefined8 *)((long)puVar2 + lVar11) = uVar3;
    func_0x000107c61170(uVar10);
    func_0x000107c520f4(uVar3);
    if (param_24 != 1) {
      func_0x000107c3f538(PTR_PTR_1126b9aa0);
    }
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c61180();
    uVar10 = param_3;
    func_0x000107c4d4bc(param_3);
    func_0x000107c61180();
    func_0x000107c52b50();
    func_0x000107c61170(uVar10);
    func_0x000107c61170(puVar5);
    uVar10 = param_3;
    func_0x000107c4d4bc(param_3);
    func_0x000107c61180();
    func_0x000107c59ecc();
    func_0x000107c61170(uVar10);
    uVar10 = param_3;
    func_0x000107c4d4bc();
    iVar1 = (int)uVar10;
    func_0x000107c61180();
    func_0x000107c544ac();
    func_0x000107c61170();
    FUN_100456ca0();
    uVar10 = 0x3ff8000000000000;
    if (iVar1 == 0) {
      uVar10 = 0x3ff0000000000000;
    }
    ppuVar6 = &PTR____CFConstantStringClassReference_110e60a58;
    FUN_10059c4fc(uVar10,&PTR____CFConstantStringClassReference_110e60a58,
                  &PTR____CFConstantStringClassReference_110e60a78,0x6c,0x65,param_24);
    func_0x000107c61180();
    puVar5 = PTR_PTR_1126c56e0;
    func_0x000107c610f4(PTR_PTR_1126c56e0);
    ppuVar7 = ppuVar6;
    func_0x000107c415ac(ppuVar6);
    func_0x000107c61180();
    ppuVar8 = ppuVar6;
    func_0x000107c44e78(ppuVar6);
    func_0x000107c61180();
    func_0x000107c41578(ppuVar6);
    func_0x000107c44e70(ppuVar6);
    func_0x000107c44e70(ppuVar6);
    func_0x000107c3e624(ppuVar6);
    uVar12 = uVar10;
    func_0x000107c3e628(ppuVar6);
    ppuVar9 = ppuVar6;
    uVar13 = uVar12;
    func_0x000107c3e650();
    iVar1 = (int)ppuVar9;
    FUN_100456ca0();
    uVar14 = 0x3ff8000000000000;
    if (iVar1 == 0) {
      uVar14 = 0x3ff0000000000000;
    }
    func_0x000107c46db8(uVar10,uVar12,uVar13,uVar14,puVar5);
    func_0x000107c5a568(uVar3);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(ppuVar8);
    func_0x000107c61170(ppuVar7);
    uVar10 = uVar3;
    func_0x000107c55148(uVar3);
    if (((ulong)puVar4 & 1) == 0) {
      uVar10 = uVar3;
      func_0x000107c59e18(uVar3);
    }
    else {
      FUN_1005aec24();
      func_0x000107c61180();
      func_0x000107c59e18(uVar3);
      func_0x000107c61170(uVar10);
    }
    FUN_1005aec24();
    func_0x000107c61180();
    func_0x000107c520fc(uVar3);
    func_0x000107c61170(uVar10);
    func_0x000107c61144(auStack_b0,puVar2);
    puVar5 = PTR_PTR_1126ae810;
    func_0x000107c610fc();
    uVar10 = *(undefined8 *)((long)puVar2 + (long)_DAT_11275141c);
    *(undefined **)((long)puVar2 + (long)_DAT_11275141c) = puVar5;
    func_0x000107c61170(uVar10);
    puVar5 = PTR_PTR_1126ae820;
    func_0x000107c610fc();
    uVar10 = *(undefined8 *)((long)puVar2 + (long)_DAT_112751420);
    *(undefined **)((long)puVar2 + (long)_DAT_112751420) = puVar5;
    func_0x000107c61170(uVar10);
    puVar5 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    puStack_c8 = &UNK_106809480;
    puStack_c0 = &UNK_110914e08;
    func_0x000107c6111c(auStack_b8,auStack_b0);
    ppuVar7 = &puStack_d8;
    func_0x000107c61184(ppuVar7);
    func_0x000107c52140(uVar3);
    puStack_100 = puVar5;
    uStack_f8 = 0xc2000000;
    puStack_f0 = &UNK_106809554;
    puStack_e8 = &UNK_110914e08;
    func_0x000107c6111c(auStack_e0,auStack_b0);
    func_0x000107c57644(uVar3);
    func_0x000107c6111c(auStack_108,auStack_b0);
    func_0x000107c57648(uVar3);
    puVar5 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar10 = *(undefined8 *)((long)puVar2 + (long)_DAT_112751424);
    *(undefined **)((long)puVar2 + (long)_DAT_112751424) = puVar5;
    func_0x000107c61170(uVar10);
    puVar5 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_10);
    func_0x000107c61174(param_19);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar10 = *(undefined8 *)((long)puVar2 + (long)_DAT_112751428);
    *(undefined **)((long)puVar2 + (long)_DAT_112751428) = puVar5;
    func_0x000107c61170(uVar10);
    func_0x000107c61170(param_19);
    func_0x000107c61170(param_10);
    func_0x000107c61120(auStack_108);
    func_0x000107c61120(auStack_e0);
    func_0x000107c61170(ppuVar7);
    func_0x000107c61120(auStack_b8);
    func_0x000107c61120(auStack_b0);
    func_0x000107c61170(ppuVar6);
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_25);
  func_0x000107c61170(param_23);
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar2;
}



/* Entry: 1005ae190; end: 1005ae197;  */

void FUN_1005ae190(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1005ae198; end: 1005ae243; -[SCNNetworkTypesHttpParams initWithHeaders:method:] */

undefined1 *
FUN_1005ae198(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_11270b878;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1005ae244; end: 1005ae24b;  */

void FUN_1005ae244(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1005ae24c; end: 1005ae27f;  */

void FUN_1005ae24c(void)

{
  func_0x000107c610f4(PTR_PTR_1126dfd90);
  func_0x000107c4869c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1005ae280; end: 1005ae2ab;  */

void FUN_1005ae280(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c2ffd4();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1005ae2ac; end: 1005ae40f; -[SCNNetworkTypesHttpRequest initWithKey:url:httpParams:usesDeprecatedHttpRequestInfo:deprecatedHttpRequestInfo:inAppSessionRequest:fallbackUrlProvider:] */

undefined1 *
FUN_1005ae2ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_9);
  puStack_68 = PTR_PTR_11270b880;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 9) = param_8;
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1005ae410; end: 1005ae42f;  */

void FUN_1005ae410(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1005ae430; end: 1005ae463;  */

long FUN_1005ae430(long param_1)

{
  FUN_1005ad23c(param_1 + 0x50);
  func_0x0001005ad2a8(param_1 + 0x20);
  func_0x000107c60ca0(param_1 + 8);
  return param_1;
}



/* Entry: 1005ae464; end: 1005ae46b;  */

void FUN_1005ae464(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x30;
    FUN_1005acd08();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 1005ae46c; end: 1005ae4a3;  */

void FUN_1005ae46c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x30;
    FUN_1005acd08();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1005ae4a4; end: 1005ae4ab;  */

void FUN_1005ae4a4(void)

{
  return;
}



/* Entry: 1005ae4ac; end: 1005ae4ff; -[SCNNetworkTypesHttpRequestBuilder .cxx_destruct] */

void FUN_1005ae4ac(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cece20;
    FUN_1004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x0001005ac278((long *)(param_1 + 0x18));
  FUN_1004a5588(param_1 + 8);
  return;
}



/* Entry: 1005ae500; end: 1005ae50f;  */

void FUN_1005ae500(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001005ae508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1005ae510; end: 1005ae55b;  */

undefined8 * FUN_1005ae510(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cefe68;
  FUN_1005ad23c(param_1 + 0xc);
  func_0x0001005ad2a8(param_1 + 8);
  func_0x000107c60ca0(param_1 + 3);
  FUN_1005abf54(param_1 + 1);
  return param_1;
}



/* Entry: 1005ae55c; end: 1005ae55f;  */

void FUN_1005ae55c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1005ae560; end: 1005ae567; -[SCNNetworkTypesHttpRequest key] */

undefined8 FUN_1005ae560(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1005ae568; end: 1005ae56f; -[SCRequestTask setNativeHttpRequestKey:] */

void FUN_1005ae568(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 1005ae570; end: 1005ae57f; -[SIGTabBarItemContainer setApparentElevation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005ae570(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11278c584) = param_3;
  return;
}



/* Entry: 1005ae580; end: 1005ae587; -[SCRequestScheduler lazyNetworkApiRouter] */

undefined8 FUN_1005ae580(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 1005ae588; end: 1005aea0b;  */

void FUN_1005ae588(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  
  param_1 = param_1 + 0x28;
  func_0x000107c61148();
  if (param_1 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    func_0x000107c3c688(param_1);
    puVar2 = PTR_PTR_1126b7410;
    func_0x000107c5a9bc(PTR_PTR_1126b7410);
    func_0x000107c61180();
    func_0x000107c52bc0();
    puVar3 = PTR_PTR_1126dff48;
    func_0x000107c610f4();
    func_0x000107c467c0();
    puVar4 = PTR_PTR_1126dff50;
    func_0x000107c610f4(PTR_PTR_1126dff50);
    puVar13 = PTR_PTR_1126dfe58;
    func_0x000107c3cea8(PTR_PTR_1126dfe58);
    func_0x000107c61180();
    puVar5 = PTR_PTR_1126b7f68;
    func_0x000107c4d5cc();
    func_0x000107c61180();
    puVar6 = PTR_PTR_1126b7f68;
    func_0x000107c40d9c();
    func_0x000107c61180();
    func_0x000107c47550(puVar4,param_2,puVar13,60000,0x8000,1,0,1,puVar3,puVar5,puVar6,0);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar13);
    puVar13 = PTR_PTR_1126dff58;
    func_0x000107c610f4();
    lVar7 = param_1;
    func_0x000107c4d5b4(param_1);
    func_0x000107c61180();
    lVar8 = lVar7;
    func_0x000107c4142c();
    func_0x000107c61180();
    lVar9 = lVar8;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c46438(puVar13,param_2,lVar9,*(undefined8 *)(param_1 + 0x90));
    uVar12 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar13;
    func_0x000107c61170(uVar12);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar7);
    puVar5 = PTR_PTR_1126dff40;
    uVar12 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puVar13 = PTR_PTR_1126b4ec0;
    func_0x000107c610f4(PTR_PTR_1126b4ec0);
    func_0x000107c47de8();
    func_0x000107c40a44(puVar5,param_2,uVar12,puVar2,uVar1,puVar13,puVar4);
    func_0x000107c61180();
    func_0x000107c61170(puVar13);
    puVar13 = PTR_PTR_1126dff60;
    func_0x000107c610fc(PTR_PTR_1126dff60);
    func_0x000107c4fbb4(puVar5,param_2,puVar13);
    func_0x000107c61170(puVar13);
    puVar13 = PTR_PTR_1126dfd80;
    lVar7 = param_1;
    func_0x000107c4d5b4(param_1);
    func_0x000107c61180();
    lVar8 = lVar7;
    func_0x000107c5c5ec();
    func_0x000107c61180();
    lVar9 = lVar8;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar10 = lVar9;
    func_0x000107c5da04();
    func_0x000107c61180();
    lVar11 = lVar10;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c59b4c(puVar13,param_2,lVar11);
    func_0x000107c61170(lVar11);
    func_0x000107c61170(lVar10);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar7);
    func_0x000107c3d784(puVar5,param_2,puVar2);
    puVar6 = PTR_PTR_1126dfd78;
    func_0x000107c5a9bc(PTR_PTR_1126dfd78);
    func_0x000107c61180();
    lVar7 = param_1;
    func_0x000107c4d5b4(param_1);
    func_0x000107c61180();
    lVar8 = lVar7;
    func_0x000107c3e5d8();
    func_0x000107c61180();
    lVar9 = lVar8;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c52b7c(puVar6,param_2,lVar9);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar7);
    lVar7 = param_1;
    func_0x000107c4d5b4(param_1);
    func_0x000107c61180();
    lVar8 = lVar7;
    func_0x000107c3e710();
    func_0x000107c61180();
    lVar9 = lVar8;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c52c20(puVar6,param_2,lVar9);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar7);
    func_0x000107c56998(puVar2,param_2,puVar5);
    lVar7 = param_1;
    func_0x000107c4d5b4(param_1);
    func_0x000107c61180();
    lVar8 = lVar7;
    func_0x000107c3fcd0();
    func_0x000107c61180();
    lVar9 = lVar8;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c5340c(puVar2,param_2,lVar9);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar7);
    puVar13 = PTR_PTR_1126dff68;
    func_0x000107c610f4(PTR_PTR_1126dff68);
    lVar7 = param_1;
    func_0x000107c4d5b4(param_1);
    func_0x000107c61180();
    func_0x000107c47a30(puVar13,param_2,puVar5,lVar7,param_1);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 1005aea0c; end: 1005aea7f; -[SCRequestScheduler _setupNativeRankerNotifiers] */

/* WARNING: Possible PIC construction at 0x0001005aea68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005aea6c) */

void FUN_1005aea0c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126dff70;
  func_0x000107c610f4();
  puVar2 = PTR_PTR_1126dfd80;
  func_0x000107c4023c(PTR_PTR_1126dfd80);
  func_0x000107c61180();
  func_0x000107c40244();
  func_0x000107c4647c(puVar1,param_2,puVar2,*(undefined8 *)(param_1 + 0x90));
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1005aea80; end: 1005aebcf; -[SCNetworkConnectivityChangeNotifier initWithDefaultNetworkReachability:queuePerformer:] */

undefined1 * FUN_1005aea80(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112705f00;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    func_0x000107c61170(uVar2);
    *(long *)((long)puVar1 + 0x28) = param_3;
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___CTTelephonyNetworkInfo_1126dfdd8;
    func_0x000107c610fc();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    func_0x000107c61170(uVar2);
    if ((param_3 == 4) || (param_3 == 1)) {
      FUN_1005c90d0(*(undefined8 *)((long)puVar1 + 0x20));
    }
    func_0x000107c53c9c(puVar1);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c61180();
    func_0x000107c3d7bc();
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1005aebd0; end: 1005aec23; -[SIGFooterItemConfig setEnableDarkModeAlways:] */

void FUN_1005aebd0(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined1 *)(param_1 + 0x13) = param_3;
  uStack_30 = 0xc2000000;
  puStack_28 = &UNK_10b84fc1c;
  puStack_20 = &UNK_110d62990;
  lStack_18 = param_1;
  func_0x000107c437dc(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 1005aec24; end: 1005aec3b;  */

void FUN_1005aec24(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f5bbb8;
  FUN_1000f5ff4(&PTR____CFConstantStringClassReference_110f5bbb8,
                &PTR____CFConstantStringClassReference_110e61f78,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    FUN_10002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1005aec3c; end: 1005aed03; -[SIGNavigationBarButtonItem setPreActivationAction:] */

void FUN_1005aec3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  func_0x000107c61184();
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
  func_0x000107c61170(uVar1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1005aecb4;
  puStack_30 = &UNK_110d62ca0;
  lStack_28 = param_1;
  func_0x000107c437dc(param_1,param_2,&puStack_48);
  return;
}



/* Entry: 1005aed04; end: 1005aed83; -[SIGNavigationBarButton navigationBarButtonItem:didChangePreActivationAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005aed04(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_s__didBeginPreActivation_112548770;
  func_0x000107c5002c(param_1,param_2,param_1,PTR_s__didBeginPreActivation_112548770,1);
  lVar2 = *(long *)(param_1 + _DAT_112794fc4);
  func_0x000107c4ec20();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010befbd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_addTarget_action_forControlEvent_11259c900,param_1,puVar1,1);
    return;
  }
  return;
}



/* Entry: 1005aed84; end: 1005aee4b; -[SIGNavigationBarButtonItem setPreActivationCancelAction:] */

void FUN_1005aed84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  func_0x000107c61184();
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
  func_0x000107c61170(uVar1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1005aedfc;
  puStack_30 = &UNK_110d62ca0;
  lStack_28 = param_1;
  func_0x000107c437dc(param_1,param_2,&puStack_48);
  return;
}



/* Entry: 1005aee4c; end: 1005aeecb; -[SIGNavigationBarButton navigationBarButtonItem:didChangePreActivationCancelAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005aee4c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_s__didCancelPreActivation_112548778;
  func_0x000107c5002c(param_1,param_2,param_1,PTR_s__didCancelPreActivation_112548778,0x180);
  lVar2 = *(long *)(param_1 + _DAT_112794fc4);
  func_0x000107c4ec24();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010befbd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_addTarget_action_forControlEvent_11259c900,param_1,puVar1,0x180);
    return;
  }
  return;
}



/* Entry: 1005aeecc; end: 1005af127; -[SCActiveUserNGSNavigationRouter _setUpDiscoverFeedNavigationService] */

/* WARNING: Possible PIC construction at 0x0001005af0a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005af0b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005af0c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005af0d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005af0e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005af0f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005af100: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005af0f4) */
/* WARNING: Removing unreachable block (ram,0x0001005af0e4) */
/* WARNING: Removing unreachable block (ram,0x0001005af0d4) */
/* WARNING: Removing unreachable block (ram,0x0001005af0c4) */
/* WARNING: Removing unreachable block (ram,0x0001005af0b4) */
/* WARNING: Removing unreachable block (ram,0x0001005af0a4) */
/* WARNING: Removing unreachable block (ram,0x0001005af104) */

void FUN_1005aeecc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  uVar1 = *(undefined8 *)(param_1 + 400);
  func_0x000107c4d9e8(uVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7150);
  func_0x000107c61180();
  uVar2 = *(ulong *)(param_1 + 0x2b8);
  func_0x000107c4d9c0(uVar2,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7168);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ce490;
  func_0x000107c610f4();
  uVar4 = *(undefined8 *)(param_1 + 0x188);
  func_0x000107c4d9e8(uVar4,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7150);
  func_0x000107c61180();
  lVar5 = param_1 + 0x30;
  func_0x000107c61148();
  lVar6 = param_1 + 0x238;
  func_0x000107c61148();
  uVar7 = *(undefined8 *)(param_1 + 0x168);
  func_0x000107c3de00();
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar8 = param_1 + 0x20;
  func_0x000107c61148();
  func_0x000107c61174();
  lVar9 = param_1 + 0x68;
  func_0x000107c61148();
  lVar10 = param_1 + 0x58;
  func_0x000107c61148();
  uVar11 = uVar2;
  func_0x000107c4f69c();
  FUN_1005af128();
  func_0x000107c4ed7c();
  uVar14 = *(undefined8 *)(param_1 + 0x140);
  uVar16 = *(undefined8 *)(param_1 + 0x158);
  uVar17 = *(undefined8 *)(param_1 + 0x330);
  uVar15 = *(undefined8 *)(param_1 + 0x328);
  uVar20 = *(undefined8 *)(param_1 + 0x170);
  uVar21 = *(undefined8 *)(param_1 + 0x348);
  uVar22 = *(undefined8 *)(param_1 + 0x370);
  uVar19 = *(undefined8 *)(param_1 + 800);
  uVar18 = *(undefined8 *)(param_1 + 0x378);
  uVar23 = *(undefined8 *)(param_1 + 0x1d8);
  lVar12 = param_1 + 0x248;
  func_0x000107c61148();
  lVar13 = param_1 + 0x250;
  func_0x000107c61148();
  func_0x000107c48bf8(puVar3,param_2,uVar1,uVar4,lVar5,lVar6,uVar7,lVar8,lVar8,lVar9,lVar10,uVar11,
                      uVar2 & 0xffffffff,uVar14,uVar16,uVar17,uVar15,param_1,uVar20,uVar21,uVar22,
                      uVar19,uVar18,uVar23,lVar12,lVar13,*(undefined8 *)(param_1 + 0x388));
  uVar1 = *(undefined8 *)(param_1 + 0x440);
  *(undefined **)(param_1 + 0x440) = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1005af128; end: 1005af19f;  */

uint FUN_1005af128(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined **ppuVar3;
  
  ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2970;
  func_0x000107c49820();
  uVar1 = 4;
  if (ppuVar3 != (undefined **)0x5) {
    uVar1 = 0;
  }
  uVar2 = 3;
  if (ppuVar3 != (undefined **)0x4) {
    uVar2 = uVar1;
  }
  uVar1 = 2;
  if (ppuVar3 != (undefined **)0x3) {
    uVar1 = uVar2;
  }
  uVar2 = param_1 - 1;
  if (3 < param_1 - 2U) {
    uVar2 = 0;
  }
  if (ppuVar3 != (undefined **)0x0) {
    uVar2 = (uint)(ppuVar3 == (undefined **)0x2);
  }
  if ((long)ppuVar3 < 3) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 1005af1a0; end: 1005afaef; -[SCDiscoverFeedNavigationServiceImpl initWithTabItemUiContainer:swipeViewContainer:navigationLogger:userInfoServices:appLifecycleManager:containerViewController:parentController:discoverFeedScopeExposer:discoverFeedScopeServices:purgeBehavior:preloadDelayInMilliseconds:circumstanceEngine:appStartExperimentReader:friendStoriesPlaybackListener:pageLoadMetricManager:tabPresentationInterceptor:storiesConfigProvider:deckTransitionObservable:featureStartupEventBus:barStyle:preferences:currentPageTracker:searchScopeExposer:searchScopeServices:userStoriesAdPrefetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1005af1a0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,ulong param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined *puVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined **ppuVar13;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_19);
  func_0x000107c61174(param_20);
  func_0x000107c61174(param_21);
  func_0x000107c61174(param_23);
  func_0x000107c61174(param_24);
  func_0x000107c61174(param_25);
  func_0x000107c61174(param_26);
  func_0x000107c61174(param_27);
  puStack_a0 = PTR_PTR_1126f37b8;
  puVar4 = &uStack_a8;
  uStack_a8 = param_1;
  func_0x000107c61154(puVar4,PTR_s_initWithTabItemUiContainer_swipe_112531d88,param_3,param_4,
                      param_10,param_7,param_12,param_13,param_14,param_15,param_18,param_21,param_6
                      ,param_22,param_23);
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar19 = *(undefined8 *)((long)puVar4 + (long)_DAT_112751c9c);
    *(undefined **)((long)puVar4 + (long)_DAT_112751c9c) = puVar5;
    func_0x000107c61170(uVar19);
    lVar21 = (long)_DAT_112751ca0;
    func_0x000107c61174(param_3);
    uVar19 = *(undefined8 *)((long)puVar4 + lVar21);
    *(ulong *)((long)puVar4 + lVar21) = param_3;
    func_0x000107c61170(uVar19);
    func_0x000107c611a0((long)puVar4 + (long)_DAT_112751ca4,param_8);
    func_0x000107c611a0((long)puVar4 + (long)_DAT_112751ca8,param_5);
    func_0x000107c611a0((long)puVar4 + (long)_DAT_112751cac,param_9);
    lVar21 = (long)_DAT_112751cb0;
    func_0x000107c61174(param_11);
    uVar19 = *(undefined8 *)((long)puVar4 + lVar21);
    *(undefined8 *)((long)puVar4 + lVar21) = param_11;
    func_0x000107c61170(uVar19);
    lVar21 = (long)_DAT_112751cb4;
    func_0x000107c61174(param_19);
    uVar19 = *(undefined8 *)((long)puVar4 + lVar21);
    *(undefined8 *)((long)puVar4 + lVar21) = param_19;
    func_0x000107c61170(uVar19);
    lVar22 = (long)_DAT_112751cb8;
    func_0x000107c61174(param_10);
    uVar19 = *(undefined8 *)((long)puVar4 + lVar22);
    *(undefined8 *)((long)puVar4 + lVar22) = param_10;
    func_0x000107c61170(uVar19);
    lVar22 = (long)_DAT_112751cbc;
    func_0x000107c61174(param_14);
    uVar19 = *(undefined8 *)((long)puVar4 + lVar22);
    *(undefined8 *)((long)puVar4 + lVar22) = param_14;
    func_0x000107c61170(uVar19);
    lVar22 = (long)_DAT_112751cc0;
    func_0x000107c61174(param_17);
    uVar19 = *(undefined8 *)((long)puVar4 + lVar22);
    *(undefined8 *)((long)puVar4 + lVar22) = param_17;
    func_0x000107c61170(uVar19);
    uVar6 = param_3;
    func_0x000107c4d500();
    func_0x000107c61180();
    lVar22 = (long)_DAT_112751cc4;
    uVar19 = *(undefined8 *)((long)puVar4 + lVar22);
    *(ulong *)((long)puVar4 + lVar22) = uVar6;
    func_0x000107c61170(uVar19);
    func_0x000107c520f4(*(undefined8 *)((long)puVar4 + lVar22));
    puVar7 = puVar4;
    func_0x000107c3b98c();
    func_0x000107c61180();
    func_0x000107c520fc(*(undefined8 *)((long)puVar4 + lVar22));
    uVar19 = param_4;
    func_0x000107c437a8();
    func_0x000107c61180();
    uVar20 = *(undefined8 *)((long)puVar4 + (long)_DAT_112751cc8);
    *(undefined8 *)((long)puVar4 + (long)_DAT_112751cc8) = uVar19;
    func_0x000107c61170(uVar20);
    func_0x000107c3cbe4(puVar4);
    uVar6 = param_3;
    func_0x000107c4d4bc();
    func_0x000107c61180();
    uVar8 = uVar6;
    func_0x000107c5cf3c();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    puVar5 = PTR_PTR_1126ce598;
    func_0x000107c61158(PTR_PTR_1126ce598);
    uVar9 = uVar8;
    func_0x000107c6115c(uVar8,puVar5);
    uVar6 = uVar8;
    if ((uVar9 & 1) == 0) {
      uVar6 = 0;
    }
    func_0x000107c61174();
    func_0x000107c61170(uVar8);
    uVar8 = param_3;
    func_0x000107c4d4bc(param_3);
    func_0x000107c61180();
    func_0x000107c591f8();
    func_0x000107c61170(uVar8);
    iVar2 = (int)*(undefined8 *)((long)puVar4 + lVar21);
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar5 = PTR_PTR_1126c22a8;
    func_0x000107c41fc4(PTR_PTR_1126c22a8);
    func_0x000107c61180();
    iVar3 = iVar2;
    func_0x000107c3ebc4();
    func_0x000107c61170(puVar5);
    func_0x000107c61170();
    uVar19 = 0x18b;
    if (iVar3 == 0) {
      uVar19 = 0x1cb;
    }
    uVar20 = 0x192;
    if (iVar3 == 0) {
      uVar20 = 0x1d0;
    }
    FUN_100456ca0();
    uVar23 = 0x3ff8000000000000;
    if (iVar2 == 0) {
      uVar23 = 0x3ff0000000000000;
    }
    ppuVar10 = &PTR____CFConstantStringClassReference_110e61d58;
    FUN_10059c4fc(uVar23,&PTR____CFConstantStringClassReference_110e61d58,
                  &PTR____CFConstantStringClassReference_110e61d78,uVar20,uVar19,param_22);
    func_0x000107c61180();
    puVar5 = PTR_PTR_1126c56e0;
    func_0x000107c610f4(PTR_PTR_1126c56e0);
    ppuVar11 = ppuVar10;
    func_0x000107c415ac(ppuVar10);
    func_0x000107c61180();
    ppuVar12 = ppuVar10;
    func_0x000107c44e78(ppuVar10);
    func_0x000107c61180();
    func_0x000107c41578(ppuVar10);
    func_0x000107c44e70(ppuVar10);
    func_0x000107c44e70(ppuVar10);
    func_0x000107c3e624(ppuVar10);
    uVar19 = uVar23;
    func_0x000107c3e628(ppuVar10);
    ppuVar13 = ppuVar10;
    uVar20 = uVar19;
    func_0x000107c3e650();
    iVar3 = (int)ppuVar13;
    FUN_100456ca0();
    uVar24 = 0x3ff8000000000000;
    if (iVar3 == 0) {
      uVar24 = 0x3ff0000000000000;
    }
    func_0x000107c46db8(uVar23,uVar19,uVar20,uVar24,puVar5);
    func_0x000107c61170(ppuVar12);
    func_0x000107c61170(ppuVar11);
    func_0x000107c55148(*(undefined8 *)((long)puVar4 + lVar22));
    func_0x000107c5a568(*(undefined8 *)((long)puVar4 + lVar22));
    func_0x000107c59e18(*(undefined8 *)((long)puVar4 + lVar22));
    func_0x000107c59c0c(*(undefined8 *)((long)puVar4 + lVar22));
    uVar9 = param_16;
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar14 = PTR_PTR_1126b7a10;
    func_0x000107c61158(PTR_PTR_1126b7a10);
    uVar15 = uVar9;
    func_0x000107c6115c(uVar9,puVar14);
    uVar8 = uVar9;
    if ((uVar15 & 1) == 0) {
      uVar8 = 0;
    }
    func_0x000107c61174(uVar8);
    func_0x000107c61170(uVar9);
    uVar19 = *(undefined8 *)((long)puVar4 + (long)_DAT_112751ccc);
    *(ulong *)((long)puVar4 + (long)_DAT_112751ccc) = uVar8;
    func_0x000107c61170(uVar19);
    lVar22 = (long)_DAT_112751cd0;
    func_0x000107c61174(param_25);
    uVar19 = *(undefined8 *)((long)puVar4 + lVar22);
    *(undefined8 *)((long)puVar4 + lVar22) = param_25;
    func_0x000107c61170(uVar19);
    lVar22 = (long)_DAT_112751cd4;
    func_0x000107c61174(param_26);
    uVar19 = *(undefined8 *)((long)puVar4 + lVar22);
    *(undefined8 *)((long)puVar4 + lVar22) = param_26;
    func_0x000107c61170(uVar19);
    lVar22 = (long)_DAT_112751cd8;
    func_0x000107c61174(param_27);
    uVar19 = *(undefined8 *)((long)puVar4 + lVar22);
    *(undefined8 *)((long)puVar4 + lVar22) = param_27;
    func_0x000107c61170(uVar19);
    *(undefined1 *)((long)puVar4 + (long)_DAT_112751cdc) = 0;
    lVar22 = (long)_DAT_112751ce0;
    func_0x000107c61174(param_24);
    uVar19 = *(undefined8 *)((long)puVar4 + lVar22);
    *(undefined8 *)((long)puVar4 + lVar22) = param_24;
    func_0x000107c61170(uVar19);
    uVar20 = *(undefined8 *)((long)puVar4 + lVar21);
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar14 = PTR_PTR_1126c22a8;
    func_0x000107c41f84(PTR_PTR_1126c22a8);
    func_0x000107c61180();
    uVar19 = uVar20;
    func_0x000107c3ebc4();
    lVar21 = (long)_DAT_112751ce4;
    *(char *)((long)puVar4 + lVar21) = (char)uVar19;
    func_0x000107c61170(puVar14);
    func_0x000107c61170(uVar20);
    if (*(char *)((long)puVar4 + lVar21) == '\x01') {
      func_0x000107c61144(auStack_b0,puVar4);
      puVar17 = PTR_PTR_1126be840;
      puVar1 = PTR_PTR_1126aeec0;
      puVar14 = PTR_PTR_1126ae960;
      puVar16 = PTR_PTR_1126be848;
      func_0x000107c4ad94(PTR_PTR_1126be848);
      func_0x000107c61180();
      func_0x000107c5bf20(puVar17);
      func_0x000107c61180();
      func_0x000107c40418(puVar14);
      func_0x000107c61180();
      puVar18 = PTR_PTR_1126ae970;
      func_0x000107c5d9b8(PTR_PTR_1126ae970);
      func_0x000107c61180();
      func_0x000107c6111c(auStack_b8,auStack_b0);
      func_0x000107c3e2d8(puVar1);
      func_0x000107c611b0();
      func_0x000107c61170(puVar18);
      func_0x000107c61170(puVar14);
      func_0x000107c61170(puVar17);
      func_0x000107c61170(puVar16);
      func_0x000107c61120(auStack_b8);
      func_0x000107c61120(auStack_b0);
    }
    func_0x000107c61170(puVar5);
    func_0x000107c61170(ppuVar10);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(puVar7);
  }
  func_0x000107c61170(param_27);
  func_0x000107c61170(param_26);
  func_0x000107c61170(param_25);
  func_0x000107c61170(param_24);
  func_0x000107c61170(param_23);
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar4;
}



/* Entry: 1005afaf0; end: 1005afb1b; -[SCDiscoverFeedNavigationServiceImpl _hintLabel] */

void FUN_1005afaf0(int param_1)

{
  func_0x000107c5abc4();
  if (param_1 != 0) {
    FUN_1005afb1c();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1005afb1c; end: 1005afb33;  */

void FUN_1005afb1c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f5bb58;
  FUN_1000f5ff4(&PTR____CFConstantStringClassReference_110f5bb58,
                &PTR____CFConstantStringClassReference_110e61f78,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    FUN_10002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1005afb34; end: 1005afc1f; -[SCDiscoverFeedNavigationServiceImpl _updateFooterPropertiesWithFooterItem:] */

/* WARNING: Possible PIC construction at 0x0001005afb98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005afbc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005afbf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005afc08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005afbf8) */
/* WARNING: Removing unreachable block (ram,0x0001005afbc8) */
/* WARNING: Removing unreachable block (ram,0x0001005afb9c) */
/* WARNING: Removing unreachable block (ram,0x0001005afc0c) */

void FUN_1005afb34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c3b758(param_1);
  func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,param_1);
  func_0x000107c61180();
  func_0x000107c4a76c(param_3);
  func_0x000107c61180();
  func_0x000107c52b50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1005afc20; end: 1005afc27; -[SCDiscoverFeedNavigationServiceImpl _footerBackgroundColor] */

undefined8 FUN_1005afc20(void)

{
  return 0x29;
}



/* Entry: 1005afc28; end: 1005afc2f; -[SIGFooterItem itemConfig] */

undefined8 FUN_1005afc28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1005afc30; end: 1005afc3f; -[SCDiscoverFeedNavigationServiceImpl _topBorderColorWithFlatFooter] */

void FUN_1005afc30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0x5c);
  return;
}



/* Entry: 1005afc40; end: 1005afc5b; +[SCStoriesSearchHeaderConfigKeys discoverNavigationSearchIconEnabled] */

void FUN_1005afc40(void)

{
  if (lRam0000000113584ad0 != -1) {
    func_0x000107c61568(0x113584ad0,0x1005afca0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011380cce8);
  return;
}



/* Entry: 1005afc5c; end: 1005afd27;  */

void FUN_1005afc5c(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  if (*param_3 == -1) {
    uVar1 = *param_4;
  }
  else {
    func_0x000107c61568(param_3,param_5);
    uVar1 = *param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uVar1);
  return;
}



/* Entry: 1005afd28; end: 1005afd43;  */

void FUN_1005afd28(void)

{
  func_0x000107c610f8(PTR_PTR_1126ae820);
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1005afd44; end: 1005afd4f;  */

void FUN_1005afd44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1005afd50; end: 1005afd6b; +[SCStoriesSearchHeaderConfigKeys discoverFeedNavIconOpensSearch] */

void FUN_1005afd50(void)

{
  if (lRam0000000113584af8 != -1) {
    func_0x000107c61568(0x113584af8,FUN_1005afd6c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011380cd10);
  return;
}



/* Entry: 1005afd6c; end: 1005afdbb;  */

void FUN_1005afd6c(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  func_0x000107c610f8();
  uVar1 = 0xd000000000000023;
  func_0x000100442ccc(0xd000000000000023,0x800000010f19b080,0);
  uRam000000011380cd10 = uVar1;
  return;
}



/* Entry: 1005afdbc; end: 1005afff7; -[SCActiveUserNGSNavigationRouter _setUpSpotlightNavigationService] */

/* WARNING: Possible PIC construction at 0x0001005aff48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005aff58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005aff68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005aff78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005aff98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005affc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005affd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005affc4) */
/* WARNING: Removing unreachable block (ram,0x0001005aff9c) */
/* WARNING: Removing unreachable block (ram,0x0001005aff7c) */
/* WARNING: Removing unreachable block (ram,0x0001005aff6c) */
/* WARNING: Removing unreachable block (ram,0x0001005aff5c) */
/* WARNING: Removing unreachable block (ram,0x0001005aff4c) */
/* WARNING: Removing unreachable block (ram,0x0001005affd4) */

void FUN_1005afdbc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  uVar1 = *(undefined8 *)(param_1 + 400);
  func_0x000107c4d9e8(uVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7180);
  func_0x000107c61180();
  uVar2 = *(ulong *)(param_1 + 0x2b8);
  func_0x000107c4d9c0(uVar2,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7198);
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c4f69c();
  FUN_1005b0004();
  puVar4 = PTR_PTR_1126ce498;
  func_0x000107c610f4(PTR_PTR_1126ce498);
  uVar5 = *(undefined8 *)(param_1 + 0x188);
  func_0x000107c4d9e8(uVar5,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7180);
  func_0x000107c61180();
  lVar6 = param_1 + 0x30;
  func_0x000107c61148();
  lVar7 = param_1 + 0x238;
  func_0x000107c61148(lVar7);
  uVar12 = *(undefined8 *)(param_1 + 0x318);
  uVar8 = *(undefined8 *)(param_1 + 0x168);
  func_0x000107c3de00();
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar9 = *(undefined8 *)(param_1 + 0x188);
  func_0x000107c4d9e8(uVar9,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7180);
  func_0x000107c61180();
  lVar10 = param_1 + 0x20;
  func_0x000107c61148();
  lVar11 = param_1 + 0x88;
  func_0x000107c61148();
  func_0x000107c4ed7c();
  func_0x000107c48c08(puVar4,param_2,uVar1,uVar5,lVar6,lVar7,uVar12,uVar8,uVar9,lVar10,lVar11,uVar3,
                      uVar2 & 0xffffffff,*(undefined8 *)(param_1 + 0x328),
                      *(undefined8 *)(param_1 + 0x140),*(undefined8 *)(param_1 + 0x158),param_1,
                      *(undefined8 *)(param_1 + 0x170),*(undefined8 *)(param_1 + 0x370),
                      *(undefined8 *)(param_1 + 800),*(undefined8 *)(param_1 + 0x378),
                      *(undefined8 *)(param_1 + 0x380),*(undefined8 *)(param_1 + 0x390));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar11);
  return;
}



/* Entry: 1005afff8; end: 1005b0003;  */

bool FUN_1005afff8(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 1005b0004; end: 1005b007b;  */

uint FUN_1005b0004(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined **ppuVar3;
  
  ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2970;
  func_0x000107c49820();
  uVar1 = 4;
  if (ppuVar3 != (undefined **)0x5) {
    uVar1 = 0;
  }
  uVar2 = 3;
  if (ppuVar3 != (undefined **)0x4) {
    uVar2 = uVar1;
  }
  uVar1 = 2;
  if (ppuVar3 != (undefined **)0x3) {
    uVar1 = uVar2;
  }
  uVar2 = param_1 - 1;
  if (3 < param_1 - 2U) {
    uVar2 = 0;
  }
  if (ppuVar3 != (undefined **)0x0) {
    uVar2 = (uint)(ppuVar3 == (undefined **)0x2);
  }
  if ((long)ppuVar3 < 3) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 1005b007c; end: 1005b008b;  */

ulong FUN_1005b007c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  lVar3 = *(long *)(uVar2 + 8);
  uVar1 = *(uint *)(lVar3 + 0x14);
  if ((int)uVar1 < 0) {
    lVar4 = *(long *)(param_2 + 0x40);
    if (*(int *)(lVar4 + (ulong)-uVar1 * 4) != *(int *)(lVar3 + 0x10)) goto LAB_1005b00d0;
  }
  else {
    lVar4 = *(long *)(param_2 + 0x40);
    if ((*(uint *)(lVar4 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
LAB_1005b00d0:
      func_0x000107c4163c(uVar2);
      return uVar2;
    }
  }
  return (ulong)*(uint *)(lVar4 + (ulong)*(uint *)(lVar3 + 0x18));
}



/* Entry: 1005b008c; end: 1005b00e7;  */

ulong FUN_1005b008c(long param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_2 + 8);
  uVar1 = *(uint *)(lVar2 + 0x14);
  if ((int)uVar1 < 0) {
    lVar3 = *(long *)(param_1 + 0x40);
    if (*(int *)(lVar3 + (ulong)-uVar1 * 4) != *(int *)(lVar2 + 0x10)) goto LAB_1005b00d0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x40);
    if ((*(uint *)(lVar3 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
LAB_1005b00d0:
      func_0x000107c4163c(param_2);
      return param_2;
    }
  }
  return (ulong)*(uint *)(lVar3 + (ulong)*(uint *)(lVar2 + 0x18));
}



/* Entry: 1005b00e8; end: 1005b0777; -[SCSpotlightNavigationServiceImpl initWithTabItemUiContainer:swipeViewContainer:navigationLogger:userInfoServices:userProfileIdProvider:appLifecycleManager:swipeViewParentDelegate:parentController:spotlightScopeExposer:purgeBehavior:preloadDelayInMilliseconds:pageLoadMetricManager:circumstanceEngine:appStartExperimentReader:tabPresentationInterceptor:storiesConfigProvider:featureStartupEventBus:barStyle:preferences:modularSpotlightLauncher:spotlightScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1005b00e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_21);
  func_0x000107c61174(param_22);
  func_0x000107c61174(param_23);
  puStack_70 = PTR_PTR_1126f35b8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_initWithTabItemUiContainer_swipe_112531d88,param_3,param_4,
                      param_11,param_8,param_12,param_13,param_15,param_16,param_17,param_19,param_6
                      ,param_20,param_21);
  if (puVar1 != (undefined8 *)0x0) {
    lVar8 = (long)_DAT_1127514d4;
    func_0x000107c61174(param_22);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_22;
    func_0x000107c61170(uVar2);
    lVar8 = (long)_DAT_1127514d8;
    func_0x000107c61174(param_23);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_23;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_1127514dc,param_5);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_1127514e0,param_9);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_1127514e4,param_10);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_1127514e8,param_11);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127514ec) = 0xffffffffffffffff;
    uVar2 = param_6;
    func_0x000107c5d984();
    func_0x000107c61180();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127514f0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127514f0) = uVar2;
    func_0x000107c61170(uVar6);
    uVar2 = param_6;
    func_0x000107c4213c();
    func_0x000107c61180();
    uVar6 = uVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar3 = uVar6;
    func_0x000107c41050();
    func_0x000107c61180();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127514f4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127514f4) = uVar3;
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar2);
    lVar8 = (long)_DAT_1127514f8;
    func_0x000107c61174(param_21);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_21;
    func_0x000107c61170(uVar2);
    lVar8 = (long)_DAT_1127514fc;
    func_0x000107c61174(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_16;
    func_0x000107c61170(uVar2);
    lVar8 = (long)_DAT_112751500;
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_7;
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112751504);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112751504) = 0;
    func_0x000107c61170(uVar2);
    lVar8 = (long)_DAT_112751508;
    func_0x000107c61174(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_14;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275150c) = 0xffffffffffffffff;
    lVar8 = (long)_DAT_112751510;
    func_0x000107c61174(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_15;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_112751514,param_3);
    puVar4 = PTR_PTR_1126ae720;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112751518) = param_20;
    func_0x000107c61174(param_15);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275151c);
    *(undefined **)((long)puVar1 + (long)_DAT_11275151c) = puVar4;
    func_0x000107c61170(uVar2);
    uVar2 = param_3;
    func_0x000107c4d500();
    func_0x000107c61180();
    lVar8 = (long)_DAT_112751520;
    func_0x000107c61174();
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = uVar2;
    func_0x000107c61170(uVar6);
    func_0x000107c520f4(uVar2);
    puVar5 = puVar1;
    func_0x000107c3c89c();
    func_0x000107c61180();
    func_0x000107c520fc(uVar2);
    func_0x000107c61170();
    FUN_10052a7e0();
    if (((ulong)puVar5 & 1) == 0) {
      FUN_10052bb84();
    }
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c61180();
    uVar6 = param_3;
    func_0x000107c4d4bc(param_3);
    func_0x000107c61180();
    func_0x000107c52b50();
    func_0x000107c61170(uVar6);
    func_0x000107c61170(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c61180();
    uVar6 = param_3;
    func_0x000107c4d4bc(param_3);
    func_0x000107c61180();
    func_0x000107c59ecc();
    func_0x000107c61170(uVar6);
    func_0x000107c61170(puVar4);
    uVar6 = param_3;
    func_0x000107c4d4bc(param_3);
    func_0x000107c61180();
    func_0x000107c544ac();
    func_0x000107c61170(uVar6);
    uVar6 = param_3;
    func_0x000107c4d4bc(param_3);
    func_0x000107c61180();
    func_0x000107c591f8();
    func_0x000107c61170(uVar6);
    func_0x000107c3ccd8(puVar1);
    func_0x000107c55148(uVar2);
    puVar5 = puVar1;
    func_0x000107c3b98c(puVar1);
    func_0x000107c61180();
    func_0x000107c59e18(uVar2);
    func_0x000107c61170(puVar5);
    func_0x000107c59c0c(uVar2);
    lVar8 = (long)_DAT_112751524;
    func_0x000107c61174(param_18);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_18;
    func_0x000107c61170(uVar6);
    puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x000107c5a790();
    func_0x000107c61180();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_112751528);
    *(undefined **)((long)puVar1 + (long)_DAT_112751528) = puVar4;
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(param_15);
  }
  func_0x000107c61170(param_23);
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1005b0778; end: 1005b07b7;  */

void FUN_1005b0778(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3b548();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1005b07b8; end: 1005b08e3; -[SCUserInfoServicesEntryPoint _displaynameProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005b07b8(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + _DAT_112722ebc);
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf5a8;
  func_0x000107c5c1d4(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf5a8);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae750;
  func_0x000107c4d73c(PTR_PTR_1126ae750);
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112722ed0);
  func_0x000107c421ac(uVar3);
  func_0x000107c61180();
  func_0x000107c407c8(uVar5,param_2,4,ppuVar1,puVar2,uVar3,&PTR___NSConcreteGlobalBlock_1108854f8);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(ppuVar1);
  puVar2 = PTR_PTR_1126b88e0;
  func_0x000107c610f4(PTR_PTR_1126b88e0);
  param_1 = param_1 + _DAT_112722f04;
  func_0x000107c61148(param_1);
  lVar4 = param_1;
  func_0x000107c444a4();
  func_0x000107c61180();
  func_0x000107c46bcc(puVar2,param_2,lVar4,4,uVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1005b08e4; end: 1005b08eb;  */

void FUN_1005b08e4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  puStack_38 = &UNK_1053f5648;
  puStack_30 = &UNK_1053f5658;
  uStack_28 = 0;
  func_0x000107c4c694(param_2);
  lVar1 = puStack_48[5];
  func_0x000107c4adac();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = puStack_48[5];
  }
  func_0x000107c61174(uVar2);
  func_0x000107c60bcc(&uStack_50,8);
  func_0x000107c61170(uStack_28);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1005b08ec; end: 1005b093b; -[SCSpotlightNavigationServiceImpl _spotlightTabTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005b08ec(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + _DAT_1127514fc);
  func_0x000107c3ebd4(uVar1,param_2,&PTR____CFConstantStringClassReference_110e50db8,0,0);
  if ((uVar1 & 1) == 0) {
    FUN_1005b093c();
    func_0x000107c61180();
  }
  else {
    func_0x000107c2bd68();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1005b093c; end: 1005b0953;  */

void FUN_1005b093c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f5bad8;
  FUN_1000f5ff4(&PTR____CFConstantStringClassReference_110f5bad8,
                &PTR____CFConstantStringClassReference_110e61f78,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    FUN_10002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1005b0954; end: 1005b0bdf; -[SCSpotlightNavigationServiceImpl _updateTabBarImageViewWithOverrideImage:overrideTintColor:shouldApplyTheme:] */

/* WARNING: Possible PIC construction at 0x0001005b0aac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005b0ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005b0b08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005b0b48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005b0b68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005b0ba8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005b0adc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005b0bac) */
/* WARNING: Removing unreachable block (ram,0x0001005b0b6c) */
/* WARNING: Removing unreachable block (ram,0x0001005b0b70) */
/* WARNING: Removing unreachable block (ram,0x0001005b0b4c) */
/* WARNING: Removing unreachable block (ram,0x0001005b0b0c) */
/* WARNING: Removing unreachable block (ram,0x0001005b0b54) */
/* WARNING: Removing unreachable block (ram,0x0001005b0b10) */
/* WARNING: Removing unreachable block (ram,0x0001005b0acc) */
/* WARNING: Removing unreachable block (ram,0x0001005b0ad8) */
/* WARNING: Removing unreachable block (ram,0x0001005b0ad0) */
/* WARNING: Removing unreachable block (ram,0x0001005b0ad4) */
/* WARNING: Removing unreachable block (ram,0x0001005b0ab0) */
/* WARNING: Removing unreachable block (ram,0x0001005b0ae0) */
/* WARNING: Removing unreachable block (ram,0x0001005b0aec) */
/* WARNING: Removing unreachable block (ram,0x0001005b0bb4) */
/* WARNING: Removing unreachable block (ram,0x0001005b0af4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005b0954(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar2;
  
  uVar5 = *(undefined8 *)(param_1 + _DAT_112751518);
  lVar2 = param_3;
  func_0x000107c61174();
  iVar1 = (int)lVar2;
  FUN_100456ca0();
  uVar6 = 0x3ff8000000000000;
  if (iVar1 == 0) {
    uVar6 = 0x3ff0000000000000;
  }
  ppuVar3 = &PTR____CFConstantStringClassReference_110e60cd8;
  FUN_10059c4fc(uVar6,&PTR____CFConstantStringClassReference_110e60cd8,
                &PTR____CFConstantStringClassReference_110e60cf8,0x218,0x217,uVar5);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126c56e0;
  func_0x000107c610f4(PTR_PTR_1126c56e0);
  if (param_3 == 0) {
    func_0x000107c415ac(ppuVar3);
    func_0x000107c61180();
    func_0x000107c44e78(ppuVar3);
    func_0x000107c61180();
  }
  func_0x000107c41578(ppuVar3);
  func_0x000107c44e70(ppuVar3);
  func_0x000107c3e624(ppuVar3);
  uVar5 = uVar6;
  func_0x000107c3e628(ppuVar3);
  uVar7 = uVar5;
  func_0x000107c3e650();
  iVar1 = (int)ppuVar3;
  FUN_100456ca0();
  uVar8 = 0x3ff8000000000000;
  if (iVar1 == 0) {
    uVar8 = 0x3ff0000000000000;
  }
  func_0x000107c46db8(uVar6,uVar5,uVar7,uVar8,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1005b0be0; end: 1005b0be7; -[SIGNavigationBarButtonItem appThemeColor] */

undefined8 FUN_1005b0be0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1005b0be8; end: 1005b0c23; -[SCSpotlightNavigationServiceImpl _hintLabel] */

void FUN_1005b0be8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c5abc4();
  if ((int)uVar1 != 0) {
    func_0x000107c3c89c(param_1);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1005b0c24; end: 1005b0cc7; -[SCSpotlightNavigationDelegateImpl initWithCircumstanceEngine:spotlightNavigationService:] */

undefined1 *
FUN_1005b0c24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126f35b0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1005b0cc8; end: 1005b0e33;  */

/* WARNING: Possible PIC construction at 0x0001005b0d34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005b0de8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005b0df8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005b0e08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005b0dec) */
/* WARNING: Removing unreachable block (ram,0x0001005b0d38) */
/* WARNING: Removing unreachable block (ram,0x0001005b0dfc) */

void FUN_1005b0cc8(double param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar3;
  double dVar4;
  long lVar2;
  
  func_0x000107c61174(param_3);
  param_2 = param_2 + 0x20;
  func_0x000107c61148();
  if (param_2 == 0) {
    func_0x000107c61170(0);
  }
  else {
    lVar3 = *(long *)(param_2 + 800);
    lVar2 = param_2;
    FUN_10052a7e0();
    iVar1 = (int)lVar2;
    if (lVar3 == 1) {
      func_0x000107c3e594();
      func_0x000107c61180();
    }
    else {
      dVar4 = 0.0;
      FUN_1005b0e74();
      if (iVar1 != 0) {
        FUN_100594f4c();
        dVar4 = (70.0 - param_1) * 0.5;
      }
      func_0x000107c5d380(param_3);
      func_0x000107c61180();
      func_0x000107c51ca8(param_3);
      func_0x000107c61180();
      func_0x000107c3e648(param_3);
      func_0x000107c61180();
      func_0x000107c3e630(param_3);
      func_0x000107c61180();
      func_0x000107c3e61c(param_3);
      func_0x000107c61180();
      func_0x000107c59cb8(dVar4,param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1005b0e34; end: 1005b0e73;  */

undefined1 FUN_1005b0e34(void)

{
  if (lRam00000001137fc190 != -1) {
    FUN_10002a2fc(0x1137fc190,&PTR___NSConcreteGlobalBlock_110d667b8);
  }
  return uRam00000001137fc01b;
}



/* Entry: 1005b0e74; end: 1005b0ecb;  */

void FUN_1005b0e74(undefined8 param_1,undefined8 param_2,double param_3,int param_4)

{
  undefined *puVar1;
  
  FUN_1005b0e34();
  if (((param_4 != 0) &&
      (puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10, func_0x000107c517cc(), 0.0 < param_3)) &&
     (FUN_10052a7e0(), ((ulong)puVar1 & 1) == 0)) {
    func_0x000107c2bd40();
    FUN_100594f4c();
  }
  return;
}



/* Entry: 1005b0ecc; end: 1005b0ef3;  */

void FUN_1005b0ecc(void)

{
  undefined1 uVar1;
  
  uVar1 = 0x78;
  FUN_100069c44(&PTR____CFConstantStringClassReference_110f98978,0);
  uRam00000001137fc01b = uVar1;
  return;
}



/* Entry: 1005b0ef4; end: 1005b0efb; -[SCPlusNavigationBarTheme unselectedTabColor] */

undefined8 FUN_1005b0ef4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1005b0efc; end: 1005b0f03; -[SCPlusNavigationBarTheme selectedTabColor] */

undefined8 FUN_1005b0efc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1005b0f04; end: 1005b0f0b; -[SCPlusNavigationBarTheme badgeTextColor] */

undefined8 FUN_1005b0f04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1005b0f0c; end: 1005b0f13; -[SCPlusNavigationBarTheme badgeImage] */

undefined8 FUN_1005b0f0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1005b0f14; end: 1005b0f1b; -[SCPlusNavigationBarTheme badgeColor] */

undefined8 FUN_1005b0f14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1005b0f1c; end: 1005b11f7; -[SCActiveUserNGSNavigationRouter setThemeColor:highlightColor:badgeTextColor:badgeImage:badgeColor:buttonYPadding:] */

void FUN_1005b0f1c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar2 = *(long *)(param_2 + 400);
  func_0x000107c3dbc0();
  func_0x000107c61180();
  puVar7 = &uStack_140;
  lVar3 = lVar2;
  func_0x000107c4080c();
  if (lVar3 != 0) {
    lVar9 = *plStack_130;
    do {
      lVar11 = 0;
      do {
        if (*plStack_130 != lVar9) {
          func_0x000107c61128(lVar2);
        }
        uVar12 = *(ulong *)(lStack_138 + lVar11 * 8);
        uVar4 = uVar12;
        func_0x000107c4d500(uVar12);
        func_0x000107c61180();
        func_0x000107c527e4();
        func_0x000107c61170(uVar4);
        uVar4 = uVar12;
        func_0x000107c4d500(uVar12);
        func_0x000107c61180();
        func_0x000107c527e8();
        func_0x000107c61170(uVar4);
        uVar4 = uVar12;
        func_0x000107c4d500(uVar12);
        func_0x000107c61180();
        func_0x000107c527dc();
        func_0x000107c61170(uVar4);
        uVar4 = uVar12;
        func_0x000107c4d500(uVar12);
        func_0x000107c61180();
        func_0x000107c527d8();
        func_0x000107c61170(uVar4);
        uVar4 = uVar12;
        func_0x000107c4d500();
        iVar1 = (int)uVar4;
        func_0x000107c61180();
        func_0x000107c527e0();
        func_0x000107c61170();
        lVar8 = *(long *)(param_2 + 800);
        FUN_10052a7e0();
        if ((lVar8 == 1) || (FUN_1005b0e74(), iVar1 != 0)) {
          uVar4 = uVar12;
          func_0x000107c4d4bc();
          func_0x000107c61180();
          uVar5 = uVar4;
          func_0x000107c4a7c4();
          func_0x000107c61180();
          uVar6 = uVar5;
          func_0x000107c61164();
          func_0x000107c61170(uVar5);
          func_0x000107c61170(uVar4);
          if ((uVar6 & 1) != 0) {
            func_0x000107c4d4bc();
            func_0x000107c61180();
            uVar4 = uVar12;
            func_0x000107c4a7c4();
            func_0x000107c61180();
            func_0x000107c52ecc(param_1);
            func_0x000107c61170(uVar4);
            func_0x000107c61170(uVar12);
          }
        }
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      puVar7 = &uStack_140;
      lVar3 = lVar2;
      func_0x000107c4080c();
    } while (lVar3 != 0);
  }
  func_0x000107c61170(lVar2);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61174(puVar7);
  uVar10 = *(undefined8 *)(param_4 + 0x58);
  *(undefined8 **)(param_4 + 0x58) = puVar7;
  func_0x000107c61174(puVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c437dc(param_4);
  func_0x000107c61170(puVar7);
  return;
}



/* Entry: 1005b11f8; end: 1005b128b; -[SIGNavigationBarButtonItem setAppThemeColor:] */

void FUN_1005b11f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1005b128c;
  puStack_40 = &UNK_110d62ca0;
  lStack_38 = param_1;
  func_0x000107c437dc(param_1,param_2,&puStack_58);
  func_0x000107c61170(param_3);
  return;
}


