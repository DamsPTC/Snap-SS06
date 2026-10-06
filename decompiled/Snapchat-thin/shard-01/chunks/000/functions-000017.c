/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100c229dc; end: 100c22a8b;  */

void FUN_100c229dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x19;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  undefined8 in_register_00005048;
  
  func_0x00010048971c();
  *(undefined1 *)(param_4 + 0x78) = 0;
  func_0x0001004b94ac();
  func_0x0001004b94f4();
  *(undefined8 *)(unaff_x19 + 0x70) = in_register_00005048;
  *(undefined8 *)(unaff_x19 + 0x68) = param_3;
  *(undefined8 *)(unaff_x19 + 0x60) = in_register_00005028;
  *(undefined8 *)(unaff_x19 + 0x58) = param_2;
  *(undefined8 *)(unaff_x19 + 0x50) = in_register_00005008;
  *(undefined8 *)(unaff_x19 + 0x48) = param_1;
  func_0x000100c22a24();
  if ((int)unaff_x19 != 0) {
    func_0x000104c01aa0();
                    /* WARNING: Could not recover jumptable at 0x0001004bad18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 100c22a8c; end: 100c22aeb;  */

long FUN_100c22a8c(void)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x19;
  undefined8 uStack_48;
  
  func_0x0001004bad1c();
  func_0x0001006136e8();
  lVar1 = unaff_x19 + 0x18;
  func_0x0001004bb090();
  func_0x000100613724();
  func_0x0001006137b4();
  func_0x0001006137c4();
  func_0x0001006137e0();
  if ((int)lVar1 != 0) {
    func_0x000104c019e4();
  }
  func_0x0001004b9658(uStack_48);
  if ((bool)in_ZR) {
    return lVar1;
  }
  func_0x000107c60e78();
  return *(long *)(lVar1 + 0x38);
}



/* Entry: 100c22aec; end: 100c22af3;  */

undefined8 FUN_100c22aec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 100c22af4; end: 100c22b0f; -[SCLensDataProviderConfigurationBuilder .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c22b34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c22b38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c22af4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)
            (*(undefined8 *)(param_1 + _DAT_1130346a0),param_2,&DAT_1130346a0,&DAT_1130346a8,
             &DAT_1130346b0);
  return;
}



/* Entry: 100c22b10; end: 100c22b5f;  */

/* WARNING: Possible PIC construction at 0x000100c22b34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c22b38) */

void FUN_100c22b10(long param_1,undefined8 param_2,long *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + *param_3));
  return;
}



/* Entry: 100c22b60; end: 100c22c53; -[SIGHeaderItemView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c22b9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c22bc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c22be8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c22c08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c22c28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c22c0c) */
/* WARNING: Removing unreachable block (ram,0x000100c22bec) */
/* WARNING: Removing unreachable block (ram,0x000100c22bcc) */
/* WARNING: Removing unreachable block (ram,0x000100c22ba0) */
/* WARNING: Removing unreachable block (ram,0x000100c22c2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c22b60(long param_1)

{
  func_0x000107c61120(param_1 + _DAT_112794ca4);
  func_0x000107c61120(param_1 + _DAT_112794cd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112794ce8,0);
  return;
}



/* Entry: 100c22c54; end: 100c22ccf; -[SIGHeaderTabBarRow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c22c78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c22c98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c22cb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c22c9c) */
/* WARNING: Removing unreachable block (ram,0x000100c22c7c) */
/* WARNING: Removing unreachable block (ram,0x000100c22cb8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c22c54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112794cf4,0);
  return;
}



/* Entry: 100c22cd0; end: 100c22dcb; -[SIGHeaderTitleRow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c22cf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c22d10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c22d30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c22d50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c22d70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c22d90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c22db0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c22d94) */
/* WARNING: Removing unreachable block (ram,0x000100c22d74) */
/* WARNING: Removing unreachable block (ram,0x000100c22d54) */
/* WARNING: Removing unreachable block (ram,0x000100c22d34) */
/* WARNING: Removing unreachable block (ram,0x000100c22d14) */
/* WARNING: Removing unreachable block (ram,0x000100c22cf8) */
/* WARNING: Removing unreachable block (ram,0x000100c22db4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c22cd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112794de8,0);
  return;
}



/* Entry: 100c22dcc; end: 100c22e4f; -[SIGHeaderTitleRowAccessoryViewContainer .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c22de0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c22e00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c22de4) */
/* WARNING: Removing unreachable block (ram,0x000100c22e04) */

void FUN_100c22dcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x60);
  return;
}



/* Entry: 100c22e50; end: 100c22fb7; -[SIGHeaderTitle .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c22e74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c22e90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c22eb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c22ed0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c22ef0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c22f10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c22f3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c22f5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c22f7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c22f9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c22f80) */
/* WARNING: Removing unreachable block (ram,0x000100c22f60) */
/* WARNING: Removing unreachable block (ram,0x000100c22f40) */
/* WARNING: Removing unreachable block (ram,0x000100c22f14) */
/* WARNING: Removing unreachable block (ram,0x000100c22ef4) */
/* WARNING: Removing unreachable block (ram,0x000100c22ed4) */
/* WARNING: Removing unreachable block (ram,0x000100c22eb4) */
/* WARNING: Removing unreachable block (ram,0x000100c22e94) */
/* WARNING: Removing unreachable block (ram,0x000100c22e78) */
/* WARNING: Removing unreachable block (ram,0x000100c22fa0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c22e50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112794d40,0);
  return;
}



/* Entry: 100c22fb8; end: 100c230ab; -[SIGHeaderItem .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c22fd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c22fe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c23008: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c2301c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c23034: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c2304c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c23060: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c23078: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c23064) */
/* WARNING: Removing unreachable block (ram,0x000100c23050) */
/* WARNING: Removing unreachable block (ram,0x000100c23038) */
/* WARNING: Removing unreachable block (ram,0x000100c23020) */
/* WARNING: Removing unreachable block (ram,0x000100c2300c) */
/* WARNING: Removing unreachable block (ram,0x000100c22fec) */
/* WARNING: Removing unreachable block (ram,0x000100c22fd4) */
/* WARNING: Removing unreachable block (ram,0x000100c2307c) */

void FUN_100c22fb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0xe8,0);
  return;
}



/* Entry: 100c230ac; end: 100c230d7; -[SIGHeaderItemTextInputTraits .cxx_destruct] */

void FUN_100c230ac(long param_1)

{
  func_0x000107c61120(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x40,0);
  return;
}



/* Entry: 100c230d8; end: 100c230df;  */

void FUN_100c230d8(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5ed2c();
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c230e0; end: 100c23123;  */

void FUN_100c230e0(long param_1,long param_2)

{
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5ed2c();
  }
  (**(code **)(param_2 + 0x10))(param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c23124; end: 100c2326f;  */

void FUN_100c23124(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c61174(param_2);
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    if (lVar1 == 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,param_2);
    }
    else {
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0xc2000000;
      puStack_50 = &UNK_108bcdddc;
      puStack_48 = &UNK_11084aaa8;
      func_0x000107c61174(lVar2);
      lStack_38 = lVar2;
      func_0x000107c61174(param_2);
      uStack_40 = param_2;
      func_0x00010007380c(lVar1,&puStack_60);
      func_0x000107c61170(uStack_40);
      func_0x000107c61170(lStack_38);
    }
  }
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100c23270; end: 100c232c3;  */

void FUN_100c23270(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bb5b8;
  func_0x000107c610f4(PTR_PTR_1126bb5b8);
  puVar2 = PTR_PTR_1126bb5c0;
  func_0x000107c61160(PTR_PTR_1126bb5c0);
  func_0x000107c477e4(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100c232c4; end: 100c23337; -[SCGrapheneFriendSyncRequestMetric2 init] */

undefined1 * FUN_100c232c4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fdd50;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100c23338; end: 100c233ab; -[SCFriendSyncGrapheneLogger initWithMetrics:] */

undefined1 * FUN_100c23338(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fdc90;
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



/* Entry: 100c233ac; end: 100c23437; -[SCFriendSyncGrapheneLogger logIncomingSyncCompletedWithMode:latencyMs:success:] */

void FUN_100c233ac(long param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110eec618;
  if (param_3 != 2) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110eec638;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110eec5f8;
  if (param_3 != 1) {
    ppuVar2 = ppuVar1;
  }
  func_0x000107c61174(ppuVar2);
  FUN_100c23438(*(undefined8 *)(param_1 + 8),ppuVar2,param_4);
  if ((param_5 & 1) == 0) {
    func_0x000108bf6e08(*(undefined8 *)(param_1 + 8),
                        &PTR____CFConstantStringClassReference_110ee6fb8,ppuVar2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 100c23438; end: 100c235ab;  */

void FUN_100c23438(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_2);
  if (param_1 != 0) {
    plVar2 = *(long **)(param_1 + 8);
    func_0x000107c61174(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f508987;
    }
    else {
      puVar1 = param_2;
      func_0x000107c61178(param_2);
      func_0x000107c3ac4c();
    }
    func_0x000107c61170(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110ab7b20,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      func_0x000107c60e14(auStack_60[0]);
    }
  }
  puVar1 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_2);
  func_0x000107c60bd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(puVar1 + 0x28));
  return;
}



/* Entry: 100c235ac; end: 100c235af;  */

void FUN_100c235ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100c235b0; end: 100c23607;  */

void FUN_100c235b0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c23608; end: 100c2364b; -[SCManagedCaptureSessionImpl _AVSessionDidStartRunning] */

void FUN_100c23608(long param_1)

{
  param_1 = param_1 + 0x18;
  func_0x000107c61148(param_1);
  func_0x000107c4c230();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c2364c; end: 100c2384b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2364c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  undefined1 auStack_80 [48];
  
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar1 = *param_1;
  func_0x000107c61174(uVar1);
  uVar2 = 0xd000000000000038;
  func_0x0001000a9a18(0xd000000000000038,0x800000010efc2680);
  func_0x000107c61170(uVar1);
  lVar3 = unaff_x20 + _DAT_112dd8860;
  func_0x000107c61618();
  if (lVar3 == 0) {
    return;
  }
  lVar4 = unaff_x20 + _DAT_112dd8858;
  func_0x000107c61618();
  if (lVar4 == 0) {
    func_0x000107c615e8(lVar3);
    return;
  }
  lVar5 = unaff_x20 + _DAT_112dd8868;
  func_0x000107c61618();
  lVar6 = lVar3;
  func_0x000107c5dd84();
  func_0x000107c61180();
  if (lVar5 == 0) {
    if (lVar6 == 0) goto LAB_100c237ec;
    func_0x000107c5bbc8(lVar6);
  }
  else {
    if (lVar6 != 0) {
      lVar7 = lVar6;
      func_0x000107c4a550();
      if ((int)lVar7 != 0) {
        uVar8 = *(ulong *)(unaff_x20 + _DAT_112dd8880);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (uVar8 == 0) {
LAB_100c237c4:
          uVar1 = 0;
        }
        else {
          uVar9 = uVar8;
          func_0x000107c3f314();
          func_0x000107c61180();
          func_0x000107c615e8(uVar8);
          uVar8 = uVar9;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(uVar9);
          if (uVar8 == 0) goto LAB_100c237c4;
          uVar9 = uVar8;
          func_0x000107c3dc0c();
          func_0x000107c615e8(uVar8);
          if ((uVar9 & 1) == 0) goto LAB_100c237c4;
          uVar1 = 0x3fc999999999999a;
        }
        func_0x000107c5be84(uVar1,lVar6);
      }
      func_0x000107c615e8(lVar6);
    }
    func_0x000107c5bbcc(lVar4);
    lVar6 = lVar5;
  }
  func_0x000107c615e8(lVar6);
LAB_100c237ec:
  func_0x000107c61428(param_1,auStack_80,0,0);
  uVar1 = *param_1;
  func_0x000107c61174(uVar1);
  func_0x0001000aa0a8(uVar2);
  func_0x000107c615e8(lVar3);
  func_0x000107c615e8(lVar4);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 100c2384c; end: 100c238ef; -[SCManagedVideoStreamer startStreaming] */

/* WARNING: Possible PIC construction at 0x000100c238a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c238ac) */

void FUN_100c2384c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = param_1;
  func_0x000107c4a550();
  if ((uVar1 & 1) != 0) {
    return;
  }
  func_0x000107c5586c(param_1,param_2,1);
  lVar2 = param_1 + 8;
  func_0x000107c61148(lVar2);
  func_0x000107c5de14();
  func_0x000107c61180();
  func_0x000107c5c148();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100c238f0; end: 100c2391f; -[SCCameraHardwareResourceImpl stateListener] */

void FUN_100c238f0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xa8);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x80);
  }
  func_0x000107c61174(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100c23920; end: 100c23927; -[SCCameraHardwareStartOperation type] */

undefined8 FUN_100c23920(void)

{
  return 2;
}



/* Entry: 100c23928; end: 100c239b7;  */

/* WARNING: Possible PIC construction at 0x000100c2398c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c2399c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c23990) */
/* WARNING: Removing unreachable block (ram,0x000100c239a0) */

void FUN_100c23928(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 8;
  func_0x000107c61148(lVar1);
  func_0x000107c4c238();
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c42c44();
  func_0x000107c61180();
  func_0x000107c41a28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100c239b8; end: 100c239eb; -[SCManagedCapturerStateCoordinatorImpl exposureStateManager] */

void FUN_100c239b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100c23a0c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c239ec; end: 100c23a0b;  */

void FUN_100c239ec(void)

{
  func_0x000107c61168(&PTR_PTR_1127d7b70);
  return;
}



/* Entry: 100c23a0c; end: 100c23abf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100c23a0c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 *puVar8;
  long lStack_50;
  long lStack_48;
  
  lVar2 = _DAT_112da08e8;
  plVar5 = &lStack_50;
  puVar6 = *(undefined1 **)(unaff_x20 + _DAT_112da08e8);
  puVar8 = puVar6;
  if (puVar6 == (undefined1 *)0x1) {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112da08c0);
    lVar3 = 0;
    FUN_100c239ec();
    lVar4 = lVar3;
    func_0x000107c610f8();
    *(undefined8 *)(lVar4 + _DAT_112da07d0) = uVar7;
    puVar1 = PTR_s_init_1125d9248;
    lStack_50 = lVar4;
    lStack_48 = lVar3;
    func_0x000107c61174(uVar7);
    func_0x000107c61154(&lStack_50,puVar1);
    uVar7 = *(undefined8 *)(unaff_x20 + lVar2);
    *(long **)(unaff_x20 + lVar2) = plVar5;
    func_0x000107c61174();
    func_0x00010011ecd0(uVar7);
    puVar8 = (undefined1 *)plVar5;
  }
  func_0x00010011ece0(puVar6);
  return puVar8;
}



/* Entry: 100c23ac0; end: 100c23b6b; -[SCManagedCapturerExposureStateManagerImpl didChangeAdjustingExposure:] */

/* WARNING: Possible PIC construction at 0x000100c23b4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c23b50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c23ac0(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112da07d0);
  puVar1 = &UNK_1103be4d0;
  func_0x000107c613fc(&UNK_1103be4d0,0x11,7);
  puVar1[0x10] = param_3;
  puVar2 = &UNK_1103be480;
  func_0x000107c613fc(&UNK_1103be480,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  func_0x000107c61174(param_1);
  FUN_100c23b6c(0x100c24054,puVar1,uVar3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 100c23b6c; end: 100c2404b;  */

/* WARNING: Possible PIC construction at 0x000100c23be0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c23c10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c23c60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c23c9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c23d34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c23d54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c23e58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c23ed0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c23ef8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c23e44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c23ffc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c23fe0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c23fc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c23f80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c23f94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c23f84) */
/* WARNING: Removing unreachable block (ram,0x000100c23fe4) */
/* WARNING: Removing unreachable block (ram,0x000100c23e48) */
/* WARNING: Removing unreachable block (ram,0x000100c23fc4) */
/* WARNING: Removing unreachable block (ram,0x000100c23ffc) */
/* WARNING: Removing unreachable block (ram,0x000100c23efc) */
/* WARNING: Removing unreachable block (ram,0x000100c23ed4) */
/* WARNING: Removing unreachable block (ram,0x000100c23e5c) */
/* WARNING: Removing unreachable block (ram,0x000100c23d58) */
/* WARNING: Removing unreachable block (ram,0x000100c23d38) */
/* WARNING: Removing unreachable block (ram,0x000100c23ca0) */
/* WARNING: Removing unreachable block (ram,0x000100c23e54) */
/* WARNING: Removing unreachable block (ram,0x000100c23d14) */
/* WARNING: Removing unreachable block (ram,0x000100c23c64) */
/* WARNING: Removing unreachable block (ram,0x000100c23c14) */
/* WARNING: Removing unreachable block (ram,0x000100c24020) */
/* WARNING: Removing unreachable block (ram,0x000100c23c48) */
/* WARNING: Removing unreachable block (ram,0x000100c23be4) */
/* WARNING: Removing unreachable block (ram,0x000100c23f98) */
/* WARNING: Removing unreachable block (ram,0x000100c23f9c) */
/* WARNING: Removing unreachable block (ram,0x000100c24000) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c23b6c(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  if (param_1 == 0) {
    puVar3 = &UNK_1103be908;
    func_0x000107c613fc(&UNK_1103be908,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,param_3);
    puVar1 = &UNK_1103c09c8;
    func_0x000107c613fc(&UNK_1103c09c8,0x28,7);
    *(undefined **)(puVar1 + 0x10) = puVar3;
    *(code **)(puVar1 + 0x18) = FUN_100c71cf8;
    *(ulong *)(puVar1 + 0x20) = param_4;
    uVar4 = *(ulong *)(param_3 + _DAT_112da0930);
    func_0x000107c61580(param_4,3);
    func_0x000107c6157c(puVar3);
    func_0x000107c49be8();
    if ((uVar4 & 1) == 0) {
      func_0x000107c61574(puVar3);
      puVar3 = &UNK_1103c09f0;
      func_0x000107c613fc(&UNK_1103c09f0,0x20,7);
      *(undefined8 *)(puVar3 + 0x10) = 0x101465498;
      *(undefined **)(puVar3 + 0x18) = puVar1;
      uStack_70 = 0x101465350;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_1103c0a08;
      puStack_68 = puVar3;
      func_0x000107c60bc4(&puStack_90);
      puVar3 = puStack_68;
      func_0x000107c6157c(puVar1);
    }
    else {
      func_0x000107c61428(puVar3 + 0x10,&puStack_90,0,0);
      puVar2 = puVar3 + 0x10;
      func_0x000107c61618();
      if (puVar2 == (undefined *)0x0) {
        func_0x000107c61578(param_4,2);
      }
      else {
        uVar4 = param_4;
        FUN_100c71d00();
        if (((uVar4 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
          func_0x000107c61578(param_4,2);
        }
        else {
          FUN_100c3baf4();
          func_0x000107c61170(puVar2);
          puVar3 = puVar1;
        }
      }
    }
  }
  else {
    func_0x0001002e8978(0);
    puVar3 = *(undefined **)(param_3 + _DAT_112da0920);
    func_0x000107c61580(param_4,2);
    func_0x000100382e80(param_1,param_2);
    func_0x000107c6157c(puVar3);
    func_0x00010006c804();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 100c2404c; end: 100c24057;  */

void FUN_100c2404c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c24058; end: 100c2407f;  */

void FUN_100c24058(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x0001002e9728(param_1,*(undefined1 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100c24080; end: 100c24097;  */

void FUN_100c24080(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100c24098; end: 100c240ef;  */

void FUN_100c24098(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  func_0x000107c61148();
  if (lVar1 == 0) {
    if (*(long *)(param_1 + 0x30) != 0) {
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
    }
  }
  else {
    func_0x000107c3c8e8(lVar1,param_2,*(undefined8 *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                        *(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100c240f0; end: 100c2416f;  */

/* WARNING: Possible PIC construction at 0x000100c24150: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c24154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c240f0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112761fb4;
  func_0x000107c61148(lVar1);
  func_0x000107c42eb4();
  func_0x000107c61180();
  uVar2 = 3;
  func_0x0001003a49a8(3);
  func_0x000107c61180();
  func_0x000107c548e8(lVar1,param_2,2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 100c24170; end: 100c242eb; -[SCCameraHardwareServicesAPIImpl _startRunningWithAvailabilityOptions:cameraDeviceSettingsResolver:token:completionHandler:] */

void FUN_100c24170(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5cb88();
  func_0x000107c61180();
  func_0x000107c3d910();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c3c62c(param_1);
  func_0x000107c61144(auStack_58,param_1);
  uVar2 = param_4;
  func_0x000107c5c734(param_4);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_68,auStack_58);
  func_0x000107c61174(param_6);
  uStack_60 = param_3;
  func_0x000107c43ea0(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_6);
  func_0x000107c61120(auStack_68);
  func_0x000107c61120(auStack_58);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 100c242ec; end: 100c242f3; -[SCCameraHardwareResourceImpl tokenSet] */

undefined8 FUN_100c242ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 100c242f4; end: 100c24343; -[SCCapturerTokenSetImpl addToken:] */

/* WARNING: Possible PIC construction at 0x000100c24330: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c24334) */

void FUN_100c242f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c5cb88(param_1);
  func_0x000107c61180();
  func_0x000107c3d798();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c24344; end: 100c2434b; -[SCCapturerTokenSetImpl tokenSet] */

undefined8 FUN_100c24344(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100c2434c; end: 100c24527; -[SCCameraHardwareServicesAPIImpl _setupBlackCameraDetector] */

void FUN_100c2434c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c3f5f0();
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    return;
  }
  puVar3 = PTR_PTR_1126b7030;
  func_0x000107c610f4(PTR_PTR_1126b7030);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar4);
  func_0x000107c61180();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c5c734(uVar5);
  func_0x000107c61180();
  uVar6 = *(undefined8 *)(param_1 + 0x80);
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c45cfc(puVar3);
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar7);
  func_0x000107c61180();
  func_0x000107c531f8();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar5);
  func_0x000107c61180();
  uVar6 = uVar5;
  func_0x000107c3f5f0();
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar7);
  func_0x000107c61180();
  uVar4 = uVar7;
  func_0x000107c3ea7c();
  func_0x000107c61180();
  func_0x000107c53fcc();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bea2450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setBlackCameraNoOutputDetectorE_1125862b8,1)
  ;
  return;
}



/* Entry: 100c24528; end: 100c2472b; -[SCCaptureSessionFixer initWithCaptureResource:applicationState:cameraHardwareServicesAPI:captureDeviceManager:managedCaptureSession:deviceCapacityAnalyzer:systemConfiguration:cameraHardwareRequestHandler:featureStartupEventBus:appStartExperimentReader:] */

undefined8 *
FUN_100c24528(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  puStack_68 = PTR_PTR_1126f84b0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0(puVar1 + 7,param_3);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 10,param_5);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 8,param_7);
    func_0x000107c611a0(puVar1 + 9,param_8);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_11;
    func_0x000107c61170(uVar2);
    uVar2 = param_10;
    func_0x000107c5d6fc();
    func_0x000107c61180();
    uVar4 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    func_0x000107c61170(uVar4);
    puVar3 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c3acf8(puVar1);
  }
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100c2472c; end: 100c2472f;  */

void FUN_100c2472c(void)

{
  return;
}



/* Entry: 100c24730; end: 100c247cb; -[SCCaptureSessionFixer _addObservers] */

/* WARNING: Possible PIC construction at 0x000100c24780: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c24784) */

void FUN_100c24730(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  func_0x000107c61180();
  func_0x000107c3d7bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100c247cc; end: 100c247fb; -[SCCameraHardwareResourceImpl setCaptureSessionFixer:] */

void FUN_100c247cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c247fc; end: 100c24803; -[SCCameraHardwareResourceImpl blackCameraNoOutputDetector] */

undefined8 FUN_100c247fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 100c24804; end: 100c2480f; -[SCBlackCameraNoOutputDetectorImpl setDelegate:] */

void FUN_100c24804(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 100c24810; end: 100c24af7; -[SCCameraHardwareServicesAPIImpl _setBlackCameraNoOutputDetectorEnabled:] */

/* WARNING: Possible PIC construction at 0x000100c24890: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c248a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c24960: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c24970: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c24980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c24990: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c249a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c24a90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c24aa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c24a2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c24a94) */
/* WARNING: Removing unreachable block (ram,0x000100c249a4) */
/* WARNING: Removing unreachable block (ram,0x000100c24994) */
/* WARNING: Removing unreachable block (ram,0x000100c24984) */
/* WARNING: Removing unreachable block (ram,0x000100c24974) */
/* WARNING: Removing unreachable block (ram,0x000100c24964) */
/* WARNING: Removing unreachable block (ram,0x000100c248a4) */
/* WARNING: Removing unreachable block (ram,0x000100c24ac4) */
/* WARNING: Removing unreachable block (ram,0x000100c248b0) */
/* WARNING: Removing unreachable block (ram,0x000100c24894) */
/* WARNING: Removing unreachable block (ram,0x000100c24a30) */
/* WARNING: Removing unreachable block (ram,0x000100c24a8c) */

void FUN_100c24810(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  if (param_3 == 0) {
    func_0x000107c5c734(*(undefined8 *)(param_1 + 8));
    func_0x000107c61180();
    func_0x000107c3ea7c();
    func_0x000107c61180();
    func_0x000107c5be50();
  }
  else {
    if (lRam00000001136ba2f0 != -1) {
      func_0x00010002a2fc(0x1136ba2f0,&PTR___NSConcreteGlobalBlock_110876af0);
    }
    lVar1 = *(long *)(param_1 + 8);
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c5dd84();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c5c734(*(undefined8 *)(param_1 + 8));
      func_0x000107c61180();
      func_0x000107c3ea7c();
      func_0x000107c61180();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100c24af8; end: 100c24b4f;  */

/* WARNING: Possible PIC construction at 0x000100c24b3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c24b40) */

void FUN_100c24af8(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x000107c4f2b0(PTR__OBJC_CLASS___NSProcessInfo_1126aeba8);
  func_0x000107c61180();
  func_0x000107c3e148();
  func_0x000107c61180();
  func_0x000107c40404();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100c24b50; end: 100c24ce3; -[SCBlackCameraNoOutputDetectorImpl startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:] */

void FUN_100c24b50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61144(auStack_68,param_1);
  if (*(long *)(param_1 + 0x20) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar1;
    func_0x000107c61170(uVar5);
    uVar5 = param_5;
    func_0x000107c5c734(param_5);
    func_0x000107c61180();
    uVar2 = uVar5;
    func_0x000107c52094();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c5d58c();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_70,auStack_68);
    uVar4 = uVar3;
    func_0x000107c5c320(uVar3);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar5);
    func_0x000107c61120(auStack_70);
  }
  func_0x000107c61120(auStack_68);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c24ce4; end: 100c24dc3; -[SCBlackCameraNoOutputDetectorImpl startObservingManagedVideoDataSourceOutputEvent:] */

void FUN_100c24ce4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  if (*(long *)(param_1 + 0x18) == 0) {
    func_0x000107c61144(auStack_38,param_1);
    func_0x000107c6111c(auStack_40,auStack_38);
    uVar1 = param_3;
    func_0x000107c5c320();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_40);
    func_0x000107c61120(auStack_38);
  }
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c24dc4; end: 100c24dcb; -[SCCameraDeviceSettingsResolverDecorator getActiveDeviceSettingsMapAsynchronously:] */

void FUN_100c24dc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc1f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_getActiveDeviceSettingsMapAsynch_1125ce180);
  return;
}



/* Entry: 100c24dcc; end: 100c24ea7; -[SCCameraDeviceSettingsResolver getActiveDeviceSettingsMapAsynchronously:] */

void FUN_100c24dcc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  if (param_3 != 0) {
    func_0x000107c61144(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x000107c6111c(auStack_40,auStack_38);
    func_0x000107c61174(param_3);
    func_0x000107c4e524(uVar1);
    func_0x000107c61170(param_3);
    func_0x000107c61120(auStack_40);
    func_0x000107c61120(auStack_38);
  }
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c24ea8; end: 100c24fa7; -[SCCapturerTokenImpl dealloc] */

void FUN_100c24ea8(long param_1)

{
  undefined8 uVar1;
  long lStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174();
  func_0x000107c611a4(param_1);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    *(undefined1 *)(param_1 + 0x20) = 0;
    func_0x000107c6111c(auStack_38,param_1 + 0x18);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_100c27210;
    puStack_48 = &UNK_1108434b0;
    func_0x000107c6111c(auStack_40,auStack_38);
    func_0x000107c4e524(uVar1);
    func_0x000107c61120(auStack_40);
    func_0x000107c61120(auStack_38);
  }
  func_0x000107c611a8(param_1);
  func_0x000107c61170(param_1);
  puStack_68 = PTR_PTR_1126e75e8;
  lStack_70 = param_1;
  func_0x000107c61154(&lStack_70,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100c24fa8; end: 100c25033; -[SCCapturerTokenImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c24fc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c24fcc) */

void FUN_100c24fa8(long param_1)

{
  func_0x000107c61120(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 100c25034; end: 100c2513b; -[SCCameraCaptureRequestHandler setLastEvent:] */

void FUN_100c25034(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  func_0x000107c61170(uVar1);
  puVar2 = auStack_38;
  func_0x000107c61144(puVar2,param_1);
  func_0x000100078e94();
  func_0x000107c61180();
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c61174(param_3);
  func_0x000107c4e524(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c2513c; end: 100c25663; -[SCCameraCaptureInitOperation execute] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2513c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  
  puVar1 = PTR_PTR_1126b7060;
  func_0x000107c610f4(PTR_PTR_1126b7060);
  lVar20 = (long)_DAT_112724634;
  lVar2 = param_1 + lVar20;
  func_0x000107c61148(lVar2);
  lVar12 = (long)_DAT_112724650;
  uVar16 = *(undefined8 *)(param_1 + lVar12);
  lVar3 = param_1 + _DAT_112724630;
  func_0x000107c61148(lVar3);
  lVar13 = (long)_DAT_112724648;
  uVar18 = *(undefined8 *)(param_1 + lVar13);
  lVar14 = (long)_DAT_112724640;
  uVar19 = *(undefined8 *)(param_1 + lVar14);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112724658);
  func_0x000107c5c734(uVar4);
  func_0x000107c61180();
  func_0x000107c45d04(puVar1,param_2,lVar2,uVar16,lVar3,uVar18,uVar19,uVar4);
  lVar5 = param_1 + lVar20;
  func_0x000107c61148(lVar5);
  func_0x000107c598c8();
  func_0x000107c61170(lVar5);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  lVar2 = param_1 + lVar20;
  func_0x000107c61148(lVar2);
  lVar6 = lVar2;
  func_0x000107c5bde4();
  func_0x000107c61180();
  lVar3 = param_1 + lVar20;
  func_0x000107c61148(lVar3);
  lVar7 = lVar3;
  func_0x000107c3f630();
  func_0x000107c61180();
  lVar5 = param_1 + lVar20;
  func_0x000107c61148(lVar5);
  lVar8 = lVar5;
  func_0x000107c5bcc0();
  func_0x000107c61180();
  lVar15 = lVar8;
  func_0x000107c40794();
  lVar9 = param_1 + lVar20;
  func_0x000107c61148(lVar9);
  lVar10 = lVar9;
  func_0x000107c4c238();
  func_0x000107c61180();
  func_0x000107c5bb2c(lVar6,param_2,lVar7,lVar15,lVar10);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar2);
  puVar1 = PTR_PTR_1126b9dd0;
  func_0x000107c610f4();
  puVar11 = PTR_PTR_1126b9dd8;
  func_0x000107c610f4();
  lVar2 = param_1 + lVar20;
  func_0x000107c61148();
  lVar15 = (long)_DAT_112724638;
  lVar3 = param_1 + lVar15;
  func_0x000107c61148();
  func_0x000107c45d08(puVar11,param_2,lVar2,lVar3,*(undefined8 *)(param_1 + lVar12));
  lVar5 = param_1 + _DAT_11272464c;
  func_0x000107c61148(lVar5);
  uVar4 = *(undefined8 *)(param_1 + lVar12);
  lVar9 = param_1 + lVar20;
  func_0x000107c61148(lVar9);
  uVar16 = *(undefined8 *)(param_1 + _DAT_11272463c);
  uVar21 = *(undefined8 *)(param_1 + lVar13);
  uVar18 = *(undefined8 *)(param_1 + _DAT_112724644);
  uVar19 = *(undefined8 *)(param_1 + lVar14);
  uVar17 = *(undefined8 *)(param_1 + _DAT_112724654);
  lVar6 = param_1 + _DAT_11272465c;
  func_0x000107c61148();
  lVar7 = param_1 + _DAT_112724660;
  func_0x000107c61148();
  func_0x000107c494b8(puVar1,param_2,puVar11,lVar5,uVar4,lVar9,uVar16,uVar21,uVar18,uVar19,uVar17,
                      lVar6,lVar7,*(undefined8 *)(param_1 + _DAT_112724664));
  lVar8 = param_1 + lVar20;
  func_0x000107c61148(lVar8);
  func_0x000107c5a508();
  func_0x000107c61170(lVar8);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  puVar1 = PTR_PTR_1126b9de0;
  func_0x000107c610f4(PTR_PTR_1126b9de0);
  lVar2 = param_1 + lVar20;
  func_0x000107c61148(lVar2);
  func_0x000107c45d00(puVar1,param_2,lVar2,*(undefined8 *)(param_1 + lVar12));
  lVar3 = param_1 + lVar20;
  func_0x000107c61148(lVar3);
  func_0x000107c528ac();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(lVar2);
  lVar2 = param_1 + lVar20;
  func_0x000107c61148(lVar2);
  lVar5 = lVar2;
  func_0x000107c5dd84();
  func_0x000107c61180();
  lVar3 = param_1 + lVar20;
  func_0x000107c61148(lVar3);
  lVar9 = lVar3;
  func_0x000107c5bde4();
  func_0x000107c61180();
  func_0x000107c3d7c0(lVar5,param_2,lVar9,2);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar2);
  lVar2 = param_1 + lVar20;
  func_0x000107c61148();
  lVar5 = lVar2;
  func_0x000107c5dd84();
  func_0x000107c61180();
  lVar3 = param_1 + lVar20;
  func_0x000107c61148();
  lVar9 = lVar3;
  func_0x000107c3e0cc();
  func_0x000107c61180();
  func_0x000107c3d7c0(lVar5,param_2,lVar9,2);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar2);
  lVar15 = param_1 + lVar15;
  func_0x000107c61148(lVar15);
  lVar3 = lVar15;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar2 = param_1 + lVar20;
  func_0x000107c61148(lVar2);
  lVar5 = lVar2;
  func_0x000107c5bde4();
  func_0x000107c61180();
  func_0x000107c3d740(lVar3,param_2,lVar5);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar15);
  param_1 = param_1 + lVar20;
  func_0x000107c61148(param_1);
  lVar2 = param_1;
  func_0x000107c5bcc0();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 100c25664; end: 100c2570f;  */

/* WARNING: Possible PIC construction at 0x000100c256e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c256f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c256e8) */

void FUN_100c25664(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar1 != 0) {
    func_0x000107c40794(*(undefined8 *)(lVar1 + 0x58));
    lVar3 = *(long *)(param_1 + 0x20);
    lVar2 = lVar1;
    func_0x000107c3b828(lVar1);
    func_0x000107c61180();
    func_0x000107c3b7d4(lVar1);
    func_0x000107c61180();
    (**(code **)(lVar3 + 0x10))(lVar3,lVar2,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100c25710; end: 100c258b3; -[SCManagedStillImageCapturerV2 initWithCaptureResource:captureDeviceManager:managedCaptureSession:cameraCreationDelayLogger:systemConfiguration:audioSession:] */

undefined1 *
FUN_100c25710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_58 = PTR_PTR_1126e8a68;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c4f7e8();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    func_0x000107c61170(uVar4);
    *(undefined4 *)((long)puVar1 + 0x10) = 0x3e4ccccd;
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x58),param_3);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0xa8);
    *(undefined8 *)((long)puVar1 + 0xa8) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined8 *)((long)puVar1 + 0x88) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126b9e00;
    func_0x000107c610f4();
    func_0x000107c45cf8();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    func_0x000107c61170(uVar2);
    *(undefined2 *)((long)puVar1 + 0xa0) = 0;
    *(undefined4 *)((long)puVar1 + 0x48) = 0;
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c258b4; end: 100c25a7b; -[SCCameraDeviceSettingsResolver _getDeviceSettingsMapFromActiveSettingsProviderDict:] */

void FUN_100c258b4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c40808();
  if (lVar1 == 0) {
    param_1 = *(long *)(param_1 + 0x20);
    func_0x000107c61174(param_1);
  }
  else {
    lVar1 = param_1;
    func_0x000107c3c880();
    func_0x000107c61180();
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x3032000000;
    puStack_58 = &UNK_1069ac0ac;
    puStack_50 = &UNK_1069ac0bc;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x2020000000;
    uStack_78 = 0;
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puStack_48 = puVar2;
    func_0x000107c61174(lVar1);
    func_0x000107c61174(param_3);
    func_0x000107c429c4(uVar3);
    if (*(char *)(puStack_88 + 3) == '\x01') {
      func_0x000107c3b828(param_1);
      func_0x000107c61180();
    }
    else {
      param_1 = puStack_68[5];
      func_0x000107c61174(param_1);
    }
    func_0x000107c61170(param_3);
    func_0x000107c61170(lVar1);
    func_0x000107c60bcc(&uStack_90,8);
    func_0x000107c60bcc(&uStack_70,8);
    func_0x000107c61170(puStack_48);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 100c25a7c; end: 100c25aeb; -[SCCaptureVideoDataSourceObserver initWithCaptureResource:] */

undefined1 * FUN_100c25a7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f0028;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_3);
    *(undefined1 *)((long)puVar1 + 0x20) = 0;
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c25aec; end: 100c25b43; -[SCCameraHardwareResourceImpl setStillImageCapturer:] */

/* WARNING: Possible PIC construction at 0x000100c25b20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c25b24) */

void FUN_100c25aec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c25b44; end: 100c25dff; -[SCCameraDeviceSettingsResolver _generateFeatureNamesFromActiveSettingsProviderDict:] */

/* WARNING: Possible PIC construction at 0x000100c25c34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c25cc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c25d40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c25d50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c25d80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c25db4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c25e70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c25d84) */
/* WARNING: Removing unreachable block (ram,0x000100c25d94) */
/* WARNING: Removing unreachable block (ram,0x000100c25d44) */
/* WARNING: Removing unreachable block (ram,0x000100c25ccc) */
/* WARNING: Removing unreachable block (ram,0x000100c25d54) */
/* WARNING: Removing unreachable block (ram,0x000100c25d60) */
/* WARNING: Removing unreachable block (ram,0x000100c25cd8) */
/* WARNING: Removing unreachable block (ram,0x000100c25c38) */
/* WARNING: Removing unreachable block (ram,0x000100c25d7c) */
/* WARNING: Removing unreachable block (ram,0x000100c25c6c) */
/* WARNING: Removing unreachable block (ram,0x000100c25c78) */
/* WARNING: Removing unreachable block (ram,0x000100c25c7c) */
/* WARNING: Removing unreachable block (ram,0x000100c25c8c) */
/* WARNING: Removing unreachable block (ram,0x000100c25c94) */
/* WARNING: Removing unreachable block (ram,0x000100c25db8) */
/* WARNING: Removing unreachable block (ram,0x000100c25dfc) */
/* WARNING: Removing unreachable block (ram,0x000100c25e74) */
/* WARNING: Removing unreachable block (ram,0x000100c25e40) */
/* WARNING: Removing unreachable block (ram,0x000100c25dd8) */
/* WARNING: Removing unreachable block (ram,0x000107c61110) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf288) */
/* WARNING: Removing unreachable block (ram,0x000100c25bfc) */

void FUN_100c25b44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  func_0x000107c61174(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c41988(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x000107c61180();
  lVar3 = *(long *)(param_1 + 0x18);
  func_0x000107c3db60();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c4080c();
  uVar1 = uRam0000000000000000;
  if (lVar4 != 0) {
    lVar3 = *(long *)(param_1 + 0x40);
    func_0x000107c40794(lVar3);
    func_0x000107c56bd8(puVar2,param_2,lVar3,uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 100c25e00; end: 100c25e8f; -[SCWithLatestFromObserver next:] */

/* WARNING: Possible PIC construction at 0x000100c25e70: Changing call to branch */

void FUN_100c25e00(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  func_0x000107c61174(param_3);
  func_0x000107c611ec(param_1 + 0x28);
  lVar3 = *(long *)(param_1 + 0x18);
  func_0x000107c61174(lVar3);
  func_0x000107c611f0(param_1 + 0x28);
  if (lVar3 == 0) {
    func_0x000107c61170(0);
  }
  else {
    lVar2 = *(long *)(param_1 + 8);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    (**(code **)(lVar2 + 0x10))(lVar2,param_3,lVar3);
    func_0x000107c61180();
    func_0x000107c4d664(uVar1);
    param_3 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c25e90; end: 100c25ee3;  */

void FUN_100c25e90(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_2);
  func_0x000107c3ebcc();
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c61174(param_2);
    uVar1 = param_2;
  }
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c25ee4; end: 100c25f63;  */

/* WARNING: Possible PIC construction at 0x000100c25f2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c25f4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c25f30) */
/* WARNING: Removing unreachable block (ram,0x000100c25f50) */

void FUN_100c25ee4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c52fd0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c25f64; end: 100c25fcb; -[SCManagedStillImageCapturerV2 setCameraCaptureLensProvider:] */

void FUN_100c25f64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c611ec(param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c52fd0(*(undefined8 *)(param_1 + 0x30),param_2,param_3);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x48);
  return;
}



/* Entry: 100c25fcc; end: 100c25fd7; -[SCCaptureVideoDataSourceObserver setCameraCaptureLensProvider:] */

void FUN_100c25fcc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 100c25fd8; end: 100c26057; -[SCManagedStillImageCapturerV2 setCameraMLRequestHandler:] */

/* WARNING: Possible PIC construction at 0x000100c26024: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c26044: Changing call to branch */

void FUN_100c25fd8(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  
  func_0x000107c61174(param_3);
  uVar1 = param_1;
  func_0x000107c3b5c8();
  if ((uVar1 & 1) == 0) {
    func_0x000107c61174(param_3);
    lVar2 = *(long *)(param_1 + 0xb8);
    *(long *)(param_1 + 0xb8) = param_3;
  }
  else {
    func_0x000107c611ec(param_1 + 0x48);
    if (*(long *)(param_1 + 0xb8) == param_3) {
      func_0x000107c611f0(param_1 + 0x48);
      lVar2 = param_3;
    }
    else {
      func_0x000107c61174(param_3);
      lVar2 = *(long *)(param_1 + 0xb8);
      *(long *)(param_1 + 0xb8) = param_3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100c26058; end: 100c260cf; -[SCManagedStillImageCapturerV2 _enableThreadSafeCameraMLRequestHandlerSetter] */

undefined8 FUN_100c26058(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c3f0ec();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c426b4();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  return uVar4;
}



/* Entry: 100c260d0; end: 100c261eb;  */

void FUN_100c260d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar1 == 0) {
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    }
  }
  else {
    func_0x000107c6111c(auStack_50,param_1 + 0x28);
    uStack_48 = *(undefined8 *)(param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar2);
    func_0x000107c3c990(lVar1);
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_50);
  }
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100c261ec; end: 100c26203; -[SCCameraHardwareConfigurationImpl enableThreadSafeCameraMLRequestHandlerSetter] */

void FUN_100c261ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd0c78,0,0);
  return;
}



/* Entry: 100c26204; end: 100c26507; -[SCCameraHardwareServicesAPIImpl _submitStartOperationsWithActiveDeviceSettingsMap:availabilityOptions:activeFeatures:completionHandler:] */

void FUN_100c26204(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0;
  func_0x000107c429c4(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126b00d0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  uVar4 = uVar2;
  func_0x000107c5bcc0();
  func_0x000107c61180();
  func_0x000107c4193c();
  func_0x000107c4968c(puVar3);
  func_0x000107c61180();
  func_0x000107c5c2bc(uVar1);
  func_0x000107c611b0();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  func_0x000107c5c734(uVar4);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126b00d0;
  func_0x000107c5d464(PTR_PTR_1126b00d0);
  func_0x000107c61180();
  func_0x000107c5c2bc(uVar4);
  func_0x000107c611b0();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar4);
  lVar5 = *(long *)(param_1 + 0x80);
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126b00d0;
  func_0x000107c5bc44(PTR_PTR_1126b00d0);
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c5c2bc();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lVar5);
  if ((param_6 != 0) && (lVar6 != 0)) {
    puVar3 = PTR_PTR_1126b7040;
    func_0x000107c5aa24(PTR_PTR_1126b7040);
    func_0x000107c61180();
    puVar7 = puVar3;
    func_0x000107c3eb00();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c3d658(puVar7);
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x000107c4c188(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    func_0x000107c61180();
    func_0x000107c3d7d0();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar7);
  }
  func_0x000107c61170(lVar6);
  func_0x000107c60bcc(&uStack_90,8);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c26508; end: 100c26567;  */

void FUN_100c26508(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  if (*(char *)(lVar2 + 0x18) == '\x01') {
    *(undefined1 *)(lVar2 + 0x18) = 1;
    return;
  }
  func_0x000107c5dd6c();
  func_0x000107c61180();
  uVar1 = param_3;
  func_0x000107c5ace0();
  *(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c26568; end: 100c26783; -[SCManagedStillImageCapturerV2 startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:] */

void FUN_100c26568(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61144(auStack_78,param_1);
  if (*(long *)(param_1 + 0x80) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar5 = *(undefined8 *)(param_1 + 0x80);
    *(undefined **)(param_1 + 0x80) = puVar1;
    func_0x000107c61170(uVar5);
    uVar5 = param_5;
    func_0x000107c5c734(param_5);
    func_0x000107c61180();
    uVar2 = uVar5;
    func_0x000107c42c44();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c5d58c();
    func_0x000107c61180();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_100c71e90;
    puStack_88 = &UNK_110890d98;
    func_0x000107c6111c(auStack_80,auStack_78);
    uVar4 = uVar3;
    func_0x000107c5c320(uVar3);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar5);
    func_0x000100078e94();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_a8,auStack_78);
    func_0x000107c61174(param_4);
    func_0x000107c4e524(uVar5);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(param_4);
    func_0x000107c61120(auStack_a8);
    func_0x000107c61120(auStack_80);
  }
  func_0x000107c61120(auStack_78);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c26784; end: 100c267a3; -[SCManagedCapturerExposureStateManagerImpl updateObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c26784(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(*(long *)(param_1 + _DAT_112da07d0) + _DAT_112da0960));
  return;
}



/* Entry: 100c267a4; end: 100c2685f; -[SCManagedVideoCapturerHandlerImpl initWithCaptureResource:deviceCapacityAnalyzer:captureDeviceManager:] */

undefined1 *
FUN_100c267a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_112700060;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_3);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c26860; end: 100c26bb7; -[SCManagedVideoCapturerImpl initWithVideoCapturerHandler:cameraHardwareAPI:captureDeviceManager:cameraHardwareResource:audioCaptureSessionProvider:cameraCreationDelayLogger:cameraSnapCaptureLogger:systemConfiguration:crashLogger:circumstanceEngine:appStartExperimentReader:systemPreferences:] */

undefined8 *
FUN_100c26860(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  puStack_68 = PTR_PTR_112700068;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar4 = puVar1[5];
    puVar1[5] = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61174(param_3);
    uVar4 = puVar1[0x2d];
    puVar1[0x2d] = param_3;
    func_0x000107c61170(uVar4);
    puVar2 = PTR_PTR_1126dd0d8;
    func_0x000107c61160();
    uVar4 = puVar1[0x28];
    puVar1[0x28] = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_8);
    uVar4 = puVar1[0x51];
    puVar1[0x51] = param_8;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_9);
    uVar4 = puVar1[0x52];
    puVar1[0x52] = param_9;
    func_0x000107c61170(uVar4);
    func_0x000107c59850(puVar1);
    *(undefined2 *)((long)puVar1 + 0x269) = 0x101;
    puVar2 = PTR_PTR_1126db610;
    func_0x000107c610f4();
    func_0x000107c48c40();
    uVar4 = puVar1[0x2b];
    puVar1[0x2b] = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c611a0(puVar1 + 0x2e,param_4);
    func_0x000107c61174(param_5);
    uVar4 = puVar1[0x2f];
    puVar1[0x2f] = param_5;
    func_0x000107c61170(uVar4);
    func_0x000107c611a0(puVar1 + 0x30,param_6);
    func_0x000107c61174(param_7);
    uVar4 = puVar1[0x31];
    puVar1[0x31] = param_7;
    func_0x000107c61170(uVar4);
    puVar1[0x3a] = 0x3ff0000000000000;
    func_0x000107c611a0(puVar1 + 0x3d,param_10);
    func_0x000107c61174(param_11);
    uVar4 = puVar1[0x3e];
    puVar1[0x3e] = param_11;
    func_0x000107c61170(uVar4);
    func_0x000107c611a0(puVar1 + 0x46,param_12);
    func_0x000107c611a0(puVar1 + 0x47,param_13);
    puVar2 = PTR_PTR_1126dd0e0;
    func_0x000107c610f4();
    uVar4 = param_10;
    func_0x000107c436a8(param_10);
    func_0x000107c61180();
    func_0x000107c48bc4();
    uVar5 = puVar1[0x38];
    puVar1[0x38] = puVar2;
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
  }
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100c26bb8; end: 100c26bbf; -[SCManagedVideoCapturerImpl setStatus:] */

void FUN_100c26bb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x298) = param_3;
  return;
}



/* Entry: 100c26bc0; end: 100c26c8b; -[SCManagedVideoCapturerMicCoordinator initWithSystemPreferences:configuration:performer:] */

undefined1 *
FUN_100c26bc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_112700070;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126dd140;
    func_0x000107c610f4();
    func_0x000107c48bc0();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c26c8c; end: 100c26d13; -[SCMicFallbackTracker initWithSystemPreferences:configuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c26c8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_11302ee20) = 1;
  *(undefined8 *)(param_1 + _DAT_11302ee28) = param_3;
  *(undefined8 *)(param_1 + _DAT_11302ee30) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 100c26d14; end: 100c26d6b; -[SCCameraHardwareResourceImpl setVideoCapturer:] */

/* WARNING: Possible PIC construction at 0x000100c26d48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c26d4c) */

void FUN_100c26d14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c26d6c; end: 100c26db7;  */

/* WARNING: Possible PIC construction at 0x000100c26da4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c26da8) */

void FUN_100c26d6c(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c3d740(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c26db8; end: 100c26dbf; -[SCManagedVideoCapturerImpl addListener:] */

void FUN_100c26db8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x140),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 100c26dc0; end: 100c26e67;  */

void FUN_100c26dc0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_2);
  func_0x000107c3ebcc();
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c61174(param_2);
    uVar1 = param_2;
  }
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c26e68; end: 100c26e6f; -[SCManagedVideoCapturerImpl setCameraCaptureLensProvider:] */

void FUN_100c26e68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c176310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x168),PTR_s_setCameraCaptureLensProvider__11263b2e0);
  return;
}



/* Entry: 100c26e70; end: 100c26e9f; -[SCManagedVideoCapturerHandlerImpl setCameraCaptureLensProvider:] */

void FUN_100c26e70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c26ea0; end: 100c26f3b; -[SCARImageCapturer initWithCaptureResource:captureDeviceManager:] */

undefined1 *
FUN_100c26ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126fff60;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_3);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c26f3c; end: 100c26f6b; -[SCCameraHardwareResourceImpl setArImageCapturer:] */

void FUN_100c26f3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c26f6c; end: 100c26f73; -[SCManagedStillImageCapturerV2 startObservingManagedVideoDataSourceOutputEvent:] */

void FUN_100c26f6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24f9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_startObservingManagedVideoDataSo_112671890);
  return;
}



/* Entry: 100c26f74; end: 100c27053; -[SCCaptureVideoDataSourceObserver startObservingManagedVideoDataSourceOutputEvent:] */

void FUN_100c26f74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  if (*(long *)(param_1 + 0x10) == 0) {
    func_0x000107c61144(auStack_38,param_1);
    func_0x000107c6111c(auStack_40,auStack_38);
    uVar1 = param_3;
    func_0x000107c5c320();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_40);
    func_0x000107c61120(auStack_38);
  }
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c27054; end: 100c27133; -[SCARImageCapturer startObservingManagedVideoDataSourceOutputEvent:] */

void FUN_100c27054(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  if (*(long *)(param_1 + 0x28) == 0) {
    func_0x000107c61144(auStack_38,param_1);
    func_0x000107c6111c(auStack_40,auStack_38);
    uVar1 = param_3;
    func_0x000107c5c320();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = uVar1;
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_40);
    func_0x000107c61120(auStack_38);
  }
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c27134; end: 100c2720b; -[SCManagedStillImageCapturerV2 startObservingManagedDeviceCapacityAnalyzerEvent:] */

void FUN_100c27134(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_38,param_1);
  func_0x000107c6111c(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x000107c5c320();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  func_0x000107c61170(uVar2);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c2720c; end: 100c2720f; -[SCCameraSynchronousOperation didExecuteWithRunningDurationMs:queueDurationMs:] */

void FUN_100c2720c(void)

{
  return;
}



/* Entry: 100c27210; end: 100c27243;  */

void FUN_100c27210(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c5cb7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c27244; end: 100c2737f; -[SCCameraHardwareServicesAPIImpl token:didInvalidateWithCompletion:] */

void FUN_100c27244(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5cb88();
  func_0x000107c61180();
  func_0x000107c50038();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar2 = uVar3;
  func_0x000107c5cb88();
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x000107c403f0();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  if ((int)uVar1 == 0) {
    func_0x000107c3c918(param_1);
  }
  else {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_100c72244;
    puStack_50 = &UNK_110849530;
    func_0x000107c61174(param_4);
    uStack_48 = param_4;
    func_0x000100162d98("APPSTORE",&puStack_68);
    func_0x000107c61170(uStack_48);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c27380; end: 100c273cf; -[SCCapturerTokenSetImpl removeToken:] */

/* WARNING: Possible PIC construction at 0x000100c273bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c273c0) */

void FUN_100c27380(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c5cb88(param_1);
  func_0x000107c61180();
  func_0x000107c4ff80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c273d0; end: 100c2741b; -[SCCapturerTokenSetImpl containsAnyToken] */

bool FUN_100c273d0(long param_1)

{
  long lVar1;
  
  func_0x000107c5cb88();
  func_0x000107c61180();
  lVar1 = param_1;
  func_0x000107c3dd50();
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(param_1);
  return lVar1 != 0;
}


