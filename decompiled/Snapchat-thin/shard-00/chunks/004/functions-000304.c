/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10067a3b8; end: 10067a46f;  */

void FUN_10067a3b8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000107c61174();
  uVar1 = param_2;
  func_0x000107c44d80(param_2);
  func_0x000107c61180();
  FUN_10067a478(&uStack_50);
  func_0x000107c4ce5c();
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[2] = uStack_40;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  *(int *)(param_1 + 3) = (int)param_2;
  func_0x0001005ad2a8(&uStack_50);
  func_0x000107c61170(uVar1);
  FUN_1005ae244();
  return;
}



/* Entry: 10067a470; end: 10067a477; -[SCNNetworkTypesHttpParams headers] */

undefined8 FUN_10067a470(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10067a478; end: 10067a5f3;  */

void FUN_10067a478(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long *plVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 auStack_198 [40];
  undefined8 *puStack_170;
  undefined1 *puStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined1 auStack_150 [48];
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar1 = param_2;
  func_0x000107c40808();
  FUN_10067a5f4(param_1);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  puVar2 = param_2;
  func_0x000107c61174();
  func_0x00010067a694();
  if (puVar2 != (undefined1 *)0x0) {
    lVar5 = *plStack_110;
    do {
      puVar6 = (undefined1 *)0x0;
      do {
        if (*plStack_110 != lVar5) {
          func_0x000107c61128(param_2);
        }
        puVar4 = *(undefined1 **)(lStack_118 + (long)puVar6 * 8);
        func_0x000107c61174(puVar4);
        FUN_10067a6a8(auStack_150,puVar4);
        puVar1 = auStack_150;
        FUN_10067a7ac(param_1);
        FUN_1005acd08(auStack_150);
        func_0x000107c61170();
        puVar6 = puVar6 + 1;
      } while (puVar6 < puVar2);
      func_0x00010067a694();
      puVar2 = puVar4;
    } while (puVar4 != (undefined1 *)0x0);
  }
  plVar3 = (long *)0x0;
  func_0x00010067a820();
  func_0x00010067a820();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    func_0x000107c60e78();
    func_0x00010067a820();
    func_0x0001005ad2a8(param_1);
    func_0x00010067a820();
    func_0x000107c60bd8();
    pcStack_158 = FUN_10067a5f4;
    if ((undefined1 *)((plVar3[2] - *plVar3) / 0x30) < puVar1) {
      puStack_170 = param_1;
      puStack_168 = param_2;
      puStack_160 = &stack0xfffffffffffffff0;
      if (puVar1 < (undefined1 *)0x555555555555556) {
        func_0x0001005aca14(auStack_198);
        FUN_1005acb9c(plVar3,auStack_198);
        FUN_1005acc98(auStack_198);
      }
      else {
        func_0x000105301748();
        FUN_1005acc98(auStack_198);
        func_0x000107c60bd8(plVar3);
      }
    }
    return;
  }
  return;
}



/* Entry: 10067a5f4; end: 10067a687;  */

void FUN_10067a5f4(long *param_1,ulong param_2)

{
  undefined1 auStack_48 [40];
  
  if ((ulong)((param_1[2] - *param_1) / 0x30) < param_2) {
    if (param_2 < 0x555555555555556) {
      func_0x0001005aca14(auStack_48,param_2,(param_1[1] - *param_1) / 0x30);
      FUN_1005acb9c(param_1,auStack_48);
      FUN_1005acc98(auStack_48);
    }
    else {
      func_0x000105301748();
      FUN_1005acc98(auStack_48);
      func_0x000107c60bd8(param_1);
    }
  }
  return;
}



/* Entry: 10067a688; end: 10067a6a7;  */

void FUN_10067a688(void)

{
  return;
}



/* Entry: 10067a6a8; end: 10067a79b;  */

void FUN_10067a6a8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174();
  func_0x000107c4a8c4(param_2);
  func_0x000107c61180();
  FUN_1000fbca4(&uStack_48);
  func_0x000107c5dc0c(param_2);
  func_0x000107c61180();
  FUN_1000fbca4(&uStack_60);
  param_1[1] = uStack_40;
  *param_1 = uStack_48;
  param_1[2] = uStack_38;
  uStack_40 = 0;
  uStack_38 = 0;
  param_1[4] = uStack_58;
  param_1[3] = uStack_60;
  param_1[5] = uStack_50;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x000107c60ca0(&uStack_60);
  func_0x000107c61170(param_2);
  func_0x000107c60ca0(&uStack_48);
  FUN_1005ad830();
  func_0x0001005ad838();
  return;
}



/* Entry: 10067a79c; end: 10067a7a3; -[SCNNetworkTypesHeader key] */

undefined8 FUN_10067a79c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10067a7a4; end: 10067a7ab; -[SCNNetworkTypesHeader value] */

undefined8 FUN_10067a7a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10067a7ac; end: 10067a817;  */

undefined8 * FUN_10067a7ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar3;
    *puVar1 = uVar2;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar3 = param_2[4];
    uVar2 = param_2[3];
    puVar1[5] = param_2[5];
    puVar1[4] = uVar3;
    puVar1[3] = uVar2;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[3] = 0;
    puVar1 = puVar1 + 6;
  }
  else {
    puVar1 = param_1;
    func_0x00010549192c();
  }
  param_1[1] = puVar1;
  return puVar1 + -6;
}



/* Entry: 10067a818; end: 10067a827;  */

void FUN_10067a818(void)

{
  return;
}



/* Entry: 10067a828; end: 10067a82f; -[SCNNetworkTypesHttpParams method] */

undefined8 FUN_10067a828(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10067a830; end: 10067a837; -[SCNNetworkTypesHttpRequest usesDeprecatedHttpRequestInfo] */

undefined1 FUN_10067a830(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10067a838; end: 10067a83f; -[SCNNetworkTypesHttpRequest deprecatedHttpRequestInfo] */

undefined8 FUN_10067a838(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10067a840; end: 10067a847; -[SCNNetworkTypesHttpRequest inAppSessionRequest] */

undefined1 FUN_10067a840(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10067a848; end: 10067a85b; -[SCNNetworkTypesHttpRequest fallbackUrlProvider] */

undefined8 FUN_10067a848(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10067a85c; end: 10067a8a3;  */

void FUN_10067a85c(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010067a850();
  if (unaff_x19 == 0) {
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
  }
  else {
    func_0x000107c2ffcc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10067a8a4; end: 10067a973;  */

/* WARNING: Possible PIC construction at 0x00010067a934: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010067a938) */

void FUN_10067a8a4(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x000107c61174();
  uVar1 = param_2;
  func_0x000107c4c950();
  uVar2 = param_2;
  func_0x000107c417c8();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5e30c();
  uVar4 = param_2;
  func_0x000107c43250();
  uVar5 = param_2;
  func_0x000107c45210();
  uVar6 = param_2;
  func_0x000107c4e254();
  func_0x000107c5cfd8();
  *param_1 = (int)uVar1;
  *(char *)(param_1 + 1) = (char)uVar3;
  param_1[2] = (int)uVar4;
  *(undefined8 *)(param_1 + 4) = uVar5;
  param_1[6] = (int)uVar6;
  param_1[7] = (int)param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10067a974; end: 10067a97b; -[SCNMdpCommonRankingSignals mediaContextType] */

undefined8 FUN_10067a974(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10067a97c; end: 10067a983; -[SCNMdpCommonRankingSignals deprecatedRankingSignal] */

undefined8 FUN_10067a97c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10067a984; end: 10067a98b; -[SCNMdpCommonDeprecatedRankingSignal wifiOnly] */

undefined1 FUN_10067a984(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10067a98c; end: 10067a993; -[SCNMdpCommonRankingSignals fetchPriority] */

undefined8 FUN_10067a98c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10067a994; end: 10067a99b; -[SCNMdpCommonRankingSignals importance] */

undefined8 FUN_10067a994(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10067a99c; end: 10067a9a3; -[SCNMdpCommonRankingSignals pageId] */

undefined4 FUN_10067a99c(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10067a9a4; end: 10067a9ab; -[SCNMdpCommonRankingSignals trigger] */

undefined8 FUN_10067a9a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10067a9ac; end: 10067aa63;  */

void FUN_10067a9ac(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x000107c61174(param_2);
    ppuStack_38 = &PTR_DAT_110cecd40;
    lStack_40 = param_2;
    FUN_1000de59c(&uStack_30,&ppuStack_38,&lStack_40,FUN_10067aa64);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_1000df524(&uStack_30);
    func_0x000107c61170(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10067ab64(&uStack_50);
  }
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 10067aa64; end: 10067ab63;  */

void FUN_10067aa64(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110cecd80;
  puVar4[3] = &PTR_DAT_110cecdf8;
  puVar5 = puVar8;
  func_0x000107c61174();
  func_0x000107c6110c();
  puVar6 = puVar5;
  FUN_1000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107c61174(puVar8);
  puVar4[6] = puVar8;
  func_0x000107c61108(puVar5);
  func_0x000107c61170(puVar8);
  puVar4[3] = &PTR_DAT_110cecdd0;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10067ab64(&uStack_50);
  return;
}



/* Entry: 10067ab64; end: 10067ab8f;  */

long FUN_10067ab64(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10067ab90; end: 10067ac33; -[SCLensPromptLoggingServices initWithPromptLogger:grapheneLogger:] */

undefined1 *
FUN_10067ab90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112700b20;
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



/* Entry: 10067ac34; end: 10067ad23;  */

void FUN_10067ac34(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar2 = PTR_PTR_1126e0258;
    func_0x000107c61158(PTR_PTR_1126e0258);
    uVar3 = param_2;
    func_0x000107c6115c(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      func_0x000107c61174(param_2);
      ppuStack_38 = &PTR_DAT_110cece78;
      uStack_40 = param_2;
      FUN_1000de59c(&uStack_30,&ppuStack_38,&uStack_40,FUN_10067ad50);
      uVar1 = uStack_28;
      uVar5 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      FUN_1000df524(&uStack_30);
      func_0x000107c61170(uStack_40);
      param_1[1] = uVar1;
      *param_1 = uVar5;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_10067ae54(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_10067ae44();
        } while (extraout_w10 != 0);
      }
    }
  }
  func_0x00010067ae84();
  return;
}



/* Entry: 10067ad24; end: 10067ad4f;  */

void FUN_10067ad24(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10067ad50; end: 10067ae43;  */

void FUN_10067ad50(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110ceceb8;
  puVar1[3] = &PTR_DAT_110cecf60;
  puVar2 = puVar5;
  func_0x000107c61174();
  func_0x000107c6110c();
  puVar3 = puVar2;
  FUN_1000de520();
  lVar4 = puVar3[1];
  uVar6 = *puVar3;
  puVar1[5] = puVar3[1];
  puVar1[4] = uVar6;
  if (lVar4 != 0) {
    do {
      FUN_10067ae44();
    } while (extraout_w10 != 0);
  }
  func_0x000107c61174(puVar5);
  puVar1[6] = puVar5;
  func_0x000107c61108(puVar2);
  func_0x000107c61170(puVar5);
  puVar1[3] = &PTR_DAT_110cecf08;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10067ae54(&uStack_50);
  return;
}



/* Entry: 10067ae44; end: 10067ae53;  */

void FUN_10067ae44(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10067ae54; end: 10067ae7b;  */

long FUN_10067ae54(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10067ae7c; end: 10067ae8b;  */

void FUN_10067ae7c(void)

{
  return;
}



/* Entry: 10067ae8c; end: 10067af87;  */

void FUN_10067ae8c(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar2 = PTR_PTR_1126e0290;
    func_0x000107c61158(PTR_PTR_1126e0290);
    uVar3 = param_2;
    func_0x000107c6115c(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      func_0x000107c61174(param_2);
      ppuStack_38 = &PTR_DAT_110ced188;
      uStack_40 = param_2;
      FUN_1000de59c(&uStack_30,&ppuStack_38,&uStack_40,FUN_10067af88);
      uVar1 = uStack_28;
      uVar5 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      FUN_1000df524(&uStack_30);
      func_0x000107c61170(uStack_40);
      param_1[1] = uVar1;
      *param_1 = uVar5;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_10067b374(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_10067b364();
        } while (extraout_w10 != 0);
      }
    }
  }
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 10067af88; end: 10067b07b;  */

void FUN_10067af88(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110ced1c8;
  puVar1[3] = &PTR_DAT_110ced258;
  puVar2 = puVar5;
  func_0x000107c61174();
  func_0x000107c6110c();
  puVar3 = puVar2;
  FUN_1000de520();
  lVar4 = puVar3[1];
  uVar6 = *puVar3;
  puVar1[5] = puVar3[1];
  puVar1[4] = uVar6;
  if (lVar4 != 0) {
    do {
      FUN_10067b364();
    } while (extraout_w10 != 0);
  }
  func_0x000107c61174(puVar5);
  puVar1[6] = puVar5;
  func_0x000107c61108(puVar2);
  func_0x000107c61170(puVar5);
  puVar1[3] = &PTR_DAT_110ced218;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10067b374(&uStack_50);
  return;
}



/* Entry: 10067b07c; end: 10067b223; -[SCLensPromptDataServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10067b07c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar1 = param_1 + _DAT_1127266dc;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c4e604();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_1127266e0;
  func_0x000107c61148();
  lVar3 = lVar1;
  func_0x000107c44580();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_1127266e4;
  func_0x000107c61148();
  param_1 = param_1 + _DAT_1127266e8;
  func_0x000107c61148();
  lVar4 = param_1;
  func_0x000107c5da60();
  func_0x000107c61180();
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  puStack_80 = &UNK_1055d7c00;
  puStack_78 = &UNK_11089d388;
  puVar5 = PTR_PTR_1126ae720;
  lStack_70 = lVar2;
  lStack_68 = lVar3;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&puStack_90);
  func_0x000107c61180();
  puStack_c8 = puVar6;
  uStack_c0 = 0xc2000000;
  puStack_b8 = &UNK_1055d7d14;
  puStack_b0 = &UNK_11089d3b8;
  puVar6 = PTR_PTR_1126ae720;
  puStack_a8 = puVar5;
  lStack_a0 = lVar1;
  lStack_98 = lVar4;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&puStack_c8);
  func_0x000107c61180();
  puVar7 = PTR_PTR_1126bbd40;
  func_0x000107c610f4(PTR_PTR_1126bbd40);
  func_0x000107c481b0();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10067b224; end: 10067b297; -[SCLensPromptDataServices initWithProvider:] */

undefined1 * FUN_10067b224(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112704530;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10067b298; end: 10067b363;  */

void FUN_10067b298(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10067b364; end: 10067b373;  */

void FUN_10067b364(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10067b374; end: 10067b39b;  */

long FUN_10067b374(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10067b39c; end: 10067b3a3;  */

void FUN_10067b39c(void)

{
  return;
}



/* Entry: 10067b3a4; end: 10067b41f;  */

void FUN_10067b3a4(undefined1 *param_1,long param_2)

{
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [48];
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[0x48] = 0;
  }
  else {
    FUN_10067b420(auStack_78,param_2);
    FUN_10028ab2c(param_1,auStack_78);
    FUN_1001ba7c0(auStack_60);
  }
  func_0x00010067b554();
  return;
}



/* Entry: 10067b420; end: 10067b51b;  */

void FUN_10067b420(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [40];
  
  func_0x000107c61174();
  uVar1 = param_2;
  func_0x000107c50828();
  uVar2 = param_2;
  func_0x000107c507fc();
  uVar3 = param_2;
  func_0x000107c50824();
  uVar4 = param_2;
  func_0x000107c50818();
  uVar5 = param_2;
  func_0x000107c5083c(param_2);
  func_0x000107c61180();
  FUN_1005ca258(auStack_78);
  func_0x000107c50830();
  *param_1 = (int)uVar1;
  param_1[1] = (int)uVar2;
  param_1[2] = (int)uVar3;
  *(undefined8 *)(param_1 + 4) = uVar4;
  FUN_10028aa7c(param_1 + 6,auStack_78);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  FUN_1001ba7c0(auStack_78);
  func_0x000107c61170(uVar5);
  func_0x00010067b54c();
  return;
}



/* Entry: 10067b51c; end: 10067b523; -[SCNNetworkTypesRetryConfig retryQuota] */

undefined4 FUN_10067b51c(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10067b524; end: 10067b52b; -[SCNNetworkTypesRetryConfig retryAttempt] */

undefined4 FUN_10067b524(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10067b52c; end: 10067b533; -[SCNNetworkTypesRetryConfig retryPolicy] */

undefined8 FUN_10067b52c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10067b534; end: 10067b53b; -[SCNNetworkTypesRetryConfig retryIntervalInMillis] */

undefined8 FUN_10067b534(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10067b53c; end: 10067b543; -[SCNNetworkTypesRetryConfig retryableResponseStatusCode] */

undefined8 FUN_10067b53c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10067b544; end: 10067b55b; -[SCNNetworkTypesRetryConfig retryTtlMs] */

undefined8 FUN_10067b544(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10067b55c; end: 10067b953;  */

undefined8 *
FUN_10067b55c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,long param_8,ulong param_9,
             undefined4 param_10)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  undefined **extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  undefined8 *puVar7;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w11;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined1 auStack_1f8 [72];
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 auStack_1a0 [2];
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *apuStack_178 [7];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [32];
  undefined8 *puStack_d0;
  undefined **ppuStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 **ppuStack_a0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_100100ed0(auStack_1a0);
  if (*(char *)(param_8 + 0x48) == '\x01') {
    FUN_10028afe4(auStack_1f8,param_8);
  }
  else {
    func_0x000107c30130(auStack_1f8);
  }
  puVar3 = (undefined8 *)0x300;
  func_0x000107c60e20();
  plVar4 = puVar3 + 1;
  *plVar4 = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_DAT_110cd2230;
  FUN_10067b954(&puStack_d0,param_2);
  FUN_10028af84(auStack_f0,param_3);
  uStack_f8 = param_5[1];
  uStack_100 = *param_5;
  if (param_5[1] != 0) {
    do {
      func_0x00010060f468();
    } while (extraout_w10 != 0);
  }
  uStack_108 = param_6[1];
  uStack_110 = *param_6;
  if (param_6[1] != 0) {
    do {
      func_0x00010060f468();
    } while (extraout_w10_00 != 0);
  }
  uStack_118 = param_7[1];
  uStack_120 = *param_7;
  if (param_7[1] != 0) {
    do {
      func_0x00010060f468();
    } while (extraout_w10_01 != 0);
  }
  uStack_138 = param_4[1];
  uStack_140 = *param_4;
  uStack_128 = param_4[3];
  uStack_130 = param_4[2];
  FUN_10028afe4(&puStack_190,auStack_1f8);
  puVar7 = puVar3 + 3;
  FUN_10067ba08(puVar7,&puStack_d0,auStack_f0,&uStack_100,&uStack_110,&uStack_120,&uStack_140,
                &puStack_190,(long)(int)param_9 & (long)(param_9 << 0x1f) >> 0x3f,
                param_9 >> 0x20 & 1,param_10);
  FUN_1001ba7c0(apuStack_178);
  FUN_10067c884(&uStack_120);
  func_0x00010067c8a8(&uStack_110);
  func_0x00010067c8cc(&uStack_100);
  FUN_1001148fc(auStack_f0);
  FUN_1005ae430(&puStack_d0);
  puStack_1b0 = puVar7;
  puStack_1a8 = puVar3;
  if ((puVar3[5] == 0) || (*(long *)(puVar3[5] + 8) == -1)) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      puStack_190 = puVar7;
      puStack_188 = puVar3;
    } while (cVar1 != '\0');
    do {
      FUN_10063a024();
    } while (extraout_w11 != 0);
    puStack_d0 = (undefined8 *)puVar3[4];
    puVar3[4] = puVar7;
    puVar3[5] = puVar3;
    ppuStack_c8 = extraout_x8;
    func_0x00010067c8f0(&puStack_d0);
    func_0x00010067c914(&puStack_190);
  }
  func_0x00010067c944();
  plVar4 = *(long **)(param_1 + 400);
  (**(code **)(*plVar4 + 0x20))();
  if ((int)plVar4 == 0) {
    lVar8 = *(long *)(param_1 + 0x1a0);
    ppuVar5 = &puStack_190;
    func_0x000107c2c604(ppuVar5,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    apuStack_178[0] = puStack_1a8;
    puStack_180 = puStack_1b0;
    if (puStack_1a8 != (undefined8 *)0x0) {
      do {
        func_0x00010060f468();
      } while (extraout_w10_02 != 0);
    }
    FUN_10028c49c();
    lVar9 = *(long *)(lVar8 + 0x10);
    func_0x000107c60d88(lVar9 + 8);
    puStack_b8 = puStack_188;
    puStack_c0 = puStack_190;
    lVar10 = *(long *)(lVar9 + 0x70);
    puStack_d0 = (undefined8 *)&UNK_10b2d74dc;
    ppuStack_c8 = &PTR_DAT_110cd2270;
    puStack_190 = (undefined8 *)0x0;
    puStack_188 = (undefined8 *)0x0;
    puStack_a8 = apuStack_178[0];
    puStack_b0 = puStack_180;
    if (apuStack_178[0] != (undefined8 *)0x0) {
      do {
        func_0x00010060f468();
      } while (extraout_w10_03 != 0);
    }
    ppuVar6 = &puStack_d0;
    ppuStack_a0 = ppuVar5;
    FUN_1005760fc(lVar9 + 0x48);
    func_0x000107c356f8();
    func_0x000107c60d8c(lVar9 + 8);
    if (lVar10 == 0) {
      ppuStack_c8 = *(undefined ***)(lVar8 + 0x18);
      puStack_d0 = *(undefined8 **)(lVar8 + 0x10);
      if (*(long *)(lVar8 + 0x18) != 0) {
        do {
          func_0x00010060f468();
        } while (extraout_w10_04 != 0);
      }
      FUN_10063859c();
      ppuVar6 = &puStack_d0;
      (*extraout_x8_01)();
      FUN_100576684(&puStack_d0);
    }
    func_0x000107c2c57c(&puStack_190);
  }
  else {
    FUN_10063859c(*(undefined8 *)(param_1 + 0x1b0));
    ppuVar6 = &puStack_1b0;
    (*extraout_x8_00)();
  }
  func_0x00010067c914(&puStack_1b0);
  puVar3 = auStack_1a0;
  FUN_1000df75c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    func_0x000107c60e78();
    FUN_100576684(&puStack_d0);
    func_0x000107c2c57c(&puStack_190);
    func_0x00010067c914(&puStack_1b0);
    puVar3 = auStack_1a0;
    FUN_1000df75c();
    func_0x000107c356dc();
    *puVar3 = *ppuVar6;
    func_0x000107c60c94(puVar3 + 1,ppuVar6 + 1);
    FUN_10067b9e4(puVar3 + 4,ppuVar6 + 4);
    puVar7 = ppuVar6[8];
    *(undefined8 *)((long)puVar3 + 0x45) = *(undefined8 *)((long)ppuVar6 + 0x45);
    puVar3[8] = puVar7;
    puVar7 = ppuVar6[0xb];
    puVar11 = ppuVar6[10];
    puVar3[0xb] = ppuVar6[0xb];
    puVar3[10] = puVar11;
    if (puVar7 != (undefined8 *)0x0) {
      do {
        func_0x00010060f468();
      } while (extraout_w10_05 != 0);
    }
    return puVar3;
  }
  return puVar3;
}



/* Entry: 10067b954; end: 10067b9e3;  */

undefined8 * FUN_10067b954(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  int extraout_w10;
  
  *param_1 = *param_2;
  func_0x000107c60c94(param_1 + 1,param_2 + 1);
  FUN_10067b9e4(param_1 + 4,param_2 + 4);
  uVar1 = param_2[8];
  *(undefined8 *)((long)param_1 + 0x45) = *(undefined8 *)((long)param_2 + 0x45);
  param_1[8] = uVar1;
  lVar2 = param_2[0xb];
  uVar1 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar1;
  if (lVar2 != 0) {
    do {
      func_0x00010060f468();
    } while (extraout_w10 != 0);
  }
  return param_1;
}



/* Entry: 10067b9e4; end: 10067ba07;  */

void FUN_10067b9e4(long param_1,long param_2)

{
  FUN_1005acf78();
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  return;
}



/* Entry: 10067ba08; end: 10067bc1b;  */

undefined8 *
FUN_10067ba08(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined4 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = &PTR_DAT_110cefdc8;
  puVar1 = param_1;
  FUN_10054f908();
  param_1[3] = puVar1;
  param_1[4] = puVar1;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  FUN_10067bc28(param_1 + 0xc,param_2);
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  if (*(char *)(param_3 + 3) == '\x01') {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    param_1[0x27] = param_3[2];
    param_1[0x26] = uVar3;
    param_1[0x25] = uVar2;
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  uVar2 = *param_4;
  param_1[0x2a] = param_4[1];
  param_1[0x29] = uVar2;
  *param_4 = 0;
  param_4[1] = 0;
  uVar2 = *param_5;
  param_1[0x2c] = param_5[1];
  param_1[0x2b] = uVar2;
  *param_5 = 0;
  param_5[1] = 0;
  uVar2 = *param_6;
  param_1[0x2e] = param_6[1];
  param_1[0x2d] = uVar2;
  *param_6 = 0;
  param_6[1] = 0;
  uVar2 = *param_7;
  uVar4 = param_7[3];
  uVar3 = param_7[2];
  param_1[0x30] = param_7[1];
  param_1[0x2f] = uVar2;
  param_1[0x32] = uVar4;
  param_1[0x31] = uVar3;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x33] = 0;
  FUN_10028aae8(param_1 + 0x36,param_8);
  *(undefined1 *)(param_1 + 0x3f) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  param_1[0x49] = param_9;
  param_1[0x4a] = param_10;
  *(undefined4 *)(param_1 + 0x4b) = param_11;
  *(undefined1 *)(param_1 + 0x55) = 0;
  *(undefined1 *)(param_1 + 0x5b) = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined1 *)((long)param_1 + 0x2e4) = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  *(undefined1 *)(param_1 + 0x52) = 0;
  param_1[0x56] = 0;
  *(undefined1 *)(param_1 + 0x57) = 0;
  FUN_10067bdd4(param_1);
  return param_1;
}



/* Entry: 10067bc1c; end: 10067bc27;  */

void FUN_10067bc1c(void)

{
  return;
}



/* Entry: 10067bc28; end: 10067bc8b;  */

void FUN_10067bc28(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  FUN_10067bc1c();
  *param_1 = *param_2;
  uVar2 = param_2[2];
  uVar1 = param_2[1];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[1] = 0;
  func_0x0001005ad190(param_1 + 4,param_2 + 4);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x45) = *(undefined8 *)(unaff_x19 + 0x45);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar1;
  uVar1 = *(undefined8 *)(unaff_x19 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x58) = *(undefined8 *)(unaff_x19 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x50) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x50) = 0;
  *(undefined8 *)(unaff_x19 + 0x58) = 0;
  return;
}



/* Entry: 10067bc8c; end: 10067bc93;  */

void FUN_10067bc8c(void)

{
  return;
}



/* Entry: 10067bc94; end: 10067bdd3;  */

undefined1 FUN_10067bc94(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  long lStack_110;
  long lStack_108;
  undefined1 auStack_100 [72];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [72];
  long lStack_40;
  long lStack_38;
  undefined1 **ppuStack_30;
  undefined1 *puStack_28;
  
  FUN_100100ed0(&lStack_40);
  if (lStack_40 != 0) {
    FUN_10002b838(auStack_a0,&UNK_10f773959);
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    FUN_10011a82c(auStack_88,auStack_a0,0,0,0xc,&uStack_b8);
    FUN_100100fec(&uStack_b8);
    func_0x000107c60ca0(auStack_a0);
    lStack_108 = lStack_38;
    lStack_110 = lStack_40;
    if (lStack_38 != 0) {
      plVar1 = (long *)(lStack_38 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10067be44(auStack_100,auStack_88);
    if (lRam00000001137f66d0 != -1) {
      ppuStack_30 = &puStack_28;
      puStack_28 = (undefined1 *)&lStack_110;
      func_0x000107c60c38(0x1137f66d0,&ppuStack_30,FUN_10067be90);
    }
    FUN_10067c55c(&lStack_110);
    FUN_100114924(auStack_88);
  }
  uVar4 = uRam00000001137f66c8;
  FUN_1000df75c(&lStack_40);
  return uVar4;
}



/* Entry: 10067bdd4; end: 10067be43;  */

void FUN_10067bdd4(long param_1)

{
  long lVar1;
  int iVar2;
  int aiStack_50 [2];
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = param_1;
  FUN_10067bc94();
  if ((int)lVar1 != 0) {
    if (*(long *)(param_1 + 0x198) == *(long *)(param_1 + 0x1a0)) {
      iVar2 = 0;
      lStack_48 = 0;
    }
    else {
      iVar2 = *(int *)(*(long *)(param_1 + 0x1a0) + -0x30) + 1;
      FUN_10054f908();
      lStack_48 = lVar1 - *(long *)(param_1 + 0x20);
    }
    uStack_38 = *(undefined8 *)(param_1 + 0x180);
    uStack_40 = *(undefined8 *)(param_1 + 0x178);
    uStack_28 = *(undefined8 *)(param_1 + 400);
    uStack_30 = *(undefined8 *)(param_1 + 0x188);
    aiStack_50[0] = iVar2;
    func_0x00010067c584(param_1 + 0x198,aiStack_50);
  }
  return;
}



/* Entry: 10067be44; end: 10067be8f;  */

long FUN_10067be44(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x000107c60c94();
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(lVar1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined8 *)(lVar1 + 0x20) = uVar3;
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  FUN_10054f8dc(lVar1 + 0x30,param_2 + 0x30);
  return param_1;
}



/* Entry: 10067be90; end: 10067bec3;  */

void FUN_10067be90(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)**(undefined8 **)*param_1;
  (**(code **)(*plVar1 + 0x38))(plVar1,*(undefined8 **)*param_1 + 2);
  if (((uint)plVar1 >> 8 & 1) != 0) {
    uRam00000001137f66c8 = SUB81(plVar1,0);
  }
  return;
}



/* Entry: 10067bec4; end: 10067c003;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10067bec4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  FUN_1000285a8(0x112d5ce60,&UNK_10d923870);
  func_0x000107c61174(param_1);
  uVar1 = param_2;
  func_0x000107c4f598();
  func_0x000107c61180();
  uVar2 = uVar1;
  FUN_1000bda74();
  func_0x000107c61170(uVar1);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  FUN_1000285a8(0x112e1bff0,&UNK_10da60480);
  uVar2 = *(undefined8 *)(param_3 + _DAT_1130344b8);
  func_0x000107c61174();
  uVar1 = uVar2;
  FUN_1000bda74();
  func_0x000107c61170(uVar2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  uVar1 = param_4;
  func_0x000107c5c800();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x28) = uVar1;
  uVar1 = param_5;
  func_0x000107c4b2ec();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar1;
  return;
}



/* Entry: 10067c004; end: 10067c00b; -[SCLensPromptDataServices provider] */

undefined8 FUN_10067c004(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10067c00c; end: 10067c417;  */

undefined * FUN_10067c00c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long unaff_x20;
  undefined8 uVar15;
  
  uVar14 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar2 = &UNK_11063a708;
  func_0x000107c613fc(&UNK_11063a708,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar14;
  *(undefined8 *)(puVar2 + 0x18) = uVar1;
  *(undefined8 *)(puVar2 + 0x20) = uVar15;
  FUN_1000285a8(0x112f56ec0,&UNK_10dbae680);
  func_0x000107c613fc();
  func_0x000107c61174(uVar14);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar15);
  puVar3 = &UNK_1032ef684;
  FUN_1000bdd8c(&UNK_1032ef684,puVar2);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar2 = &UNK_11063a730;
  func_0x000107c613fc(&UNK_11063a730,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar14;
  *(undefined8 *)(puVar2 + 0x18) = uVar1;
  FUN_1000285a8(0x112f56ec8,&UNK_10dbae688);
  func_0x000107c613fc();
  func_0x000107c61174(uVar14);
  func_0x000107c61174(uVar1);
  puVar4 = &UNK_1032ef6fc;
  FUN_1000bdd8c(&UNK_1032ef6fc,puVar2);
  FUN_1000285a8(0x112f56ed0,&UNK_10dbae690);
  func_0x000107c613fc();
  puVar2 = &UNK_1032ef704;
  FUN_1000bdd8c(&UNK_1032ef704,0);
  FUN_1000285a8(0x112f56ed8,&UNK_10dbae698);
  func_0x000107c613fc();
  puVar5 = &UNK_1032ef744;
  FUN_1000bdd8c(&UNK_1032ef744,0);
  FUN_1000285a8(0x112f56ee0,&UNK_10dbae6a0);
  func_0x000107c613fc();
  puVar6 = &UNK_1032ef7c0;
  FUN_1000bdd8c(&UNK_1032ef7c0,0);
  FUN_1000285a8(0x112f56ee8,&UNK_10dbae6a8);
  func_0x000107c613fc();
  func_0x000107c6157c(puVar3);
  puVar7 = &UNK_1032ef804;
  FUN_1000bdd8c(&UNK_1032ef804,puVar3);
  FUN_1000285a8(0x112f56ef0,&UNK_10dbae6b0);
  func_0x000107c613fc();
  func_0x000107c6157c(puVar4);
  puVar8 = &UNK_1032ef818;
  FUN_1000bdd8c(&UNK_1032ef818,puVar4);
  FUN_1000285a8(0x112f56ef8,&UNK_10dbae6b8);
  func_0x000107c613fc();
  func_0x000107c6157c(puVar2);
  puVar9 = &UNK_1032ef82c;
  FUN_1000bdd8c(&UNK_1032ef82c,puVar2);
  FUN_1000285a8(0x112f56f00,&UNK_10dbae6c0);
  func_0x000107c613fc();
  func_0x000107c6157c(puVar5);
  puVar10 = &UNK_1032ef860;
  FUN_1000bdd8c(&UNK_1032ef860,puVar5);
  FUN_1000285a8(0x112f56f08,&UNK_10dbae6c8);
  func_0x000107c613fc();
  func_0x000107c6157c(puVar6);
  puVar11 = &UNK_1032ef874;
  FUN_1000bdd8c(&UNK_1032ef874,puVar6);
  puVar12 = &UNK_11063a758;
  func_0x000107c613fc(&UNK_11063a758,0x38,7);
  *(undefined **)(puVar12 + 0x10) = puVar3;
  *(undefined **)(puVar12 + 0x18) = puVar4;
  *(undefined **)(puVar12 + 0x20) = puVar2;
  *(undefined **)(puVar12 + 0x28) = puVar5;
  *(undefined **)(puVar12 + 0x30) = puVar6;
  FUN_1000285a8(0x112f56f10,&UNK_10dbae6d0);
  func_0x000107c613fc();
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(puVar4);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(puVar6);
  puVar13 = &UNK_1032ef94c;
  FUN_1000bdd8c(&UNK_1032ef94c,puVar12);
  puVar12 = puVar13;
  FUN_1003a5b88();
  uVar14 = 0;
  FUN_100288464();
  func_0x000107c610f8();
  FUN_10067ffa4(puVar12,puVar7,puVar8,puVar9,puVar10,puVar11,uVar14);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar13);
  return puVar12;
}



/* Entry: 10067c418; end: 10067c55b;  */

void FUN_10067c418(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10067c55c; end: 10067c5cf;  */

undefined8 FUN_10067c55c(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_100114924(param_1 + 0x10);
  FUN_1000df750();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10067c5d0; end: 10067c5ef;  */

void FUN_10067c5d0(void)

{
  return;
}



/* Entry: 10067c5f0; end: 10067c65b;  */

undefined8 FUN_10067c5f0(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  FUN_10067c5d0();
  FUN_10067c65c();
  func_0x00010067c6b0();
  FUN_10067c6dc();
  uVar5 = unaff_x20[3];
  uVar4 = unaff_x20[2];
  uVar2 = unaff_x20[5];
  uVar1 = unaff_x20[4];
  uVar3 = *unaff_x20;
  puStack_48[1] = unaff_x20[1];
  *puStack_48 = uVar3;
  puStack_48[3] = uVar5;
  puStack_48[2] = uVar4;
  puStack_48[5] = uVar2;
  puStack_48[4] = uVar1;
  puStack_48 = puStack_48 + 6;
  func_0x00010067c778();
  FUN_10067c784();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  FUN_10067c820(auStack_58);
  return uVar1;
}



/* Entry: 10067c65c; end: 10067c67b;  */

ulong FUN_10067c65c(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong extraout_x8;
  ulong uVar3;
  
  uVar2 = 0x555555555555555;
  if (0x555555555555555 < param_2) {
    func_0x000107c2c814();
    uVar2 = extraout_x8;
  }
  uVar1 = (param_1[2] - *param_1) / 0x30;
  uVar3 = uVar1 * 2;
  if (uVar3 < param_2 || uVar3 - param_2 == 0) {
    uVar3 = param_2;
  }
  if (0x2aaaaaaaaaaaaa9 < uVar1) {
    uVar3 = uVar2;
  }
  return uVar3;
}



/* Entry: 10067c67c; end: 10067c6db;  */

ulong FUN_10067c67c(ulong param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (param_2[2] - *param_2) / 0x30;
  uVar2 = uVar1 * 2;
  if (uVar2 < param_3 || uVar2 - param_3 == 0) {
    uVar2 = param_3;
  }
  if (0x2aaaaaaaaaaaaa9 < uVar1) {
    uVar2 = param_1;
  }
  return uVar2;
}



/* Entry: 10067c6dc; end: 10067c70b;  */

void FUN_10067c6dc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010067c6cc();
  if (param_2 != 0) {
    FUN_10067c738(param_4);
  }
  FUN_10067c75c();
  return;
}



/* Entry: 10067c70c; end: 10067c737;  */

void FUN_10067c70c(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0x555555555555556) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x30);
    return;
  }
  func_0x000104bd35f4();
  FUN_10067c70c();
  return;
}



/* Entry: 10067c738; end: 10067c75b;  */

void FUN_10067c738(void)

{
  FUN_10067c70c();
  return;
}



/* Entry: 10067c75c; end: 10067c783;  */

void FUN_10067c75c(long param_1,long param_2)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  
  lVar1 = param_1 + unaff_x20 * 0x30;
  *unaff_x19 = param_1;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = param_1 + param_2 * 0x30;
  return;
}



/* Entry: 10067c784; end: 10067c7c7;  */

void FUN_10067c784(long *param_1,long param_2)

{
  FUN_10067bc1c();
  func_0x000107c610b4(*(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x30) * 0x30);
  FUN_10067c7c8();
  return;
}



/* Entry: 10067c7c8; end: 10067c81f;  */

void FUN_10067c7c8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  unaff_x19[1] = unaff_x21;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 10067c820; end: 10067c84b;  */

long * FUN_10067c820(long *param_1)

{
  func_0x00010067c818();
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 10067c84c; end: 10067c883;  */

void FUN_10067c84c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x30;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10067c884; end: 10067c93b;  */

void FUN_10067c884(long param_1)

{
  FUN_100554494();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10067c93c; end: 10067c94f;  */

void FUN_10067c93c(void)

{
  return;
}



/* Entry: 10067c950; end: 10067c98b;  */

undefined8 FUN_10067c950(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x000107c6110c();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c49bec(uVar2);
  func_0x000107c61108(lVar1);
  return uVar2;
}



/* Entry: 10067c98c; end: 10067c9a3; -[SCNativeDispatchQueue isCurrentQueueOrTrueOnAndroid] */

void FUN_10067c98c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06fc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_isCurrentPerformer_1125f9930);
  return;
}



/* Entry: 10067c9a4; end: 10067ccaf;  */

void FUN_10067c9a4(long param_1,long *param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined1 in_ZR;
  undefined **ppuVar8;
  long *plVar9;
  undefined8 extraout_x8;
  long lVar10;
  undefined **ppuVar11;
  code *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined **ppuStack_d8;
  undefined *puStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_68;
  
  lVar10 = param_1;
  func_0x00010067c994();
  puVar13 = *(undefined **)(lVar10 + 8);
  puVar3 = *(undefined **)(lVar10 + 0x10);
  puStack_b8 = puVar13;
  puStack_b0 = puVar3;
  uStack_68 = extraout_x8;
  if (puVar3 != (undefined *)0x0) {
    do {
      FUN_10067ccb0();
    } while (extraout_w10 != 0);
  }
  (**(code **)(*(long *)*param_2 + 0x20))(&ppuStack_d8);
  ppuVar8 = (undefined **)0x108;
  func_0x000107c60e20();
  ppuVar12 = ppuVar8 + 1;
  *ppuVar12 = (undefined *)0x0;
  ppuVar8[2] = (undefined *)0x0;
  *ppuVar8 = (undefined *)&PTR_DAT_110cd25f8;
  ppuStack_98 = (undefined **)&UNK_10b2d7e8c;
  ppuStack_90 = &PTR_DAT_110cd2638;
  puStack_88 = puVar13;
  puStack_80 = puVar3;
  if (puVar3 != (undefined *)0x0) {
    do {
      FUN_10067ccb0();
    } while (extraout_w10_00 != 0);
  }
  puVar7 = puStack_d0;
  ppuVar1 = ppuStack_d8;
  ppuStack_a8 = ppuStack_d8;
  ppuStack_a0 = (undefined **)puStack_d0;
  ppuStack_d8 = (undefined **)0x0;
  puStack_d0 = (undefined *)0x0;
  plVar9 = (long *)*param_2;
  puVar4 = (undefined *)param_2[1];
  ppuVar8[6] = (undefined *)plVar9;
  ppuVar8[3] = (undefined *)&PTR_DAT_110cd2660;
  ppuVar8[4] = (undefined *)0x0;
  ppuVar8[5] = (undefined *)0x0;
  ppuVar8[7] = puVar4;
  if (puVar4 != (undefined *)0x0) {
    do {
      FUN_10067ccb0();
    } while (extraout_w10_01 != 0);
    plVar9 = (long *)*param_2;
  }
  (**(code **)(*plVar9 + 0x28))(ppuVar8 + 8);
  ppuVar8[0xb] = (undefined *)&PTR_DAT_110cd2638;
  ppuVar8[10] = &UNK_10b2d7e8c;
  ppuVar8[0xc] = puVar13;
  ppuVar8[0xd] = puVar3;
  puStack_88 = (undefined *)0x0;
  puStack_80 = (undefined *)0x0;
  ppuVar8[0x10] = (undefined *)ppuVar1;
  ppuStack_a8 = (undefined **)0x0;
  ppuStack_a0 = (undefined **)0x0;
  ppuVar8[0x11] = puVar7;
  ppuVar8[0x12] = (undefined *)(param_1 + 0x20);
  FUN_100669ef0(ppuVar8 + 0x13,param_1 + 0xa8);
  ppuVar1 = ppuVar8 + 3;
  lVar10 = *(long *)(param_1 + 0x50);
  puVar13 = *(undefined **)(param_1 + 0x48);
  ppuVar8[0x20] = *(undefined **)(param_1 + 0x50);
  ppuVar8[0x1f] = puVar13;
  if (lVar10 != 0) {
    do {
      FUN_10067ccb0();
    } while (extraout_w10_02 != 0);
  }
  func_0x00010067c8cc(&ppuStack_a8);
  (*(code *)*ppuStack_90)(&ppuStack_90);
  ppuVar11 = (undefined **)ppuVar8[5];
  ppuStack_c8 = ppuVar1;
  ppuStack_c0 = ppuVar8;
  if ((ppuVar11 == (undefined **)0x0) ||
     (in_ZR = ppuVar11[1] == (undefined *)0xffffffffffffffff, (bool)in_ZR)) {
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
      if (bVar6) {
        *ppuVar12 = *ppuVar12 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    ppuVar2 = ppuVar8 + 2;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar6) {
        *ppuVar2 = *ppuVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    ppuStack_98 = (undefined **)ppuVar8[4];
    ppuVar8[4] = (undefined *)ppuVar1;
    ppuVar8[5] = (undefined *)ppuVar8;
    ppuStack_a8 = ppuVar1;
    ppuStack_a0 = ppuVar8;
    ppuStack_90 = ppuVar11;
    FUN_10067cd10(&ppuStack_98);
    func_0x00010067cd38(&ppuStack_a8);
  }
  func_0x00010067c8cc(&ppuStack_d8);
  lVar10 = *param_2;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
    if (bVar6) {
      *ppuVar12 = *ppuVar12 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  ppuStack_98 = ppuVar1;
  ppuStack_90 = ppuVar8;
  func_0x00010067cd60(lVar10 + 0x158,&ppuStack_98);
  func_0x00010067c8a8(&ppuStack_98);
  func_0x00010067cdbc(*(undefined8 *)(param_1 + 0x28));
  (*extraout_x8_00)();
  func_0x00010067cd38(&ppuStack_c8);
  func_0x00010066a0a4(&puStack_b8);
  func_0x00010068e834(uStack_68);
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    func_0x00010067cd38(&ppuStack_c8);
    func_0x00010066a0a4(&puStack_b8);
    func_0x000107c35748();
    bVar6 = (bool)ExclusiveMonitorPass(extraout_x8_01,0x10);
    if (bVar6) {
      *extraout_x8_01 = *extraout_x8_01 + 1;
      ExclusiveMonitorsStatus();
    }
    return;
  }
  return;
}



/* Entry: 10067ccb0; end: 10067cd0f;  */

void FUN_10067ccb0(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10067cd10; end: 10067cda7;  */

long FUN_10067cd10(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c60d68();
  }
  return param_1;
}



/* Entry: 10067cda8; end: 10067cdc7;  */

void FUN_10067cda8(void)

{
  func_0x00010063a034();
  if ((undefined1 *)register0x00000008 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10067cdc8; end: 10067cf1f;  */

void FUN_10067cdc8(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  FUN_10060f340();
  plVar5 = (long *)*param_2;
  (**(code **)(*plVar5 + 0x40))();
  (**(code **)(*(long *)*param_2 + 0x28))(&uStack_80);
  puVar6 = (undefined8 *)0xc0;
  func_0x000107c60e20();
  uVar4 = uStack_78;
  uVar3 = uStack_80;
  plVar8 = puVar6 + 1;
  *plVar8 = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_DAT_110cd2be0;
  uStack_80 = 0;
  uStack_78 = 0;
  puVar9 = puVar6 + 3;
  *puVar9 = &PTR_DAT_110cd2c60;
  puVar6[4] = FUN_10089bcc4;
  puVar6[5] = &PTR_DAT_110cd2c20;
  puVar6[6] = param_1;
  puVar6[10] = FUN_10089bcc4;
  puVar6[0xb] = &PTR_DAT_110cd2c20;
  puVar6[0xc] = param_1;
  puVar6[0x10] = &UNK_10b2da398;
  puVar6[0x11] = &PTR_DAT_110cd2c38;
  puVar6[0x12] = param_1;
  uStack_60 = 0;
  uStack_58 = 0;
  puStack_50 = (undefined8 *)0x0;
  puStack_48 = (undefined8 *)0x0;
  puVar6[0x17] = uVar4;
  puVar6[0x16] = uVar3;
  func_0x00010067c8a8(&puStack_50);
  func_0x00010067c8a8(&uStack_60);
  puStack_70 = puVar9;
  puStack_68 = puVar6;
  func_0x00010067c8a8(&uStack_80);
  lVar7 = *param_2;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar2) {
      *plVar8 = *plVar8 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  puStack_50 = puVar9;
  puStack_48 = puVar6;
  func_0x00010067cd60(lVar7 + 0x158,&puStack_50);
  func_0x00010067c8a8(&puStack_50);
  func_0x00010067cf28(*(undefined8 *)(param_1 + 0x40),plVar5,param_2);
  FUN_10067d9fc(param_1);
  FUN_10068f3f0(&puStack_70);
  return;
}



/* Entry: 10067cf20; end: 10067cf3b;  */

undefined8 FUN_10067cf20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10067cf3c; end: 10067cfb7;  */

bool FUN_10067cf3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uStack_48;
  undefined8 auStack_40 [2];
  
  lVar1 = param_1;
  func_0x00010067cf30();
  if (lVar1 == 0) {
    func_0x00010067d054();
    FUN_10067d4a0();
    plVar2 = *(long **)(param_1 + 0x40);
    auStack_40[0] = *(undefined8 *)(param_1 + 0x28);
    uStack_48 = *(undefined8 *)(param_1 + 0x30);
    (**(code **)(*plVar2 + 0x10))(plVar2,param_3,auStack_40,&uStack_48);
    FUN_10067d5a4((undefined8 *)(param_1 + 0x28),plVar2,param_3);
  }
  return lVar1 == 0;
}



/* Entry: 10067cfb8; end: 10067d05b;  */

long FUN_10067cfb8(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = *param_2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar4 & uVar5;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar7 = plVar2[1];
        if (uVar7 != uVar4) break;
        if (plVar2[2] == uVar4) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar5) == 0) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar3 <= uVar7) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar7 / uVar3;
        }
        uVar7 = uVar7 - uVar1 * uVar3;
      }
    } while (uVar7 == uVar6);
  }
  return 0;
}



/* Entry: 10067d05c; end: 10067d3f7;  */

undefined1  [16] FUN_10067d05c(long *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x24;
  undefined1 auVar15 [16];
  
  uVar13 = *param_2;
  uVar14 = param_1[1];
  if (uVar14 != 0) {
    uVar5 = uVar14 - 1;
    if ((uVar14 & uVar5) == 0) {
      unaff_x24 = uVar5 & uVar13;
    }
    else {
      unaff_x24 = uVar13;
      if (uVar14 <= uVar13) {
        uVar6 = 0;
        if (uVar14 != 0) {
          uVar6 = uVar13 / uVar14;
        }
        unaff_x24 = uVar13 - uVar6 * uVar14;
      }
    }
    plVar11 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar11 != (long *)0x0) {
      do {
        while( true ) {
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_10067d108;
          uVar6 = plVar11[1];
          if (uVar6 != uVar13) break;
          if (plVar11[2] == uVar13) {
            uVar4 = 0;
            goto LAB_10067d3c8;
          }
        }
        if ((uVar14 & uVar5) == 0) {
          uVar6 = uVar6 & uVar5;
        }
        else if (uVar14 <= uVar6) {
          uVar7 = 0;
          if (uVar14 != 0) {
            uVar7 = uVar6 / uVar14;
          }
          uVar6 = uVar6 - uVar7 * uVar14;
        }
      } while (uVar6 == unaff_x24);
    }
  }
LAB_10067d108:
  plVar12 = (long *)*param_4;
  plVar1 = param_1 + 2;
  plVar11 = (long *)0x28;
  func_0x000107c60e20();
  *plVar11 = 0;
  plVar11[1] = uVar13;
  plVar11[2] = *plVar12;
  plVar11[3] = 0;
  plVar11[4] = 0;
  if ((uVar14 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar14))
  goto LAB_10067d34c;
  uVar5 = 1;
  if (2 < uVar14) {
    uVar5 = (ulong)((uVar14 & uVar14 - 1) != 0);
  }
  uVar5 = uVar5 | uVar14 << 1;
  uVar6 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar5 <= uVar6) {
    uVar5 = uVar6;
  }
  if (uVar5 - 1 == 0) {
    uVar5 = 2;
  }
  else if ((uVar5 & uVar5 - 1) != 0) {
    func_0x000107c60c44();
    uVar14 = param_1[1];
  }
  if (uVar14 < uVar5) {
LAB_10067d1b8:
    if (uVar5 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10067d3ec);
      (*pcVar2)();
    }
    lVar3 = uVar5 << 3;
    func_0x000107c60e20(lVar3);
    FUN_10067d42c(param_1,lVar3);
    param_1[1] = uVar5;
    lVar3 = *param_1;
    for (uVar14 = 0; uVar5 != uVar14; uVar14 = uVar14 + 1) {
      *(undefined8 *)(lVar3 + uVar14 * 8) = 0;
    }
    plVar12 = (long *)*plVar1;
    uVar14 = uVar5;
    if (plVar12 != (long *)0x0) {
      uVar9 = plVar12[1];
      uVar7 = uVar5 - 1;
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = uVar9 / uVar5;
      }
      uVar10 = uVar9;
      if (uVar5 <= uVar9) {
        uVar10 = uVar9 - uVar6 * uVar5;
      }
      if ((uVar5 & uVar7) == 0) {
        uVar10 = uVar9 & uVar7;
      }
      *(long **)(lVar3 + uVar10 * 8) = plVar1;
      while (plVar8 = plVar12, plVar12 = (long *)*plVar8, plVar12 != (long *)0x0) {
        uVar6 = plVar12[1];
        if ((uVar5 & uVar7) == 0) {
          uVar6 = uVar6 & uVar7;
        }
        else if (uVar5 <= uVar6) {
          uVar9 = 0;
          if (uVar5 != 0) {
            uVar9 = uVar6 / uVar5;
          }
          uVar6 = uVar6 - uVar9 * uVar5;
        }
        if (uVar6 != uVar10) {
          if (*(long *)(lVar3 + uVar6 * 8) == 0) {
            *(long **)(lVar3 + uVar6 * 8) = plVar8;
            uVar10 = uVar6;
          }
          else {
            *plVar8 = *plVar12;
            *plVar12 = **(undefined8 **)(lVar3 + uVar6 * 8);
            **(long **)(lVar3 + uVar6 * 8) = (long)plVar12;
            plVar12 = plVar8;
          }
        }
      }
    }
  }
  else if (uVar5 < uVar14) {
    uVar6 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar14 < 3) || ((uVar14 & uVar14 - 1) != 0)) {
      func_0x000107c60c44();
    }
    else if (1 < uVar6) {
      uVar6 = 1L << (-LZCOUNT(uVar6 - 1) & 0x3fU);
    }
    if (uVar5 <= uVar6) {
      uVar5 = uVar6;
    }
    if (uVar5 < uVar14) {
      if (uVar5 != 0) goto LAB_10067d1b8;
      FUN_10067d42c(param_1,0);
      param_1[1] = 0;
      uVar14 = 0;
    }
    else {
      uVar14 = param_1[1];
    }
  }
  if ((uVar14 & uVar14 - 1) == 0) {
    unaff_x24 = uVar14 - 1 & uVar13;
  }
  else {
    unaff_x24 = uVar13;
    if (uVar14 <= uVar13) {
      uVar5 = 0;
      if (uVar14 != 0) {
        uVar5 = uVar13 / uVar14;
      }
      unaff_x24 = uVar13 - uVar5 * uVar14;
    }
  }
LAB_10067d34c:
  lVar3 = *param_1;
  plVar12 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar12 == (long *)0x0) {
    *plVar11 = *plVar1;
    *plVar1 = (long)plVar11;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar1;
    if (*plVar11 != 0) {
      uVar13 = *(ulong *)(*plVar11 + 8);
      if ((uVar14 & uVar14 - 1) == 0) {
        uVar13 = uVar13 & uVar14 - 1;
      }
      else if (uVar14 <= uVar13) {
        uVar5 = 0;
        if (uVar14 != 0) {
          uVar5 = uVar13 / uVar14;
        }
        uVar13 = uVar13 - uVar5 * uVar14;
      }
      *(long **)(lVar3 + uVar13 * 8) = plVar11;
    }
  }
  else {
    *plVar11 = *plVar12;
    *plVar12 = (long)plVar11;
  }
  param_1[3] = param_1[3] + 1;
  func_0x00010067d444();
  uVar4 = 1;
LAB_10067d3c8:
  auVar15._8_8_ = uVar4;
  auVar15._0_8_ = plVar11;
  return auVar15;
}



/* Entry: 10067d3f8; end: 10067d42b;  */

long FUN_10067d3f8(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_10067d05c(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x18;
}



/* Entry: 10067d42c; end: 10067d463;  */

void FUN_10067d42c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10067d464; end: 10067d487;  */

undefined8 FUN_10067d464(undefined8 param_1)

{
  func_0x00010067d44c(param_1,0);
  return param_1;
}



/* Entry: 10067d488; end: 10067d49f;  */

void FUN_10067d488(void)

{
  return;
}



/* Entry: 10067d4a0; end: 10067d4f3;  */

undefined8 * FUN_10067d4a0(undefined8 *param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x00010067d490();
    } while (extraout_w10 != 0);
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x00010067c914(&uStack_30);
  return param_1;
}



/* Entry: 10067d4f4; end: 10067d5a3;  */

long FUN_10067d4f4(long param_1,undefined8 param_2,long *param_3,long *param_4)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar8 = *param_3;
  lVar7 = *param_4;
  uStack_48 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = *(undefined8 *)(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x20) + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar5 = lVar7 - lVar8 >> 4;
  while (uVar5 != 0) {
    uVar9 = uVar5 >> 1;
    iVar6 = (int)&uStack_50;
    func_0x000107c35848(&uStack_50,param_2);
    uVar2 = uVar5 + ~uVar9;
    uVar5 = uVar9;
    if (iVar6 == 0) {
      lVar8 = lVar8 + uVar9 * 0x10 + 0x10;
      uVar5 = uVar2;
    }
  }
  FUN_100669780();
  return lVar8;
}



/* Entry: 10067d5a4; end: 10067d697;  */

ulong FUN_10067d5a4(long *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined1 auStack_58 [40];
  
  uVar3 = param_1[1];
  if (uVar3 < (ulong)param_1[2]) {
    if (param_2 == uVar3) {
      FUN_100b442b0(param_1,param_3);
    }
    else {
      func_0x000107c2c700(param_1,param_2,uVar3,param_2 + 0x10);
      lVar1 = 0x10;
      if ((ulong)param_1[1] <= param_3 || param_3 < param_2) {
        lVar1 = 0;
      }
      FUN_10067d4a0(param_2,param_3 + lVar1);
    }
  }
  else {
    plVar2 = param_1;
    FUN_10067d698(param_1,((long)(uVar3 - *param_1) >> 4) + 1);
    func_0x00010067d718(auStack_58,plVar2,(long)(param_2 - *param_1) >> 4,param_1 + 2);
    FUN_10067d760(auStack_58,param_3);
    FUN_10067d870(param_1,auStack_58,param_2);
    FUN_10067d91c();
  }
  return param_2;
}



/* Entry: 10067d698; end: 10067d6f3;  */

/* WARNING: Possible PIC construction at 0x00010067d704: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010067d708) */

ulong FUN_10067d698(long *param_1,ulong param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined1 *puVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3c == 0) {
    uVar2 = param_1[2] - *param_1 >> 3;
    if (uVar2 <= param_2) {
      uVar2 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      uVar2 = 0xfffffffffffffff;
    }
    return uVar2;
  }
  puVar3 = &stack0xfffffffffffffff0;
  uVar4 = 0x10067d6d8;
  func_0x000107c2c70c();
  puVar1 = &stack0xfffffffffffffff0;
  while (param_2 >> 0x3c != 0) {
    *(undefined1 **)(puVar1 + -0x10) = puVar3;
    *(undefined8 *)(puVar1 + -8) = uVar4;
    func_0x000104bd35f4();
    *(undefined8 *)(puVar1 + -0x30) = unaff_x20;
    *(ulong *)(puVar1 + -0x28) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x20) = puVar1 + -0x10;
    *(code **)(puVar1 + -0x18) = FUN_10067d6f4;
    puVar3 = puVar1 + -0x20;
    uVar4 = 0x10067d708;
    puVar1 = puVar1 + -0x30;
    unaff_x19 = param_2;
  }
  param_2 = param_2 << 4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2);
  return param_2;
}



/* Entry: 10067d6f4; end: 10067d75f;  */

void FUN_10067d6f4(void)

{
  func_0x00010067d6d8();
  return;
}


