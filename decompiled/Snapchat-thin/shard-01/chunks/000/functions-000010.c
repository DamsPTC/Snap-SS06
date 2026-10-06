/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100c0a3b8; end: 100c0a4b3; -[SCSponsoredLensScheduleRequestFeatureInfoProvider initWithAdRequestProvider:scoreInfoProvider:sensitivityController:adsPreferencesProvider:] */

undefined1 *
FUN_100c0a3b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_1126e7be8;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c0a4b4; end: 100c0a4ff;  */

void FUN_100c0a4b4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c0a500; end: 100c0a627;  */

ulong FUN_100c0a500(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c0a628);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_100c0a63c(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c0a624);
      (*pcVar1)();
    }
    FUN_100c0a6bc(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 100c0a628; end: 100c0a63b;  */

void FUN_100c0a628(void)

{
  undefined *puVar1;
  
  if (puRam0000000113036c28 == (undefined *)0x0 || ((ulong)puRam0000000113036c28 & 1) != 0) {
    puVar1 = &UNK_10e9df9b8;
    func_0x000107c61518(&UNK_10e9df9b8,0x3f,0,0);
    puRam0000000113036c28 = puVar1;
  }
  return;
}



/* Entry: 100c0a63c; end: 100c0a6bb;  */

undefined * FUN_100c0a63c(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_100c0a628();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 100c0a6bc; end: 100c0a7df;  */

long FUN_100c0a6bc(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100c0a7dc);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100c0a7e0);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x113036c20;
        func_0x0001000285a8(0x113036c20,&UNK_10dcb1f00);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x113036c20;
      func_0x0001000285a8(0x113036c20,&UNK_10dcb1f00);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100c0a7d8);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 100c0a7e0; end: 100c0a83f; -[SCBlizzardGeoSignalLogoutCleanupEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0a7e0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112dde5d8,0);
  *(undefined8 *)(param_1 + _DAT_112dde5e0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100c0a840; end: 100c0aa0b; -[SCBlizzardGeoSignalLogoutCleanupEntryPoint setValue:forIvarName:] */

void FUN_100c0a840(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  func_0x000100c0a8ec(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100c0aa0c; end: 100c0aa63; -[SCBlizzardGeoSignalLogoutCleanupEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0aa0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dde5d8;
  func_0x000107c61428(param_1 + _DAT_112dde5d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c0aa64; end: 100c0aa8b; -[SCBlizzardGeoSignalLogoutCleanupEntryPoint begin] */

void FUN_100c0aa64(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100c0aa8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c0aa8c; end: 100c0ab5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0aa8c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = 0;
    FUN_100c0aba8();
    func_0x000107c613fc();
    *(long *)(lVar2 + 0x10) = lVar1;
    func_0x000107c61174(lVar1);
    lVar3 = lVar1;
    func_0x000107c4fd24();
    func_0x000107c61180();
    uVar4 = 0;
    FUN_100c0abd0(0);
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c4fba8(lVar3);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar4);
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112dde5e0);
    *(long *)(unaff_x20 + _DAT_112dde5e0) = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar4);
    return;
  }
  return;
}



/* Entry: 100c0ab60; end: 100c0aba7; -[SCBlizzardGeoSignalLogoutCleanupEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0ab60(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dde5d8;
  func_0x000107c61428(param_1 + _DAT_112dde5d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c0aba8; end: 100c0abc7;  */

void FUN_100c0aba8(void)

{
  func_0x000107c61168(&PTR_PTR_112dde3f8);
  return;
}



/* Entry: 100c0abc8; end: 100c0abcf; -[SCLogoutCleanupScope registry] */

undefined8 FUN_100c0abc8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c0abd0; end: 100c0abef;  */

void FUN_100c0abd0(void)

{
  func_0x000107c61168(&PTR_PTR_1127eeec8);
  return;
}



/* Entry: 100c0abf0; end: 100c0ac2b; -[_TtC25SCBlizzardGeoSignalFeeder39SCBlizzardGeoSignalLogoutCleanupHandler init] */

void FUN_100c0abf0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100c0ac2c; end: 100c0ac9f; -[SCGoogleSignInLogoutCleanupEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0ac2c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d46928,0);
  func_0x000107c61614(param_1 + _DAT_112d46930,0);
  *(undefined8 *)(param_1 + _DAT_112d46938) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100c0aca0; end: 100c0ad4b; -[SCGoogleSignInLogoutCleanupEntryPoint setValue:forIvarName:] */

void FUN_100c0aca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100c0ad4c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100c0ad4c; end: 100c0aedf;  */

void FUN_100c0ad4c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10e9b60)) {
      uVar2 = 0xd000000000000013;
      func_0x000107c605b8(0xd000000000000013,0x800000010ef164a0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "GoogleSignInLogoutCleanup/SCGoogleSignInLogoutCleanupEntryPoint.swift",
                            0x45,2,0x26,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100c0aee0);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c54f0c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100c0aee0; end: 100c0aeeb; -[SCGoogleSignInLogoutCleanupEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0aee0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d46928;
  func_0x000107c61428(param_1 + _DAT_112d46928,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c0aeec; end: 100c0af3f;  */

void FUN_100c0aeec(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c0af40; end: 100c0afb3; -[SCGoogleSignInServiceSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0af40(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113051290,0);
  func_0x000107c61614(param_1 + _DAT_113051298,0);
  *(undefined8 *)(param_1 + _DAT_1130512a0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100c0afb4; end: 100c0b05f; -[SCGoogleSignInServiceSaberServiceProvider setValue:forIvarName:] */

void FUN_100c0afb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100c0b060(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100c0b060; end: 100c0b1f7;  */

void FUN_100c0b060(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffdd) || (param_3 != -0x7ffffffef0e1c5d0)) {
      uVar2 = 0xd000000000000023;
      func_0x000107c605b8(0xd000000000000023,0x800000010f1e3a30,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ActivSystemScopeGraphBridge/SCGoogleSignInServiceSaberServiceProvider.swift"
                            ,0x4b,2,0x4b,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100c0b1f8);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c521a8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100c0b1f8; end: 100c0b203; -[SCGoogleSignInServiceSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0b1f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113051290;
  func_0x000107c61428(param_1 + _DAT_113051290,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c0b204; end: 100c0b257;  */

void FUN_100c0b204(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c0b258; end: 100c0b263; -[SCGoogleSignInServiceSaberServiceProvider setActivSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0b258(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113051298;
  func_0x000107c61428(param_1 + _DAT_113051298,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c0b264; end: 100c0b297; -[SCGoogleSignInServiceSaberServiceProvider __safeProvide] */

void FUN_100c0b264(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100c0b298();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c0b298; end: 100c0b37f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0b298(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3d020();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100c0b3dc();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_113050d00);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_1130512a0);
      *(long *)(unaff_x20 + _DAT_1130512a0) = lVar3;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar3);
      func_0x000107c61574(uVar4);
      func_0x000100083b20(auStack_48);
      func_0x000107c61574(lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 100c0b380; end: 100c0b38b; -[SCGoogleSignInServiceSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0b380(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113051290;
  func_0x000107c61428(param_1 + _DAT_113051290,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c0b38c; end: 100c0b3cf;  */

void FUN_100c0b38c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c0b3d0; end: 100c0b3db; -[SCGoogleSignInServiceSaberServiceProvider activSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0b3d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113051298;
  func_0x000107c61428(param_1 + _DAT_113051298,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c0b3dc; end: 100c0b457;  */

void FUN_100c0b3dc(undefined8 param_1)

{
  if (lRam000000011304fcb0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7e645c);
  return;
}



/* Entry: 100c0b458; end: 100c0b463; -[SCGoogleSignInLogoutCleanupEntryPoint setGoogleSignInService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0b458(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d46930;
  func_0x000107c61428(param_1 + _DAT_112d46930,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c0b464; end: 100c0b48b; -[SCGoogleSignInLogoutCleanupEntryPoint begin] */

void FUN_100c0b464(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100c0b48c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c0b48c; end: 100c0b5db;  */

/* WARNING: Possible PIC construction at 0x000100c0b578: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0b588: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c0b57c) */
/* WARNING: Removing unreachable block (ram,0x000100c0b58c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0b48c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_50;
  long lStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c44458();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_100c0b638();
    func_0x000107c613fc();
    *(long *)(lVar3 + 0x10) = lVar2;
    *(long *)(lVar3 + 0x18) = unaff_x20;
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_1130525f0);
    lVar4 = 0;
    func_0x000100c0b658();
    lVar3 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar3 + _DAT_112d468f8) = uVar5;
    puVar1 = PTR_s_init_1125d9248;
    lStack_50 = lVar3;
    lStack_48 = lVar4;
    func_0x000107c61174(lVar2);
    func_0x000107c61174(unaff_x20);
    func_0x000107c615f0(uVar5);
    func_0x000107c61154(&lStack_50,puVar1);
    func_0x000107c4fd24(lVar2);
    func_0x000107c61180();
    func_0x000107c4fba8();
    lVar2 = unaff_x20;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100c0b5dc; end: 100c0b5e7; -[SCGoogleSignInLogoutCleanupEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0b5dc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d46928;
  func_0x000107c61428(param_1 + _DAT_112d46928,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c0b5e8; end: 100c0b62b;  */

void FUN_100c0b5e8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c0b62c; end: 100c0b637; -[SCGoogleSignInLogoutCleanupEntryPoint googleSignInService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0b62c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d46930;
  func_0x000107c61428(param_1 + _DAT_112d46930,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c0b638; end: 100c0b677;  */

void FUN_100c0b638(void)

{
  func_0x000107c61168(&PTR_PTR_112d46890);
  return;
}



/* Entry: 100c0b678; end: 100c0b6e3; -[SCLegacyMainAppLogoutCleanupEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x000100c0b6c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c0b6c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0b678(long param_1)

{
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_112718bd4;
    func_0x000107c61148(param_1);
  }
  func_0x000107c4fd24(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c0b6e4; end: 100c0b6f7; -[MemoriesDb .cxx_construct] */

void FUN_100c0b6e4(long param_1)

{
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 100c0b6f8; end: 100c0b77f; -[MemoriesDb initWithSqliteConnection:] */

undefined1 * FUN_100c0b6f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fbcc8;
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



/* Entry: 100c0b780; end: 100c0b823; -[SCMemoriesAssetRepositoryImplCpp initWithTransactor:queue:] */

undefined1 *
FUN_100c0b780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126fbcc0;
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



/* Entry: 100c0b824; end: 100c0b9cb; -[SCCloudSync _bindMemPlatBackupMonitor] */

void FUN_100c0b824(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c4cb88();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c4a598();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  if ((int)uVar3 != 0) {
    func_0x000107c61144(auStack_58,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0xa0);
    func_0x000107c5c734(uVar4);
    func_0x000107c61180();
    uVar2 = uVar4;
    func_0x000107c4da04();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x000107c4e600(uVar5);
    func_0x000107c61180();
    uVar3 = uVar5;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar1 = uVar2;
    func_0x000107c4da88(uVar2);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_60,auStack_58);
    uVar6 = uVar1;
    func_0x000107c5c320(uVar1);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar4);
    func_0x000107c61120(auStack_60);
    func_0x000107c61120(auStack_58);
  }
  return;
}



/* Entry: 100c0b9cc; end: 100c0b9d3; -[SCCloudSyncDependencyProvidingServices memoriesExperimentService] */

undefined8 FUN_100c0b9cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 100c0b9d4; end: 100c0ba13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c0b9d4(void)

{
  undefined8 auStack_30 [2];
  
  func_0x0001000d224c(auStack_30);
  return auStack_30[0];
}



/* Entry: 100c0ba14; end: 100c0ba1b;  */

void FUN_100c0ba14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100c0ba1c; end: 100c0ba3f;  */

void FUN_100c0ba1c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c0ba40; end: 100c0ba43; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl isTacomaBackupOrchestratorEnabled] */

uint FUN_100c0ba40(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100c0ba78();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 100c0ba44; end: 100c0ba77;  */

uint FUN_100c0ba44(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100c0ba78();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 100c0ba78; end: 100c0bbbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_100c0ba78(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar5 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112deec90);
  func_0x000107c615f0(uVar6);
  func_0x000107c5eea0(puVar5);
  uVar2 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010efca5b0);
  uVar3 = uVar6;
  func_0x000107c3ebd4(uVar6);
  func_0x000107c61170(uVar2);
  uVar2 = uVar6;
  func_0x00010085883c(uVar6);
  func_0x0001000d224c(auStack_78);
  puVar4 = auStack_78;
  func_0x0001000a8868(puVar4,uStack_60);
  func_0x0001008599bc(uVar2,0,puVar5,uStack_60,uStack_58,puVar4);
  func_0x000107c615e8(uVar6);
  (**(code **)(lVar7 + 8))(puVar5,lVar1);
  func_0x0001000834e4(auStack_78);
  return (uint)uVar3 ^ 1;
}



/* Entry: 100c0bbbc; end: 100c0bbf7; -[SCCoreDataObjectContext isInsidePerformChanges] */

bool FUN_100c0bbbc(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e0498;
  func_0x000107c40f94(PTR_PTR_1126e0498);
  func_0x000107c61180();
  func_0x000107c61170();
  return puVar1 != (undefined *)0x0;
}



/* Entry: 100c0bbf8; end: 100c0bc6b; +[SCCoreDataObjectContext currentObjectContext] */

void FUN_100c0bbf8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c41010(PTR__OBJC_CLASS___NSThread_1126b47e0);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5c8f4();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100c0bc6c; end: 100c0bc6f;  */

void FUN_100c0bc6c(undefined8 *param_1)

{
  undefined8 auStack_30 [2];
  
  func_0x0001000d224c(auStack_30);
  *param_1 = auStack_30[0];
  return;
}



/* Entry: 100c0bc70; end: 100c0bca3;  */

void FUN_100c0bc70(undefined8 *param_1)

{
  undefined8 auStack_30 [2];
  
  func_0x0001000d224c(auStack_30);
  *param_1 = auStack_30[0];
  return;
}



/* Entry: 100c0bca4; end: 100c0bcc3;  */

void FUN_100c0bca4(void)

{
  func_0x000107c61168(&PTR_PTR_112802e50);
  return;
}



/* Entry: 100c0bcc4; end: 100c0bcfb;  */

void FUN_100c0bcc4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100c0bca4();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11047ac18;
  return;
}



/* Entry: 100c0bcfc; end: 100c0bdd3; -[_TtC34SCMemPlatBackupMonitorServicesImpl14BackupEventBus init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0bcfc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar1 = _DAT_112e284b8;
  func_0x0001000285a8(0x112e284b0,&UNK_10da107e0);
  func_0x000107c613fc();
  uVar2 = 1;
  func_0x00010008747c();
  *(undefined8 *)(param_1 + lVar1) = uVar2;
  lVar1 = _DAT_112e284c0;
  uVar3 = 0;
  func_0x00010006a340();
  uVar2 = uVar3;
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(param_1 + lVar1) = uVar2;
  *(undefined8 *)(param_1 + _DAT_112e284c8) = 0;
  lVar1 = _DAT_112e284d0;
  func_0x000107c613fc(uVar3,0x18,7);
  func_0x00010006a360();
  *(undefined8 *)(param_1 + lVar1) = uVar3;
  FUN_100c0bca4();
  lStack_40 = param_1;
  uStack_38 = uVar3;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100c0bdd4; end: 100c0bdf3;  */

void FUN_100c0bdd4(void)

{
  func_0x000107c61168(&PTR_PTR_112940120);
  return;
}



/* Entry: 100c0bdf4; end: 100c0be33; -[_TtC34SCMemPlatBackupMonitorServicesImpl14BackupEventBus observable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0bdf4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c0be34; end: 100c0bf03; -[SCLensScheduleNamespaceDataModel .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c0be58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0be78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0be98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0beb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0bed8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c0bebc) */
/* WARNING: Removing unreachable block (ram,0x000100c0be9c) */
/* WARNING: Removing unreachable block (ram,0x000100c0be7c) */
/* WARNING: Removing unreachable block (ram,0x000100c0be5c) */
/* WARNING: Removing unreachable block (ram,0x000100c0bedc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0be34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127852fc,0);
  return;
}



/* Entry: 100c0bf04; end: 100c0bf4b; -[SCMixerRequestMetadataDataModel .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c0bf1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0bf34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c0bf20) */
/* WARNING: Removing unreachable block (ram,0x000100c0bf38) */

void FUN_100c0bf04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 100c0bf4c; end: 100c0bf57; -[SCLensMetadataMetadataItem .cxx_destruct] */

void FUN_100c0bf4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 100c0bf58; end: 100c0bf87; -[SCLensMetadataCTLItem .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c0bf70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c0bf74) */

void FUN_100c0bf58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 100c0bf88; end: 100c0c1a3; -[SCLensMetadataDataModel .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c0bfa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0bfb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0bfd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0bfe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0c000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0c018: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0c030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0c048: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0c060: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0c078: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0c090: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0c0a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0c0c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0c0d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0c0f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0c108: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0c120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0c138: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0c150: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0c168: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0c180: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c0c16c) */
/* WARNING: Removing unreachable block (ram,0x000100c0c154) */
/* WARNING: Removing unreachable block (ram,0x000100c0c13c) */
/* WARNING: Removing unreachable block (ram,0x000100c0c124) */
/* WARNING: Removing unreachable block (ram,0x000100c0c10c) */
/* WARNING: Removing unreachable block (ram,0x000100c0c0f4) */
/* WARNING: Removing unreachable block (ram,0x000100c0c0dc) */
/* WARNING: Removing unreachable block (ram,0x000100c0c0c4) */
/* WARNING: Removing unreachable block (ram,0x000100c0c0ac) */
/* WARNING: Removing unreachable block (ram,0x000100c0c094) */
/* WARNING: Removing unreachable block (ram,0x000100c0c07c) */
/* WARNING: Removing unreachable block (ram,0x000100c0c064) */
/* WARNING: Removing unreachable block (ram,0x000100c0c04c) */
/* WARNING: Removing unreachable block (ram,0x000100c0c034) */
/* WARNING: Removing unreachable block (ram,0x000100c0c01c) */
/* WARNING: Removing unreachable block (ram,0x000100c0c004) */
/* WARNING: Removing unreachable block (ram,0x000100c0bfec) */
/* WARNING: Removing unreachable block (ram,0x000100c0bfd4) */
/* WARNING: Removing unreachable block (ram,0x000100c0bfbc) */
/* WARNING: Removing unreachable block (ram,0x000100c0bfa4) */
/* WARNING: Removing unreachable block (ram,0x000100c0c184) */

void FUN_100c0bf88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x188,0);
  return;
}



/* Entry: 100c0c1a4; end: 100c0c1d3; -[SCLensMetadataLensPreview .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c0c1bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c0c1c0) */

void FUN_100c0c1a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 100c0c1d4; end: 100c0c1df; -[SCLensMetadataResourceContainer .cxx_destruct] */

void FUN_100c0c1d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 100c0c1e0; end: 100c0c20f; -[SCLensMetadataLensResource .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c0c1f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c0c1fc) */

void FUN_100c0c1e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 100c0c210; end: 100c0c21b; -[SCLensMetadataUnlockablesCarouselGroup .cxx_destruct] */

void FUN_100c0c210(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 100c0c21c; end: 100c0c257; -[SCLensMetadataCommunityLensData .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c0c234: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c0c238) */

void FUN_100c0c21c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 100c0c258; end: 100c0c29f; -[SCLensMetadataLensCreatorData .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c0c270: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0c288: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c0c274) */
/* WARNING: Removing unreachable block (ram,0x000100c0c28c) */

void FUN_100c0c258(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 100c0c2a0; end: 100c0c33b; -[SCLensMetadataLensAsset .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c0c2b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0c2d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0c2e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0c300: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0c318: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c0c304) */
/* WARNING: Removing unreachable block (ram,0x000100c0c2ec) */
/* WARNING: Removing unreachable block (ram,0x000100c0c2d4) */
/* WARNING: Removing unreachable block (ram,0x000100c0c2bc) */
/* WARNING: Removing unreachable block (ram,0x000100c0c31c) */

void FUN_100c0c2a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x70,0);
  return;
}



/* Entry: 100c0c33c; end: 100c0c36b; -[SCLensMetadataLensAssetStorageOption .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c0c354: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c0c358) */

void FUN_100c0c33c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 100c0c36c; end: 100c0c3fb; -[SCLensMetadataUnlockableTrackInfo .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c0c384: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0c39c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0c3b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0c3cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0c3e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c0c3d0) */
/* WARNING: Removing unreachable block (ram,0x000100c0c3b8) */
/* WARNING: Removing unreachable block (ram,0x000100c0c3a0) */
/* WARNING: Removing unreachable block (ram,0x000100c0c388) */
/* WARNING: Removing unreachable block (ram,0x000100c0c3e8) */

void FUN_100c0c36c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x58,0);
  return;
}



/* Entry: 100c0c3fc; end: 100c0c42b; -[SCLensMetadataHintTranslation .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c0c414: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c0c418) */

void FUN_100c0c3fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 100c0c42c; end: 100c0c497; -[SCLensMetadataUnlockablesAttachment .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c0c444: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0c45c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0c474: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c0c460) */
/* WARNING: Removing unreachable block (ram,0x000100c0c448) */
/* WARNING: Removing unreachable block (ram,0x000100c0c478) */

void FUN_100c0c42c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x38,0);
  return;
}



/* Entry: 100c0c498; end: 100c0c4a3; -[SCLensMetadataUnlockablesWebViewAttachment .cxx_destruct] */

void FUN_100c0c498(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 100c0c4a4; end: 100c0c4d3; -[SCLensFetchLocationMetadataDataModel .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c0c4bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c0c4c0) */

void FUN_100c0c4a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 100c0c4d4; end: 100c0c4df; -[SCLensFetchLocationMetadataGeoCircle .cxx_destruct] */

void FUN_100c0c4d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 100c0c4e0; end: 100c0c557;  */

/* WARNING: Possible PIC construction at 0x000100c0c528: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c0c52c) */

void FUN_100c0c4e0(undefined8 param_1,long param_2)

{
  func_0x000107c4d2d4();
  if (param_2 == 0) {
    func_0x000107c61160(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  }
  else {
    func_0x000107c61174(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c0c558; end: 100c0c587; -[SCLensNoFillMetadataDataModel .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c0c570: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c0c574) */

void FUN_100c0c558(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 100c0c588; end: 100c0c5fb; -[SCCTPStickerContentManagerServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0c588(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_11301d390,0);
  func_0x000107c61614(param_1 + _DAT_11301d398,0);
  *(undefined8 *)(param_1 + _DAT_11301d3a0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100c0c5fc; end: 100c0c6a7; -[SCCTPStickerContentManagerServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100c0c5fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100c0c6a8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100c0c6a8; end: 100c0c83f;  */

void FUN_100c0c6a8(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0e3c2c0)) {
      uVar2 = 0xd000000000000029;
      func_0x000107c605b8(0xd000000000000029,0x800000010f1c3d40,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CreateUserSessionScopeGraphBridge/SCCTPStickerContentManagerServicesSaberServiceProvider.swift"
                            ,0x5e,2,0x54,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100c0c840);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53aa0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100c0c840; end: 100c0c84b; -[SCCTPStickerContentManagerServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0c840(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11301d390;
  func_0x000107c61428(param_1 + _DAT_11301d390,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c0c84c; end: 100c0c89f;  */

void FUN_100c0c84c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c0c8a0; end: 100c0c8ab; -[SCCTPStickerContentManagerServicesSaberServiceProvider setCreateUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0c8a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11301d398;
  func_0x000107c61428(param_1 + _DAT_11301d398,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c0c8ac; end: 100c0c8df; -[SCCTPStickerContentManagerServicesSaberServiceProvider __safeProvide] */

void FUN_100c0c8ac(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100c0c8e0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c0c8e0; end: 100c0c9c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0c8e0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c40c10();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100c0ca24();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_11301ce28);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11301d3a0);
      *(long *)(unaff_x20 + _DAT_11301d3a0) = lVar3;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar3);
      func_0x000107c61574(uVar4);
      func_0x000100083b20(auStack_48);
      func_0x000107c61574(lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 100c0c9c8; end: 100c0c9d3; -[SCCTPStickerContentManagerServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0c9c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11301d390;
  func_0x000107c61428(param_1 + _DAT_11301d390,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c0c9d4; end: 100c0ca17;  */

void FUN_100c0c9d4(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c0ca18; end: 100c0ca23; -[SCCTPStickerContentManagerServicesSaberServiceProvider createUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0ca18(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11301d398;
  func_0x000107c61428(param_1 + _DAT_11301d398,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c0ca24; end: 100c0ca9f;  */

void FUN_100c0ca24(undefined8 param_1)

{
  if (lRam000000011301b5b8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7cb5e0);
  return;
}



/* Entry: 100c0caa0; end: 100c0cc27; -[SCCTPItemMessagePresendUploadPluginEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x000100c0cb08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0cb7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0cb8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0cbc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0cbf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0cc08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c0cbfc) */
/* WARNING: Removing unreachable block (ram,0x000100c0cbc8) */
/* WARNING: Removing unreachable block (ram,0x000100c0cb90) */
/* WARNING: Removing unreachable block (ram,0x000100c0cb80) */
/* WARNING: Removing unreachable block (ram,0x000100c0cb0c) */
/* WARNING: Removing unreachable block (ram,0x000100c0cc0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0caa0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b0cf0;
  func_0x000107c610f4(PTR_PTR_1126b0cf0);
  param_1 = param_1 + _DAT_112713b44;
  func_0x000107c61148(param_1);
  func_0x000107c4a7f0();
  func_0x000107c61180();
  func_0x000107c47014(puVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c0cc28; end: 100c0ccd3; -[SCCTPCustomStickerMessagePresendUploadPlugin initWithItemsPersistence:] */

undefined1 * FUN_100c0cc28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e45f0;
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



/* Entry: 100c0ccd4; end: 100c0ce57; -[SCBitmojiCustomojiFetcher initWithClientRenderer:userContentDelivery:flatlandLogger:flatlandConfigProvider:clientRendererGating:renderConfigProvider:] */

undefined1 *
FUN_100c0ccd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_58 = PTR_PTR_1126e8670;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c44428();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
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



/* Entry: 100c0ce58; end: 100c0cefb; -[SCCTPCustomojiMessagePresendUploadPlugin initWithStickerContentManagerServices:customojiFetcher:] */

undefined1 *
FUN_100c0ce58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e45f8;
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



/* Entry: 100c0cefc; end: 100c0cf03; -[SCMessagePresendUploadPluginScope plugInRegistry] */

undefined8 FUN_100c0cefc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c0cf04; end: 100c0cfb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0cf04(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d5cf88,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5cf90,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5cf98,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5cfa0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5cfa8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d5cfb0) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}


