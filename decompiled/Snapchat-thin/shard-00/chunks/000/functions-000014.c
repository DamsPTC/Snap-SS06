/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10007e5b0; end: 10007e5cf;  */

void FUN_10007e5b0(void)

{
  func_0x0001000785d0();
  FUN_10007e564();
  return;
}



/* Entry: 10007e5d0; end: 10007e5db;  */

undefined8 FUN_10007e5d0(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 10007e5dc; end: 10007e60f;  */

void FUN_10007e5dc(long *param_1)

{
  undefined8 *unaff_x19;
  
  FUN_10007e5d0();
  if (*param_1 != 0) {
    FUN_100164364();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*unaff_x19);
    return;
  }
  return;
}



/* Entry: 10007e610; end: 10007e617;  */

void FUN_10007e610(void)

{
  return;
}



/* Entry: 10007e618; end: 10007e68f;  */

/* WARNING: Possible PIC construction at 0x00010007e678: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010007e67c) */

void FUN_10007e618(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x000107c61174(param_2);
  lVar1 = param_1 + 0x30;
  func_0x000107c61148();
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x50) != 2)) {
    if (*(long *)(lVar1 + 0x50) == 3) {
      FUN_10007380c(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
    }
    else {
      func_0x000107c3d798(*(undefined8 *)(lVar1 + 0x40));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10007e690; end: 10007e707;  */

/* WARNING: Possible PIC construction at 0x00010007e6ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010007e6bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010007e6b0) */
/* WARNING: Removing unreachable block (ram,0x00010007e6c0) */

void FUN_10007e690(long param_1)

{
  func_0x000107c61120(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 10007e708; end: 10007e70f;  */

void FUN_10007e708(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x20);
  return;
}



/* Entry: 10007e710; end: 10007e9d7; -[SCAttributedTask .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010007e72c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010007e74c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010007e76c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010007e78c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010007e7ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010007e7cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010007e7ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010007e80c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010007e82c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010007e84c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010007e86c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010007e88c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010007e8ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010007e8cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010007e8ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010007e90c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010007e92c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010007e94c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010007e96c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010007e98c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010007e9ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010007e990) */
/* WARNING: Removing unreachable block (ram,0x00010007e970) */
/* WARNING: Removing unreachable block (ram,0x00010007e950) */
/* WARNING: Removing unreachable block (ram,0x00010007e930) */
/* WARNING: Removing unreachable block (ram,0x00010007e910) */
/* WARNING: Removing unreachable block (ram,0x00010007e8f0) */
/* WARNING: Removing unreachable block (ram,0x00010007e8d0) */
/* WARNING: Removing unreachable block (ram,0x00010007e8b0) */
/* WARNING: Removing unreachable block (ram,0x00010007e890) */
/* WARNING: Removing unreachable block (ram,0x00010007e870) */
/* WARNING: Removing unreachable block (ram,0x00010007e850) */
/* WARNING: Removing unreachable block (ram,0x00010007e830) */
/* WARNING: Removing unreachable block (ram,0x00010007e810) */
/* WARNING: Removing unreachable block (ram,0x00010007e7f0) */
/* WARNING: Removing unreachable block (ram,0x00010007e7d0) */
/* WARNING: Removing unreachable block (ram,0x00010007e7b0) */
/* WARNING: Removing unreachable block (ram,0x00010007e790) */
/* WARNING: Removing unreachable block (ram,0x00010007e770) */
/* WARNING: Removing unreachable block (ram,0x00010007e750) */
/* WARNING: Removing unreachable block (ram,0x00010007e730) */
/* WARNING: Removing unreachable block (ram,0x00010007e9b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007e710(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11309ac60));
  return;
}



/* Entry: 10007e9d8; end: 10007e9e7; -[SCAttributedWorkSchedulingTask .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007e9d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11309be70));
  return;
}



/* Entry: 10007e9e8; end: 10007e9ef; -[SCDelayedEntryPointHandlerContextStreamImpl contextObservable] */

undefined8 FUN_10007e9e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10007e9f0; end: 10007ea6b; -[SCObservable subscribeOnNext:] */

void FUN_10007e9f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df718;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c47abc();
  func_0x000107c61170(param_3);
  func_0x000107c5c310(param_1,param_2,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10007ea6c; end: 10007eb17; -[SCAnonymousObserver initWithNext:complete:] */

undefined1 *
FUN_10007ea6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_11270e5a8;
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



/* Entry: 10007eb18; end: 10007ebb3; -[SCTakeObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007eb18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c4e358(param_1);
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126e2f78;
  func_0x000107c610f4(PTR_PTR_1126e2f78);
  func_0x000107c47bb8();
  func_0x000107c61170(param_3);
  uVar2 = param_1;
  func_0x000107c5c310(param_1,param_2,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10007ebb4; end: 10007ebc3; -[SCDerivedObservable parentObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10007ebb4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127966f8);
}



/* Entry: 10007ebc4; end: 10007ebe7; -[SCTakeObserver .cxx_construct] */

void FUN_10007ebc4(long param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  return;
}



/* Entry: 10007ebe8; end: 10007ec7f; -[SCTakeObserver initWithObserver:take:] */

undefined1 *
FUN_10007ebe8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_11270e608;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10007ec80; end: 10007ed2b; -[SCBehaviorSubject subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007ec80(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c3d7b4(*(undefined8 *)(param_1 + _DAT_1127967f4),param_2,param_3);
  lVar1 = param_1;
  func_0x000107c4d12c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4d664(param_3,param_2,lVar1);
  }
  func_0x000107c49b78();
  if ((int)param_1 != 0) {
    func_0x000107c3fedc(param_3);
  }
  puVar2 = PTR_PTR_1126e2fe0;
  func_0x000107c610f4(PTR_PTR_1126e2fe0);
  func_0x000107c47b64();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10007ed2c; end: 10007eecf; -[SCMulticastObserver addObserver:] */

void FUN_10007ed2c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_68 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c60d88(param_1 + 8);
  lVar7 = param_3;
  func_0x000107c61144(auStack_68);
  uVar2 = *(ulong *)(param_1 + 0x50);
  if (uVar2 < *(ulong *)(param_1 + 0x58)) {
    func_0x000107c6111c(uVar2,auStack_68);
    lVar8 = uVar2 + 8;
  }
  else {
    lVar8 = uVar2 - *(long *)(param_1 + 0x48);
    uVar2 = (lVar8 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      func_0x000107c312c0();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10007eea4);
      (*pcVar4)();
    }
    uVar5 = *(ulong *)(param_1 + 0x58) - *(long *)(param_1 + 0x48);
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar2) {
      uVar6 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    if (uVar6 == 0) {
      uVar6 = 0;
      lVar7 = 0;
    }
    else {
      FUN_10007eed0();
    }
    lVar8 = uVar6 + lVar8;
    func_0x000107c6111c(lVar8,auStack_68);
    lVar9 = *(long *)(param_1 + 0x48);
    lVar3 = *(long *)(param_1 + 0x50);
    lVar1 = lVar8 + (lVar9 - lVar3);
    lVar10 = lVar9;
    lVar11 = lVar1;
    if (lVar3 != lVar9) {
      do {
        func_0x000107c6114c(lVar11,lVar10);
        lVar10 = lVar10 + 8;
        lVar11 = lVar11 + 8;
      } while (lVar10 != lVar3);
      do {
        func_0x000107c61120(lVar9);
        lVar9 = lVar9 + 8;
      } while (lVar9 != lVar3);
      lVar9 = *(long *)(param_1 + 0x48);
    }
    lVar8 = lVar8 + 8;
    *(long *)(param_1 + 0x48) = lVar1;
    *(long *)(param_1 + 0x50) = lVar8;
    *(ulong *)(param_1 + 0x58) = uVar6 + lVar7 * 8;
    if (lVar9 != 0) {
      func_0x000107c60e14(lVar9);
    }
  }
  *(long *)(param_1 + 0x50) = lVar8;
  func_0x000107c61120(auStack_68);
  func_0x000107c60d8c(param_1 + 8);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10007eed0; end: 10007ef03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007eed0(ulong param_1)

{
  if (param_1 >> 0x3d == 0) {
    func_0x000107c60e20(param_1 << 3);
    return;
  }
  func_0x000104bd35f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)();
  return;
}



/* Entry: 10007ef04; end: 10007ef13; -[SCBehaviorSubject mostRecentValue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007ef04(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_1127967fc,1);
  return;
}



/* Entry: 10007ef14; end: 10007ef27; -[SCBehaviorSubject isComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_10007ef14(long param_1)

{
  return *(byte *)(param_1 + _DAT_1127967f0) & 1;
}



/* Entry: 10007ef28; end: 10007efd3; -[SCObserverUnsubscriber initWithObservable:observer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10007ef28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_11270e578;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + (long)_DAT_1127967b4),param_3);
    lVar3 = (long)_DAT_1127967b8;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10007efd4; end: 10007f12f; +[SCScopeGraph sharedWithExternalMonitor:scopeGraphAppStartupViolationMonitor:delayedEntryPointsHandler:operationQueue:] */

void FUN_10007efd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  lVar1 = lRam00000001137f3fe0;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  uStack_98 = 0x10007f168;
  puStack_90 = &UNK_110863fc8;
  uStack_88 = param_3;
  uStack_80 = param_4;
  uStack_78 = param_5;
  uStack_70 = param_6;
  uStack_68 = param_1;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  uVar3 = param_3;
  uVar4 = param_4;
  uVar5 = param_5;
  uVar6 = param_6;
  if (lVar1 != -1) {
    FUN_10002a2fc(0x1137f3fe0,&puStack_a8);
    uVar3 = uStack_88;
    uVar4 = uStack_80;
    uVar5 = uStack_78;
    uVar6 = uStack_70;
  }
  uVar2 = uRam00000001137f3fe8;
  func_0x000107c61174(uRam00000001137f3fe8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10007f130; end: 10007f1cb;  */

/* WARNING: Possible PIC construction at 0x00010007f144: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010007f154: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010007f148) */
/* WARNING: Removing unreachable block (ram,0x00010007f158) */

void FUN_10007f130(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(param_2 + 0x20));
  return;
}



/* Entry: 10007f1cc; end: 10007f3d3;  */

undefined1 * FUN_10007f1cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174();
  puVar1 = PTR_PTR_1126df7c0;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61160(puVar1);
  puVar2 = PTR_PTR_1126df7c8;
  func_0x000107c61160(PTR_PTR_1126df7c8);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c610f4();
  uVar9 = param_2;
  FUN_10007f4ac();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar9;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c61180();
  func_0x000107c45788();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar9);
  if (param_1 != 0) {
    func_0x000107c3d798(puVar3);
  }
  puVar4 = puVar3;
  FUN_10007f5f8();
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126df7d0;
  func_0x000107c610f4(PTR_PTR_1126df7d0);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar4;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c61180();
  func_0x000107c456c0(puVar5);
  func_0x000107c61170(puVar6);
  puVar6 = PTR_PTR_1126df7d8;
  func_0x000107c610f4(PTR_PTR_1126df7d8);
  func_0x000107c47c84();
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  lVar7 = param_1;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return puVar6;
  }
  func_0x000107c60e78();
  plVar8 = &lStack_b0;
  pcStack_88 = FUN_10007f3d4;
  puStack_a8 = PTR_PTR_11270e130;
  lStack_b0 = lVar7;
  uStack_a0 = param_3;
  lStack_98 = param_1;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x000107c61154(&lStack_b0,PTR_s_init_1125d9248);
  if (plVar8 != (long *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x000107c5c214();
    func_0x000107c61180();
    uVar9 = *(undefined8 *)((long)plVar8 + 8);
    *(undefined **)((long)plVar8 + 8) = puVar1;
    func_0x000107c61170(uVar9);
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c610fc();
    uVar9 = *(undefined8 *)((long)plVar8 + 0x10);
    *(undefined **)((long)plVar8 + 0x10) = puVar1;
    func_0x000107c61170(uVar9);
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c610fc();
    uVar9 = *(undefined8 *)((long)plVar8 + 0x18);
    *(undefined **)((long)plVar8 + 0x18) = puVar1;
    func_0x000107c61170(uVar9);
    *(undefined4 *)((long)plVar8 + 0x20) = 0;
  }
  return (undefined1 *)plVar8;
}



/* Entry: 10007f3d4; end: 10007f477; -[SCAvailableScope init] */

undefined1 * FUN_10007f3d4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270e130;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x000107c5c214();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c610fc();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c610fc();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    func_0x000107c61170(uVar3);
    *(undefined4 *)((long)puVar1 + 0x20) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10007f478; end: 10007f4ab; -[SCScopeGraphDefaultConfigProvider init] */

void FUN_10007f478(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127056d0;
  uStack_20 = param_1;
  func_0x000107c61154(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10007f4ac; end: 10007f4f3;  */

void FUN_10007f4ac(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df828;
  func_0x000107c61174();
  func_0x000107c610f4(puVar1);
  func_0x000107c484f0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10007f4f4; end: 10007f5f7; -[SCStartupScopeLifecycleMonitor initWithScopeGraphAppStartupViolationMonitor:] */

undefined1 * FUN_10007f4f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_112705708;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x000107c5e164();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar2 + 8);
    *(undefined **)((long)puVar2 + 8) = puVar3;
    func_0x000107c61170(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x000107c5e164();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar2 + 0x10);
    *(undefined **)((long)puVar2 + 0x10) = puVar3;
    func_0x000107c61170(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x000107c5e164();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar2 + 0x18);
    *(undefined **)((long)puVar2 + 0x18) = puVar3;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_3);
    uVar4 = *(undefined8 *)((long)puVar2 + 0x20);
    *(undefined8 *)((long)puVar2 + 0x20) = param_3;
    func_0x000107c61170(uVar4);
    if (*(long *)((long)puVar2 + 0x20) == 0) {
      uVar1 = 0;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
      func_0x000107c5accc(0x4024000000000000);
      uVar1 = SUB81(puVar3,0);
    }
    *(undefined1 *)((long)puVar2 + 0x28) = uVar1;
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 10007f5f8; end: 10007f63f;  */

void FUN_10007f5f8(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df818;
  func_0x000107c61174();
  func_0x000107c610f4(puVar1);
  func_0x000107c47850();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10007f640; end: 10007f6b7; -[SCMutliplexingScopeLifecycleMonitor initWithMonitors:] */

undefined1 * FUN_10007f640(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1127056f8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10007f6b8; end: 10007f72f; -[SCScopeGraphDefaultApplicationEventSignaller initWithAppEventHandlers:] */

undefined1 * FUN_10007f6b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1127056c8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c4d2d4();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10007f730; end: 10007f883; -[SCScopeLifecycleContext initWithOperationQueue:availableScope:monitor:delayedEntryPointsHandler:configProvider:eventSignaller:] */

undefined1 *
FUN_10007f730(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_58 = PTR_PTR_112705770;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10007f884; end: 10007f9fb; -[SCSnapchatScopeGraph initWithLifecycleContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10007f884(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_1126e3670;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  func_0x000107c61154(puVar1,PTR_s_initWithLifecycleContext__1125e7218,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae540;
    func_0x000107c610f4(PTR_PTR_1126ae540);
    func_0x000107c46794();
    puVar3 = PTR_PTR_1126ae548;
    func_0x000107c610f4();
    func_0x000107c45464();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11270f8e0);
    *(undefined **)((long)puVar1 + (long)_DAT_11270f8e0) = puVar3;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10007f9fc; end: 10007fa9b; -[SCScopeGraph initWithLifecycleContext:] */

undefined1 * FUN_10007f9fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_1127056c0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    func_0x000107c3e530(uVar2);
    func_0x000107c61180();
    func_0x000107c53fcc();
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10007fa9c; end: 10007faa3; -[SCScopeLifecycleContext availableScope] */

undefined8 FUN_10007fa9c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10007faa4; end: 10007faaf; -[SCAvailableScope setDelegate:] */

void FUN_10007faa4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 10007fab0; end: 10007fabf; -[SCScopeGraphMappingsV3 .cxx_construct] */

void FUN_10007fab0(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  return;
}



/* Entry: 10007fac0; end: 10007fb6f; -[SCScopeGraphMappingsV3 initWithEntityMappings:entryPointToPropertyMappings:serviceProviderToServiceMappings:scopedServiceProviderSet:lifecycleToEntryPointMappingsV2:lifecycleToEntryPointMappingsV3:scopeToIdentifyingExposuresMappings:deferredEntryPointsFallbackSet:] */

void FUN_10007fac0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 *param_11,undefined8 *param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_112705790;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    uVar3 = param_11[1];
    uVar2 = *param_11;
    *(undefined8 *)((long)puVar1 + 0x58) = param_11[2];
    *(undefined8 *)((long)puVar1 + 0x50) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    uVar3 = *param_12;
    uVar2 = param_12[2];
    *(undefined8 *)((long)puVar1 + 0x68) = param_12[1];
    *(undefined8 *)((long)puVar1 + 0x60) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x70) = uVar2;
    *(undefined8 *)((long)puVar1 + 0x78) = param_15;
    *(undefined8 *)((long)puVar1 + 0x80) = param_16;
    *(undefined8 *)((long)puVar1 + 0x88) = param_13;
    *(undefined8 *)((long)puVar1 + 0x90) = param_14;
  }
  return;
}



/* Entry: 10007fb70; end: 10007fb83; -[SCScopeLifecycle .cxx_construct] */

void FUN_10007fb70(long param_1)

{
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  return;
}



/* Entry: 10007fb84; end: 10007fb97; -[SCScopeLifecycle initRootLifecycleWithContext:rootScopeEncoding:scopeGraphMappings:] */

void FUN_10007fb84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfef6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initSubLifecycleWithParent_conte_1125d9780,0,param_3,param_4,param_5);
  return;
}



/* Entry: 10007fb98; end: 10007fd77; -[SCScopeLifecycle initSubLifecycleWithParent:context:rootScopeEncoding:scopeGraphMappings:] */

long FUN_10007fb98(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined2 param_5,long param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  if (param_3 == 0) {
    func_0x000107c45460();
  }
  else {
    func_0x000107c45470();
  }
  if (param_1 != 0) {
    func_0x000107c61174(param_4);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = param_4;
    func_0x000107c61170(uVar1);
    *(undefined2 *)(param_1 + 0x100) = param_5;
    func_0x000107c61174(param_6);
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    *(long *)(param_1 + 0x50) = param_6;
    func_0x000107c61170(uVar1);
    lVar2 = param_6;
    func_0x000107c4292c();
    *(long *)(param_1 + 0x58) = lVar2;
    *(undefined8 *)(param_1 + 0x60) = param_2;
    lVar2 = param_6;
    func_0x000107c42988();
    *(long *)(param_1 + 0x68) = lVar2;
    *(undefined8 *)(param_1 + 0x70) = param_2;
    lVar2 = param_6;
    func_0x000107c52008();
    *(long *)(param_1 + 0x78) = lVar2;
    *(undefined8 *)(param_1 + 0x80) = param_2;
    lVar2 = param_6;
    func_0x000107c519b8();
    *(long *)(param_1 + 0x88) = lVar2;
    *(undefined8 *)(param_1 + 0x90) = param_2;
    if (param_6 == 0) {
      *(undefined8 *)(param_1 + 0x98) = 0;
      *(undefined8 *)(param_1 + 0xa0) = 0;
      *(undefined8 *)(param_1 + 0xa8) = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
    }
    else {
      func_0x000107c4b610(&uStack_58,param_6);
      *(undefined8 *)(param_1 + 0xa0) = uStack_50;
      *(undefined8 *)(param_1 + 0x98) = uStack_58;
      *(undefined8 *)(param_1 + 0xa8) = uStack_48;
      func_0x000107c4b614(&uStack_58,param_6);
    }
    *(undefined8 *)(param_1 + 0xb8) = uStack_50;
    *(undefined8 *)(param_1 + 0xb0) = uStack_58;
    *(undefined8 *)(param_1 + 0xc0) = uStack_48;
    lVar2 = param_6;
    func_0x000107c41660();
    *(long *)(param_1 + 200) = lVar2;
    *(undefined8 *)(param_1 + 0xd0) = param_2;
    lVar2 = param_6;
    func_0x000107c5199c();
    *(long *)(param_1 + 0xd8) = lVar2;
    *(undefined8 *)(param_1 + 0xe0) = param_2;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar1 = *(undefined8 *)(param_1 + 0x108);
    *(undefined **)(param_1 + 0x108) = puVar3;
    func_0x000107c61170(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x110);
    *(undefined8 *)(param_1 + 0x110) = 0;
    func_0x000107c61170(uVar1);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return param_1;
}



/* Entry: 10007fd78; end: 10007fe4b; -[SCScopeLifecycle initRootLifecycleWithContext:] */

undefined8 FUN_10007fd78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126df860;
  func_0x000107c610f4(PTR_PTR_1126df860);
  func_0x000107c464a0();
  puVar2 = PTR_PTR_1126df868;
  func_0x000107c61160(PTR_PTR_1126df868);
  func_0x000107c47d6c(param_1,param_2,0,param_3,puVar1,puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  return param_1;
}



/* Entry: 10007fe4c; end: 10007fedb; -[SCScopeLifecycleEntryPoints initWithDelegate:] */

undefined1 * FUN_10007fe4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112705768;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x18),param_3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10007fedc; end: 10007ff63; -[SCScopeLifecycleSubLifecycles init] */

undefined1 * FUN_10007fedc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112705788;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c520a4();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10007ff64; end: 10008013f; -[SCScopeLifecycle initWithParent:context:entrypoints:subLifecycles:] */

undefined1 *
FUN_10007ff64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_58 = PTR_PTR_112705798;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x118),param_3);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126df870;
    func_0x000107c610f4();
    uVar2 = param_4;
    func_0x000107c4dfa0(param_4);
    func_0x000107c61180();
    func_0x000107c47c80();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126df878;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100080140; end: 100080147; -[SCScopeLifecycleContext operationQueue] */

undefined8 FUN_100080140(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100080148; end: 1000801d7; -[SCScopeLifecycleBeginScheduler initWithOperationQueue:] */

undefined1 * FUN_100080148(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112705758;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000801d8; end: 100080283; -[SCScopeLifecycleDeferredEntryPoints init] */

undefined1 * FUN_1000801d8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112705760;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100080284; end: 10008028f; -[SCScopeGraphMappingsV3 entityMappings] */

undefined1  [16] FUN_100080284(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 8);
}



/* Entry: 100080290; end: 10008029b; -[SCScopeGraphMappingsV3 entryPointToPropertyMappings] */

undefined1  [16] FUN_100080290(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x18);
}



/* Entry: 10008029c; end: 1000802a7; -[SCScopeGraphMappingsV3 serviceProviderToServiceMappings] */

undefined1  [16] FUN_10008029c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x28);
}



/* Entry: 1000802a8; end: 1000802b3; -[SCScopeGraphMappingsV3 scopedServiceProviderSet] */

undefined1  [16] FUN_1000802a8(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x38);
}



/* Entry: 1000802b4; end: 1000802c7; -[SCScopeGraphMappingsV3 lifecycleToEntryPointMappingsV2] */

void FUN_1000802b4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  param_1[1] = *(undefined8 *)(param_2 + 0x50);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x58);
  return;
}



/* Entry: 1000802c8; end: 1000802db; -[SCScopeGraphMappingsV3 lifecycleToEntryPointMappingsV3] */

void FUN_1000802c8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  param_1[1] = *(undefined8 *)(param_2 + 0x68);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x70);
  return;
}



/* Entry: 1000802dc; end: 1000802e7; -[SCScopeGraphMappingsV3 deferredEntryPointsFallbackSet] */

undefined1  [16] FUN_1000802dc(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x78);
}



/* Entry: 1000802e8; end: 1000802f3; -[SCScopeGraphMappingsV3 scopeToIdentifyingExposuresMappings] */

undefined1  [16] FUN_1000802e8(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x88);
}



/* Entry: 1000802f4; end: 100080327;  */

/* WARNING: Possible PIC construction at 0x000100080308: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100080318: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010008030c) */
/* WARNING: Removing unreachable block (ram,0x00010008031c) */
/* WARNING: Removing unreachable block (ram,0x000100080328) */

void FUN_1000802f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 100080328; end: 10008032f;  */

void FUN_100080328(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100080330; end: 1000809a3; -[SCMainAppDelegate initWithScopeGraph:contextStream:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_100080330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  long lVar21;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_70 = PTR_PTR_1126e7308;
  puVar2 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_1000809a4();
    puVar3 = PTR_PTR_1126ae4e8;
    func_0x000107c5a9bc();
    func_0x000107c61180();
    func_0x000107c3e814();
    func_0x000107c61170(puVar3);
    lVar20 = (long)_DAT_1127208dc;
    func_0x000107c61174(param_3);
    uVar4 = *(undefined8 *)((long)puVar2 + lVar20);
    *(undefined8 *)((long)puVar2 + lVar20) = param_3;
    func_0x000107c61170(uVar4);
    uVar4 = param_3;
    func_0x000107c519bc(param_3);
    func_0x000107c61180();
    func_0x000107c611a0(0x113846a80,uVar4);
    func_0x000107c61170(uVar4);
    puVar3 = PTR_PTR_1126b6a98;
    func_0x000107c610f4();
    puVar5 = PTR_PTR_1126af680;
    func_0x000107c5a9f0(PTR_PTR_1126af680);
    func_0x000107c61180();
    puVar6 = puVar5;
    func_0x000107c4430c();
    func_0x000107c61180();
    puVar7 = PTR_PTR_1126aec70;
    func_0x000107c5a9f0(PTR_PTR_1126aec70);
    func_0x000107c61180();
    puVar8 = puVar7;
    func_0x000107c4430c();
    func_0x000107c61180();
    func_0x000107c4898c();
    uVar4 = *(undefined8 *)((long)puVar2 + (long)_DAT_1127208e0);
    *(undefined **)((long)puVar2 + (long)_DAT_1127208e0) = puVar3;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar5);
    puVar3 = PTR_PTR_1126b6aa0;
    func_0x000107c610f4();
    puVar5 = PTR_PTR_1126b6aa8;
    func_0x000107c61160(PTR_PTR_1126b6aa8);
    func_0x000107c45f60();
    func_0x000107c61170(puVar5);
    puVar5 = PTR_PTR_1126b6aa0;
    func_0x000107c610f4();
    puVar6 = PTR_PTR_1126b6ab0;
    func_0x000107c61160(PTR_PTR_1126b6ab0);
    func_0x000107c45f60();
    func_0x000107c61170(puVar6);
    puVar6 = PTR_PTR_1126b6ab8;
    func_0x000107c61160(PTR_PTR_1126b6ab8);
    func_0x000107c3d660(puVar5);
    func_0x000107c61170(puVar6);
    puVar6 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    puVar7 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    puVar8 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    puVar9 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c5a9c4();
    func_0x000107c61180();
    puVar10 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    puVar11 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    puVar12 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    puVar13 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    puVar14 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    puVar15 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    puVar16 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    puVar19 = PTR_PTR_1126b6ac0;
    func_0x000107c5a9bc();
    iVar1 = (int)puVar19;
    func_0x000107c611b0();
    FUN_1000816d4();
    if (iVar1 != 0) {
      func_0x000107c41edc(PTR_PTR_1126b6ac8);
    }
    func_0x000107c4fc38(PTR_PTR_1126b6ad0);
    puVar19 = PTR_PTR_1126b6ad8;
    func_0x000107c610f4();
    puVar17 = PTR_PTR_1126ae520;
    func_0x000107c5a9bc(PTR_PTR_1126ae520);
    func_0x000107c61180();
    puVar18 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c41570();
    func_0x000107c61180();
    func_0x000107c45718();
    uVar4 = *(undefined8 *)((long)puVar2 + (long)_DAT_1127208e4);
    *(undefined **)((long)puVar2 + (long)_DAT_1127208e4) = puVar19;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar18);
    func_0x000107c61170(puVar17);
    puVar19 = PTR_PTR_1126ae500;
    func_0x000107c610f4();
    func_0x000107c61174(puVar2);
    func_0x000107c46f40();
    lVar21 = (long)_DAT_1127208e8;
    uVar4 = *(undefined8 *)((long)puVar2 + lVar21);
    *(undefined **)((long)puVar2 + lVar21) = puVar19;
    func_0x000107c61170(uVar4);
    puVar19 = PTR_PTR_1126b6ac0;
    func_0x000107c5a9bc();
    func_0x000107c61180();
    puVar17 = puVar19;
    func_0x000107c4f2bc();
    if (((ulong)puVar17 & 1) == 0) {
      func_0x000107c61170(puVar19);
      func_0x000107c3ed0c(*(undefined8 *)((long)puVar2 + lVar21));
      uVar4 = *(undefined8 *)((long)puVar2 + lVar20);
      puVar19 = *(undefined **)((long)puVar2 + lVar21);
      func_0x000107c5bcac(puVar19);
      func_0x000107c61180();
      func_0x000107c59824(uVar4);
    }
    func_0x000107c61170(puVar19);
    puVar19 = PTR_PTR_1126b6af0;
    func_0x000107c61160();
    lVar20 = (long)_DAT_1127208ec;
    uVar4 = *(undefined8 *)((long)puVar2 + lVar20);
    *(undefined **)((long)puVar2 + lVar20) = puVar19;
    func_0x000107c61170(uVar4);
    lVar21 = (long)_DAT_1127208f0;
    func_0x000107c61174(param_4);
    uVar4 = *(undefined8 *)((long)puVar2 + lVar21);
    *(undefined8 *)((long)puVar2 + lVar21) = param_4;
    func_0x000107c61170(uVar4);
    func_0x000107c56fdc(*(undefined8 *)((long)puVar2 + lVar20));
    func_0x000107c56b08(*(undefined8 *)((long)puVar2 + lVar20));
    func_0x000107c52b78(*(undefined8 *)((long)puVar2 + lVar20));
    func_0x000107c56ae8(*(undefined8 *)((long)puVar2 + lVar20));
    func_0x000107c5531c(*(undefined8 *)((long)puVar2 + lVar20));
    func_0x000107c56b24(*(undefined8 *)((long)puVar2 + lVar20));
    func_0x000107c59b64(*(undefined8 *)((long)puVar2 + lVar20));
    func_0x000107c53948(*(undefined8 *)((long)puVar2 + lVar20));
    func_0x000107c52850(*(undefined8 *)((long)puVar2 + lVar20));
    puVar19 = PTR_PTR_1126b6af8;
    func_0x000107c610f4();
    func_0x000107c456bc();
    uVar4 = *(undefined8 *)((long)puVar2 + (long)_DAT_1127208f4);
    *(undefined **)((long)puVar2 + (long)_DAT_1127208f4) = puVar19;
    func_0x000107c61170(uVar4);
    func_0x000107c611a0((long)puVar2 + (long)_DAT_1127208f8,0);
    puVar19 = PTR_PTR_1126ae4e8;
    func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
    func_0x000107c61180();
    func_0x000107c42888();
    func_0x000107c61170(puVar19);
    puVar19 = PTR_PTR_1126ae4e8;
    func_0x000107c5a9bc();
    func_0x000107c61180();
    puVar17 = puVar19;
    func_0x000107c4102c();
    *(undefined **)((long)puVar2 + (long)_DAT_1127208fc) = puVar17;
    func_0x000107c61170(puVar19);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar16);
    func_0x000107c61170(puVar15);
    func_0x000107c61170(puVar14);
    func_0x000107c61170(puVar13);
    func_0x000107c61170(puVar12);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar2;
}



/* Entry: 1000809a4; end: 100080a13;  */

void FUN_1000809a4(undefined8 param_1)

{
  if (lRam0000000113846a88 != -1) {
    param_1 = 0x113846a88;
    FUN_10002a2fc(0x113846a88,&PTR___NSConcreteGlobalBlock_110d96538);
  }
  if ((bRam0000000113846a90 & 1) != 0) {
    return;
  }
  FUN_1000721e8();
  func_0x000107c61180();
  FUN_100080a14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100080a14; end: 100080a37;  */

void FUN_100080a14(undefined8 param_1)

{
  func_0x000107c61178();
  func_0x000107c3ac4c();
  func_0x000107c60fc8(param_1,&UNK_10f82a35b);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe1bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fclose_11034c270)();
  return;
}



/* Entry: 100080a38; end: 100080a8f; -[SCSnapchatScopeGraph scopes] */

void FUN_100080a38(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c4b604();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c3e530();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100080a90; end: 100080ab7; -[SCScopeGraph lifecycleContext] */

void FUN_100080a90(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100080ab8; end: 100080b0b; +[SCStartupCompleteTrigger sharedInstance] */

void FUN_100080ab8(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f7150 != -1) {
    FUN_10002a2fc(0x1137f7150,&PTR___NSConcreteGlobalBlock_110d24c20);
  }
  uVar1 = uRam00000001137f7158;
  func_0x000107c61174(uRam00000001137f7158);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100080b0c; end: 100080b37;  */

void FUN_100080b0c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126af680;
  func_0x000107c61160();
  uVar1 = puRam00000001137f7158;
  puRam00000001137f7158 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100080b38; end: 100080ba3; -[SCStartupCompleteTrigger init] */

undefined1 * FUN_100080b38(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112706480;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined2 *)((long)puVar1 + 8) = 0;
    *(undefined1 *)((long)puVar1 + 10) = 0;
    puVar2 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100080ba4; end: 100080c43; -[SCPublishSubject init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100080ba4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270e5c0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c9690;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112796804);
    *(undefined **)((long)puVar1 + (long)_DAT_112796804) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126e3010;
    func_0x000107c610f4();
    func_0x000107c47ba0();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112796808);
    *(undefined **)((long)puVar1 + (long)_DAT_112796808) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100080c44; end: 100080c6b; -[SCStartupCompleteTrigger getStartupCompleteObserver] */

void FUN_100080c44(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100080c6c; end: 100080cf3; +[SCAppSession sharedInstance] */

void FUN_100080c6c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_100080cf4;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam000000011372c470 != -1) {
    FUN_10002a2fc(0x11372c470,&puStack_48);
  }
  uVar1 = uRam000000011372c478;
  func_0x000107c61174(uRam000000011372c478);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100080cf4; end: 100080d1b;  */

void FUN_100080cf4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c610fc();
  uVar1 = uRam000000011372c478;
  uRam000000011372c478 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100080d1c; end: 100080d6b; -[SCAppSession init] */

undefined8 FUN_100080d1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c5a9c4(PTR__OBJC_CLASS___UIApplication_1126ae590);
  func_0x000107c61180();
  func_0x000107c45710(param_1,param_2,puVar1);
  func_0x000107c61170(puVar1);
  return param_1;
}



/* Entry: 100080d6c; end: 100080e67; -[SCAppSession initWithApplication:] */

undefined1 * FUN_100080d6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_1126fcec0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    uVar2 = 1;
    func_0x000107c60f6c();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170();
    *(undefined8 *)((long)puVar1 + 0x40) = 0;
    *(undefined8 *)((long)puVar1 + 0x48) = 0;
    *(undefined8 *)((long)puVar1 + 0x38) = 0;
    *(undefined2 *)((long)puVar1 + 0x35) = 1;
    *(undefined1 *)((long)puVar1 + 0x30) = 0;
    func_0x000107c60f34();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar4;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae520;
    func_0x000107c5a9bc();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100080e68; end: 100080eef; +[SCApplicationState shared] */

void FUN_100080e68(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_100080ef0;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001137f4948 != -1) {
    FUN_10002a2fc(0x1137f4948,&puStack_48);
  }
  uVar1 = uRam00000001137f4950;
  func_0x000107c61174(uRam00000001137f4950);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100080ef0; end: 100080f17;  */

void FUN_100080ef0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c610fc();
  uVar1 = uRam00000001137f4950;
  uRam00000001137f4950 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100080f18; end: 10008108b; -[SCApplicationState init] */

undefined1 * FUN_100080f18(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112706358;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSThread_1126b47e0;
    func_0x000107c4a02c();
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
      func_0x000107c42b28();
      func_0x000107c61180();
      func_0x000107c61104();
      func_0x000107c61130();
      ppuVar4 = &puStack_70;
      puStack_68 = PTR_PTR_1127065d8;
      puStack_70 = puVar2;
      func_0x000107c61154(&puStack_70,PTR_s_init_1125d9248);
      if (ppuVar4 != (undefined **)0x0) {
        uVar5 = 0;
        func_0x000107c60f4c(0,0x15,0);
        func_0x000107c61180();
        puVar2 = &UNK_10f780a61;
        func_0x000107c60f50(&UNK_10f780a61,uVar5);
        uVar6 = *(undefined8 *)((long)ppuVar4 + 8);
        *(undefined **)((long)ppuVar4 + 8) = puVar2;
        func_0x000107c61170(uVar6);
        uVar6 = *(undefined8 *)((long)ppuVar4 + 0x10);
        *(undefined8 *)((long)ppuVar4 + 0x10) = 0;
        func_0x000107c61170(uVar6);
        func_0x000107c61170(uVar5);
      }
      return (undefined1 *)ppuVar4;
    }
    puVar2 = PTR_PTR_1126b81f0;
    func_0x000107c61160();
    uVar5 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar5);
    puVar2 = PTR_PTR_1126b81f0;
    func_0x000107c61160();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    func_0x000107c61170(uVar5);
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c5a9c4();
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c4a28c();
    *(char *)((long)puVar1 + 0x30) = (char)puVar3;
    func_0x000107c61170(puVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = 1;
    *(undefined8 *)((long)puVar1 + 0x10) = 2;
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c61180();
    func_0x000107c3d7bc();
    func_0x000107c61170(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c61180();
    func_0x000107c3d7bc();
    func_0x000107c61170(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10008108c; end: 100081123; -[SCDispatchLock init] */

undefined1 * FUN_10008108c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127065d8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = 0;
    func_0x000107c60f4c(0,0x15,0);
    func_0x000107c61180();
    puVar3 = &UNK_10f780a61;
    func_0x000107c60f50(&UNK_10f780a61,uVar2);
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    func_0x000107c61170(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = 0;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100081124; end: 10008114b; -[SCAppSession getStartupCompleteObserver] */

void FUN_100081124(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10008114c; end: 100081193; -[SCApplicationLifecycleEventsImpl initWithStartupComplete:legacyStartupComplete:] */

void FUN_10008114c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  FUN_100081194(param_3,param_4);
  return;
}



/* Entry: 100081194; end: 1000812f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100081194(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  
  func_0x000107c614f0();
  puVar1 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar4 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar5 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar6 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar7 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar8 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + _DAT_113091dd8) = puVar1;
  *(undefined **)(unaff_x20 + _DAT_113091df8) = puVar2;
  *(undefined **)(unaff_x20 + _DAT_113091dc8) = puVar3;
  *(undefined **)(unaff_x20 + _DAT_113091e08) = puVar4;
  *(undefined **)(unaff_x20 + _DAT_113091e00) = puVar5;
  *(undefined **)(unaff_x20 + _DAT_113091dd0) = puVar6;
  *(undefined **)(unaff_x20 + _DAT_113091df0) = puVar7;
  *(undefined **)(unaff_x20 + _DAT_113091e10) = puVar8;
  *(undefined8 *)(unaff_x20 + _DAT_113091de0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113091de8) = param_2;
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1000812f4; end: 10008138f; -[SCDynamicEventHandlingPluginRegistry initWithConfig:] */

undefined1 * FUN_1000812f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_11270c1a0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSPointerArray_1126c4b90;
    func_0x000107c5e160();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    func_0x000107c61170(uVar2);
    *(undefined4 *)((long)puVar1 + 0x18) = 0;
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100081390; end: 10008154b; -[SCDynamicEventHandlingPluginRegistry addDynamicEventHandlingPlugin:] */

undefined8 FUN_100081390(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
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
  func_0x000107c61174(param_3);
  func_0x000107c611ec(param_1 + 0x18);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x000107c3db80();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4d2d4();
  func_0x000107c61170(lVar1);
  func_0x000107c3d798(lVar2,param_2,param_3);
  func_0x000107c61174(lVar2);
  lVar3 = *(long *)(param_1 + 8);
  func_0x000107c4f2d4();
  lVar1 = lVar2;
  if (lVar3 == 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x000107c4f25c(lVar1,param_2,lVar2);
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
  }
  puVar4 = PTR__OBJC_CLASS___NSPointerArray_1126c4b90;
  func_0x000107c5e160();
  func_0x000107c61180();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar4;
  func_0x000107c61170(uVar5);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  func_0x000107c61174(lVar1);
  lVar3 = lVar1;
  func_0x000107c4080c(lVar1,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar3 != 0) {
    lVar6 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          func_0x000107c61128(lVar1);
        }
        func_0x000107c3d7f8(*(undefined8 *)(param_1 + 0x10),param_2,
                            *(undefined8 *)(lStack_118 + lVar7 * 8));
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      lVar3 = lVar1;
      func_0x000107c4080c(lVar1,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar3 != 0);
  }
  func_0x000107c61170(lVar1);
  func_0x000107c611f0(param_1 + 0x18);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_3;
  }
  func_0x000107c60e78();
  return 1;
}



/* Entry: 10008154c; end: 100081553; -[SCContinueUserActivityHandlerPluginRegistryConfiguration processType] */

undefined8 FUN_10008154c(void)

{
  return 1;
}



/* Entry: 100081554; end: 1000815d7; +[_TtC17AppLaunchSignaler24ForegroundLaunchDetector shared] */

void FUN_100081554(void)

{
  if (lRam000000011307c8c8 != -1) {
    func_0x000107c61568(0x11307c8c8,0x1000815b4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113813750);
  return;
}



/* Entry: 1000815d8; end: 1000816b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000815d8(void)

{
  int iVar1;
  long unaff_x20;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c614f0();
  uStack_40 = 1;
  iStack_3c = 0;
  uStack_44 = 0;
  iVar1 = *(int *)PTR__mach_task_self__11034c5c8;
  func_0x000107c6167c(iVar1,1,&iStack_3c,&uStack_40,&uStack_44);
  if (iVar1 == 0) {
    *(bool *)(unaff_x20 + _DAT_11307c8d0) = iStack_3c == 1;
  }
  else {
    *(undefined1 *)(unaff_x20 + _DAT_11307c8d0) = 1;
  }
  *(bool *)(unaff_x20 + _DAT_11307c8d8) = iVar1 != 0;
  func_0x000107c61154(&stack0xffffffffffffffa8,PTR_s_init_1125d9248);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  FUN_1000815d8();
  return;
}



/* Entry: 1000816b4; end: 1000816d3; -[_TtC17AppLaunchSignaler24ForegroundLaunchDetector init] */

void FUN_1000816b4(void)

{
  FUN_1000815d8();
  return;
}



/* Entry: 1000816d4; end: 10008173b;  */

undefined1 FUN_1000816d4(void)

{
  if (lRam00000001137fc090 != -1) {
    FUN_10002a2fc(0x1137fc090,&PTR___NSConcreteGlobalBlock_110d663b8);
  }
  return uRam00000001137fc006;
}



/* Entry: 10008173c; end: 100081857; +[SCConfigHeuristicRecoveryManagerImpl disableHeadlessWakeDecrements] */

void FUN_10008173c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  if (lRam0000000113084258 != -1) {
    func_0x000107c61568(0x113084258,FUN_10006e83c);
  }
  uVar1 = uRam0000000113084260;
  puVar3 = &UNK_110784ef0;
  func_0x000107c613fc(&UNK_110784ef0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = 0x100081860;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  uStack_40 = 0x10008185c;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_10006eb60;
  puStack_48 = &UNK_110784f08;
  puStack_38 = puVar3;
  func_0x000107c60bc4(&puStack_60);
  puVar5 = puStack_38;
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(puVar5);
  FUN_10006eaa4(uVar1,ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  puVar5 = puVar3;
  func_0x000107c61544(puVar3,"",0x73,0x1b3,0x14,1);
  func_0x000107c61574(puVar3);
  if (((ulong)puVar5 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100081858);
  (*pcVar2)();
}



/* Entry: 100081858; end: 100081877;  */

void FUN_100081858(long param_1,long param_2)

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



/* Entry: 100081878; end: 10008189f; +[SCBackgroundTaskStartupRegistration registerLaunchHandlers] */

void FUN_100081878(void)

{
  func_0x000107c3c26c(PTR_PTR_1126b6ad0);
                    /* WARNING: Could not recover jumptable at 0x00010be89190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b6ad0,PTR_s__registerBackgroundAppRefresh_11257fe00);
  return;
}



/* Entry: 1000818a0; end: 10008193b; +[SCBackgroundTaskStartupRegistration _registerBackgroundTaskProcessing] */

/* WARNING: Possible PIC construction at 0x00010008191c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100081920) */

void FUN_1000818a0(void)

{
  undefined1 uVar1;
  undefined8 uVar3;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___BGTaskScheduler_1126d2090;
  func_0x000107c5aa2c();
  uVar1 = SUB81(puVar2,0);
  func_0x000107c61180();
  func_0x000107c3e5cc(PTR_PTR_1126d2050);
  func_0x000107c61180();
  uVar3 = 0x11;
  FUN_1000819a8(0x11,0);
  func_0x000107c61180();
  func_0x000107c4fc20();
  uRam00000001136c7d40 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10008193c; end: 1000819a7; +[SCJobSchedulerConstants backgroundProcessingTaskIdentifier] */

void FUN_10008193c(void)

{
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f202520);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1000819a8; end: 100081a83;  */

void FUN_1000819a8(ulong param_1,int param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x000100081968();
  if ((uVar1 & 0xfffffffffffffffd) != 1) {
    func_0x000107c60f2c(param_1,(long)param_2);
    func_0x000107c61180();
    goto LAB_100081a04;
  }
  if ((long)param_1 < 0x11) {
    if (param_1 == 0xfffffffffffffffe) {
LAB_100081a54:
      func_0x000107c312ac();
      func_0x000107c61180();
      goto LAB_100081a04;
    }
    if (param_1 == 0) {
LAB_100081a64:
      func_0x000107c312a8();
      func_0x000107c61180();
      goto LAB_100081a04;
    }
    if (param_1 == 2) goto LAB_100081a44;
  }
  else if ((long)param_1 < 0x19) {
    if (param_1 == 0x11) goto LAB_100081a54;
    if (param_1 == 0x15) goto LAB_100081a64;
  }
  else {
    if (param_1 == 0x19) {
      func_0x000107c312a4();
      func_0x000107c61180();
      goto LAB_100081a04;
    }
    if (param_1 == 0x21) {
LAB_100081a44:
      func_0x000107c312a0();
      func_0x000107c61180();
      goto LAB_100081a04;
    }
  }
  func_0x000107c312b0();
  func_0x000107c61180();
LAB_100081a04:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100081a84; end: 100081aa7;  */

void FUN_100081a84(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_11112ef20;
  func_0x000107c49820();
  ppuRam00000001137fdf80 = ppuVar1;
  return;
}



/* Entry: 100081aa8; end: 100081b43; +[SCBackgroundTaskStartupRegistration _registerBackgroundAppRefresh] */

/* WARNING: Possible PIC construction at 0x000100081b24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100081b28) */

void FUN_100081aa8(void)

{
  undefined1 uVar1;
  undefined8 uVar3;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___BGTaskScheduler_1126d2090;
  func_0x000107c5aa2c();
  uVar1 = SUB81(puVar2,0);
  func_0x000107c61180();
  func_0x000107c3e598(PTR_PTR_1126d2050);
  func_0x000107c61180();
  uVar3 = 0x11;
  FUN_1000819a8(0x11,0);
  func_0x000107c61180();
  func_0x000107c4fc20();
  uRam00000001136c7d41 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 100081b44; end: 100081b6f; +[SCJobSchedulerConstants backgroundAppRefreshTaskIdentifier] */

void FUN_100081b44(void)

{
  func_0x000107c5fadc(0xd000000000000027,0x800000010f202540);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100081b70; end: 10008222f; -[_TtC13SCSystemScope13SCSystemScope initWithApplication:applicationLifecycleEvents:applicationStateProvider:notificationLifecycleEvents:backgroundPrefetchHandler:pushNotificationEvents:notificationAPNSTokenEvents:notificationVOIPTokenEvents:openURLEvents:notificationCenter:inAppNotificationInteractionEvents:notificationProcessingEvents:notificationProcessingStepEventEmitter:systemNotificationInteractionEventHandlingPluginRegistry:continueUserActivityEventHandlingPluginRegistry:applicationOpenFromQuickAction:windowInitializer:] */

void FUN_100081b70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_1107a2428;
  func_0x000107c613fc(&UNK_1107a2428,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_19;
  func_0x000107c61174();
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(param_16);
  func_0x000107c615f0(param_17);
  func_0x000107c61174();
  func_0x000100081d1c(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                      param_12,param_13,param_14,param_15,param_16,param_17,param_18,FUN_1000b9bfc,
                      puVar1);
  return;
}



/* Entry: 100082230; end: 100082253;  */

void FUN_100082230(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100082254; end: 100082257;  */

void FUN_100082254(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100082258; end: 100082293; -[SCDisposableObserverLifecycle .cxx_construct] */

void FUN_100082258(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}


