/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102b29d58; end: 102b29feb;  */

/* WARNING: Possible PIC construction at 0x000102b29da8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b29ea8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b29ec8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b29f3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b29f98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b29df0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b29f9c) */
/* WARNING: Removing unreachable block (ram,0x000102b29f40) */
/* WARNING: Removing unreachable block (ram,0x000102b29f4c) */
/* WARNING: Removing unreachable block (ram,0x000102b29fc4) */
/* WARNING: Removing unreachable block (ram,0x000102b29f54) */
/* WARNING: Removing unreachable block (ram,0x000102b29ecc) */
/* WARNING: Removing unreachable block (ram,0x000102b29eec) */
/* WARNING: Removing unreachable block (ram,0x000102b29ef8) */
/* WARNING: Removing unreachable block (ram,0x000102b29efc) */
/* WARNING: Removing unreachable block (ram,0x000102b29f00) */
/* WARNING: Removing unreachable block (ram,0x000102b29f6c) */
/* WARNING: Removing unreachable block (ram,0x000102b29f80) */
/* WARNING: Removing unreachable block (ram,0x000102b29f14) */
/* WARNING: Removing unreachable block (ram,0x000102b29fcc) */
/* WARNING: Removing unreachable block (ram,0x000102b29f28) */
/* WARNING: Removing unreachable block (ram,0x000102b29ed0) */
/* WARNING: Removing unreachable block (ram,0x000102b29dac) */
/* WARNING: Removing unreachable block (ram,0x000102b29db0) */
/* WARNING: Removing unreachable block (ram,0x000102b29dbc) */
/* WARNING: Removing unreachable block (ram,0x000102b29df4) */
/* WARNING: Removing unreachable block (ram,0x000102b29e34) */
/* WARNING: Removing unreachable block (ram,0x000102b29fb4) */
/* WARNING: Removing unreachable block (ram,0x000102b29fc0) */
/* WARNING: Removing unreachable block (ram,0x000102b29e3c) */
/* WARNING: Removing unreachable block (ram,0x000102b29df8) */
/* WARNING: Removing unreachable block (ram,0x000102b29e44) */
/* WARNING: Removing unreachable block (ram,0x000102b29e48) */
/* WARNING: Removing unreachable block (ram,0x000102b29dfc) */
/* WARNING: Removing unreachable block (ram,0x000102b29e00) */
/* WARNING: Removing unreachable block (ram,0x000102b29e04) */
/* WARNING: Removing unreachable block (ram,0x000102b29e60) */
/* WARNING: Removing unreachable block (ram,0x000102b29e08) */
/* WARNING: Removing unreachable block (ram,0x000102b29e70) */
/* WARNING: Removing unreachable block (ram,0x000102b29e78) */
/* WARNING: Removing unreachable block (ram,0x000102b29e80) */
/* WARNING: Removing unreachable block (ram,0x000102b29e9c) */
/* WARNING: Removing unreachable block (ram,0x000102b29e94) */
/* WARNING: Removing unreachable block (ram,0x000102b29ea4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b29d58(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ef3bd8);
  if (lVar1 == 0) {
    if (param_1 == 0) {
      param_1 = *(long *)(unaff_x20 + _DAT_112ef3bd8);
      *(undefined8 *)(unaff_x20 + _DAT_112ef3bd8) = 0;
      func_0x000107c61174(0);
      func_0x000107c61174();
    }
    else {
      func_0x000107c4b1dc(param_1);
      func_0x000107c61180();
      func_0x000107c5faec();
    }
  }
  else {
    func_0x000107c4b1dc();
    func_0x000107c61180();
    func_0x000107c5faec();
    param_1 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b29fec; end: 102b2a007;  */

void FUN_102b29fec(long param_1,long param_2)

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



/* Entry: 102b2a008; end: 102b2a103; -[_TtC35SCSponsoredSocialUnlockServicesImpl36SponsoredSocialUnlockViewTrackerImpl initWithUnlockableSnapInfo:timeProvider:unlockableViewTracker:viewTrackerType:activeLensObservable:metricsManager:skViewThroughPerformer:adConfig:adNetwork:viewThroughTracker:] */

void FUN_102b2a008(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c615f0(param_9);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(param_12);
  FUN_102b29a3c(param_3,param_2,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                param_12);
  return;
}



/* Entry: 102b2a104; end: 102b2a157;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b2a104(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  if (*(long *)(unaff_x20 + _DAT_112ef3bd0) != 0) {
    func_0x000107c4218c();
  }
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b2a158; end: 102b2a1cb; -[_TtC35SCSponsoredSocialUnlockServicesImpl36SponsoredSocialUnlockViewTrackerImpl dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b2a158(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  lVar2 = *(long *)(param_1 + _DAT_112ef3bd0);
  if (lVar2 == 0) {
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c4218c(lVar2);
  }
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b2a1cc; end: 102b2a297; -[_TtC35SCSponsoredSocialUnlockServicesImpl36SponsoredSocialUnlockViewTrackerImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b2a1fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b2a24c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b2a200) */
/* WARNING: Removing unreachable block (ram,0x000102b2a250) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b2a1cc(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ef3bc0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ef3be8));
  return;
}



/* Entry: 102b2a298; end: 102b2a4ff;  */

/* WARNING: Possible PIC construction at 0x000102b2a428: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b2a438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b2a480: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b2a4b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b2a2f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b2a43c) */
/* WARNING: Removing unreachable block (ram,0x000102b2a42c) */
/* WARNING: Removing unreachable block (ram,0x000102b2a4b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b2a298(double param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  double dVar7;
  ulong uStack_68;
  
  lVar5 = _DAT_112ef3be0;
  if (*(long *)(unaff_x20 + _DAT_112ef3c20) == 0) {
    if (*(long *)(unaff_x20 + _DAT_112ef3be0) != 0) {
      func_0x000107c42828(*(long *)(unaff_x20 + _DAT_112ef3be0),param_3,0xffffffffffffffff);
      puVar2 = *(undefined **)(unaff_x20 + lVar5);
      *(undefined8 *)(unaff_x20 + lVar5) = 0;
      goto code_r0x000107c61170;
    }
  }
  else {
    func_0x000107c428a0();
  }
  if ((*(char *)((double *)(unaff_x20 + _DAT_112ef3bc8) + 1) != '\x01') &&
     (puVar2 = *(undefined **)(unaff_x20 + _DAT_112ef3bd8), puVar2 != (undefined *)0x0)) {
    lVar5 = ((undefined8 *)(unaff_x20 + _DAT_112ef3bc0))[1];
    if (lVar5 != 0) {
      dVar7 = *(double *)(unaff_x20 + _DAT_112ef3bc8);
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112ef3bc0);
      lVar4 = *(long *)(unaff_x20 + _DAT_112ef3bf0);
      func_0x000107c61174();
      func_0x000107c61434(lVar5);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar4 == 0) {
        func_0x000107c6142c(lVar5);
      }
      else {
        puVar3 = puVar2;
        func_0x000107c4a4d8();
        if ((int)puVar3 == 0) {
          func_0x000107c6142c(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar4);
          return;
        }
        func_0x000107c40fd4(*(undefined8 *)(unaff_x20 + _DAT_112ef3be8));
        param_1 = param_1 - dVar7;
        if (param_1 <= 0.0) {
          func_0x000107c6142c(lVar5);
        }
        else {
          puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x000107c466c0(param_1);
          func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x000107c46ed0();
          func_0x000107c5fadc(0,0xe000000000000000);
          func_0x000107c5fadc(uVar6,lVar5);
          func_0x000107c6142c(lVar5);
          uStack_68 = *(ulong *)(unaff_x20 + _DAT_112ef3bf8);
          if (3 < uStack_68) {
            func_0x000107c60614(&UNK_11059e160,&uStack_68,&UNK_11059e160,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102b2a500);
            (*pcVar1)();
          }
          func_0x000107c435dc(lVar4);
        }
      }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar2);
      return;
    }
  }
  return;
}



/* Entry: 102b2a500; end: 102b2a96b;  */

/* WARNING: Possible PIC construction at 0x000102b2a5a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b2a5d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b2a694: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b2a6a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b2a6e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b2a700: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b2a734: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b2a770: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b2a78c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b2a7f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b2a80c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b2a8c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b2a8d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b2a8e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b2a904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b2a91c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b2a92c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b2a960: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b2a920) */
/* WARNING: Removing unreachable block (ram,0x000102b2a908) */
/* WARNING: Removing unreachable block (ram,0x000102b2a954) */
/* WARNING: Removing unreachable block (ram,0x000102b2a90c) */
/* WARNING: Removing unreachable block (ram,0x000102b2a8e4) */
/* WARNING: Removing unreachable block (ram,0x000102b2a8d4) */
/* WARNING: Removing unreachable block (ram,0x000102b2a8c4) */
/* WARNING: Removing unreachable block (ram,0x000102b2a810) */
/* WARNING: Removing unreachable block (ram,0x000102b2a7f4) */
/* WARNING: Removing unreachable block (ram,0x000102b2a7f8) */
/* WARNING: Removing unreachable block (ram,0x000102b2a790) */
/* WARNING: Removing unreachable block (ram,0x000102b2a774) */
/* WARNING: Removing unreachable block (ram,0x000102b2a778) */
/* WARNING: Removing unreachable block (ram,0x000102b2a738) */
/* WARNING: Removing unreachable block (ram,0x000102b2a744) */
/* WARNING: Removing unreachable block (ram,0x000102b2a7c0) */
/* WARNING: Removing unreachable block (ram,0x000102b2a7c4) */
/* WARNING: Removing unreachable block (ram,0x000102b2a814) */
/* WARNING: Removing unreachable block (ram,0x000102b2a81c) */
/* WARNING: Removing unreachable block (ram,0x000102b2a7d8) */
/* WARNING: Removing unreachable block (ram,0x000102b2a758) */
/* WARNING: Removing unreachable block (ram,0x000102b2a704) */
/* WARNING: Removing unreachable block (ram,0x000102b2a708) */
/* WARNING: Removing unreachable block (ram,0x000102b2a6e4) */
/* WARNING: Removing unreachable block (ram,0x000102b2a6e8) */
/* WARNING: Removing unreachable block (ram,0x000102b2a6a8) */
/* WARNING: Removing unreachable block (ram,0x000102b2a6b4) */
/* WARNING: Removing unreachable block (ram,0x000102b2a928) */
/* WARNING: Removing unreachable block (ram,0x000102b2a6c8) */
/* WARNING: Removing unreachable block (ram,0x000102b2a698) */
/* WARNING: Removing unreachable block (ram,0x000102b2a5dc) */
/* WARNING: Removing unreachable block (ram,0x000102b2a5e0) */
/* WARNING: Removing unreachable block (ram,0x000102b2a5f8) */
/* WARNING: Removing unreachable block (ram,0x000102b2a7b0) */
/* WARNING: Removing unreachable block (ram,0x000102b2a92c) */
/* WARNING: Removing unreachable block (ram,0x000102b2a600) */
/* WARNING: Removing unreachable block (ram,0x000102b2a5ac) */
/* WARNING: Removing unreachable block (ram,0x000102b2a5c0) */
/* WARNING: Removing unreachable block (ram,0x000102b2a964) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b2a500(void)

{
  int iVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ef3bd8);
  if (lVar2 == 0) {
    return;
  }
  if (*(long *)(unaff_x20 + _DAT_112ef3c20) == 0) {
    func_0x000107c61174();
    iVar1 = (int)lVar2;
    func_0x000107c4a4d8();
    if (iVar1 != 0) {
      func_0x000107c5d2d8();
      func_0x000107c61180();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c251890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(long *)(unaff_x20 + _DAT_112ef3c20),PTR_s_startViewThroughImpressionFor__112672048);
  return;
}



/* Entry: 102b2a96c; end: 102b2a997; -[_TtC35SCSponsoredSocialUnlockServicesImpl36SponsoredSocialUnlockViewTrackerImpl init] */

void FUN_102b2a96c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSponsoredSocialUnlockServicesImpl.SponsoredSocialUnlockViewTrackerImpl",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b2a998);
  (*pcVar1)();
}



/* Entry: 102b2a998; end: 102b2a9fb; -[_TtC35SCSponsoredSocialUnlockServicesImpl36SponsoredSocialUnlockViewTrackerImpl startTracking] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b2a998(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_2 + _DAT_112ef3bc0 + 8) != 0) {
    uVar2 = *(undefined8 *)(param_2 + _DAT_112ef3be8);
    func_0x000107c61174();
    func_0x000107c40fd4(uVar2);
    puVar1 = (undefined8 *)(param_2 + _DAT_112ef3bc8);
    *puVar1 = param_1;
    *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 102b2a9fc; end: 102b2aa23; -[_TtC35SCSponsoredSocialUnlockServicesImpl36SponsoredSocialUnlockViewTrackerImpl finishTracking] */

void FUN_102b2a9fc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102b2a298();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b2aa24; end: 102b2ab17;  */

undefined8
FUN_102b2aa24(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined8 in_stack_00000010;
  
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c6142c(param_3);
  }
  if (param_5 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107c5fadc(param_4,param_5);
    func_0x000107c6142c(param_5);
  }
  func_0x000107c614e8(in_stack_00000010);
  func_0x000107c610f8();
  func_0x000107c455d4();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  return in_stack_00000010;
}



/* Entry: 102b2ab18; end: 102b2ab2b;  */

undefined1  [16] FUN_102b2ab18(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 4) {
    uVar1 = param_1;
  }
  auVar2[8] = 3 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 102b2ab2c; end: 102b2ab6b;  */

void FUN_102b2ab2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ef3c28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db22630;
  func_0x000107c61520(&UNK_10db22630,&UNK_11059e160);
  puRam0000000112ef3c28 = puVar1;
  return;
}



/* Entry: 102b2ab6c; end: 102b2ab7b;  */

undefined1  [16] FUN_102b2ab6c(void)

{
  return ZEXT816(0x11059e160);
}



/* Entry: 102b2ab7c; end: 102b2ab9b;  */

void FUN_102b2ab7c(void)

{
  func_0x000107c61168(&PTR_PTR_11288b8e0);
  return;
}



/* Entry: 102b2ab9c; end: 102b2aba7;  */

void FUN_102b2ab9c(long param_1,long param_2)

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



/* Entry: 102b2aba8; end: 102b2abc7; -[_TtC31SCSponsoredSocialUnlockServices50SCSponsoredSocialUnlockViewThroughTrackingServices viewThroughTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b2aba8(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ef3c58));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b2abc8; end: 102b2abd7; -[_TtC31SCSponsoredSocialUnlockServices50SCSponsoredSocialUnlockViewThroughTrackingServices mediaCaptured] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b2abc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ef3c60));
  return;
}



/* Entry: 102b2abd8; end: 102b2ac9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b2abd8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ef3c58) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ef3c60) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b2aca0; end: 102b2acff; -[_TtC31SCSponsoredSocialUnlockServices50SCSponsoredSocialUnlockViewThroughTrackingServices init] */

void FUN_102b2aca0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSponsoredSocialUnlockServices.SCSponsoredSocialUnlockViewThroughTrackingServices"
                      ,0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b2accc);
  (*pcVar1)();
}



/* Entry: 102b2ad00; end: 102b2ad37; -[_TtC31SCSponsoredSocialUnlockServices50SCSponsoredSocialUnlockViewThroughTrackingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b2ad00(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ef3c58));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef3c60));
  return;
}



/* Entry: 102b2ad38; end: 102b2ad77;  */

void FUN_102b2ad38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 102b2ad78; end: 102b2adc7;  */

void FUN_102b2ad78(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_102b2adc8();
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 102b2adc8; end: 102b2aeaf;  */

/* WARNING: Possible PIC construction at 0x000102b2ae00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b2ae60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b2ae04) */
/* WARNING: Removing unreachable block (ram,0x000102b2ae08) */
/* WARNING: Removing unreachable block (ram,0x000102b2ae90) */
/* WARNING: Removing unreachable block (ram,0x000102b2ae9c) */
/* WARNING: Removing unreachable block (ram,0x000102b2ae20) */
/* WARNING: Removing unreachable block (ram,0x000102b2aeac) */
/* WARNING: Removing unreachable block (ram,0x000102b2ae3c) */
/* WARNING: Removing unreachable block (ram,0x000102b2ae64) */

void FUN_102b2adc8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c3e9dc(uVar1);
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102b2aeb0; end: 102b2aecb;  */

void FUN_102b2aeb0(long param_1,long param_2)

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



/* Entry: 102b2aecc; end: 102b2aef7;  */

void FUN_102b2aecc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b2aef8; end: 102b2af17;  */

void FUN_102b2aef8(void)

{
  func_0x0001007df010();
  return;
}



/* Entry: 102b2af18; end: 102b2af1f;  */

undefined8 FUN_102b2af18(void)

{
  return 0;
}



/* Entry: 102b2af20; end: 102b2af83;  */

undefined8
FUN_102b2af20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001005dc0c4(param_1,param_2,param_3,param_4);
  return unaff_x20;
}



/* Entry: 102b2af84; end: 102b2b09f;  */

void FUN_102b2af84(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_3 + 0x18);
    lVar2 = *(long *)(param_3 + 0x20);
    func_0x0001000a8868(param_3,uVar1);
    puVar3 = &UNK_11059e470;
    func_0x000107c613fc(&UNK_11059e470,0x18,7);
    func_0x000107c61644(puVar3 + 0x10,param_2);
    puVar4 = &UNK_11059e598;
    func_0x000107c613fc(&UNK_11059e598,0x28,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined8 *)(puVar4 + 0x18) = param_4;
    *(undefined8 *)(puVar4 + 0x20) = param_1;
    pcVar5 = *(code **)(lVar2 + 8);
    func_0x000107c6157c(puVar3);
    func_0x000107c61434(param_4);
    func_0x000107c61434(param_1);
    (*pcVar5)(FUN_102b2b518,puVar4,uVar1,lVar2);
    func_0x000107c61574(param_2);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar4);
  }
  return;
}



/* Entry: 102b2b0a0; end: 102b2b0c7;  */

undefined8 * FUN_102b2b0a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 102b2b0c8; end: 102b2b1ab;  */

void FUN_102b2b0c8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000107c61434(param_3);
    func_0x000107c61434(param_4);
    func_0x0001007bb280();
    func_0x000107c61434(param_1);
    func_0x0001007bb280();
    uVar3 = *(undefined8 *)(param_2 + 0x80);
    lVar1 = *(long *)(param_2 + 0x88);
    func_0x0001000a8868(param_2 + 0x68,uVar3);
    uVar2 = param_3;
    (**(code **)(lVar1 + 8))(param_3,uVar3,lVar1);
    func_0x000107c6142c(param_3);
    func_0x000107c61574(param_2);
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(uVar3);
  }
  return;
}



/* Entry: 102b2b1ac; end: 102b2b1b7;  */

void FUN_102b2b1ac(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    func_0x000107c61434(uVar2);
    func_0x000107c61434(uVar5);
    func_0x0001007bb280();
    func_0x000107c61434(param_1);
    func_0x0001007bb280();
    uVar5 = *(undefined8 *)(lVar3 + 0x80);
    lVar1 = *(long *)(lVar3 + 0x88);
    func_0x0001000a8868(lVar3 + 0x68,uVar5);
    uVar4 = uVar2;
    (**(code **)(lVar1 + 8))(uVar2,uVar5,lVar1);
    func_0x000107c6142c(uVar2);
    func_0x000107c61574(lVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c615e8(uVar5);
  }
  return;
}



/* Entry: 102b2b1b8; end: 102b2b407;  */

void FUN_102b2b1b8(long param_1,long param_2,long param_3,code *param_4,undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined *puVar8;
  long extraout_x8;
  ulong uVar9;
  long lVar10;
  undefined1 auStack_110 [8];
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined1 auStack_e8 [32];
  long lStack_c8;
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [24];
  long lStack_88;
  undefined1 auStack_80 [32];
  
  lVar3 = 0;
  func_0x000107c5ed50();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  func_0x000107c61428(param_3 + 0x10,auStack_80,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    func_0x000107c61574();
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((param_2 == 0) && (param_1 != 0)) {
      lStack_100 = lVar10;
      uStack_f8 = param_5;
      pcStack_f0 = param_4;
      func_0x000107c61174();
      lStack_108 = param_1;
      func_0x000107c600f4(auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      func_0x000100e15a08();
      func_0x000107c601c0(auStack_a0,lVar3,param_1);
      puVar2 = PTR___sypN_11034f1a8;
      if (lStack_88 != 0) {
        do {
          func_0x000100102924(auStack_a0,auStack_c0);
          func_0x000100102924(auStack_c0,auStack_e8);
          uVar6 = 0x112ef3e30;
          func_0x0001000285a8(0x112ef3e30,&UNK_10db22950);
          plVar7 = &lStack_c8;
          func_0x000107c6147c(plVar7,auStack_e8,puVar2 + 8,uVar6,6);
          lVar10 = lStack_c8;
          if ((((ulong)plVar7 & 1) != 0) && (lStack_c8 != 0)) {
            puVar5 = puVar8;
            func_0x000107c61550();
            if (((int)puVar5 == 0) ||
               (((long)puVar8 < 0 || (puVar5 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)))) {
              if ((ulong)puVar8 >> 0x3e == 0) {
                puVar4 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar4 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar8) {
                  puVar4 = puVar8;
                }
                func_0x000107c60480(puVar4);
              }
              puVar5 = (undefined *)0x0;
              func_0x0001007588a8(0,puVar4 + 1,1,puVar8);
            }
            uVar9 = (ulong)puVar5 & 0xffffffffffffff8;
            uVar1 = *(ulong *)(uVar9 + 0x10);
            puVar8 = puVar5;
            if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar1) {
              puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar9 + 0x18));
              func_0x0001007588a8(puVar8,uVar1 + 1,1,puVar5);
              uVar9 = (ulong)puVar8 & 0xffffffffffffff8;
            }
            *(ulong *)(uVar9 + 0x10) = uVar1 + 1;
            *(long *)(uVar9 + uVar1 * 8 + 0x20) = lVar10;
          }
          func_0x000107c601c0(auStack_a0,lVar3,param_1);
        } while (lStack_88 != 0);
      }
      (**(code **)(lStack_100 + 8))(auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
      func_0x000107c61170(lStack_108);
      param_4 = pcStack_f0;
    }
    (*param_4)(puVar8);
    func_0x000107c6142c(puVar8);
  }
  return;
}



/* Entry: 102b2b408; end: 102b2b42f;  */

void FUN_102b2b408(long param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  ulong uVar10;
  code *pcVar11;
  long unaff_x20;
  long lVar12;
  undefined1 auStack_110 [8];
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined1 auStack_e8 [32];
  long lStack_c8;
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [24];
  long lStack_88;
  undefined1 auStack_80 [32];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  pcVar11 = *(code **)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = 0;
  func_0x000107c5ed50();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  func_0x000107c61428(lVar4 + 0x10,auStack_80,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    func_0x000107c61574();
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((param_2 == 0) && (param_1 != 0)) {
      lStack_100 = lVar12;
      uStack_f8 = uVar9;
      pcStack_f0 = pcVar11;
      func_0x000107c61174();
      lStack_108 = param_1;
      func_0x000107c600f4(auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      func_0x000100e15a08();
      func_0x000107c601c0(auStack_a0,lVar3,param_1);
      puVar2 = PTR___sypN_11034f1a8;
      if (lStack_88 != 0) {
        do {
          func_0x000100102924(auStack_a0,auStack_c0);
          func_0x000100102924(auStack_c0,auStack_e8);
          uVar9 = 0x112ef3e30;
          func_0x0001000285a8(0x112ef3e30,&UNK_10db22950);
          plVar7 = &lStack_c8;
          func_0x000107c6147c(plVar7,auStack_e8,puVar2 + 8,uVar9,6);
          lVar4 = lStack_c8;
          if ((((ulong)plVar7 & 1) != 0) && (lStack_c8 != 0)) {
            puVar6 = puVar8;
            func_0x000107c61550();
            if (((int)puVar6 == 0) ||
               (((long)puVar8 < 0 || (puVar6 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)))) {
              if ((ulong)puVar8 >> 0x3e == 0) {
                puVar5 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar5 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar8) {
                  puVar5 = puVar8;
                }
                func_0x000107c60480(puVar5);
              }
              puVar6 = (undefined *)0x0;
              func_0x0001007588a8(0,puVar5 + 1,1,puVar8);
            }
            uVar10 = (ulong)puVar6 & 0xffffffffffffff8;
            uVar1 = *(ulong *)(uVar10 + 0x10);
            puVar8 = puVar6;
            if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar1) {
              puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar10 + 0x18));
              func_0x0001007588a8(puVar8,uVar1 + 1,1,puVar6);
              uVar10 = (ulong)puVar8 & 0xffffffffffffff8;
            }
            *(ulong *)(uVar10 + 0x10) = uVar1 + 1;
            *(long *)(uVar10 + uVar1 * 8 + 0x20) = lVar4;
          }
          func_0x000107c601c0(auStack_a0,lVar3,param_1);
        } while (lStack_88 != 0);
      }
      (**(code **)(lStack_100 + 8))(auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
      func_0x000107c61170(lStack_108);
      pcVar11 = pcStack_f0;
    }
    (*pcVar11)(puVar8);
    func_0x000107c6142c(puVar8);
  }
  return;
}



/* Entry: 102b2b430; end: 102b2b46b;  */

void FUN_102b2b430(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000834e4(unaff_x20 + 0x18);
  func_0x0001000834e4(unaff_x20 + 0x40);
  func_0x0001000834e4(unaff_x20 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b2b46c; end: 102b2b4b7;  */

undefined1  [16] FUN_102b2b46c(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x80);
  lVar2 = *(long *)(unaff_x20 + 0x88);
  func_0x0001000a8868(unaff_x20 + 0x68,uVar1);
  (**(code **)(lVar2 + 0x10))(uVar1,lVar2);
  return ZEXT816(0);
}



/* Entry: 102b2b4b8; end: 102b2b4e3;  */

undefined ** FUN_102b2b4b8(void)

{
  return &PTR_DAT_113066880;
}



/* Entry: 102b2b4e4; end: 102b2b517;  */

void FUN_102b2b4e4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102b2b518; end: 102b2b51b;  */

void FUN_102b2b518(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    func_0x000107c61434(uVar2);
    func_0x000107c61434(uVar5);
    func_0x0001007bb280();
    func_0x000107c61434(param_1);
    func_0x0001007bb280();
    uVar5 = *(undefined8 *)(lVar3 + 0x80);
    lVar1 = *(long *)(lVar3 + 0x88);
    func_0x0001000a8868(lVar3 + 0x68,uVar5);
    uVar4 = uVar2;
    (**(code **)(lVar1 + 8))(uVar2,uVar5,lVar1);
    func_0x000107c6142c(uVar2);
    func_0x000107c61574(lVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c615e8(uVar5);
  }
  return;
}



/* Entry: 102b2b51c; end: 102b2b54b;  */

void FUN_102b2b51c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 102b2b54c; end: 102b2b56f;  */

void FUN_102b2b54c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b2b570; end: 102b2b57f;  */

undefined1  [16] FUN_102b2b570(void)

{
  return ZEXT816(0x11059e5f0);
}



/* Entry: 102b2b580; end: 102b2b5c3;  */

void FUN_102b2b580(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_3;
  return;
}



/* Entry: 102b2b5c4; end: 102b2b5f7;  */

void FUN_102b2b5c4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b2b5f8; end: 102b2b617;  */

undefined1  [16] FUN_102b2b5f8(void)

{
  return ZEXT816(0x11059e6f0);
}



/* Entry: 102b2b618; end: 102b2b69b;  */

void FUN_102b2b618(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = param_4;
  *(undefined8 *)(unaff_x20 + 0x50) = param_3;
  *(undefined8 *)(unaff_x20 + 0x38) = param_8;
  *(undefined8 *)(unaff_x20 + 0x40) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x10) = param_6;
  *(undefined8 *)(unaff_x20 + 0x18) = param_7;
  *(undefined8 *)(unaff_x20 + 0x30) = param_9;
  return;
}



/* Entry: 102b2b69c; end: 102b2b757;  */

void FUN_102b2b69c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = 0;
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    func_0x000107c428a8();
    uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  }
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x60);
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 102b2b758; end: 102b2b91b;  */

void FUN_102b2b758(void)

{
  FUN_102b2b69c();
  return;
}



/* Entry: 102b2b91c; end: 102b2b95b;  */

undefined1  [16] FUN_102b2b91c(void)

{
  return ZEXT816(0x11059e778);
}



/* Entry: 102b2b95c; end: 102b2b9f3;  */

void FUN_102b2b95c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  func_0x000107c610f8();
  func_0x000100689d98(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10);
  return;
}



/* Entry: 102b2b9f4; end: 102b2b9f7;  */

void FUN_102b2b9f4(void)

{
  return;
}



/* Entry: 102b2b9f8; end: 102b2ba2b;  */

void FUN_102b2b9f8(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  *param_1 = puVar1;
  return;
}



/* Entry: 102b2ba2c; end: 102b2ba37;  */

void FUN_102b2ba2c(void)

{
  return;
}



/* Entry: 102b2ba38; end: 102b2bacb;  */

/* WARNING: Possible PIC construction at 0x000102b2baa4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b2baa8) */

void FUN_102b2ba38(undefined1 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 1;
  func_0x00010061b458(1);
  func_0x000107c613fc(param_4,0x11,7);
  *(undefined1 *)(param_4 + 0x10) = param_1;
  uVar2 = 0;
  func_0x0001005f57cc(0);
  func_0x0001000bfde0(param_5,param_4,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 102b2bacc; end: 102b2bb3b;  */

void FUN_102b2bacc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001005f57cc(0);
  uVar1 = 0;
  func_0x00010450b3c8();
  *param_1 = uVar1;
  return;
}



/* Entry: 102b2bb3c; end: 102b2bb9b; -[_TtC39ConditionalCameraServicesImplementation39CameraUIViewfinderServiceImplementation init] */

void FUN_102b2bb3c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ConditionalCameraServicesImplementation.CameraUIViewfinderServiceImplementation"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b2bb68);
  (*pcVar1)();
}



/* Entry: 102b2bb9c; end: 102b2bc23; -[_TtC39ConditionalCameraServicesImplementation39CameraUIViewfinderServiceImplementation .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b2bbf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b2bbfc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b2bb9c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ef40c8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ef40e0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ef40e8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ef40f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ef40d0));
  return;
}



/* Entry: 102b2bc24; end: 102b2bc43;  */

undefined1  [16] FUN_102b2bc24(void)

{
  return ZEXT816(0x11059e8a0);
}



/* Entry: 102b2bc44; end: 102b2bc7f;  */

void FUN_102b2bc44(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x20;
  
  puVar3 = *(undefined8 **)(unaff_x20 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  uVar2 = *puVar3;
  *puVar3 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 102b2bc80; end: 102b2bccf;  */

void FUN_102b2bc80(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102b2ba38(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                &UNK_11059e980,0x102b2bcdc);
  return;
}



/* Entry: 102b2bcd0; end: 102b2bce7;  */

void FUN_102b2bcd0(ulong *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  ulong uVar2;
  
  uVar2 = (ulong)*(byte *)(unaff_x20 + 0x10);
  uVar1 = 0;
  func_0x0001005f57cc(0);
  (*(code *)&SUB_10450b3c8)(uVar2,uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 102b2bce8; end: 102b2bd2f;  */

void FUN_102b2bce8(ulong *param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  ulong uVar2;
  
  uVar2 = (ulong)*(byte *)(unaff_x20 + 0x10);
  uVar1 = 0;
  func_0x0001005f57cc(0);
  (*param_3)(uVar2,uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 102b2bd30; end: 102b2bd6b;  */

void FUN_102b2bd30(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x20;
  
  puVar3 = *(undefined8 **)(unaff_x20 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  uVar2 = *puVar3;
  *puVar3 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 102b2bd6c; end: 102b2bed3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102b2bd6c(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  ulong uVar6;
  
  func_0x000107c613fc();
  lVar5 = *(long *)(param_2 + _DAT_113091b78);
  *(long *)(unaff_x20 + 0x18) = param_3;
  *(long *)(unaff_x20 + 0x20) = lVar5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  uVar6 = *(ulong *)(param_3 + _DAT_113083f80);
  func_0x000107c615f4(lVar5,2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c49e14();
  if (((uVar6 & 1) == 0) && (lVar1 = lVar5, func_0x000107c3dfc0(), lVar1 == 2)) {
    func_0x000107c4d668();
  }
  func_0x000107c615e8(lVar5);
  uVar2 = 3;
  uVar3 = 0;
  uVar4 = 0;
  func_0x0001005baa1c();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x40) = uVar4;
  func_0x000107c42c1c(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return unaff_x20;
}



/* Entry: 102b2bed4; end: 102b2bf1f;  */

void FUN_102b2bed4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b2bf20; end: 102b2bf4f;  */

undefined1  [16] FUN_102b2bf20(void)

{
  return ZEXT816(0x11059e9d0);
}



/* Entry: 102b2bf50; end: 102b2bf7f;  */

void FUN_102b2bf50(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 102b2bf80; end: 102b2bfc3;  */

void FUN_102b2bf80(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b2bfc4; end: 102b2bfef;  */

undefined ** FUN_102b2bfc4(void)

{
  return &PTR_DAT_113066ca0;
}



/* Entry: 102b2bff0; end: 102b2c2ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102b2bff0(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long unaff_x20;
  code *pcVar12;
  long lVar13;
  long lVar14;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 auStack_78 [16];
  long lStack_68;
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ef4300) = param_1;
  *(long *)(unaff_x20 + _DAT_112ef4308) = param_2;
  *(long *)(unaff_x20 + _DAT_112ef4310) = param_3;
  *(long *)(unaff_x20 + _DAT_112ef4318) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ef4320) = param_5;
  uVar10 = *(undefined8 *)(param_3 + 0x28);
  lVar4 = *(long *)(param_3 + 0x30);
  func_0x0001000a8868(param_3 + 0x10,uVar10);
  pcVar12 = *(code **)(lVar4 + 8);
  func_0x000107c615f0(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  (*pcVar12)(&UNK_100ba5610,0,uVar10,lVar4);
  lVar4 = *(long *)(param_4 + 0x28);
  lVar14 = *(long *)(param_4 + 0x30);
  func_0x0001000a8868(param_4 + 0x10,lVar4);
  (**(code **)(lVar14 + 8))(lVar4,lVar14);
  lVar5 = lVar4;
  func_0x00010077699c();
  lVar14 = *(long *)(lVar5 + 0x10);
  if (lVar14 == 0) {
    func_0x000107c6142c(lVar5);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    lVar13 = 0x20;
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      uStack_80 = *(undefined1 *)(lVar5 + lVar13);
      func_0x00010008a7c8(&lStack_68,&uStack_80);
      lVar3 = lStack_68;
      if (lStack_68 != 0) {
        func_0x000100083b20(&uStack_80);
        func_0x000107c61574(lVar3);
        uVar10 = CONCAT71(uStack_7f,uStack_80);
        puVar7 = puVar8;
        func_0x000107c61550();
        if (((((ulong)puVar7 & 1) == 0) || ((long)puVar8 < 0)) ||
           (puVar7 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar8 >> 0x3e == 0) {
            puVar6 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar6 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar8) {
              puVar6 = puVar8;
            }
            func_0x000107c60480(puVar6);
          }
          puVar7 = (undefined *)0x0;
          func_0x0001007588a8(0,puVar6 + 1,1,puVar8);
        }
        uVar11 = (ulong)puVar7 & 0xffffffffffffff8;
        uVar2 = *(ulong *)(uVar11 + 0x10);
        puVar8 = puVar7;
        if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar2) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
          func_0x0001007588a8(puVar8,uVar2 + 1,1,puVar7);
          uVar11 = (ulong)puVar8 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar11 + 0x10) = uVar2 + 1;
        *(undefined8 *)(uVar11 + uVar2 * 8 + 0x20) = uVar10;
      }
      lVar13 = lVar13 + 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    func_0x000107c6142c(lVar5);
  }
  lStack_68 = lVar4;
  func_0x0001007bb280(puVar8);
  lVar14 = lStack_68;
  uVar10 = *(undefined8 *)(param_2 + 0x28);
  lVar4 = *(long *)(param_2 + 0x30);
  func_0x0001000a8868(param_2 + 0x10,uVar10);
  lVar5 = lVar14;
  (**(code **)(lVar4 + 8))();
  func_0x000107c6142c(lVar14);
  *(long *)(unaff_x20 + _DAT_112ef4328) = lVar5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ef4330);
  *puVar1 = uVar10;
  puVar1[1] = lVar4;
  puVar9 = auStack_78;
  func_0x000107c61154(puVar9,PTR_s_init_1125d9248);
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_4);
  func_0x000107c61574(param_2);
  func_0x000107c615e8(param_1);
  func_0x000107c61574(param_5);
  return puVar9;
}



/* Entry: 102b2c2f0; end: 102b2c37b; -[_TtC39ConditionalCameraServicesImplementation38MainCameraFeatureServiceImplementation endWorkflow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b2c2f0(long param_1)

{
  code *pcVar1;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000102b2c464(*(long *)(param_1 + _DAT_112ef4308) + 0x10,auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  pcVar1 = *(code **)(lStack_48 + 0x10);
  func_0x000107c61174(param_1);
  (*pcVar1)(uStack_50,lStack_48);
  func_0x0001000834e4(auStack_68);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102b2c37c; end: 102b2c3db; -[_TtC39ConditionalCameraServicesImplementation38MainCameraFeatureServiceImplementation init] */

void FUN_102b2c37c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ConditionalCameraServicesImplementation.MainCameraFeatureServiceImplementation"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b2c3a8);
  (*pcVar1)();
}



/* Entry: 102b2c3dc; end: 102b2c4a7; -[_TtC39ConditionalCameraServicesImplementation38MainCameraFeatureServiceImplementation .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b2c408: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b2c40c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b2c3dc(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ef4328));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ef4300));
  return;
}



/* Entry: 102b2c4a8; end: 102b2c4cb;  */

undefined1  [16] FUN_102b2c4a8(void)

{
  return ZEXT816(0x11059ead8);
}



/* Entry: 102b2c4cc; end: 102b2c577;  */

void FUN_102b2c4cc(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102b2c578; end: 102b2c59f;  */

void FUN_102b2c578(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 102b2c5a0; end: 102b2c7fb;  */

void FUN_102b2c5a0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar5 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x706f54;
  if (bVar5 != 2) {
    uVar1 = 0x2074636570736552;
  }
  uVar4 = 0xe300000000000000;
  if (bVar5 != 2) {
    uVar4 = 0xeb00000000422f41;
  }
  uVar2 = 0x656c6464694d;
  if (bVar5 != 0) {
    uVar2 = 0x5220656c6464694d;
  }
  uVar3 = 0xe600000000000000;
  if (bVar5 != 0) {
    uVar3 = 0xef64657372657665;
  }
  if (bVar5 < 2) {
    uVar4 = uVar3;
    uVar1 = uVar2;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c606a8();
  return;
}



/* Entry: 102b2c7fc; end: 102b2c907;  */

void FUN_102b2c7fc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  byte *unaff_x20;
  
  bVar5 = *unaff_x20;
  uVar1 = 0x706f54;
  if (bVar5 != 2) {
    uVar1 = 0x2074636570736552;
  }
  uVar4 = 0xe300000000000000;
  if (bVar5 != 2) {
    uVar4 = 0xeb00000000422f41;
  }
  uVar2 = 0x656c6464694d;
  if (bVar5 != 0) {
    uVar2 = 0x5220656c6464694d;
  }
  uVar3 = 0xe600000000000000;
  if (bVar5 != 0) {
    uVar3 = 0xef64657372657665;
  }
  if (bVar5 < 2) {
    uVar4 = uVar3;
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  param_1[1] = uVar4;
  return;
}



/* Entry: 102b2c908; end: 102b2cb7b;  */

void FUN_102b2c908(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112ef4360;
  func_0x0001000285a8(0x112ef4360,&UNK_10db23050);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 102b2cb7c; end: 102b2cc67;  */

void FUN_102b2cb7c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *unaff_x20;
  
  uVar1 = 0xef68636e75614c20;
  uVar3 = 0x6e4f20726576654e;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0xeb00000000422f41;
    uVar3 = 0x2074636570736552;
  }
  uVar2 = 0x800000010f0f1700;
  uVar4 = 0xd000000000000011;
  if (*unaff_x20 != '\0') {
    uVar2 = uVar1;
    uVar4 = uVar3;
  }
  *param_1 = uVar4;
  param_1[1] = uVar2;
  return;
}



/* Entry: 102b2cc68; end: 102b2ceab;  */

void FUN_102b2cc68(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112ef43a8;
  func_0x0001000285a8(0x112ef43a8,&UNK_10db23060);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 102b2ceac; end: 102b2cf77;  */

void FUN_102b2ceac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  
  cVar4 = *unaff_x20;
  uVar3 = 0x746c7561666544;
  if (cVar4 != '\x01') {
    uVar3 = 0x2074636570736552;
  }
  uVar1 = 0xe700000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xeb00000000422f41;
  }
  uVar2 = 0x7966696c706d6953;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe800000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}



/* Entry: 102b2cf78; end: 102b2cfb7;  */

void FUN_102b2cf78(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112ef43f0;
  func_0x0001000285a8(0x112ef43f0,&UNK_10db23070);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 102b2cfb8; end: 102b2d03b; +[SCCameraVerticalToolbarRepositioningExperiment speedModeItemEarlyRegistrationEnabledWithAppStartExperimentReader:] */

long FUN_102b2cfb8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_3 != 0) {
    func_0x000107c615f0(param_3);
    uVar1 = 0xd000000000000021;
    func_0x000107c5fadc(0xd000000000000021,0x800000010f0f1720);
    lVar2 = param_3;
    func_0x000107c3ebd4(param_3);
    func_0x000107c61170(uVar1);
    func_0x000107c615e8(param_3);
    return lVar2;
  }
  return 0;
}



/* Entry: 102b2d03c; end: 102b2d047; +[SCCameraVerticalToolbarRepositioningExperiment simplifyTopItemsForReplyCameraWithCircumstanceEngine:] */

uint FUN_102b2d03c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  uVar1 = param_3;
  (*(code *)0x102b2d1ec)(param_3);
  func_0x000107c615e8(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 102b2d048; end: 102b2d053; +[SCCameraVerticalToolbarRepositioningExperiment onlyShowLabelsForReplyCameraOnceWithCircumstanceEngine:] */

uint FUN_102b2d048(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  uVar1 = param_3;
  (*(code *)0x102b2d2ac)(param_3);
  func_0x000107c615e8(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 102b2d054; end: 102b2d05f; +[SCCameraVerticalToolbarRepositioningExperiment neverShowLabelsForReplyCameraWithCircumstanceEngine:] */

uint FUN_102b2d054(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  uVar1 = param_3;
  (*(code *)0x102b2d364)(param_3);
  func_0x000107c615e8(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 102b2d060; end: 102b2d06b; +[SCCameraVerticalToolbarRepositioningExperiment toolbarButtonsShouldFailForSwipeGestureWithCircumstanceEngine:] */

uint FUN_102b2d060(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  uVar1 = param_3;
  (*(code *)0x102b2d420)(param_3);
  func_0x000107c615e8(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 102b2d06c; end: 102b2d0ab;  */

uint FUN_102b2d06c(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  uVar1 = param_3;
  (*param_4)(param_3);
  func_0x000107c615e8(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 102b2d0ac; end: 102b2d0e7; -[SCCameraVerticalToolbarRepositioningExperiment init] */

void FUN_102b2d0ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000100847148();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b2d0e8; end: 102b2d117;  */

void FUN_102b2d0e8(void)

{
  func_0x000100847148();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b2d118; end: 102b2d11b; -[SCCameraVerticalToolbarRepositioningExperiment .cxx_destruct] */

void FUN_102b2d118(void)

{
  return;
}



/* Entry: 102b2d11c; end: 102b2d17f;  */

ulong FUN_102b2d11c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (3 < uVar1) {
    uVar1 = 4;
  }
  return uVar1;
}



/* Entry: 102b2d180; end: 102b2d4c7;  */

ulong FUN_102b2d180(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 102b2d4c8; end: 102b2d4cb;  */

void FUN_102b2d4c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ef4438 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db23080;
  func_0x000107c61520(&UNK_10db23080,&UNK_11059ebd8);
  puRam0000000112ef4438 = puVar1;
  return;
}



/* Entry: 102b2d4cc; end: 102b2d50b;  */

void FUN_102b2d4cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ef4438 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db23080;
  func_0x000107c61520(&UNK_10db23080,&UNK_11059ebd8);
  puRam0000000112ef4438 = puVar1;
  return;
}



/* Entry: 102b2d50c; end: 102b2d50f;  */

void FUN_102b2d50c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ef4440 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db23120;
  func_0x000107c61520(&UNK_10db23120,&UNK_11059ec88);
  puRam0000000112ef4440 = puVar1;
  return;
}



/* Entry: 102b2d510; end: 102b2d54f;  */

void FUN_102b2d510(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ef4440 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db23120;
  func_0x000107c61520(&UNK_10db23120,&UNK_11059ec88);
  puRam0000000112ef4440 = puVar1;
  return;
}


