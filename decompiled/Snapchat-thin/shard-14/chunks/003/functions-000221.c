/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b0ff724; end: 10b0ff797;  */

void FUN_10b0ff724(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dfbc0;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10b0ff798();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x00010b0f9b68(&uStack_30);
  return;
}



/* Entry: 10b0ff798; end: 10b0ff7bf;  */

void FUN_10b0ff798(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b0ff7c0; end: 10b0ff837; -[SCNContentManagerPrefetchCalculator initWithCpp:] */

undefined1 * FUN_10b0ff7c0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112705d38;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x00010b0ffe38();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_10b0ffe04(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b0ff838; end: 10b0ff90f; +[SCNContentManagerPrefetchCalculator create] */

void FUN_10b0ff838(void)

{
  int extraout_w10;
  undefined8 unaff_x19;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  undefined **ppuStack_28;
  
  FUN_10b17f6d4(&lStack_48);
  if (lStack_48 == 0) {
    unaff_x19 = 0;
  }
  else {
    ppuStack_28 = &PTR_DAT_110cba858;
    lStack_38 = lStack_48;
    lStack_30 = lStack_40;
    if (lStack_40 != 0) {
      do {
        func_0x00010b0ffe38();
      } while (extraout_w10 != 0);
    }
    func_0x000107c31700(&ppuStack_28,&lStack_38,FUN_10b0ffd90);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b0ffe78();
  }
  FUN_10b0ffe04(&lStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 10b0ff910; end: 10b0ffaa3; -[SCNContentManagerPrefetchCalculator calculatePrefetchSize:variantConfigId:contentLocation:videoMetadata:prefetchSignals:] */

void FUN_10b0ff910(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long **pplVar1;
  long *plVar2;
  undefined1 auStack_108 [64];
  undefined1 auStack_c8 [64];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [24];
  long *plStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  plVar2 = *(long **)(param_1 + 0x18);
  func_0x000107c27f20(auStack_78,param_4);
  FUN_10b109104(auStack_88,param_5);
  FUN_10b0ffaa4(auStack_c8,param_6);
  FUN_10b0efa8c(auStack_108,param_7);
  (**(code **)(*plVar2 + 0x10))(plVar2,param_3,auStack_78,auStack_88,auStack_c8,auStack_108);
  uStack_58 = (undefined1)param_3;
  plStack_60 = plVar2;
  func_0x0001052b41f8(auStack_c8);
  func_0x0001052b41d0(auStack_88);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
  pplVar1 = &plStack_60;
  func_0x000107c28138(pplVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  func_0x00010b0ffe48();
  func_0x00010b0ffe50();
  func_0x00010b0ffe30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pplVar1);
  return;
}



/* Entry: 10b0ffaa4; end: 10b0ffb13;  */

void FUN_10b0ffaa4(undefined1 *param_1,long param_2)

{
  undefined1 auStack_58 [56];
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[0x38] = 0;
  }
  else {
    FUN_10b10bbf0(auStack_58,param_2);
    func_0x0001052b5024(param_1,auStack_58);
    func_0x0001052ac664(auStack_58);
  }
  FUN_10b0ffe30();
  return;
}



/* Entry: 10b0ffb14; end: 10b0ffc3b; -[SCNContentManagerPrefetchCalculator getCompleteDownloadDiscount:selectedVariantBitrateKbps:uncalibratedOptimalVariantBitrateKbps:] */

void FUN_10b0ffb14(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long **pplVar1;
  ulong uVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined1 auStack_68 [24];
  long *plStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  plVar4 = *(long **)(param_1 + 0x18);
  func_0x00010b0ffe6c();
  func_0x000107c28134(param_4);
  uVar2 = param_2;
  func_0x000107c28134(param_5);
  puVar3 = auStack_68;
  (**(code **)(*plVar4 + 0x18))(plVar4,puVar3,param_4,param_2 & 0xff,param_5,uVar2 & 0xff);
  uStack_48 = SUB81(puVar3,0);
  plStack_50 = plVar4;
  func_0x00010b0ffe58();
  pplVar1 = &plStack_50;
  func_0x0001079193a0(pplVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0ffe48();
  func_0x00010b0ffe50();
  func_0x00010b0ffe30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pplVar1);
  return;
}



/* Entry: 10b0ffc3c; end: 10b0ffcf7; -[SCNContentManagerPrefetchCalculator getMinPrefetchDurationMs:variantConfigId:] */

long * FUN_10b0ffc3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 auStack_48 [24];
  
  _objc_retain(param_4);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x00010b0ffe6c();
  (**(code **)(*plVar1 + 0x20))(plVar1,param_3,auStack_48);
  func_0x00010b0ffe58();
  func_0x00010b0ffe30();
  return plVar1;
}



/* Entry: 10b0ffcf8; end: 10b0ffd4b; -[SCNContentManagerPrefetchCalculator .cxx_destruct] */

void FUN_10b0ffcf8(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cba858;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_10b0ffe04((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b0ffd4c; end: 10b0ffd8f; -[SCNContentManagerPrefetchCalculator .cxx_construct] */

undefined8 * FUN_10b0ffd4c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010b0ffe38();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b0ffd90; end: 10b0ffe03;  */

void FUN_10b0ffd90(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dfbc8;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x00010b0ffe38();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_10b0ffe04(&uStack_30);
  return;
}



/* Entry: 10b0ffe04; end: 10b0ffe2f;  */

long FUN_10b0ffe04(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b0ffe30; end: 10b0ffe83;  */

void FUN_10b0ffe30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b0ffe84; end: 10b0ffef3;  */

void FUN_10b0ffe84(undefined1 *param_1,long param_2)

{
  undefined1 auStack_40 [32];
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[0x20] = 0;
  }
  else {
    FUN_10b10b564(auStack_40,param_2);
    func_0x0001052ac6b0(param_1,auStack_40);
    func_0x000107c27a18(auStack_40);
  }
  FUN_10b100034();
  return;
}



/* Entry: 10b0ffef4; end: 10b100003;  */

void FUN_10b0ffef4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126dfbd0;
  _objc_alloc(PTR_PTR_1126dfbd0);
  lVar2 = param_1;
  FUN_10b110628(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x10;
  FUN_10b0faccc(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x18;
  FUN_10b100004(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + 0x40;
  func_0x000107c28138(lVar5);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x50;
  func_0x000107c28138(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0280c0(puVar1,param_2,lVar2,lVar3,lVar4,lVar5,param_1);
  func_0x00010b10003c();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x00010b100034();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b100004; end: 10b100033;  */

void FUN_10b100004(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_10b10b61c();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b100034; end: 10b100047;  */

void FUN_10b100034(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b100048; end: 10b1000bf; -[SCNContentManagerPrefetchContentResult initWithCpp:] */

undefined1 * FUN_10b100048(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112705d40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10b100d34();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x0001052a00dc(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b1000c0; end: 10b100117; -[SCNContentManagerPrefetchContentResult cancel] */

void FUN_10b1000c0(void)

{
  long extraout_x8;
  
  func_0x00010b100f08();
  (**(code **)(extraout_x8 + 0x10))();
  return;
}



/* Entry: 10b100118; end: 10b1001b3; -[SCNContentManagerPrefetchContentResult futureError] */

void FUN_10b100118(void)

{
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  func_0x00010b100f08();
  func_0x00010b100e88();
  func_0x00010b100e48();
  FUN_10b0f0ed0(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b100dd0();
  func_0x0001052a55c0();
  func_0x0001052a55c0(auStack_30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b1001b4; end: 10b10025f; -[SCNContentManagerPrefetchContentResult updateRequestContext:] */

void FUN_10b1001b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_a8 [120];
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_10b49b094(auStack_a8,param_3);
  (**(code **)(*plVar1 + 0x20))(plVar1,auStack_a8);
  func_0x00010529fe04(auStack_a8);
  func_0x00010b100da4();
  return;
}



/* Entry: 10b100260; end: 10b1004ab; -[SCNContentManagerPrefetchContentResult futureMetadata] */

void FUN_10b100260(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x9;
  int extraout_w10;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010b100f08();
  func_0x00010b100e88();
  func_0x00010b100e48();
  _objc_alloc_init(PTR_PTR_1126b8058);
  func_0x00010bfc5fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b100ebc();
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  func_0x0001052ad910(auStack_60,auStack_e0,&uStack_70);
  func_0x0001052ad944(&uStack_50,auStack_60);
  func_0x0001052adbac(auStack_60);
  func_0x0001052adbac(&uStack_70);
  func_0x000107c27b48(&uStack_78);
  func_0x000107c27b4c(auStack_60,uStack_78);
  func_0x00010b100e70();
  lStack_b0 = extraout_x8 + 0xa0;
  lStack_a8 = CONCAT71(lStack_a8._1_7_,1);
  __ZNSt3__15mutex4lockEv();
  uVar1 = uStack_50;
  func_0x0001052ad97c();
  if ((int)uVar1 == 0) {
    uVar1 = 0x18;
    __Znwm();
    func_0x00010b100e58(&PTR_FUN_110cba888);
    lVar3 = *(long *)(extraout_x9 + 0xe8);
    *(undefined8 *)(extraout_x9 + 0xe8) = uVar1;
    if (lVar3 != 0) {
      func_0x00010b100e38();
    }
  }
  else {
    func_0x0001052ad944(&lStack_a0,&uStack_50);
  }
  func_0x00010b100e20();
  if (lStack_a0 != 0) {
    lStack_b0 = lStack_a0;
    lStack_a8 = lStack_98;
    if (lStack_98 != 0) {
      do {
        func_0x00010b100d34();
      } while (extraout_w10 != 0);
    }
    FUN_10b100898(auStack_90);
    func_0x0001052adbac(&lStack_b0);
  }
  func_0x00010b100ef4();
  func_0x0001052adbac();
  puVar2 = auStack_90;
  func_0x00010b100acc();
  func_0x00010b100ddc();
  func_0x00010b100f14();
  if (puVar2 != (undefined1 *)0x0) {
    func_0x00010b100d5c();
  }
  func_0x0001052adbac(&uStack_50);
  func_0x000107c27b58(auStack_c0);
  _objc_release(0);
  func_0x00010b100da4();
  func_0x00010b100de4();
  func_0x0001052adbac(auStack_d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b1004ac; end: 10b1006f7; -[SCNContentManagerPrefetchContentResult createContentStreamer] */

void FUN_10b1004ac(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x9;
  int extraout_w10;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010b100f08();
  func_0x00010b100e88();
  func_0x00010b100e48();
  _objc_alloc_init(PTR_PTR_1126b8058);
  func_0x00010bfc5fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b100ebc();
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  func_0x0001052adeb0(auStack_60,auStack_e0,&uStack_70);
  func_0x0001052adee4(&uStack_50,auStack_60);
  func_0x0001052ae2f8(auStack_60);
  func_0x0001052ae2f8(&uStack_70);
  func_0x000107c27b48(&uStack_78);
  func_0x000107c27b4c(auStack_60,uStack_78);
  func_0x00010b100e70();
  lStack_b0 = extraout_x8 + 0x48;
  lStack_a8 = CONCAT71(lStack_a8._1_7_,1);
  __ZNSt3__15mutex4lockEv();
  uVar1 = uStack_50;
  func_0x0001052adf1c();
  if ((int)uVar1 == 0) {
    uVar1 = 0x18;
    __Znwm();
    func_0x00010b100e58(&PTR_FUN_110cba8c8);
    lVar3 = *(long *)(extraout_x9 + 0x90);
    *(undefined8 *)(extraout_x9 + 0x90) = uVar1;
    if (lVar3 != 0) {
      func_0x00010b100e38();
    }
  }
  else {
    func_0x0001052adee4(&lStack_a0,&uStack_50);
  }
  func_0x00010b100e20();
  if (lStack_a0 != 0) {
    lStack_b0 = lStack_a0;
    lStack_a8 = lStack_98;
    if (lStack_98 != 0) {
      do {
        func_0x00010b100d34();
      } while (extraout_w10 != 0);
    }
    FUN_10b100af0(auStack_90);
    func_0x0001052ae2f8(&lStack_b0);
  }
  func_0x00010b100ef4();
  func_0x0001052ae2f8();
  puVar2 = auStack_90;
  func_0x00010b100d10();
  func_0x00010b100ddc();
  func_0x00010b100f14();
  if (puVar2 != (undefined1 *)0x0) {
    func_0x00010b100d5c();
  }
  func_0x0001052ae2f8(&uStack_50);
  func_0x000107c27b58(auStack_c0);
  _objc_release(0);
  func_0x00010b100da4();
  func_0x00010b100df4();
  func_0x0001052ae2f8(auStack_d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b1006f8; end: 10b100723;  */

void FUN_10b1006f8(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10b1007b8();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b100724; end: 10b100777; -[SCNContentManagerPrefetchContentResult .cxx_destruct] */

void FUN_10b100724(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cba868;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x0001052a00dc((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b100778; end: 10b1007b7; -[SCNContentManagerPrefetchContentResult .cxx_construct] */

undefined8 * FUN_10b100778(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10b100d34();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b1007b8; end: 10b10082b;  */

void FUN_10b1007b8(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110cba868;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10b100d34();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10b10082c);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b100dd0();
  func_0x000107c27d28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b10082c; end: 10b100897;  */

void FUN_10b10082c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dfbd8;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10b100d34();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x0001052a00dc(&uStack_30);
  return;
}



/* Entry: 10b100898; end: 10b100a43;  */

void FUN_10b100898(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [96];
  char cStack_48;
  
  uStack_c8 = param_2;
  lStack_c0 = param_3;
  if (param_3 != 0) {
    do {
      FUN_10b100d34();
    } while (extraout_w10 != 0);
    do {
      FUN_10b100d34();
    } while (extraout_w10_00 != 0);
  }
  uStack_b8 = param_2;
  lStack_b0 = param_3;
  func_0x0001052adc5c(auStack_a8,&uStack_b8);
  if (cStack_48 == '\x01') {
    FUN_10b0ffef4(auStack_a8);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010b100e98();
  func_0x00010b100d74();
  func_0x0001052ade48(auStack_a8);
  func_0x0001052adbac(&uStack_b8);
  func_0x0001052adbac(&uStack_c8);
  func_0x000107c27b68(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10b100a44; end: 10b100a47;  */

undefined8 * FUN_10b100a44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cba888;
  func_0x00010b100acc(param_1 + 1);
  return param_1;
}



/* Entry: 10b100a48; end: 10b100a5b;  */

void FUN_10b100a48(void)

{
  FUN_10b100aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b100a5c; end: 10b100a9f;  */

void FUN_10b100a5c(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x00010b100ee0();
  if (param_3 != 0) {
    do {
      func_0x00010b100d34();
    } while (extraout_w10 != 0);
  }
  FUN_10b100898(param_1 + 8);
  func_0x00010b100de4();
  return;
}



/* Entry: 10b100aa0; end: 10b100aef;  */

undefined8 * FUN_10b100aa0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cba888;
  func_0x00010b100acc(param_1 + 1);
  return param_1;
}



/* Entry: 10b100af0; end: 10b100c87;  */

void FUN_10b100af0(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  uStack_78 = param_2;
  lStack_70 = param_3;
  if (param_3 != 0) {
    do {
      FUN_10b100d34();
    } while (extraout_w10 != 0);
    do {
      FUN_10b100d34();
    } while (extraout_w10_00 != 0);
  }
  uStack_68 = param_2;
  lStack_60 = param_3;
  func_0x0001052ae3a8(auStack_58,&uStack_68);
  FUN_10b0fc304(auStack_58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b100e98();
  func_0x00010b100d74();
  func_0x0001052aad48(auStack_58);
  func_0x0001052ae2f8(&uStack_68);
  func_0x0001052ae2f8(&uStack_78);
  func_0x000107c27b68(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10b100c88; end: 10b100c8b;  */

undefined8 * FUN_10b100c88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cba8c8;
  func_0x00010b100d10(param_1 + 1);
  return param_1;
}



/* Entry: 10b100c8c; end: 10b100c9f;  */

void FUN_10b100c8c(void)

{
  FUN_10b100ce4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b100ca0; end: 10b100ce3;  */

void FUN_10b100ca0(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x00010b100ee0();
  if (param_3 != 0) {
    do {
      func_0x00010b100d34();
    } while (extraout_w10 != 0);
  }
  FUN_10b100af0(param_1 + 8);
  func_0x00010b100df4();
  return;
}



/* Entry: 10b100ce4; end: 10b100d33;  */

undefined8 * FUN_10b100ce4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cba8c8;
  func_0x00010b100d10(param_1 + 1);
  return param_1;
}



/* Entry: 10b100d34; end: 10b100f1f;  */

void FUN_10b100d34(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b100f20; end: 10b10106f;  */

void FUN_10b100f20(undefined1 *param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  _objc_retain();
  uVar3 = param_2;
  func_0x00010bf438e0();
  uVar4 = param_2;
  func_0x00010c29a1c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x000107c28134();
  uVar1 = (ulong)param_3;
  uVar6 = param_2;
  func_0x00010bfb0f20();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x000107c28134();
  uVar2 = (ulong)param_3;
  uVar8 = param_2;
  func_0x00010bf01fc0();
  uVar9 = param_2;
  func_0x00010c1374c0();
  uVar10 = param_2;
  func_0x00010bf4c3c0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  FUN_10b101070();
  *param_1 = (char)uVar3;
  *(undefined8 *)(param_1 + 8) = uVar5;
  *(ulong *)(param_1 + 0x10) = uVar1 & 0xff;
  *(undefined8 *)(param_1 + 0x18) = uVar7;
  *(ulong *)(param_1 + 0x20) = uVar2 & 0xff;
  param_1[0x28] = (char)uVar8;
  param_1[0x29] = (char)uVar9;
  *(undefined8 *)(param_1 + 0x2c) = uVar11;
  *(uint *)(param_1 + 0x34) = param_3 & 0xff;
  _objc_release(uVar10);
  _objc_release(uVar6);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b101070; end: 10b1010db;  */

undefined1  [16] FUN_10b101070(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  _objc_retain();
  bVar1 = param_1 == 0;
  if (bVar1) {
    param_1 = 0;
    uVar2 = 0;
  }
  else {
    FUN_10b49aac8(param_1);
    uVar2 = param_1 & 0xffffffffffffff00;
    param_1 = param_1 & 0xff;
  }
  FUN_10b1010dc();
  auVar3._0_8_ = uVar2 | param_1;
  auVar3[8] = !bVar1;
  auVar3._9_7_ = 0;
  return auVar3;
}



/* Entry: 10b1010dc; end: 10b1010e3;  */

void FUN_10b1010dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b1010e4; end: 10b1011e7;  */

void FUN_10b1010e4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  if (param_2 != 0) {
    _objc_retain(param_2);
    ppuStack_48 = &PTR_DAT_110cba950;
    lStack_50 = param_2;
    func_0x000107c316f4(&uStack_40,&ppuStack_48,&lStack_50,FUN_10b1011e8);
    uVar1 = uStack_38;
    uVar3 = uStack_40;
    uStack_40 = 0;
    uStack_38 = 0;
    func_0x000107c27d28(&uStack_40);
    _objc_release(lStack_50);
    param_1[1] = uVar1;
    *param_1 = uVar3;
    uStack_60 = 0;
    uStack_58 = 0;
    FUN_10b10149c(&uStack_60);
    _objc_release(param_2);
    return;
  }
  uVar3 = 0x10;
  ___cxa_allocate_exception(0x10);
  func_0x00010527a174();
  ___cxa_throw(uVar3,PTR___ZTISt16invalid_argument_110352248,
               PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10b1011b4);
  (*pcVar2)();
}



/* Entry: 10b1011e8; end: 10b1012e3;  */

void FUN_10b1011e8(undefined8 *param_1,long *param_2)

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
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110cba990;
  puVar4[3] = &PTR_DAT_110cbaa10;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x000107c316f8();
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
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  puVar4[3] = &PTR_FUN_110cba9e0;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10b10149c(&uStack_50);
  return;
}



/* Entry: 10b1012e4; end: 10b1012e7;  */

void FUN_10b1012e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cba990;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1012e8; end: 10b1012fb;  */

void FUN_10b1012e8(void)

{
  FUN_10b10148c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1012fc; end: 10b101307;  */

long FUN_10b1012fc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110cba950;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10b101308; end: 10b101347;  */

void FUN_10b101308(void)

{
  func_0x00010b1014dc();
  return;
}



/* Entry: 10b101348; end: 10b10139f;  */

void FUN_10b101348(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar1;
  
  func_0x00010b1014e8();
  uVar1 = *(undefined8 *)(unaff_x21 + 0x18);
  FUN_10b0f3c48();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e6c80(uVar1,param_2,unaff_x20);
  func_0x00010b1014c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 10b1013a0; end: 10b1013f7;  */

void FUN_10b1013a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar1;
  
  func_0x00010b1014e8();
  uVar1 = *(undefined8 *)(unaff_x21 + 0x18);
  func_0x00010bcc1ca8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e3f00(uVar1,param_2,unaff_x20);
  func_0x00010b1014c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 10b1013f8; end: 10b10148b;  */

long FUN_10b1013f8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110cba950;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10b10148c; end: 10b10149b;  */

void FUN_10b10148c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cba990;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b10149c; end: 10b1014c7;  */

long FUN_10b10149c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b1014c8; end: 10b1014fb;  */

void FUN_10b1014c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b1014fc; end: 10b1015ff;  */

void FUN_10b1014fc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  if (param_2 != 0) {
    _objc_retain(param_2);
    ppuStack_48 = &PTR_DAT_110cbaa88;
    lStack_50 = param_2;
    func_0x000107c316f4(&uStack_40,&ppuStack_48,&lStack_50,FUN_10b101600);
    uVar1 = uStack_38;
    uVar3 = uStack_40;
    uStack_40 = 0;
    uStack_38 = 0;
    func_0x000107c27d28(&uStack_40);
    _objc_release(lStack_50);
    param_1[1] = uVar1;
    *param_1 = uVar3;
    uStack_60 = 0;
    uStack_58 = 0;
    FUN_10b101848(&uStack_60);
    _objc_release(param_2);
    return;
  }
  uVar3 = 0x10;
  ___cxa_allocate_exception(0x10);
  func_0x00010527a174();
  ___cxa_throw(uVar3,PTR___ZTISt16invalid_argument_110352248,
               PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10b1015cc);
  (*pcVar2)();
}



/* Entry: 10b101600; end: 10b1016ff;  */

void FUN_10b101600(undefined8 *param_1,long *param_2)

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
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110cbaac8;
  puVar4[3] = &PTR_DAT_110cbab40;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x000107c316f8();
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
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  puVar4[3] = &PTR_FUN_110cbab18;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10b101848(&uStack_50);
  return;
}



/* Entry: 10b101700; end: 10b101703;  */

void FUN_10b101700(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbaac8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b101704; end: 10b101717;  */

void FUN_10b101704(void)

{
  FUN_10b101838();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b101718; end: 10b101723;  */

long FUN_10b101718(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110cbaa88;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10b101724; end: 10b101763;  */

void FUN_10b101724(void)

{
  FUN_10b101874();
  return;
}



/* Entry: 10b101764; end: 10b1017a3;  */

void FUN_10b101764(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010bf43720(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10b1017a4; end: 10b101837;  */

long FUN_10b1017a4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110cbaa88;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10b101838; end: 10b101847;  */

void FUN_10b101838(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbaac8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b101848; end: 10b101873;  */

long FUN_10b101848(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b101874; end: 10b10187f;  */

long FUN_10b101874(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 8;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110cbaa88;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10b101880; end: 10b1018e3;  */

undefined1  [16] FUN_10b101880(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c24d960(param_1);
  uVar2 = param_1;
  func_0x00010bf940a0(param_1);
  _objc_release(param_1);
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 10b1018e4; end: 10b101913;  */

void FUN_10b1018e4(void)

{
  _objc_alloc(PTR_PTR_1126b7f98);
  func_0x00010c04b840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b101914; end: 10b10198b; -[SCNContentManagerReadStreamCppProxy initWithCpp:] */

undefined1 * FUN_10b101914(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112705d48;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10b102228();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_10b0f7ec4(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b10198c; end: 10b1019d7; -[SCNContentManagerReadStreamCppProxy getTotalSize] */

void FUN_10b10198c(void)

{
  long extraout_x8;
  
  func_0x00010b10226c();
  (**(code **)(extraout_x8 + 0x10))();
  return;
}



/* Entry: 10b1019d8; end: 10b101a5f; -[SCNContentManagerReadStreamCppProxy getDataView:] */

void FUN_10b1019d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long extraout_x8;
  undefined1 auStack_38 [16];
  char cStack_28;
  
  func_0x00010b10226c(param_1,param_3);
  (**(code **)(extraout_x8 + 0x18))(auStack_38);
  if (cStack_28 == '\x01') {
    func_0x00010bf64a40(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b101a60; end: 10b101adf; -[SCNContentManagerReadStreamCppProxy getDataRefIfWholeChunk] */

void FUN_10b101a60(void)

{
  long extraout_x8;
  undefined1 auStack_38 [24];
  
  func_0x00010b10226c();
  (**(code **)(extraout_x8 + 0x20))(auStack_38);
  func_0x000107c281d0(auStack_38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b102278();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b101ae0; end: 10b101b2f; -[SCNContentManagerReadStreamCppProxy reset] */

void FUN_10b101ae0(void)

{
  long extraout_x8;
  
  func_0x00010b10226c();
  (**(code **)(extraout_x8 + 0x28))();
  return;
}



/* Entry: 10b101b30; end: 10b101b7f; -[SCNContentManagerReadStreamCppProxy free] */

void FUN_10b101b30(void)

{
  long extraout_x8;
  
  func_0x00010b10226c();
  (**(code **)(extraout_x8 + 0x30))();
  return;
}



/* Entry: 10b101b80; end: 10b101cbf;  */

void FUN_10b101b80(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  int extraout_w10;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  if (param_2 == 0) {
    uVar5 = 0x10;
    ___cxa_allocate_exception(0x10);
    func_0x00010527a174();
    ___cxa_throw(uVar5,PTR___ZTISt16invalid_argument_110352248,
                 PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10b101c8c);
    (*pcVar2)();
  }
  puVar3 = PTR_PTR_1126dfbe0;
  _objc_opt_class(PTR_PTR_1126dfbe0);
  uVar4 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar3);
  if ((uVar4 & 1) == 0) {
    _objc_retain(param_2);
    ppuStack_48 = &PTR_DAT_110cbabb0;
    uStack_50 = param_2;
    func_0x000107c316f4(&uStack_40,&ppuStack_48,&uStack_50,FUN_10b101dc4);
    uVar1 = uStack_38;
    uVar5 = uStack_40;
    uStack_40 = 0;
    uStack_38 = 0;
    func_0x000107c27d28(&uStack_40);
    _objc_release(uStack_50);
    param_1[1] = uVar1;
    *param_1 = uVar5;
    uStack_60 = 0;
    uStack_58 = 0;
    FUN_10b102124(&uStack_60);
  }
  else {
    lVar6 = *(long *)(param_2 + 0x20);
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    param_1[1] = *(undefined8 *)(param_2 + 0x20);
    *param_1 = uVar5;
    if (lVar6 != 0) {
      do {
        FUN_10b102228();
      } while (extraout_w10 != 0);
    }
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10b101cc0; end: 10b101d2f;  */

void FUN_10b101cc0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    ___dynamic_cast(lVar1,&PTR_DAT_110cbab58,&PTR_DAT_110cbab68,0);
    if (lVar1 == 0) {
      FUN_10b10214c(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      param_1 = *(long **)(lVar1 + 0x18);
      _objc_retain(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b101d30; end: 10b101d83; -[SCNContentManagerReadStreamCppProxy .cxx_destruct] */

void FUN_10b101d30(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cbacc0;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_10b0f7ec4((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b101d84; end: 10b101dc3; -[SCNContentManagerReadStreamCppProxy .cxx_construct] */

undefined8 * FUN_10b101d84(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10b102228();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b101dc4; end: 10b101eb7;  */

void FUN_10b101dc4(undefined8 *param_1,long *param_2)

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
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110cbabf0;
  puVar1[3] = &PTR_DAT_110cbac88;
  puVar2 = puVar5;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar3 = puVar2;
  func_0x000107c316f8();
  lVar4 = puVar3[1];
  uVar6 = *puVar3;
  puVar1[5] = puVar3[1];
  puVar1[4] = uVar6;
  if (lVar4 != 0) {
    do {
      FUN_10b102228();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  puVar1[6] = puVar5;
  _objc_autoreleasePoolPop(puVar2);
  _objc_release(puVar5);
  puVar1[3] = &PTR_FUN_110cbac40;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10b102124(&uStack_50);
  return;
}



/* Entry: 10b101eb8; end: 10b101ebb;  */

void FUN_10b101eb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbabf0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b101ebc; end: 10b101ecf;  */

void FUN_10b101ebc(void)

{
  FUN_10b102114();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b101ed0; end: 10b101edb;  */

void FUN_10b101ed0(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  func_0x00010b102264(param_1);
  lVar2 = *(long *)(unaff_x19 + 0x10);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    _objc_retain(lVar2);
    func_0x000107c316fc();
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x10);
  }
  _objc_release(uVar1);
  func_0x000107c27f24();
  _objc_autoreleasePoolPop(param_1);
  return;
}



/* Entry: 10b101edc; end: 10b101f4b;  */

void FUN_10b101edc(void)

{
  func_0x00010b102284();
  return;
}



/* Entry: 10b101f4c; end: 10b101fd3;  */

void FUN_10b101f4c(long *param_1,long param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_2;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_2 + 0x18);
  func_0x00010bfc48c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  bVar1 = lVar3 == 0;
  if (bVar1) {
    *(undefined1 *)param_1 = 0;
  }
  else {
    func_0x000107c28244();
    *param_1 = lVar3;
    param_1[1] = param_3;
  }
  *(bool *)(param_1 + 2) = !bVar1;
  func_0x00010b102240();
  func_0x00010b102240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar2);
  return;
}



/* Entry: 10b101fd4; end: 10b10202b;  */

void FUN_10b101fd4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  _objc_autoreleasePoolPush();
  func_0x00010bfc48a0(*(undefined8 *)(param_2 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c281cc(param_1);
  func_0x00010b102240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10b10202c; end: 10b102083;  */

void FUN_10b10202c(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x00010b102264();
  func_0x00010c137fe0(*(undefined8 *)(unaff_x19 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 10b102084; end: 10b102113;  */

void FUN_10b102084(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  
  func_0x00010b102264();
  lVar2 = *(long *)(unaff_x19 + 0x10);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    _objc_retain(lVar2);
    func_0x000107c316fc();
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x10);
  }
  _objc_release(uVar1);
  func_0x000107c27f24();
  _objc_autoreleasePoolPop(param_1);
  return;
}



/* Entry: 10b102114; end: 10b102123;  */

void FUN_10b102114(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbabf0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b102124; end: 10b10214b;  */

long FUN_10b102124(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b10214c; end: 10b1021b7;  */

void FUN_10b10214c(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110cbacc0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10b102228();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10b1021b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b102290();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b1021b8; end: 10b102227;  */

void FUN_10b1021b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dfbe0;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10b102228();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_10b0f7ec4(&uStack_30);
  return;
}



/* Entry: 10b102228; end: 10b1022bf;  */

void FUN_10b102228(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b1022c0; end: 10b1023c3;  */

void FUN_10b1022c0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  if (param_2 != 0) {
    _objc_retain(param_2);
    ppuStack_48 = &PTR_DAT_110cbad28;
    lStack_50 = param_2;
    func_0x000107c316f4(&uStack_40,&ppuStack_48,&lStack_50,FUN_10b1023c4);
    uVar1 = uStack_38;
    uVar3 = uStack_40;
    uStack_40 = 0;
    uStack_38 = 0;
    func_0x000107c27d28(&uStack_40);
    _objc_release(lStack_50);
    param_1[1] = uVar1;
    *param_1 = uVar3;
    uStack_60 = 0;
    uStack_58 = 0;
    FUN_10b10260c(&uStack_60);
    _objc_release(param_2);
    return;
  }
  uVar3 = 0x10;
  ___cxa_allocate_exception(0x10);
  func_0x00010527a174();
  ___cxa_throw(uVar3,PTR___ZTISt16invalid_argument_110352248,
               PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10b102390);
  (*pcVar2)();
}



/* Entry: 10b1023c4; end: 10b1024c3;  */

void FUN_10b1023c4(undefined8 *param_1,long *param_2)

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
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110cbad68;
  puVar4[3] = &PTR_DAT_110cbade0;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x000107c316f8();
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
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  puVar4[3] = &PTR_FUN_110cbadb8;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10b10260c(&uStack_50);
  return;
}



/* Entry: 10b1024c4; end: 10b1024c7;  */

void FUN_10b1024c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbad68;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1024c8; end: 10b1024db;  */

void FUN_10b1024c8(void)

{
  FUN_10b1025fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1024dc; end: 10b1024e7;  */

long FUN_10b1024dc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110cbad28;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10b1024e8; end: 10b102527;  */

void FUN_10b1024e8(void)

{
  FUN_10b102638();
  return;
}



/* Entry: 10b102528; end: 10b102567;  */

void FUN_10b102528(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010bf88100(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10b102568; end: 10b1025fb;  */

long FUN_10b102568(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110cbad28;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10b1025fc; end: 10b10260b;  */

void FUN_10b1025fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbad68;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}


