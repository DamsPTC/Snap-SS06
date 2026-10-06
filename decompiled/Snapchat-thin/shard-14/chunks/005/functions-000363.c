/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b498864; end: 10b4988a3;  */

void FUN_10b498864(void)

{
  func_0x00010b4989cc();
  return;
}



/* Entry: 10b4988a4; end: 10b49891b;  */

void FUN_10b4988a4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010c0e3120(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10b49891c; end: 10b4989af;  */

long FUN_10b49891c(long param_1)

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
    ppuStack_38 = &PTR_DAT_110ced040;
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



/* Entry: 10b4989b0; end: 10b4989d7;  */

void FUN_10b4989b0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ced080;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b4989d8; end: 10b498adb;  */

void FUN_10b4989d8(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar2 = PTR_PTR_1126e0268;
  _objc_alloc(PTR_PTR_1126e0268);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      (param_1[1] - *param_1) / 0xe8);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1[1];
  for (lVar6 = *param_1; lVar6 != lVar1; lVar6 = lVar6 + 0xe8) {
    lVar4 = lVar6;
    FUN_10b498adc(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3,param_2,lVar4);
    _objc_release(lVar4);
  }
  puVar5 = puVar3;
  func_0x00010bf51e00(puVar3);
  _objc_release(puVar3);
  func_0x00010c03f520(puVar2,param_2,puVar5);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b498adc; end: 10b498cab;  */

void FUN_10b498adc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  
  puVar9 = PTR_PTR_1126e0270;
  _objc_alloc(PTR_PTR_1126e0270);
  puVar11 = param_1 + 4;
  uVar16 = *param_1;
  puVar10 = param_1 + 1;
  func_0x000107c27f28();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f28();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = param_1 + 7;
  func_0x000107c27f68();
  _objc_retainAutoreleasedReturnValue();
  iVar7 = *(int *)(param_1 + 0xb);
  iVar8 = *(int *)((long)param_1 + 0x5c);
  puVar13 = param_1 + 0xc;
  FUN_10b49b004();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = param_1 + 0x10;
  func_0x000107c28138();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = param_1 + 0x12;
  func_0x000107c28138();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1[0x14];
  uVar4 = param_1[0x15];
  uVar2 = param_1[0x16];
  uVar5 = param_1[0x17];
  uVar3 = param_1[0x18];
  uVar6 = param_1[0x19];
  param_1 = param_1 + 0x1a;
  func_0x00010863360c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02f2c0(puVar9,param_2,uVar16,puVar10,puVar11,puVar12,(long)iVar7,(long)iVar8,puVar13,
                      puVar14,puVar15,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,param_1);
  func_0x00010b498cb4();
  _objc_release(puVar15);
  _objc_release(puVar14);
  func_0x00010b498cac();
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10b498cac; end: 10b498cbf;  */

void FUN_10b498cac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b498cc0; end: 10b498d1f; -[SCNNetworkTypesRadioAccessTypeChangeListener onRadioAccessTypeChanged:] */

void FUN_10b498cc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(*(long **)(param_1 + 0x18),param_3);
  return;
}



/* Entry: 10b498d20; end: 10b498d6f;  */

void FUN_10b498d20(undefined8 *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x20);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    param_1[1] = *(undefined8 *)(param_2 + 0x20);
    *param_1 = uVar2;
    if (lVar1 != 0) {
      do {
        func_0x000107c3957c();
      } while (extraout_w10 != 0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b498d70; end: 10b498dc3; -[SCNNetworkTypesRadioAccessTypeChangeListener .cxx_destruct] */

void FUN_10b498d70(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110ced120;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000107c2c5cc((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b498dc4; end: 10b498dcb;  */

void FUN_10b498dc4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10b498dcc; end: 10b498e7b;  */

void FUN_10b498dcc(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c2867c0();
  uVar2 = param_2;
  func_0x00010c28b0a0();
  uVar3 = param_2;
  func_0x00010c28d540();
  uVar4 = param_2;
  func_0x00010c28d3a0();
  uVar5 = param_2;
  func_0x00010c28d680();
  uVar6 = param_2;
  func_0x00010c28d4c0();
  *param_1 = (int)uVar1;
  *(undefined8 *)(param_1 + 2) = uVar2;
  param_1[4] = (int)uVar3;
  *(undefined8 *)(param_1 + 6) = uVar4;
  param_1[8] = (int)uVar5;
  *(undefined8 *)(param_1 + 10) = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b498e7c; end: 10b498ffb;  */

void FUN_10b498e7c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_260 [40];
  undefined1 auStack_238 [104];
  undefined1 auStack_1d0 [184];
  undefined1 auStack_118 [200];
  
  _objc_retain();
  func_0x00010c135860(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b498ffc(auStack_118);
  uVar1 = param_2;
  func_0x00010c13b920(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b499070(auStack_1d0);
  func_0x00010bf66200(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b496350(auStack_238);
  func_0x00010bf9ff80(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b10fa58(auStack_260);
  func_0x000107c2c614(param_1,auStack_118,auStack_1d0,auStack_238,auStack_260);
  func_0x000107c27f14(auStack_260);
  _objc_release(param_2);
  func_0x000107c2c62c(auStack_238);
  func_0x000107c3958c();
  func_0x000107c2c63c(auStack_1d0);
  _objc_release(uVar1);
  func_0x000107c2c644(auStack_118);
  func_0x000107c39590();
  func_0x000107c39588();
  return;
}



/* Entry: 10b498ffc; end: 10b49906f;  */

void FUN_10b498ffc(void)

{
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [168];
  
  FUN_10b4990f4();
  if (unaff_x19 == 0) {
    *unaff_x20 = 0;
    unaff_x20[0xc0] = 0;
  }
  else {
    FUN_10b49a6e4(auStack_f0);
    func_0x000107c2c808();
    func_0x000107c2c648(auStack_d8);
  }
  func_0x000107c39588();
  return;
}



/* Entry: 10b499070; end: 10b4990d7;  */

void FUN_10b499070(void)

{
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined1 auStack_d0 [176];
  
  FUN_10b4990f4();
  if (unaff_x19 == 0) {
    *unaff_x20 = 0;
    unaff_x20[0xb0] = 0;
  }
  else {
    FUN_10b49a864(auStack_d0);
    FUN_10b4990d8();
    func_0x000107c2c640(auStack_d0);
  }
  func_0x000107c39588();
  return;
}



/* Entry: 10b4990d8; end: 10b4990f3;  */

void FUN_10b4990d8(long param_1)

{
  func_0x000107c2c620();
  *(undefined1 *)(param_1 + 0xb0) = 1;
  return;
}



/* Entry: 10b4990f4; end: 10b4990ff;  */

void FUN_10b4990f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10b499100; end: 10b49919f;  */

void FUN_10b499100(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  
  puVar4 = PTR_PTR_1126dfdd0;
  _objc_alloc(PTR_PTR_1126dfdd0);
  uVar1 = *param_1;
  uVar2 = param_1[1];
  iVar3 = param_1[2];
  uVar6 = *(undefined8 *)(param_1 + 4);
  puVar5 = param_1 + 6;
  FUN_10b498514(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040020(puVar4,param_2,uVar1,uVar2,(long)iVar3,uVar6,puVar5,
                      *(undefined8 *)(param_1 + 0x10));
  func_0x000107c39594();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b4991a0; end: 10b499217; -[SCNNetworkTypesRunnable initWithCpp:] */

undefined1 * FUN_10b4991a0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_112706448;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10b499448();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_10b49941c(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b499218; end: 10b499273; -[SCNNetworkTypesRunnable run] */

void FUN_10b499218(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 10b499274; end: 10b49929f;  */

void FUN_10b499274(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10b499338();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b4992a0; end: 10b4992f3; -[SCNNetworkTypesRunnable .cxx_destruct] */

void FUN_10b4992a0(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110ced130;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_10b49941c((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b4992f4; end: 10b499337; -[SCNNetworkTypesRunnable .cxx_construct] */

undefined8 * FUN_10b4992f4(undefined8 *param_1)

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
      FUN_10b499448();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b499338; end: 10b4993ab;  */

void FUN_10b499338(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110ced130;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10b499448();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10b4993ac);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b499458();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b4993ac; end: 10b49941b;  */

void FUN_10b4993ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126e0288;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10b499448();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_10b49941c(&uStack_30);
  return;
}



/* Entry: 10b49941c; end: 10b499447;  */

long FUN_10b49941c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b499448; end: 10b499477;  */

void FUN_10b499448(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b499478; end: 10b4994b7;  */

ulong FUN_10b499478(void)

{
  ulong unaff_x20;
  
  func_0x00010c26d660();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28124();
  FUN_10b4994b8();
  return unaff_x20 & 0xffffffffff;
}



/* Entry: 10b4994b8; end: 10b4994c3;  */

void FUN_10b4994b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b4994c4; end: 10b49953b; -[SCNNetworkTypesUploadDataProviderCppProxy initWithCpp:] */

undefined1 * FUN_10b4994c4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_112706450;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x000107c39598();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c27f50(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b49953c; end: 10b49958f; -[SCNNetworkTypesUploadDataProviderCppProxy getType] */

long FUN_10b49953c(int param_1)

{
  long extraout_x8;
  
  func_0x00010b499a58();
  (**(code **)(extraout_x8 + 0x10))();
  return (long)param_1;
}



/* Entry: 10b499590; end: 10b499613; -[SCNNetworkTypesUploadDataProviderCppProxy getUploadStreamDataProvider] */

void FUN_10b499590(void)

{
  undefined1 auStack_30 [16];
  
  func_0x00010b499a58();
  func_0x00010b499a38();
  FUN_10b49a130(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b499a0c();
  func_0x0001052bb074();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b499614; end: 10b499697; -[SCNNetworkTypesUploadDataProviderCppProxy getUploadInMemoryDataProvider] */

void FUN_10b499614(void)

{
  undefined1 auStack_30 [16];
  
  func_0x00010b499a58();
  func_0x00010b499a38();
  FUN_10b499b74(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b499a0c();
  func_0x000107c2c898();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b499698; end: 10b49971b; -[SCNNetworkTypesUploadDataProviderCppProxy getUploadFilePath] */

void FUN_10b499698(void)

{
  undefined1 auStack_40 [32];
  
  func_0x00010b499a58();
  func_0x00010b499a38();
  func_0x000107c27f68(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b499a0c();
  func_0x000107c279a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b49971c; end: 10b49978b;  */

void FUN_10b49971c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    ___dynamic_cast(lVar1,&PTR_DAT_110877848,&PTR_DAT_110ced140,0);
    if (lVar1 == 0) {
      FUN_10b499924(param_1);
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



/* Entry: 10b49978c; end: 10b4997df; -[SCNNetworkTypesUploadDataProviderCppProxy .cxx_destruct] */

void FUN_10b49978c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110ced288;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000107c27f50((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b4997e0; end: 10b49981f; -[SCNNetworkTypesUploadDataProviderCppProxy .cxx_construct] */

undefined8 * FUN_10b4997e0(undefined8 *param_1)

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
      func_0x000107c39598();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b499820; end: 10b499823;  */

void FUN_10b499820(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ced1c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b499824; end: 10b499837;  */

void FUN_10b499824(void)

{
  FUN_10b499914();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b499838; end: 10b499873;  */

void FUN_10b499838(void)

{
  func_0x00010b499a40();
  return;
}



/* Entry: 10b499874; end: 10b4998c3;  */

void FUN_10b499874(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c395a8();
  func_0x00010bfcbc20(*(undefined8 *)(unaff_x20 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  func_0x000105632ee4();
  func_0x000107c395a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 10b4998c4; end: 10b499913;  */

void FUN_10b4998c4(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c395a8();
  func_0x00010bfcbb60(*(undefined8 *)(unaff_x20 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f64();
  func_0x000107c395a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 10b499914; end: 10b499923;  */

void FUN_10b499914(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ced1c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b499924; end: 10b499997;  */

void FUN_10b499924(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110ced288;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x000107c39598();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10b499998);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b499a0c();
  func_0x000107c27d28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b499998; end: 10b499a03;  */

void FUN_10b499998(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126e0290;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000107c39598();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x000107c27f50(&uStack_30);
  return;
}



/* Entry: 10b499a04; end: 10b499a63;  */

void FUN_10b499a04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10b499a64; end: 10b499adb; -[SCNNetworkTypesUploadInMemoryDataProviderCppProxy initWithCpp:] */

undefined1 * FUN_10b499a64(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_112706458;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x000107c395b0();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c2c898(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b499adc; end: 10b499b73; -[SCNNetworkTypesUploadInMemoryDataProviderCppProxy data] */

void FUN_10b499adc(long param_1)

{
  undefined1 auStack_30 [16];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(auStack_30);
  func_0x00010bcc07c0(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b499dcc();
  func_0x000107c27f10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b499b74; end: 10b499be3;  */

void FUN_10b499b74(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    ___dynamic_cast(lVar1,&PTR_DAT_1108778e8,&PTR_DAT_110ced298,0);
    if (lVar1 == 0) {
      FUN_10b499cdc(param_1);
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



/* Entry: 10b499be4; end: 10b499c37; -[SCNNetworkTypesUploadInMemoryDataProviderCppProxy .cxx_destruct] */

void FUN_10b499be4(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110ced3b0;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000107c2c898((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b499c38; end: 10b499c77; -[SCNNetworkTypesUploadInMemoryDataProviderCppProxy .cxx_construct] */

undefined8 * FUN_10b499c38(undefined8 *param_1)

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
      func_0x000107c395b0();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b499c78; end: 10b499c7b;  */

void FUN_10b499c78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ced320;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b499c7c; end: 10b499c8f;  */

void FUN_10b499c7c(void)

{
  FUN_10b499ccc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b499c90; end: 10b499ccb;  */

void FUN_10b499c90(void)

{
  func_0x00010b499de4();
  return;
}



/* Entry: 10b499ccc; end: 10b499cdb;  */

void FUN_10b499ccc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ced320;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b499cdc; end: 10b499d57;  */

void FUN_10b499cdc(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110ced3b0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x000107c395b0();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10b499d58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b499dcc();
  func_0x000107c27d28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b499d58; end: 10b499dc3;  */

void FUN_10b499d58(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126e0298;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000107c395b0();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x000107c2c898(&uStack_30);
  return;
}



/* Entry: 10b499dc4; end: 10b499def;  */

void FUN_10b499dc4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10b499df0; end: 10b499e67; -[SCNNetworkTypesUploadStreamDataProviderCppProxy initWithCpp:] */

undefined1 * FUN_10b499df0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_112706460;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10b49a65c();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x0001052bb074(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b499e68; end: 10b499eb3; -[SCNNetworkTypesUploadStreamDataProviderCppProxy getLength] */

void FUN_10b499e68(void)

{
  long extraout_x8;
  
  func_0x00010b49a6d8();
  (**(code **)(extraout_x8 + 0x10))();
  return;
}



/* Entry: 10b499eb4; end: 10b499eff; -[SCNNetworkTypesUploadStreamDataProviderCppProxy getOffset] */

void FUN_10b499eb4(void)

{
  long extraout_x8;
  
  func_0x00010b49a6d8();
  (**(code **)(extraout_x8 + 0x18))();
  return;
}



/* Entry: 10b499f00; end: 10b499f9b; -[SCNNetworkTypesUploadStreamDataProviderCppProxy read:] */

long * FUN_10b499f00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x000107c28244();
  uStack_30 = param_3;
  uStack_28 = param_2;
  (**(code **)(*plVar1 + 0x20))(plVar1,&uStack_30);
  func_0x00010b49a68c();
  return plVar1;
}



/* Entry: 10b499f9c; end: 10b499feb; -[SCNNetworkTypesUploadStreamDataProviderCppProxy rewind] */

void FUN_10b499f9c(void)

{
  long extraout_x8;
  
  func_0x00010b49a6d8();
  (**(code **)(extraout_x8 + 0x28))();
  return;
}



/* Entry: 10b499fec; end: 10b49a03b; -[SCNNetworkTypesUploadStreamDataProviderCppProxy close] */

void FUN_10b499fec(void)

{
  long extraout_x8;
  
  func_0x00010b49a6d8();
  (**(code **)(extraout_x8 + 0x30))();
  return;
}



/* Entry: 10b49a03c; end: 10b49a12f;  */

void FUN_10b49a03c(undefined8 *param_1,ulong param_2)

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
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar2 = PTR_PTR_1126e02a0;
    _objc_opt_class(PTR_PTR_1126e02a0);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      _objc_retain(param_2);
      ppuStack_38 = &PTR_DAT_110ced408;
      uStack_40 = param_2;
      func_0x000107c316f4(&uStack_30,&ppuStack_38,&uStack_40,FUN_10b49a234);
      uVar1 = uStack_28;
      uVar5 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      func_0x000107c27d28(&uStack_30);
      _objc_release(uStack_40);
      param_1[1] = uVar1;
      *param_1 = uVar5;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_10b49a550(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_10b49a65c();
        } while (extraout_w10 != 0);
      }
    }
  }
  func_0x00010b49a68c();
  return;
}



/* Entry: 10b49a130; end: 10b49a19f;  */

void FUN_10b49a130(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    ___dynamic_cast(lVar1,&PTR_DAT_1108753c0,&PTR_DAT_110ced3c0,0);
    if (lVar1 == 0) {
      FUN_10b49a578(param_1);
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



/* Entry: 10b49a1a0; end: 10b49a1f3; -[SCNNetworkTypesUploadStreamDataProviderCppProxy .cxx_destruct] */

void FUN_10b49a1a0(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110ced518;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x0001052bb074((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b49a1f4; end: 10b49a233; -[SCNNetworkTypesUploadStreamDataProviderCppProxy .cxx_construct] */

undefined8 * FUN_10b49a1f4(undefined8 *param_1)

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
      FUN_10b49a65c();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b49a234; end: 10b49a327;  */

void FUN_10b49a234(undefined8 *param_1,long *param_2)

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
  *puVar1 = &PTR_FUN_110ced448;
  puVar1[3] = &PTR_DAT_110ced4e0;
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
      FUN_10b49a65c();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  puVar1[6] = puVar5;
  _objc_autoreleasePoolPop(puVar2);
  _objc_release(puVar5);
  puVar1[3] = &PTR_FUN_110ced498;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10b49a550(&uStack_50);
  return;
}



/* Entry: 10b49a328; end: 10b49a32b;  */

void FUN_10b49a328(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ced448;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b49a32c; end: 10b49a33f;  */

void FUN_10b49a32c(void)

{
  FUN_10b49a540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b49a340; end: 10b49a34b;  */

void FUN_10b49a340(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  
  func_0x00010b49a67c(param_1 + 0x20);
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
  func_0x00010b49a684();
  return;
}



/* Entry: 10b49a34c; end: 10b49a3df;  */

void FUN_10b49a34c(void)

{
  func_0x00010b49a69c();
  return;
}



/* Entry: 10b49a3e0; end: 10b49a45b;  */

undefined8 FUN_10b49a3e0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000106af6544(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c121140(uVar2);
  _objc_release(param_2);
  _objc_autoreleasePoolPop(lVar1);
  return uVar2;
}



/* Entry: 10b49a45c; end: 10b49a4b3;  */

undefined8 FUN_10b49a45c(undefined8 param_1)

{
  func_0x00010b49a67c();
  func_0x00010b49a6c0();
  func_0x00010c140660();
  func_0x00010b49a684();
  return param_1;
}



/* Entry: 10b49a4b4; end: 10b49a53f;  */

void FUN_10b49a4b4(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  
  func_0x00010b49a67c();
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
  func_0x00010b49a684();
  return;
}



/* Entry: 10b49a540; end: 10b49a54f;  */

void FUN_10b49a540(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ced448;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b49a550; end: 10b49a577;  */

long FUN_10b49a550(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b49a578; end: 10b49a5eb;  */

void FUN_10b49a578(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110ced518;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10b49a65c();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10b49a5ec);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b49a6a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b49a5ec; end: 10b49a65b;  */

void FUN_10b49a5ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126e02a0;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10b49a65c();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x0001052bb074(&uStack_30);
  return;
}



/* Entry: 10b49a65c; end: 10b49a6e3;  */

void FUN_10b49a65c(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b49a6e4; end: 10b49a797;  */

void FUN_10b49a6e4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  undefined1 auStack_e8 [168];
  
  func_0x00010b49a858();
  uVar1 = unaff_x19;
  func_0x00010bf9b260();
  uVar2 = unaff_x19;
  func_0x00010bf9b220();
  func_0x00010c124980();
  func_0x00010bf5c560();
  _objc_retainAutoreleasedReturnValue();
  FUN_10b49a798(auStack_e8);
  *unaff_x20 = uVar1;
  unaff_x20[1] = uVar2;
  unaff_x20[2] = unaff_x19;
  func_0x000107c2c618(unaff_x20 + 3,auStack_e8);
  func_0x000107c2c648(auStack_e8);
  func_0x000107c395bc();
  func_0x00010b49a850();
  return;
}



/* Entry: 10b49a798; end: 10b49a84f;  */

void FUN_10b49a798(void)

{
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined1 auStack_d0 [128];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  char cStack_38;
  
  func_0x00010b49a858();
  if (unaff_x19 == 0) {
    *unaff_x20 = 0;
    unaff_x20[0xa0] = 0;
  }
  else {
    FUN_10b496184(auStack_d0);
    _memcpy();
    unaff_x20[0x80] = 0;
    unaff_x20[0x98] = 0;
    if (cStack_38 == '\x01') {
      *(undefined8 *)(unaff_x20 + 0x88) = uStack_48;
      *(undefined8 *)(unaff_x20 + 0x80) = uStack_50;
      *(undefined8 *)(unaff_x20 + 0x90) = uStack_40;
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_50 = 0;
      unaff_x20[0x98] = 1;
    }
    unaff_x20[0xa0] = 1;
    func_0x000107c279a4(&uStack_50);
  }
  func_0x00010b49a850();
  return;
}



/* Entry: 10b49a850; end: 10b49a863;  */

void FUN_10b49a850(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b49a864; end: 10b49aac7;  */

void FUN_10b49a864(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f20(auStack_80);
  func_0x00010c28f420(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c281ac(auStack_98);
  uVar2 = param_2;
  func_0x00010bfe4dc0(param_2);
  func_0x00010bfe4de0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f20(auStack_b0);
  uVar3 = param_2;
  func_0x00010bf001e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c2c524(auStack_c8);
  uVar4 = param_2;
  func_0x00010c2a2300(param_2);
  func_0x00010c0d7620(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f20(auStack_e0);
  func_0x00010c119f20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f20(auStack_f8);
  uVar5 = param_2;
  func_0x00010c122220();
  func_0x00010bf675a0();
  func_0x000107c2c940(param_1,auStack_80,auStack_98,uVar2,auStack_b0,auStack_c8,uVar4,auStack_e0,
                      auStack_f8,uVar5,param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f8);
  func_0x000107c395cc();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e0);
  func_0x000107c395c8();
  func_0x000107c27f3c(auStack_c8);
  _objc_release(uVar3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0);
  func_0x000107c395c0();
  func_0x000107c278a8(auStack_98);
  func_0x000107c395d0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
  _objc_release(uVar1);
  func_0x000107c395c4();
  return;
}



/* Entry: 10b49aac8; end: 10b49ab2b;  */

ulong FUN_10b49aac8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c25a600(param_1);
  uVar2 = param_1;
  func_0x00010c242300(param_1);
  _objc_release(param_1);
  return uVar1 & 0xffffffff | uVar2 << 0x20;
}



/* Entry: 10b49ab2c; end: 10b49ab5b;  */

void FUN_10b49ab2c(void)

{
  _objc_alloc(PTR_PTR_1126b7fc8);
  func_0x00010c0631e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b49ab5c; end: 10b49ac13;  */

void FUN_10b49ab5c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010bfa0640(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c281ac(&uStack_50);
  func_0x00010c121ea0();
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[2] = uStack_40;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  *(int *)(param_1 + 3) = (int)param_2;
  func_0x000107c278a8(&uStack_50);
  _objc_release(uVar1);
  FUN_10b49ac88();
  return;
}



/* Entry: 10b49ac14; end: 10b49ac87;  */

void FUN_10b49ac14(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126e02b8;
  _objc_alloc(PTR_PTR_1126e02b8);
  lVar2 = param_1;
  func_0x000107c2824c(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011700(puVar1,param_2,lVar2,(long)*(int *)(param_1 + 0x18));
  FUN_10b49ac88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b49ac88; end: 10b49ac8f;  */

void FUN_10b49ac88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b49ac90; end: 10b49acdf; -[SCNMdpCommonFallbackUrlProvider initWithCpp:] */

undefined1 * FUN_10b49ac90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112706468;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_10b49af60((undefined1 *)((long)puVar1 + 0x18),param_3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b49ace0; end: 10b49ad67; -[SCNMdpCommonFallbackUrlProvider getFallbackUrls] */

void FUN_10b49ace0(long param_1)

{
  undefined1 auStack_38 [24];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(auStack_38);
  func_0x000107c2824c(auStack_38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b49afb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b49ad68; end: 10b49adf3;  */

void FUN_10b49ad68(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int extraout_w10;
  undefined8 uVar4;
  undefined **ppuStack_48;
  long lStack_40;
  long lStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    lVar1 = 0x10;
    ___cxa_allocate_exception();
    func_0x00010527a174();
    lVar3 = lVar1;
    ___cxa_throw(lVar1,PTR___ZTISt16invalid_argument_110352248,
                 PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
    ___cxa_free_exception(lVar1);
    lVar2 = lVar3;
    __Unwind_Resume();
    pcStack_28 = FUN_10b49adf4;
    lStack_40 = lVar3;
    lStack_38 = lVar1;
    puStack_30 = &stack0xfffffffffffffff0;
    if (*(long *)(lVar2 + 0x18) != 0) {
      ppuStack_48 = &PTR_DAT_110ced528;
      func_0x000107c31708(lVar2 + 8,&ppuStack_48);
    }
    func_0x000107c27f1c((long *)(lVar2 + 0x18));
    func_0x000107c27e30(lVar2 + 8);
    return;
  }
  lVar3 = *(long *)(param_2 + 0x20);
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  param_1[1] = *(undefined8 *)(param_2 + 0x20);
  *param_1 = uVar4;
  if (lVar3 != 0) {
    do {
      FUN_10b49afa8();
    } while (extraout_w10 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b49adf4; end: 10b49ae47; -[SCNMdpCommonFallbackUrlProvider .cxx_destruct] */

void FUN_10b49adf4(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110ced528;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000107c27f1c((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b49ae48; end: 10b49ae8b; -[SCNMdpCommonFallbackUrlProvider .cxx_construct] */

undefined8 * FUN_10b49ae48(undefined8 *param_1)

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
      FUN_10b49afa8();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b49ae8c; end: 10b49aef7;  */

void FUN_10b49ae8c(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110ced528;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10b49afa8();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10b49aef8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b49afc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b49aef8; end: 10b49af5f;  */

void FUN_10b49aef8(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  
  puVar1 = PTR_PTR_1126e02c0;
  _objc_alloc();
  if (param_2[1] != 0) {
    do {
      FUN_10b49afa8();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x00010b49affc();
  return;
}



/* Entry: 10b49af60; end: 10b49afa7;  */

undefined8 * FUN_10b49af60(undefined8 *param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10b49afa8();
    } while (extraout_w10 != 0);
  }
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x00010b49affc();
  return param_1;
}



/* Entry: 10b49afa8; end: 10b49b003;  */

void FUN_10b49afa8(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b49b004; end: 10b49b08b;  */

void FUN_10b49b004(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  
  puVar2 = PTR_PTR_1126b7fd0;
  _objc_alloc(PTR_PTR_1126b7fd0);
  iVar1 = *param_1;
  piVar3 = param_1 + 1;
  FUN_10b49ab2c(piVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0291a0(puVar2,param_2,(long)iVar1,piVar3,(long)param_1[2],
                      *(undefined8 *)(param_1 + 4),param_1[6],(long)param_1[7]);
  FUN_10b49b08c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


