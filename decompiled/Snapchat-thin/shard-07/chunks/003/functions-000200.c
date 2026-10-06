/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10539f538; end: 10539f59f;  */

void FUN_10539f538(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10539f5a0; end: 10539f6b7;  */

void FUN_10539f5a0(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c0c5f60();
  uVar2 = param_2;
  func_0x00010bf21ea0();
  uVar3 = param_2;
  func_0x00010c24d5c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001004a2160();
  uVar4 = param_2;
  func_0x00010c276cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x0001004a2160();
  uVar6 = param_2;
  func_0x00010bf8ab60();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x0001004a2160();
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3 & 0xffffffffff;
  param_1[3] = uVar5 & 0xffffffffff;
  param_1[4] = uVar7 & 0xffffffffff;
  _objc_release(uVar6);
  _objc_release(uVar4);
  FUN_10539f774();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10539f6b8; end: 10539f773;  */

void FUN_10539f6b8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar3 = PTR_PTR_1126b8068;
  _objc_alloc(PTR_PTR_1126b8068);
  uVar1 = *param_1;
  uVar2 = param_1[1];
  puVar4 = param_1 + 2;
  func_0x0001006aaca4(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_1 + 3;
  func_0x0001006aaca4(puVar5);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 4;
  func_0x0001006aaca4(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c029b20(puVar3,param_2,uVar1,uVar2,puVar4,puVar5,param_1);
  func_0x00010539f77c();
  func_0x00010539f774();
  func_0x00010049c7c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10539f774; end: 10539f787;  */

void FUN_10539f774(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10539f788; end: 10539f7ff; -[SCNMdpSignalCenterPlaylistScopedAnalyticsInfoAccessor initWithCpp:] */

undefined1 * FUN_10539f788(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126e7d40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10539fae0();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x00010539eef8(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10539f800; end: 10539f90f; -[SCNMdpSignalCenterPlaylistScopedAnalyticsInfoAccessor getAnalyticsInfoForContent:] */

void FUN_10539f800(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 auStack_2b0 [24];
  undefined1 auStack_298 [608];
  char cStack_38;
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x0001000fbca4(auStack_2b0,param_3);
  (**(code **)(*plVar1 + 0x10))(auStack_298,plVar1,auStack_2b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2b0);
  if (cStack_38 == '\x01') {
    puVar2 = auStack_298;
    FUN_10539dc28(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = (undefined1 *)0x0;
  }
  FUN_10539f9d4(auStack_298);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10539f910; end: 10539f93b;  */

void FUN_10539f910(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10539f9f4();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10539f93c; end: 10539f98f; -[SCNMdpSignalCenterPlaylistScopedAnalyticsInfoAccessor .cxx_destruct] */

void FUN_10539f93c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110880590;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x00010539eef8((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 10539f990; end: 10539f9d3; -[SCNMdpSignalCenterPlaylistScopedAnalyticsInfoAccessor .cxx_construct] */

undefined8 * FUN_10539f990(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x00010015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10539fae0();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10539f9d4; end: 10539f9f3;  */

void FUN_10539f9d4(long param_1)

{
  if (*(char *)(param_1 + 0x260) == '\x01') {
    func_0x00010539dd5c();
  }
  return;
}



/* Entry: 10539f9f4; end: 10539fa6b;  */

void FUN_10539f9f4(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110880590;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10539fae0();
    } while (extraout_w10 != 0);
  }
  func_0x00010015c218(&ppuStack_28,&uStack_40,FUN_10539fa6c);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010539fafc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10539fa6c; end: 10539fadf;  */

void FUN_10539fa6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126b8070;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10539fae0();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x00010539eef8(&uStack_30);
  return;
}



/* Entry: 10539fae0; end: 10539fb07;  */

void FUN_10539fae0(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10539fb08; end: 10539fb7f; -[SCNMdpSignalCenterUserScopedSignalAccessor initWithCpp:] */

undefined1 * FUN_10539fb08(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126e7d48;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10539fd88();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x00010539ef1c(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10539fb80; end: 10539fbdf; -[SCNMdpSignalCenterUserScopedSignalAccessor getIsNewUserSignal] */

long FUN_10539fb80(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar1 + 0x10))();
  return (long)(int)plVar1;
}



/* Entry: 10539fbe0; end: 10539fc0b;  */

void FUN_10539fbe0(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10539fca4();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10539fc0c; end: 10539fc5f; -[SCNMdpSignalCenterUserScopedSignalAccessor .cxx_destruct] */

void FUN_10539fc0c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1108805a0;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x00010539ef1c((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 10539fc60; end: 10539fca3; -[SCNMdpSignalCenterUserScopedSignalAccessor .cxx_construct] */

undefined8 * FUN_10539fc60(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x00010015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10539fd88();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10539fca4; end: 10539fd17;  */

void FUN_10539fca4(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_1108805a0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10539fd88();
    } while (extraout_w10 != 0);
  }
  func_0x00010015c218(&ppuStack_28,&uStack_40,FUN_10539fd18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010539fd98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10539fd18; end: 10539fd87;  */

void FUN_10539fd18(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126b8078;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10539fd88();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x00010539ef1c(&uStack_30);
  return;
}



/* Entry: 10539fd88; end: 10539fdb7;  */

void FUN_10539fd88(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10539fdb8; end: 10539fe2b; -[SCCircumstanceEngineBootstrapResponseProcessor initWithCircumstanceEngine:] */

undefined1 * FUN_10539fdb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7d50;
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



/* Entry: 10539fe2c; end: 10539ff77; -[SCCircumstanceEngineBootstrapResponseProcessor processBootstrapResponse] */

void FUN_10539fe2c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf1f440(uVar2,param_2,&PTR____CFConstantStringClassReference_110dd5f38,0,0);
  if ((int)uVar2 == 0) {
    func_0x00010bf43d60(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf4d0);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0e1180();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bfad7a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x10539ff80;
    puStack_50 = &UNK_1108544b0;
    _objc_retain(puVar1);
    uVar5 = uVar4;
    puStack_48 = puVar1;
    func_0x00010c25ff60(uVar4,param_2,&puStack_68);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar5;
    _objc_release(uVar7);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(puStack_48);
  }
  puVar6 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10539ff78; end: 10539ff8b;  */

void FUN_10539ff78(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_boolValue_1125a5698);
  return;
}



/* Entry: 10539ff8c; end: 10539ff93; -[SCCircumstanceEngineBootstrapResponseProcessor dispose] */

void FUN_10539ff8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_dispose_1125bf4f8);
  return;
}



/* Entry: 10539ff94; end: 10539ffd7; -[SCCircumstanceEngineBootstrapResponseProcessor dealloc] */

void FUN_10539ff94(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40();
  puStack_28 = PTR_PTR_1126e7d50;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10539ffd8; end: 1053a0007; -[SCCircumstanceEngineBootstrapResponseProcessor .cxx_destruct] */

void FUN_10539ffd8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053a0008; end: 1053a00bb; -[SCDuplexSyncTriggerServiceImpl unregisterPayloadType:handler:] */

void FUN_1053a0008(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  if (((int)param_3 != 0) && (param_4 != 0)) {
    _os_unfair_lock_lock(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360();
    _objc_release(uVar2);
    _objc_release(puVar1);
    _os_unfair_lock_unlock(param_1 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1053a00bc; end: 1053a00f7; -[SCDuplexSyncTriggerServiceImpl endSubscribing] */

void FUN_1053a00bc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c282080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1053a00f8; end: 1053a039b; -[SCDuplexSyncTriggerServiceImpl onReceive:] */

void FUN_1053a00f8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b8080;
  _objc_alloc(PTR_PTR_1126b8080);
  func_0x00010c008360();
  _objc_retain(0);
  func_0x00010c0f6680(puVar2);
  _os_unfair_lock_lock(param_1 + 0x20);
  lVar9 = *(long *)(param_1 + 0x18);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar3);
  if (lVar9 != 0) {
    puVar3 = PTR_PTR_1126b8080;
    func_0x00010bf6e760();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfac8c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010010e990(puVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = *(long *)(param_1 + 0x18);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar9;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    _objc_release(puVar6);
    lVar9 = lVar7;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar9 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar7);
        }
        func_0x00010c0e5ec0(*(undefined8 *)(lVar10 * 8));
        lVar10 = lVar10 + 1;
      } while (lVar9 != lVar10);
      lVar9 = lVar7;
      func_0x00010bf52a60();
    }
    _objc_release(lVar7);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _os_unfair_lock_unlock(param_1 + 0x20);
  _objc_release(puVar2);
  _objc_release(0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    _os_unfair_lock_unlock(param_1 + 0x20);
    __Unwind_Resume(param_3);
    _objc_storeStrong(param_3 + 0x18,0);
    _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
    return;
  }
  return;
}



/* Entry: 1053a039c; end: 1053a03d7; -[SCDuplexSyncTriggerServiceImpl .cxx_destruct] */

void FUN_1053a039c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053a03d8; end: 1053a044f; -[SCNDeltaforceBatchedSyncCallbackCppProxy initWithCpp:] */

undefined1 * FUN_1053a03d8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126e7d60;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x000100c1aedc();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000100c1b690(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1053a0450; end: 1053a04f3; -[SCNDeltaforceBatchedSyncCallbackCppProxy onSuccess:] */

void FUN_1053a0450(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_98 [104];
  
  func_0x0001053a08ac();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  FUN_1053a25ac(auStack_98);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_98);
  func_0x0001053a063c(auStack_98);
  func_0x000100c1af1c();
  return;
}



/* Entry: 1053a04f4; end: 1053a059f; -[SCNDeltaforceBatchedSyncCallbackCppProxy onError:] */

void FUN_1053a04f4(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  func_0x0001053a08ac();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  FUN_1053a1fd0(auStack_50);
  (**(code **)(*plVar1 + 0x18))(plVar1,auStack_50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  func_0x000100c1af1c();
  return;
}



/* Entry: 1053a05a0; end: 1053a05fb; -[SCNDeltaforceBatchedSyncCallbackCppProxy .cxx_destruct] */

void FUN_1053a05a0(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110880708;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x000100c1b690((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 1053a05fc; end: 1053a0673; -[SCNDeltaforceBatchedSyncCallbackCppProxy .cxx_construct] */

undefined8 * FUN_1053a05fc(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x00010015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000100c1aedc();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 1053a0674; end: 1053a067b;  */

void FUN_1053a0674(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x18;
    func_0x000100100fec();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 1053a067c; end: 1053a06b3;  */

void FUN_1053a067c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x18;
    func_0x000100100fec();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1053a06b4; end: 1053a06bb;  */

void FUN_1053a06b4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x18;
    func_0x000100100fec();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 1053a06bc; end: 1053a06f3;  */

void FUN_1053a06bc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x18;
    func_0x000100100fec();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1053a06f4; end: 1053a06f7;  */

void FUN_1053a06f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110880668;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1053a06f8; end: 1053a070b;  */

void FUN_1053a06f8(void)

{
  FUN_1053a0894();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1053a070c; end: 1053a0717;  */

long FUN_1053a070c(long param_1)

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
    ppuStack_38 = &PTR_DAT_110880628;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 1053a0718; end: 1053a074f;  */

void FUN_1053a0718(void)

{
  func_0x0001053a08cc();
  return;
}



/* Entry: 1053a0750; end: 1053a07a7;  */

void FUN_1053a0750(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar1;
  
  func_0x0001053a08e4();
  uVar1 = *(undefined8 *)(unaff_x21 + 0x18);
  FUN_1053a295c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e6c80(uVar1,param_2,unaff_x20);
  func_0x0001053a08a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 1053a07a8; end: 1053a07ff;  */

void FUN_1053a07a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar1;
  
  func_0x0001053a08e4();
  uVar1 = *(undefined8 *)(unaff_x21 + 0x18);
  FUN_1053a207c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e3f00(uVar1,param_2,unaff_x20);
  func_0x0001053a08a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 1053a0800; end: 1053a0893;  */

long FUN_1053a0800(long param_1)

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
    ppuStack_38 = &PTR_DAT_110880628;
    _objc_retain(lVar3);
    func_0x0001005f2030(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x0001005f2294(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 1053a0894; end: 1053a0903;  */

void FUN_1053a0894(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110880668;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1053a0904; end: 1053a0973;  */

void FUN_1053a0904(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x00010c15ea00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010029a6ec(&uStack_40);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  func_0x000100100fec(&uStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 1053a0974; end: 1053a097f;  */

void FUN_1053a0974(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1053a0980; end: 1053a09f7; -[SCNDeltaforceConditionalPutCallbackCppProxy initWithCpp:] */

undefined1 * FUN_1053a0980(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126e7d68;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_1053a0fb4();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x0001053a0f8c(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1053a09f8; end: 1053a0a8f; -[SCNDeltaforceConditionalPutCallbackCppProxy onSuccess:] */

void FUN_1053a09f8(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_48 [24];
  
  func_0x0001053a0fdc();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  FUN_1053a18cc(auStack_48);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_48);
  func_0x000100100fec(auStack_48);
  func_0x0001053a0fc4();
  return;
}



/* Entry: 1053a0a90; end: 1053a0b2f; -[SCNDeltaforceConditionalPutCallbackCppProxy onError:] */

void FUN_1053a0a90(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  func_0x0001053a0fdc();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  FUN_1053a1fd0(auStack_50);
  (**(code **)(*plVar1 + 0x18))(plVar1,auStack_50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  func_0x0001053a0fc4();
  return;
}



/* Entry: 1053a0b30; end: 1053a0c1f;  */

void FUN_1053a0b30(undefined8 *param_1,ulong param_2)

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
    puVar2 = PTR_PTR_1126b8098;
    _objc_opt_class(PTR_PTR_1126b8098);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      _objc_retain(param_2);
      ppuStack_38 = &PTR_DAT_110880770;
      uStack_40 = param_2;
      func_0x0001000de59c(&uStack_30,&ppuStack_38,&uStack_40,FUN_1053a0cbc);
      uVar1 = uStack_28;
      uVar5 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      func_0x0001000df524(&uStack_30);
      _objc_release(uStack_40);
      param_1[1] = uVar1;
      *param_1 = uVar5;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_1053a0f64(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_1053a0fb4();
        } while (extraout_w10 != 0);
      }
    }
  }
  func_0x0001053a0fc4();
  return;
}



/* Entry: 1053a0c20; end: 1053a0c7b; -[SCNDeltaforceConditionalPutCallbackCppProxy .cxx_destruct] */

void FUN_1053a0c20(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110880850;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x0001053a0f8c((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 1053a0c7c; end: 1053a0cbb; -[SCNDeltaforceConditionalPutCallbackCppProxy .cxx_construct] */

undefined8 * FUN_1053a0c7c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x00010015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_1053a0fb4();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 1053a0cbc; end: 1053a0daf;  */

void FUN_1053a0cbc(undefined8 *param_1,long *param_2)

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
  *puVar1 = &PTR_FUN_1108807b0;
  puVar1[3] = &PTR_DAT_110880830;
  puVar2 = puVar5;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar3 = puVar2;
  func_0x0001000de520();
  lVar4 = puVar3[1];
  uVar6 = *puVar3;
  puVar1[5] = puVar3[1];
  puVar1[4] = uVar6;
  if (lVar4 != 0) {
    do {
      FUN_1053a0fb4();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  puVar1[6] = puVar5;
  _objc_autoreleasePoolPop(puVar2);
  _objc_release(puVar5);
  puVar1[3] = &PTR_FUN_110880800;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_1053a0f64(&uStack_50);
  return;
}



/* Entry: 1053a0db0; end: 1053a0db3;  */

void FUN_1053a0db0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108807b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1053a0db4; end: 1053a0dc7;  */

void FUN_1053a0db4(void)

{
  FUN_1053a0f54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1053a0dc8; end: 1053a0dd3;  */

long FUN_1053a0dc8(long param_1)

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
    ppuStack_38 = &PTR_DAT_110880770;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 1053a0dd4; end: 1053a0e0f;  */

void FUN_1053a0dd4(void)

{
  func_0x0001053a101c();
  return;
}



/* Entry: 1053a0e10; end: 1053a0e67;  */

void FUN_1053a0e10(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar1;
  
  func_0x0001053a1010();
  uVar1 = *(undefined8 *)(unaff_x21 + 0x18);
  FUN_1053a193c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e6c80(uVar1,param_2,unaff_x20);
  func_0x0001053a0fec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 1053a0e68; end: 1053a0ebf;  */

void FUN_1053a0e68(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar1;
  
  func_0x0001053a1010();
  uVar1 = *(undefined8 *)(unaff_x21 + 0x18);
  FUN_1053a207c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e3f00(uVar1,param_2,unaff_x20);
  func_0x0001053a0fec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 1053a0ec0; end: 1053a0f53;  */

long FUN_1053a0ec0(long param_1)

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
    ppuStack_38 = &PTR_DAT_110880770;
    _objc_retain(lVar3);
    func_0x0001005f2030(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x0001005f2294(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 1053a0f54; end: 1053a0f63;  */

void FUN_1053a0f54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108807b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1053a0f64; end: 1053a0fb3;  */

long FUN_1053a0f64(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1053a0fb4; end: 1053a103b;  */

void FUN_1053a0fb4(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1053a103c; end: 1053a112f;  */

void FUN_1053a103c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c0840e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_1053a229c(auStack_48);
  func_0x00010bf45d60(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_1053a1130(auStack_60);
  func_0x00010c13fb80(param_2);
  FUN_1053a12a4(param_1,auStack_48,auStack_60,param_2);
  FUN_1053a12ec(auStack_60);
  func_0x0001053a189c();
  func_0x000100100fec(auStack_48);
  _objc_release(uVar1);
  func_0x0001053a1870();
  return;
}



/* Entry: 1053a1130; end: 1053a12a3;  */

void FUN_1053a1130(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 auStack_138 [3];
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
  _objc_retain();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar1 = param_2;
  func_0x00010bf529e0();
  FUN_1053a139c(param_1);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  puVar2 = param_2;
  _objc_retain();
  func_0x0001053a1878();
  uVar4 = (undefined1)param_5;
  if (puVar2 != (undefined8 *)0x0) {
    lVar6 = *plStack_110;
    do {
      puVar7 = (undefined8 *)0x0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(param_2);
        }
        uVar5 = *(undefined8 *)(lStack_118 + (long)puVar7 * 8);
        _objc_retain(uVar5);
        FUN_1053a0904(auStack_138,uVar5);
        puVar1 = auStack_138;
        func_0x0001053a1704(param_1);
        puVar3 = auStack_138;
        func_0x000100100fec();
        func_0x0001053a189c();
        puVar7 = (undefined8 *)((long)puVar7 + 1);
      } while (puVar7 < puVar2);
      func_0x0001053a1878();
      uVar4 = (undefined1)param_5;
      puVar2 = puVar3;
    } while (puVar3 != (undefined8 *)0x0);
  }
  puVar2 = (undefined8 *)0x0;
  func_0x0001053a1870();
  func_0x0001053a1870();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001053a1870();
  FUN_1053a12ec(param_1);
  func_0x0001053a1870();
  __Unwind_Resume();
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  uVar5 = *puVar1;
  puVar2[1] = puVar1[1];
  *puVar2 = uVar5;
  puVar2[2] = puVar1[2];
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  uVar5 = *param_4;
  puVar2[4] = param_4[1];
  puVar2[3] = uVar5;
  puVar2[5] = param_4[2];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  *(undefined1 *)(puVar2 + 6) = uVar4;
  return;
}



/* Entry: 1053a12a4; end: 1053a12eb;  */

void FUN_1053a12a4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar1;
  param_1[5] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  *(undefined1 *)(param_1 + 6) = param_4;
  return;
}



/* Entry: 1053a12ec; end: 1053a135b;  */

undefined8 FUN_1053a12ec(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x0001053a1320(&uStack_28);
  return param_1;
}



/* Entry: 1053a135c; end: 1053a1363;  */

void FUN_1053a135c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x18;
    func_0x000100100fec();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 1053a1364; end: 1053a139b;  */

void FUN_1053a1364(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x18;
    func_0x000100100fec();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1053a139c; end: 1053a141b;  */

void FUN_1053a139c(long *param_1,undefined8 *param_2)

{
  char *pcVar1;
  long lVar2;
  undefined1 auStack_48 [40];
  
  if ((undefined8 *)((param_1[2] - *param_1) / 0x18) < param_2) {
    if ((undefined8 *)0xaaaaaaaaaaaaaaa < param_2) {
      FUN_1053a141c();
      func_0x0001053a1894();
      func_0x0001053a18c4();
      pcVar1 = "vector";
      func_0x000104bd47e8();
      lVar2 = param_2[1] + ((*(long *)((long)pcVar1 + 8) - *(long *)pcVar1) / -0x18) * 0x18;
      FUN_1053a1558((long *)((long)pcVar1 + 0x10),*(long *)pcVar1,*(long *)((long)pcVar1 + 8),lVar2)
      ;
      param_2[1] = lVar2;
      lVar2 = *(long *)pcVar1;
      *(long *)((long)pcVar1 + 8) = lVar2;
      *(undefined8 *)pcVar1 = param_2[1];
      param_2[1] = lVar2;
      lVar2 = *(long *)((long)pcVar1 + 8);
      *(undefined8 *)((long)pcVar1 + 8) = param_2[2];
      param_2[2] = lVar2;
      lVar2 = *(long *)((long)pcVar1 + 0x10);
      *(undefined8 *)((long)pcVar1 + 0x10) = param_2[3];
      param_2[3] = lVar2;
      *param_2 = param_2[1];
      return;
    }
    FUN_1053a14bc(auStack_48,param_2,(param_1[1] - *param_1) / 0x18);
    func_0x0001053a18b8();
    func_0x0001053a1894();
  }
  return;
}



/* Entry: 1053a141c; end: 1053a142f;  */

void FUN_1053a141c(undefined8 param_1,undefined8 *param_2)

{
  char *pcVar1;
  long lVar2;
  
  pcVar1 = "vector";
  func_0x000104bd47e8();
  lVar2 = param_2[1] + ((*(long *)((long)pcVar1 + 8) - *(long *)pcVar1) / -0x18) * 0x18;
  FUN_1053a1558((long *)((long)pcVar1 + 0x10),*(long *)pcVar1,*(long *)((long)pcVar1 + 8),lVar2);
  param_2[1] = lVar2;
  lVar2 = *(long *)pcVar1;
  *(long *)((long)pcVar1 + 8) = lVar2;
  *(undefined8 *)pcVar1 = param_2[1];
  param_2[1] = lVar2;
  lVar2 = *(long *)((long)pcVar1 + 8);
  *(undefined8 *)((long)pcVar1 + 8) = param_2[2];
  param_2[2] = lVar2;
  lVar2 = *(long *)((long)pcVar1 + 0x10);
  *(undefined8 *)((long)pcVar1 + 0x10) = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1053a1430; end: 1053a14bb;  */

void FUN_1053a1430(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x18) * 0x18;
  FUN_1053a1558(param_1 + 2,*param_1,param_1[1],lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1053a14bc; end: 1053a152b;  */

long * FUN_1053a14bc(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001053a1508();
  }
  lVar1 = param_4 + param_3 * 0x18;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x18;
  return param_1;
}



/* Entry: 1053a152c; end: 1053a1557;  */

void FUN_1053a152c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  if (param_2 < (undefined8 *)0xaaaaaaaaaaaaaab) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)((long)param_2 * 0x18);
    return;
  }
  func_0x000104bd35f4();
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  puStack_38 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 3) {
    *puStack_38 = 0;
    puStack_38[1] = 0;
    puStack_38[2] = 0;
    uVar1 = *param_2;
    puStack_38[1] = param_2[1];
    *puStack_38 = uVar1;
    puStack_38[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    puStack_38 = puStack_38 + 3;
  }
  uStack_48 = 1;
  uStack_60 = param_1;
  puStack_40 = param_4;
  FUN_1053a15e8();
  FUN_1053a1618(&uStack_60);
  return;
}



/* Entry: 1053a1558; end: 1053a15e7;  */

void FUN_1053a1558(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  ppuStack_48 = &puStack_30;
  ppuStack_40 = &puStack_28;
  puStack_28 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 3) {
    *puStack_28 = 0;
    puStack_28[1] = 0;
    puStack_28[2] = 0;
    uVar1 = *param_2;
    puStack_28[1] = param_2[1];
    *puStack_28 = uVar1;
    puStack_28[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    puStack_28 = puStack_28 + 3;
  }
  uStack_38 = 1;
  uStack_50 = param_1;
  puStack_30 = param_4;
  FUN_1053a15e8();
  FUN_1053a1618(&uStack_50);
  return;
}



/* Entry: 1053a15e8; end: 1053a1617;  */

void FUN_1053a15e8(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x18) {
    func_0x000100100fec();
  }
  return;
}



/* Entry: 1053a1618; end: 1053a1647;  */

long FUN_1053a1618(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1053a1648(param_1);
  }
  return param_1;
}



/* Entry: 1053a1648; end: 1053a1667;  */

void FUN_1053a1648(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x18;
    func_0x000100100fec();
  }
  return;
}



/* Entry: 1053a1668; end: 1053a16c3;  */

void FUN_1053a1668(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x18;
    func_0x000100100fec();
  }
  return;
}



/* Entry: 1053a16c4; end: 1053a16cb;  */

void FUN_1053a16c4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x18;
    func_0x000100100fec();
  }
  return;
}



/* Entry: 1053a16cc; end: 1053a173f;  */

void FUN_1053a16cc(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x18;
    func_0x000100100fec();
  }
  return;
}



/* Entry: 1053a1740; end: 1053a176f;  */

void FUN_1053a1740(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  puVar1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined8 **)(param_1 + 8) = puVar1 + 3;
  return;
}



/* Entry: 1053a1770; end: 1053a181f;  */

long FUN_1053a1770(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  plVar1 = param_1;
  FUN_1053a1820(param_1,(param_1[1] - *param_1) / 0x18 + 1);
  FUN_1053a14bc(auStack_58,plVar1,(param_1[1] - *param_1) / 0x18,param_1 + 2);
  *puStack_48 = 0;
  puStack_48[1] = 0;
  puStack_48[2] = 0;
  uVar3 = *param_2;
  puStack_48[1] = param_2[1];
  *puStack_48 = uVar3;
  puStack_48[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  puStack_48 = puStack_48 + 3;
  func_0x0001053a18b8();
  lVar2 = param_1[1];
  func_0x0001053a1894();
  return lVar2;
}



/* Entry: 1053a1820; end: 1053a186f;  */

ulong FUN_1053a1820(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong unaff_x19;
  
  if (0xaaaaaaaaaaaaaaa < param_2) {
    FUN_1053a141c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return unaff_x19;
  }
  uVar1 = (param_1[2] - *param_1) / 0x18;
  uVar2 = uVar1 * 2;
  if (uVar2 < param_2 || uVar2 - param_2 == 0) {
    uVar2 = param_2;
  }
  if (0x555555555555554 < uVar1) {
    uVar2 = 0xaaaaaaaaaaaaaaa;
  }
  return uVar2;
}



/* Entry: 1053a1870; end: 1053a18cb;  */

void FUN_1053a1870(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1053a18cc; end: 1053a193b;  */

void FUN_1053a18cc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x00010bfcf2e0();
  _objc_retainAutoreleasedReturnValue();
  FUN_1053a20fc(&uStack_40);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  func_0x000100100fec(&uStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 1053a193c; end: 1053a199b;  */

void FUN_1053a193c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b80a8;
  _objc_alloc(PTR_PTR_1126b80a8);
  FUN_1053a216c(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019240(puVar1,param_2,param_1);
  FUN_1053a199c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053a199c; end: 1053a19a7;  */

void FUN_1053a199c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1053a19a8; end: 1053a1aef; +[SCNDeltaforceDeltaForceSyncClient newClient:authContextDelegate:dispatchQueue:] */

undefined8 FUN_1053a19a8(void)

{
  undefined8 uVar1;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [192];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100769fd4();
  func_0x00010076a174();
  _objc_retain(in_x4);
  func_0x00010076a17c(auStack_110);
  func_0x000100459fd0(auStack_120,in_x3);
  func_0x00010049e05c(auStack_130,in_x4);
  FUN_1053a5d00(&uStack_50,auStack_110,auStack_120,auStack_130);
  func_0x000100554470(auStack_130);
  func_0x00010048b850(auStack_120);
  func_0x000100469c34(auStack_110);
  func_0x00010076e358(uStack_50,uStack_48);
  uVar1 = uStack_50;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010076e508(&uStack_50);
  func_0x00010076e548();
  func_0x00010076e550();
  func_0x00010076e558();
  return uVar1;
}



/* Entry: 1053a1af0; end: 1053a1b93; +[SCNDeltaforceDeltaForceSyncClient parseSyncResponse:] */

void FUN_1053a1af0(void)

{
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [104];
  
  func_0x000100769fd4();
  func_0x0001053a1fb4();
  FUN_1053a5d58(auStack_98,auStack_b0);
  func_0x0001053a1f90();
  FUN_1053a295c(auStack_98);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001053a1f60();
  func_0x00010076e558();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053a1b94; end: 1053a1c37; +[SCNDeltaforceDeltaForceSyncClient parseLoginResponse:] */

void FUN_1053a1b94(void)

{
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [104];
  
  func_0x000100769fd4();
  func_0x0001053a1fb4();
  FUN_1053a5ed8(auStack_98,auStack_b0);
  func_0x0001053a1f90();
  FUN_1053a295c(auStack_98);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001053a1f60();
  func_0x00010076e558();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053a1c38; end: 1053a1cff; -[SCNDeltaforceDeltaForceSyncClient conditionalPut:callback:] */

void FUN_1053a1c38(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [56];
  
  func_0x000100c1a758();
  func_0x00010076a174();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  FUN_1053a103c(auStack_68);
  FUN_1053a0b30(auStack_78);
  func_0x000100c1af24(*(undefined8 *)(*plVar1 + 0x18));
  func_0x0001053a0f8c(auStack_78);
  FUN_1053a1e28(auStack_68);
  func_0x00010076e550();
  func_0x00010076e558();
  return;
}



/* Entry: 1053a1d00; end: 1053a1dd3; -[SCNDeltaforceDeltaForceSyncClient update:callback:] */

void FUN_1053a1d00(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [80];
  
  func_0x000100c1a758();
  func_0x00010076a174();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  FUN_1053a3b9c(auStack_80);
  FUN_1053a36b8(auStack_90);
  (**(code **)(*plVar1 + 0x20))(plVar1,auStack_80,auStack_90);
  func_0x0001053a1f38(auStack_90);
  func_0x0001053a1e50(auStack_80);
  func_0x00010076e550();
  func_0x00010076e558();
  return;
}



/* Entry: 1053a1dd4; end: 1053a1e27; -[SCNDeltaforceDeltaForceSyncClient .cxx_destruct] */

void FUN_1053a1dd4(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110880860;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x00010076e508((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 1053a1e28; end: 1053a1ef3;  */

long FUN_1053a1e28(long param_1)

{
  long lStack_28;
  
  FUN_1053a12ec(param_1 + 0x18);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 1053a1ef4; end: 1053a1efb;  */

void FUN_1053a1ef4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x18;
    func_0x000100100fec();
  }
  param_1[1] = lVar2;
  return;
}


