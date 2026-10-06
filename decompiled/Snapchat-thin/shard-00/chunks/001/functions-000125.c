/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1002edc3c; end: 1002edc4f;  */

void FUN_1002edc3c(void)

{
  return;
}



/* Entry: 1002edc50; end: 1002edc57; -[SCCameraHardwareResourceImpl setSecondaryDevicePositions:] */

void FUN_1002edc50(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xc0) = param_3;
  return;
}



/* Entry: 1002edc58; end: 1002edc63; -[_TtC26SCCaptureDeviceManagerImpl36CaptureDeviceAvailabilityHandlerImpl setSecondaryDevicePositions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002edc58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112da0a10);
  func_0x000107c61174();
  func_0x000107c3e208(uVar1);
  FUN_1002edd14(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1002edc64; end: 1002edcc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002edc64(long param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112da0a10);
  func_0x000107c61174();
  func_0x000107c3e208(uVar1);
  (*param_4)(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1002edcc8; end: 1002edd13;  */

void FUN_1002edcc8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0xa0;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c4980c();
  lRam000000011316eea8 = (long)(int)lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1002edd14; end: 1002edf4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002edd14(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  
  puVar3 = param_1;
  FUN_1000298f0();
  func_0x000107c61428();
  uVar4 = *puVar3;
  puStack_90 = (undefined8 *)0x0;
  uStack_88 = 0xe000000000000000;
  func_0x000107c61174(uVar4);
  func_0x000107c602fc(0x3b);
  func_0x000107c5fb78(0xd000000000000039,0x800000010ef82be0);
  puVar7 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
  puVar1 = PTR___sSuN_11034e220;
  puVar6 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
  puStack_b0 = param_1;
  func_0x000107c6057c(PTR___sSuN_11034e220,PTR___sSus23CustomStringConvertiblesWP_11034e240);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar6);
  uVar8 = uStack_88;
  puVar5 = puStack_90;
  FUN_1000a9a18(puStack_90,uStack_88);
  func_0x000107c61170(uVar4);
  func_0x000107c6142c(uVar8);
  FUN_1002a49d0();
  FUN_10006c804();
  func_0x000107c61574(uVar8);
  puStack_90 = (undefined8 *)0x0;
  uStack_88 = 0xe000000000000000;
  func_0x000107c602fc(0x4d);
  puStack_b0 = puStack_90;
  uStack_a8 = uStack_88;
  func_0x000107c5fb78(0xd000000000000045,0x800000010ef82c20);
  lVar2 = _DAT_112da0e98;
  func_0x000107c61428(unaff_x20 + _DAT_112da0e98,&puStack_90,1,0);
  puStack_98 = *(undefined8 **)(unaff_x20 + lVar2);
  puVar6 = puVar7;
  func_0x000107c6057c(puVar1,puVar7);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar6);
  func_0x000107c5fb78(0x206f7420,0xe400000000000000);
  puStack_98 = param_1;
  func_0x000107c6057c(puVar1,puVar7);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar7);
  func_0x000107c6142c(uStack_a8);
  *(undefined8 **)(unaff_x20 + lVar2) = param_1;
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112da0eb8);
  func_0x000107c6157c(uVar8);
  FUN_100070bfc();
  func_0x000107c61574(uVar8);
  func_0x000107c61428(puVar3,&puStack_b0,0,0);
  uVar8 = *puVar3;
  func_0x000107c61174(uVar8);
  FUN_1000aa0a8(puVar5);
  func_0x000107c61170(uVar8);
  return;
}



/* Entry: 1002edf4c; end: 1002edfd7;  */

void FUN_1002edf4c(void)

{
  return;
}



/* Entry: 1002edfd8; end: 1002ee02b; -[_TtC26SCCaptureDeviceManagerImpl24CaptureDeviceManagerImpl sessionInfoProvidingHandler] */

void FUN_1002edfd8(undefined8 param_1)

{
  undefined *puVar1;
  
  func_0x000107c61174();
  puVar1 = &DAT_112da0d68;
  FUN_1002e9854(&DAT_112da0d68,FUN_1002ee040,&DAT_112da0ae0,&DAT_112da0ae8);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1002ee02c; end: 1002ee03f;  */

void FUN_1002ee02c(void)

{
  return;
}



/* Entry: 1002ee040; end: 1002ee05f;  */

void FUN_1002ee040(void)

{
  func_0x000107c61168(&PTR_PTR_1127d8468);
  return;
}



/* Entry: 1002ee060; end: 1002ee0c3;  */

void FUN_1002ee060(void)

{
  return;
}



/* Entry: 1002ee0c4; end: 1002ee14f; -[_TtC26SCCaptureDeviceManagerImpl44CaptureDeviceSessionInfoProvidingHandlerImpl getManagedCaptureSessionDeviceForDeviceAtPosition:] */

void FUN_1002ee0c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  func_0x0001002ee100(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1002ee150; end: 1002ee1b3;  */

void FUN_1002ee150(void)

{
  return;
}



/* Entry: 1002ee1b4; end: 1002ee2e3;  */

ulong FUN_1002ee1b4(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1002ee2e4);
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
  FUN_1002ee2f8(uVar2,uVar4,FUN_1002ee2e4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1002ee2e0);
      (*pcVar1)();
    }
    FUN_1002ee4a4(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 1002ee2e4; end: 1002ee2f7;  */

void FUN_1002ee2e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd8568 == (undefined *)0x0 || ((ulong)puRam0000000112dd8568 & 1) != 0) {
    puVar1 = &UNK_10e882e94;
    func_0x000107c61518(&UNK_10e882e94,0x2a,0,0);
    puRam0000000112dd8568 = puVar1;
  }
  return;
}



/* Entry: 1002ee2f8; end: 1002ee377;  */

undefined * FUN_1002ee2f8(undefined *param_1,undefined *param_2,code *param_3)

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
    (*param_3)();
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



/* Entry: 1002ee378; end: 1002ee4a3;  */

void FUN_1002ee378(void)

{
  return;
}



/* Entry: 1002ee4a4; end: 1002ee5c7;  */

long FUN_1002ee4a4(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1002ee5c4);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002ee5c8);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112dd8708;
        FUN_1000285a8(0x112dd8708,&UNK_10d99be00);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112dd8708;
      FUN_1000285a8(0x112dd8708,&UNK_10d99be00);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1002ee5c0);
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



/* Entry: 1002ee5c8; end: 1002ee5db;  */

void FUN_1002ee5c8(void)

{
  return;
}



/* Entry: 1002ee5dc; end: 1002ee64f; -[SCBlizzardExperimentProvider blizzardQ12DiskFlushIntervalSecs] */

undefined8 FUN_1002ee5dc(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1002eeaa0;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136c4c38 != -1) {
    uStack_18 = param_1;
    FUN_10002a2fc(0x1136c4c38,&puStack_38);
  }
  return uRam000000011316eec8;
}



/* Entry: 1002ee650; end: 1002eea9f; -[SCManagedCaptureSessionImpl addCaptureDevicesToSession:] */

/* WARNING: Possible PIC construction at 0x0001002ee774: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002ee81c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002ee8ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002ee8d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002ee920: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002ee958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002ee96c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002eea84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001002ee970) */
/* WARNING: Removing unreachable block (ram,0x0001002ee9a8) */
/* WARNING: Removing unreachable block (ram,0x0001002eea68) */
/* WARNING: Removing unreachable block (ram,0x0001002eea80) */
/* WARNING: Removing unreachable block (ram,0x0001002ee988) */
/* WARNING: Removing unreachable block (ram,0x0001002ee95c) */
/* WARNING: Removing unreachable block (ram,0x0001002ee8dc) */
/* WARNING: Removing unreachable block (ram,0x0001002ee8b0) */
/* WARNING: Removing unreachable block (ram,0x0001002ee8c8) */
/* WARNING: Removing unreachable block (ram,0x0001002ee8d4) */
/* WARNING: Removing unreachable block (ram,0x0001002ee820) */
/* WARNING: Removing unreachable block (ram,0x0001002ee82c) */
/* WARNING: Removing unreachable block (ram,0x0001002ee778) */
/* WARNING: Removing unreachable block (ram,0x0001002ee77c) */
/* WARNING: Removing unreachable block (ram,0x0001002ee798) */
/* WARNING: Removing unreachable block (ram,0x0001002ee7a0) */
/* WARNING: Removing unreachable block (ram,0x0001002ee7a8) */
/* WARNING: Removing unreachable block (ram,0x0001002ee7ac) */
/* WARNING: Removing unreachable block (ram,0x0001002ee7b8) */
/* WARNING: Removing unreachable block (ram,0x0001002ee8f8) */
/* WARNING: Removing unreachable block (ram,0x0001002ee910) */
/* WARNING: Removing unreachable block (ram,0x0001002ee91c) */
/* WARNING: Removing unreachable block (ram,0x0001002ee7cc) */
/* WARNING: Removing unreachable block (ram,0x0001002eea88) */
/* WARNING: Removing unreachable block (ram,0x0001002eea98) */

void FUN_1002ee650(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c3e76c(*(undefined8 *)(param_1 + 8));
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c4080c(param_3,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar1 != 0) {
    lVar5 = *plStack_120;
    do {
      lVar4 = 0;
      do {
        if (*plStack_120 != lVar5) {
          func_0x000107c61128(param_3);
        }
        uVar6 = *(ulong *)(lStack_128 + lVar4 * 8);
        func_0x000107c44118(uVar6);
        uVar2 = uVar6;
        func_0x000107c44020();
        func_0x000107c61180();
        uVar3 = uVar6;
        func_0x000107c446d8();
        if ((uVar3 & 1) != 0) {
          if (uVar2 != 0) {
            param_3 = *(long *)(param_1 + 8);
            func_0x000107c49704(param_3);
            func_0x000107c61180();
            func_0x000107c40404();
            goto code_r0x000107c61170;
          }
          func_0x000107c3f5e8(uVar6);
        }
        func_0x000107c61170(uVar2);
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      lVar1 = param_3;
      func_0x000107c4080c(param_3,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar1 != 0);
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1002eeaa0; end: 1002eeaeb;  */

void FUN_1002eeaa0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0xa0;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c4980c();
  lRam000000011316eec8 = (long)(int)lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1002eeaec; end: 1002efaf7;  */

void FUN_1002eeaec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x278));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x280));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x288));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x290));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x298));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x300));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x308));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x310));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x318));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 800));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x328));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x330));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x338));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x340));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x348));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x350));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x358));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x360));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x368));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x370));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x378));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x380));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x388));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x390));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x398));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 1000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x408));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x410));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x418));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x420));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x428));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x430));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x438));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x440));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x448));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x450));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x458));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x460));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x468));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x470));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x478));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x480));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x488));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x490));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x498));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x500));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x508));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x510));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x518));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x520));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x528));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x530));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x538));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x540));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x548));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x550));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x558));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x560));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x568));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x570));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x578));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x580));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x588));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x590));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x598));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x608));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x610));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x618));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x620));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x628));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x630));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x638));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x640));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x648));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x650));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x658));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x660));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x668));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x670));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x678));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x680));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x688));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x690));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x698));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x700));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x708));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x710));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x718));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x720));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x728));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x730));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x738));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x740));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x748));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x750));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x758));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x760));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x768));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x770));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x778));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x780));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x788));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x790));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x798));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 2000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x800));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x808));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x810));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x818));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x820));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x828));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x830));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x838));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x840));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x848));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x850));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x858));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x860));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x868));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x870));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x878));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x880));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x888));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x890));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x898));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x900));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x908));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x910));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x918));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x920));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x928));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x930));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x938));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x940));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x948));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x950));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x958));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x960));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x968));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x970));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x978));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x980));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x988));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x990));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x998));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa00));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa08));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xaa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xaa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xab0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xab8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xac0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xac8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xad0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xad8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xae0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xae8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xaf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xaf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb00));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb08));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xba0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xba8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 3000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbc8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc00));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc08));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xca0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xca8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcc8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xce0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xce8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd00));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd08));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xda0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xda8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdc8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xde0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xde8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe00));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe08));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xea0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xea8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xeb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xeb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xec0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xec8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xed0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xed8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xee0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xee8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xef0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xef8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf00));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf08));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 4000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xfa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xfb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xfb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xfc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xfc8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xfd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xfd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xfe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xfe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xff0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xff8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002efaf8; end: 1002efb07; -[_TtC22SCManagedCaptureDevice24ManagedCaptureDeviceImpl getManagedCaptureDevicePosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1002efaf8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112da1128);
}



/* Entry: 1002efb08; end: 1002efbd7; -[_TtC22SCManagedCaptureDevice24ManagedCaptureDeviceImpl hasActiveFormat] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1002efb08(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar2 = *(long *)(param_1 + _DAT_112da1120);
  func_0x000107c61174();
  uVar1 = 0x6f46657669746361;
  func_0x000107c5fadc(0x6f46657669746361,0xec00000074616d72);
  func_0x000107c5dc2c();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  if (lVar2 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
  }
  else {
    func_0x000107c60234(&uStack_50,lVar2);
    func_0x000107c615e8(lVar2);
  }
  FUN_10025089c(&uStack_50,0x112d387f8,&UNK_10d902650);
  func_0x000107c61170(param_1);
  return lVar2 != 0;
}



/* Entry: 1002efbd8; end: 1002efbe7;  */

undefined8 FUN_1002efbd8(void)

{
  return 0x1b;
}



/* Entry: 1002efbe8; end: 1002efccb; -[SCManagedCaptureSessionImpl _addInput:withoutConnections:] */

undefined8 FUN_1002efbe8(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  lVar1 = param_1;
  func_0x000107c4a360();
  if ((int)lVar1 != 0) {
    puVar2 = PTR_PTR_1126b3130;
    func_0x000107c5aa04(PTR_PTR_1126b3130);
    func_0x000107c61180();
    func_0x000107c3df00();
    func_0x000107c61170(puVar2);
  }
  func_0x000107c58fe4(param_1,param_2,
                      *(undefined8 *)PTR__AVCaptureSessionPresetInputPriority_110347f90);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x000107c3f394(uVar3,param_2,param_3);
  if ((int)uVar3 != 0) {
    if (param_4 == 0) {
      func_0x000107c3d710(*(undefined8 *)(param_1 + 8),param_2,param_3);
    }
    else {
      func_0x000107c3d714(*(undefined8 *)(param_1 + 8),param_2,param_3);
    }
  }
  func_0x000107c61170(param_3);
  return uVar3;
}



/* Entry: 1002efccc; end: 1002efcdb;  */

undefined8 FUN_1002efccc(void)

{
  return 0x1b;
}



/* Entry: 1002efcdc; end: 1002efcf3; -[SCManagedCaptureSessionImpl isRunning] */

void FUN_1002efcdc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c07cd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_1 + 8),PTR_s_isRunning_1125fcd68);
    return;
  }
  return;
}



/* Entry: 1002efcf4; end: 1002efd63; -[SCManagedCaptureSessionImpl setSessionPreset:] */

undefined8 FUN_1002efcf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c3f43c(uVar1,param_2,param_3);
  if ((int)uVar1 != 0) {
    func_0x000107c58fe4(*(undefined8 *)(param_1 + 8),param_2,param_3);
  }
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 1002efd64; end: 1002f041b;  */

undefined8 FUN_1002efd64(void)

{
  return 0x1b;
}



/* Entry: 1002f041c; end: 1002f048f; -[SCBlizzardExperimentProvider jsonFramesEventSaveBatchQ3] */

undefined8 FUN_1002f041c(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1002f0490;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136c4c20 != -1) {
    uStack_18 = param_1;
    FUN_10002a2fc(0x1136c4c20,&puStack_38);
  }
  return uRam000000011316eeb0;
}



/* Entry: 1002f0490; end: 1002f04db;  */

void FUN_1002f0490(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0xa0;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c4980c();
  lRam000000011316eeb0 = (long)(int)lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1002f04dc; end: 1002f0533;  */

undefined8 FUN_1002f04dc(void)

{
  return 0x1b;
}



/* Entry: 1002f0534; end: 1002f05a7; -[SCBlizzardExperimentProvider blizzardQ3DiskFlushIntervalSecs] */

undefined8 FUN_1002f0534(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1002f05a8;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136c4c40 != -1) {
    uStack_18 = param_1;
    FUN_10002a2fc(0x1136c4c40,&puStack_38);
  }
  return uRam000000011316eed0;
}



/* Entry: 1002f05a8; end: 1002f05f3;  */

void FUN_1002f05a8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0xa0;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c4980c();
  lRam000000011316eed0 = (long)(int)lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1002f05f4; end: 1002f0c0b;  */

undefined8 FUN_1002f05f4(void)

{
  return 0x1b;
}



/* Entry: 1002f0c0c; end: 1002f0faf; -[SCBlizzardConfigAdapter initWithConfigMap:circumstanceEngine:experimentProvider:isSpectrum:] */

undefined8 *
FUN_1002f0c0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
             int param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_b0 = PTR_PTR_1126f4a70;
  puVar2 = &uStack_b8;
  uStack_b8 = param_1;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x000107c61174(param_5);
    uVar3 = puVar2[1];
    puVar2[1] = param_5;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_3);
    uVar3 = puVar2[0xe];
    puVar2[0xe] = param_3;
    func_0x000107c61170(uVar3);
    if (param_6 == 0) {
      puVar2[0xd] = 0xf00000;
      if (param_4 != 0) {
        lVar4 = param_4;
        func_0x000107c4980c();
        uVar1 = (uint)lVar4;
        if (uVar1 < 0xf00001) {
          uVar1 = 0xf00000;
        }
        puVar2[0xd] = (long)(int)uVar1;
      }
      puVar2[2] = 864000000;
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c4d974();
      func_0x000107c61180();
      ppuStack_90 = &PTR____CFConstantStringClassReference_110e6ca18;
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_a8 = puVar5;
      func_0x000107c4d974();
      func_0x000107c61180();
      ppuStack_88 = &PTR____CFConstantStringClassReference_110e6ca38;
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_a0 = puVar6;
      func_0x000107c4d974();
      func_0x000107c61180();
      ppuStack_80 = &PTR____CFConstantStringClassReference_110e6ca58;
      puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_98 = puVar7;
      func_0x000107c419ac();
      func_0x000107c61180();
      uVar3 = puVar2[3];
      puVar2[3] = puVar8;
      func_0x000107c61170(uVar3);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar5);
      lVar4 = param_5;
      func_0x000107c4a888();
      puVar2[4] = (double)lVar4;
      lVar4 = param_5;
      func_0x000107c4a884();
      puVar2[5] = lVar4;
      lVar4 = param_5;
      func_0x000107c4a880();
      puVar2[6] = lVar4;
      puVar2[7] = 1;
    }
    else {
      puVar2[0xd] = 5000000;
      puVar2[0xc] = 1;
      puVar2[0xb] = 1;
      puVar2[10] = 0x4000000000000000;
      puVar2[8] = 86400000;
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c4d974();
      func_0x000107c61180();
      ppuStack_68 = &PTR____CFConstantStringClassReference_110e6ca98;
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_78 = puVar5;
      func_0x000107c4d974();
      func_0x000107c61180();
      ppuStack_60 = &PTR____CFConstantStringClassReference_110e6ca78;
      puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_70 = puVar6;
      func_0x000107c419ac();
      func_0x000107c61180();
      uVar3 = puVar2[9];
      puVar2[9] = puVar7;
      func_0x000107c61170(uVar3);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar5);
      if (param_4 != 0) {
        lVar4 = param_4;
        func_0x000107c4980c();
        puVar2[0xd] = (long)(int)lVar4;
        lVar4 = param_4;
        func_0x000107c4980c();
        puVar2[0xb] = (long)(int)lVar4;
        lVar4 = param_4;
        func_0x000107c4980c();
        puVar2[0xc] = (long)(int)lVar4;
        lVar4 = param_4;
        func_0x000107c4980c();
        puVar2[10] = (double)(int)lVar4;
        lVar4 = param_4;
        func_0x000107c4980c();
        puVar2[8] = (long)((int)lVar4 * 3600000);
      }
    }
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar2;
  }
  func_0x000107c60e78();
  return (undefined8 *)0x1b;
}



/* Entry: 1002f0fb0; end: 1002f100f;  */

undefined8 FUN_1002f0fb0(void)

{
  return 0x1b;
}



/* Entry: 1002f1010; end: 1002f105b; -[SCCircumstanceEngineConfigProvider intValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

long FUN_1002f1010(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x000107c3cda0();
  func_0x000107c61180();
  if (param_1 != 0) {
    param_4 = param_1;
    func_0x000107c49804(param_1);
  }
  func_0x000107c61170(param_1);
  return param_4;
}



/* Entry: 1002f105c; end: 1002f11db;  */

undefined8 FUN_1002f105c(void)

{
  return 0x1b;
}



/* Entry: 1002f11dc; end: 1002f124f; -[SCBlizzardExperimentProvider jsonFramesUploadInterval] */

undefined8 FUN_1002f11dc(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1002f1250;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136c4be8 != -1) {
    uStack_18 = param_1;
    FUN_10002a2fc(0x1136c4be8,&puStack_38);
  }
  return uRam000000011316ee78;
}



/* Entry: 1002f1250; end: 1002f129b;  */

void FUN_1002f1250(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0xa0;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c4980c();
  lRam000000011316ee78 = (long)(int)lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1002f129c; end: 1002f130f; -[SCBlizzardExperimentProvider jsonFramesEventUploadForMediumPriority] */

undefined8 FUN_1002f129c(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1002f131c;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136c4bd8 != -1) {
    uStack_18 = param_1;
    FUN_10002a2fc(0x1136c4bd8,&puStack_38);
  }
  return uRam000000011316ee68;
}



/* Entry: 1002f1310; end: 1002f131b;  */

undefined ** FUN_1002f1310(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 1002f131c; end: 1002f13e3;  */

void FUN_1002f131c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0xa0;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c4980c();
  lRam000000011316ee68 = (long)(int)lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1002f13e4; end: 1002f1403;  */

void FUN_1002f13e4(void)

{
  func_0x000107c61168(&PTR_PTR_11307c988);
  return;
}



/* Entry: 1002f1404; end: 1002f145f;  */

void FUN_1002f1404(long *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  
  FUN_1002f13e4();
  func_0x000107c613fc();
  lVar2 = param_2;
  func_0x000107c6106c();
  lRam00000001138136e8 = lVar2;
  FUN_1000aa068();
  if (-1 < lVar2) {
    lRam00000001138136f0 = lVar2;
    *param_1 = param_2;
    param_1[1] = (long)&PTR_DAT_110775450;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1002f1460);
  (*pcVar1)();
}



/* Entry: 1002f1460; end: 1002f14d3; -[SCBlizzardExperimentProvider jsonFramesEventUploadForLowPriority] */

undefined8 FUN_1002f1460(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1002f14d4;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136c4be0 != -1) {
    uStack_18 = param_1;
    FUN_10002a2fc(0x1136c4be0,&puStack_38);
  }
  return uRam000000011316ee70;
}



/* Entry: 1002f14d4; end: 1002f151f;  */

void FUN_1002f14d4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0xa0;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c4980c();
  lRam000000011316ee70 = (long)(int)lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1002f1520; end: 1002f1543;  */

undefined ** FUN_1002f1520(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 1002f1544; end: 1002f1613;  */

void FUN_1002f1544(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110449e98;
  func_0x000107c613fc(&UNK_110449e98,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1002f1614,puVar1);
  return;
}



/* Entry: 1002f1614; end: 1002f16e7;  */

void FUN_1002f1614(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_1002f16e8();
  func_0x000107c613fc();
  uVar1 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010effc510);
  uVar2 = uStack_48;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar1);
  if ((int)uVar2 == 0) {
    func_0x000107c615e8(uStack_48);
  }
  else {
    FUN_100083b20(&uStack_50);
    func_0x000107c615e8(uStack_48);
    func_0x000107c61170(uStack_50);
  }
  *param_1 = param_2;
  param_1[1] = &PTR_DAT_110449ec0;
  return;
}



/* Entry: 1002f16e8; end: 1002f1707;  */

void FUN_1002f16e8(void)

{
  func_0x000107c61168(&PTR_PTR_112e03e98);
  return;
}



/* Entry: 1002f1708; end: 1002f170f; -[SCBlizzardEventLoggerConstructorV2 fileSystem] */

undefined8 FUN_1002f1708(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1002f1710; end: 1002f185b; -[SCBlizzardFileRepository initWithFileSystem:config:grapheneRegistry:queueNameFilePathMap:fileCompressor:] */

undefined1 *
FUN_1002f1710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_48 = PTR_PTR_1126f4b70;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
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
    puVar3 = PTR_PTR_1126aeea8;
    func_0x000107c610fc();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    func_0x000107c61170(uVar2);
    *(undefined4 *)((long)puVar1 + 8) = 1;
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1002f185c; end: 1002f1887;  */

void FUN_1002f185c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002f1888; end: 1002f18ab;  */

undefined ** FUN_1002f1888(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 1002f18ac; end: 1002f19a3;  */

void FUN_1002f18ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110444fe8;
  func_0x000107c613fc(&UNK_110444fe8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(0x1002f192c,puVar1);
  return;
}



/* Entry: 1002f19a4; end: 1002f19c3;  */

void FUN_1002f19a4(void)

{
  func_0x000107c61168(&PTR_PTR_112e01340);
  return;
}



/* Entry: 1002f19c4; end: 1002f1b07;  */

void FUN_1002f19c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010effc510);
  uVar2 = param_1;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar1);
  if ((int)uVar2 == 0) {
    func_0x000107c615e8(param_1);
  }
  else {
    func_0x0001000ab060(0);
    FUN_100079360(0);
    uVar1 = 0;
    func_0x0001048d4310(0);
    func_0x0001048d4194();
    uVar2 = uVar1;
    func_0x0001048ba9ac();
    func_0x000107c61170(uVar1);
    uVar3 = 0;
    func_0x0001000aad1c(0);
    FUN_1000aad3c();
    func_0x000107c6157c(param_2);
    uVar1 = uVar2;
    FUN_100947c8c(uVar2,uVar3,0,0,&UNK_101b24e84,param_2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(uVar1);
    func_0x000107c615e8(param_1);
    func_0x000107c61574(param_2);
  }
  func_0x000107c61574(param_2);
  return;
}



/* Entry: 1002f1b08; end: 1002f1b33;  */

void FUN_1002f1b08(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002f1b34; end: 1002f1b57;  */

undefined ** FUN_1002f1b34(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 1002f1b58; end: 1002f1bd7;  */

void FUN_1002f1b58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104451d0;
  func_0x000107c613fc(&UNK_1104451d0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1002f1bd8,puVar1);
  return;
}



/* Entry: 1002f1bd8; end: 1002f1bdf;  */

void FUN_1002f1bd8(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_38,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  func_0x0001002fb878();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_40;
  func_0x000107c3e85c(uStack_40);
  func_0x000107c61170(uStack_38);
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_1104451f8;
  return;
}



/* Entry: 1002f1be0; end: 1002f1c63;  */

void FUN_1002f1be0(long *param_1,long param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  func_0x0001002fb878();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uStack_40;
  func_0x000107c3e85c(uStack_40);
  func_0x000107c61170(uStack_38);
  *param_1 = param_2;
  param_1[1] = (long)&PTR_DAT_1104451f8;
  return;
}



/* Entry: 1002f1c64; end: 1002f1c73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002f1c64(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar5 = lVar2;
  FUN_100083b20(&uStack_58,lVar2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,uVar3,*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  func_0x0001002fb814();
  lVar6 = lVar5;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_112e013a0) = 0;
  puVar1 = (undefined8 *)(lVar6 + _DAT_112e013a8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(long *)(lVar6 + _DAT_112e013b0) = lVar2;
  *(undefined8 *)(lVar6 + _DAT_112e013b8) = uStack_58;
  *(undefined8 *)(lVar6 + _DAT_112e013c0) = uStack_60;
  *(undefined8 *)(lVar6 + _DAT_112e013c8) = uVar3;
  *(undefined8 *)(lVar6 + _DAT_112e013d0) = uStack_68;
  puVar4 = PTR_s_init_1125d9248;
  lStack_78 = lVar6;
  lStack_70 = lVar5;
  func_0x000107c6157c(lVar2);
  func_0x000107c6157c(uVar3);
  plVar7 = &lStack_78;
  func_0x000107c61154(plVar7,puVar4);
  *param_1 = (long)plVar7;
  return;
}



/* Entry: 1002f1c74; end: 1002f1d7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002f1c74(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar3 = param_2;
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  func_0x0001002fb814();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112e013a0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112e013a8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(long *)(lVar4 + _DAT_112e013b0) = param_2;
  *(undefined8 *)(lVar4 + _DAT_112e013b8) = uStack_58;
  *(undefined8 *)(lVar4 + _DAT_112e013c0) = uStack_60;
  *(undefined8 *)(lVar4 + _DAT_112e013c8) = param_5;
  *(undefined8 *)(lVar4 + _DAT_112e013d0) = uStack_68;
  puVar2 = PTR_s_init_1125d9248;
  lStack_78 = lVar4;
  lStack_70 = lVar3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_5);
  plVar5 = &lStack_78;
  func_0x000107c61154(plVar5,puVar2);
  *param_1 = (long)plVar5;
  return;
}



/* Entry: 1002f1d80; end: 1002f4f73;  */

void FUN_1002f1d80(void)

{
  undefined8 extraout_x8;
  long unaff_x20;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  FUN_1002f5138(extraout_x8,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                *(undefined8 *)(unaff_x20 + 0x1f0),*(undefined8 *)(unaff_x20 + 0x1f8),
                *(undefined8 *)(unaff_x20 + 0x200),*(undefined8 *)(unaff_x20 + 0x208),
                *(undefined8 *)(unaff_x20 + 0x210),*(undefined8 *)(unaff_x20 + 0x218),
                *(undefined8 *)(unaff_x20 + 0x220),*(undefined8 *)(unaff_x20 + 0x228),
                *(undefined8 *)(unaff_x20 + 0x230),*(undefined8 *)(unaff_x20 + 0x238));
  return;
}



/* Entry: 1002f4f74; end: 1002f4f7b; -[SCBlizzardExperimentProvider shouldUploadSpectrumToStagingCollector] */

undefined8 FUN_1002f4f74(void)

{
  return 0;
}



/* Entry: 1002f4f7c; end: 1002f508f; -[SCBlizzardRequestUrlProvider initWithShouldSpectrumLogToStaging:] */

undefined8 * FUN_1002f4f7c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_50 = PTR_PTR_1126f4c20;
  puVar1 = &uStack_58;
  uStack_58 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  uVar5 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    ppuStack_48 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c82d8;
    ppuStack_40 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c82f0;
    ppuStack_38 = &PTR____CFConstantStringClassReference_110e6dfd8;
    ppuStack_30 = &PTR____CFConstantStringClassReference_110e6dff8;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x000107c419ac();
    func_0x000107c61180();
    uVar5 = puVar1[3];
    puVar1[3] = puVar2;
    func_0x000107c61170(uVar5);
    puVar3 = puVar1;
    func_0x000107c3b804();
    func_0x000107c61180();
    uVar5 = puVar1[1];
    puVar1[1] = puVar3;
    func_0x000107c61170(uVar5);
    puVar3 = puVar1;
    func_0x000107c3b8b4();
    func_0x000107c61180();
    uVar5 = puVar1[2];
    puVar1[2] = puVar3;
    func_0x000107c61170(uVar5);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar1;
  }
  func_0x000107c60e78();
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x000107c3fdb4();
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  uVar4 = uVar5;
  func_0x000107c4d9e8(uVar5);
  func_0x000107c61180();
  func_0x000107c3ac40(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return puVar1;
}



/* Entry: 1002f5090; end: 1002f512f; -[SCBlizzardRequestUrlProvider _getCollectorUrl] */

void FUN_1002f5090(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x000107c3fdb4();
  func_0x000107c61180();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0);
  func_0x000107c61180();
  uVar2 = param_1;
  func_0x000107c4d9e8(param_1,param_2,puVar1);
  func_0x000107c61180();
  func_0x000107c3ac40(puVar3,param_2,uVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1002f5130; end: 1002f5137; -[SCBlizzardRequestUrlProvider collectorURLs] */

undefined8 FUN_1002f5130(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1002f5138; end: 1002f9e03;  */

void FUN_1002f5138(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                  undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
                  undefined8 param_69,undefined8 param_70)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 *extraout_x8;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  undefined8 in_stack_00000290;
  undefined8 in_stack_00000298;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_000002b8;
  undefined8 in_stack_000002c0;
  undefined8 in_stack_000002c8;
  undefined8 in_stack_000002d0;
  undefined8 in_stack_000002d8;
  undefined8 in_stack_000002e0;
  undefined8 in_stack_000002e8;
  undefined8 in_stack_000002f0;
  undefined8 in_stack_000002f8;
  undefined8 in_stack_00000300;
  undefined8 in_stack_00000308;
  undefined8 in_stack_00000310;
  undefined8 in_stack_00000318;
  undefined8 in_stack_00000320;
  undefined8 in_stack_00000328;
  undefined8 in_stack_00000330;
  undefined8 in_stack_00000338;
  undefined8 in_stack_00000340;
  undefined8 in_stack_00000348;
  undefined8 in_stack_00000350;
  undefined8 in_stack_00000358;
  undefined8 in_stack_00000360;
  undefined8 in_stack_00000368;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
  undefined8 in_stack_00000380;
  undefined8 in_stack_00000388;
  undefined8 in_stack_00000390;
  undefined8 in_stack_00000398;
  undefined8 in_stack_000003a0;
  undefined8 in_stack_000003a8;
  undefined8 in_stack_000003b0;
  undefined8 in_stack_000003b8;
  undefined8 in_stack_000003c0;
  undefined8 in_stack_000003c8;
  undefined8 in_stack_000003d0;
  undefined8 in_stack_000003d8;
  undefined8 in_stack_000003e0;
  undefined8 in_stack_000003e8;
  undefined8 in_stack_000003f0;
  undefined8 in_stack_000003f8;
  undefined8 in_stack_00000400;
  undefined8 in_stack_00000408;
  undefined8 in_stack_00000410;
  undefined8 in_stack_00000418;
  undefined8 in_stack_00000420;
  undefined8 in_stack_00000428;
  undefined8 in_stack_00000430;
  undefined8 in_stack_00000438;
  undefined8 in_stack_00000440;
  undefined8 in_stack_00000448;
  undefined8 in_stack_00000450;
  undefined8 in_stack_00000458;
  undefined8 in_stack_00000460;
  undefined8 in_stack_00000468;
  undefined8 in_stack_00000470;
  undefined8 in_stack_00000478;
  undefined8 in_stack_00000480;
  undefined8 in_stack_00000488;
  undefined8 in_stack_00000490;
  undefined8 in_stack_00000498;
  undefined8 in_stack_000004a0;
  undefined8 in_stack_000004a8;
  undefined8 in_stack_000004b0;
  undefined8 in_stack_000004b8;
  undefined8 in_stack_000004c0;
  undefined8 in_stack_000004c8;
  undefined8 in_stack_000004d0;
  undefined8 in_stack_000004d8;
  undefined8 in_stack_000004e0;
  undefined8 in_stack_000004e8;
  undefined8 in_stack_000004f0;
  undefined8 in_stack_000004f8;
  undefined8 in_stack_00000500;
  undefined8 in_stack_00000508;
  undefined8 in_stack_00000510;
  undefined8 in_stack_00000518;
  undefined8 in_stack_00000520;
  undefined8 in_stack_00000528;
  undefined8 in_stack_00000530;
  undefined8 in_stack_00000538;
  undefined8 in_stack_00000540;
  undefined8 in_stack_00000548;
  undefined8 in_stack_00000550;
  undefined8 in_stack_00000558;
  undefined8 in_stack_00000560;
  undefined8 in_stack_00000568;
  undefined8 in_stack_00000570;
  undefined8 in_stack_00000578;
  undefined8 in_stack_00000580;
  undefined8 in_stack_00000588;
  undefined8 in_stack_00000590;
  undefined8 in_stack_00000598;
  undefined8 in_stack_000005a0;
  undefined8 in_stack_000005a8;
  undefined8 in_stack_000005b0;
  undefined8 in_stack_000005b8;
  undefined8 in_stack_000005c0;
  undefined8 in_stack_000005c8;
  undefined8 in_stack_000005d0;
  undefined8 in_stack_000005d8;
  undefined8 in_stack_000005e0;
  undefined8 in_stack_000005e8;
  undefined8 in_stack_000005f0;
  undefined8 in_stack_000005f8;
  undefined8 in_stack_00000600;
  undefined8 in_stack_00000608;
  undefined8 in_stack_00000610;
  undefined8 in_stack_00000618;
  undefined8 in_stack_00000620;
  undefined8 in_stack_00000628;
  undefined8 in_stack_00000630;
  undefined8 in_stack_00000638;
  undefined8 in_stack_00000640;
  undefined8 in_stack_00000648;
  undefined8 in_stack_00000650;
  undefined8 in_stack_00000658;
  undefined8 in_stack_00000660;
  undefined8 in_stack_00000668;
  undefined8 in_stack_00000670;
  undefined8 in_stack_00000678;
  undefined8 in_stack_00000680;
  undefined8 in_stack_00000688;
  undefined8 in_stack_00000690;
  undefined8 in_stack_00000698;
  undefined8 in_stack_000006a0;
  undefined8 in_stack_000006a8;
  undefined8 in_stack_000006b0;
  undefined8 in_stack_000006b8;
  undefined8 in_stack_000006c0;
  undefined8 in_stack_000006c8;
  undefined8 in_stack_000006d0;
  undefined8 in_stack_000006d8;
  undefined8 in_stack_000006e0;
  undefined8 in_stack_000006e8;
  undefined8 in_stack_000006f0;
  undefined8 in_stack_000006f8;
  undefined8 in_stack_00000700;
  undefined8 in_stack_00000708;
  undefined8 in_stack_00000710;
  undefined8 in_stack_00000718;
  undefined8 in_stack_00000720;
  undefined8 in_stack_00000728;
  undefined8 in_stack_00000730;
  undefined8 in_stack_00000738;
  undefined8 in_stack_00000740;
  undefined8 in_stack_00000748;
  undefined8 in_stack_00000750;
  undefined8 in_stack_00000758;
  undefined8 in_stack_00000760;
  undefined8 in_stack_00000768;
  undefined8 in_stack_00000770;
  undefined8 in_stack_00000778;
  undefined8 in_stack_00000780;
  undefined8 in_stack_00000788;
  undefined8 in_stack_00000790;
  undefined8 in_stack_00000798;
  undefined8 in_stack_000007a0;
  undefined8 in_stack_000007a8;
  undefined8 in_stack_000007b0;
  undefined8 in_stack_000007b8;
  undefined8 in_stack_000007c0;
  undefined8 in_stack_000007c8;
  undefined8 in_stack_000007d0;
  undefined8 in_stack_000007d8;
  undefined8 in_stack_000007e0;
  undefined8 in_stack_000007e8;
  undefined8 in_stack_000007f0;
  undefined8 in_stack_000007f8;
  undefined8 in_stack_00000800;
  undefined8 in_stack_00000808;
  undefined8 in_stack_00000810;
  undefined8 in_stack_00000818;
  undefined8 in_stack_00000820;
  undefined8 in_stack_00000828;
  undefined8 in_stack_00000830;
  undefined8 in_stack_00000838;
  undefined8 in_stack_00000840;
  undefined8 in_stack_00000848;
  undefined8 in_stack_00000850;
  undefined8 in_stack_00000858;
  undefined8 in_stack_00000860;
  undefined8 in_stack_00000868;
  undefined8 in_stack_00000870;
  undefined8 in_stack_00000878;
  undefined8 in_stack_00000880;
  undefined8 in_stack_00000888;
  undefined8 in_stack_00000890;
  undefined8 in_stack_00000898;
  undefined8 in_stack_000008a0;
  undefined8 in_stack_000008a8;
  undefined8 in_stack_000008b0;
  undefined8 in_stack_000008b8;
  undefined8 in_stack_000008c0;
  undefined8 in_stack_000008c8;
  undefined8 in_stack_000008d0;
  undefined8 in_stack_000008d8;
  undefined8 in_stack_000008e0;
  undefined8 in_stack_000008e8;
  undefined8 in_stack_000008f0;
  undefined8 in_stack_000008f8;
  undefined8 in_stack_00000900;
  undefined8 in_stack_00000908;
  undefined8 in_stack_00000910;
  undefined8 in_stack_00000918;
  undefined8 in_stack_00000920;
  undefined8 in_stack_00000928;
  undefined8 in_stack_00000930;
  undefined8 in_stack_00000938;
  undefined8 in_stack_00000940;
  undefined8 in_stack_00000948;
  undefined8 in_stack_00000950;
  undefined8 in_stack_00000958;
  undefined8 in_stack_00000960;
  undefined8 in_stack_00000968;
  undefined8 in_stack_00000970;
  undefined8 in_stack_00000978;
  undefined8 in_stack_00000980;
  undefined8 in_stack_00000988;
  undefined8 in_stack_00000990;
  undefined8 in_stack_00000998;
  undefined8 in_stack_000009a0;
  undefined8 in_stack_000009a8;
  undefined8 in_stack_000009b0;
  undefined8 in_stack_000009b8;
  undefined8 in_stack_000009c0;
  undefined8 in_stack_000009c8;
  undefined8 in_stack_000009d0;
  undefined8 in_stack_000009d8;
  undefined8 in_stack_000009e0;
  undefined8 in_stack_000009e8;
  undefined8 in_stack_000009f0;
  undefined8 in_stack_000009f8;
  undefined8 in_stack_00000a00;
  undefined8 in_stack_00000a08;
  undefined8 in_stack_00000a10;
  undefined8 in_stack_00000a18;
  undefined8 in_stack_00000a20;
  undefined8 in_stack_00000a28;
  undefined8 in_stack_00000a30;
  undefined8 in_stack_00000a38;
  undefined8 in_stack_00000a40;
  undefined8 in_stack_00000a48;
  undefined8 in_stack_00000a50;
  undefined8 in_stack_00000a58;
  undefined8 in_stack_00000a60;
  undefined8 in_stack_00000a68;
  undefined8 in_stack_00000a70;
  undefined8 in_stack_00000a78;
  undefined8 in_stack_00000a80;
  undefined8 in_stack_00000a88;
  undefined8 in_stack_00000a90;
  undefined8 in_stack_00000a98;
  undefined8 in_stack_00000aa0;
  undefined8 in_stack_00000aa8;
  undefined8 in_stack_00000ab0;
  undefined8 in_stack_00000ab8;
  undefined8 in_stack_00000ac0;
  undefined8 in_stack_00000ac8;
  undefined8 in_stack_00000ad0;
  undefined8 in_stack_00000ad8;
  undefined8 in_stack_00000ae0;
  undefined8 in_stack_00000ae8;
  undefined8 in_stack_00000af0;
  undefined8 in_stack_00000af8;
  undefined8 in_stack_00000b00;
  undefined8 in_stack_00000b08;
  undefined8 in_stack_00000b10;
  undefined8 in_stack_00000b18;
  undefined8 in_stack_00000b20;
  undefined8 in_stack_00000b28;
  undefined8 in_stack_00000b30;
  undefined8 in_stack_00000b38;
  undefined8 in_stack_00000b40;
  undefined8 in_stack_00000b48;
  undefined8 in_stack_00000b50;
  undefined8 in_stack_00000b58;
  undefined8 in_stack_00000b60;
  undefined8 in_stack_00000b68;
  undefined8 in_stack_00000b70;
  undefined8 in_stack_00000b78;
  undefined8 in_stack_00000b80;
  undefined8 in_stack_00000b88;
  undefined8 in_stack_00000b90;
  undefined8 in_stack_00000b98;
  undefined8 in_stack_00000ba0;
  undefined8 in_stack_00000ba8;
  undefined8 in_stack_00000bb0;
  undefined8 in_stack_00000bb8;
  undefined8 in_stack_00000bc0;
  undefined8 in_stack_00000bc8;
  undefined8 in_stack_00000bd0;
  undefined8 in_stack_00000bd8;
  undefined8 in_stack_00000be0;
  undefined8 in_stack_00000be8;
  undefined8 in_stack_00000bf0;
  undefined8 in_stack_00000bf8;
  undefined8 in_stack_00000c00;
  undefined8 in_stack_00000c08;
  undefined8 in_stack_00000c10;
  undefined8 in_stack_00000c18;
  undefined8 in_stack_00000c20;
  undefined8 in_stack_00000c28;
  undefined8 in_stack_00000c30;
  undefined8 in_stack_00000c38;
  undefined8 in_stack_00000c40;
  undefined8 in_stack_00000c48;
  undefined8 in_stack_00000c50;
  undefined8 in_stack_00000c58;
  undefined8 in_stack_00000c60;
  undefined8 in_stack_00000c68;
  undefined8 in_stack_00000c70;
  undefined8 in_stack_00000c78;
  undefined8 in_stack_00000c80;
  undefined8 in_stack_00000c88;
  undefined8 in_stack_00000c90;
  undefined8 in_stack_00000c98;
  undefined8 in_stack_00000ca0;
  undefined8 in_stack_00000ca8;
  undefined8 in_stack_00000cb0;
  undefined8 in_stack_00000cb8;
  undefined8 in_stack_00000cc0;
  undefined8 in_stack_00000cc8;
  undefined8 in_stack_00000cd0;
  undefined8 in_stack_00000cd8;
  undefined8 in_stack_00000ce0;
  undefined8 in_stack_00000ce8;
  undefined8 in_stack_00000cf0;
  undefined8 in_stack_00000cf8;
  undefined8 in_stack_00000d00;
  undefined8 in_stack_00000d08;
  undefined8 in_stack_00000d10;
  undefined8 in_stack_00000d18;
  undefined8 in_stack_00000d20;
  undefined8 in_stack_00000d28;
  undefined8 in_stack_00000d30;
  undefined8 in_stack_00000d38;
  undefined8 in_stack_00000d40;
  undefined8 in_stack_00000d48;
  undefined8 in_stack_00000d50;
  undefined8 in_stack_00000d58;
  undefined8 in_stack_00000d60;
  undefined8 in_stack_00000d68;
  undefined8 in_stack_00000d70;
  undefined8 in_stack_00000d78;
  undefined8 in_stack_00000d80;
  undefined8 in_stack_00000d88;
  undefined8 in_stack_00000d90;
  undefined8 in_stack_00000d98;
  undefined8 in_stack_00000da0;
  undefined8 in_stack_00000da8;
  undefined8 in_stack_00000db0;
  undefined8 in_stack_00000db8;
  undefined8 in_stack_00000dc0;
  undefined8 in_stack_00000dc8;
  undefined8 in_stack_00000dd0;
  undefined8 in_stack_00000dd8;
  undefined8 in_stack_00000de0;
  undefined8 in_stack_00000de8;
  undefined8 in_stack_00000df0;
  undefined8 in_stack_00000df8;
  undefined8 in_stack_00000e00;
  undefined8 in_stack_00000e08;
  undefined8 in_stack_00000e10;
  undefined8 in_stack_00000e18;
  undefined8 in_stack_00000e20;
  undefined8 in_stack_00000e28;
  undefined8 in_stack_00000e30;
  undefined8 in_stack_00000e38;
  undefined8 in_stack_00000e40;
  undefined8 in_stack_00000e48;
  undefined8 in_stack_00000e50;
  undefined8 in_stack_00000e58;
  undefined8 in_stack_00000e60;
  undefined8 in_stack_00000e68;
  undefined8 in_stack_00000e70;
  undefined8 in_stack_00000e78;
  undefined8 in_stack_00000e80;
  undefined8 in_stack_00000e88;
  undefined8 in_stack_00000e90;
  undefined8 in_stack_00000e98;
  undefined8 in_stack_00000ea0;
  undefined8 in_stack_00000ea8;
  undefined8 in_stack_00000eb0;
  undefined8 in_stack_00000eb8;
  undefined8 in_stack_00000ec0;
  undefined8 in_stack_00000ec8;
  undefined8 in_stack_00000ed0;
  undefined8 in_stack_00000ed8;
  undefined8 in_stack_00000ee0;
  undefined8 in_stack_00000ee8;
  undefined8 in_stack_00000ef0;
  undefined8 in_stack_00000ef8;
  undefined8 in_stack_00000f00;
  undefined8 in_stack_00000f08;
  undefined8 in_stack_00000f10;
  undefined8 in_stack_00000f18;
  undefined8 in_stack_00000f20;
  undefined8 in_stack_00000f28;
  undefined8 in_stack_00000f30;
  undefined8 in_stack_00000f38;
  undefined8 in_stack_00000f40;
  undefined8 in_stack_00000f48;
  undefined8 in_stack_00000f50;
  undefined8 in_stack_00000f58;
  undefined8 in_stack_00000f60;
  undefined8 in_stack_00000f68;
  undefined8 in_stack_00000f70;
  undefined8 in_stack_00000f78;
  undefined8 in_stack_00000f80;
  undefined8 in_stack_00000f88;
  undefined8 in_stack_00000f90;
  undefined8 in_stack_00000f98;
  undefined8 in_stack_00000fa0;
  undefined8 in_stack_00000fa8;
  undefined8 in_stack_00000fb0;
  undefined8 in_stack_00000fb8;
  undefined8 in_stack_00000fc0;
  undefined8 in_stack_00000fc8;
  undefined8 in_stack_00000fd0;
  undefined8 in_stack_00000fd8;
  undefined8 in_stack_00000fe0;
  undefined8 in_stack_00000fe8;
  undefined8 in_stack_00000ff0;
  undefined8 in_stack_00000ff8;
  undefined8 in_stack_00001000;
  undefined8 in_stack_00001008;
  undefined8 in_stack_00001010;
  undefined8 in_stack_00001018;
  undefined8 in_stack_00001020;
  undefined8 in_stack_00001028;
  undefined8 in_stack_00001030;
  undefined8 in_stack_00001038;
  undefined8 in_stack_00001040;
  undefined8 in_stack_00001048;
  undefined8 in_stack_00001050;
  undefined8 in_stack_00001058;
  undefined8 in_stack_00001060;
  undefined8 in_stack_00001068;
  undefined8 in_stack_00001070;
  undefined8 in_stack_00001078;
  undefined8 in_stack_00001080;
  undefined8 in_stack_00001088;
  undefined8 in_stack_00001090;
  undefined8 in_stack_00001098;
  undefined8 in_stack_000010a0;
  undefined8 in_stack_000010a8;
  undefined8 in_stack_000010b0;
  undefined8 in_stack_000010b8;
  undefined8 in_stack_000010c0;
  undefined8 in_stack_000010c8;
  undefined8 in_stack_000010d0;
  undefined8 in_stack_000010d8;
  undefined8 in_stack_000010e0;
  undefined8 in_stack_000010e8;
  undefined8 in_stack_000010f0;
  undefined8 in_stack_000010f8;
  undefined8 in_stack_00001100;
  undefined8 in_stack_00001108;
  undefined8 in_stack_00001110;
  undefined8 in_stack_00001118;
  undefined8 in_stack_00001120;
  undefined8 in_stack_00001128;
  undefined8 in_stack_00001130;
  undefined8 in_stack_00001138;
  undefined8 in_stack_00001140;
  undefined8 in_stack_00001148;
  undefined8 in_stack_00001150;
  undefined8 in_stack_00001158;
  undefined8 in_stack_00001160;
  undefined8 in_stack_00001168;
  undefined8 in_stack_00001170;
  undefined8 in_stack_00001178;
  undefined8 in_stack_00001180;
  undefined8 in_stack_00001188;
  undefined8 in_stack_00001190;
  undefined8 in_stack_00001198;
  undefined8 in_stack_000011a0;
  undefined8 in_stack_000011a8;
  undefined8 in_stack_000011b0;
  undefined8 in_stack_000011b8;
  undefined8 in_stack_000011c0;
  undefined8 in_stack_000011c8;
  undefined8 in_stack_000011d0;
  undefined8 in_stack_000011d8;
  undefined8 in_stack_000011e0;
  undefined8 in_stack_000011e8;
  undefined8 in_stack_000011f0;
  undefined8 in_stack_000011f8;
  undefined8 in_stack_00001200;
  undefined8 in_stack_00001208;
  undefined8 in_stack_00001210;
  undefined8 in_stack_00001218;
  undefined8 in_stack_00001220;
  undefined8 in_stack_00001228;
  undefined8 in_stack_00001230;
  undefined8 in_stack_00001238;
  undefined8 in_stack_00001240;
  undefined8 in_stack_00001248;
  undefined8 in_stack_00001250;
  undefined8 in_stack_00001258;
  undefined8 in_stack_00001260;
  undefined8 in_stack_00001268;
  undefined8 in_stack_00001270;
  undefined8 in_stack_00001278;
  undefined8 in_stack_00001280;
  undefined8 in_stack_00001288;
  undefined8 in_stack_00001290;
  undefined8 in_stack_00001298;
  undefined8 in_stack_000012a0;
  undefined8 in_stack_000012a8;
  undefined8 in_stack_000012b0;
  undefined8 in_stack_000012b8;
  undefined8 in_stack_000012c0;
  undefined8 in_stack_000012c8;
  undefined8 in_stack_000012d0;
  undefined8 in_stack_000012d8;
  undefined8 in_stack_000012e0;
  undefined8 in_stack_000012e8;
  undefined8 in_stack_000012f0;
  undefined8 in_stack_000012f8;
  undefined8 in_stack_00001300;
  undefined8 in_stack_00001308;
  undefined8 in_stack_00001310;
  undefined8 in_stack_00001318;
  undefined8 in_stack_00001320;
  undefined8 in_stack_00001328;
  undefined8 in_stack_00001330;
  undefined8 in_stack_00001338;
  undefined8 in_stack_00001340;
  undefined8 in_stack_00001348;
  undefined8 in_stack_00001350;
  undefined8 in_stack_00001358;
  undefined8 in_stack_00001360;
  undefined8 in_stack_00001368;
  undefined8 in_stack_00001370;
  undefined8 in_stack_00001378;
  undefined8 in_stack_00001380;
  undefined8 in_stack_00001388;
  undefined8 in_stack_00001390;
  undefined8 in_stack_00001398;
  undefined8 in_stack_000013a0;
  undefined8 in_stack_000013a8;
  undefined8 in_stack_000013b0;
  undefined8 in_stack_000013b8;
  undefined8 in_stack_000013c0;
  undefined8 in_stack_000013c8;
  undefined8 in_stack_000013d0;
  undefined8 in_stack_000013d8;
  undefined8 in_stack_000013e0;
  undefined8 in_stack_000013e8;
  undefined8 in_stack_000013f0;
  undefined8 in_stack_000013f8;
  undefined8 in_stack_00001400;
  undefined8 in_stack_00001408;
  undefined8 in_stack_00001410;
  undefined8 in_stack_00001418;
  undefined8 in_stack_00001420;
  undefined8 in_stack_00001428;
  undefined8 in_stack_00001430;
  undefined8 in_stack_00001438;
  undefined8 in_stack_00001440;
  undefined8 in_stack_00001448;
  undefined8 in_stack_00001450;
  undefined8 in_stack_00001458;
  undefined8 in_stack_00001460;
  undefined8 in_stack_00001468;
  undefined8 in_stack_00001470;
  undefined8 in_stack_00001478;
  undefined8 in_stack_00001480;
  undefined8 in_stack_00001488;
  undefined8 in_stack_00001490;
  undefined8 in_stack_00001498;
  undefined8 in_stack_000014a0;
  undefined8 in_stack_000014a8;
  undefined8 in_stack_000014b0;
  undefined8 in_stack_000014b8;
  undefined8 in_stack_000014c0;
  undefined8 in_stack_000014c8;
  undefined8 in_stack_000014d0;
  undefined8 in_stack_000014d8;
  undefined8 in_stack_000014e0;
  undefined8 in_stack_000014e8;
  undefined8 in_stack_000014f0;
  undefined8 in_stack_000014f8;
  undefined8 in_stack_00001500;
  undefined8 in_stack_00001508;
  undefined8 in_stack_00001510;
  undefined8 in_stack_00001518;
  undefined8 in_stack_00001520;
  undefined8 in_stack_00001528;
  undefined8 in_stack_00001530;
  undefined8 in_stack_00001538;
  undefined8 in_stack_00001540;
  undefined8 in_stack_00001548;
  undefined8 in_stack_00001550;
  undefined8 in_stack_00001558;
  undefined8 in_stack_00001560;
  undefined8 in_stack_00001568;
  undefined8 in_stack_00001570;
  undefined8 in_stack_00001578;
  undefined8 in_stack_00001580;
  undefined8 in_stack_00001588;
  undefined8 in_stack_00001590;
  undefined8 in_stack_00001598;
  undefined8 in_stack_000015a0;
  undefined8 in_stack_000015a8;
  undefined8 in_stack_000015b0;
  undefined8 in_stack_000015b8;
  undefined8 in_stack_000015c0;
  undefined8 in_stack_000015c8;
  undefined8 in_stack_000015d0;
  undefined8 in_stack_000015d8;
  undefined8 in_stack_000015e0;
  undefined8 in_stack_000015e8;
  undefined8 in_stack_000015f0;
  undefined8 in_stack_000015f8;
  undefined8 in_stack_00001600;
  undefined8 in_stack_00001608;
  undefined8 in_stack_00001610;
  undefined8 in_stack_00001618;
  undefined8 in_stack_00001620;
  undefined8 in_stack_00001628;
  undefined8 in_stack_00001630;
  undefined8 in_stack_00001638;
  undefined8 in_stack_00001640;
  undefined8 in_stack_00001648;
  undefined8 in_stack_00001650;
  undefined8 in_stack_00001658;
  undefined8 in_stack_00001660;
  undefined8 in_stack_00001668;
  undefined8 in_stack_00001670;
  undefined8 in_stack_00001678;
  undefined8 in_stack_00001680;
  undefined8 in_stack_00001688;
  undefined8 in_stack_00001690;
  undefined8 in_stack_00001698;
  undefined8 in_stack_000016a0;
  undefined8 in_stack_000016a8;
  undefined8 in_stack_000016b0;
  undefined8 in_stack_000016b8;
  undefined8 in_stack_000016c0;
  undefined8 in_stack_000016c8;
  undefined8 in_stack_000016d0;
  undefined8 in_stack_000016d8;
  undefined8 in_stack_000016e0;
  undefined8 in_stack_000016e8;
  undefined8 in_stack_000016f0;
  undefined8 in_stack_000016f8;
  undefined8 in_stack_00001700;
  undefined8 in_stack_00001708;
  undefined8 in_stack_00001710;
  undefined8 in_stack_00001718;
  undefined8 in_stack_00001720;
  undefined8 in_stack_00001728;
  undefined8 in_stack_00001730;
  undefined8 in_stack_00001738;
  undefined8 in_stack_00001740;
  undefined8 in_stack_00001748;
  undefined8 in_stack_00001750;
  undefined8 in_stack_00001758;
  undefined8 in_stack_00001760;
  undefined8 in_stack_00001768;
  undefined8 in_stack_00001770;
  undefined8 in_stack_00001778;
  undefined8 in_stack_00001780;
  undefined8 in_stack_00001788;
  undefined8 in_stack_00001790;
  undefined8 in_stack_00001798;
  undefined8 in_stack_000017a0;
  undefined8 in_stack_000017a8;
  undefined8 in_stack_000017b0;
  undefined8 in_stack_000017b8;
  undefined8 in_stack_000017c0;
  undefined8 in_stack_000017c8;
  undefined8 in_stack_000017d0;
  undefined8 in_stack_000017d8;
  undefined8 in_stack_000017e0;
  undefined8 in_stack_000017e8;
  undefined8 in_stack_000017f0;
  undefined8 in_stack_000017f8;
  undefined8 in_stack_00001800;
  undefined8 in_stack_00001808;
  undefined8 in_stack_00001810;
  undefined8 in_stack_00001818;
  undefined8 in_stack_00001820;
  undefined8 in_stack_00001828;
  undefined8 in_stack_00001830;
  undefined8 in_stack_00001838;
  undefined8 in_stack_00001840;
  undefined8 in_stack_00001848;
  undefined8 in_stack_00001850;
  undefined8 in_stack_00001858;
  undefined8 in_stack_00001860;
  undefined8 in_stack_00001868;
  undefined8 in_stack_00001870;
  undefined8 in_stack_00001878;
  undefined8 in_stack_00001880;
  undefined8 in_stack_00001888;
  undefined8 in_stack_00001890;
  undefined8 in_stack_00001898;
  undefined8 in_stack_000018a0;
  undefined8 in_stack_000018a8;
  undefined8 in_stack_000018b0;
  undefined8 in_stack_000018b8;
  undefined8 in_stack_000018c0;
  undefined8 in_stack_000018c8;
  undefined8 in_stack_000018d0;
  undefined8 in_stack_000018d8;
  undefined8 in_stack_000018e0;
  undefined8 in_stack_000018e8;
  undefined8 in_stack_000018f0;
  undefined8 in_stack_000018f8;
  undefined8 in_stack_00001900;
  undefined8 in_stack_00001908;
  undefined8 in_stack_00001910;
  undefined8 in_stack_00001918;
  undefined8 in_stack_00001920;
  undefined8 in_stack_00001928;
  undefined8 in_stack_00001930;
  undefined8 in_stack_00001938;
  undefined8 in_stack_00001940;
  undefined8 in_stack_00001948;
  undefined8 in_stack_00001950;
  undefined8 in_stack_00001958;
  undefined8 in_stack_00001960;
  undefined8 in_stack_00001968;
  undefined8 in_stack_00001970;
  undefined8 in_stack_00001978;
  undefined8 in_stack_00001980;
  undefined8 in_stack_00001988;
  undefined8 in_stack_00001990;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar1 = &UNK_1104af0a8;
  func_0x000107c613fc(&UNK_1104af0a8,0x19e8,7);
  *(undefined8 *)(puVar1 + 0x11e8) = in_stack_00001198;
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  *(undefined8 *)(puVar1 + 0xa0) = param_19;
  *(undefined8 *)(puVar1 + 0xa8) = param_20;
  *(undefined8 *)(puVar1 + 0xb0) = param_21;
  *(undefined8 *)(puVar1 + 0xb8) = param_22;
  *(undefined8 *)(puVar1 + 0xc0) = param_23;
  *(undefined8 *)(puVar1 + 200) = param_24;
  *(undefined8 *)(puVar1 + 0xd0) = param_25;
  *(undefined8 *)(puVar1 + 0xd8) = param_26;
  *(undefined8 *)(puVar1 + 0xe0) = param_27;
  *(undefined8 *)(puVar1 + 0xe8) = param_28;
  *(undefined8 *)(puVar1 + 0xf0) = param_29;
  *(undefined8 *)(puVar1 + 0xf8) = param_30;
  *(undefined8 *)(puVar1 + 0x100) = param_31;
  *(undefined8 *)(puVar1 + 0x108) = param_32;
  *(undefined8 *)(puVar1 + 0x110) = param_33;
  *(undefined8 *)(puVar1 + 0x118) = param_34;
  *(undefined8 *)(puVar1 + 0x120) = param_35;
  *(undefined8 *)(puVar1 + 0x128) = param_36;
  *(undefined8 *)(puVar1 + 0x130) = param_37;
  *(undefined8 *)(puVar1 + 0x138) = param_38;
  *(undefined8 *)(puVar1 + 0x140) = param_39;
  *(undefined8 *)(puVar1 + 0x148) = param_40;
  *(undefined8 *)(puVar1 + 0x150) = param_41;
  *(undefined8 *)(puVar1 + 0x158) = param_42;
  *(undefined8 *)(puVar1 + 0x160) = param_43;
  *(undefined8 *)(puVar1 + 0x168) = param_44;
  *(undefined8 *)(puVar1 + 0x170) = param_45;
  *(undefined8 *)(puVar1 + 0x178) = param_46;
  *(undefined8 *)(puVar1 + 0x180) = param_47;
  *(undefined8 *)(puVar1 + 0x188) = param_48;
  *(undefined8 *)(puVar1 + 400) = param_49;
  *(undefined8 *)(puVar1 + 0x198) = param_50;
  *(undefined8 *)(puVar1 + 0x1a0) = param_51;
  *(undefined8 *)(puVar1 + 0x1a8) = param_52;
  *(undefined8 *)(puVar1 + 0x1b0) = param_53;
  *(undefined8 *)(puVar1 + 0x1b8) = param_54;
  *(undefined8 *)(puVar1 + 0x1c0) = param_55;
  *(undefined8 *)(puVar1 + 0x1c8) = param_56;
  *(undefined8 *)(puVar1 + 0x1d0) = param_57;
  *(undefined8 *)(puVar1 + 0x1d8) = param_58;
  *(undefined8 *)(puVar1 + 0x1e0) = param_59;
  *(undefined8 *)(puVar1 + 0x1e8) = param_60;
  *(undefined8 *)(puVar1 + 0x1f0) = param_61;
  *(undefined8 *)(puVar1 + 0x1f8) = param_62;
  *(undefined8 *)(puVar1 + 0x200) = param_63;
  *(undefined8 *)(puVar1 + 0x208) = param_64;
  *(undefined8 *)(puVar1 + 0x210) = param_65;
  *(undefined8 *)(puVar1 + 0x218) = param_66;
  *(undefined8 *)(puVar1 + 0x220) = param_67;
  *(undefined8 *)(puVar1 + 0x228) = param_68;
  *(undefined8 *)(puVar1 + 0x230) = param_69;
  *(undefined8 *)(puVar1 + 0x238) = param_70;
  *(undefined8 *)(puVar1 + 0x240) = in_stack_000001f0;
  *(undefined8 *)(puVar1 + 0x248) = in_stack_000001f8;
  *(undefined8 *)(puVar1 + 0x250) = in_stack_00000200;
  *(undefined8 *)(puVar1 + 600) = in_stack_00000208;
  *(undefined8 *)(puVar1 + 0x260) = in_stack_00000210;
  *(undefined8 *)(puVar1 + 0x268) = in_stack_00000218;
  *(undefined8 *)(puVar1 + 0x270) = in_stack_00000220;
  *(undefined8 *)(puVar1 + 0x278) = in_stack_00000228;
  *(undefined8 *)(puVar1 + 0x280) = in_stack_00000230;
  *(undefined8 *)(puVar1 + 0x288) = in_stack_00000238;
  *(undefined8 *)(puVar1 + 0x290) = in_stack_00000240;
  *(undefined8 *)(puVar1 + 0x298) = in_stack_00000248;
  *(undefined8 *)(puVar1 + 0x2a0) = in_stack_00000250;
  *(undefined8 *)(puVar1 + 0x2a8) = in_stack_00000258;
  *(undefined8 *)(puVar1 + 0x2b0) = in_stack_00000260;
  *(undefined8 *)(puVar1 + 0x2b8) = in_stack_00000268;
  *(undefined8 *)(puVar1 + 0x2c0) = in_stack_00000270;
  *(undefined8 *)(puVar1 + 0x2c8) = in_stack_00000278;
  *(undefined8 *)(puVar1 + 0x2d0) = in_stack_00000280;
  *(undefined8 *)(puVar1 + 0x2d8) = in_stack_00000288;
  *(undefined8 *)(puVar1 + 0x2e0) = in_stack_00000290;
  *(undefined8 *)(puVar1 + 0x2e8) = in_stack_00000298;
  *(undefined8 *)(puVar1 + 0x2f0) = in_stack_000002a0;
  *(undefined8 *)(puVar1 + 0x2f8) = in_stack_000002a8;
  *(undefined8 *)(puVar1 + 0x300) = in_stack_000002b0;
  *(undefined8 *)(puVar1 + 0x308) = in_stack_000002b8;
  *(undefined8 *)(puVar1 + 0x310) = in_stack_000002c0;
  *(undefined8 *)(puVar1 + 0x318) = in_stack_000002c8;
  *(undefined8 *)(puVar1 + 800) = in_stack_000002d0;
  *(undefined8 *)(puVar1 + 0x328) = in_stack_000002d8;
  *(undefined8 *)(puVar1 + 0x330) = in_stack_000002e0;
  *(undefined8 *)(puVar1 + 0x338) = in_stack_000002e8;
  *(undefined8 *)(puVar1 + 0x340) = in_stack_000002f0;
  *(undefined8 *)(puVar1 + 0x348) = in_stack_000002f8;
  *(undefined8 *)(puVar1 + 0x350) = in_stack_00000300;
  *(undefined8 *)(puVar1 + 0x358) = in_stack_00000308;
  *(undefined8 *)(puVar1 + 0x360) = in_stack_00000310;
  *(undefined8 *)(puVar1 + 0x368) = in_stack_00000318;
  *(undefined8 *)(puVar1 + 0x370) = in_stack_00000320;
  *(undefined8 *)(puVar1 + 0x378) = in_stack_00000328;
  *(undefined8 *)(puVar1 + 0x380) = in_stack_00000330;
  *(undefined8 *)(puVar1 + 0x388) = in_stack_00000338;
  *(undefined8 *)(puVar1 + 0x390) = in_stack_00000340;
  *(undefined8 *)(puVar1 + 0x398) = in_stack_00000348;
  *(undefined8 *)(puVar1 + 0x3a0) = in_stack_00000350;
  *(undefined8 *)(puVar1 + 0x3a8) = in_stack_00000358;
  *(undefined8 *)(puVar1 + 0x3b0) = in_stack_00000360;
  *(undefined8 *)(puVar1 + 0x3b8) = in_stack_00000368;
  *(undefined8 *)(puVar1 + 0x3c0) = in_stack_00000370;
  *(undefined8 *)(puVar1 + 0x3c8) = in_stack_00000378;
  *(undefined8 *)(puVar1 + 0x3d0) = in_stack_00000380;
  *(undefined8 *)(puVar1 + 0x3d8) = in_stack_00000388;
  *(undefined8 *)(puVar1 + 0x3e0) = in_stack_00000390;
  *(undefined8 *)(puVar1 + 1000) = in_stack_00000398;
  *(undefined8 *)(puVar1 + 0x3f0) = in_stack_000003a0;
  *(undefined8 *)(puVar1 + 0x3f8) = in_stack_000003a8;
  *(undefined8 *)(puVar1 + 0x400) = in_stack_000003b0;
  *(undefined8 *)(puVar1 + 0x408) = in_stack_000003b8;
  *(undefined8 *)(puVar1 + 0x410) = in_stack_000003c0;
  *(undefined8 *)(puVar1 + 0x418) = in_stack_000003c8;
  *(undefined8 *)(puVar1 + 0x420) = in_stack_000003d0;
  *(undefined8 *)(puVar1 + 0x428) = in_stack_000003d8;
  *(undefined8 *)(puVar1 + 0x430) = in_stack_000003e0;
  *(undefined8 *)(puVar1 + 0x438) = in_stack_000003e8;
  *(undefined8 *)(puVar1 + 0x440) = in_stack_000003f0;
  *(undefined8 *)(puVar1 + 0x448) = in_stack_000003f8;
  *(undefined8 *)(puVar1 + 0x450) = in_stack_00000400;
  *(undefined8 *)(puVar1 + 0x458) = in_stack_00000408;
  *(undefined8 *)(puVar1 + 0x460) = in_stack_00000410;
  *(undefined8 *)(puVar1 + 0x468) = in_stack_00000418;
  *(undefined8 *)(puVar1 + 0x470) = in_stack_00000420;
  *(undefined8 *)(puVar1 + 0x478) = in_stack_00000428;
  *(undefined8 *)(puVar1 + 0x480) = in_stack_00000430;
  *(undefined8 *)(puVar1 + 0x488) = in_stack_00000438;
  *(undefined8 *)(puVar1 + 0x490) = in_stack_00000440;
  *(undefined8 *)(puVar1 + 0x498) = in_stack_00000448;
  *(undefined8 *)(puVar1 + 0x4a0) = in_stack_00000450;
  *(undefined8 *)(puVar1 + 0x4a8) = in_stack_00000458;
  *(undefined8 *)(puVar1 + 0x4b0) = in_stack_00000460;
  *(undefined8 *)(puVar1 + 0x4b8) = in_stack_00000468;
  *(undefined8 *)(puVar1 + 0x4c0) = in_stack_00000470;
  *(undefined8 *)(puVar1 + 0x4c8) = in_stack_00000478;
  *(undefined8 *)(puVar1 + 0x4d0) = in_stack_00000480;
  *(undefined8 *)(puVar1 + 0x4d8) = in_stack_00000488;
  *(undefined8 *)(puVar1 + 0x4e0) = in_stack_00000490;
  *(undefined8 *)(puVar1 + 0x4e8) = in_stack_00000498;
  *(undefined8 *)(puVar1 + 0x4f0) = in_stack_000004a0;
  *(undefined8 *)(puVar1 + 0x4f8) = in_stack_000004a8;
  *(undefined8 *)(puVar1 + 0x500) = in_stack_000004b0;
  *(undefined8 *)(puVar1 + 0x508) = in_stack_000004b8;
  *(undefined8 *)(puVar1 + 0x510) = in_stack_000004c0;
  *(undefined8 *)(puVar1 + 0x518) = in_stack_000004c8;
  *(undefined8 *)(puVar1 + 0x520) = in_stack_000004d0;
  *(undefined8 *)(puVar1 + 0x528) = in_stack_000004d8;
  *(undefined8 *)(puVar1 + 0x530) = in_stack_000004e0;
  *(undefined8 *)(puVar1 + 0x538) = in_stack_000004e8;
  *(undefined8 *)(puVar1 + 0x540) = in_stack_000004f0;
  *(undefined8 *)(puVar1 + 0x548) = in_stack_000004f8;
  *(undefined8 *)(puVar1 + 0x550) = in_stack_00000500;
  *(undefined8 *)(puVar1 + 0x558) = in_stack_00000508;
  *(undefined8 *)(puVar1 + 0x560) = in_stack_00000510;
  *(undefined8 *)(puVar1 + 0x568) = in_stack_00000518;
  *(undefined8 *)(puVar1 + 0x570) = in_stack_00000520;
  *(undefined8 *)(puVar1 + 0x578) = in_stack_00000528;
  *(undefined8 *)(puVar1 + 0x580) = in_stack_00000530;
  *(undefined8 *)(puVar1 + 0x588) = in_stack_00000538;
  *(undefined8 *)(puVar1 + 0x590) = in_stack_00000540;
  *(undefined8 *)(puVar1 + 0x598) = in_stack_00000548;
  *(undefined8 *)(puVar1 + 0x5a0) = in_stack_00000550;
  *(undefined8 *)(puVar1 + 0x5a8) = in_stack_00000558;
  *(undefined8 *)(puVar1 + 0x5b0) = in_stack_00000560;
  *(undefined8 *)(puVar1 + 0x5b8) = in_stack_00000568;
  *(undefined8 *)(puVar1 + 0x5c0) = in_stack_00000570;
  *(undefined8 *)(puVar1 + 0x5c8) = in_stack_00000578;
  *(undefined8 *)(puVar1 + 0x5d0) = in_stack_00000580;
  *(undefined8 *)(puVar1 + 0x5d8) = in_stack_00000588;
  *(undefined8 *)(puVar1 + 0x5e0) = in_stack_00000590;
  *(undefined8 *)(puVar1 + 0x5e8) = in_stack_00000598;
  *(undefined8 *)(puVar1 + 0x5f0) = in_stack_000005a0;
  *(undefined8 *)(puVar1 + 0x5f8) = in_stack_000005a8;
  *(undefined8 *)(puVar1 + 0x600) = in_stack_000005b0;
  *(undefined8 *)(puVar1 + 0x608) = in_stack_000005b8;
  *(undefined8 *)(puVar1 + 0x610) = in_stack_000005c0;
  *(undefined8 *)(puVar1 + 0x618) = in_stack_000005c8;
  *(undefined8 *)(puVar1 + 0x620) = in_stack_000005d0;
  *(undefined8 *)(puVar1 + 0x628) = in_stack_000005d8;
  *(undefined8 *)(puVar1 + 0x630) = in_stack_000005e0;
  *(undefined8 *)(puVar1 + 0x638) = in_stack_000005e8;
  *(undefined8 *)(puVar1 + 0x640) = in_stack_000005f0;
  *(undefined8 *)(puVar1 + 0x648) = in_stack_000005f8;
  *(undefined8 *)(puVar1 + 0x650) = in_stack_00000600;
  *(undefined8 *)(puVar1 + 0x658) = in_stack_00000608;
  *(undefined8 *)(puVar1 + 0x660) = in_stack_00000610;
  *(undefined8 *)(puVar1 + 0x668) = in_stack_00000618;
  *(undefined8 *)(puVar1 + 0x670) = in_stack_00000620;
  *(undefined8 *)(puVar1 + 0x678) = in_stack_00000628;
  *(undefined8 *)(puVar1 + 0x680) = in_stack_00000630;
  *(undefined8 *)(puVar1 + 0x688) = in_stack_00000638;
  *(undefined8 *)(puVar1 + 0x690) = in_stack_00000640;
  *(undefined8 *)(puVar1 + 0x698) = in_stack_00000648;
  *(undefined8 *)(puVar1 + 0x6a0) = in_stack_00000650;
  *(undefined8 *)(puVar1 + 0x6a8) = in_stack_00000658;
  *(undefined8 *)(puVar1 + 0x6b0) = in_stack_00000660;
  *(undefined8 *)(puVar1 + 0x6b8) = in_stack_00000668;
  *(undefined8 *)(puVar1 + 0x6c0) = in_stack_00000670;
  *(undefined8 *)(puVar1 + 0x6c8) = in_stack_00000678;
  *(undefined8 *)(puVar1 + 0x6d0) = in_stack_00000680;
  *(undefined8 *)(puVar1 + 0x6d8) = in_stack_00000688;
  *(undefined8 *)(puVar1 + 0x6e0) = in_stack_00000690;
  *(undefined8 *)(puVar1 + 0x6e8) = in_stack_00000698;
  *(undefined8 *)(puVar1 + 0x6f0) = in_stack_000006a0;
  *(undefined8 *)(puVar1 + 0x6f8) = in_stack_000006a8;
  *(undefined8 *)(puVar1 + 0x700) = in_stack_000006b0;
  *(undefined8 *)(puVar1 + 0x708) = in_stack_000006b8;
  *(undefined8 *)(puVar1 + 0x710) = in_stack_000006c0;
  *(undefined8 *)(puVar1 + 0x718) = in_stack_000006c8;
  *(undefined8 *)(puVar1 + 0x720) = in_stack_000006d0;
  *(undefined8 *)(puVar1 + 0x728) = in_stack_000006d8;
  *(undefined8 *)(puVar1 + 0x730) = in_stack_000006e0;
  *(undefined8 *)(puVar1 + 0x738) = in_stack_000006e8;
  *(undefined8 *)(puVar1 + 0x740) = in_stack_000006f0;
  *(undefined8 *)(puVar1 + 0x748) = in_stack_000006f8;
  *(undefined8 *)(puVar1 + 0x750) = in_stack_00000700;
  *(undefined8 *)(puVar1 + 0x758) = in_stack_00000708;
  *(undefined8 *)(puVar1 + 0x760) = in_stack_00000710;
  *(undefined8 *)(puVar1 + 0x768) = in_stack_00000718;
  *(undefined8 *)(puVar1 + 0x770) = in_stack_00000720;
  *(undefined8 *)(puVar1 + 0x778) = in_stack_00000728;
  *(undefined8 *)(puVar1 + 0x780) = in_stack_00000730;
  *(undefined8 *)(puVar1 + 0x788) = in_stack_00000738;
  *(undefined8 *)(puVar1 + 0x790) = in_stack_00000740;
  *(undefined8 *)(puVar1 + 0x798) = in_stack_00000748;
  *(undefined8 *)(puVar1 + 0x7a0) = in_stack_00000750;
  *(undefined8 *)(puVar1 + 0x7a8) = in_stack_00000758;
  *(undefined8 *)(puVar1 + 0x7b0) = in_stack_00000760;
  *(undefined8 *)(puVar1 + 0x7b8) = in_stack_00000768;
  *(undefined8 *)(puVar1 + 0x7c0) = in_stack_00000770;
  *(undefined8 *)(puVar1 + 0x7c8) = in_stack_00000778;
  *(undefined8 *)(puVar1 + 2000) = in_stack_00000780;
  *(undefined8 *)(puVar1 + 0x7e8) = in_stack_00000798;
  *(undefined8 *)(puVar1 + 0x11b0) = in_stack_00001160;
  *(undefined8 *)(puVar1 + 0x11b8) = in_stack_00001168;
  *(undefined8 *)(puVar1 + 0x11c0) = in_stack_00001170;
  *(undefined8 *)(puVar1 + 0x11c8) = in_stack_00001178;
  *(undefined8 *)(puVar1 + 0x11d0) = in_stack_00001180;
  *(undefined8 *)(puVar1 + 0x11d8) = in_stack_00001188;
  *(undefined8 *)(puVar1 + 0x1180) = in_stack_00001130;
  *(undefined8 *)(puVar1 + 0x1188) = in_stack_00001138;
  *(undefined8 *)(puVar1 + 0x1190) = in_stack_00001140;
  *(undefined8 *)(puVar1 + 0x1198) = in_stack_00001148;
  *(undefined8 *)(puVar1 + 0x11a0) = in_stack_00001150;
  *(undefined8 *)(puVar1 + 0x11a8) = in_stack_00001158;
  *(undefined8 *)(puVar1 + 0x1150) = in_stack_00001100;
  *(undefined8 *)(puVar1 + 0x1158) = in_stack_00001108;
  *(undefined8 *)(puVar1 + 0x1160) = in_stack_00001110;
  *(undefined8 *)(puVar1 + 0x1168) = in_stack_00001118;
  *(undefined8 *)(puVar1 + 0x1170) = in_stack_00001120;
  *(undefined8 *)(puVar1 + 0x1178) = in_stack_00001128;
  *(undefined8 *)(puVar1 + 0x1120) = in_stack_000010d0;
  *(undefined8 *)(puVar1 + 0x1128) = in_stack_000010d8;
  *(undefined8 *)(puVar1 + 0x1130) = in_stack_000010e0;
  *(undefined8 *)(puVar1 + 0x1138) = in_stack_000010e8;
  *(undefined8 *)(puVar1 + 0x1140) = in_stack_000010f0;
  *(undefined8 *)(puVar1 + 0x1148) = in_stack_000010f8;
  *(undefined8 *)(puVar1 + 0x10f0) = in_stack_000010a0;
  *(undefined8 *)(puVar1 + 0x10f8) = in_stack_000010a8;
  *(undefined8 *)(puVar1 + 0x1100) = in_stack_000010b0;
  *(undefined8 *)(puVar1 + 0x1108) = in_stack_000010b8;
  *(undefined8 *)(puVar1 + 0x1110) = in_stack_000010c0;
  *(undefined8 *)(puVar1 + 0x1118) = in_stack_000010c8;
  *(undefined8 *)(puVar1 + 0x10c0) = in_stack_00001070;
  *(undefined8 *)(puVar1 + 0x10c8) = in_stack_00001078;
  *(undefined8 *)(puVar1 + 0x10d0) = in_stack_00001080;
  *(undefined8 *)(puVar1 + 0x10d8) = in_stack_00001088;
  *(undefined8 *)(puVar1 + 0x10e0) = in_stack_00001090;
  *(undefined8 *)(puVar1 + 0x10e8) = in_stack_00001098;
  *(undefined8 *)(puVar1 + 0x1090) = in_stack_00001040;
  *(undefined8 *)(puVar1 + 0x1098) = in_stack_00001048;
  *(undefined8 *)(puVar1 + 0x10a0) = in_stack_00001050;
  *(undefined8 *)(puVar1 + 0x10a8) = in_stack_00001058;
  *(undefined8 *)(puVar1 + 0x10b0) = in_stack_00001060;
  *(undefined8 *)(puVar1 + 0x10b8) = in_stack_00001068;
  *(undefined8 *)(puVar1 + 0x1060) = in_stack_00001010;
  *(undefined8 *)(puVar1 + 0x1068) = in_stack_00001018;
  *(undefined8 *)(puVar1 + 0x1070) = in_stack_00001020;
  *(undefined8 *)(puVar1 + 0x1078) = in_stack_00001028;
  *(undefined8 *)(puVar1 + 0x1080) = in_stack_00001030;
  *(undefined8 *)(puVar1 + 0x1088) = in_stack_00001038;
  *(undefined8 *)(puVar1 + 0x1030) = in_stack_00000fe0;
  *(undefined8 *)(puVar1 + 0x1038) = in_stack_00000fe8;
  *(undefined8 *)(puVar1 + 0x1040) = in_stack_00000ff0;
  *(undefined8 *)(puVar1 + 0x1048) = in_stack_00000ff8;
  *(undefined8 *)(puVar1 + 0x1050) = in_stack_00001000;
  *(undefined8 *)(puVar1 + 0x1058) = in_stack_00001008;
  *(undefined8 *)(puVar1 + 0x1000) = in_stack_00000fb0;
  *(undefined8 *)(puVar1 + 0x1008) = in_stack_00000fb8;
  *(undefined8 *)(puVar1 + 0x1010) = in_stack_00000fc0;
  *(undefined8 *)(puVar1 + 0x1018) = in_stack_00000fc8;
  *(undefined8 *)(puVar1 + 0x1020) = in_stack_00000fd0;
  *(undefined8 *)(puVar1 + 0x1028) = in_stack_00000fd8;
  *(undefined8 *)(puVar1 + 0xfd0) = in_stack_00000f80;
  *(undefined8 *)(puVar1 + 0xfd8) = in_stack_00000f88;
  *(undefined8 *)(puVar1 + 0xfe0) = in_stack_00000f90;
  *(undefined8 *)(puVar1 + 0xfe8) = in_stack_00000f98;
  *(undefined8 *)(puVar1 + 0xff0) = in_stack_00000fa0;
  *(undefined8 *)(puVar1 + 0xff8) = in_stack_00000fa8;
  *(undefined8 *)(puVar1 + 4000) = in_stack_00000f50;
  *(undefined8 *)(puVar1 + 0xfa8) = in_stack_00000f58;
  *(undefined8 *)(puVar1 + 0xfb0) = in_stack_00000f60;
  *(undefined8 *)(puVar1 + 0xfb8) = in_stack_00000f68;
  *(undefined8 *)(puVar1 + 0xfc0) = in_stack_00000f70;
  *(undefined8 *)(puVar1 + 0xfc8) = in_stack_00000f78;
  *(undefined8 *)(puVar1 + 0xf70) = in_stack_00000f20;
  *(undefined8 *)(puVar1 + 0xf78) = in_stack_00000f28;
  *(undefined8 *)(puVar1 + 0xf80) = in_stack_00000f30;
  *(undefined8 *)(puVar1 + 0xf88) = in_stack_00000f38;
  *(undefined8 *)(puVar1 + 0xf90) = in_stack_00000f40;
  *(undefined8 *)(puVar1 + 0xf98) = in_stack_00000f48;
  *(undefined8 *)(puVar1 + 0xf40) = in_stack_00000ef0;
  *(undefined8 *)(puVar1 + 0xf48) = in_stack_00000ef8;
  *(undefined8 *)(puVar1 + 0xf50) = in_stack_00000f00;
  *(undefined8 *)(puVar1 + 0xf58) = in_stack_00000f08;
  *(undefined8 *)(puVar1 + 0xf60) = in_stack_00000f10;
  *(undefined8 *)(puVar1 + 0xf68) = in_stack_00000f18;
  *(undefined8 *)(puVar1 + 0xf10) = in_stack_00000ec0;
  *(undefined8 *)(puVar1 + 0xf18) = in_stack_00000ec8;
  *(undefined8 *)(puVar1 + 0xf20) = in_stack_00000ed0;
  *(undefined8 *)(puVar1 + 0xf28) = in_stack_00000ed8;
  *(undefined8 *)(puVar1 + 0xf30) = in_stack_00000ee0;
  *(undefined8 *)(puVar1 + 0xf38) = in_stack_00000ee8;
  *(undefined8 *)(puVar1 + 0xee0) = in_stack_00000e90;
  *(undefined8 *)(puVar1 + 0xee8) = in_stack_00000e98;
  *(undefined8 *)(puVar1 + 0xef0) = in_stack_00000ea0;
  *(undefined8 *)(puVar1 + 0xef8) = in_stack_00000ea8;
  *(undefined8 *)(puVar1 + 0xf00) = in_stack_00000eb0;
  *(undefined8 *)(puVar1 + 0xf08) = in_stack_00000eb8;
  *(undefined8 *)(puVar1 + 0xeb0) = in_stack_00000e60;
  *(undefined8 *)(puVar1 + 0xeb8) = in_stack_00000e68;
  *(undefined8 *)(puVar1 + 0xec0) = in_stack_00000e70;
  *(undefined8 *)(puVar1 + 0xec8) = in_stack_00000e78;
  *(undefined8 *)(puVar1 + 0xed0) = in_stack_00000e80;
  *(undefined8 *)(puVar1 + 0xed8) = in_stack_00000e88;
  *(undefined8 *)(puVar1 + 0xe80) = in_stack_00000e30;
  *(undefined8 *)(puVar1 + 0xe88) = in_stack_00000e38;
  *(undefined8 *)(puVar1 + 0xe90) = in_stack_00000e40;
  *(undefined8 *)(puVar1 + 0xe98) = in_stack_00000e48;
  *(undefined8 *)(puVar1 + 0xea0) = in_stack_00000e50;
  *(undefined8 *)(puVar1 + 0xea8) = in_stack_00000e58;
  *(undefined8 *)(puVar1 + 0xe50) = in_stack_00000e00;
  *(undefined8 *)(puVar1 + 0xe58) = in_stack_00000e08;
  *(undefined8 *)(puVar1 + 0xe60) = in_stack_00000e10;
  *(undefined8 *)(puVar1 + 0xe68) = in_stack_00000e18;
  *(undefined8 *)(puVar1 + 0xe70) = in_stack_00000e20;
  *(undefined8 *)(puVar1 + 0xe78) = in_stack_00000e28;
  *(undefined8 *)(puVar1 + 0xe20) = in_stack_00000dd0;
  *(undefined8 *)(puVar1 + 0xe28) = in_stack_00000dd8;
  *(undefined8 *)(puVar1 + 0xe30) = in_stack_00000de0;
  *(undefined8 *)(puVar1 + 0xe38) = in_stack_00000de8;
  *(undefined8 *)(puVar1 + 0xe40) = in_stack_00000df0;
  *(undefined8 *)(puVar1 + 0xe48) = in_stack_00000df8;
  *(undefined8 *)(puVar1 + 0xdf0) = in_stack_00000da0;
  *(undefined8 *)(puVar1 + 0xdf8) = in_stack_00000da8;
  *(undefined8 *)(puVar1 + 0xe00) = in_stack_00000db0;
  *(undefined8 *)(puVar1 + 0xe08) = in_stack_00000db8;
  *(undefined8 *)(puVar1 + 0xe10) = in_stack_00000dc0;
  *(undefined8 *)(puVar1 + 0xe18) = in_stack_00000dc8;
  *(undefined8 *)(puVar1 + 0xdc0) = in_stack_00000d70;
  *(undefined8 *)(puVar1 + 0xdc8) = in_stack_00000d78;
  *(undefined8 *)(puVar1 + 0xdd0) = in_stack_00000d80;
  *(undefined8 *)(puVar1 + 0xdd8) = in_stack_00000d88;
  *(undefined8 *)(puVar1 + 0xde0) = in_stack_00000d90;
  *(undefined8 *)(puVar1 + 0xde8) = in_stack_00000d98;
  *(undefined8 *)(puVar1 + 0xd90) = in_stack_00000d40;
  *(undefined8 *)(puVar1 + 0xd98) = in_stack_00000d48;
  *(undefined8 *)(puVar1 + 0xda0) = in_stack_00000d50;
  *(undefined8 *)(puVar1 + 0xda8) = in_stack_00000d58;
  *(undefined8 *)(puVar1 + 0xdb0) = in_stack_00000d60;
  *(undefined8 *)(puVar1 + 0xdb8) = in_stack_00000d68;
  *(undefined8 *)(puVar1 + 0xd60) = in_stack_00000d10;
  *(undefined8 *)(puVar1 + 0xd68) = in_stack_00000d18;
  *(undefined8 *)(puVar1 + 0xd70) = in_stack_00000d20;
  *(undefined8 *)(puVar1 + 0xd78) = in_stack_00000d28;
  *(undefined8 *)(puVar1 + 0xd80) = in_stack_00000d30;
  *(undefined8 *)(puVar1 + 0xd88) = in_stack_00000d38;
  *(undefined8 *)(puVar1 + 0xd30) = in_stack_00000ce0;
  *(undefined8 *)(puVar1 + 0xd38) = in_stack_00000ce8;
  *(undefined8 *)(puVar1 + 0xd40) = in_stack_00000cf0;
  *(undefined8 *)(puVar1 + 0xd48) = in_stack_00000cf8;
  *(undefined8 *)(puVar1 + 0xd50) = in_stack_00000d00;
  *(undefined8 *)(puVar1 + 0xd58) = in_stack_00000d08;
  *(undefined8 *)(puVar1 + 0xd00) = in_stack_00000cb0;
  *(undefined8 *)(puVar1 + 0xd08) = in_stack_00000cb8;
  *(undefined8 *)(puVar1 + 0xd10) = in_stack_00000cc0;
  *(undefined8 *)(puVar1 + 0xd18) = in_stack_00000cc8;
  *(undefined8 *)(puVar1 + 0xd20) = in_stack_00000cd0;
  *(undefined8 *)(puVar1 + 0xd28) = in_stack_00000cd8;
  *(undefined8 *)(puVar1 + 0xcd0) = in_stack_00000c80;
  *(undefined8 *)(puVar1 + 0xcd8) = in_stack_00000c88;
  *(undefined8 *)(puVar1 + 0xce0) = in_stack_00000c90;
  *(undefined8 *)(puVar1 + 0xce8) = in_stack_00000c98;
  *(undefined8 *)(puVar1 + 0xcf0) = in_stack_00000ca0;
  *(undefined8 *)(puVar1 + 0xcf8) = in_stack_00000ca8;
  *(undefined8 *)(puVar1 + 0xca0) = in_stack_00000c50;
  *(undefined8 *)(puVar1 + 0xca8) = in_stack_00000c58;
  *(undefined8 *)(puVar1 + 0xcb0) = in_stack_00000c60;
  *(undefined8 *)(puVar1 + 0xcb8) = in_stack_00000c68;
  *(undefined8 *)(puVar1 + 0xcc0) = in_stack_00000c70;
  *(undefined8 *)(puVar1 + 0xcc8) = in_stack_00000c78;
  *(undefined8 *)(puVar1 + 0xc70) = in_stack_00000c20;
  *(undefined8 *)(puVar1 + 0xc78) = in_stack_00000c28;
  *(undefined8 *)(puVar1 + 0xc80) = in_stack_00000c30;
  *(undefined8 *)(puVar1 + 0xc88) = in_stack_00000c38;
  *(undefined8 *)(puVar1 + 0xc90) = in_stack_00000c40;
  *(undefined8 *)(puVar1 + 0xc98) = in_stack_00000c48;
  *(undefined8 *)(puVar1 + 0xc40) = in_stack_00000bf0;
  *(undefined8 *)(puVar1 + 0xc48) = in_stack_00000bf8;
  *(undefined8 *)(puVar1 + 0xc50) = in_stack_00000c00;
  *(undefined8 *)(puVar1 + 0xc58) = in_stack_00000c08;
  *(undefined8 *)(puVar1 + 0xc60) = in_stack_00000c10;
  *(undefined8 *)(puVar1 + 0xc68) = in_stack_00000c18;
  *(undefined8 *)(puVar1 + 0xc10) = in_stack_00000bc0;
  *(undefined8 *)(puVar1 + 0xc18) = in_stack_00000bc8;
  *(undefined8 *)(puVar1 + 0xc20) = in_stack_00000bd0;
  *(undefined8 *)(puVar1 + 0xc28) = in_stack_00000bd8;
  *(undefined8 *)(puVar1 + 0xc30) = in_stack_00000be0;
  *(undefined8 *)(puVar1 + 0xc38) = in_stack_00000be8;
  *(undefined8 *)(puVar1 + 0xbe0) = in_stack_00000b90;
  *(undefined8 *)(puVar1 + 0xbe8) = in_stack_00000b98;
  *(undefined8 *)(puVar1 + 0xbf0) = in_stack_00000ba0;
  *(undefined8 *)(puVar1 + 0xbf8) = in_stack_00000ba8;
  *(undefined8 *)(puVar1 + 0xc00) = in_stack_00000bb0;
  *(undefined8 *)(puVar1 + 0xc08) = in_stack_00000bb8;
  *(undefined8 *)(puVar1 + 0xbb0) = in_stack_00000b60;
  *(undefined8 *)(puVar1 + 3000) = in_stack_00000b68;
  *(undefined8 *)(puVar1 + 0xbc0) = in_stack_00000b70;
  *(undefined8 *)(puVar1 + 0xbc8) = in_stack_00000b78;
  *(undefined8 *)(puVar1 + 0xbd0) = in_stack_00000b80;
  *(undefined8 *)(puVar1 + 0xbd8) = in_stack_00000b88;
  *(undefined8 *)(puVar1 + 0xb80) = in_stack_00000b30;
  *(undefined8 *)(puVar1 + 0xb88) = in_stack_00000b38;
  *(undefined8 *)(puVar1 + 0xb90) = in_stack_00000b40;
  *(undefined8 *)(puVar1 + 0xb98) = in_stack_00000b48;
  *(undefined8 *)(puVar1 + 0xba0) = in_stack_00000b50;
  *(undefined8 *)(puVar1 + 0xba8) = in_stack_00000b58;
  *(undefined8 *)(puVar1 + 0xb50) = in_stack_00000b00;
  *(undefined8 *)(puVar1 + 0xb58) = in_stack_00000b08;
  *(undefined8 *)(puVar1 + 0xb60) = in_stack_00000b10;
  *(undefined8 *)(puVar1 + 0xb68) = in_stack_00000b18;
  *(undefined8 *)(puVar1 + 0xb70) = in_stack_00000b20;
  *(undefined8 *)(puVar1 + 0xb78) = in_stack_00000b28;
  *(undefined8 *)(puVar1 + 0xb20) = in_stack_00000ad0;
  *(undefined8 *)(puVar1 + 0xb28) = in_stack_00000ad8;
  *(undefined8 *)(puVar1 + 0xb30) = in_stack_00000ae0;
  *(undefined8 *)(puVar1 + 0xb38) = in_stack_00000ae8;
  *(undefined8 *)(puVar1 + 0xb40) = in_stack_00000af0;
  *(undefined8 *)(puVar1 + 0xb48) = in_stack_00000af8;
  *(undefined8 *)(puVar1 + 0xaf0) = in_stack_00000aa0;
  *(undefined8 *)(puVar1 + 0xaf8) = in_stack_00000aa8;
  *(undefined8 *)(puVar1 + 0xb00) = in_stack_00000ab0;
  *(undefined8 *)(puVar1 + 0xb08) = in_stack_00000ab8;
  *(undefined8 *)(puVar1 + 0xb10) = in_stack_00000ac0;
  *(undefined8 *)(puVar1 + 0xb18) = in_stack_00000ac8;
  *(undefined8 *)(puVar1 + 0xac0) = in_stack_00000a70;
  *(undefined8 *)(puVar1 + 0xac8) = in_stack_00000a78;
  *(undefined8 *)(puVar1 + 0xad0) = in_stack_00000a80;
  *(undefined8 *)(puVar1 + 0xad8) = in_stack_00000a88;
  *(undefined8 *)(puVar1 + 0xae0) = in_stack_00000a90;
  *(undefined8 *)(puVar1 + 0xae8) = in_stack_00000a98;
  *(undefined8 *)(puVar1 + 0xa90) = in_stack_00000a40;
  *(undefined8 *)(puVar1 + 0xa98) = in_stack_00000a48;
  *(undefined8 *)(puVar1 + 0xaa0) = in_stack_00000a50;
  *(undefined8 *)(puVar1 + 0xaa8) = in_stack_00000a58;
  *(undefined8 *)(puVar1 + 0xab0) = in_stack_00000a60;
  *(undefined8 *)(puVar1 + 0xab8) = in_stack_00000a68;
  *(undefined8 *)(puVar1 + 0xa60) = in_stack_00000a10;
  *(undefined8 *)(puVar1 + 0xa68) = in_stack_00000a18;
  *(undefined8 *)(puVar1 + 0xa70) = in_stack_00000a20;
  *(undefined8 *)(puVar1 + 0xa78) = in_stack_00000a28;
  *(undefined8 *)(puVar1 + 0xa80) = in_stack_00000a30;
  *(undefined8 *)(puVar1 + 0xa88) = in_stack_00000a38;
  *(undefined8 *)(puVar1 + 0xa30) = in_stack_000009e0;
  *(undefined8 *)(puVar1 + 0xa38) = in_stack_000009e8;
  *(undefined8 *)(puVar1 + 0xa40) = in_stack_000009f0;
  *(undefined8 *)(puVar1 + 0xa48) = in_stack_000009f8;
  *(undefined8 *)(puVar1 + 0xa50) = in_stack_00000a00;
  *(undefined8 *)(puVar1 + 0xa58) = in_stack_00000a08;
  *(undefined8 *)(puVar1 + 0xa00) = in_stack_000009b0;
  *(undefined8 *)(puVar1 + 0xa08) = in_stack_000009b8;
  *(undefined8 *)(puVar1 + 0xa10) = in_stack_000009c0;
  *(undefined8 *)(puVar1 + 0xa18) = in_stack_000009c8;
  *(undefined8 *)(puVar1 + 0xa20) = in_stack_000009d0;
  *(undefined8 *)(puVar1 + 0xa28) = in_stack_000009d8;
  *(undefined8 *)(puVar1 + 0x9d0) = in_stack_00000980;
  *(undefined8 *)(puVar1 + 0x9d8) = in_stack_00000988;
  *(undefined8 *)(puVar1 + 0x9e0) = in_stack_00000990;
  *(undefined8 *)(puVar1 + 0x9e8) = in_stack_00000998;
  *(undefined8 *)(puVar1 + 0x9f0) = in_stack_000009a0;
  *(undefined8 *)(puVar1 + 0x9f8) = in_stack_000009a8;
  *(undefined8 *)(puVar1 + 0x9a0) = in_stack_00000950;
  *(undefined8 *)(puVar1 + 0x9a8) = in_stack_00000958;
  *(undefined8 *)(puVar1 + 0x9b0) = in_stack_00000960;
  *(undefined8 *)(puVar1 + 0x9b8) = in_stack_00000968;
  *(undefined8 *)(puVar1 + 0x9c0) = in_stack_00000970;
  *(undefined8 *)(puVar1 + 0x9c8) = in_stack_00000978;
  *(undefined8 *)(puVar1 + 0x970) = in_stack_00000920;
  *(undefined8 *)(puVar1 + 0x978) = in_stack_00000928;
  *(undefined8 *)(puVar1 + 0x980) = in_stack_00000930;
  *(undefined8 *)(puVar1 + 0x988) = in_stack_00000938;
  *(undefined8 *)(puVar1 + 0x990) = in_stack_00000940;
  *(undefined8 *)(puVar1 + 0x998) = in_stack_00000948;
  *(undefined8 *)(puVar1 + 0x940) = in_stack_000008f0;
  *(undefined8 *)(puVar1 + 0x948) = in_stack_000008f8;
  *(undefined8 *)(puVar1 + 0x950) = in_stack_00000900;
  *(undefined8 *)(puVar1 + 0x958) = in_stack_00000908;
  *(undefined8 *)(puVar1 + 0x960) = in_stack_00000910;
  *(undefined8 *)(puVar1 + 0x968) = in_stack_00000918;
  *(undefined8 *)(puVar1 + 0x910) = in_stack_000008c0;
  *(undefined8 *)(puVar1 + 0x918) = in_stack_000008c8;
  *(undefined8 *)(puVar1 + 0x920) = in_stack_000008d0;
  *(undefined8 *)(puVar1 + 0x928) = in_stack_000008d8;
  *(undefined8 *)(puVar1 + 0x930) = in_stack_000008e0;
  *(undefined8 *)(puVar1 + 0x938) = in_stack_000008e8;
  *(undefined8 *)(puVar1 + 0x8e0) = in_stack_00000890;
  *(undefined8 *)(puVar1 + 0x8e8) = in_stack_00000898;
  *(undefined8 *)(puVar1 + 0x8f0) = in_stack_000008a0;
  *(undefined8 *)(puVar1 + 0x8f8) = in_stack_000008a8;
  *(undefined8 *)(puVar1 + 0x900) = in_stack_000008b0;
  *(undefined8 *)(puVar1 + 0x908) = in_stack_000008b8;
  *(undefined8 *)(puVar1 + 0x8b0) = in_stack_00000860;
  *(undefined8 *)(puVar1 + 0x8b8) = in_stack_00000868;
  *(undefined8 *)(puVar1 + 0x8c0) = in_stack_00000870;
  *(undefined8 *)(puVar1 + 0x8c8) = in_stack_00000878;
  *(undefined8 *)(puVar1 + 0x8d0) = in_stack_00000880;
  *(undefined8 *)(puVar1 + 0x8d8) = in_stack_00000888;
  *(undefined8 *)(puVar1 + 0x880) = in_stack_00000830;
  *(undefined8 *)(puVar1 + 0x888) = in_stack_00000838;
  *(undefined8 *)(puVar1 + 0x890) = in_stack_00000840;
  *(undefined8 *)(puVar1 + 0x898) = in_stack_00000848;
  *(undefined8 *)(puVar1 + 0x8a0) = in_stack_00000850;
  *(undefined8 *)(puVar1 + 0x8a8) = in_stack_00000858;
  *(undefined8 *)(puVar1 + 0x850) = in_stack_00000800;
  *(undefined8 *)(puVar1 + 0x858) = in_stack_00000808;
  *(undefined8 *)(puVar1 + 0x860) = in_stack_00000810;
  *(undefined8 *)(puVar1 + 0x868) = in_stack_00000818;
  *(undefined8 *)(puVar1 + 0x870) = in_stack_00000820;
  *(undefined8 *)(puVar1 + 0x878) = in_stack_00000828;
  *(undefined8 *)(puVar1 + 0x820) = in_stack_000007d0;
  *(undefined8 *)(puVar1 + 0x828) = in_stack_000007d8;
  *(undefined8 *)(puVar1 + 0x830) = in_stack_000007e0;
  *(undefined8 *)(puVar1 + 0x838) = in_stack_000007e8;
  *(undefined8 *)(puVar1 + 0x840) = in_stack_000007f0;
  *(undefined8 *)(puVar1 + 0x848) = in_stack_000007f8;
  *(undefined8 *)(puVar1 + 0x7f0) = in_stack_000007a0;
  *(undefined8 *)(puVar1 + 0x7f8) = in_stack_000007a8;
  *(undefined8 *)(puVar1 + 0x800) = in_stack_000007b0;
  *(undefined8 *)(puVar1 + 0x808) = in_stack_000007b8;
  *(undefined8 *)(puVar1 + 0x810) = in_stack_000007c0;
  *(undefined8 *)(puVar1 + 0x818) = in_stack_000007c8;
  *(undefined8 *)(puVar1 + 0x7d8) = in_stack_00000788;
  *(undefined8 *)(puVar1 + 0x7e0) = in_stack_00000790;
  *(undefined8 *)(puVar1 + 0x11e0) = in_stack_00001190;
  *(undefined8 *)(puVar1 + 0x11f0) = in_stack_000011a0;
  *(undefined8 *)(puVar1 + 0x11f8) = in_stack_000011a8;
  *(undefined8 *)(puVar1 + 0x1200) = in_stack_000011b0;
  *(undefined8 *)(puVar1 + 0x1208) = in_stack_000011b8;
  *(undefined8 *)(puVar1 + 0x1210) = in_stack_000011c0;
  *(undefined8 *)(puVar1 + 0x1218) = in_stack_000011c8;
  *(undefined8 *)(puVar1 + 0x1220) = in_stack_000011d0;
  *(undefined8 *)(puVar1 + 0x1228) = in_stack_000011d8;
  *(undefined8 *)(puVar1 + 0x1230) = in_stack_000011e0;
  *(undefined8 *)(puVar1 + 0x1238) = in_stack_000011e8;
  *(undefined8 *)(puVar1 + 0x1240) = in_stack_000011f0;
  *(undefined8 *)(puVar1 + 0x1248) = in_stack_000011f8;
  *(undefined8 *)(puVar1 + 0x1250) = in_stack_00001200;
  *(undefined8 *)(puVar1 + 0x1258) = in_stack_00001208;
  *(undefined8 *)(puVar1 + 0x1260) = in_stack_00001210;
  *(undefined8 *)(puVar1 + 0x1268) = in_stack_00001218;
  *(undefined8 *)(puVar1 + 0x1270) = in_stack_00001220;
  *(undefined8 *)(puVar1 + 0x1278) = in_stack_00001228;
  *(undefined8 *)(puVar1 + 0x1280) = in_stack_00001230;
  *(undefined8 *)(puVar1 + 0x1288) = in_stack_00001238;
  *(undefined8 *)(puVar1 + 0x1290) = in_stack_00001240;
  *(undefined8 *)(puVar1 + 0x1298) = in_stack_00001248;
  *(undefined8 *)(puVar1 + 0x12a0) = in_stack_00001250;
  *(undefined8 *)(puVar1 + 0x12a8) = in_stack_00001258;
  *(undefined8 *)(puVar1 + 0x12b0) = in_stack_00001260;
  *(undefined8 *)(puVar1 + 0x12b8) = in_stack_00001268;
  *(undefined8 *)(puVar1 + 0x12c0) = in_stack_00001270;
  *(undefined8 *)(puVar1 + 0x12c8) = in_stack_00001278;
  *(undefined8 *)(puVar1 + 0x12d0) = in_stack_00001280;
  *(undefined8 *)(puVar1 + 0x12d8) = in_stack_00001288;
  *(undefined8 *)(puVar1 + 0x12e0) = in_stack_00001290;
  *(undefined8 *)(puVar1 + 0x12e8) = in_stack_00001298;
  *(undefined8 *)(puVar1 + 0x12f0) = in_stack_000012a0;
  *(undefined8 *)(puVar1 + 0x12f8) = in_stack_000012a8;
  *(undefined8 *)(puVar1 + 0x1300) = in_stack_000012b0;
  *(undefined8 *)(puVar1 + 0x1308) = in_stack_000012b8;
  *(undefined8 *)(puVar1 + 0x1310) = in_stack_000012c0;
  *(undefined8 *)(puVar1 + 0x1318) = in_stack_000012c8;
  *(undefined8 *)(puVar1 + 0x1320) = in_stack_000012d0;
  *(undefined8 *)(puVar1 + 0x1328) = in_stack_000012d8;
  *(undefined8 *)(puVar1 + 0x1330) = in_stack_000012e0;
  *(undefined8 *)(puVar1 + 0x1338) = in_stack_000012e8;
  *(undefined8 *)(puVar1 + 0x1340) = in_stack_000012f0;
  *(undefined8 *)(puVar1 + 0x1348) = in_stack_000012f8;
  *(undefined8 *)(puVar1 + 0x1350) = in_stack_00001300;
  *(undefined8 *)(puVar1 + 0x1358) = in_stack_00001308;
  *(undefined8 *)(puVar1 + 0x1360) = in_stack_00001310;
  *(undefined8 *)(puVar1 + 0x1368) = in_stack_00001318;
  *(undefined8 *)(puVar1 + 0x1370) = in_stack_00001320;
  *(undefined8 *)(puVar1 + 0x1378) = in_stack_00001328;
  *(undefined8 *)(puVar1 + 0x1380) = in_stack_00001330;
  *(undefined8 *)(puVar1 + 5000) = in_stack_00001338;
  *(undefined8 *)(puVar1 + 0x1390) = in_stack_00001340;
  *(undefined8 *)(puVar1 + 0x1398) = in_stack_00001348;
  *(undefined8 *)(puVar1 + 0x13a0) = in_stack_00001350;
  *(undefined8 *)(puVar1 + 0x13a8) = in_stack_00001358;
  *(undefined8 *)(puVar1 + 0x13b0) = in_stack_00001360;
  *(undefined8 *)(puVar1 + 0x13b8) = in_stack_00001368;
  *(undefined8 *)(puVar1 + 0x13c0) = in_stack_00001370;
  *(undefined8 *)(puVar1 + 0x13c8) = in_stack_00001378;
  *(undefined8 *)(puVar1 + 0x13d0) = in_stack_00001380;
  *(undefined8 *)(puVar1 + 0x13d8) = in_stack_00001388;
  *(undefined8 *)(puVar1 + 0x13e0) = in_stack_00001390;
  *(undefined8 *)(puVar1 + 0x13e8) = in_stack_00001398;
  *(undefined8 *)(puVar1 + 0x13f0) = in_stack_000013a0;
  *(undefined8 *)(puVar1 + 0x13f8) = in_stack_000013a8;
  *(undefined8 *)(puVar1 + 0x1400) = in_stack_000013b0;
  *(undefined8 *)(puVar1 + 0x1408) = in_stack_000013b8;
  *(undefined8 *)(puVar1 + 0x1410) = in_stack_000013c0;
  *(undefined8 *)(puVar1 + 0x1418) = in_stack_000013c8;
  *(undefined8 *)(puVar1 + 0x1420) = in_stack_000013d0;
  *(undefined8 *)(puVar1 + 0x1428) = in_stack_000013d8;
  *(undefined8 *)(puVar1 + 0x1430) = in_stack_000013e0;
  *(undefined8 *)(puVar1 + 0x1438) = in_stack_000013e8;
  *(undefined8 *)(puVar1 + 0x1440) = in_stack_000013f0;
  *(undefined8 *)(puVar1 + 0x1448) = in_stack_000013f8;
  *(undefined8 *)(puVar1 + 0x1450) = in_stack_00001400;
  *(undefined8 *)(puVar1 + 0x1458) = in_stack_00001408;
  *(undefined8 *)(puVar1 + 0x1460) = in_stack_00001410;
  *(undefined8 *)(puVar1 + 0x1468) = in_stack_00001418;
  *(undefined8 *)(puVar1 + 0x1470) = in_stack_00001420;
  *(undefined8 *)(puVar1 + 0x1478) = in_stack_00001428;
  *(undefined8 *)(puVar1 + 0x1480) = in_stack_00001430;
  *(undefined8 *)(puVar1 + 0x1488) = in_stack_00001438;
  *(undefined8 *)(puVar1 + 0x1490) = in_stack_00001440;
  *(undefined8 *)(puVar1 + 0x1498) = in_stack_00001448;
  *(undefined8 *)(puVar1 + 0x14a0) = in_stack_00001450;
  *(undefined8 *)(puVar1 + 0x14a8) = in_stack_00001458;
  *(undefined8 *)(puVar1 + 0x14b0) = in_stack_00001460;
  *(undefined8 *)(puVar1 + 0x14b8) = in_stack_00001468;
  *(undefined8 *)(puVar1 + 0x14c0) = in_stack_00001470;
  *(undefined8 *)(puVar1 + 0x14c8) = in_stack_00001478;
  *(undefined8 *)(puVar1 + 0x14d0) = in_stack_00001480;
  *(undefined8 *)(puVar1 + 0x14d8) = in_stack_00001488;
  *(undefined8 *)(puVar1 + 0x14e0) = in_stack_00001490;
  *(undefined8 *)(puVar1 + 0x14e8) = in_stack_00001498;
  *(undefined8 *)(puVar1 + 0x14f0) = in_stack_000014a0;
  *(undefined8 *)(puVar1 + 0x14f8) = in_stack_000014a8;
  *(undefined8 *)(puVar1 + 0x1500) = in_stack_000014b0;
  *(undefined8 *)(puVar1 + 0x1508) = in_stack_000014b8;
  *(undefined8 *)(puVar1 + 0x1510) = in_stack_000014c0;
  *(undefined8 *)(puVar1 + 0x1518) = in_stack_000014c8;
  *(undefined8 *)(puVar1 + 0x1520) = in_stack_000014d0;
  *(undefined8 *)(puVar1 + 0x1528) = in_stack_000014d8;
  *(undefined8 *)(puVar1 + 0x1530) = in_stack_000014e0;
  *(undefined8 *)(puVar1 + 0x1538) = in_stack_000014e8;
  *(undefined8 *)(puVar1 + 0x1540) = in_stack_000014f0;
  *(undefined8 *)(puVar1 + 0x1548) = in_stack_000014f8;
  *(undefined8 *)(puVar1 + 0x1550) = in_stack_00001500;
  *(undefined8 *)(puVar1 + 0x1558) = in_stack_00001508;
  *(undefined8 *)(puVar1 + 0x1560) = in_stack_00001510;
  *(undefined8 *)(puVar1 + 0x1568) = in_stack_00001518;
  *(undefined8 *)(puVar1 + 0x1570) = in_stack_00001520;
  *(undefined8 *)(puVar1 + 0x1578) = in_stack_00001528;
  *(undefined8 *)(puVar1 + 0x1580) = in_stack_00001530;
  *(undefined8 *)(puVar1 + 0x1588) = in_stack_00001538;
  *(undefined8 *)(puVar1 + 0x1590) = in_stack_00001540;
  *(undefined8 *)(puVar1 + 0x1598) = in_stack_00001548;
  *(undefined8 *)(puVar1 + 0x15a0) = in_stack_00001550;
  *(undefined8 *)(puVar1 + 0x15a8) = in_stack_00001558;
  *(undefined8 *)(puVar1 + 0x15b0) = in_stack_00001560;
  *(undefined8 *)(puVar1 + 0x15b8) = in_stack_00001568;
  *(undefined8 *)(puVar1 + 0x15c0) = in_stack_00001570;
  *(undefined8 *)(puVar1 + 0x15c8) = in_stack_00001578;
  *(undefined8 *)(puVar1 + 0x15d0) = in_stack_00001580;
  *(undefined8 *)(puVar1 + 0x15d8) = in_stack_00001588;
  *(undefined8 *)(puVar1 + 0x15e0) = in_stack_00001590;
  *(undefined8 *)(puVar1 + 0x15e8) = in_stack_00001598;
  *(undefined8 *)(puVar1 + 0x15f0) = in_stack_000015a0;
  *(undefined8 *)(puVar1 + 0x15f8) = in_stack_000015a8;
  *(undefined8 *)(puVar1 + 0x1600) = in_stack_000015b0;
  *(undefined8 *)(puVar1 + 0x1608) = in_stack_000015b8;
  *(undefined8 *)(puVar1 + 0x1610) = in_stack_000015c0;
  *(undefined8 *)(puVar1 + 0x1618) = in_stack_000015c8;
  *(undefined8 *)(puVar1 + 0x1620) = in_stack_000015d0;
  *(undefined8 *)(puVar1 + 0x1628) = in_stack_000015d8;
  *(undefined8 *)(puVar1 + 0x1630) = in_stack_000015e0;
  *(undefined8 *)(puVar1 + 0x1638) = in_stack_000015e8;
  *(undefined8 *)(puVar1 + 0x1640) = in_stack_000015f0;
  *(undefined8 *)(puVar1 + 0x1648) = in_stack_000015f8;
  *(undefined8 *)(puVar1 + 0x1650) = in_stack_00001600;
  *(undefined8 *)(puVar1 + 0x1658) = in_stack_00001608;
  *(undefined8 *)(puVar1 + 0x1660) = in_stack_00001610;
  *(undefined8 *)(puVar1 + 0x1668) = in_stack_00001618;
  *(undefined8 *)(puVar1 + 0x1670) = in_stack_00001620;
  *(undefined8 *)(puVar1 + 0x1678) = in_stack_00001628;
  *(undefined8 *)(puVar1 + 0x1680) = in_stack_00001630;
  *(undefined8 *)(puVar1 + 0x1688) = in_stack_00001638;
  *(undefined8 *)(puVar1 + 0x1690) = in_stack_00001640;
  *(undefined8 *)(puVar1 + 0x1698) = in_stack_00001648;
  *(undefined8 *)(puVar1 + 0x16a0) = in_stack_00001650;
  *(undefined8 *)(puVar1 + 0x16a8) = in_stack_00001658;
  *(undefined8 *)(puVar1 + 0x16b0) = in_stack_00001660;
  *(undefined8 *)(puVar1 + 0x16b8) = in_stack_00001668;
  *(undefined8 *)(puVar1 + 0x16c0) = in_stack_00001670;
  *(undefined8 *)(puVar1 + 0x16c8) = in_stack_00001678;
  *(undefined8 *)(puVar1 + 0x16d0) = in_stack_00001680;
  *(undefined8 *)(puVar1 + 0x16d8) = in_stack_00001688;
  *(undefined8 *)(puVar1 + 0x16e0) = in_stack_00001690;
  *(undefined8 *)(puVar1 + 0x16e8) = in_stack_00001698;
  *(undefined8 *)(puVar1 + 0x16f0) = in_stack_000016a0;
  *(undefined8 *)(puVar1 + 0x16f8) = in_stack_000016a8;
  *(undefined8 *)(puVar1 + 0x1700) = in_stack_000016b0;
  *(undefined8 *)(puVar1 + 0x1708) = in_stack_000016b8;
  *(undefined8 *)(puVar1 + 0x1710) = in_stack_000016c0;
  *(undefined8 *)(puVar1 + 0x1718) = in_stack_000016c8;
  *(undefined8 *)(puVar1 + 0x1720) = in_stack_000016d0;
  *(undefined8 *)(puVar1 + 0x1728) = in_stack_000016d8;
  *(undefined8 *)(puVar1 + 0x1730) = in_stack_000016e0;
  *(undefined8 *)(puVar1 + 0x1738) = in_stack_000016e8;
  *(undefined8 *)(puVar1 + 0x1740) = in_stack_000016f0;
  *(undefined8 *)(puVar1 + 0x1748) = in_stack_000016f8;
  *(undefined8 *)(puVar1 + 0x1750) = in_stack_00001700;
  *(undefined8 *)(puVar1 + 0x1758) = in_stack_00001708;
  *(undefined8 *)(puVar1 + 0x1760) = in_stack_00001710;
  *(undefined8 *)(puVar1 + 0x1768) = in_stack_00001718;
  *(undefined8 *)(puVar1 + 6000) = in_stack_00001720;
  *(undefined8 *)(puVar1 + 0x1778) = in_stack_00001728;
  *(undefined8 *)(puVar1 + 0x1780) = in_stack_00001730;
  *(undefined8 *)(puVar1 + 0x1788) = in_stack_00001738;
  *(undefined8 *)(puVar1 + 0x1790) = in_stack_00001740;
  *(undefined8 *)(puVar1 + 0x1798) = in_stack_00001748;
  *(undefined8 *)(puVar1 + 0x17a0) = in_stack_00001750;
  *(undefined8 *)(puVar1 + 0x17a8) = in_stack_00001758;
  *(undefined8 *)(puVar1 + 0x17b0) = in_stack_00001760;
  *(undefined8 *)(puVar1 + 0x17b8) = in_stack_00001768;
  *(undefined8 *)(puVar1 + 0x17c0) = in_stack_00001770;
  *(undefined8 *)(puVar1 + 0x17c8) = in_stack_00001778;
  *(undefined8 *)(puVar1 + 0x17d0) = in_stack_00001780;
  *(undefined8 *)(puVar1 + 0x17d8) = in_stack_00001788;
  *(undefined8 *)(puVar1 + 0x17e0) = in_stack_00001790;
  *(undefined8 *)(puVar1 + 0x17e8) = in_stack_00001798;
  *(undefined8 *)(puVar1 + 0x17f0) = in_stack_000017a0;
  *(undefined8 *)(puVar1 + 0x17f8) = in_stack_000017a8;
  *(undefined8 *)(puVar1 + 0x1800) = in_stack_000017b0;
  *(undefined8 *)(puVar1 + 0x1808) = in_stack_000017b8;
  *(undefined8 *)(puVar1 + 0x1810) = in_stack_000017c0;
  *(undefined8 *)(puVar1 + 0x1818) = in_stack_000017c8;
  *(undefined8 *)(puVar1 + 0x1820) = in_stack_000017d0;
  *(undefined8 *)(puVar1 + 0x1828) = in_stack_000017d8;
  *(undefined8 *)(puVar1 + 0x1830) = in_stack_000017e0;
  *(undefined8 *)(puVar1 + 0x1838) = in_stack_000017e8;
  *(undefined8 *)(puVar1 + 0x1840) = in_stack_000017f0;
  *(undefined8 *)(puVar1 + 0x1848) = in_stack_000017f8;
  *(undefined8 *)(puVar1 + 0x1850) = in_stack_00001800;
  *(undefined8 *)(puVar1 + 0x1858) = in_stack_00001808;
  *(undefined8 *)(puVar1 + 0x1860) = in_stack_00001810;
  *(undefined8 *)(puVar1 + 0x1868) = in_stack_00001818;
  *(undefined8 *)(puVar1 + 0x1870) = in_stack_00001820;
  *(undefined8 *)(puVar1 + 0x1878) = in_stack_00001828;
  *(undefined8 *)(puVar1 + 0x1880) = in_stack_00001830;
  *(undefined8 *)(puVar1 + 0x1888) = in_stack_00001838;
  *(undefined8 *)(puVar1 + 0x1890) = in_stack_00001840;
  *(undefined8 *)(puVar1 + 0x1898) = in_stack_00001848;
  *(undefined8 *)(puVar1 + 0x18a0) = in_stack_00001850;
  *(undefined8 *)(puVar1 + 0x18a8) = in_stack_00001858;
  *(undefined8 *)(puVar1 + 0x18b0) = in_stack_00001860;
  *(undefined8 *)(puVar1 + 0x18b8) = in_stack_00001868;
  *(undefined8 *)(puVar1 + 0x18c0) = in_stack_00001870;
  *(undefined8 *)(puVar1 + 0x18c8) = in_stack_00001878;
  *(undefined8 *)(puVar1 + 0x18d0) = in_stack_00001880;
  *(undefined8 *)(puVar1 + 0x18d8) = in_stack_00001888;
  *(undefined8 *)(puVar1 + 0x18e0) = in_stack_00001890;
  *(undefined8 *)(puVar1 + 0x18e8) = in_stack_00001898;
  *(undefined8 *)(puVar1 + 0x18f0) = in_stack_000018a0;
  *(undefined8 *)(puVar1 + 0x18f8) = in_stack_000018a8;
  *(undefined8 *)(puVar1 + 0x1900) = in_stack_000018b0;
  *(undefined8 *)(puVar1 + 0x1908) = in_stack_000018b8;
  *(undefined8 *)(puVar1 + 0x1910) = in_stack_000018c0;
  *(undefined8 *)(puVar1 + 0x1918) = in_stack_000018c8;
  *(undefined8 *)(puVar1 + 0x1920) = in_stack_000018d0;
  *(undefined8 *)(puVar1 + 0x1928) = in_stack_000018d8;
  *(undefined8 *)(puVar1 + 0x1930) = in_stack_000018e0;
  *(undefined8 *)(puVar1 + 0x1938) = in_stack_000018e8;
  *(undefined8 *)(puVar1 + 0x1940) = in_stack_000018f0;
  *(undefined8 *)(puVar1 + 0x1948) = in_stack_000018f8;
  *(undefined8 *)(puVar1 + 0x1950) = in_stack_00001900;
  *(undefined8 *)(puVar1 + 0x1958) = in_stack_00001908;
  *(undefined8 *)(puVar1 + 0x1960) = in_stack_00001910;
  *(undefined8 *)(puVar1 + 0x1968) = in_stack_00001918;
  *(undefined8 *)(puVar1 + 0x1970) = in_stack_00001920;
  *(undefined8 *)(puVar1 + 0x1978) = in_stack_00001928;
  *(undefined8 *)(puVar1 + 0x1980) = in_stack_00001930;
  *(undefined8 *)(puVar1 + 0x1988) = in_stack_00001938;
  *(undefined8 *)(puVar1 + 0x1990) = in_stack_00001940;
  *(undefined8 *)(puVar1 + 0x1998) = in_stack_00001948;
  *(undefined8 *)(puVar1 + 0x19a0) = in_stack_00001950;
  *(undefined8 *)(puVar1 + 0x19a8) = in_stack_00001958;
  *(undefined8 *)(puVar1 + 0x19b0) = in_stack_00001960;
  *(undefined8 *)(puVar1 + 0x19b8) = in_stack_00001968;
  *(undefined8 *)(puVar1 + 0x19c0) = in_stack_00001970;
  *(undefined8 *)(puVar1 + 0x19c8) = in_stack_00001978;
  *(undefined8 *)(puVar1 + 0x19d0) = in_stack_00001980;
  *(undefined8 *)(puVar1 + 0x19d8) = in_stack_00001988;
  *(undefined8 *)(puVar1 + 0x19e0) = in_stack_00001990;
  func_0x000107c6157c();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(param_38);
  func_0x000107c6157c(param_39);
  func_0x000107c6157c(param_40);
  func_0x000107c6157c(param_41);
  func_0x000107c6157c(param_42);
  func_0x000107c6157c(param_43);
  func_0x000107c6157c(param_44);
  func_0x000107c6157c(param_45);
  func_0x000107c6157c(param_46);
  func_0x000107c6157c(param_47);
  func_0x000107c6157c(param_48);
  func_0x000107c6157c(param_49);
  func_0x000107c6157c(param_50);
  func_0x000107c6157c(param_51);
  func_0x000107c6157c(param_52);
  func_0x000107c6157c(param_53);
  func_0x000107c6157c(param_54);
  func_0x000107c6157c(param_55);
  func_0x000107c6157c(param_56);
  func_0x000107c6157c(param_57);
  func_0x000107c6157c(param_58);
  func_0x000107c6157c(param_59);
  func_0x000107c6157c(param_60);
  func_0x000107c6157c(param_61);
  func_0x000107c6157c(param_62);
  func_0x000107c6157c(param_63);
  func_0x000107c6157c(param_64);
  func_0x000107c6157c(param_65);
  func_0x000107c6157c(param_66);
  func_0x000107c6157c(param_67);
  func_0x000107c6157c(param_68);
  func_0x000107c6157c(param_69);
  func_0x000107c6157c(param_70);
  func_0x000107c6157c(in_stack_000001f0);
  func_0x000107c6157c(in_stack_000001f8);
  func_0x000107c6157c(in_stack_00000200);
  func_0x000107c6157c(in_stack_00000208);
  func_0x000107c6157c(in_stack_00000210);
  func_0x000107c6157c(in_stack_00000218);
  func_0x000107c6157c(in_stack_00000220);
  func_0x000107c6157c(in_stack_00000228);
  func_0x000107c6157c(in_stack_00000230);
  func_0x000107c6157c(in_stack_00000238);
  func_0x000107c6157c(in_stack_00000240);
  func_0x000107c6157c(in_stack_00000248);
  func_0x000107c6157c(in_stack_00000250);
  func_0x000107c6157c(in_stack_00000258);
  func_0x000107c6157c(in_stack_00000260);
  func_0x000107c6157c(in_stack_00000268);
  func_0x000107c6157c(in_stack_00000270);
  func_0x000107c6157c(in_stack_00000278);
  func_0x000107c6157c(in_stack_00000280);
  func_0x000107c6157c(in_stack_00000288);
  func_0x000107c6157c(in_stack_00000290);
  func_0x000107c6157c(in_stack_00000298);
  func_0x000107c6157c(in_stack_000002a0);
  func_0x000107c6157c(in_stack_000002a8);
  func_0x000107c6157c(in_stack_000002b0);
  func_0x000107c6157c(in_stack_000002b8);
  func_0x000107c6157c(in_stack_000002c0);
  func_0x000107c6157c(in_stack_000002c8);
  func_0x000107c6157c(in_stack_000002d0);
  func_0x000107c6157c(in_stack_000002d8);
  func_0x000107c6157c(in_stack_000002e0);
  func_0x000107c6157c(in_stack_000002e8);
  func_0x000107c6157c(in_stack_000002f0);
  func_0x000107c6157c(in_stack_000002f8);
  func_0x000107c6157c(in_stack_00000300);
  func_0x000107c6157c(in_stack_00000308);
  func_0x000107c6157c(in_stack_00000310);
  func_0x000107c6157c(in_stack_00000318);
  func_0x000107c6157c(in_stack_00000320);
  func_0x000107c6157c(in_stack_00000328);
  func_0x000107c6157c(in_stack_00000330);
  func_0x000107c6157c(in_stack_00000338);
  func_0x000107c6157c(in_stack_00000340);
  func_0x000107c6157c(in_stack_00000348);
  func_0x000107c6157c(in_stack_00000350);
  func_0x000107c6157c(in_stack_00000358);
  func_0x000107c6157c(in_stack_00000360);
  func_0x000107c6157c(in_stack_00000368);
  func_0x000107c6157c(in_stack_00000370);
  func_0x000107c6157c(in_stack_00000378);
  func_0x000107c6157c(in_stack_00000380);
  func_0x000107c6157c(in_stack_00000388);
  func_0x000107c6157c(in_stack_00000390);
  func_0x000107c6157c(in_stack_00000398);
  func_0x000107c6157c(in_stack_000003a0);
  func_0x000107c6157c(in_stack_000003a8);
  func_0x000107c6157c(in_stack_000003b0);
  func_0x000107c6157c(in_stack_000003b8);
  func_0x000107c6157c(in_stack_000003c0);
  func_0x000107c6157c(in_stack_000003c8);
  func_0x000107c6157c(in_stack_000003d0);
  func_0x000107c6157c(in_stack_000003d8);
  func_0x000107c6157c(in_stack_000003e0);
  func_0x000107c6157c(in_stack_000003e8);
  func_0x000107c6157c(in_stack_000003f0);
  func_0x000107c6157c(in_stack_000003f8);
  func_0x000107c6157c(in_stack_00000400);
  func_0x000107c6157c(in_stack_00000408);
  func_0x000107c6157c(in_stack_00000410);
  func_0x000107c6157c(in_stack_00000418);
  func_0x000107c6157c(in_stack_00000420);
  func_0x000107c6157c(in_stack_00000428);
  func_0x000107c6157c(in_stack_00000430);
  func_0x000107c6157c(in_stack_00000438);
  func_0x000107c6157c(in_stack_00000440);
  func_0x000107c6157c(in_stack_00000448);
  func_0x000107c6157c(in_stack_00000450);
  func_0x000107c6157c(in_stack_00000458);
  func_0x000107c6157c(in_stack_00000460);
  func_0x000107c6157c(in_stack_00000468);
  func_0x000107c6157c(in_stack_00000470);
  func_0x000107c6157c(in_stack_00000478);
  func_0x000107c6157c(in_stack_00000480);
  func_0x000107c6157c(in_stack_00000488);
  func_0x000107c6157c(in_stack_00000490);
  func_0x000107c6157c(in_stack_00000498);
  func_0x000107c6157c(in_stack_000004a0);
  func_0x000107c6157c(in_stack_000004a8);
  func_0x000107c6157c(in_stack_000004b0);
  func_0x000107c6157c(in_stack_000004b8);
  func_0x000107c6157c(in_stack_000004c0);
  func_0x000107c6157c(in_stack_000004c8);
  func_0x000107c6157c(in_stack_000004d0);
  func_0x000107c6157c(in_stack_000004d8);
  func_0x000107c6157c(in_stack_000004e0);
  func_0x000107c6157c(in_stack_000004e8);
  func_0x000107c6157c(in_stack_000004f0);
  func_0x000107c6157c(in_stack_000004f8);
  func_0x000107c6157c(in_stack_00000500);
  func_0x000107c6157c(in_stack_00000508);
  func_0x000107c6157c(in_stack_00000510);
  func_0x000107c6157c(in_stack_00000518);
  func_0x000107c6157c(in_stack_00000520);
  func_0x000107c6157c(in_stack_00000528);
  func_0x000107c6157c(in_stack_00000530);
  func_0x000107c6157c(in_stack_00000538);
  func_0x000107c6157c(in_stack_00000540);
  func_0x000107c6157c(in_stack_00000548);
  func_0x000107c6157c(in_stack_00000550);
  func_0x000107c6157c(in_stack_00000558);
  func_0x000107c6157c(in_stack_00000560);
  func_0x000107c6157c(in_stack_00000568);
  func_0x000107c6157c(in_stack_00000570);
  func_0x000107c6157c(in_stack_00000578);
  func_0x000107c6157c(in_stack_00000580);
  func_0x000107c6157c(in_stack_00000588);
  func_0x000107c6157c(in_stack_00000590);
  func_0x000107c6157c(in_stack_00000598);
  func_0x000107c6157c(in_stack_000005a0);
  func_0x000107c6157c(in_stack_000005a8);
  func_0x000107c6157c(in_stack_000005b0);
  func_0x000107c6157c(in_stack_000005b8);
  func_0x000107c6157c(in_stack_000005c0);
  func_0x000107c6157c(in_stack_000005c8);
  func_0x000107c6157c(in_stack_000005d0);
  func_0x000107c6157c(in_stack_000005d8);
  func_0x000107c6157c(in_stack_000005e0);
  func_0x000107c6157c(in_stack_000005e8);
  func_0x000107c6157c(in_stack_000005f0);
  func_0x000107c6157c(in_stack_000005f8);
  func_0x000107c6157c(in_stack_00000600);
  func_0x000107c6157c(in_stack_00000608);
  func_0x000107c6157c(in_stack_00000610);
  func_0x000107c6157c(in_stack_00000618);
  func_0x000107c6157c(in_stack_00000620);
  func_0x000107c6157c(in_stack_00000628);
  func_0x000107c6157c(in_stack_00000630);
  func_0x000107c6157c(in_stack_00000638);
  func_0x000107c6157c(in_stack_00000640);
  func_0x000107c6157c(in_stack_00000648);
  func_0x000107c6157c(in_stack_00000650);
  func_0x000107c6157c(in_stack_00000658);
  func_0x000107c6157c(in_stack_00000660);
  func_0x000107c6157c(in_stack_00000668);
  func_0x000107c6157c(in_stack_00000670);
  func_0x000107c6157c(in_stack_00000678);
  func_0x000107c6157c(in_stack_00000680);
  func_0x000107c6157c(in_stack_00000688);
  func_0x000107c6157c(in_stack_00000690);
  func_0x000107c6157c(in_stack_00000698);
  func_0x000107c6157c(in_stack_000006a0);
  func_0x000107c6157c(in_stack_000006a8);
  func_0x000107c6157c(in_stack_000006b0);
  func_0x000107c6157c(in_stack_000006b8);
  func_0x000107c6157c(in_stack_000006c0);
  func_0x000107c6157c(in_stack_000006c8);
  func_0x000107c6157c(in_stack_000006d0);
  func_0x000107c6157c(in_stack_000006d8);
  func_0x000107c6157c(in_stack_000006e0);
  func_0x000107c6157c(in_stack_000006e8);
  func_0x000107c6157c(in_stack_000006f0);
  func_0x000107c6157c(in_stack_000006f8);
  func_0x000107c6157c(in_stack_00000700);
  func_0x000107c6157c(in_stack_00000708);
  func_0x000107c6157c(in_stack_00000710);
  func_0x000107c6157c(in_stack_00000718);
  func_0x000107c6157c(in_stack_00000720);
  func_0x000107c6157c(in_stack_00000728);
  func_0x000107c6157c(in_stack_00000730);
  func_0x000107c6157c(in_stack_00000738);
  func_0x000107c6157c(in_stack_00000740);
  func_0x000107c6157c(in_stack_00000748);
  func_0x000107c6157c(in_stack_00000750);
  func_0x000107c6157c(in_stack_00000758);
  func_0x000107c6157c(in_stack_00000760);
  func_0x000107c6157c(in_stack_00000768);
  func_0x000107c6157c(in_stack_00000770);
  func_0x000107c6157c(in_stack_00000778);
  func_0x000107c6157c(in_stack_00000780);
  func_0x000107c6157c(in_stack_00000788);
  func_0x000107c6157c(in_stack_00000790);
  func_0x000107c6157c(in_stack_00000798);
  func_0x000107c6157c(in_stack_000007a0);
  func_0x000107c6157c(in_stack_000007a8);
  func_0x000107c6157c(in_stack_000007b0);
  func_0x000107c6157c(in_stack_000007b8);
  func_0x000107c6157c(in_stack_000007c0);
  func_0x000107c6157c(in_stack_000007c8);
  func_0x000107c6157c(in_stack_000007d0);
  func_0x000107c6157c(in_stack_000007d8);
  func_0x000107c6157c(in_stack_000007e0);
  func_0x000107c6157c(in_stack_000007e8);
  func_0x000107c6157c(in_stack_000007f0);
  func_0x000107c6157c(in_stack_000007f8);
  func_0x000107c6157c(in_stack_00000800);
  func_0x000107c6157c(in_stack_00000808);
  func_0x000107c6157c(in_stack_00000810);
  func_0x000107c6157c(in_stack_00000818);
  func_0x000107c6157c(in_stack_00000820);
  func_0x000107c6157c(in_stack_00000828);
  func_0x000107c6157c(in_stack_00000830);
  func_0x000107c6157c(in_stack_00000838);
  func_0x000107c6157c(in_stack_00000840);
  func_0x000107c6157c(in_stack_00000848);
  func_0x000107c6157c(in_stack_00000850);
  func_0x000107c6157c(in_stack_00000858);
  func_0x000107c6157c(in_stack_00000860);
  func_0x000107c6157c(in_stack_00000868);
  func_0x000107c6157c(in_stack_00000870);
  func_0x000107c6157c(in_stack_00000878);
  func_0x000107c6157c(in_stack_00000880);
  func_0x000107c6157c(in_stack_00000888);
  func_0x000107c6157c(in_stack_00000890);
  func_0x000107c6157c(in_stack_00000898);
  func_0x000107c6157c(in_stack_000008a0);
  func_0x000107c6157c(in_stack_000008a8);
  func_0x000107c6157c(in_stack_000008b0);
  func_0x000107c6157c(in_stack_000008b8);
  func_0x000107c6157c(in_stack_000008c0);
  func_0x000107c6157c(in_stack_000008c8);
  func_0x000107c6157c(in_stack_000008d0);
  func_0x000107c6157c(in_stack_000008d8);
  func_0x000107c6157c(in_stack_000008e0);
  func_0x000107c6157c(in_stack_000008e8);
  func_0x000107c6157c(in_stack_000008f0);
  func_0x000107c6157c(in_stack_000008f8);
  func_0x000107c6157c(in_stack_00000900);
  func_0x000107c6157c(in_stack_00000908);
  func_0x000107c6157c(in_stack_00000910);
  func_0x000107c6157c(in_stack_00000918);
  func_0x000107c6157c(in_stack_00000920);
  func_0x000107c6157c(in_stack_00000928);
  func_0x000107c6157c(in_stack_00000930);
  func_0x000107c6157c(in_stack_00000938);
  func_0x000107c6157c(in_stack_00000940);
  func_0x000107c6157c(in_stack_00000948);
  func_0x000107c6157c(in_stack_00000950);
  func_0x000107c6157c(in_stack_00000958);
  func_0x000107c6157c(in_stack_00000960);
  func_0x000107c6157c(in_stack_00000968);
  func_0x000107c6157c(in_stack_00000970);
  func_0x000107c6157c(in_stack_00000978);
  func_0x000107c6157c(in_stack_00000980);
  func_0x000107c6157c(in_stack_00000988);
  func_0x000107c6157c(in_stack_00000990);
  func_0x000107c6157c(in_stack_00000998);
  func_0x000107c6157c(in_stack_000009a0);
  func_0x000107c6157c(in_stack_000009a8);
  func_0x000107c6157c(in_stack_000009b0);
  func_0x000107c6157c(in_stack_000009b8);
  func_0x000107c6157c(in_stack_000009c0);
  func_0x000107c6157c(in_stack_000009c8);
  func_0x000107c6157c(in_stack_000009d0);
  func_0x000107c6157c(in_stack_000009d8);
  func_0x000107c6157c(in_stack_000009e0);
  func_0x000107c6157c(in_stack_000009e8);
  func_0x000107c6157c(in_stack_000009f0);
  func_0x000107c6157c(in_stack_000009f8);
  func_0x000107c6157c(in_stack_00000a00);
  func_0x000107c6157c(in_stack_00000a08);
  func_0x000107c6157c(in_stack_00000a10);
  func_0x000107c6157c(in_stack_00000a18);
  func_0x000107c6157c(in_stack_00000a20);
  func_0x000107c6157c(in_stack_00000a28);
  func_0x000107c6157c(in_stack_00000a30);
  func_0x000107c6157c(in_stack_00000a38);
  func_0x000107c6157c(in_stack_00000a40);
  func_0x000107c6157c(in_stack_00000a48);
  func_0x000107c6157c(in_stack_00000a50);
  func_0x000107c6157c(in_stack_00000a58);
  func_0x000107c6157c(in_stack_00000a60);
  func_0x000107c6157c(in_stack_00000a68);
  func_0x000107c6157c(in_stack_00000a70);
  func_0x000107c6157c(in_stack_00000a78);
  func_0x000107c6157c(in_stack_00000a80);
  func_0x000107c6157c(in_stack_00000a88);
  func_0x000107c6157c(in_stack_00000a90);
  func_0x000107c6157c(in_stack_00000a98);
  func_0x000107c6157c(in_stack_00000aa0);
  func_0x000107c6157c(in_stack_00000aa8);
  func_0x000107c6157c(in_stack_00000ab0);
  func_0x000107c6157c(in_stack_00000ab8);
  func_0x000107c6157c(in_stack_00000ac0);
  func_0x000107c6157c(in_stack_00000ac8);
  func_0x000107c6157c(in_stack_00000ad0);
  func_0x000107c6157c(in_stack_00000ad8);
  func_0x000107c6157c(in_stack_00000ae0);
  func_0x000107c6157c(in_stack_00000ae8);
  func_0x000107c6157c(in_stack_00000af0);
  func_0x000107c6157c(in_stack_00000af8);
  func_0x000107c6157c(in_stack_00000b00);
  func_0x000107c6157c(in_stack_00000b08);
  func_0x000107c6157c(in_stack_00000b10);
  func_0x000107c6157c(in_stack_00000b18);
  func_0x000107c6157c(in_stack_00000b20);
  func_0x000107c6157c(in_stack_00000b28);
  func_0x000107c6157c(in_stack_00000b30);
  func_0x000107c6157c(in_stack_00000b38);
  func_0x000107c6157c(in_stack_00000b40);
  func_0x000107c6157c(in_stack_00000b48);
  func_0x000107c6157c(in_stack_00000b50);
  func_0x000107c6157c(in_stack_00000b58);
  func_0x000107c6157c(in_stack_00000b60);
  func_0x000107c6157c(in_stack_00000b68);
  func_0x000107c6157c(in_stack_00000b70);
  func_0x000107c6157c(in_stack_00000b78);
  func_0x000107c6157c(in_stack_00000b80);
  func_0x000107c6157c(in_stack_00000b88);
  func_0x000107c6157c(in_stack_00000b90);
  func_0x000107c6157c(in_stack_00000b98);
  func_0x000107c6157c(in_stack_00000ba0);
  func_0x000107c6157c(in_stack_00000ba8);
  func_0x000107c6157c(in_stack_00000bb0);
  func_0x000107c6157c(in_stack_00000bb8);
  func_0x000107c6157c(in_stack_00000bc0);
  func_0x000107c6157c(in_stack_00000bc8);
  func_0x000107c6157c(in_stack_00000bd0);
  func_0x000107c6157c(in_stack_00000bd8);
  func_0x000107c6157c(in_stack_00000be0);
  func_0x000107c6157c(in_stack_00000be8);
  func_0x000107c6157c(in_stack_00000bf0);
  func_0x000107c6157c(in_stack_00000bf8);
  func_0x000107c6157c(in_stack_00000c00);
  func_0x000107c6157c(in_stack_00000c08);
  func_0x000107c6157c(in_stack_00000c10);
  func_0x000107c6157c(in_stack_00000c18);
  func_0x000107c6157c(in_stack_00000c20);
  func_0x000107c6157c(in_stack_00000c28);
  func_0x000107c6157c(in_stack_00000c30);
  func_0x000107c6157c(in_stack_00000c38);
  func_0x000107c6157c(in_stack_00000c40);
  func_0x000107c6157c(in_stack_00000c48);
  func_0x000107c6157c(in_stack_00000c50);
  func_0x000107c6157c(in_stack_00000c58);
  func_0x000107c6157c(in_stack_00000c60);
  func_0x000107c6157c(in_stack_00000c68);
  func_0x000107c6157c(in_stack_00000c70);
  func_0x000107c6157c(in_stack_00000c78);
  func_0x000107c6157c(in_stack_00000c80);
  func_0x000107c6157c(in_stack_00000c88);
  func_0x000107c6157c(in_stack_00000c90);
  func_0x000107c6157c(in_stack_00000c98);
  func_0x000107c6157c(in_stack_00000ca0);
  func_0x000107c6157c(in_stack_00000ca8);
  func_0x000107c6157c(in_stack_00000cb0);
  func_0x000107c6157c(in_stack_00000cb8);
  func_0x000107c6157c(in_stack_00000cc0);
  func_0x000107c6157c(in_stack_00000cc8);
  func_0x000107c6157c(in_stack_00000cd0);
  func_0x000107c6157c(in_stack_00000cd8);
  func_0x000107c6157c(in_stack_00000ce0);
  func_0x000107c6157c(in_stack_00000ce8);
  func_0x000107c6157c(in_stack_00000cf0);
  func_0x000107c6157c(in_stack_00000cf8);
  func_0x000107c6157c(in_stack_00000d00);
  func_0x000107c6157c(in_stack_00000d08);
  func_0x000107c6157c(in_stack_00000d10);
  func_0x000107c6157c(in_stack_00000d18);
  func_0x000107c6157c(in_stack_00000d20);
  func_0x000107c6157c(in_stack_00000d28);
  func_0x000107c6157c(in_stack_00000d30);
  func_0x000107c6157c(in_stack_00000d38);
  func_0x000107c6157c(in_stack_00000d40);
  func_0x000107c6157c(in_stack_00000d48);
  func_0x000107c6157c(in_stack_00000d50);
  func_0x000107c6157c(in_stack_00000d58);
  func_0x000107c6157c(in_stack_00000d60);
  func_0x000107c6157c(in_stack_00000d68);
  func_0x000107c6157c(in_stack_00000d70);
  func_0x000107c6157c(in_stack_00000d78);
  func_0x000107c6157c(in_stack_00000d80);
  func_0x000107c6157c(in_stack_00000d88);
  func_0x000107c6157c(in_stack_00000d90);
  func_0x000107c6157c(in_stack_00000d98);
  func_0x000107c6157c(in_stack_00000da0);
  func_0x000107c6157c(in_stack_00000da8);
  func_0x000107c6157c(in_stack_00000db0);
  func_0x000107c6157c(in_stack_00000db8);
  func_0x000107c6157c(in_stack_00000dc0);
  func_0x000107c6157c(in_stack_00000dc8);
  func_0x000107c6157c(in_stack_00000dd0);
  func_0x000107c6157c(in_stack_00000dd8);
  func_0x000107c6157c(in_stack_00000de0);
  func_0x000107c6157c(in_stack_00000de8);
  func_0x000107c6157c(in_stack_00000df0);
  func_0x000107c6157c(in_stack_00000df8);
  func_0x000107c6157c(in_stack_00000e00);
  func_0x000107c6157c(in_stack_00000e08);
  func_0x000107c6157c(in_stack_00000e10);
  func_0x000107c6157c(in_stack_00000e18);
  func_0x000107c6157c(in_stack_00000e20);
  func_0x000107c6157c(in_stack_00000e28);
  func_0x000107c6157c(in_stack_00000e30);
  func_0x000107c6157c(in_stack_00000e38);
  func_0x000107c6157c(in_stack_00000e40);
  func_0x000107c6157c(in_stack_00000e48);
  func_0x000107c6157c(in_stack_00000e50);
  func_0x000107c6157c(in_stack_00000e58);
  func_0x000107c6157c(in_stack_00000e60);
  func_0x000107c6157c(in_stack_00000e68);
  func_0x000107c6157c(in_stack_00000e70);
  func_0x000107c6157c(in_stack_00000e78);
  func_0x000107c6157c(in_stack_00000e80);
  func_0x000107c6157c(in_stack_00000e88);
  func_0x000107c6157c(in_stack_00000e90);
  func_0x000107c6157c(in_stack_00000e98);
  func_0x000107c6157c(in_stack_00000ea0);
  func_0x000107c6157c(in_stack_00000ea8);
  func_0x000107c6157c(in_stack_00000eb0);
  func_0x000107c6157c(in_stack_00000eb8);
  func_0x000107c6157c(in_stack_00000ec0);
  func_0x000107c6157c(in_stack_00000ec8);
  func_0x000107c6157c(in_stack_00000ed0);
  func_0x000107c6157c(in_stack_00000ed8);
  func_0x000107c6157c(in_stack_00000ee0);
  func_0x000107c6157c(in_stack_00000ee8);
  func_0x000107c6157c(in_stack_00000ef0);
  func_0x000107c6157c(in_stack_00000ef8);
  func_0x000107c6157c(in_stack_00000f00);
  func_0x000107c6157c(in_stack_00000f08);
  func_0x000107c6157c(in_stack_00000f10);
  func_0x000107c6157c(in_stack_00000f18);
  func_0x000107c6157c(in_stack_00000f20);
  func_0x000107c6157c(in_stack_00000f28);
  func_0x000107c6157c(in_stack_00000f30);
  func_0x000107c6157c(in_stack_00000f38);
  func_0x000107c6157c(in_stack_00000f40);
  func_0x000107c6157c(in_stack_00000f48);
  func_0x000107c6157c(in_stack_00000f50);
  func_0x000107c6157c(in_stack_00000f58);
  func_0x000107c6157c(in_stack_00000f60);
  func_0x000107c6157c(in_stack_00000f68);
  func_0x000107c6157c(in_stack_00000f70);
  func_0x000107c6157c(in_stack_00000f78);
  func_0x000107c6157c(in_stack_00000f80);
  func_0x000107c6157c(in_stack_00000f88);
  func_0x000107c6157c(in_stack_00000f90);
  func_0x000107c6157c(in_stack_00000f98);
  func_0x000107c6157c(in_stack_00000fa0);
  func_0x000107c6157c(in_stack_00000fa8);
  func_0x000107c6157c(in_stack_00000fb0);
  func_0x000107c6157c(in_stack_00000fb8);
  func_0x000107c6157c(in_stack_00000fc0);
  func_0x000107c6157c(in_stack_00000fc8);
  func_0x000107c6157c(in_stack_00000fd0);
  func_0x000107c6157c(in_stack_00000fd8);
  func_0x000107c6157c(in_stack_00000fe0);
  func_0x000107c6157c(in_stack_00000fe8);
  func_0x000107c6157c(in_stack_00000ff0);
  func_0x000107c6157c(in_stack_00000ff8);
  func_0x000107c6157c(in_stack_00001000);
  func_0x000107c6157c(in_stack_00001008);
  func_0x000107c6157c(in_stack_00001010);
  func_0x000107c6157c(in_stack_00001018);
  func_0x000107c6157c(in_stack_00001020);
  func_0x000107c6157c(in_stack_00001028);
  func_0x000107c6157c(in_stack_00001030);
  func_0x000107c6157c(in_stack_00001038);
  func_0x000107c6157c(in_stack_00001040);
  func_0x000107c6157c(in_stack_00001048);
  func_0x000107c6157c(in_stack_00001050);
  func_0x000107c6157c(in_stack_00001058);
  func_0x000107c6157c(in_stack_00001060);
  func_0x000107c6157c(in_stack_00001068);
  func_0x000107c6157c(in_stack_00001070);
  func_0x000107c6157c(in_stack_00001078);
  func_0x000107c6157c(in_stack_00001080);
  func_0x000107c6157c(in_stack_00001088);
  func_0x000107c6157c(in_stack_00001090);
  func_0x000107c6157c(in_stack_00001098);
  func_0x000107c6157c(in_stack_000010a0);
  func_0x000107c6157c(in_stack_000010a8);
  func_0x000107c6157c(in_stack_000010b0);
  func_0x000107c6157c(in_stack_000010b8);
  func_0x000107c6157c(in_stack_000010c0);
  func_0x000107c6157c(in_stack_000010c8);
  func_0x000107c6157c(in_stack_000010d0);
  func_0x000107c6157c(in_stack_000010d8);
  func_0x000107c6157c(in_stack_000010e0);
  func_0x000107c6157c(in_stack_000010e8);
  func_0x000107c6157c(in_stack_000010f0);
  func_0x000107c6157c(in_stack_000010f8);
  func_0x000107c6157c(in_stack_00001100);
  func_0x000107c6157c(in_stack_00001108);
  func_0x000107c6157c(in_stack_00001110);
  func_0x000107c6157c(in_stack_00001118);
  func_0x000107c6157c(in_stack_00001120);
  func_0x000107c6157c(in_stack_00001128);
  func_0x000107c6157c(in_stack_00001130);
  func_0x000107c6157c(in_stack_00001138);
  func_0x000107c6157c(in_stack_00001140);
  func_0x000107c6157c(in_stack_00001148);
  func_0x000107c6157c(in_stack_00001150);
  func_0x000107c6157c(in_stack_00001158);
  func_0x000107c6157c(in_stack_00001160);
  func_0x000107c6157c(in_stack_00001168);
  func_0x000107c6157c(in_stack_00001170);
  func_0x000107c6157c(in_stack_00001178);
  func_0x000107c6157c(in_stack_00001180);
  func_0x000107c6157c(in_stack_00001188);
  func_0x000107c6157c(in_stack_00001190);
  func_0x000107c6157c(in_stack_00001198);
  func_0x000107c6157c(in_stack_000011a0);
  func_0x000107c6157c(in_stack_000011a8);
  func_0x000107c6157c(in_stack_000011b0);
  func_0x000107c6157c(in_stack_000011b8);
  func_0x000107c6157c(in_stack_000011c0);
  func_0x000107c6157c(in_stack_000011c8);
  func_0x000107c6157c(in_stack_000011d0);
  func_0x000107c6157c(in_stack_000011d8);
  func_0x000107c6157c(in_stack_000011e0);
  func_0x000107c6157c(in_stack_000011e8);
  func_0x000107c6157c(in_stack_000011f0);
  func_0x000107c6157c(in_stack_000011f8);
  func_0x000107c6157c(in_stack_00001200);
  func_0x000107c6157c(in_stack_00001208);
  func_0x000107c6157c(in_stack_00001210);
  func_0x000107c6157c(in_stack_00001218);
  func_0x000107c6157c(in_stack_00001220);
  func_0x000107c6157c(in_stack_00001228);
  func_0x000107c6157c(in_stack_00001230);
  func_0x000107c6157c(in_stack_00001238);
  func_0x000107c6157c(in_stack_00001240);
  func_0x000107c6157c(in_stack_00001248);
  func_0x000107c6157c(in_stack_00001250);
  func_0x000107c6157c(in_stack_00001258);
  func_0x000107c6157c(in_stack_00001260);
  func_0x000107c6157c(in_stack_00001268);
  func_0x000107c6157c(in_stack_00001270);
  func_0x000107c6157c(in_stack_00001278);
  func_0x000107c6157c(in_stack_00001280);
  func_0x000107c6157c(in_stack_00001288);
  func_0x000107c6157c(in_stack_00001290);
  func_0x000107c6157c(in_stack_00001298);
  func_0x000107c6157c(in_stack_000012a0);
  func_0x000107c6157c(in_stack_000012a8);
  func_0x000107c6157c(in_stack_000012b0);
  func_0x000107c6157c(in_stack_000012b8);
  func_0x000107c6157c(in_stack_000012c0);
  func_0x000107c6157c(in_stack_000012c8);
  func_0x000107c6157c(in_stack_000012d0);
  func_0x000107c6157c(in_stack_000012d8);
  func_0x000107c6157c(in_stack_000012e0);
  func_0x000107c6157c(in_stack_000012e8);
  func_0x000107c6157c(in_stack_000012f0);
  func_0x000107c6157c(in_stack_000012f8);
  func_0x000107c6157c(in_stack_00001300);
  func_0x000107c6157c(in_stack_00001308);
  func_0x000107c6157c(in_stack_00001310);
  func_0x000107c6157c(in_stack_00001318);
  func_0x000107c6157c(in_stack_00001320);
  func_0x000107c6157c(in_stack_00001328);
  func_0x000107c6157c(in_stack_00001330);
  func_0x000107c6157c(in_stack_00001338);
  func_0x000107c6157c(in_stack_00001340);
  func_0x000107c6157c(in_stack_00001348);
  func_0x000107c6157c(in_stack_00001350);
  func_0x000107c6157c(in_stack_00001358);
  func_0x000107c6157c(in_stack_00001360);
  func_0x000107c6157c(in_stack_00001368);
  func_0x000107c6157c(in_stack_00001370);
  func_0x000107c6157c(in_stack_00001378);
  func_0x000107c6157c(in_stack_00001380);
  func_0x000107c6157c(in_stack_00001388);
  func_0x000107c6157c(in_stack_00001390);
  func_0x000107c6157c(in_stack_00001398);
  func_0x000107c6157c(in_stack_000013a0);
  func_0x000107c6157c(in_stack_000013a8);
  func_0x000107c6157c(in_stack_000013b0);
  func_0x000107c6157c(in_stack_000013b8);
  func_0x000107c6157c(in_stack_000013c0);
  func_0x000107c6157c(in_stack_000013c8);
  func_0x000107c6157c(in_stack_000013d0);
  func_0x000107c6157c(in_stack_000013d8);
  func_0x000107c6157c(in_stack_000013e0);
  func_0x000107c6157c(in_stack_000013e8);
  func_0x000107c6157c(in_stack_000013f0);
  func_0x000107c6157c(in_stack_000013f8);
  func_0x000107c6157c(in_stack_00001400);
  func_0x000107c6157c(in_stack_00001408);
  func_0x000107c6157c(in_stack_00001410);
  func_0x000107c6157c(in_stack_00001418);
  func_0x000107c6157c(in_stack_00001420);
  func_0x000107c6157c(in_stack_00001428);
  func_0x000107c6157c(in_stack_00001430);
  func_0x000107c6157c(in_stack_00001438);
  func_0x000107c6157c(in_stack_00001440);
  func_0x000107c6157c(in_stack_00001448);
  func_0x000107c6157c(in_stack_00001450);
  func_0x000107c6157c(in_stack_00001458);
  func_0x000107c6157c(in_stack_00001460);
  func_0x000107c6157c(in_stack_00001468);
  func_0x000107c6157c(in_stack_00001470);
  func_0x000107c6157c(in_stack_00001478);
  func_0x000107c6157c(in_stack_00001480);
  func_0x000107c6157c(in_stack_00001488);
  func_0x000107c6157c(in_stack_00001490);
  func_0x000107c6157c(in_stack_00001498);
  func_0x000107c6157c(in_stack_000014a0);
  func_0x000107c6157c(in_stack_000014a8);
  func_0x000107c6157c(in_stack_000014b0);
  func_0x000107c6157c(in_stack_000014b8);
  func_0x000107c6157c(in_stack_000014c0);
  func_0x000107c6157c(in_stack_000014c8);
  func_0x000107c6157c(in_stack_000014d0);
  func_0x000107c6157c(in_stack_000014d8);
  func_0x000107c6157c(in_stack_000014e0);
  func_0x000107c6157c(in_stack_000014e8);
  func_0x000107c6157c(in_stack_000014f0);
  func_0x000107c6157c(in_stack_000014f8);
  func_0x000107c6157c(in_stack_00001500);
  func_0x000107c6157c(in_stack_00001508);
  func_0x000107c6157c(in_stack_00001510);
  func_0x000107c6157c(in_stack_00001518);
  func_0x000107c6157c(in_stack_00001520);
  func_0x000107c6157c(in_stack_00001528);
  func_0x000107c6157c(in_stack_00001530);
  func_0x000107c6157c(in_stack_00001538);
  func_0x000107c6157c(in_stack_00001540);
  func_0x000107c6157c(in_stack_00001548);
  func_0x000107c6157c(in_stack_00001550);
  func_0x000107c6157c(in_stack_00001558);
  func_0x000107c6157c(in_stack_00001560);
  func_0x000107c6157c(in_stack_00001568);
  func_0x000107c6157c(in_stack_00001570);
  func_0x000107c6157c(in_stack_00001578);
  func_0x000107c6157c(in_stack_00001580);
  func_0x000107c6157c(in_stack_00001588);
  func_0x000107c6157c(in_stack_00001590);
  func_0x000107c6157c(in_stack_00001598);
  func_0x000107c6157c(in_stack_000015a0);
  func_0x000107c6157c(in_stack_000015a8);
  func_0x000107c6157c(in_stack_000015b0);
  func_0x000107c6157c(in_stack_000015b8);
  func_0x000107c6157c(in_stack_000015c0);
  func_0x000107c6157c(in_stack_000015c8);
  func_0x000107c6157c(in_stack_000015d0);
  func_0x000107c6157c(in_stack_000015d8);
  func_0x000107c6157c(in_stack_000015e0);
  func_0x000107c6157c(in_stack_000015e8);
  func_0x000107c6157c(in_stack_000015f0);
  func_0x000107c6157c(in_stack_000015f8);
  func_0x000107c6157c(in_stack_00001600);
  func_0x000107c6157c(in_stack_00001608);
  func_0x000107c6157c(in_stack_00001610);
  func_0x000107c6157c(in_stack_00001618);
  func_0x000107c6157c(in_stack_00001620);
  func_0x000107c6157c(in_stack_00001628);
  func_0x000107c6157c(in_stack_00001630);
  func_0x000107c6157c(in_stack_00001638);
  func_0x000107c6157c(in_stack_00001640);
  func_0x000107c6157c(in_stack_00001648);
  func_0x000107c6157c(in_stack_00001650);
  func_0x000107c6157c(in_stack_00001658);
  func_0x000107c6157c(in_stack_00001660);
  func_0x000107c6157c(in_stack_00001668);
  func_0x000107c6157c(in_stack_00001670);
  func_0x000107c6157c(in_stack_00001678);
  func_0x000107c6157c(in_stack_00001680);
  func_0x000107c6157c(in_stack_00001688);
  func_0x000107c6157c(in_stack_00001690);
  func_0x000107c6157c(in_stack_00001698);
  func_0x000107c6157c(in_stack_000016a0);
  func_0x000107c6157c(in_stack_000016a8);
  func_0x000107c6157c(in_stack_000016b0);
  func_0x000107c6157c(in_stack_000016b8);
  func_0x000107c6157c(in_stack_000016c0);
  func_0x000107c6157c(in_stack_000016c8);
  func_0x000107c6157c(in_stack_000016d0);
  func_0x000107c6157c(in_stack_000016d8);
  func_0x000107c6157c(in_stack_000016e0);
  func_0x000107c6157c(in_stack_000016e8);
  func_0x000107c6157c(in_stack_000016f0);
  func_0x000107c6157c(in_stack_000016f8);
  func_0x000107c6157c(in_stack_00001700);
  func_0x000107c6157c(in_stack_00001708);
  func_0x000107c6157c(in_stack_00001710);
  func_0x000107c6157c(in_stack_00001718);
  func_0x000107c6157c(in_stack_00001720);
  func_0x000107c6157c(in_stack_00001728);
  func_0x000107c6157c(in_stack_00001730);
  func_0x000107c6157c(in_stack_00001738);
  func_0x000107c6157c(in_stack_00001740);
  func_0x000107c6157c(in_stack_00001748);
  func_0x000107c6157c(in_stack_00001750);
  func_0x000107c6157c(in_stack_00001758);
  func_0x000107c6157c(in_stack_00001760);
  func_0x000107c6157c(in_stack_00001768);
  func_0x000107c6157c(in_stack_00001770);
  func_0x000107c6157c(in_stack_00001778);
  func_0x000107c6157c(in_stack_00001780);
  func_0x000107c6157c(in_stack_00001788);
  func_0x000107c6157c(in_stack_00001790);
  func_0x000107c6157c(in_stack_00001798);
  func_0x000107c6157c(in_stack_000017a0);
  func_0x000107c6157c(in_stack_000017a8);
  func_0x000107c6157c(in_stack_000017b0);
  func_0x000107c6157c(in_stack_000017b8);
  func_0x000107c6157c(in_stack_000017c0);
  func_0x000107c6157c(in_stack_000017c8);
  func_0x000107c6157c(in_stack_000017d0);
  func_0x000107c6157c(in_stack_000017d8);
  func_0x000107c6157c(in_stack_000017e0);
  func_0x000107c6157c(in_stack_000017e8);
  func_0x000107c6157c(in_stack_000017f0);
  func_0x000107c6157c(in_stack_000017f8);
  func_0x000107c6157c(in_stack_00001800);
  func_0x000107c6157c(in_stack_00001808);
  func_0x000107c6157c(in_stack_00001810);
  func_0x000107c6157c(in_stack_00001818);
  func_0x000107c6157c(in_stack_00001820);
  func_0x000107c6157c(in_stack_00001828);
  func_0x000107c6157c(in_stack_00001830);
  func_0x000107c6157c(in_stack_00001838);
  func_0x000107c6157c(in_stack_00001840);
  func_0x000107c6157c(in_stack_00001848);
  func_0x000107c6157c(in_stack_00001850);
  func_0x000107c6157c(in_stack_00001858);
  func_0x000107c6157c(in_stack_00001860);
  func_0x000107c6157c(in_stack_00001868);
  func_0x000107c6157c(in_stack_00001870);
  func_0x000107c6157c(in_stack_00001878);
  func_0x000107c6157c(in_stack_00001880);
  func_0x000107c6157c(in_stack_00001888);
  func_0x000107c6157c(in_stack_00001890);
  func_0x000107c6157c(in_stack_00001898);
  func_0x000107c6157c(in_stack_000018a0);
  func_0x000107c6157c(in_stack_000018a8);
  func_0x000107c6157c(in_stack_000018b0);
  func_0x000107c6157c(in_stack_000018b8);
  func_0x000107c6157c(in_stack_000018c0);
  func_0x000107c6157c(in_stack_000018c8);
  func_0x000107c6157c(in_stack_000018d0);
  func_0x000107c6157c(in_stack_000018d8);
  func_0x000107c6157c(in_stack_000018e0);
  func_0x000107c6157c(in_stack_000018e8);
  func_0x000107c6157c(in_stack_000018f0);
  func_0x000107c6157c(in_stack_000018f8);
  func_0x000107c6157c(in_stack_00001900);
  func_0x000107c6157c(in_stack_00001908);
  func_0x000107c6157c(in_stack_00001910);
  func_0x000107c6157c(in_stack_00001918);
  func_0x000107c6157c(in_stack_00001920);
  func_0x000107c6157c(in_stack_00001928);
  func_0x000107c6157c(in_stack_00001930);
  func_0x000107c6157c(in_stack_00001938);
  func_0x000107c6157c(in_stack_00001940);
  func_0x000107c6157c(in_stack_00001948);
  func_0x000107c6157c(in_stack_00001950);
  func_0x000107c6157c(in_stack_00001958);
  func_0x000107c6157c(in_stack_00001960);
  func_0x000107c6157c(in_stack_00001968);
  func_0x000107c6157c(in_stack_00001970);
  func_0x000107c6157c(in_stack_00001978);
  func_0x000107c6157c(in_stack_00001980);
  func_0x000107c6157c(in_stack_00001988);
  func_0x000107c6157c(in_stack_00001990);
  FUN_1000285a8(0x112e489c0,&UNK_10da3f6f0);
  func_0x000107c613fc();
  pcVar2 = FUN_1002fbbb0;
  FUN_1000841f8(FUN_1002fbbb0,puVar1);
  FUN_100084214(&UNK_10da3f6c0,0x2c,2);
  *extraout_x8 = pcVar2;
  return;
}



/* Entry: 1002f9e04; end: 1002f9e07;  */

void FUN_1002f9e04(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x278));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x280));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x288));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x290));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x298));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x300));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x308));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x310));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x318));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 800));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x328));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x330));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x338));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x340));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x348));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x350));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x358));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x360));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x368));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x370));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x378));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x380));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x388));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x390));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x398));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 1000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x408));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x410));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x418));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x420));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x428));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x430));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x438));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x440));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x448));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x450));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x458));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x460));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x468));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x470));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x478));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x480));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x488));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x490));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x498));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x500));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x508));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x510));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x518));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x520));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x528));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x530));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x538));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x540));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x548));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x550));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x558));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x560));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x568));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x570));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x578));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x580));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x588));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x590));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x598));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x608));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x610));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x618));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x620));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x628));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x630));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x638));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x640));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x648));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x650));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x658));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x660));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x668));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x670));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x678));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x680));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x688));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x690));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x698));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x700));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x708));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x710));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x718));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x720));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x728));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x730));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x738));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x740));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x748));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x750));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x758));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x760));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x768));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x770));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x778));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x780));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x788));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x790));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x798));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 2000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x800));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x808));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x810));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x818));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x820));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x828));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x830));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x838));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x840));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x848));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x850));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x858));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x860));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x868));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x870));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x878));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x880));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x888));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x890));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x898));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x900));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x908));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x910));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x918));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x920));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x928));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x930));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x938));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x940));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x948));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x950));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x958));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x960));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x968));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x970));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x978));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x980));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x988));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x990));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x998));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa00));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa08));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xaa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xaa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xab0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xab8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xac0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xac8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xad0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xad8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xae0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xae8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xaf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xaf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb00));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb08));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xba0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xba8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 3000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbc8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc00));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc08));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xca0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xca8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcc8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xce0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xce8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd00));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd08));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xda0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xda8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdc8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xde0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xde8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe00));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe08));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xea0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xea8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xeb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xeb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xec0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xec8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xed0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xed8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xee0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xee8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xef0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xef8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf00));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf08));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 4000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xfa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xfb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xfb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xfc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xfc8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xfd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xfd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xfe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xfe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xff0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xff8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1008));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1010));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1018));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1020));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1028));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1030));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1038));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1040));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1048));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1050));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1058));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1060));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1068));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1070));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1078));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1080));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1088));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1090));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1098));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1190));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x11a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x11a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x11b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x11b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x11c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x11c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x11d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x11d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x11e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x11e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x11f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x11f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1248));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1250));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1258));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1260));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1268));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1270));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1278));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1280));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1288));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1290));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1298));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x12a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x12a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x12b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x12b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x12c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x12c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x12d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x12d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x12e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x12e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x12f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x12f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1300));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1308));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1310));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1318));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1320));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1328));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1330));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1338));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1340));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1348));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1350));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1358));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1360));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1368));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1370));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1378));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1380));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 5000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1390));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1398));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x13a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x13a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x13b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x13b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x13c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x13c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x13d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x13d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x13e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x13e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x13f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x13f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1408));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1410));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1418));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1420));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1428));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1430));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1438));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1440));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1448));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1450));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1458));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1460));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1468));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1470));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1478));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1480));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1488));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1490));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1498));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x14a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x14a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x14b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x14b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x14c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x14c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x14d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x14d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x14e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x14e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x14f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x14f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1500));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1508));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1510));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1518));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1520));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1528));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1530));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1538));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1540));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1548));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1550));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1558));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1560));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1568));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1570));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1578));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1580));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1588));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1590));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1598));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x15a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x15a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x15b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x15b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x15c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x15c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x15d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x15d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x15e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x15e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x15f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x15f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1608));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1610));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1618));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1620));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1628));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1630));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1638));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1640));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1648));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1650));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1658));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1660));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1668));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1670));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1678));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1680));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1688));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1690));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1698));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x16a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x16a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x16b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x16b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x16c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x16c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x16d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x16d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x16e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x16e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x16f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x16f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1700));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1708));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1710));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1718));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1720));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1728));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1730));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1738));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1740));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1748));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1750));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1758));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1760));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1768));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 6000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1778));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1780));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1788));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1790));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1798));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x17a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x17a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x17b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x17b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x17c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x17c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x17d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x17d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x17e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x17e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x17f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x17f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1800));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1808));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1810));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1818));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1820));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1828));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1830));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1838));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1840));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1848));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1850));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1858));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1860));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1868));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1870));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1878));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1880));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1888));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1890));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1898));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1900));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1908));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1910));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1918));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1920));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1928));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1930));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1938));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1940));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1948));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1950));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1958));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1960));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1968));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1970));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1978));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1980));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1988));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1990));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1998));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x19a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x19a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x19b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x19b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x19c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x19c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x19d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x19d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x19e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002f9e08; end: 1002f9e1f; -[SCBlizzardRequestUrlProvider _getSpectrumUrl:] */

void FUN_1002f9e08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc3470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSURL_1126ae598,PTR_s_URLWithString__11254e6b8,
             &PTR____CFConstantStringClassReference_110e6e018);
  return;
}



/* Entry: 1002f9e20; end: 1002fb897;  */

void FUN_1002f9e20(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x278));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x280));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x288));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x290));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x298));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x300));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x308));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x310));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x318));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 800));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x328));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x330));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x338));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x340));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x348));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x350));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x358));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x360));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x368));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x370));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x378));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x380));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x388));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x390));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x398));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 1000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x408));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x410));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x418));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x420));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x428));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x430));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x438));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x440));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x448));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x450));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x458));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x460));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x468));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x470));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x478));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x480));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x488));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x490));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x498));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x500));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x508));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x510));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x518));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x520));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x528));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x530));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x538));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x540));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x548));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x550));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x558));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x560));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x568));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x570));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x578));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x580));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x588));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x590));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x598));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x608));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x610));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x618));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x620));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x628));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x630));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x638));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x640));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x648));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x650));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x658));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x660));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x668));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x670));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x678));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x680));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x688));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x690));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x698));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x700));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x708));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x710));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x718));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x720));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x728));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x730));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x738));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x740));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x748));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x750));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x758));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x760));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x768));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x770));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x778));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x780));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x788));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x790));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x798));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 2000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x800));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x808));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x810));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x818));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x820));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x828));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x830));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x838));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x840));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x848));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x850));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x858));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x860));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x868));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x870));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x878));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x880));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x888));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x890));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x898));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x900));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x908));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x910));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x918));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x920));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x928));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x930));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x938));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x940));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x948));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x950));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x958));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x960));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x968));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x970));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x978));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x980));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x988));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x990));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x998));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa00));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa08));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xaa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xaa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xab0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xab8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xac0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xac8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xad0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xad8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xae0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xae8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xaf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xaf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb00));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb08));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xba0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xba8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 3000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbc8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc00));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc08));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xca0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xca8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcc8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xce0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xce8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd00));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd08));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xda0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xda8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdc8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xde0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xde8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe00));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe08));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xea0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xea8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xeb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xeb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xec0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xec8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xed0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xed8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xee0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xee8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xef0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xef8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf00));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf08));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 4000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xfa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xfb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xfb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xfc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xfc8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xfd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xfd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xfe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xfe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xff0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xff8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1008));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1010));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1018));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1020));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1028));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1030));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1038));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1040));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1048));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1050));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1058));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1060));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1068));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1070));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1078));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1080));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1088));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1090));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1098));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1190));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x11a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x11a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x11b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x11b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x11c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x11c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x11d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x11d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x11e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x11e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x11f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x11f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1248));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1250));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1258));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1260));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1268));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1270));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1278));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1280));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1288));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1290));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1298));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x12a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x12a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x12b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x12b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x12c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x12c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x12d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x12d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x12e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x12e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x12f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x12f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1300));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1308));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1310));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1318));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1320));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1328));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1330));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1338));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1340));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1348));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1350));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1358));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1360));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1368));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1370));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1378));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1380));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 5000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1390));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1398));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x13a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x13a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x13b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x13b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x13c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x13c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x13d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x13d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x13e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x13e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x13f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x13f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1408));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1410));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1418));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1420));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1428));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1430));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1438));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1440));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1448));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1450));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1458));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1460));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1468));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1470));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1478));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1480));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1488));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1490));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1498));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x14a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x14a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x14b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x14b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x14c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x14c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x14d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x14d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x14e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x14e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x14f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x14f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1500));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1508));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1510));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1518));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1520));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1528));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1530));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1538));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1540));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1548));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1550));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1558));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1560));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1568));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1570));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1578));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1580));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1588));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1590));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1598));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x15a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x15a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x15b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x15b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x15c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x15c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x15d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x15d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x15e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x15e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x15f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x15f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1608));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1610));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1618));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1620));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1628));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1630));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1638));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1640));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1648));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1650));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1658));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1660));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1668));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1670));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1678));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1680));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1688));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1690));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1698));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x16a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x16a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x16b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x16b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x16c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x16c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x16d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x16d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x16e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x16e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x16f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x16f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1700));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1708));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1710));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1718));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1720));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1728));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1730));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1738));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1740));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1748));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1750));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1758));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1760));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1768));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 6000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1778));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1780));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1788));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1790));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1798));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x17a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x17a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x17b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x17b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x17c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x17c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x17d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x17d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x17e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x17e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x17f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x17f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1800));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1808));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1810));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1818));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1820));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1828));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1830));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1838));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1840));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1848));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1850));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1858));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1860));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1868));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1870));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1878));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1880));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1888));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1890));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1898));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1900));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1908));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1910));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1918));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1920));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1928));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1930));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1938));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1940));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1948));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1950));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1958));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1960));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1968));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1970));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1978));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1980));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1988));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1990));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1998));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x19a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x19a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x19b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x19b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x19c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x19c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x19d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x19d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x19e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002fb898; end: 1002fb8bf; -[_TtC21AuthenticationFeature25ActiveUserSessionWorkflow beginWorkflow] */

void FUN_1002fb898(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1002fb8c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1002fb8c0; end: 1002fbb47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002fb8c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  
  puVar5 = PTR_PTR_1126aec70;
  func_0x000107c61168();
  func_0x000107c5a9f0();
  func_0x000107c61180();
  if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1002fbb48);
    (*pcVar3)();
  }
  func_0x000107c560c0();
  func_0x000107c61170(puVar5);
  lVar2 = _DAT_113083f80;
  lVar12 = *(long *)(unaff_x20 + _DAT_112e013b8);
  puVar5 = *(undefined **)(lVar12 + _DAT_113083f80);
  func_0x000107c49e24();
  if ((int)puVar5 != 0) {
    FUN_100083b20(&puStack_70);
    puVar5 = puStack_70;
    func_0x000107c4eb98();
    func_0x000107c61180();
    func_0x000107c61170(puStack_70);
    puVar6 = puVar5;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    if (puVar6 != (undefined *)0x0) {
      func_0x000107c4be24(puVar6,param_2,1);
      func_0x000107c4be20(puVar6,param_2,1,0xffffffffffffffff);
      func_0x000107c4bd50(puVar6,param_2,4);
      func_0x000107c615e8(puVar6);
      puVar5 = puVar6;
    }
  }
  lVar11 = *(long *)(unaff_x20 + _DAT_112e013c0);
  FUN_1000b9aa4();
  puVar6 = PTR_PTR_1126af890;
  func_0x000107c610f8();
  func_0x000107c495d8();
  func_0x000107c61170(puVar5);
  FUN_1002d8860(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  puVar7 = puVar6;
  func_0x0001002fbb50();
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112e013a0);
  *(undefined **)(unaff_x20 + _DAT_112e013a0) = puVar7;
  func_0x000107c61174();
  func_0x000107c61170(uVar9);
  puStack_70 = puVar7;
  FUN_10008a7c8(&uStack_58,&puStack_70);
  FUN_100083b20(&puStack_70);
  func_0x000107c61574(uStack_58);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112e013a8);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e013a8);
  puVar1[1] = uStack_68;
  *puVar1 = puStack_70;
  func_0x000107c615e8(uVar9);
  FUN_100083b20(&puStack_70);
  puVar5 = puStack_70;
  func_0x000107c42c1c(puStack_70,param_2,puVar7);
  func_0x000107c61170(puVar5);
  uVar8 = *(ulong *)(lVar12 + lVar2);
  func_0x000107c49e14();
  if ((uVar8 & 1) == 0) {
    iVar4 = (int)*(undefined8 *)(lVar12 + lVar2);
    func_0x000107c49e24();
    if (iVar4 == 0) goto LAB_1002fbb18;
  }
  func_0x000107c4acf4();
  func_0x000107c61180();
  if (lVar11 != 0) {
    uVar9 = *(undefined8 *)(lVar12 + _DAT_113083f78);
    uVar10 = *(undefined8 *)(lVar12 + lVar2);
    func_0x000107c61174(uVar9);
    func_0x000107c49e24(uVar10);
    func_0x000107c3e468(lVar11,param_2,uVar9,uVar10);
    func_0x000107c615e8(lVar11);
    func_0x000107c61170(uVar9);
  }
LAB_1002fbb18:
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  return;
}



/* Entry: 1002fbb48; end: 1002fbb5b; -[SCAppSession setLoggedIn:] */

void FUN_1002fbb48(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x31) = param_3;
  return;
}



/* Entry: 1002fbb5c; end: 1002fbbaf;  */

void FUN_1002fbb5c(undefined8 param_1,long *param_2)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + *param_2) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1002fbbb0; end: 1002fedaf;  */

void FUN_1002fbbb0(undefined8 param_1)

{
  undefined8 extraout_x8;
  long unaff_x20;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x0001002fef24(extraout_x8,param_1,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                      *(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
                      *(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70),
                      *(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80),
                      *(undefined8 *)(unaff_x20 + 0x88),*(undefined8 *)(unaff_x20 + 0x90),
                      *(undefined8 *)(unaff_x20 + 0x98),*(undefined8 *)(unaff_x20 + 0xa0),
                      *(undefined8 *)(unaff_x20 + 0xa8),*(undefined8 *)(unaff_x20 + 0xb0),
                      *(undefined8 *)(unaff_x20 + 0xb8),*(undefined8 *)(unaff_x20 + 0xc0),
                      *(undefined8 *)(unaff_x20 + 200),*(undefined8 *)(unaff_x20 + 0xd0),
                      *(undefined8 *)(unaff_x20 + 0xd8),*(undefined8 *)(unaff_x20 + 0xe0),
                      *(undefined8 *)(unaff_x20 + 0xe8),*(undefined8 *)(unaff_x20 + 0xf0),
                      *(undefined8 *)(unaff_x20 + 0xf8),*(undefined8 *)(unaff_x20 + 0x100),
                      *(undefined8 *)(unaff_x20 + 0x108),*(undefined8 *)(unaff_x20 + 0x110),
                      *(undefined8 *)(unaff_x20 + 0x118),*(undefined8 *)(unaff_x20 + 0x120),
                      *(undefined8 *)(unaff_x20 + 0x128),*(undefined8 *)(unaff_x20 + 0x130),
                      *(undefined8 *)(unaff_x20 + 0x138),*(undefined8 *)(unaff_x20 + 0x140),
                      *(undefined8 *)(unaff_x20 + 0x148),*(undefined8 *)(unaff_x20 + 0x150),
                      *(undefined8 *)(unaff_x20 + 0x158),*(undefined8 *)(unaff_x20 + 0x160),
                      *(undefined8 *)(unaff_x20 + 0x168),*(undefined8 *)(unaff_x20 + 0x170),
                      *(undefined8 *)(unaff_x20 + 0x178),*(undefined8 *)(unaff_x20 + 0x180),
                      *(undefined8 *)(unaff_x20 + 0x188),*(undefined8 *)(unaff_x20 + 400),
                      *(undefined8 *)(unaff_x20 + 0x198),*(undefined8 *)(unaff_x20 + 0x1a0),
                      *(undefined8 *)(unaff_x20 + 0x1a8),*(undefined8 *)(unaff_x20 + 0x1b0),
                      *(undefined8 *)(unaff_x20 + 0x1b8),*(undefined8 *)(unaff_x20 + 0x1c0),
                      *(undefined8 *)(unaff_x20 + 0x1c8),*(undefined8 *)(unaff_x20 + 0x1d0),
                      *(undefined8 *)(unaff_x20 + 0x1d8),*(undefined8 *)(unaff_x20 + 0x1e0),
                      *(undefined8 *)(unaff_x20 + 0x1e8),*(undefined8 *)(unaff_x20 + 0x1f0),
                      *(undefined8 *)(unaff_x20 + 0x1f8),*(undefined8 *)(unaff_x20 + 0x200),
                      *(undefined8 *)(unaff_x20 + 0x208),*(undefined8 *)(unaff_x20 + 0x210),
                      *(undefined8 *)(unaff_x20 + 0x218),*(undefined8 *)(unaff_x20 + 0x220),
                      *(undefined8 *)(unaff_x20 + 0x228),*(undefined8 *)(unaff_x20 + 0x230));
  return;
}



/* Entry: 1002fedb0; end: 1002fedb7; -[SCBlizzardEventLoggerConstructorV2 eagerUploadStatusManager] */

undefined8 FUN_1002fedb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 1002fedb8; end: 1003211f3; -[SCBlizzardAllTiersFileQueue initWithFileRepository:configAdapter:grapheneRegistry:eagerUploadStatusManager:] */

undefined1 *
FUN_1002fedb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_68 = PTR_PTR_1126f4b40;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
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
    puVar3 = PTR_PTR_1126d0380;
    func_0x000107c610f4();
    func_0x000107c43464(param_4);
    func_0x000107c5b764(param_4);
    uVar2 = param_4;
    func_0x000107c4bfec(param_4);
    func_0x000107c61180();
    func_0x000107c40808();
    func_0x000107c48be8();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003211f4; end: 10032127f;  */

void FUN_1003211f4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100321280; end: 100321287;  */

void FUN_100321280(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100321288; end: 100321693;  */

void FUN_100321288(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x278));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x280));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x288));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x290));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x298));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x300));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x308));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x310));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x318));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 800));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x328));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x330));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x338));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x340));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x348));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x350));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x358));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x360));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x368));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x370));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x378));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x380));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x388));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x390));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x398));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 1000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100321694; end: 10032169b;  */

void FUN_100321694(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10032169c; end: 1003218d7;  */

void FUN_10032169c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003218d8; end: 10032192f;  */

void FUN_1003218d8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100321930; end: 100321937; -[SCBlizzardConfigAdapter fileTTLMs] */

undefined8 FUN_100321930(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100321938; end: 100321983;  */

void FUN_100321938(undefined8 param_1)

{
  FUN_1000285a8(0x112ecc7f8,&UNK_10daf0d80);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_1029034c0,param_1);
  return;
}



/* Entry: 100321984; end: 10032198b; -[SCBlizzardConfigAdapter spectrumFileTTLMs] */

undefined8 FUN_100321984(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10032198c; end: 1003219cf; -[SCBlizzardConfigAdapter loggerRegions] */

void FUN_10032198c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c400b4();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c3db60();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1003219d0; end: 1003219d7; -[SCBlizzardConfigAdapter configMap] */

undefined8 FUN_1003219d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1003219d8; end: 100321b93; -[SCBlizzardPrioritizedQueue initWithTTL:spectrumFileTTL:regionsCount:eagerUploadStatusManager:fileRepository:] */

undefined8 *
FUN_1003219d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_68 = PTR_PTR_1126f4b78;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c610fc();
    if (param_5 != 0) {
      uVar7 = 1;
      do {
        puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x000107c610fc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        lVar5 = 3;
        do {
          puVar4 = PTR_PTR_1126d0398;
          func_0x000107c610fc(PTR_PTR_1126d0398);
          func_0x000107c3d798(puVar3);
          func_0x000107c61170(puVar4);
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c61180();
        func_0x000107c56bcc(puVar2);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(puVar3);
        uVar7 = uVar7 + 1;
      } while (uVar7 <= param_5);
    }
    uVar6 = puVar1[4];
    puVar1[4] = puVar2;
    func_0x000107c61174(puVar2);
    func_0x000107c61170(uVar6);
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    puVar3 = PTR_PTR_1126aeea8;
    func_0x000107c610fc();
    uVar6 = puVar1[3];
    puVar1[3] = puVar3;
    func_0x000107c61170(uVar6);
    func_0x000107c61174(param_6);
    uVar6 = puVar1[5];
    puVar1[5] = param_6;
    func_0x000107c61170(uVar6);
    func_0x000107c61174(param_7);
    uVar6 = puVar1[6];
    puVar1[6] = param_7;
    func_0x000107c61170(uVar6);
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  return puVar1;
}



/* Entry: 100321b94; end: 100321c37; -[SCBlizzardDoublyLinkedList init] */

undefined1 * FUN_100321b94(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f4b50;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126d0388;
    func_0x000107c610f4();
    func_0x000107c4690c();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126d0388;
    func_0x000107c610f4();
    func_0x000107c4690c();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c56a8c(*(undefined8 *)((long)puVar1 + 8));
    func_0x000107c57760(*(undefined8 *)((long)puVar1 + 0x10));
    *(undefined8 *)((long)puVar1 + 0x18) = 0;
    *(undefined8 *)((long)puVar1 + 0x20) = 0;
    *(undefined8 *)((long)puVar1 + 0x28) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100321c38; end: 100321cc3; -[SCBlizzardDLLNode initWithFile:] */

undefined1 * FUN_100321c38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f4b48;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),0);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = 0;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100321cc4; end: 100321cf3; -[SCBlizzardDLLNode setNext:] */

void FUN_100321cc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100321cf4; end: 100321cff; -[SCBlizzardDLLNode setPrev:] */

void FUN_100321cf4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}


