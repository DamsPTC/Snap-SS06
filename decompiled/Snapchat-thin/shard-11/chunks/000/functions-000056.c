/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1080d4b18; end: 1080d4b7b; -[SCValdiRuntime dumpLogMetadata] */

void FUN_1080d4b18(long param_1)

{
  undefined1 auStack_48 [32];
  undefined1 auStack_28 [8];
  
  func_0x00010b941d24(auStack_48,*(undefined8 *)(param_1 + 8),1,0,0);
  func_0x00010b94a8dc(auStack_28,auStack_48);
  FUN_1080d56d0(auStack_48);
  func_0x00010b98101c(auStack_28);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080d5ed8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080d4b7c; end: 1080d4bdf; -[SCValdiRuntime dumpLogs] */

void FUN_1080d4b7c(long param_1)

{
  undefined8 **ppuStack_48;
  ulong uStack_40;
  undefined8 **ppuStack_38;
  ulong uStack_30;
  byte bStack_21;
  
  func_0x00010b9420e0(&ppuStack_38,*(undefined8 *)(param_1 + 8));
  uStack_40 = uStack_30;
  ppuStack_48 = ppuStack_38;
  if (-1 < (char)bStack_21) {
    uStack_40 = (ulong)bStack_21;
    ppuStack_48 = &ppuStack_38;
  }
  func_0x00010b9812a4(&ppuStack_48);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080d5ef0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(&ppuStack_38);
  return;
}



/* Entry: 1080d4be0; end: 1080d4cb7; -[SCValdiRuntime getAllContexts] */

void FUN_1080d4be0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_48;
  long lStack_40;
  
  func_0x00010b8c4290(&lStack_48,*(undefined8 *)(*(long *)(param_1 + 8) + 0x78));
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,lStack_40 - lStack_48 >> 3)
  ;
  _objc_retainAutoreleasedReturnValue();
  for (lVar3 = lStack_48; lVar3 != lStack_40; lVar3 = lVar3 + 8) {
    lVar2 = lVar3;
    FUN_1080dd62c();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      func_0x00010befa120(puVar1,param_2,lVar2);
    }
    func_0x0001080d5d58();
  }
  func_0x0001080d5ec8();
  func_0x0001080d5d44();
  func_0x0001080d57c4(&lStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1080d4cb8; end: 1080d4cc3; -[SCValdiRuntime currentContext] */

void FUN_1080d4cb8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5e510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126bce48,PTR_s_currentContext_1125b52e8);
  return;
}



/* Entry: 1080d4cc4; end: 1080d4cdb; -[SCValdiRuntime manager] */

void FUN_1080d4cc4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080d4cdc; end: 1080d4ce3; -[SCValdiRuntime setIsIntegrationTestEnvironment:] */

void FUN_1080d4cdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1b1e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_setIsIntegrationTestEnvironment__11264a1c8);
  return;
}



/* Entry: 1080d4ce4; end: 1080d4ceb; -[SCValdiRuntime setAllowDarkMode:useScreenUserInterfaceStyleForDarkMode:] */

void FUN_1080d4ce4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c167050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_setAllowDarkMode_useScreenUserIn_112637630);
  return;
}



/* Entry: 1080d4cec; end: 1080d4e0b; -[SCValdiRuntime assetWithModuleName:path:] */

void FUN_1080d4cec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  func_0x0001003ad8f8(auStack_38,param_3);
  func_0x0001080d5e18(&lStack_40);
  func_0x00010b93c510(&lStack_48,*(undefined8 *)(*(long *)(param_1 + 8) + 0x40),auStack_38);
  lVar6 = *(long *)(param_1 + 8);
  if (lStack_48 != 0) {
    plVar1 = (long *)(lStack_48 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lStack_58 = lStack_48;
  if (lStack_40 != 0) {
    piVar2 = (int *)(lStack_40 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lStack_50 = lStack_40;
  uVar5 = *(undefined8 *)(*(long *)(lVar6 + 0x40) + 0x38);
  FUN_1080d4e0c(uVar5,&lStack_58);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080d5e40();
  FUN_1080d5af4(lStack_48);
  func_0x0001003a8cb8(lStack_40);
  func_0x0001080d5db4();
  func_0x0001080d5d50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1080d4e0c; end: 1080d4e9b;  */

void FUN_1080d4e0c(void)

{
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010b927214(&uStack_28);
  func_0x0001080d5868(&lStack_48,uStack_28);
  lStack_38 = 0;
  if (lStack_48 != 0) {
    lStack_38 = lStack_48 + 0x18;
  }
  uStack_30 = uStack_40;
  lStack_48 = 0;
  uStack_40 = 0;
  func_0x00010b96e46c(&lStack_38);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080d5eb0();
  func_0x0001080d5914(&lStack_48);
  FUN_1080d5938(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080d4e9c; end: 1080d4f2b; -[SCValdiRuntime assetWithURL:] */

void FUN_1080d4e9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  func_0x0001003ad8f8(&lStack_28,param_3);
  lVar5 = *(long *)(param_1 + 8);
  uStack_38 = 0;
  if (lStack_28 != 0) {
    piVar1 = (int *)(lStack_28 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lStack_30 = lStack_28;
  uVar4 = *(undefined8 *)(*(long *)(lVar5 + 0x40) + 0x38);
  FUN_1080d4e0c(uVar4,&uStack_38);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080d5e40();
  func_0x0001003a8cb8(lStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1080d4f2c; end: 1080d506f; -[SCValdiRuntime dispatchOnJSQueueWithBlock:sync:] */

void FUN_1080d4f2c(long param_1,undefined8 param_2,code **param_3,int param_4)

{
  undefined1 in_ZR;
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  code **ppcVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined1 auStack_d0 [16];
  undefined ***pppuStack_c0;
  code **ppcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined1 auStack_98 [16];
  undefined ***pppuStack_88;
  undefined1 auStack_80 [16];
  code **ppcStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 **ppuStack_58;
  undefined8 uStack_38;
  
  ppcVar3 = param_3;
  func_0x0001080d5d1c();
  ppcStack_70 = param_3;
  if (param_4 == 0) {
    func_0x0001080d5ec8();
    func_0x00010b980484(auStack_80);
    func_0x0001080d5d58();
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x148);
    pppuStack_88 = (undefined ***)0x0;
    func_0x00010b9a8f04(auStack_98,auStack_80);
    pcStack_68 = FUN_1080d5960;
    FUN_1080d59a0(&ppuStack_60,auStack_98);
    ppcVar3 = &pcStack_68;
    FUN_1080d3888(uVar5,&pppuStack_88,ppcVar3);
    func_0x0001080d5e50();
    func_0x0001080d5e48();
    pppuVar1 = pppuStack_88;
    func_0x000105276914();
    func_0x0001080d5e68();
  }
  else {
    pcStack_68 = (code *)0x1080d5944;
    ppuStack_60 = &PTR_DAT_110a1eec0;
    ppuStack_58 = &ppcStack_70;
    func_0x00010b8f1dfc(*(undefined8 *)(*(long *)(param_1 + 8) + 0x148),&pcStack_68);
    pppuVar1 = &ppuStack_60;
    (*(code *)*ppuStack_60)();
    param_3 = ppcStack_70;
  }
  func_0x0001080d5d50();
  func_0x0001080d5d08(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001080d5e50();
  func_0x0001080d5e48();
  pppuVar2 = pppuStack_88;
  func_0x000105276914();
  func_0x0001080d5e68();
  func_0x0001080d5d50();
  func_0x0001080d5d68();
  pcStack_a8 = FUN_1080d5070;
  ppuVar4 = pppuVar2[1];
  pppuStack_c0 = pppuVar1;
  ppcStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x00010b970d10(auStack_d0,ppcVar3);
  func_0x00010b94173c(ppuVar4,auStack_d0);
  FUN_1080d5cb8(auStack_d0);
  return;
}



/* Entry: 1080d5070; end: 1080d50ab; -[SCValdiRuntime registerNativeModuleFactory:] */

void FUN_1080d5070(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010b970d10(auStack_30,param_3);
  func_0x00010b94173c(uVar1,auStack_30);
  FUN_1080d5cb8(auStack_30);
  return;
}



/* Entry: 1080d50ac; end: 1080d51cb; -[SCValdiRuntime setPerformHapticFeedbackFunctionBlock:] */

void FUN_1080d50ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x19;
  long unaff_x20;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  
  func_0x0001080d5d34();
  puVar1 = PTR_PTR_1126b6d48;
  if (unaff_x19 == 0) {
    func_0x00010bf70b00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1da8a0();
  }
  else {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1080d51cc;
    puStack_40 = &UNK_110a1ee40;
    func_0x0001080d5ed0();
    func_0x00010bfbc0a0(puVar1,param_2,&puStack_58);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf70b00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1da8a0();
    func_0x0001080d5d60();
    func_0x0001080d5d58();
    unaff_x20 = unaff_x19;
  }
  _objc_release(unaff_x20);
  func_0x0001080d5d50();
  return;
}



/* Entry: 1080d51cc; end: 1080d5243;  */

undefined8 FUN_1080d51cc(long param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = param_2;
  func_0x00010b97fcec(param_2,0);
  ppuVar2 = &PTR____CFConstantStringClassReference_110dcecd8;
  if ((int)ppuVar1 != 0) {
    func_0x00010b97fc3c(param_2,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = param_2;
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),ppuVar2);
  func_0x0001080d5d50();
  return 0;
}



/* Entry: 1080d5244; end: 1080d54cf; -[SCValdiRuntime makeViewFactoryWithBlock:attributesBinder:forClass:] */

undefined ***
FUN_1080d5244(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined *puVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  undefined ***pppuVar7;
  undefined **ppuVar8;
  int extraout_w10;
  long lVar9;
  undefined1 auStack_d8 [16];
  undefined **ppuStack_c8;
  undefined ***pppuStack_c0;
  undefined1 auStack_b8 [8];
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001080d5d78();
  func_0x0001080d5d94();
  _NSStringFromClass(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001003ad8f8(auStack_b8);
  func_0x0001080d5d70();
  lVar9 = *(long *)(param_1 + 0x10);
  func_0x00010b8a6d18(&pppuStack_c0,lVar9 + 0x18,auStack_b8);
  if (param_4 != 0) {
    uStack_a8 = *(undefined8 *)(lVar9 + 0x20);
    uStack_98 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x178);
    ppuStack_b0 = &PTR_DAT_110d70b40;
    lStack_a0 = *(long *)(lVar9 + 0xd0);
    if ((lStack_a0 != 0) && (*(long *)(lStack_a0 + 0x10) != 0)) {
      plVar1 = (long *)(*(long *)(lStack_a0 + 0x10) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puStack_90 = &UNK_10dd5b8b0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_68 = 0;
    uStack_50 = 0;
    puVar4 = PTR_PTR_1126d93f8;
    _objc_alloc(PTR_PTR_1126d93f8);
    func_0x00010c02dec0();
    (**(code **)(param_4 + 0x10))(param_4,puVar4);
    func_0x00010b8a9414(&ppuStack_c8,pppuStack_c0,auStack_b8,&puStack_90,&uStack_60,&uStack_58,
                        uStack_50,1);
    FUN_1080d54d0(&pppuStack_c0,&ppuStack_c8);
    FUN_1080d5cdc(ppuStack_c8);
    func_0x0001080d5d70();
    func_0x00010b8a5610(&ppuStack_b0);
  }
  FUN_1080dd634(&ppuStack_b0,param_3,auStack_b8,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10),
                &pppuStack_c0);
  pppuVar5 = (undefined ***)PTR_PTR_1126d9460;
  _objc_alloc(PTR_PTR_1126d9460);
  ppuVar6 = ppuStack_b0;
  if ((ppuStack_b0 != (undefined **)0x0) && (ppuStack_b0[2] != (undefined *)0x0)) {
    do {
      func_0x0001080d5e20();
    } while (extraout_w10 != 0);
  }
  ppuStack_c8 = ppuVar6;
  pppuVar7 = &ppuStack_c8;
  func_0x00010b9a8f78(auStack_d8);
  func_0x00010c060400(pppuVar5);
  func_0x0001080d5e48();
  func_0x000104bddf04(ppuVar6);
  FUN_1080d2890(ppuVar6);
  FUN_1080d5cdc(pppuStack_c0);
  func_0x0001080d5db4();
  func_0x0001080d5d60();
  func_0x0001080d5d50();
  func_0x0001080d5d08(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001080d5d70();
    func_0x00010b8a5610(&ppuStack_b0);
    FUN_1080d5cdc();
    func_0x0001080d5db4();
    func_0x0001080d5d60();
    func_0x0001080d5d50();
    func_0x0001080d5ea0();
    if (pppuStack_c0 != pppuVar7) {
      ppuVar8 = *pppuVar7;
      *pppuVar7 = (undefined **)0x0;
      ppuVar6 = *pppuStack_c0;
      *pppuStack_c0 = ppuVar8;
      FUN_1080d5cdc(ppuVar6);
    }
    return pppuStack_c0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar5);
  return pppuVar5;
}



/* Entry: 1080d54d0; end: 1080d5507;  */

undefined8 * FUN_1080d54d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    uVar2 = *param_2;
    *param_2 = 0;
    uVar1 = *param_1;
    *param_1 = uVar2;
    FUN_1080d5cdc(uVar1);
  }
  return param_1;
}



/* Entry: 1080d5508; end: 1080d5647; -[SCValdiRuntime getAllModuleHashes] */

long * FUN_1080d5508(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined1 *puVar5;
  long *plVar6;
  long lVar7;
  long lStack_70;
  long lStack_68;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  plVar6 = &lStack_70;
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  plVar3 = *(long **)(*(long *)(param_1 + 8) + 0x40);
  func_0x00010b93cdac(&lStack_70,plVar3);
  for (lVar7 = lStack_70; uVar1 = lVar7 == lStack_68, !(bool)uVar1; lVar7 = lVar7 + 0x10) {
    func_0x00010b92dc18(&lStack_58,*(undefined8 *)(lVar7 + 8));
    if (lStack_58 == 1) {
      lVar4 = lVar7;
      func_0x00010b98101c(lVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = auStack_50;
      func_0x00010b98101c(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2,param_2,puVar5,lVar4);
      func_0x0001080d5d70();
      func_0x0001080d5d58();
    }
    plVar3 = &lStack_58;
    func_0x000104bdd63c();
  }
  func_0x0001080d5ec8();
  FUN_1080d59f0(&lStack_70);
  func_0x0001080d5d50();
  func_0x0001080d5d08(uStack_48);
  if ((bool)uVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar3);
    return plVar3;
  }
  ___stack_chk_fail();
  FUN_1080d59f0();
  func_0x0001080d5d50();
  func_0x0001080d5d68();
  return (long *)(ulong)*(byte *)((long)plVar6 + 0x48);
}



/* Entry: 1080d5648; end: 1080d564f; -[SCValdiRuntime isBackedByRemoteFiles] */

undefined1 FUN_1080d5648(long param_1)

{
  return *(undefined1 *)(param_1 + 0x48);
}



/* Entry: 1080d5650; end: 1080d5657; -[SCValdiRuntime setIsBackedByRemoteFiles:] */

void FUN_1080d5650(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 1080d5658; end: 1080d565f; -[SCValdiRuntime disableLegacyMeasureBehaviorByDefault] */

undefined1 FUN_1080d5658(long param_1)

{
  return *(undefined1 *)(param_1 + 0x49);
}



/* Entry: 1080d5660; end: 1080d5667; -[SCValdiRuntime setDisableLegacyMeasureBehaviorByDefault:] */

void FUN_1080d5660(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x49) = param_3;
  return;
}



/* Entry: 1080d5668; end: 1080d566f; -[SCValdiRuntime deviceModule] */

undefined8 FUN_1080d5668(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1080d5670; end: 1080d56c7; -[SCValdiRuntime .cxx_destruct] */

undefined8 * FUN_1080d5670(long param_1)

{
  func_0x0001080d5df4(param_1 + 0x50);
  func_0x0001080d5df4(param_1 + 0x40);
  func_0x0001080d5df4(param_1 + 0x38);
  func_0x0001080d5df4(param_1 + 0x28);
  func_0x0001080d5df4(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  FUN_1080d5ce8(param_1 + 0x10);
  func_0x000104c62570(*(undefined8 *)(param_1 + 8));
  return (undefined8 *)(param_1 + 8);
}



/* Entry: 1080d56c8; end: 1080d56cf; -[SCValdiRuntime .cxx_construct] */

void FUN_1080d56c8(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 1080d56d0; end: 1080d575b;  */

long FUN_1080d56d0(long param_1)

{
  long lStack_28;
  
  func_0x000104bd4e40(param_1 + 0x18);
  lStack_28 = param_1;
  func_0x0001080d5724(&lStack_28);
  return param_1;
}



/* Entry: 1080d575c; end: 1080d5763;  */

void FUN_1080d575c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x18;
    func_0x0001080d579c();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 1080d5764; end: 1080d5827;  */

void FUN_1080d5764(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x18;
    func_0x0001080d579c();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1080d5828; end: 1080d582f;  */

void FUN_1080d5828(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -8;
    func_0x0001052768f0();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 1080d5830; end: 1080d5937;  */

void FUN_1080d5830(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -8;
    func_0x0001052768f0();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1080d5938; end: 1080d595f;  */

void FUN_1080d5938(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1080d5960; end: 1080d599f;  */

void FUN_1080d5960(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 0x10;
  func_0x00010b980ac4();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_2 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1080d59a0; end: 1080d59cb;  */

undefined8 * FUN_1080d59a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a1eee0;
  func_0x00010b9a8fa8(param_1 + 1);
  return param_1;
}



/* Entry: 1080d59cc; end: 1080d59ef;  */

long * FUN_1080d59cc(long param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  
  func_0x00010b9abca8();
  if (((bool)in_ZR) && (plVar1 = *(long **)(param_1 + 8), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x18))();
  }
  return (long *)(param_1 + 8);
}



/* Entry: 1080d59f0; end: 1080d5a5f;  */

long * FUN_1080d59f0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x10;
      func_0x0001080d5a38();
    }
    param_1[1] = lVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 1080d5a60; end: 1080d5a67;  */

void FUN_1080d5a60(undefined8 *param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uStack_30;
  long lStack_28;
  
  FUN_1080d25e0(&uStack_30,*param_2);
  param_1[1] = lStack_28;
  *param_1 = uStack_30;
  if (lStack_28 != 0) {
    do {
      func_0x0001080d5e20();
    } while (extraout_w10 != 0);
  }
  func_0x0001080d2668(&uStack_30);
  return;
}



/* Entry: 1080d5a68; end: 1080d5af3;  */

void FUN_1080d5a68(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_30;
  long lStack_28;
  
  FUN_1080d25e0(&uStack_30);
  param_1[1] = lStack_28;
  *param_1 = uStack_30;
  if (lStack_28 != 0) {
    do {
      func_0x0001080d5e20();
    } while (extraout_w10 != 0);
  }
  func_0x0001080d2668(&uStack_30);
  return;
}



/* Entry: 1080d5af4; end: 1080d5b1b;  */

void FUN_1080d5af4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001080d5e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1080d5b1c; end: 1080d5b2f;  */

void FUN_1080d5b1c(void)

{
  func_0x0001080d5b40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080d5b30; end: 1080d5b4f;  */

void FUN_1080d5b30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001080d5b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1080d5b50; end: 1080d5b97;  */

void FUN_1080d5b50(long param_1)

{
  func_0x0001080d5e80();
  if (param_1 != 0) {
    func_0x0001003a81fc();
  }
  return;
}



/* Entry: 1080d5b98; end: 1080d5bbb;  */

void FUN_1080d5b98(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001080d5e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1080d5bbc; end: 1080d5c5f;  */

void FUN_1080d5bbc(long *param_1,long param_2)

{
  param_2 = param_2 + 0x10;
  func_0x00010b981064(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    if (*param_1 == 1) {
      (**(code **)(param_2 + 0x10))(param_2,0);
    }
    else {
      param_1 = param_1 + 1;
      func_0x00010b981bb0(param_1);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_2 + 0x10))(param_2,param_1);
      func_0x0001080d5d60();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1080d5c60; end: 1080d5cb7;  */

undefined8 * FUN_1080d5c60(long param_1)

{
  func_0x000104bddf04(*(undefined8 *)(param_1 + 8));
  return (undefined8 *)(param_1 + 8);
}



/* Entry: 1080d5cb8; end: 1080d5cdb;  */

void FUN_1080d5cb8(long param_1)

{
  func_0x0001080d5e80();
  if (param_1 != 0) {
    func_0x0001003a81fc();
  }
  return;
}



/* Entry: 1080d5cdc; end: 1080d5ce7;  */

void FUN_1080d5cdc(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1080d5ce8; end: 1080d5d07;  */

void FUN_1080d5ce8(void)

{
  func_0x0001080d5efc();
  FUN_1080d5b98();
  return;
}



/* Entry: 1080d5d08; end: 1080d5f07;  */

void FUN_1080d5d08(void)

{
  return;
}



/* Entry: 1080d5f08; end: 1080d5fe3; -[SCValdiRuntimeManager dealloc] */

void FUN_1080d5f08(long param_1)

{
  undefined8 uVar1;
  long lStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1080d5fe4;
  puStack_30 = &UNK_110a1ef70;
  lStack_28 = param_1;
  func_0x00010090afa0(&puStack_48);
  lStack_50 = 0;
  func_0x00010090af90();
  func_0x00010090bd1c();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  FUN_1080d5ff4(&lStack_50,param_1 + 8);
  func_0x00010090bd24();
  func_0x00010090bd2c();
  if (lStack_50 != 0) {
    func_0x00010b9454a0(lStack_50);
  }
  func_0x0001080d8b84();
  puStack_58 = PTR_PTR_1126fc6f0;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1080d5fe4; end: 1080d5ff3;  */

void FUN_1080d5fe4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_removeObject__112628ef8,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa0)
            );
  return;
}



/* Entry: 1080d5ff4; end: 1080d601f;  */

long FUN_1080d5ff4(long param_1,long param_2)

{
  if (param_1 != param_2) {
    func_0x0001080d8bdc();
    func_0x000104bd57fc();
  }
  return param_1;
}



/* Entry: 1080d6020; end: 1080d6c8f; -[SCValdiRuntimeManager _initializeIfNeeded] */

void FUN_1080d6020(ulong param_1)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  bool bVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  code *pcVar14;
  long lVar15;
  undefined8 extraout_x8;
  undefined8 uVar16;
  undefined8 uVar17;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  code *pcVar18;
  long *plVar19;
  long *plVar20;
  code *pcVar21;
  code *pcStack_110;
  undefined8 *puStack_108;
  code *pcStack_100;
  code *pcStack_f8;
  code *pcStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  code *pcStack_a0;
  code *apcStack_98 [5];
  undefined8 uStack_70;
  
  func_0x00010090c8ac();
  plVar19 = (long *)(param_1 + 8);
  uStack_70 = extraout_x8;
  if (*plVar19 != 0) goto LAB_1080d6a4c;
  puVar6 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010c077480();
  if ((int)puVar6 == 0) {
    func_0x000107c27d8c(PTR___dispatch_main_q_11034be20,&PTR___NSConcreteGlobalBlock_110a1efa0);
  }
  else {
    FUN_1080d6c90();
  }
  puVar6 = PTR_PTR_1126d9468;
  _objc_opt_new();
  uVar16 = *(undefined8 *)(param_1 + 0x70);
  *(undefined **)(param_1 + 0x70) = puVar6;
  func_0x00010090af78(uVar16);
  puVar6 = PTR_PTR_1126d9470;
  _objc_opt_new();
  uVar16 = *(undefined8 *)(param_1 + 0x90);
  *(undefined **)(param_1 + 0x90) = puVar6;
  func_0x00010090af78(uVar16);
  uVar16 = *(undefined8 *)(param_1 + 0x90);
  puVar7 = (undefined8 *)0x78;
  __Znwm();
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar8 = puVar7 + 3;
  *puVar7 = &PTR_FUN_110a1f020;
  FUN_1080c3244(puVar8,uVar16);
  pcStack_d0 = (code *)0x0;
  pcStack_c8 = (code *)0x0;
  apcStack_98[0] = *(code **)(param_1 + 0x28);
  pcStack_a0 = *(code **)(param_1 + 0x20);
  *(undefined8 **)(param_1 + 0x20) = puVar8;
  *(undefined8 **)(param_1 + 0x28) = puVar7;
  FUN_1080d8508(&pcStack_a0);
  FUN_1080d8508(&pcStack_d0);
  puStack_108 = (undefined8 *)0x10;
  __Znwm();
  plVar20 = puStack_108 + 1;
  *plVar20 = 1;
  *puStack_108 = &PTR_FUN_110a1dae8;
  pcStack_110 = (code *)0x10;
  __Znwm();
  pcVar18 = pcStack_110 + 8;
  *(long *)pcVar18 = 1;
  *(undefined ***)pcStack_110 = &PTR_DAT_110a1db58;
  lVar9 = 9;
  _NSSearchPathForDirectoriesInDomains(9,1,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar9;
  func_0x0001009a36f4();
  if (lVar9 == 0) {
    _NSTemporaryDirectory();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b96bf1c();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar15;
    func_0x00010c076f00();
    if ((int)lVar9 != 0) {
      func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080d8b8c(lVar15);
      func_0x00010090bd2c();
    }
    func_0x0001080d89f8();
  }
  puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc2c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010090bd2c();
  func_0x00010c0f5800(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfacbe0();
  func_0x00010090bd2c();
  if (((ulong)puVar10 & 1) == 0) {
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf55d80();
    func_0x00010090bd2c();
  }
  func_0x00010c1ecdc0(puVar6);
  func_0x00010c0f5800(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001003ad8f8(&pcStack_a0);
  func_0x00010090bd2c();
  func_0x0001080d8ae4();
  func_0x0001080d89f8();
  func_0x0001009a36f4();
  uVar16 = 0x40;
  __Znwm();
  func_0x00010b930e28();
  uVar17 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = uVar16;
  func_0x0001080d8574(uVar17);
  func_0x0001080d8574(0);
  func_0x0001080d8b98();
  puVar6 = PTR_PTR_1126d9498;
  _objc_opt_new();
  uVar11 = param_1;
  func_0x00010be21040();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_1;
  func_0x00010be46340(param_1);
  FUN_10841085c(&pcStack_f0,puVar6);
  func_0x00010bf8fec0(uVar11);
  func_0x00010bf80120(uVar11);
  func_0x00010bf66600();
  if (0xffff < uVar11) {
    func_0x00010b96bf1c();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar11;
    func_0x00010c076f00();
    if ((int)uVar13 != 0) {
      func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080d8b8c(uVar11);
      func_0x00010090bd2c();
    }
    func_0x0001009a36f4();
  }
  pcVar14 = (code *)0x290;
  __Znwm();
  pcVar21 = pcVar14 + 8;
  *(long *)pcVar21 = 0;
  *(long *)(pcVar14 + 0x10) = 0;
  *(undefined ***)pcVar14 = &PTR_FUN_110a1f070;
  do {
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar18,0x10);
    if (bVar5) {
      *(long *)pcVar18 = *(long *)pcVar18 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  lStack_a8 = *(long *)(param_1 + 0x60);
  if (lStack_a8 != 0) {
    plVar1 = (long *)(lStack_a8 + 8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  apcStack_98[0] = pcStack_e8;
  pcStack_a0 = pcStack_f0;
  pcStack_f0 = (code *)0x0;
  pcStack_e8 = (code *)0x0;
  pcStack_c8 = *(code **)(param_1 + 0x28);
  pcStack_d0 = *(code **)(param_1 + 0x20);
  pcStack_100 = pcStack_110;
  if (*(long *)(param_1 + 0x28) != 0) {
    do {
      func_0x0001080d89b8();
    } while (extraout_w10 != 0);
  }
  do {
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar5) {
      *plVar20 = *plVar20 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  pcVar18 = pcVar14 + 0x18;
  puStack_b0 = puStack_108;
  func_0x00010b944f5c(pcVar18,&pcStack_100,uVar12,&lStack_a8,&pcStack_a0,&pcStack_d0,1,4,&puStack_b0
                     );
  func_0x0001080d85dc(puStack_b0);
  FUN_1080d8600(&pcStack_d0);
  FUN_1080d8598(&pcStack_a0);
  func_0x0001080d8654(lStack_a8);
  func_0x0001080d8624(pcStack_100);
  if ((*(long *)(pcVar14 + 0x28) == 0) || (*(long *)(*(long *)(pcVar14 + 0x28) + 8) == -1)) {
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pcVar21,0x10);
      if (bVar5) {
        *(long *)pcVar21 = *(long *)pcVar21 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    pcStack_a0 = pcVar18;
    apcStack_98[0] = pcVar14;
    func_0x0001003a8180(pcVar14 + 0x20,&pcStack_a0);
    func_0x0001080d8a94();
  }
  pcStack_b8 = pcVar18;
  FUN_1080d5ff4(plVar19,&pcStack_b8);
  func_0x000104bd57fc(pcStack_b8);
  FUN_1080d8598(&pcStack_f0);
  func_0x00010b945584(*plVar19);
  puVar6 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf24a60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010090bd2c();
  func_0x0001003ad8f8(&pcStack_a0,puVar6);
  func_0x0001080d8b98();
  lVar15 = 0xd;
  _NSSearchPathForDirectoriesInDomains(0xd,1,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010090bd2c();
  if (lVar15 != 0) {
    puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc2c60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010090bd2c();
    lVar9 = *plVar19;
    func_0x00010c0f5800(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001003ad8f8(&pcStack_d0);
    func_0x00010b9a2210(&pcStack_a0,&pcStack_d0);
    func_0x00010b946f80(lVar9,&pcStack_a0);
    func_0x0001080d8b64();
    func_0x0001003a8cb8(pcStack_d0);
    func_0x00010090bd2c();
    func_0x0001009a36f4();
  }
  puVar6 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010c077480();
  if ((int)puVar6 != 0) {
    func_0x00010b94bea8(*(undefined8 *)(*plVar19 + 0xe0));
  }
  _objc_opt_new(PTR_PTR_1126d9478);
  func_0x00010be897c0(param_1);
  func_0x00010090bd2c();
  uVar16 = *(undefined8 *)(param_1 + 8);
  plVar20 = *(long **)(param_1 + 0x60);
  pcStack_d0 = (code *)&UNK_10f47a107;
  pcStack_c8 = (code *)0x11;
  func_0x00010b9a2108(&pcStack_a0,&pcStack_d0);
  (**(code **)(*plVar20 + 0x40))(&pcStack_f0,plVar20,&pcStack_a0,1);
  func_0x00010b946454(uVar16,&pcStack_f0);
  func_0x0001080d8654(pcStack_f0);
  func_0x0001080d8b64();
  pcStack_d0 = (code *)0x0;
  func_0x00010b945e48(&pcStack_a0,*(undefined8 *)(param_1 + 8),*(long *)(param_1 + 0x20) + 8,1,
                      &pcStack_d0);
  FUN_1080d6cb8(param_1 + 0x68,&pcStack_a0);
  FUN_1080d5b98(pcStack_a0);
  func_0x000104bd5718(pcStack_d0);
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080d8a64();
  func_0x00010090bd2c();
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080d8a64();
  func_0x00010090bd2c();
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080d8a64();
  func_0x00010090bd2c();
  puVar6 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf07b60();
  bVar5 = puVar6 == (undefined *)0x2;
  plVar20 = (long *)(ulong)bVar5;
  uVar4 = bVar5;
  func_0x00010090bd2c();
  if (!bVar5) {
    func_0x00010b9460bc(*plVar19);
  }
  pcVar14 = (code *)PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_class();
  _objc_opt_class(PTR_PTR_1126d7b90);
  func_0x00010c127560(param_1);
  lVar9 = *plVar19;
  puVar7 = (undefined8 *)0x38;
  __Znwm();
  func_0x0001080d8bc8();
  *puVar7 = &PTR_DAT_110a1f0c0;
  pcVar18 = (code *)(puVar7 + 3);
  FUN_1080caf8c(pcVar18,lVar9 + 0x108);
  if ((*(long *)(pcVar14 + 0x28) == 0) || (func_0x0001080d8bb0(), (bool)uVar4)) {
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar5) {
        *plVar20 = *plVar20 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    pcStack_a0 = pcVar18;
    apcStack_98[0] = pcVar14;
    func_0x0001080d8b58();
    func_0x0001080d8a94();
    if (*(long *)(pcVar14 + 0x28) != 0) goto LAB_1080d6830;
  }
  else {
LAB_1080d6830:
    do {
      func_0x0001080d89b8();
    } while (extraout_w10_00 != 0);
  }
  pcStack_a0 = pcVar18;
  func_0x00010b924a58();
  func_0x0001080d86b0(pcStack_a0);
  func_0x00010bdcddc0(param_1);
  pcVar14 = *(code **)(param_1 + 0x30);
  uStack_c0 = *(undefined8 *)(param_1 + 0x40);
  pcVar21 = *(code **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pcStack_e8 = *(code **)(param_1 + 0x50);
  pcStack_f0 = *(code **)(param_1 + 0x48);
  uStack_e0 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  pcStack_d0 = pcVar14;
  pcStack_c8 = pcVar21;
  for (; pcVar14 != pcVar21; pcVar14 = pcVar14 + 0x10) {
    func_0x00010b9455d4(*plVar19,pcVar14);
  }
  _objc_initWeak(&lStack_a8,param_1);
  uVar16 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(&puStack_b0,&lStack_a8);
  puVar7 = (undefined8 *)0x68;
  __Znwm();
  func_0x0001080d8bc8();
  *puVar7 = &PTR_DAT_110a1f110;
  pcVar2 = (code *)(puVar7 + 3);
  pcStack_a0 = FUN_1080d86dc;
  FUN_1080d875c(apcStack_98,&puStack_b0);
  FUN_108100e4c(pcVar2,&pcStack_a0);
  (**(code **)apcStack_98[0])(apcStack_98);
  if ((*(long *)(pcVar14 + 0x28) == 0) || (*(long *)(*(long *)(pcVar14 + 0x28) + 8) == -1)) {
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pcVar21,0x10);
      if (bVar5) {
        *(long *)pcVar21 = *(long *)pcVar21 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    pcStack_a0 = pcVar2;
    apcStack_98[0] = pcVar14;
    func_0x0001080d8b58();
    func_0x0001080d8a94();
  }
  pcVar21 = pcVar2;
  if (*(long *)(pcVar14 + 0x20) == 0) {
    pcVar14 = *(code **)(pcVar14 + 0x28);
    if (pcVar14 != (code *)0x0) {
      do {
        func_0x0001080d89b8();
      } while (extraout_w10_02 != 0);
    }
  }
  else {
    func_0x0001003ae9f0(&pcStack_a0,pcVar14 + 0x20);
    pcVar14 = apcStack_98[0];
    if (pcStack_a0 == (code *)0x0) {
      pcVar14 = (code *)0x0;
      pcVar21 = (code *)0x0;
    }
    else if (apcStack_98[0] != (code *)0x0) {
      do {
        func_0x0001080d89b8();
      } while (extraout_w10_01 != 0);
    }
    func_0x0001080d8a94();
  }
  pcStack_100 = (code *)0x0;
  if (pcVar21 != (code *)0x0) {
    pcStack_100 = pcVar21 + 0x18;
  }
  pcStack_f8 = pcVar14;
  func_0x00010b9455d4(uVar16,&pcStack_100);
  func_0x00010090ba64(&pcStack_100);
  func_0x0001080d87b8(pcVar2);
  _objc_destroyWeak(&puStack_b0);
  pcVar21 = pcStack_e8;
  pcVar14 = pcStack_f0;
  while( true ) {
    in_ZR = pcVar14 == pcVar21;
    if ((bool)in_ZR) break;
    func_0x00010b945fc8(*plVar19,pcVar14,pcVar14 + 8);
    pcVar14 = pcVar14 + 0x10;
  }
  func_0x00010b946f68(*plVar19);
  *(undefined1 *)(param_1 + 0xb8) = 1;
  _objc_destroyWeak(&lStack_a8);
  func_0x0001080d82a0(&pcStack_f0);
  func_0x0001080d8330(&pcStack_d0);
  func_0x0001080d86a4(pcVar18);
  _objc_release(lVar15);
  func_0x0001080d89f8();
  func_0x00010090b094();
  func_0x0001080d8adc();
  func_0x0001080d8550(pcStack_110);
  func_0x0001080d852c(puStack_108);
LAB_1080d6a4c:
  func_0x00010090cf18(uStack_70);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010090bd2c();
    func_0x0001080d89f8();
    func_0x0001009a36f4();
    func_0x0001080d8550(pcStack_110);
    func_0x0001080d852c(puStack_108);
    func_0x0001080d8a10();
    func_0x00010bf69e80(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    _objc_unsafeClaimAutoreleasedReturnValue();
    return;
  }
  return;
}



/* Entry: 1080d6c90; end: 1080d6cb3;  */

void FUN_1080d6c90(void)

{
  func_0x00010bf69e80(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 1080d6cb4; end: 1080d6cb7;  */

void FUN_1080d6cb4(void)

{
  func_0x00010bf69e80(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 1080d6cb8; end: 1080d6ce3;  */

long FUN_1080d6cb8(long param_1,long param_2)

{
  if (param_1 != param_2) {
    func_0x0001080d8bdc();
    FUN_1080d5b98();
  }
  return param_1;
}



/* Entry: 1080d6ce4; end: 1080d6d77; -[SCValdiRuntimeManager _cppInstanceIfInitialized] */

void FUN_1080d6ce4(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    lVar4 = *(long *)(param_2 + 8);
    if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
      plVar1 = (long *)(*(long *)(lVar4 + 0x10) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *param_1 = lVar4;
    return;
  }
  func_0x00010090b060();
  func_0x00010090b068();
  lVar4 = *(long *)(param_2 + 8);
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lVar4 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  func_0x00010090b080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1080d6d78; end: 1080d6e47; -[SCValdiRuntimeManager registerViewClassReplacement:withViewClass:] */

void FUN_1080d6d78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  func_0x00010090af98();
  func_0x00010090bd1c();
  func_0x0001080d8ac4();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x68);
  _NSStringFromClass(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001003ad8f8(auStack_38);
  _NSStringFromClass(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001003ad8f8(&uStack_40);
  func_0x00010b8c5844(uVar1,auStack_38,&uStack_40);
  func_0x0001003a8cb8(uStack_40);
  func_0x00010090c188();
  func_0x0001080d8b48();
  func_0x00010090af70();
  func_0x00010090bd24();
  func_0x00010090bd2c();
  return;
}



/* Entry: 1080d6e48; end: 1080d6e97; -[SCValdiRuntimeManager setDebugMessageDisplayer:] */

void FUN_1080d6e48(void)

{
  func_0x00010090c464();
  func_0x00010090af80();
  func_0x0001080d8984(FUN_1080d6e98,0xc2000000);
  func_0x0001080d8a28();
  func_0x00010090b094();
  func_0x00010090bd2c();
  return;
}



/* Entry: 1080d6e98; end: 1080d6ea3;  */

void FUN_1080d6e98(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c18a050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setDebugMessageDisplayer__112640230,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1080d6ea4; end: 1080d6edb; -[SCValdiRuntimeManager setCurrentUsername:] */

void FUN_1080d6ea4(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x00010090c464();
  func_0x0001009a36ec();
  uVar1 = *(undefined8 *)(unaff_x20 + 0xc0);
  *(undefined8 *)(unaff_x20 + 0xc0) = param_1;
  func_0x00010090af78(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080d6edc; end: 1080d6edf; -[SCValdiRuntimeManager setUserSessionWithUserId:userIv:] */

void FUN_1080d6edc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c21f3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setUserSessionWithUserId__112665720);
  return;
}



/* Entry: 1080d6ee0; end: 1080d6f2f; -[SCValdiRuntimeManager setUserSessionWithUserId:] */

void FUN_1080d6ee0(void)

{
  func_0x00010090c464();
  func_0x00010090af80();
  func_0x0001080d8984(FUN_1080d6f30,0xc2000000);
  func_0x0001080d8a28();
  func_0x00010090b094();
  func_0x00010090bd2c();
  return;
}



/* Entry: 1080d6f30; end: 1080d6f3b;  */

void FUN_1080d6f30(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c21e630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setUserId__1126653b0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1080d6f3c; end: 1080d70b3; -[SCValdiRuntimeManager _registerImageLoader:] */

void FUN_1080d6f3c(void)

{
  undefined1 in_ZR;
  ulong uVar1;
  undefined8 *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w10;
  int extraout_w10_00;
  ulong unaff_x19;
  long unaff_x22;
  
  func_0x00010090c464();
  uVar1 = unaff_x19;
  _objc_opt_respondsToSelector();
  if ((uVar1 & 1) != 0) {
    puVar2 = (undefined8 *)0x60;
    __Znwm();
    func_0x0001080d8a70();
    *puVar2 = &PTR_FUN_110a1f180;
    FUN_1080ca30c(puVar2 + 3);
    if ((*(long *)(unaff_x22 + 0x28) == 0) || (func_0x0001080d8bb0(), (bool)in_ZR)) {
      do {
        func_0x0001080d8aec();
      } while (extraout_w9 != 0);
      func_0x0001080d8a58();
      func_0x0001080d8ba8();
      func_0x0001080d8bbc(*(undefined8 *)(unaff_x22 + 0x28));
      if (extraout_x8 != 0) goto LAB_1080d6fd8;
    }
    else {
      func_0x0001080d8bbc();
LAB_1080d6fd8:
      do {
        func_0x0001080d89b8();
      } while (extraout_w10 != 0);
    }
    func_0x0001080d8b78();
    func_0x0001080d8b50();
    func_0x0001080d8814(puVar2 + 3);
  }
  _objc_opt_respondsToSelector();
  if ((unaff_x19 & 1) == 0) goto LAB_10090bd34;
  puVar2 = (undefined8 *)0x58;
  __Znwm();
  func_0x0001080d8a70();
  *puVar2 = &PTR_DAT_110a1f1d0;
  FUN_1080cac18(puVar2 + 3);
  if ((*(long *)(unaff_x22 + 0x28) == 0) || (func_0x0001080d8bb0(), (bool)in_ZR)) {
    do {
      func_0x0001080d8aec();
    } while (extraout_w9_00 != 0);
    func_0x0001080d8a58();
    func_0x0001080d8ba8();
    func_0x0001080d8bbc(*(undefined8 *)(unaff_x22 + 0x28));
    if (extraout_x8_00 != 0) goto LAB_1080d7068;
  }
  else {
    func_0x0001080d8bbc();
LAB_1080d7068:
    do {
      func_0x0001080d89b8();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001080d8b78();
  func_0x0001080d8b50();
  func_0x0001080d884c(puVar2 + 3);
LAB_10090bd34:
  func_0x00010090bd2c();
  return;
}



/* Entry: 1080d70b4; end: 1080d7193; -[SCValdiRuntimeManager _registerVideoLoader:] */

void FUN_1080d70b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  int extraout_w9;
  int extraout_w10;
  long unaff_x22;
  long lVar2;
  
  func_0x0001080d89dc();
  lVar2 = *(long *)(param_1 + 8);
  puVar1 = (undefined8 *)0x70;
  __Znwm();
  func_0x0001080d8a70();
  *puVar1 = &PTR_DAT_110a1f220;
  FUN_1080ca7f4(puVar1 + 3,param_3,lVar2 + 0x108);
  if ((*(long *)(unaff_x22 + 0x28) == 0) || (func_0x0001080d8bb0(), (bool)in_ZR)) {
    do {
      func_0x0001080d8aec();
    } while (extraout_w9 != 0);
    func_0x0001080d8a58();
    func_0x0001080d8ba8();
    if (*(long *)(unaff_x22 + 0x28) == 0) goto LAB_1080d7154;
  }
  do {
    func_0x0001080d89b8();
  } while (extraout_w10 != 0);
LAB_1080d7154:
  func_0x00010b9247ac();
  func_0x0001080d8b50();
  func_0x0001080d8884(puVar1 + 3);
  func_0x00010090bd2c();
  return;
}



/* Entry: 1080d7194; end: 1080d7257; -[SCValdiRuntimeManager _unregisterImageLoader:] */

void FUN_1080d7194(void)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  ulong *puStack_68;
  ulong *puStack_60;
  
  func_0x00010090c464();
  func_0x0001080d8a9c();
  do {
    if (puStack_68 == puStack_60) {
      func_0x0001080d8abc();
      func_0x00010090bd2c();
      return;
    }
    uVar2 = *puStack_68;
    if (uVar2 == 0) {
      uVar2 = 0;
    }
    else {
      func_0x0001080d8acc();
      if (uVar2 != 0) {
        uVar3 = uVar2;
        func_0x00010b9a5818();
        if ((uVar3 & 1) == 0) {
          func_0x00010b9a5890();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1080d7248);
          (*pcVar1)();
        }
        lVar4 = uVar2 + 0x30;
        func_0x00010b9803d0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar4 == unaff_x19) {
          func_0x0001080d8aac();
        }
      }
    }
    func_0x0001080d8890(uVar2);
    puStack_68 = puStack_68 + 1;
  } while( true );
}



/* Entry: 1080d7258; end: 1080d731b; -[SCValdiRuntimeManager _unregisterVideoLoader:] */

void FUN_1080d7258(void)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  ulong *puStack_68;
  ulong *puStack_60;
  
  func_0x00010090c464();
  func_0x0001080d8a9c();
  do {
    if (puStack_68 == puStack_60) {
      func_0x0001080d8abc();
      func_0x00010090bd2c();
      return;
    }
    uVar2 = *puStack_68;
    if (uVar2 == 0) {
      uVar2 = 0;
    }
    else {
      func_0x0001080d8acc();
      if (uVar2 != 0) {
        uVar3 = uVar2;
        func_0x00010b9a5818();
        if ((uVar3 & 1) == 0) {
          func_0x00010b9a5890();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1080d730c);
          (*pcVar1)();
        }
        lVar4 = uVar2 + 0x48;
        func_0x00010b9803d0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar4 == unaff_x19) {
          func_0x0001080d8aac();
        }
      }
    }
    func_0x0001080d8884(uVar2);
    puStack_68 = puStack_68 + 1;
  } while( true );
}



/* Entry: 1080d731c; end: 1080d7323; -[SCValdiRuntimeManager referenceTrackingEnabled] */

undefined1 FUN_1080d731c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x9a);
}



/* Entry: 1080d7324; end: 1080d732b; -[SCValdiRuntimeManager gesturePrewarmEnabled] */

undefined1 FUN_1080d7324(long param_1)

{
  return *(undefined1 *)(param_1 + 0x9b);
}



/* Entry: 1080d732c; end: 1080d750b; -[SCValdiRuntimeManager mainRuntime] */

void FUN_1080d732c(long param_1)

{
  undefined1 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 extraout_x8;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar3 = param_1;
  func_0x00010090c8ac();
  uVar1 = *(char *)(lVar3 + 0xb9) == '\x01';
  if ((bool)uVar1) {
    lVar5 = *(long *)(param_1 + 0x10);
    func_0x00010090b060();
  }
  else {
    func_0x00010090af90();
    func_0x00010090bd1c();
    lVar5 = *(long *)(param_1 + 0x10);
    if (lVar5 == 0) {
      func_0x00010be21040(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf61960();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010bf58940();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar3;
      func_0x00010090af78(uVar4);
      func_0x00010090cf2c();
      func_0x00010bdcddc0(param_1);
      uVar6 = *(ulong *)(param_1 + 0xa8);
      _objc_retain(uVar6);
      uVar2 = uVar6;
      func_0x0001080d89f0();
      lVar3 = lRam0000000000000000;
      while (uVar2 != 0) {
        uVar7 = 0;
        do {
          if (lRam0000000000000000 != lVar3) {
            _objc_enumerationMutation(uVar6);
          }
          (**(code **)(*(long *)(uVar7 * 8) + 0x10))
                    (*(long *)(uVar7 * 8),*(undefined8 *)(param_1 + 0x10));
          uVar7 = uVar7 + 1;
          uVar1 = uVar7 == uVar2;
        } while (uVar7 < uVar2);
        uVar2 = uVar6;
        func_0x0001080d89f0();
      }
      func_0x00010090cf2c();
      func_0x00010c12adc0(*(undefined8 *)(param_1 + 0xa8));
      lVar3 = *(long *)(param_1 + 0x10);
      func_0x00010bf8dea0();
      if (*(long *)(param_1 + 0x10) != 0) {
        *(undefined1 *)(param_1 + 0xb9) = 1;
      }
      func_0x00010090af70();
      lVar5 = *(long *)(param_1 + 0x10);
    }
    func_0x00010090b060();
    func_0x00010090bd24();
    func_0x00010090bd2c();
  }
  func_0x00010090cf18(extraout_x8);
  if ((bool)uVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
    return;
  }
  ___stack_chk_fail();
  func_0x00010090cf2c();
  func_0x00010090af70();
  func_0x00010090bd24();
  func_0x00010090bd2c();
  __Unwind_Resume(lVar3);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010c0b6c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1080d750c; end: 1080d750f; -[SCValdiRuntimeManager provideMainRuntime] */

void FUN_1080d750c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b6c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_mainRuntime_11260b518);
  return;
}



/* Entry: 1080d7510; end: 1080d755f; -[SCValdiRuntimeManager setRequestManager:] */

void FUN_1080d7510(void)

{
  func_0x00010090c464();
  func_0x00010090af80();
  func_0x0001080d8984(FUN_1080d7560,0xc2000000);
  func_0x0001080d8a28();
  func_0x00010090b094();
  func_0x00010090bd2c();
  return;
}



/* Entry: 1080d7560; end: 1080d756b;  */

void FUN_1080d7560(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ebe70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setRequestManager__1126589c0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1080d756c; end: 1080d75cf; -[SCValdiRuntimeManager unloadAllJsModules] */

void FUN_1080d756c(void)

{
  long *plVar1;
  long *plStack_40;
  long *plStack_38;
  long lStack_28;
  
  func_0x00010bdea140(&lStack_28);
  if (lStack_28 != 0) {
    func_0x00010b946160(&plStack_40);
    for (plVar1 = plStack_40; plVar1 != plStack_38; plVar1 = plVar1 + 1) {
      func_0x00010b8f2620(*(undefined8 *)(*plVar1 + 0x148));
    }
    func_0x0001080d83b0(&plStack_40);
  }
  func_0x000104bd57fc(lStack_28);
  return;
}



/* Entry: 1080d75d0; end: 1080d778b; -[SCValdiRuntimeManager createRuntimeWithCustomModuleProvider:] */

void FUN_1080d75d0(float param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  func_0x0001080d89dc();
  func_0x00010090af90();
  func_0x00010090bd1c();
  if (((*(byte *)(param_2 + 0x98) & 1) == 0) && ((*(byte *)(param_2 + 0x99) & 1) == 0)) {
    func_0x0001080d8ac4();
    if (param_4 == 0) {
      param_4 = param_2;
      func_0x00010be21040(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf61960();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010090c188();
    }
    uVar4 = *(undefined8 *)(param_2 + 8);
    puVar1 = (undefined8 *)0x28;
    __Znwm();
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar2 = puVar1 + 3;
    *puVar1 = &PTR_DAT_110a1f270;
    FUN_1080c9694(puVar2,param_4);
    uStack_58 = 0;
    uStack_50 = 0;
    puStack_48 = puVar2;
    puStack_40 = puVar1;
    (**(code **)(**(long **)(*(long *)(param_2 + 0x68) + 0x10) + 0x58))();
    uStack_60 = 0;
    func_0x00010b945824(&uStack_38,(double)param_1,uVar4,&puStack_48,&uStack_60,0);
    func_0x000104bd5718(uStack_60);
    func_0x0001080d88ec(&puStack_48);
    func_0x0001080d88c8(&uStack_58);
    func_0x00010b946f70(*(undefined8 *)(param_2 + 8));
    puVar3 = PTR_PTR_1126d9488;
    _objc_alloc(PTR_PTR_1126d9488);
    func_0x00010c006400();
    func_0x00010b946f78(*(undefined8 *)(param_2 + 8));
    func_0x00010b945e34(*(undefined8 *)(param_2 + 8),&uStack_38);
    func_0x000104c62570(uStack_38);
  }
  else {
    puVar3 = (undefined *)0x0;
  }
  func_0x00010090bd24();
  func_0x00010090bd2c();
  func_0x00010090af70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1080d778c; end: 1080d77bb; -[SCValdiRuntimeManager clearViewPools] */

void FUN_1080d778c(void)

{
  long unaff_x19;
  
  func_0x00010090af98();
  func_0x00010090bd1c();
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x00010b9461d4();
  }
  func_0x00010090bd24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080d77bc; end: 1080d7847; -[SCValdiRuntimeManager preloadViewsOfClass:count:] */

void FUN_1080d77bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x19;
  undefined1 auStack_38 [8];
  
  func_0x00010090af98();
  func_0x00010090bd1c();
  if (*(long *)(unaff_x19 + 0x68) != 0) {
    _NSStringFromClass(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001003ad8f8(auStack_38);
    func_0x00010b8c5878(*(undefined8 *)(unaff_x19 + 0x68),auStack_38,param_4);
    func_0x0001080d8b48();
    func_0x00010090cf2c();
  }
  func_0x00010090bd24();
  func_0x00010090bd2c();
  return;
}



/* Entry: 1080d7848; end: 1080d792f; -[SCValdiRuntimeManager snapDrawingRuntime] */

void FUN_1080d7848(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  long lVar3;
  
  func_0x00010090af98();
  func_0x00010090bd1c();
  func_0x0001080d8ac4();
  lVar3 = *(long *)(unaff_x19 + 0x88);
  if (lVar3 == 0) {
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d5740();
    func_0x00010090af70();
    puVar1 = PTR_PTR_1126d9490;
    _objc_alloc();
    func_0x00010c00d100();
    uVar2 = *(undefined8 *)(unaff_x19 + 0x88);
    *(undefined **)(unaff_x19 + 0x88) = puVar1;
    func_0x00010090af78(uVar2);
    lVar3 = *(long *)(unaff_x19 + 0x88);
  }
  func_0x00010090b060();
  func_0x00010090bd24();
  func_0x00010090bd2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1080d7930; end: 1080d7973; -[SCValdiRuntimeManager _didReceiveMemoryWarning] */

void FUN_1080d7930(void)

{
  long unaff_x19;
  
  func_0x00010090af98();
  func_0x00010090bd1c();
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x00010b9462ec();
  }
  func_0x00010c0e2960(*(undefined8 *)(unaff_x19 + 0x88));
  func_0x00010090bd24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080d7974; end: 1080d79b7; -[SCValdiRuntimeManager _willEnterForeground] */

void FUN_1080d7974(void)

{
  long unaff_x19;
  
  func_0x00010090af98();
  func_0x00010090bd1c();
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x00010b9460bc();
  }
  func_0x00010c0e2940(*(undefined8 *)(unaff_x19 + 0x88));
  func_0x00010090bd24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080d79b8; end: 1080d79fb; -[SCValdiRuntimeManager _didEnterBackground] */

void FUN_1080d79b8(void)

{
  long unaff_x19;
  
  func_0x00010090af98();
  func_0x00010090bd1c();
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x00010b946194();
  }
  func_0x00010c0e2920(*(undefined8 *)(unaff_x19 + 0x88));
  func_0x00010090bd24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080d79fc; end: 1080d7a47; -[SCValdiRuntimeManager _applicationWillTerminate] */

void FUN_1080d79fc(void)

{
  long unaff_x19;
  
  func_0x00010090af98();
  func_0x00010090bd1c();
  *(undefined1 *)(unaff_x19 + 0x98) = 1;
  func_0x00010bf07ca0(*(undefined8 *)(unaff_x19 + 0x10));
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x00010b94632c();
  }
  func_0x00010090bd24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080d7a48; end: 1080d7a8b; -[SCValdiRuntimeManager _javaScriptBridge] */

undefined8 FUN_1080d7a48(undefined8 param_1)

{
  func_0x00010be21040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0853e0();
  FUN_1080df548();
  func_0x00010090bd2c();
  return param_1;
}



/* Entry: 1080d7a8c; end: 1080d7c33; -[SCValdiRuntimeManager captureStackTracesWithTimeoutMs:] */

void FUN_1080d7a8c(undefined8 param_1,undefined8 param_2,long param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long **pplVar4;
  int *piVar5;
  long *plVar6;
  int *piStack_98;
  int *piStack_90;
  long *plStack_80;
  long *plStack_78;
  long lStack_68;
  
  uVar2 = param_1;
  func_0x00010090b024();
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdea140(&lStack_68,param_1);
  pplVar4 = (long **)0x0;
  if (lStack_68 != 0) {
    func_0x00010b946160(&plStack_80);
    for (plVar6 = plStack_80; plVar6 != plStack_78; plVar6 = plVar6 + 1) {
      (**(code **)(**(long **)(*plVar6 + 0x148) + 0x40))
                (&piStack_98,*(long **)(*plVar6 + 0x148),param_3 * 1000000);
      piVar1 = piStack_90;
      for (piVar5 = piStack_98; piVar5 != piVar1; piVar5 = piVar5 + 6) {
        puVar3 = PTR_PTR_1126d94a0;
        _objc_alloc(PTR_PTR_1126d94a0);
        func_0x00010b98101c(piVar5 + 2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04b740(puVar3);
        func_0x00010090c188();
        func_0x00010befa120(uVar2);
        func_0x0001009a36f4();
      }
      FUN_1080d844c(&piStack_98);
    }
    pplVar4 = &plStack_80;
    func_0x0001080d83b0(pplVar4);
  }
  func_0x0001009a36ec();
  func_0x000104bd57fc(lStack_68);
  func_0x00010090bd2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pplVar4);
  return;
}



/* Entry: 1080d7c34; end: 1080d7c8b; -[SCValdiRuntimeManager dumpMemoryStatistics] */

undefined1  [16] FUN_1080d7c34(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  long lStack_28;
  
  func_0x00010bdea140(&lStack_28);
  if (lStack_28 == 0) {
    param_2 = 0;
    lVar1 = 0;
  }
  else {
    lVar1 = lStack_28;
    func_0x00010b946c74();
  }
  func_0x000104bd57fc(lStack_28);
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = lVar1;
  return auVar2;
}



/* Entry: 1080d7c8c; end: 1080d7da3; -[SCValdiRuntimeManager dumpMemoryStatisticsAsyncWithCompletion:] */

undefined *** FUN_1080d7c8c(long param_1,undefined8 param_2,undefined ***param_3)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  int extraout_w10;
  long lVar1;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined ***pppuStack_58;
  undefined8 uStack_38;
  
  func_0x00010090c8ac();
  uStack_38 = extraout_x8;
  func_0x0001080d89dc();
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  lVar1 = *(long *)(param_1 + 8);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
    do {
      func_0x0001080d89b8();
    } while (extraout_w10 != 0);
  }
  func_0x000104bd57fc(0);
  _objc_sync_exit(param_1);
  func_0x00010090cf2c();
  if (lVar1 == 0) {
    (*(code *)param_3[2])(param_3,0,0);
  }
  else {
    _objc_retainBlock();
    pcStack_68 = FUN_1080d8910;
    ppuStack_60 = &PTR_DAT_110a1f2b0;
    pppuStack_58 = param_3;
    func_0x00010b946cdc(lVar1,&pcStack_68);
    param_3 = &ppuStack_60;
    (*(code *)*ppuStack_60)();
  }
  func_0x0001080d8b84();
  func_0x00010090bd2c();
  func_0x00010090cf18(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001080d8b84();
    func_0x00010090bd2c();
    func_0x0001080d8b34();
    if (((ulong)param_3[0x17] & 1) == 0) {
      func_0x00010090af90();
      func_0x00010090bd1c();
      func_0x0001080d8ac4();
      func_0x00010090bd24();
      func_0x00010090bd2c();
    }
    return (undefined ***)param_3[1];
  }
  return param_3;
}



/* Entry: 1080d7da4; end: 1080d7deb; -[SCValdiRuntimeManager cppInstance] */

undefined8 FUN_1080d7da4(long param_1)

{
  if ((*(byte *)(param_1 + 0xb8) & 1) == 0) {
    func_0x00010090af90();
    func_0x00010090bd1c();
    func_0x0001080d8ac4();
    func_0x00010090bd24();
    func_0x00010090bd2c();
  }
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1080d7dec; end: 1080d802f; -[SCValdiRuntimeManager getWorkerOnExecutor:block:] */

void FUN_1080d7dec(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  int extraout_w10;
  long lVar4;
  long lVar5;
  undefined1 auStack_60 [16];
  
  func_0x0001080d89dc();
  func_0x00010090b060();
  plVar1 = param_1;
  func_0x00010c0b6c00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf539e0();
  lVar4 = *plVar1;
  if (lVar4 == 0) {
    func_0x00010090c188();
  }
  else {
    if (*(long *)(lVar4 + 0x10) != 0) {
      do {
        func_0x0001080d89b8();
      } while (extraout_w10 != 0);
    }
    func_0x00010090c188();
    lVar5 = param_1[0x16];
    func_0x00010090c180();
    _objc_sync_enter(lVar5);
    puVar2 = (undefined *)param_1[0x16];
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      if (*(long **)(lVar4 + 0x148) == (long *)0x0) {
        puVar2 = (undefined *)0x0;
      }
      else {
        (**(code **)(**(long **)(lVar4 + 0x148) + 0xa8))(auStack_60);
        puVar3 = auStack_60;
        func_0x00010b97016c();
        _objc_retainAutoreleasedReturnValue();
        func_0x0001080d32dc(auStack_60);
        if (puVar3 == (undefined1 *)0x0) {
          puVar2 = (undefined *)0x0;
        }
        else {
          puVar2 = PTR_PTR_1126d9430;
          _objc_alloc();
          func_0x00010c063460();
          func_0x00010c1d0560(param_1[0x16]);
        }
        func_0x0001080d8ae4();
      }
    }
    _objc_sync_exit(lVar5);
    func_0x00010090c188();
    if (puVar2 != (undefined *)0x0) {
      _objc_retain(puVar2);
      func_0x00010090b060();
      func_0x00010bf85140(puVar2);
      func_0x0001080d8adc();
      func_0x00010090b094();
      func_0x0001080d89f8();
      goto LAB_1080d7f80;
    }
  }
  (**(code **)(param_4 + 0x10))(param_4,0);
LAB_1080d7f80:
  func_0x000104c62570(lVar4);
  func_0x00010090af70();
  func_0x00010090bd2c();
  return;
}



/* Entry: 1080d8030; end: 1080d803f;  */

void FUN_1080d8030(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001080d803c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1080d8040; end: 1080d80c7; +[SCValdiRuntimeManager allRuntimeManagers] */

void FUN_1080d8040(undefined8 param_1)

{
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x00010090b024();
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010090af80();
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1080d80c8;
  puStack_30 = &UNK_110a1ef70;
  _objc_retain();
  uStack_28 = param_1;
  func_0x00010090afa0(auStack_48);
  func_0x0001009a36ec();
  func_0x0001080d89c8();
  func_0x00010090bd2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080d80c8; end: 1080d81f7;  */

long FUN_1080d80c8(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 extraout_x8;
  ulong unaff_x19;
  long unaff_x20;
  ulong uVar4;
  
  func_0x00010090c2d8();
  func_0x00010090c8ac();
  _objc_retain(param_2);
  func_0x00010090af90();
  uVar1 = unaff_x19;
  func_0x0001080d89f0();
  lVar3 = lRam0000000000000000;
  while (uVar1 != 0) {
    uVar4 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation();
      }
      lVar2 = *(long *)(uVar4 * 8);
      func_0x00010c0db200();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 != 0) {
        func_0x00010befa120(*(undefined8 *)(unaff_x20 + 0x20));
      }
      func_0x00010090c188();
      uVar4 = uVar4 + 1;
      in_ZR = uVar4 == uVar1;
    } while (uVar4 < uVar1);
    uVar1 = unaff_x19;
    func_0x0001080d89f0();
  }
  lVar3 = 0;
  func_0x00010090bd2c();
  func_0x00010090bd2c();
  func_0x00010090cf18(extraout_x8);
  if ((bool)in_ZR) {
    return lVar3;
  }
  ___stack_chk_fail();
  func_0x00010090bd2c();
  func_0x00010090bd2c();
  func_0x0001080d89d4();
  return *(long *)(lVar3 + 0xc0);
}



/* Entry: 1080d81f8; end: 1080d81ff; -[SCValdiRuntimeManager currentUsername] */

undefined8 FUN_1080d81f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 1080d8200; end: 1080d82f3; -[SCValdiRuntimeManager .cxx_destruct] */

undefined8 FUN_1080d8200(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001080d8a00(param_1 + 0xc0);
  func_0x0001080d8a00(param_1 + 0xb0);
  func_0x0001080d8a00(param_1 + 0xa8);
  func_0x0001080d8a00(param_1 + 0xa0);
  func_0x0001080d8a00(param_1 + 0x90);
  func_0x0001080d8a00(param_1 + 0x88);
  func_0x0001080d8a00(param_1 + 0x80);
  func_0x0001080d8a00(param_1 + 0x78);
  func_0x0001080d8a00(param_1 + 0x70);
  FUN_1080d5ce8(param_1 + 0x68);
  func_0x0001080d8574(*(undefined8 *)(param_1 + 0x60));
  func_0x0001080d82a0(param_1 + 0x48);
  func_0x0001080d8330(param_1 + 0x30);
  FUN_1080d8508(param_1 + 0x20);
  func_0x0001080d8a00(param_1 + 0x18);
  func_0x0001080d8a00(param_1 + 0x10);
  func_0x00010007e5d0(param_1 + 8);
  func_0x000104bd57fc();
  return unaff_x19;
}



/* Entry: 1080d82f4; end: 1080d82fb;  */

void FUN_1080d82f4(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010090c2d8(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x00010090c434();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1080d82fc; end: 1080d8403;  */

void FUN_1080d82fc(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010090c2d8();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x00010090c434();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1080d8404; end: 1080d840b;  */

void FUN_1080d8404(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010090c2d8(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    func_0x000104c62548();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1080d840c; end: 1080d843f;  */

void FUN_1080d840c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010090c2d8();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    func_0x000104c62548();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1080d8440; end: 1080d844b;  */

void FUN_1080d8440(void)

{
  _abort();
  func_0x0001080d8b0c();
  func_0x0001080d8470();
  return;
}



/* Entry: 1080d844c; end: 1080d849f;  */

void FUN_1080d844c(void)

{
  func_0x0001080d8b0c();
  func_0x0001080d8470();
  return;
}



/* Entry: 1080d84a0; end: 1080d84a7;  */

void FUN_1080d84a0(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010090c2d8(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    func_0x00010b8e30ac();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1080d84a8; end: 1080d84db;  */

void FUN_1080d84a8(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010090c2d8();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    func_0x00010b8e30ac();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}


