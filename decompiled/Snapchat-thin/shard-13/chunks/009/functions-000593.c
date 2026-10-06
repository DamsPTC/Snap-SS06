/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ae92db4; end: 10ae92ddb;  */

void FUN_10ae92db4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x00010ae93278();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_110c8cda8;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10ae92ddc; end: 10ae92df3;  */

void FUN_10ae92ddc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110c8cda8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10ae92df4; end: 10ae92e3f;  */

void FUN_10ae92df4(undefined8 *param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  long *plVar5;
  undefined4 auStack_a0 [2];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 auStack_68 [2];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010ae932dc();
  (**(code **)(extraout_x8_00 + 0x40))();
  func_0x00010ae93400();
  plVar5 = param_1 + 299;
  do {
    lVar4 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x7b);
    uStack_58 = param_1[0x7d];
    uStack_60 = param_1[0x7c];
    uStack_50 = param_1[0x7e];
    param_1[0x7d] = 0;
    param_1[0x7c] = 0;
    param_1[0x7e] = 0;
    uStack_38 = param_1[0x81];
    uStack_40 = param_1[0x80];
    uStack_48 = param_1[0x7f];
    param_1[0x81] = 0;
    param_1[0x80] = 0;
    param_1[0x7f] = 0;
    plVar5 = (long *)param_1[8];
    auStack_68[0] = uVar1;
    (**(code **)*param_1)();
    func_0x00010ae93230();
    (**(code **)(extraout_x8 + 0x128))();
    if (param_2 == 0) {
      uStack_90 = uStack_58;
      uStack_98 = uStack_60;
      uStack_88 = uStack_50;
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_78 = uStack_40;
      uStack_80 = uStack_48;
      uStack_70 = uStack_38;
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
      auStack_a0[0] = uVar1;
      (**(code **)(*plVar5 + 0x18))(plVar5,auStack_a0);
      func_0x00010ae93330();
    }
    else {
      (**(code **)(*plVar5 + 0x10))(plVar5,auStack_68);
    }
    func_0x000107c27cbc(auStack_68);
  }
  return;
}



/* Entry: 10ae92e40; end: 10ae92e4b;  */

undefined ** FUN_10ae92e40(void)

{
  return &PTR_DAT_110c8ce08;
}



/* Entry: 10ae92e4c; end: 10ae92e7b;  */

void FUN_10ae92e4c(undefined8 param_1)

{
  long extraout_x8;
  code *extraout_x8_00;
  
  func_0x00010ae93230();
  func_0x00010ae9331c(*(undefined8 *)(extraout_x8 + 0x10),param_1,&UNK_10f6d306d);
  (*extraout_x8_00)();
  return;
}



/* Entry: 10ae92e7c; end: 10ae92f6f;  */

undefined8 *
FUN_10ae92e7c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,int param_4,long param_5)

{
  long extraout_x8;
  code *extraout_x8_00;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  param_1[2] = &PTR_DAT_110c8ceb0;
  param_1[3] = param_3;
  *param_1 = &PTR_FUN_110c8ce28;
  param_1[1] = &PTR_FUN_110c8ce80;
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[7] = param_2[3];
  param_1[6] = uVar3;
  param_1[9] = uVar5;
  param_1[8] = uVar4;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  *(char *)(param_1 + 10) = (char)param_4;
  func_0x000107c27cd0(param_1 + 0xb);
  FUN_10ae91fa0(param_1 + 0x34);
  func_0x000107c27ccc(param_1 + 0x61);
  func_0x000107c27cd4(param_1 + 0x96);
  if (param_4 == 0) {
    if (param_5 != 0) {
      func_0x00010ae93230();
      func_0x00010ae9331c(*(undefined8 *)(extraout_x8 + 0x10));
      (*extraout_x8_00)();
    }
  }
  else {
    FUN_10ae92f70(param_1,param_5);
  }
  return param_1;
}



/* Entry: 10ae92f70; end: 10ae92fd7;  */

void FUN_10ae92f70(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x00010ae93364();
  lVar2 = *(long *)(param_1 + 0x18);
  lVar1 = lVar2 + 0xb8;
  func_0x000107c27cc8();
  *(undefined1 *)(unaff_x19 + 0x330) = 0;
  *(undefined1 *)(unaff_x19 + 0x311) = 1;
  *(int *)(unaff_x19 + 0x314) = (int)lVar2;
  *(long *)(unaff_x19 + 800) = lVar1;
  if ((*(byte *)(*(long *)(unaff_x19 + 0x18) + 0x150) & 1) != 0) {
    return;
  }
  plVar3 = *(long **)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x388) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010ae933d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x10))(plVar3,unaff_x19 + 0x308,(undefined8 *)(unaff_x19 + 0x20));
  return;
}



/* Entry: 10ae92fd8; end: 10ae92fdf;  */

long FUN_10ae92fd8(long param_1)

{
  func_0x000104c01188(param_1 + 0x4b0);
  func_0x000104c01224(param_1 + 0x308);
  FUN_10ae9203c(param_1 + 0x1a0);
  func_0x000104c011f4(param_1 + 0x58);
  return param_1;
}



/* Entry: 10ae92fe0; end: 10ae93037;  */

void FUN_10ae92fe0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  code *extraout_x8_00;
  long unaff_x19;
  undefined8 unaff_x20;
  
  if (*(char *)(param_1 + 0x50) == '\x01') {
    func_0x00010ae93230();
    func_0x00010ae9331c(*(undefined8 *)(extraout_x8 + 0x10));
    (*extraout_x8_00)();
  }
  *(undefined1 *)(param_1 + 0x50) = 1;
  func_0x00010ae93364(param_1,param_2);
  lVar2 = *(long *)(param_1 + 0x18);
  lVar1 = lVar2 + 0xb8;
  func_0x000107c27cc8();
  *(undefined1 *)(unaff_x19 + 0x330) = 0;
  *(undefined1 *)(unaff_x19 + 0x311) = 1;
  *(int *)(unaff_x19 + 0x314) = (int)lVar2;
  *(long *)(unaff_x19 + 800) = lVar1;
  if ((*(byte *)(*(long *)(unaff_x19 + 0x18) + 0x150) & 1) != 0) {
    return;
  }
  plVar3 = *(long **)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x388) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010ae933d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x10))(plVar3,unaff_x19 + 0x308,(undefined8 *)(unaff_x19 + 0x20));
  return;
}



/* Entry: 10ae93038; end: 10ae930cf;  */

void FUN_10ae93038(long param_1)

{
  long *plVar1;
  code *extraout_x8;
  char *pcVar2;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x00010ae93364();
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    func_0x00010ae9328c(uRam0000000113815c70);
    func_0x00010ae9331c();
    (*extraout_x8)();
  }
  pcVar2 = *(char **)(unaff_x19 + 0x18);
  if (*pcVar2 == '\x01') {
    func_0x00010ae9328c(uRam0000000113815c70);
    func_0x00010ae9331c();
    (*extraout_x8_00)();
    pcVar2 = *(char **)(unaff_x19 + 0x18);
  }
  plVar1 = *(long **)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x78) = unaff_x20;
  func_0x00010ae933e8(pcVar2);
  *(undefined8 *)(unaff_x19 + 0x68) = extraout_x8_01;
                    /* WARNING: Could not recover jumptable at 0x00010ae933d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))();
  return;
}



/* Entry: 10ae930d0; end: 10ae931a7;  */

void FUN_10ae930d0(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  code *extraout_x8;
  ulong uVar1;
  code *extraout_x8_00;
  code *extraout_x8_01;
  int aiStack_78 [14];
  
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    func_0x00010ae9328c(uRam0000000113815c70);
    func_0x00010ae9331c();
    (*extraout_x8)();
  }
  *(undefined8 *)(param_1 + 0x388) = param_4;
  uVar1 = param_3;
  if ((param_3 >> 0x20 & 1) != 0) {
    uVar1 = param_3 | 1;
    *(undefined1 *)(param_1 + 0x379) = 1;
  }
  func_0x000104c55b2c(aiStack_78,param_1 + 0x338,param_2,
                      param_3 & 0xffffffff00000000 | uVar1 & 0xffffffff);
  func_0x00010ae93388();
  if (aiStack_78[0] != 0) {
    func_0x00010ae9328c(uRam0000000113815c70);
    func_0x00010ae9331c();
    (*extraout_x8_00)();
  }
  func_0x00010ae9328c(*(undefined8 *)(param_1 + 0x20));
  (*extraout_x8_01)();
  return;
}



/* Entry: 10ae931a8; end: 10ae931df;  */

long FUN_10ae931a8(long param_1)

{
  func_0x000104c01188(param_1 + 0x4a8);
  func_0x000104c01224(param_1 + 0x300);
  FUN_10ae9203c(param_1 + 0x198);
  func_0x000104c011f4(param_1 + 0x50);
  return param_1 + -8;
}



/* Entry: 10ae931e0; end: 10ae9321b;  */

long FUN_10ae931e0(long param_1)

{
  func_0x000104c01188(param_1 + 0x4b0);
  func_0x000104c01224(param_1 + 0x308);
  FUN_10ae9203c(param_1 + 0x1a0);
  func_0x000104c011f4(param_1 + 0x58);
  return param_1;
}



/* Entry: 10ae9321c; end: 10ae9340b;  */

void FUN_10ae9321c(void)

{
  return;
}



/* Entry: 10ae9340c; end: 10ae93413; -[SCLensProcessingLaunchDataServices sessionDataStore] */

undefined8 FUN_10ae9340c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10ae93414; end: 10ae9341b; -[SCLensProcessingLaunchDataServices postCaptureEntryPointTracker] */

undefined8 FUN_10ae93414(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10ae9341c; end: 10ae93463; -[SCLensProcessingLaunchDataServices .cxx_destruct] */

void FUN_10ae9341c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10ae93464; end: 10ae9352f; -[SCLensMetadataCentralizedMemoryCache initWithConfigProvider:nextCache:] */

undefined1 *
FUN_10ae93464(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112701520;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10ae93530; end: 10ae93607; -[SCLensMetadataCentralizedMemoryCache cachedLensMetadataForLensId:namespaces:mainNamespace:] */

void FUN_10ae93530(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010be4b400(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bf272e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar1 != 0) {
      func_0x00010bdc73c0(param_1,param_2,lVar1,param_5);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10ae93608; end: 10ae939ab; -[SCLensMetadataCentralizedMemoryCache cachedLensMetadataArrayForLensIds:namespaces:mainNamespace:] */

void FUN_10ae93608(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_3;
  func_0x00010bf529e0();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puVar9 = PTR____NSArray0__struct_11034ab48;
  if (puVar1 != (undefined *)0x0) {
    func_0x00010bf529e0(param_3);
    func_0x00010bf71fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    puVar1 = param_3;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    while (puVar1 != (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        lVar4 = param_1;
        func_0x00010be4b400();
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 != 0) {
          func_0x00010c1d0640(puVar2);
          func_0x00010c12d360(puVar3);
        }
        _objc_release(lVar4);
        puVar9 = puVar9 + 1;
      } while (puVar1 != puVar9);
      puVar1 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    puVar1 = puVar3;
    func_0x00010bf529e0();
    if (puVar1 != (undefined *)0x0) {
      lVar5 = *(long *)(param_1 + 0x18);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar3;
      func_0x00010bf00560(puVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf27280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_release(lVar5);
      _objc_retain(lVar6);
      lVar5 = lVar6;
      func_0x00010bf52a60();
      lVar4 = lRam0000000000000000;
      while (lVar5 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar4) {
            _objc_enumerationMutation(lVar6);
          }
          lVar11 = *(long *)(lVar10 * 8);
          lVar7 = lVar11;
          func_0x00010c094540();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar7 != 0) {
            func_0x00010bdc73c0(param_1);
            func_0x00010c094540(lVar11);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar2);
            _objc_release(lVar11);
          }
          lVar10 = lVar10 + 1;
        } while (lVar5 != lVar10);
        lVar5 = lVar6;
        func_0x00010bf52a60();
      }
      _objc_release(lVar6);
      _objc_release(lVar6);
    }
    _objc_retain(puVar2);
    puVar9 = param_3;
    func_0x00010bf43280(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 10ae939ac; end: 10ae939b7;  */

void FUN_10ae939ac(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 10ae939b8; end: 10ae93a37; -[SCLensMetadataCentralizedMemoryCache addLensMetadata:namespaceName:] */

void FUN_10ae939b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bdc73c0(param_1,param_2,param_3,param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef97e0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10ae93a38; end: 10ae93ab7; -[SCLensMetadataCentralizedMemoryCache addLensMetadataArray:namespaceName:] */

void FUN_10ae93a38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bdc73a0(param_1,param_2,param_3,param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9820();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10ae93ab8; end: 10ae93bab; -[SCLensMetadataCentralizedMemoryCache clearMemory] */

void FUN_10ae93ab8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined8 uStack_360;
  long lStack_358;
  long *plStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined1 auStack_318 [128];
  long lStack_298;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_1f8 [128];
  long lStack_178;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar3 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = auStack_c8;
  lVar10 = lVar1;
  func_0x00010bf52a60();
  if (lVar10 != 0) {
    lVar7 = *plStack_100;
    do {
      lVar8 = 0;
      do {
        if (*plStack_100 != lVar7) {
          _objc_enumerationMutation(lVar1);
        }
        func_0x00010c12adc0(*(undefined8 *)(lStack_108 + lVar8 * 8));
        lVar8 = lVar8 + 1;
      } while (lVar10 != lVar8);
      puVar9 = auStack_c8;
      lVar10 = lVar1;
      puVar3 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar10 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = &uStack_240;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar3);
  _objc_retain(puVar9);
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  _objc_retain(puVar9);
  puVar6 = auStack_1f8;
  puVar2 = puVar9;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    lVar10 = *plStack_230;
    do {
      puVar11 = (undefined1 *)0x0;
      do {
        if (*plStack_230 != lVar10) {
          _objc_enumerationMutation(puVar9);
        }
        lVar7 = *(long *)(lVar1 + 0x10);
        func_0x00010c0e00e0(lVar7,param_2,*(undefined8 *)(lStack_238 + (long)puVar11 * 8));
        _objc_retainAutoreleasedReturnValue();
        if (lVar7 != 0) {
          lVar8 = lVar7;
          puVar4 = puVar3;
          func_0x00010c0dff20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar7);
          if (lVar8 != 0) goto LAB_10ae93cb8;
        }
        puVar11 = puVar11 + 1;
      } while (puVar2 != puVar11);
      puVar6 = auStack_1f8;
      puVar2 = puVar9;
      puVar4 = &uStack_240;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined1 *)0x0);
  }
  lVar8 = 0;
LAB_10ae93cb8:
  _objc_release(puVar9);
  _objc_release(puVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
    return;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_360;
  lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  _objc_retain(puVar6);
  lStack_358 = 0;
  uStack_360 = 0;
  uStack_348 = 0;
  plStack_350 = (long *)0x0;
  uStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  puVar9 = auStack_318;
  puVar2 = (undefined1 *)puVar4;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    lVar10 = *plStack_350;
    do {
      puVar9 = (undefined1 *)0x0;
      do {
        if (*plStack_350 != lVar10) {
          _objc_enumerationMutation(puVar4);
        }
        func_0x00010bdc73c0(puVar3,param_2,*(undefined8 *)(lStack_358 + (long)puVar9 * 8),puVar6);
        puVar9 = puVar9 + 1;
      } while (puVar2 != puVar9);
      puVar9 = auStack_318;
      puVar2 = (undefined1 *)puVar4;
      puVar5 = &uStack_360;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release(puVar6);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  func_0x00010bdd7820(puVar4,param_2,puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = (undefined1 *)puVar5;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar9 != (undefined1 *)0x0) {
    puVar9 = (undefined1 *)puVar5;
    func_0x00010c094540(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar4,param_2,puVar5,puVar9);
    _objc_release(puVar9);
  }
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 10ae93bac; end: 10ae93d0f; -[SCLensMetadataCentralizedMemoryCache _lensMetadataForLensId:namespaces:] */

void FUN_10ae93bac(long param_1,undefined8 param_2,undefined1 *param_3,long param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_208 [128];
  long lStack_188;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar3 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_4);
  puVar4 = auStack_e8;
  lVar7 = param_4;
  func_0x00010bf52a60();
  if (lVar7 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_4);
        }
        lVar1 = *(long *)(param_1 + 0x10);
        func_0x00010c0e00e0(lVar1,param_2,*(undefined8 *)(lStack_128 + lVar10 * 8));
        _objc_retainAutoreleasedReturnValue();
        if (lVar1 != 0) {
          lVar6 = lVar1;
          puVar3 = (undefined8 *)param_3;
          func_0x00010c0dff20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar1);
          if (lVar6 != 0) goto LAB_10ae93cb8;
        }
        lVar10 = lVar10 + 1;
      } while (lVar7 != lVar10);
      puVar4 = auStack_e8;
      lVar7 = param_4;
      puVar3 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar7 != 0);
  }
  lVar6 = 0;
LAB_10ae93cb8:
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
    return;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_250;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar3);
  _objc_retain(puVar4);
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  puVar8 = auStack_208;
  puVar2 = (undefined1 *)puVar3;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    lVar7 = *plStack_240;
    do {
      puVar8 = (undefined1 *)0x0;
      do {
        if (*plStack_240 != lVar7) {
          _objc_enumerationMutation(puVar3);
        }
        func_0x00010bdc73c0(param_3,param_2,*(undefined8 *)(lStack_248 + (long)puVar8 * 8),puVar4);
        puVar8 = puVar8 + 1;
      } while (puVar2 != puVar8);
      puVar8 = auStack_208;
      puVar2 = (undefined1 *)puVar3;
      puVar5 = &uStack_250;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  func_0x00010bdd7820(puVar3,param_2,puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = (undefined1 *)puVar5;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar4 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)puVar5;
    func_0x00010c094540(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar3,param_2,puVar5,puVar4);
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 10ae93d10; end: 10ae93e27; -[SCLensMetadataCentralizedMemoryCache _addLensMetadataArrayIntoCache:namespaceName:] */

void FUN_10ae93d10(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar3 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puVar2 = auStack_d8;
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar4 = *plStack_110;
    do {
      lVar5 = 0;
      do {
        if (*plStack_110 != lVar4) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010bdc73c0(param_1,param_2,*(undefined8 *)(lStack_118 + lVar5 * 8),param_4);
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      puVar2 = auStack_d8;
      lVar1 = param_3;
      puVar3 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  func_0x00010bdd7820(param_3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = (undefined1 *)puVar3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)puVar3;
    func_0x00010c094540(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(param_3,param_2,puVar3,puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10ae93e28; end: 10ae93ec7; -[SCLensMetadataCentralizedMemoryCache _addLensMetadataIntoCache:namespaceName:] */

void FUN_10ae93e28(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010bdd7820(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c094540(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(param_1,param_2,param_3,lVar1);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ae93ec8; end: 10ae93f73; -[SCLensMetadataCentralizedMemoryCache _cacheForNamespace:] */

void FUN_10ae93ec8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = *(undefined **)(param_1 + 0x10);
  func_0x00010c0e00e0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0d5260(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b7800;
    _objc_opt_new(PTR_PTR_1126b7800);
    uVar3 = uVar2;
    func_0x00010c0ca100(uVar2);
    func_0x00010c184700(puVar1,param_2,(long)(int)uVar3);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10),param_2,puVar1,param_3);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10ae93f74; end: 10ae93faf; -[SCLensMetadataCentralizedMemoryCache .cxx_destruct] */

void FUN_10ae93f74(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10ae93fb0; end: 10ae94053; -[SCLensMetadataCompositeCache initWithCacheRetrievers:performer:] */

undefined1 *
FUN_10ae93fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112701528;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10ae94054; end: 10ae94057; -[SCLensMetadataCompositeCache cachedLensMetadataArrayWithIds:] */

void FUN_10ae94054(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e0cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_observeLensMetadatasForIds__112615d50);
  return;
}



/* Entry: 10ae94058; end: 10ae94127; -[SCLensMetadataCompositeCache lensMetadataWithId:] */

void FUN_10ae94058(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10ae94128;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_3;
  lStack_40 = param_1;
  puStack_38 = puVar1;
  _objc_retain();
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar3,param_2,&puStack_68);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_38);
  _objc_release(uStack_48);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10ae94128; end: 10ae941f3;  */

void FUN_10ae94128(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126de268;
  func_0x00010bdd81a0(PTR_PTR_1126de268,param_2,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(*(long *)(param_1 + 0x28) + 8));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126de270;
  if (puVar1 == (undefined *)0x0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010c092620(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf993a0(puVar3,param_2,uVar4,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    func_0x00010c2615c0(PTR_PTR_1126de270,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x30),param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ae941f4; end: 10ae9433b; -[SCLensMetadataCompositeCache lensMetadataArrayWithIds:] */

void FUN_10ae941f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10ae942c4;
  puStack_50 = &UNK_110848ba8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  puStack_38 = puVar1;
  _objc_retain();
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar3,param_2,&puStack_68);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_38);
  _objc_release(uStack_40);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10ae9433c; end: 10ae9441f; -[SCLensMetadataCompositeCache observeLensMetadatasForIds:] */

void FUN_10ae9433c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar3);
  puVar1 = PTR_PTR_1126ae6b8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10ae94420;
  puStack_48 = &UNK_11084f340;
  uStack_40 = uVar3;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(uVar3);
  func_0x00010bf54280(puVar1,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25ffc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10ae94420; end: 10ae944e7;  */

void FUN_10ae94420(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126de268;
  _objc_retain(param_2);
  func_0x00010be96d80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126de268;
  func_0x00010bdd7d00(PTR_PTR_1126de268);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(param_2);
  func_0x00010bf436e0(param_2);
  _objc_release(param_2);
  puVar3 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10ae944e8; end: 10ae94637; +[SCLensMetadataCompositeCache _cachedLensMetadataCacheResultForLensId:cacheRetrievers:] */

void FUN_10ae944e8(undefined8 param_1,undefined8 param_2,undefined1 *param_3,long param_4)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long unaff_x21;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined1 *puStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  long lStack_148;
  long lStack_140;
  undefined1 *puStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar3 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_4);
  puVar4 = auStack_d8;
  lVar7 = param_4;
  func_0x00010bf52a60();
  if (lVar7 != 0) {
    lVar6 = *plStack_110;
    unaff_x21 = lVar7;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(param_4);
        }
        puVar1 = *(undefined1 **)(lStack_118 + lVar7 * 8);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar1;
        puVar3 = (undefined8 *)param_3;
        func_0x00010bf272c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        if (puVar5 != (undefined1 *)0x0) goto LAB_10ae945e4;
        lVar7 = lVar7 + 1;
      } while (unaff_x21 != lVar7);
      puVar4 = auStack_d8;
      unaff_x21 = param_4;
      puVar3 = &uStack_120;
      func_0x00010bf52a60();
    } while (unaff_x21 != 0);
  }
  puVar5 = (undefined1 *)0x0;
LAB_10ae945e4:
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_128 = FUN_10ae94638;
    puStack_150 = puVar5;
    lStack_148 = unaff_x21;
    lStack_140 = param_4;
    puStack_138 = param_3;
    puStack_130 = &stack0xfffffffffffffff0;
    _objc_retain(puVar3);
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_retain(puVar4);
    func_0x00010c092620();
    _objc_retainAutoreleasedReturnValue();
    puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_178 = 0xc2000000;
    uStack_170 = 0x10ae94714;
    puStack_168 = &UNK_110c8cf48;
    puStack_160 = (undefined1 *)puVar3;
    puStack_158 = puVar2;
    _objc_retain();
    _objc_retain(puVar3);
    puVar5 = puVar4;
    func_0x00010c0b8600(puVar4,param_2,&puStack_180);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puStack_158);
    _objc_release(puStack_160);
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10ae94638; end: 10ae947a7; +[SCLensMetadataCompositeCache _cacheResultsFromCacheResultMap:lensIds:] */

void FUN_10ae94638(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_retain(param_4);
  func_0x00010c092620();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x10ae94714;
  puStack_48 = &UNK_110c8cf48;
  uStack_40 = param_3;
  puStack_38 = puVar1;
  _objc_retain();
  _objc_retain(param_3);
  uVar2 = param_4;
  func_0x00010c0b8600(param_4,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puStack_38);
  _objc_release(uStack_40);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10ae947a8; end: 10ae94a93; +[SCLensMetadataCompositeCache _retrievedCacheResultsFromCacheRetrievers:lensIds:] */

void FUN_10ae947a8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf529e0(param_4);
  func_0x00010bf71fe0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar5 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      lVar6 = *(long *)(lVar12 * 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar4;
      func_0x00010bf00560(puVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar6;
      func_0x00010bf27260();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(lVar6);
      _objc_retain(lVar8);
      lVar6 = lVar8;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (lVar6 != 0) {
        lVar13 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar8);
          }
          uVar14 = *(undefined8 *)(lVar13 * 8);
          uVar9 = uVar14;
          func_0x00010c08fb40(uVar14);
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar9;
          func_0x00010c094540();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          _objc_release(uVar10);
          _objc_release(uVar9);
          func_0x00010c08fb40(uVar14);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar14;
          func_0x00010c094540();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12d360(puVar4);
          _objc_release(uVar9);
          _objc_release(uVar14);
          lVar13 = lVar13 + 1;
        } while (lVar6 != lVar13);
        lVar6 = lVar8;
        func_0x00010bf52a60();
      }
      _objc_release(lVar8);
      _objc_release(lVar8);
      lVar12 = lVar12 + 1;
    } while (lVar12 != lVar5);
    lVar5 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 10ae94a94; end: 10ae94ac3; -[SCLensMetadataCompositeCache .cxx_destruct] */

void FUN_10ae94a94(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10ae94ac4; end: 10ae94b83; -[SCLensLoggingCentralizedMetadataStore initWithCentralizedDataStore:timeProvider:] */

undefined1 *
FUN_10ae94ac4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112701530;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10ae94b84; end: 10ae94bab; -[SCLensLoggingCentralizedMetadataStore retrievalObservable] */

void FUN_10ae94b84(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10ae94bac; end: 10ae94c17; -[SCLensLoggingCentralizedMetadataStore cachedLensMetadataArrayWithIds:] */

void FUN_10ae94bac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf272a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10ae94c18; end: 10ae94e8b; -[SCLensLoggingCentralizedMetadataStore lensMetadataWithId:featureAttribution:] */

void FUN_10ae94c18(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  _objc_retain(uVar3);
  func_0x00010bf5fd80(uVar3);
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  _objc_retain(uVar4);
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0952c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x10ae94d60;
  puStack_78 = &UNK_110c8cf78;
  uStack_70 = uVar3;
  uStack_68 = param_4;
  uStack_60 = uVar4;
  uStack_58 = param_1;
  _objc_retain(uVar4);
  _objc_retain(param_4);
  _objc_retain(uVar3);
  uVar1 = uVar2;
  func_0x00010c0b8600(uVar2,param_3,&puStack_90);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10ae94e8c; end: 10ae94fbf; -[SCLensLoggingCentralizedMetadataStore lensMetadataArrayWithIds:featureAttribution:] */

void FUN_10ae94e8c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  _objc_retain(uVar3);
  _objc_retain(param_4);
  func_0x00010bf5fd80(uVar3);
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  _objc_retain(uVar4);
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c094fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10ae94fc0;
  puStack_70 = &UNK_1108ed5e0;
  uStack_68 = uVar3;
  uStack_60 = uVar4;
  uStack_58 = param_1;
  _objc_retain(uVar4);
  _objc_retain(uVar3);
  uVar1 = uVar2;
  func_0x00010c0b8600(uVar2,param_3,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10ae94fc0; end: 10ae95013;  */

void FUN_10ae94fc0(undefined8 param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf5fd80(*(undefined8 *)(param_2 + 0x20));
  func_0x00010be57de0(*(undefined8 *)(param_2 + 0x30),param_1,PTR_PTR_1126de280);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10ae95014; end: 10ae952cb; +[SCLensLoggingCentralizedMetadataStore _logResults:subject:startTime:endTime:method:] */

void FUN_10ae95014(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_128 = &uStack_130;
  uStack_130 = 0;
  uStack_120 = 0x2020000000;
  uStack_118 = 0;
  puStack_148 = &uStack_150;
  uStack_150 = 0;
  uStack_140 = 0x2020000000;
  uStack_138 = 0;
  puStack_168 = &uStack_170;
  uStack_170 = 0;
  uStack_160 = 0x2020000000;
  uStack_158 = 1;
  _objc_retain(param_5);
  lVar4 = param_5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_5);
      }
      func_0x00010c0c0760(*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar4 != lVar5);
    lVar4 = param_5;
    func_0x00010bf52a60();
  }
  _objc_release(param_5);
  puVar2 = PTR_PTR_1126de288;
  _objc_alloc();
  func_0x00010c02bca0(param_2 - param_1);
  puVar3 = puVar2;
  func_0x00010c0d9840(param_6);
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_170,8);
  __Block_object_dispose(&uStack_150,8);
  __Block_object_dispose(&uStack_130,8);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_170,8);
  __Block_object_dispose(&uStack_150,8);
  __Block_object_dispose(&uStack_130,8);
  __Unwind_Resume();
  lVar4 = *(long *)(*(long *)(param_5 + 0x20) + 8);
  *(long *)(lVar4 + 0x18) = *(long *)(lVar4 + 0x18) + 1;
  if (puVar3 == (undefined *)0x1) {
    *(undefined1 *)(*(long *)(*(long *)(param_5 + 0x28) + 8) + 0x18) = 0;
  }
  return;
}



/* Entry: 10ae952cc; end: 10ae95327;  */

void FUN_10ae952cc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + 1;
  if (param_3 == 1) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0;
  }
  return;
}



/* Entry: 10ae95328; end: 10ae95363; -[SCLensLoggingCentralizedMetadataStore .cxx_destruct] */

void FUN_10ae95328(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10ae95364; end: 10ae953d7; -[SCLensMetadataRetrievalLogger initWithGraphene:] */

undefined1 * FUN_10ae95364(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112701538;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10ae953d8; end: 10ae95453; -[SCLensMetadataRetrievalLogger logLensMetadataRetrievedFromAllSourcesWithMethod:fromCache:retrievedCount:missedCount:] */

/* WARNING: Possible PIC construction at 0x00010ae95414: Changing call to branch */

void FUN_10ae953d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined **ppuVar1;
  
  if (param_5 == 0) {
    if (param_6 == 0) {
      return;
    }
    ppuVar1 = &PTR____CFConstantStringClassReference_110f2edd8;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f2edb8;
    param_6 = param_5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be553b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logLensMetadataRetrievedAllWith_112572e88,param_3,param_4,ppuVar1,
             param_6);
  return;
}



/* Entry: 10ae95454; end: 10ae954ff; -[SCLensMetadataRetrievalLogger logLensMetadataRetrievedFromAllSourcesLatency:method:] */

void FUN_10ae95454(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126bb928;
  func_0x00010c0cc720(PTR_PTR_1126bb928);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126de290;
  func_0x00010be602c0(PTR_PTR_1126de290,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_3,&PTR____CFConstantStringClassReference_110dc1798,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010befc000(param_1,*(undefined8 *)(param_2 + 8),param_3,puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10ae95500; end: 10ae95587; -[SCLensMetadataRetrievalLogger logLensMetadataRetrievedFromSource:namespaceName:retrievedCount:missedCount:] */

void FUN_10ae95500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  _objc_retain(param_4);
  if (param_5 != 0) {
    func_0x00010be553c0(param_1,param_2,param_3,param_4,param_5,
                        &PTR____CFConstantStringClassReference_110f2edb8);
  }
  if (param_6 != 0) {
    func_0x00010be553c0(param_1,param_2,param_3,param_4,param_6,
                        &PTR____CFConstantStringClassReference_110f2edd8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10ae95588; end: 10ae9562b; -[SCLensMetadataRetrievalLogger logLensMetadataRetrievalLatency:source:namespaceName:] */

void FUN_10ae95588(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bb928;
  _objc_retain(param_5);
  func_0x00010c0cc740(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126de290;
  func_0x00010be60360(PTR_PTR_1126de290,param_3,puVar1,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(puVar1);
  func_0x00010befc000(param_1,*(undefined8 *)(param_2 + 8),param_3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10ae9562c; end: 10ae956c3; -[SCLensMetadataRetrievalLogger logLensMetadataCacheCount:namespaceName:] */

void FUN_10ae9562c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bb928;
  _objc_retain(param_4);
  func_0x00010c0cc180(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
  func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10ae956c4; end: 10ae9575b; -[SCLensMetadataRetrievalLogger logLensMetadataExpiredCount:namespaceName:] */

void FUN_10ae956c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bb928;
  _objc_retain(param_4);
  func_0x00010c0cc1a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
  func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10ae9575c; end: 10ae9589f; -[SCLensMetadataRetrievalLogger _logLensMetadataRetrievedAllWithMethod:isFromCache:event:count:] */

void FUN_10ae9575c(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  ,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR_PTR_1126bb928;
  _objc_retain(param_5);
  func_0x00010c0cc700(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126de290;
  func_0x00010be602c0(PTR_PTR_1126de290,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110daee38,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(puVar2);
  puVar2 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110dc1798,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  puVar4 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110de10b8,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar4,param_6);
  func_0x00010bfec320(*(undefined8 *)(param_1 + 8),param_2,puVar4,1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10ae958a0; end: 10ae95993; -[SCLensMetadataRetrievalLogger _logLensMetadataRetrievedFromSource:namespaceName:count:event:] */

void FUN_10ae958a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bb928;
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x00010c0cc6e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126de290;
  func_0x00010be60360(PTR_PTR_1126de290,param_2,puVar2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
  func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_5);
  func_0x00010bfec320(*(undefined8 *)(param_1 + 8),param_2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ae95994; end: 10ae95a53; +[SCLensMetadataRetrievalLogger _metric:source:namespaceName:] */

void FUN_10ae95994(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126de290;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bebe6c0(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110dae8d8,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010c2ac460(uVar2,param_2,&PTR____CFConstantStringClassReference_110f2edf8,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10ae95a54; end: 10ae95a73; +[SCLensMetadataRetrievalLogger _sourceStringFromSource:] */

undefined * FUN_10ae95a54(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 3) {
    return (&PTR_PTR_110c8cfd8)[param_3];
  }
  return (undefined *)0x0;
}



/* Entry: 10ae95a74; end: 10ae95a9f; +[SCLensMetadataRetrievalLogger _methodStringFromMethod:] */

undefined ** FUN_10ae95a74(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f2ee38;
  if (param_3 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f2ee18;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110e57c98;
  if (param_3 != 2) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10ae95aa0; end: 10ae95aab; -[SCLensMetadataRetrievalLogger .cxx_destruct] */

void FUN_10ae95aa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10ae95aac; end: 10ae95b6b; -[SCLensRetrievalLogManager initWithLensMetadataRetrievalLogger:performer:] */

undefined1 *
FUN_10ae95aac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112701540;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10ae95b6c; end: 10ae95c77; -[SCLensRetrievalLogManager observeLensMetadataRetrievalEvents:] */

void FUN_10ae95b6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010c0e0ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 10ae95c78; end: 10ae95cbf;  */

void FUN_10ae95c78(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be55380();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ae95cc0; end: 10ae95dcb; -[SCLensRetrievalLogManager observeLensMetadataRetrievalEventsFromSource:] */

void FUN_10ae95cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010c0e0ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 10ae95dcc; end: 10ae95e13;  */

void FUN_10ae95dcc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be55360();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ae95e14; end: 10ae95f1f; -[SCLensRetrievalLogManager observeLensMetadataCacheSizeEvents:] */

void FUN_10ae95e14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010c0e0ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 10ae95f20; end: 10ae95f67;  */

void FUN_10ae95f20(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be50fe0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ae95f68; end: 10ae9601f; -[SCLensRetrievalLogManager _logLensMetadataRetrieved:] */

void FUN_10ae95f68(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  _objc_retain(param_4);
  func_0x00010c0cc940(param_4);
  func_0x00010c0739e0(param_4);
  func_0x00010c13f0a0(param_4);
  func_0x00010c0ceaa0(param_4);
  func_0x00010c0a96e0(uVar2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010c08ad40(param_4);
  uVar2 = param_4;
  func_0x00010c0cc940(param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010c0a96d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,uVar1,PTR_s_logLensMetadataRetrievedFromAllS_112607fc0,uVar2);
  return;
}



/* Entry: 10ae96020; end: 10ae96107; -[SCLensRetrievalLogManager _logLensMetadataFromSourceRetrieved:] */

void FUN_10ae96020(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_2 + 8);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c247520(param_4);
  uVar2 = param_4;
  func_0x00010c0d5440(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c13f0a0(param_4);
  uVar3 = param_4;
  func_0x00010c0ceaa0(param_4);
  func_0x00010c0a9700(uVar5,param_3,uVar1,uVar2,uVar4,uVar3);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_2 + 8);
  func_0x00010c08ad40(param_4);
  uVar1 = param_4;
  func_0x00010c247520(param_4);
  uVar2 = param_4;
  func_0x00010c0d5440(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c0a96a0(param_1,uVar4,param_3,uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10ae96108; end: 10ae961bb; -[SCLensRetrievalLogManager _logCacheSize:] */

void FUN_10ae96108(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2762c0(param_3);
  uVar2 = param_3;
  func_0x00010c0d5440(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a9660(uVar3,param_2,uVar1,uVar2);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar1 = param_3;
  func_0x00010bf9c9a0(param_3);
  uVar2 = param_3;
  func_0x00010c0d5440(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0a9680(uVar3,param_2,uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10ae961bc; end: 10ae961f7; -[SCLensRetrievalLogManager .cxx_destruct] */

void FUN_10ae961bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10ae961f8; end: 10ae96217;  */

void FUN_10ae961f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf99250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSError_1126ae858,PTR_s_errorWithDomain_code_userInfo__1125c3e38,
             &PTR____CFConstantStringClassReference_110f5d9d8,0xffffffffffffffff,0);
  return;
}



/* Entry: 10ae96218; end: 10ae962f7;  */

void FUN_10ae96218(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    uStack_48 = *(undefined8 *)PTR__NSUnderlyingErrorKey_110345660;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_40 = param_3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_40,&uStack_48,1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110f5d9d8,0xfffffffffffffffe,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    _objc_alloc(PTR_PTR_1126de2a8);
    func_0x00010bffa9a0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10ae962f8; end: 10ae9632b; +[SCCentralizedStoreConfigProvider _defaultNamespaceConfig] */

void FUN_10ae962f8(void)

{
  _objc_alloc(PTR_PTR_1126de2a8);
  func_0x00010bffa9a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10ae9632c; end: 10ae96337; -[SCCentralizedStoreConfigProvider .cxx_destruct] */

void FUN_10ae9632c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10ae96338; end: 10ae9640b; +[SCLensCachedDataRetrievalHelper retrieveCachedMetadataFromMetadataRetriever:lensId:] */

void FUN_10ae96338(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  func_0x00010bf272c0(param_3,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126de278;
  if (param_3 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010c092620(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf993a0(puVar2,param_2,param_4,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = param_3;
    func_0x00010c08fb40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2615e0(puVar2,param_2,puVar1,0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10ae9640c; end: 10ae966d7; +[SCLensCachedDataRetrievalHelper retrieveCachedMetadataArrayFromMetadataRetriever:lensIds:] */

void FUN_10ae9640c(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010bf27260(param_3,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010c092620();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_4);
  lVar3 = param_4;
  func_0x00010bf52a60(param_4,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar3 != 0) {
    puVar10 = (undefined *)0x0;
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(param_4);
        }
        uVar11 = *(undefined8 *)(lStack_128 + lVar9 * 8);
        puVar4 = param_3;
        func_0x00010bf529e0();
        if (puVar10 < puVar4) {
          puVar4 = param_3;
          func_0x00010c0dfd40(param_3,param_2,puVar10);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010c08fb40();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010c094540();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar11;
          func_0x00010c0720c0(uVar11,param_2,puVar6);
          _objc_release(puVar6);
          _objc_release(puVar5);
          puVar5 = PTR_PTR_1126de278;
          if ((int)uVar7 == 0) {
            func_0x00010bf993a0(PTR_PTR_1126de278,param_2,uVar11,puVar2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar1,param_2,puVar5);
            _objc_release(puVar5);
          }
          else {
            puVar6 = puVar4;
            func_0x00010c08fb40(puVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2615e0(puVar5,param_2,puVar6,0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar1,param_2,puVar5);
            _objc_release(puVar5);
            _objc_release(puVar6);
            puVar10 = puVar10 + 1;
          }
        }
        else {
          puVar4 = PTR_PTR_1126de278;
          func_0x00010bf993a0(PTR_PTR_1126de278,param_2,uVar11,puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1,param_2,puVar4);
        }
        _objc_release(puVar4);
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = param_4;
      func_0x00010bf52a60(param_4,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(param_4);
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_alloc(PTR_PTR_1126de2b0);
    func_0x00010c02dd20();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10ae966d8; end: 10ae96707;  */

void FUN_10ae966d8(void)

{
  _objc_alloc(PTR_PTR_1126de2b0);
  func_0x00010c02dd20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10ae96708; end: 10ae967a7;  */

void FUN_10ae96708(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126de290;
  _objc_alloc(PTR_PTR_1126de290);
  func_0x00010c018080();
  puVar2 = PTR_PTR_1126de2b8;
  _objc_alloc(PTR_PTR_1126de2b8);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0b3d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c024fc0(puVar2,param_2,puVar1,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10ae967a8; end: 10ae967af; -[SCLensCentralizedDataStoreFactory centralizedDataStoreForCustomNamespace:] */

void FUN_10ae967a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddc710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__centralizedDataStoreForCustomNa_112554b60,param_3,1);
  return;
}



/* Entry: 10ae967b0; end: 10ae967db;  */

void FUN_10ae967b0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be98dc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ae967dc; end: 10ae96873; -[SCLensCentralizedDataStoreFactory _saveDataOnDisk] */

void FUN_10ae967dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0680e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 10ae96874; end: 10ae969c3;  */

void FUN_10ae96874(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = *(long *)(param_1 + 0x20);
  _os_unfair_lock_lock(lVar7 + 0x70);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x40);
  _objc_retain(lVar6);
  lVar1 = lVar6;
  func_0x00010bf52a60(lVar6,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 != 0) {
    lVar8 = *plStack_110;
    do {
      lVar9 = 0;
      do {
        if (*plStack_110 != lVar8) {
          _objc_enumerationMutation(lVar6);
        }
        uVar2 = *(undefined8 *)(lStack_118 + lVar9 * 8);
        func_0x00010bfe6360();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14b4a0();
        _objc_release(uVar2);
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      lVar1 = lVar6;
      func_0x00010bf52a60(lVar6,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar6);
  lVar1 = lVar7 + 0x70;
  _os_unfair_lock_unlock();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(lVar7 + 0x70);
  __Unwind_Resume();
  puVar3 = PTR_PTR_1126de268;
  _objc_alloc(PTR_PTR_1126de268);
  uVar2 = *(undefined8 *)(lVar1 + 0x20);
  uVar4 = *(undefined8 *)(lVar1 + 0x28);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0680e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffa980(puVar3,param_2,uVar2,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10ae969c4; end: 10ae96a43;  */

void FUN_10ae969c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_PTR_1126de268;
  _objc_alloc(PTR_PTR_1126de268);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0680e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffa980(puVar2,param_2,uVar1,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10ae96a44; end: 10ae96b07;  */

void FUN_10ae96a44(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfa9040();
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126de2c0;
  _objc_alloc(PTR_PTR_1126de2c0);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0680e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffa960(puVar5,param_2,uVar3,uVar2,uVar1,uVar7,uVar4);
  _objc_release(uVar7);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10ae96b08; end: 10ae96bb3;  */

void FUN_10ae96b08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126de280;
  _objc_alloc(PTR_PTR_1126de280);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR_PTR_1126aeea8;
  _objc_opt_new(PTR_PTR_1126aeea8);
  func_0x00010bffd5c0(puVar1,param_2,uVar3,puVar2);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c13e140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0ca0(uVar3,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10ae96bb4; end: 10ae96d47;  */

void FUN_10ae96bb4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126b6868;
  _objc_alloc(PTR_PTR_1126b6868);
  func_0x00010c02dd60();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0cc7c0(uVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126de2c8;
  _objc_alloc(PTR_PTR_1126de2c8);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf26d60(uVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c1290a0(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0ca100(uVar6);
  puVar7 = PTR_PTR_1126aeea8;
  _objc_opt_new(PTR_PTR_1126aeea8);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c138020(uVar8);
  func_0x00010c02dd40((double)(int)uVar2,(double)(int)uVar5,puVar4,param_2,uVar3,uVar3,
                      (long)(int)uVar6,puVar7,uVar8);
  _objc_release(puVar7);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010c13e140(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0cc0(uVar2,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010bf26c60(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0c80(uVar2,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10ae96d48; end: 10ae96e43;  */

void FUN_10ae96d48(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b6868;
  _objc_alloc();
  func_0x00010c02dd60();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c15f740(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126de2d0;
  _objc_alloc();
  func_0x00010c02dd20();
  _objc_release(uVar4);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + 0x68,0);
  _objc_storeStrong(puVar1 + 0x60,0);
  _objc_storeStrong(puVar1 + 0x58,0);
  _objc_storeStrong(puVar1 + 0x50,0);
  _objc_storeStrong(puVar1 + 0x48,0);
  _objc_storeStrong(puVar1 + 0x40,0);
  _objc_storeStrong(puVar1 + 0x38,0);
  _objc_storeStrong(puVar1 + 0x30,0);
  _objc_storeStrong(puVar1 + 0x28,0);
  _objc_storeStrong(puVar1 + 0x20,0);
  _objc_storeStrong(puVar1 + 0x18,0);
  _objc_storeStrong(puVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + 8,0);
  return;
}



/* Entry: 10ae96e44; end: 10ae96ef7; -[SCLensCentralizedDataStoreFactory .cxx_destruct] */

void FUN_10ae96e44(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10ae96ef8; end: 10ae9732f; -[SCLensCentralizedDataStoreFactoryV2 initWithLensMetadataFetcher:scheduleServiceProvider:customNamespaceNames:additionalCacheNamespaces:applicationLifecycleEvents:lensDataConfig:graphene:docObjectContext:performerProvider:] */

undefined8 *
FUN_10ae96ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_80 = PTR_PTR_112701558;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[4];
    puVar1[4] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    if (param_6 == 0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c225c20();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 0xe) = 0;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_3);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_9);
    _objc_retain(param_11);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126de298;
    _objc_alloc();
    func_0x00010c0236a0();
    _objc_retain();
    uVar2 = puVar1[10];
    puVar1[10] = puVar4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_10);
    _objc_retain(puVar4);
    _objc_retain(param_11);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126ae720;
    _objc_retain();
    _objc_retain(puVar4);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_retain(puVar3);
    _objc_release(uVar2);
    uVar2 = puVar1[8];
    puVar1[8] = puVar5;
    _objc_release(uVar2);
    func_0x00010bec6ac0(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(param_11);
    _objc_release(puVar4);
    _objc_release(param_10);
    _objc_release(puVar4);
    _objc_release(param_11);
    _objc_release(param_9);
    _objc_release(param_3);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10ae97330; end: 10ae9735f;  */

void FUN_10ae97330(void)

{
  _objc_alloc(PTR_PTR_1126de2b0);
  func_0x00010c02dd20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10ae97360; end: 10ae973ff;  */

void FUN_10ae97360(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126de290;
  _objc_alloc(PTR_PTR_1126de290);
  func_0x00010c018080();
  puVar2 = PTR_PTR_1126de2b8;
  _objc_alloc(PTR_PTR_1126de2b8);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0b3d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c024fc0(puVar2,param_2,puVar1,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10ae97400; end: 10ae9752f;  */

void FUN_10ae97400(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar3 = PTR_PTR_1126de2d8;
  _objc_opt_new(PTR_PTR_1126de2d8);
  puVar4 = PTR_PTR_1126de2e0;
  _objc_alloc(PTR_PTR_1126de2e0);
  func_0x00010c023f40();
  puVar5 = PTR_PTR_1126de2e8;
  _objc_alloc(PTR_PTR_1126de2e8);
  func_0x00010c023f40();
  puVar6 = PTR_PTR_1126de2f0;
  _objc_alloc(PTR_PTR_1126de2f0);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar7 = PTR_PTR_1126aeea8;
  _objc_opt_new(PTR_PTR_1126aeea8);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c0680e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00dc40(puVar6,param_2,uVar1,puVar4,puVar5,uVar2,puVar7,1,1);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10ae97530; end: 10ae9755f;  */

void FUN_10ae97530(void)

{
  _objc_alloc(PTR_PTR_1126de2f8);
  func_0x00010c001440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10ae97560; end: 10ae975bb; -[SCLensCentralizedDataStoreFactoryV2 defaultCentralizedDataStore] */

void FUN_10ae97560(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c8c48;
  func_0x00010bf69d20(PTR_PTR_1126c8c48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bddc700(param_1,param_2,puVar1,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ae975bc; end: 10ae975c3; -[SCLensCentralizedDataStoreFactoryV2 centralizedDataStoreForCustomNamespace:] */

void FUN_10ae975bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddc710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__centralizedDataStoreForCustomNa_112554b60,param_3,1);
  return;
}



/* Entry: 10ae975c4; end: 10ae976cb; -[SCLensCentralizedDataStoreFactoryV2 _centralizedDataStoreForCustomNamespace:useCache:] */

void FUN_10ae975c4(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    puVar1 = PTR_PTR_1126c8c48;
    func_0x00010c0d5460();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf4b900();
    _objc_release(puVar1);
    if ((int)puVar2 != 0) {
      _os_unfair_lock_lock(param_1 + 0x70);
      lVar3 = *(long *)(param_1 + 0x30);
      func_0x00010c0e00e0(lVar3,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        if ((param_4 & 1) == 0) {
          lVar3 = *(long *)(param_1 + 0x38);
          _objc_retain(lVar3);
        }
        else {
          lVar3 = param_1;
          func_0x00010bdebe80(param_1,param_2,param_3);
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30),param_2,lVar3,param_3);
      }
      _os_unfair_lock_unlock(param_1 + 0x70);
      goto LAB_10ae97698;
    }
  }
  lVar3 = 0;
LAB_10ae97698:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10ae976cc; end: 10ae97a9f; -[SCLensCentralizedDataStoreFactoryV2 _createCentralizedDataStoreForCustomNamespace:] */

void FUN_10ae976cc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar9 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar9);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c0d5260(uVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar13);
  uVar10 = uVar2;
  func_0x00010bfebb80();
  if ((int)uVar10 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(long *)(param_1 + 0x18);
  }
  _objc_retain(lVar11);
  puVar3 = PTR_PTR_1126ae720;
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_10ae97aa0;
  puStack_b0 = &UNK_110c8d280;
  _objc_retain(uVar13);
  uStack_a8 = uVar13;
  _objc_retain(param_3);
  lStack_a0 = param_3;
  _objc_retain(lVar11);
  lStack_98 = lVar11;
  _objc_retain(uVar2);
  uStack_90 = uVar2;
  func_0x00010bf11fe0(puVar3,param_2,&puStack_c8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_88,1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar11;
  func_0x00010bf529e0();
  puVar6 = puVar4;
  if (lVar5 != 0) {
    lVar5 = param_1;
    func_0x00010bdc91a0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 != 0) {
      func_0x00010bf09f80(puVar4,param_2,lVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
    }
    _objc_release(lVar5);
  }
  puVar4 = PTR_PTR_1126ae720;
  puStack_f8 = puVar8;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_10ae97b00;
  puStack_e0 = &UNK_110c8d100;
  puStack_d8 = puVar6;
  _objc_retain(uVar9);
  uStack_d0 = uVar9;
  _objc_retain(puVar6);
  func_0x00010bf11fe0(puVar4,param_2,&puStack_f8);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar14);
  uVar10 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar10);
  puVar7 = PTR_PTR_1126ae720;
  puStack_140 = puVar8;
  uStack_138 = 0xc2000000;
  pcStack_130 = FUN_10ae97b70;
  puStack_128 = &UNK_110c8d130;
  uStack_120 = uVar10;
  puStack_118 = puVar4;
  uStack_110 = uVar14;
  puStack_108 = puVar3;
  uStack_100 = uVar9;
  _objc_retain(uVar9);
  _objc_retain(puVar3);
  _objc_retain(uVar14);
  _objc_retain(puVar4);
  _objc_retain(uVar10);
  func_0x00010bf11fe0(puVar7,param_2,&puStack_140);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar12);
  puVar1 = PTR_PTR_1126ae720;
  puStack_170 = puVar8;
  uStack_168 = 0xc2000000;
  pcStack_160 = FUN_10ae97c34;
  puStack_158 = &UNK_110c8d160;
  puStack_150 = puVar7;
  uStack_148 = uVar12;
  _objc_retain(uVar12);
  _objc_retain(puVar7);
  func_0x00010bf11fe0(puVar1,param_2,&puStack_170);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_148);
  _objc_release(puStack_150);
  _objc_release(uVar12);
  _objc_release(puVar7);
  _objc_release(uStack_100);
  _objc_release(puStack_108);
  _objc_release(uStack_110);
  _objc_release(puStack_118);
  _objc_release(uStack_120);
  _objc_release(uVar10);
  _objc_release(uVar14);
  _objc_release(puVar4);
  _objc_release(uStack_d0);
  _objc_release(puStack_d8);
  _objc_release(puVar3);
  _objc_release(puVar6);
  _objc_release(uStack_90);
  _objc_release(lStack_98);
  _objc_release(lStack_a0);
  _objc_release(uStack_a8);
  _objc_release(lVar11);
  _objc_release(uVar13);
  _objc_release(uVar2);
  _objc_release(uVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    puVar8 = PTR_PTR_1126de300;
    _objc_alloc(PTR_PTR_1126de300);
    uVar10 = *(undefined8 *)(param_3 + 0x20);
    uVar9 = *(undefined8 *)(param_3 + 0x28);
    uVar2 = *(undefined8 *)(param_3 + 0x30);
    uVar13 = *(undefined8 *)(param_3 + 0x38);
    func_0x00010c1290a0(uVar13);
    func_0x00010c024e80((double)(int)uVar13,puVar8,param_2,uVar10,uVar9,uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


