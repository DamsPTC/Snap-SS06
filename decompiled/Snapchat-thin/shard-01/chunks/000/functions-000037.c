/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100c7f490; end: 100c7f4f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c7f490(void)

{
  func_0x000100087bd4(FUN_100c7f4f8);
  FUN_100c7f50c();
  return;
}



/* Entry: 100c7f4f8; end: 100c7f50b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c7f4f8(void)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + _DAT_113096b38) = 1;
  return;
}



/* Entry: 100c7f50c; end: 100c7f5e3;  */

void FUN_100c7f50c(void)

{
  long unaff_x20;
  
  func_0x00010006c804();
  if ((*(byte *)(unaff_x20 + 0x18) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + 0x18) = 1;
    func_0x000100070bfc();
    func_0x000100c7f554();
  }
  else {
    func_0x000100070bfc();
  }
  return;
}



/* Entry: 100c7f5e4; end: 100c7f6cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c7f5e4(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar6 = *unaff_x20;
  func_0x00010006c804();
  lVar7 = _DAT_113096860;
  func_0x000107c61428((long)unaff_x20 + _DAT_113096860,auStack_58,0,0);
  lVar5 = *(long *)((long)unaff_x20 + lVar7);
  func_0x000107c61434(lVar5);
  func_0x000100070bfc();
  uVar3 = 0;
  func_0x0001000876dc(0,*(undefined8 *)(lVar6 + 0x50));
  lVar7 = lVar5;
  func_0x000107c5fc7c(lVar5,uVar3);
  if (lVar7 != 0) {
    lVar7 = 0;
    do {
      func_0x000107c5fc98(&uStack_60,lVar7,lVar5,uVar3);
      uVar1 = uStack_60;
      lVar6 = lVar7 + 1;
      if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100c7f6cc);
        (*pcVar2)();
      }
      func_0x000100c7f554();
      func_0x000107c61574(uVar1);
      lVar4 = lVar5;
      func_0x000107c5fc7c(lVar5,uVar3);
      lVar7 = lVar7 + 1;
    } while (lVar6 != lVar4);
  }
  func_0x000107c6142c(lVar5);
  return;
}



/* Entry: 100c7f6cc; end: 100c7f6eb;  */

void FUN_100c7f6cc(void)

{
  FUN_100c7f5e4();
  return;
}



/* Entry: 100c7f6ec; end: 100c7f717;  */

void FUN_100c7f6ec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100c7f718; end: 100c7f71f; -[SCLensLogger trackingEventsObservable] */

undefined8 FUN_100c7f718(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 100c7f720; end: 100c7f73f;  */

void FUN_100c7f720(void)

{
  func_0x000107c61168(&PTR_PTR_112f411d0);
  return;
}



/* Entry: 100c7f740; end: 100c7f88f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_100c7f740(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long *plVar7;
  long lStack_78;
  long lStack_70;
  undefined8 auStack_68 [3];
  undefined8 uStack_50;
  undefined **ppuStack_48;
  
  lVar3 = param_4;
  func_0x000107c614f0();
  uVar4 = 0;
  FUN_100c7f720();
  ppuStack_48 = &PTR_DAT_11060fa70;
  puVar1 = (undefined8 *)(param_4 + _DAT_112f41938);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  lVar2 = _DAT_112f41948;
  uVar5 = 0;
  auStack_68[0] = param_2;
  uStack_50 = uVar4;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(param_4 + lVar2) = uVar5;
  lVar2 = _DAT_112f41950;
  uVar4 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(param_4 + lVar2) = uVar4;
  lVar2 = _DAT_112f41958;
  puVar6 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_4 + lVar2) = puVar6;
  *(undefined8 *)(param_4 + _DAT_112f41960) = 0;
  *(undefined8 *)(param_4 + _DAT_112f41968) = 0;
  *(undefined8 *)(param_4 + _DAT_112f41940) = param_1;
  *(undefined8 *)(param_4 + _DAT_112f41928) = param_3;
  FUN_100c7f890(auStack_68,param_4 + _DAT_112f41930);
  plVar7 = &lStack_78;
  lStack_78 = param_4;
  lStack_70 = lVar3;
  func_0x000107c61154(plVar7,PTR_s_init_1125d9248);
  func_0x0001000834e4(auStack_68);
  return plVar7;
}



/* Entry: 100c7f890; end: 100c7f8d3;  */

long FUN_100c7f890(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100c7f8d4; end: 100c7f907;  */

void FUN_100c7f8d4(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c7f908; end: 100c7f90f;  */

void FUN_100c7f908(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100c7f910; end: 100c7f9f3; -[SCLensLogger _didUpdateLensCarouselSessionStateProvider:] */

/* WARNING: Possible PIC construction at 0x000100c7f964: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c7f980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c7f9bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c7f984) */
/* WARNING: Removing unreachable block (ram,0x000100c7f9a8) */
/* WARNING: Removing unreachable block (ram,0x000100c7f968) */
/* WARNING: Removing unreachable block (ram,0x000100c7f9c0) */

void FUN_100c7f910(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c611ec(param_1 + 0x15c);
  lVar1 = *(long *)(param_1 + 0x160);
  if (param_3 == lVar1) {
    func_0x000107c611f0(param_1 + 0x15c);
  }
  else {
    func_0x000107c4a3d8();
    if ((int)lVar1 != 0) {
      func_0x000107c5be74(*(undefined8 *)(param_1 + 0x160));
    }
    func_0x000107c61174(param_3);
    lVar1 = *(long *)(param_1 + 0x160);
    *(long *)(param_1 + 0x160) = param_3;
    param_3 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c7f9f4; end: 100c7fa33; -[SCLensLogger setGamePlayInfo:] */

void FUN_100c7f9f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c611ec(param_1 + 0x170);
  uVar1 = *(undefined8 *)(param_1 + 0x168);
  *(undefined8 *)(param_1 + 0x168) = param_3;
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x170);
  return;
}



/* Entry: 100c7fa34; end: 100c7fb4f; -[SCLensLogger _subscribeToLensSessionFlowStateObservableForProvider:lifecycle:] */

void FUN_100c7fa34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61144(auStack_48,param_1);
  uVar1 = param_3;
  func_0x000107c4b3f0(param_3);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x000107c5c320(uVar1);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c7fb50; end: 100c7fb5f; -[_TtC25SCLensCarouselSessionImpl29LensCarouselSessionController lensSessionFlowStateObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c7fb50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f41958));
  return;
}



/* Entry: 100c7fb60; end: 100c7fbb7; -[SCLensStateWorkflowImpl restoreLensState] */

void FUN_100c7fb60(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x000107c3f2d4();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c49a28();
  func_0x000107c61170(uVar1);
  if ((int)uVar2 != 0) {
    func_0x000107c3c3c4(param_1);
    func_0x000107c611b0();
  }
  return;
}



/* Entry: 100c7fbb8; end: 100c7fc03; -[SCLensStateWorkflowImpl cameraViewControllerLensDelegate] */

void FUN_100c7fbb8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c4168c();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c4b440();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c7fc04; end: 100c7fc1b; -[SCLensStateWorkflowImpl delegate] */

void FUN_100c7fc04(long param_1)

{
  func_0x000107c61148(param_1 + 0x90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c7fc1c; end: 100c7fc5b; -[SCLensStateWorkflowHandler lensStateWorkflowCameraViewControllerLensDelegate:] */

void FUN_100c7fc1c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x30;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100c7fc5c; end: 100c7fc9b; -[SCCameraViewControllerLensDelegateHandler isAnyLensActivationAllowedV2] */

undefined8 FUN_100c7fc5c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c49a28();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 100c7fc9c; end: 100c7fd2b;  */

void FUN_100c7fc9c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126d12d8;
    func_0x000107c610f4(PTR_PTR_1126d12d8);
    uVar3 = *(undefined8 *)(param_1 + 0x180);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    lVar1 = param_1 + 0x90;
    func_0x000107c61148(lVar1);
    func_0x000107c471d8(puVar2,param_2,uVar3,uVar4,lVar1);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100c7fd2c; end: 100c7fdef; -[SCCameraLensesCarouselActivator initWithLensCarouselManager:cameraViewControllerInfoProvider:cameraViewVisibilityDelegate:] */

undefined1 *
FUN_100c7fd2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f5888;
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
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x20),param_5);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c7fdf0; end: 100c7fe93; -[SCCameraLensesCarouselActivator isAnyLensActivationAllowedV2] */

uint FUN_100c7fdf0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4a718();
  func_0x000107c61170(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar1 = uVar3;
  func_0x000107c4f09c();
  if ((int)uVar1 == 0 && (int)uVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c5c734(uVar1);
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c4a588();
    uVar4 = (uint)uVar2 ^ 1;
    func_0x000107c61170(uVar1);
  }
  else {
    uVar4 = 0;
  }
  func_0x000107c61170(uVar3);
  return uVar4;
}



/* Entry: 100c7fe94; end: 100c7ff23; -[SCCameraViewControllerInfoProvider isViewVisible] */

bool FUN_100c7fe94(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = param_1 + 8;
  func_0x000107c61148();
  lVar3 = lVar2;
  func_0x000107c4a714();
  if ((int)lVar3 == 0) {
    bVar1 = false;
  }
  else {
    param_1 = param_1 + 8;
    func_0x000107c61148(param_1);
    lVar3 = param_1;
    func_0x000107c5de64();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5e3f8();
    func_0x000107c61180();
    bVar1 = lVar4 != 0;
    func_0x000107c61170();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(param_1);
  }
  func_0x000107c61170(lVar2);
  return bVar1;
}



/* Entry: 100c7ff24; end: 100c7ff5b; -[SCCameraViewControllerInfoProvider pressingCameraButton] */

long FUN_100c7ff24(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c4f09c();
  func_0x000107c61170(param_1);
  return lVar1;
}



/* Entry: 100c7ff5c; end: 100c7ff6b; -[SCCameraViewController pressingCameraButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_100c7ff5c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127624a8);
}



/* Entry: 100c7ff6c; end: 100c7ffa3; -[SCCameraViewControllerInfoProvider isSwiping] */

long FUN_100c7ff6c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c4a588();
  func_0x000107c61170(param_1);
  return lVar1;
}



/* Entry: 100c7ffa4; end: 100c80003; -[SCCameraViewController isSwiping] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_100c7ffa4(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + _DAT_11276257c) == 1) {
    lVar2 = 2;
  }
  else {
    if (*(long *)(param_1 + _DAT_11276257c) != 2) {
      return false;
    }
    lVar2 = 4;
  }
  lVar1 = *(long *)(param_1 + _DAT_1127624bc);
  func_0x000107c3ded8(lVar1);
  return lVar1 != lVar2;
}



/* Entry: 100c80004; end: 100c80147; -[SCLensStateWorkflowImpl _restoreLensState] */

void FUN_100c80004(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c41e08(*(undefined8 *)(param_1 + 0x18),param_2,*(undefined8 *)(param_1 + 0x88));
  puVar1 = PTR_PTR_1126ae560;
  func_0x000107c61160();
  func_0x000107c61174();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  func_0x000107c61170(uVar2);
  func_0x000107c61144(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  puStack_58 = &UNK_1091d1bc4;
  puStack_50 = &UNK_11084b7a0;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c61174(puVar1);
  ppuVar3 = &puStack_68;
  puStack_48 = puVar1;
  func_0x000107c61184(ppuVar3);
  lVar4 = param_1;
  func_0x000107c44930();
  if ((int)lVar4 == 0) {
    func_0x000107c3c908(param_1);
    func_0x000107c3b7a8(param_1);
  }
  else {
    func_0x000107c3c3c8(param_1);
  }
  puVar5 = puVar1;
  func_0x000107c43bf4(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(ppuVar3);
  func_0x000107c61170(puStack_48);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 100c80148; end: 100c801b3; -[SCLensStateWorkflowImpl hasLensState] */

bool FUN_100c80148(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c4168c();
  func_0x000107c61180();
  lVar1 = param_1;
  func_0x000107c4b4bc();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_1);
  return lVar2 != 0;
}



/* Entry: 100c801b4; end: 100c801bb; -[SCLensStateWorkflowHandler lensToRestore] */

void FUN_100c801b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c097670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_lensToRestore_1126037a8);
  return;
}



/* Entry: 100c801bc; end: 100c801f7; -[SCLensesUIControllerStateHandler lensToRestore] */

void FUN_100c801bc(long param_1)

{
  undefined8 uVar1;
  
  func_0x000107c611ec(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(uVar1);
  func_0x000107c611f0(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c801f8; end: 100c8028b; -[SCLensStateWorkflowImpl _stopLensSessionIfPaused] */

/* WARNING: Possible PIC construction at 0x000100c80244: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c80248) */
/* WARNING: Removing unreachable block (ram,0x000100c8024c) */

void FUN_100c801f8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    func_0x000107c49fb4();
    if (iVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      func_0x000107c4b3f8(uVar2);
      func_0x000107c61180();
      func_0x000107c49d0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
  }
  return;
}



/* Entry: 100c8028c; end: 100c80343; -[SCLensStateWorkflowImpl _fulfillRestoreStatePromiseIfPossibleWithSuccess:] */

/* WARNING: Possible PIC construction at 0x000100c802d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c802d8) */
/* WARNING: Removing unreachable block (ram,0x000100c80314) */
/* WARNING: Removing unreachable block (ram,0x000100c802f4) */
/* WARNING: Removing unreachable block (ram,0x000100c80320) */

void FUN_100c8028c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d94c(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61180();
    func_0x000107c3fefc(lVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 100c80344; end: 100c8038f; +[SCCameraViewControllerLensStateEvent didSkipRestoreState] */

void FUN_100c80344(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ddbe0;
  func_0x000107c610f4();
  puVar2 = puVar1;
  func_0x000107c498b8();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100c80390; end: 100c803d3; -[SCCameraViewControllerLensStateEvent internalInit] */

void FUN_100c80390(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x000107c61174();
  puStack_28 = PTR_PTR_112701d28;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c803d4; end: 100c803d7;  */

void FUN_100c803d4(void)

{
  return;
}



/* Entry: 100c803d8; end: 100c803df; -[SCPreviewPresenterImpl getSnapPageSource] */

void FUN_100c803d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c242410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x1a8),PTR_s_snapPageSource_11266e328);
  return;
}



/* Entry: 100c803e0; end: 100c804cf;  */

void FUN_100c803e0(long param_1,undefined8 param_2)

{
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  func_0x000107c61174(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_100c8056c;
  puStack_60 = &UNK_1108434b0;
  func_0x000107c6111c(auStack_58,param_1 + 0x20);
  func_0x000107c6111c(auStack_80,param_1 + 0x20);
  func_0x000107c4c5fc(param_2);
  func_0x000107c61120(auStack_80);
  func_0x000107c61120(auStack_58);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100c804d0; end: 100c8056b; -[SCCameraRequestHandlerEvent matchDidTurnOff:didBecomeIdle:didBecomeBusy:] */

/* WARNING: Possible PIC construction at 0x000100c80540: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c80544) */

void FUN_100c804d0(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  lVar2 = *(long *)(param_1 + 8);
  lVar1 = param_5;
  if ((((lVar2 == 2) || (lVar1 = param_4, lVar2 == 1)) || (lVar1 = param_3, lVar2 == 0)) &&
     (lVar1 != 0)) {
    (**(code **)(lVar1 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 100c8056c; end: 100c8059b;  */

void FUN_100c8056c(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c55594();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c8059c; end: 100c805a3; -[SCCameraHardwareServicesAPIImpl setIsCameraHardwareRequestHandlerActive:] */

void FUN_100c8059c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 200) = param_3;
  return;
}



/* Entry: 100c805a4; end: 100c806c7;  */

void FUN_100c805a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  func_0x000107c61174(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_100c806c8;
  puStack_60 = &UNK_1108434b0;
  func_0x000107c6111c(auStack_58,param_1 + 0x20);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  puStack_90 = &UNK_10702f958;
  puStack_88 = &UNK_1108434b0;
  func_0x000107c6111c(auStack_80,param_1 + 0x20);
  func_0x000107c6111c(auStack_a8,param_1 + 0x20);
  func_0x000107c4c5fc(param_2);
  func_0x000107c61120(auStack_a8);
  func_0x000107c61120(auStack_80);
  func_0x000107c61120(auStack_58);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100c806c8; end: 100c806f7;  */

void FUN_100c806c8(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c55598();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c806f8; end: 100c80707; -[SCCameraFrameObservableDecorator setIsCameraHardwareRequestHandlerBusy:] */

void FUN_100c806f8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x44) = param_3;
  return;
}



/* Entry: 100c80708; end: 100c80753;  */

void FUN_100c80708(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c80754; end: 100c8075f;  */

void FUN_100c80754(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long unaff_x20;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_88,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    puVar3 = &UNK_1105823a8;
    func_0x000107c613fc(&UNK_1105823a8,0x18,7);
    *(long *)(puVar3 + 0x10) = lVar2;
    puVar4 = &UNK_1105823d0;
    func_0x000107c613fc(&UNK_1105823d0,0x20,7);
    *(undefined8 *)(puVar4 + 0x10) = 0x100c809c4;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_98 = FUN_100c809d0;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_10006eb60;
    puStack_a0 = &UNK_1105823e8;
    ppuVar5 = &puStack_b8;
    puStack_90 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar4 = puStack_90;
    func_0x000107c61174();
    func_0x000107c61574(puVar4);
    puVar4 = &UNK_110582420;
    func_0x000107c613fc(&UNK_110582420,0x18,7);
    *(long *)(puVar4 + 0x10) = lVar2;
    puVar6 = &UNK_110582448;
    func_0x000107c613fc(&UNK_110582448,0x20,7);
    *(undefined **)(puVar6 + 0x10) = &UNK_1029f42f0;
    *(undefined **)(puVar6 + 0x18) = puVar4;
    pcStack_98 = (code *)&UNK_1029f4510;
    puStack_b8 = puVar1;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_10006eb60;
    puStack_a0 = &UNK_110582460;
    ppuVar7 = &puStack_b8;
    puStack_90 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    puVar6 = puStack_90;
    func_0x000107c61174();
    func_0x000107c61574(puVar6);
    puVar6 = &UNK_110582498;
    func_0x000107c613fc(&UNK_110582498,0x18,7);
    *(long *)(puVar6 + 0x10) = lVar2;
    puVar8 = &UNK_1105824c0;
    func_0x000107c613fc(&UNK_1105824c0,0x20,7);
    *(undefined **)(puVar8 + 0x10) = &UNK_1029f4538;
    *(undefined **)(puVar8 + 0x18) = puVar6;
    pcStack_98 = (code *)&UNK_1029f4514;
    puStack_b8 = puVar1;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_10006eb60;
    puStack_a0 = &UNK_1105824d8;
    ppuVar9 = &puStack_b8;
    puStack_90 = puVar8;
    func_0x000107c60bc4(ppuVar9);
    puVar8 = puStack_90;
    func_0x000107c61174(lVar2);
    func_0x000107c61574(puVar8);
    func_0x000107c4c5fc(param_1);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61574(puVar6);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(puVar3);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 100c80760; end: 100c809b7;  */

void FUN_100c80760(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_88,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puVar2 = &UNK_1105823a8;
    func_0x000107c613fc(&UNK_1105823a8,0x18,7);
    *(long *)(puVar2 + 0x10) = param_2;
    puVar3 = &UNK_1105823d0;
    func_0x000107c613fc(&UNK_1105823d0,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = 0x100c809c4;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_98 = FUN_100c809d0;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_10006eb60;
    puStack_a0 = &UNK_1105823e8;
    ppuVar4 = &puStack_b8;
    puStack_90 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_90;
    func_0x000107c61174();
    func_0x000107c61574(puVar3);
    puVar3 = &UNK_110582420;
    func_0x000107c613fc(&UNK_110582420,0x18,7);
    *(long *)(puVar3 + 0x10) = param_2;
    puVar5 = &UNK_110582448;
    func_0x000107c613fc(&UNK_110582448,0x20,7);
    *(undefined **)(puVar5 + 0x10) = &UNK_1029f42f0;
    *(undefined **)(puVar5 + 0x18) = puVar3;
    pcStack_98 = (code *)&UNK_1029f4510;
    puStack_b8 = puVar1;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_10006eb60;
    puStack_a0 = &UNK_110582460;
    ppuVar6 = &puStack_b8;
    puStack_90 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar5 = puStack_90;
    func_0x000107c61174();
    func_0x000107c61574(puVar5);
    puVar5 = &UNK_110582498;
    func_0x000107c613fc(&UNK_110582498,0x18,7);
    *(long *)(puVar5 + 0x10) = param_2;
    puVar7 = &UNK_1105824c0;
    func_0x000107c613fc(&UNK_1105824c0,0x20,7);
    *(undefined **)(puVar7 + 0x10) = &UNK_1029f4538;
    *(undefined **)(puVar7 + 0x18) = puVar5;
    pcStack_98 = (code *)&UNK_1029f4514;
    puStack_b8 = puVar1;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_10006eb60;
    puStack_a0 = &UNK_1105824d8;
    ppuVar8 = &puStack_b8;
    puStack_90 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    puVar7 = puStack_90;
    func_0x000107c61174(param_2);
    func_0x000107c61574(puVar7);
    func_0x000107c4c5fc(param_1);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar2);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 100c809b8; end: 100c809cf;  */

void FUN_100c809b8(long param_1,long param_2)

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



/* Entry: 100c809d0; end: 100c809ef;  */

void FUN_100c809d0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100c809f0; end: 100c80a57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c809f0(undefined1 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  *(undefined1 *)(lVar1 + _DAT_112ed6800) = param_1;
  if (*(long *)(lVar1 + _DAT_112ed6828) != -1) {
    return;
  }
  *(undefined8 *)(lVar1 + _DAT_112ed6828) = param_2;
  *(undefined8 *)(lVar1 + _DAT_112ed6830) = param_2;
  return;
}



/* Entry: 100c80a58; end: 100c80a7b;  */

void FUN_100c80a58(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c80a7c; end: 100c80a83;  */

void FUN_100c80a7c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c80a84; end: 100c80b73;  */

void FUN_100c80a84(long param_1,undefined8 param_2)

{
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  func_0x000107c61174(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_100c80b74;
  puStack_60 = &UNK_1108434b0;
  func_0x000107c6111c(auStack_58,param_1 + 0x20);
  func_0x000107c6111c(auStack_80,param_1 + 0x20);
  func_0x000107c4c5fc(param_2);
  func_0x000107c61120(auStack_80);
  func_0x000107c61120(auStack_58);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100c80b74; end: 100c80ba3;  */

void FUN_100c80b74(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c5302c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c80ba4; end: 100c80bab; -[SCCameraDeviceSettingsResolver setCameraIsAlive:] */

void FUN_100c80ba4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 100c80bac; end: 100c80c9b;  */

void FUN_100c80bac(long param_1,undefined8 param_2)

{
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  func_0x000107c61174(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_100c80c9c;
  puStack_60 = &UNK_1108434b0;
  func_0x000107c6111c(auStack_58,param_1 + 0x20);
  func_0x000107c6111c(auStack_80,param_1 + 0x20);
  func_0x000107c4c5fc(param_2);
  func_0x000107c61120(auStack_80);
  func_0x000107c61120(auStack_58);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100c80c9c; end: 100c80ccb;  */

void FUN_100c80c9c(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c55594();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c80ccc; end: 100c80d83; -[SCCameraViewController setIsCameraHardwareRequestHandlerActive:] */

/* WARNING: Possible PIC construction at 0x000100c80d34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c80d50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c80d38) */
/* WARNING: Removing unreachable block (ram,0x000100c80d3c) */
/* WARNING: Removing unreachable block (ram,0x000100c80d54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c80ccc(long param_1,undefined8 param_2,uint param_3)

{
  if ((*(byte *)(param_1 + _DAT_1127625e4) != param_3) &&
     (*(char *)(param_1 + _DAT_1127625e4) = (char)param_3, param_3 != 0)) {
    func_0x000107c3ae38();
    func_0x000107c61180();
    func_0x000107c4faac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 100c80d84; end: 100c80db7;  */

void FUN_100c80d84(long param_1)

{
  param_1 = param_1 + 0x28;
  func_0x000107c61148(param_1);
  func_0x000107c3b498();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c80db8; end: 100c80def; -[SCFeatureCameraSnapDoc _didChangeCaptureDevicePosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c80db8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274138c);
  *(undefined8 *)(param_1 + _DAT_11274138c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c80df0; end: 100c80e87;  */

/* WARNING: Possible PIC construction at 0x000100c80e5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c80e6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c80e60) */
/* WARNING: Removing unreachable block (ram,0x000100c80e70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c80df0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112731ddc;
  func_0x000107c61148(lVar1);
  func_0x000107c3ee74();
  func_0x000107c61180();
  func_0x000107c4e020();
  func_0x000107c61180();
  func_0x000107c43638();
  func_0x000107c61180();
  func_0x000107c55704();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100c80e88; end: 100c80edb; -[SIGHeaderButtonOption setIsLoading:] */

void FUN_100c80e88(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined1 *)(param_1 + 0x29) = param_3;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_100c80edc;
  puStack_20 = &UNK_110d62ab0;
  lStack_18 = param_1;
  func_0x000107c437dc(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 100c80edc; end: 100c80f2b;  */

void FUN_100c80edc(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  func_0x000107c61174(param_2);
  uVar1 = param_2;
  func_0x000107c61164(param_2,PTR_s_headerButtonOption_didChangeIsLo_1125d5660);
  if ((uVar1 & 1) != 0) {
    func_0x000107c44c90(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c80f2c; end: 100c80fe3; -[SIGHeaderButtonOptionView headerButtonOption:didChangeIsLoading:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c80f2c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112794b68;
  func_0x000107c3b134(param_1,param_2,*(undefined8 *)(param_1 + _DAT_112794b4c),
                      *(undefined8 *)(param_1 + lVar1),*(undefined8 *)(param_1 + _DAT_112794b08));
  func_0x000107c3b130(param_1);
  func_0x000107c3b144(param_1);
  func_0x000107c3b108(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bde4b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__configureBottomBadgeView_forOpt_112556c80,
             *(undefined8 *)(param_1 + _DAT_112794b5c),*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100c80fe4; end: 100c8101b;  */

void FUN_100c80fe4(long param_1)

{
  param_1 = param_1 + 0x38;
  func_0x000107c61148(param_1);
  func_0x000107c3af78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c8101c; end: 100c81123; -[SCDataHandler _cacheDidLoadData:metadata:error:] */

void FUN_100c8101c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  long lVar2;
  long lStack_48;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c55704(param_1,param_2,0);
  *(undefined1 *)(param_1 + 0x29) = 1;
  if ((param_3 != 0) && (param_5 == 0)) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x000107c4d568();
    lStack_48 = 0;
    func_0x000107c5d494(*(undefined8 *)(param_1 + 0x10),param_2,param_4,&lStack_48);
    param_5 = lStack_48;
    func_0x000107c61174(lStack_48);
    func_0x000107c5296c(param_1,param_2,param_3);
    if (iVar1 != 0) {
      func_0x000107c56a20(*(undefined8 *)(param_1 + 0x10),param_2,1);
      func_0x000107c3cb98(param_1);
    }
    func_0x000107c3c2e4(param_1);
    func_0x000107c3c49c(param_1);
    func_0x000107c3bfd8(param_1);
  }
  lVar2 = param_1;
  func_0x000107c5ac54();
  if ((int)lVar2 != 0) {
    func_0x000107c4b740(param_1);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c81124; end: 100c8112b; -[SCDataHandlerMetadata needsUpdate] */

undefined1 FUN_100c81124(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 100c8112c; end: 100c8135f; -[SCDataHandlerMetadata updateFromSerializedMetadata:error:] */

bool FUN_100c8112c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x000107c412d4(param_3,param_2,4);
  func_0x000107c61180();
  func_0x000107c3ab8c();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (puVar1 != (undefined *)0x0) {
    puVar5 = puVar1;
    func_0x000107c4d9e8();
    func_0x000107c61180();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x000107c61158(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    puVar3 = puVar5;
    func_0x000107c6115c(puVar5,puVar2);
    puVar2 = puVar5;
    if (((ulong)puVar3 & 1) == 0) {
      puVar2 = (undefined *)0x0;
    }
    func_0x000107c61174(puVar2);
    func_0x000107c61170(puVar5);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar2;
    func_0x000107c61170(uVar4);
    puVar5 = puVar1;
    func_0x000107c4d9e8();
    func_0x000107c61180();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c61158(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar3 = puVar5;
    func_0x000107c6115c(puVar5,puVar2);
    puVar2 = puVar5;
    if (((ulong)puVar3 & 1) == 0) {
      puVar2 = (undefined *)0x0;
    }
    func_0x000107c61174(puVar2);
    func_0x000107c61170(puVar5);
    if (puVar2 == (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x000107c41340();
      func_0x000107c61180();
    }
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar5;
    func_0x000107c61170(uVar4);
    puVar3 = puVar1;
    func_0x000107c4d9e8();
    func_0x000107c61180();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c61158(PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar6 = puVar3;
    func_0x000107c6115c(puVar3,puVar5);
    puVar5 = puVar3;
    if (((ulong)puVar6 & 1) == 0) {
      puVar5 = (undefined *)0x0;
    }
    func_0x000107c61174(puVar5);
    func_0x000107c61170(puVar3);
    puVar3 = puVar5;
    func_0x000107c3ebcc();
    func_0x000107c61170(puVar5);
    *(char *)(param_1 + 8) = (char)puVar3;
    puVar3 = puVar1;
    func_0x000107c4d9e8();
    func_0x000107c61180();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c61158(PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar6 = puVar3;
    func_0x000107c6115c(puVar3,puVar5);
    puVar5 = puVar3;
    if (((ulong)puVar6 & 1) == 0) {
      puVar5 = (undefined *)0x0;
    }
    func_0x000107c61174(puVar5);
    func_0x000107c61170(puVar3);
    puVar3 = puVar5;
    func_0x000107c3ebcc();
    func_0x000107c61170(puVar5);
    *(char *)(param_1 + 9) = (char)puVar3;
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(puVar1);
  return puVar1 != (undefined *)0x0;
}



/* Entry: 100c81360; end: 100c813cb;  */

void FUN_100c81360(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c3ac6c(param_1);
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c41344();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c813cc; end: 100c8141f;  */

void FUN_100c813cc(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fd9b0 != -1) {
    func_0x00010002a2fc(0x1137fd9b0,&PTR___NSConcreteGlobalBlock_110d96418);
  }
  uVar1 = uRam00000001137fd9a8;
  func_0x000107c61174(uRam00000001137fd9a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c81420; end: 100c814d7;  */

/* WARNING: Possible PIC construction at 0x000100c8144c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c81494: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c81450) */
/* WARNING: Removing unreachable block (ram,0x000100c81498) */

void FUN_100c81420(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  func_0x000107c610fc();
  uVar1 = puRam00000001137fd9a8;
  puRam00000001137fd9a8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c814d8; end: 100c814df; -[SCDataHandlerObserver block] */

undefined8 FUN_100c814d8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c814e0; end: 100c8159b;  */

/* WARNING: Possible PIC construction at 0x000100c8152c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c81570: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c81580: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c81574) */
/* WARNING: Removing unreachable block (ram,0x000100c81530) */
/* WARNING: Removing unreachable block (ram,0x000100c81584) */

void FUN_100c814e0(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x28);
  func_0x000107c41214(param_2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c8159c; end: 100c815a3; -[SCImpalaManagedBusinessesResponse handlers] */

undefined8 FUN_100c8159c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100c815a4; end: 100c815b3; -[SCImpalaBusinessProfileHandler businessId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c815a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277dd80);
}



/* Entry: 100c815b4; end: 100c81693; -[SCProfileHeaderButtonEntryPoint _initThumbnailProviderAndFetchIconWithProfileId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c815b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731dcc);
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c61174(param_3);
  func_0x000107c4e524(uVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c81694; end: 100c8169b; -[SCDataHandlerMetadata wasLoadedOnce] */

undefined1 FUN_100c81694(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 100c8169c; end: 100c816db; -[SCDataHandler needsUpdate] */

bool FUN_100c8169c(double param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_2 + 0x10);
  func_0x000107c4d568();
  if ((uVar2 & 1) == 0) {
    func_0x000107c5c9dc(param_2);
    bVar1 = param_1 <= 0.0;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 100c816dc; end: 100c816e7;  */

void FUN_100c816dc(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (param_1 != 0) {
      func_0x000107c4bfb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 100c816e8; end: 100c817ef;  */

void FUN_100c816e8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  uint uStack_38;
  uint uStack_34;
  
  if ((bRam0000000113839530 & 1) == 0) {
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
    func_0x000107c61180();
    func_0x000107c427e8();
    func_0x000107c61170(puVar1);
    uRam0000000113839438 = 0;
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))();
    }
    func_0x000107c6106c();
    func_0x000107c6109c(&uStack_38);
    uRam00000001138394d0 = 0;
    if ((ulong)uStack_34 * 1000 != 0) {
      uRam00000001138394d0 = (lVar2 * (ulong)uStack_38) / ((ulong)uStack_34 * 1000);
    }
    bRam0000000113839530 = 1;
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
    func_0x000107c61180();
    func_0x000107c50718();
    func_0x000107c61170(puVar1);
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
    func_0x000107c61180();
    func_0x000107c4e460();
    func_0x000107c61170(puVar1);
    if (cRam0000000113839500 == '\x01') {
      FUN_100c95d1c();
    }
  }
  return;
}



/* Entry: 100c817f0; end: 100c817f7;  */

void FUN_100c817f0(void)

{
  code *pcVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126af680;
  func_0x000107c61168();
  func_0x000107c5a9f0();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c435f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100c81844);
  (*pcVar1)();
}



/* Entry: 100c817f8; end: 100c81843;  */

void FUN_100c817f8(void)

{
  code *pcVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126af680;
  func_0x000107c61168();
  func_0x000107c5a9f0();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c435f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100c81844);
  (*pcVar1)();
}



/* Entry: 100c81844; end: 100c8189b; -[SCStartupCompleteTrigger firstCameraPreviewFrameReceivedWithFeatureStartupEventBus:] */

void FUN_100c81844(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  *(undefined1 *)(param_1 + 8) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  func_0x000107c61170(uVar1);
  if (*(char *)(param_1 + 9) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bec23f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startupComplete_11258e2a0);
    return;
  }
  return;
}



/* Entry: 100c8189c; end: 100c8191f; -[SCStartupCompleteTrigger _startupComplete] */

void FUN_100c8189c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c5cd30();
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 100c81920; end: 100c81a07;  */

/* WARNING: Possible PIC construction at 0x000100c81940: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c81944) */

void FUN_100c81920(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e5870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),PTR_s_onPlatformPoint__112617030,0x40
            );
  return;
}



/* Entry: 100c81a08; end: 100c81a97; -[SCContextAwareQueuePerformerThrottler enqueueStopThrottlingRequest:] */

void FUN_100c81a08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_100c81e10;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  func_0x000107c61174(param_3);
  func_0x00010007380c(uVar1,&puStack_60);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c81a98; end: 100c81aab; -[SCStartupCompleteTrigger _signalStartupCompletedIfNeeded] */

void FUN_100c81a98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_next__112614028,param_1);
  return;
}



/* Entry: 100c81aac; end: 100c81af7;  */

void FUN_100c81aac(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c81af8; end: 100c81aff;  */

void FUN_100c81af8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 0x28) & 1) == 0) {
      FUN_100c81b68();
      *(undefined1 *)(lVar1 + 0x28) = 1;
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 100c81b00; end: 100c81b67;  */

void FUN_100c81b00(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
      FUN_100c81b68();
      *(undefined1 *)(param_2 + 0x28) = 1;
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 100c81b68; end: 100c81c63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c81b68(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  code *pcVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = unaff_x20 + _DAT_112da6f28;
  uVar5 = *(undefined8 *)(lVar1 + 0x18);
  lVar2 = *(long *)(lVar1 + 0x20);
  FUN_100c7854c(lVar1,uVar5);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  puVar3 = &UNK_1103cb608;
  func_0x000107c613fc(&UNK_1103cb608,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  pcVar6 = *(code **)(lVar2 + 8);
  ppuVar4 = &PTR____CFConstantStringClassReference_110dad438;
  func_0x000107c61174(&PTR____CFConstantStringClassReference_110dad438);
  func_0x000107c6157c(puVar3);
  (*pcVar6)(&PTR____CFConstantStringClassReference_110dad438,&uStack_70,0,0x1014b89e0,puVar3,uVar5,
            lVar2);
  func_0x000107c61170(&PTR____CFConstantStringClassReference_110dad438);
  func_0x000107c61574(puVar3);
  func_0x00010006e7f4(&uStack_70);
  func_0x000107c61574(puVar3);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112da6f30);
  *(undefined ***)(unaff_x20 + _DAT_112da6f30) = ppuVar4;
  func_0x000107c615e8(uVar5);
  return;
}



/* Entry: 100c81c64; end: 100c81dd3;  */

undefined8
FUN_100c81c64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined **ppuVar1;
  long extraout_x8;
  undefined8 unaff_x20;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  func_0x000100672b50(param_2,auStack_80);
  if (lStack_68 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_100c7854c(auStack_80,lStack_68);
    lVar4 = *(long *)(lStack_68 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
    lVar3 = (long)&puStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar4 + 0x10))(lVar3);
    lVar2 = lVar3;
    func_0x000107c605b0(lVar3,lStack_68);
    (**(code **)(lVar4 + 8))(lVar3,lStack_68);
    func_0x0001014b89c0(auStack_80);
  }
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  pcStack_a0 = FUN_100ef35e4;
  puStack_98 = &UNK_1103cb698;
  ppuVar1 = &puStack_b0;
  uStack_90 = param_4;
  uStack_88 = param_5;
  func_0x000107c60bc4(ppuVar1);
  func_0x000107c6157c(param_5);
  func_0x000107c3d7c4();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar1);
  func_0x000107c615e8(lVar2);
  func_0x000107c61574(uStack_88);
  return unaff_x20;
}



/* Entry: 100c81dd4; end: 100c81df3;  */

void FUN_100c81dd4(void)

{
  FUN_100c81c64();
  return;
}



/* Entry: 100c81df4; end: 100c81df7;  */

void FUN_100c81df4(long param_1,long param_2)

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



/* Entry: 100c81df8; end: 100c81e0f;  */

void FUN_100c81df8(void)

{
  long unaff_x20;
  
  func_0x000107c49a44(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 100c81e10; end: 100c81ed3;  */

void FUN_100c81e10(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + 8);
  func_0x000107c49cec(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be2ce70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + 0x20),PTR_s__handleNextRequest_112568d38);
    return;
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x000107c40808();
  if (lVar2 != 0) {
    uVar1 = 0;
    do {
      uVar3 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x10);
      func_0x000107c4d9a0();
      func_0x000107c61180();
      uVar4 = uVar3;
      func_0x000107c49cec();
      func_0x000107c61170(uVar3);
      if ((uVar4 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c12d3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),
                   PTR_s_removeObjectAtIndex__112628f10,uVar1 & 0xffffffff);
        return;
      }
      uVar1 = uVar1 + 1;
      uVar4 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x10);
      func_0x000107c40808();
    } while (uVar1 < uVar4);
  }
  return;
}



/* Entry: 100c81ed4; end: 100c81f9b; -[SCContextAwareAppStartupThrottleRequest isEqual:] */

ulong FUN_100c81ed4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x000107c61174(param_3);
  if (param_3 == param_1) {
    uVar2 = 1;
  }
  else {
    if (param_3 != 0) {
      uVar2 = param_1;
      func_0x000107c61158(param_1);
      uVar1 = param_3;
      func_0x000107c6115c(param_3,uVar2);
      if ((uVar1 & 1) != 0) {
        func_0x000107c61174(param_3);
        func_0x000107c50370(param_1);
        func_0x000107c61180();
        uVar1 = param_3;
        func_0x000107c50370(param_3);
        func_0x000107c61180();
        func_0x000107c61170(param_3);
        uVar2 = param_1;
        func_0x000107c49d0c(param_1);
        func_0x000107c61170(uVar1);
        func_0x000107c61170(param_1);
        goto LAB_100c81f80;
      }
    }
    uVar2 = 0;
  }
LAB_100c81f80:
  func_0x000107c61170(param_3);
  return uVar2;
}



/* Entry: 100c81f9c; end: 100c81fc3; -[SCContextAwareAppStartupThrottleRequest requestID] */

void FUN_100c81f9c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


