/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102e8f11c; end: 102e8f17b; -[SCStoryScrubOverlayView setThumbnail:forSegmentAtIndex:] */

/* WARNING: Possible PIC construction at 0x000102e8f164: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e8f168) */

void FUN_102e8f11c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102e8d4a8(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102e8f17c; end: 102e8f237;  */

void FUN_102e8f17c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x000107c61168(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  dVar2 = 0.0;
  dVar3 = 0.0;
  func_0x000107c3e8b0(0,0,param_1,param_2,param_3);
  func_0x000107c61180();
  func_0x000107c3d618();
  func_0x000107c61170(puVar1);
  func_0x000107c5b078(param_5);
  func_0x000107c5b078(param_5);
  dVar2 = dVar2 / dVar3;
  dVar4 = param_1;
  dVar3 = param_1 / dVar2;
  if (param_1 / param_2 < dVar2) {
    dVar4 = param_2 * dVar2;
    dVar3 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((param_1 - dVar4) * 0.5,(param_2 - dVar3) * 0.5,param_5,PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 102e8f238; end: 102e8f267; -[SCStoryScrubOverlayView setThumbnailUnavailableForSegmentAtIndex:] */

void FUN_102e8f238(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_102e8d288(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e8f268; end: 102e8f28f; -[SCStoryScrubOverlayView updateHighlight] */

void FUN_102e8f268(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000102e8c90c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e8f290; end: 102e8f297;  */

void FUN_102e8f290(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0x3ff0000000000000,param_1,PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 102e8f298; end: 102e8f37b; -[SCStoryScrubOverlayView showAnimated] */

void FUN_102e8f298(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  func_0x000107c61174();
  func_0x000107c526c0(0);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar2 = &UNK_1105e0d58;
  func_0x000107c613fc(&UNK_1105e0d58,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  uStack_40 = 0x102e911bc;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1105e0d70;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c3dccc(0x3fc3333333333333,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 102e8f37c; end: 102e8f3a3; -[SCStoryScrubOverlayView hideAnimated] */

void FUN_102e8f37c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102e8d140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e8f3a4; end: 102e8f3ef; -[SCStoryScrubOverlayView collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e8f3a4(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f244d0;
  func_0x000107c61428(param_1 + _DAT_112f244d0,auStack_38,0,0);
  if (-1 < *(long *)(param_1 + lVar1)) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102e8f3f0);
  (*pcVar2)();
}



/* Entry: 102e8f3f0; end: 102e8f7db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_102e8f3f0(ulong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  long unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long alStack_80 [3];
  undefined1 auStack_68 [24];
  
  uVar2 = 0x626d756874;
  func_0x000107c5fadc(0x626d756874,0xe500000000000000);
  uVar12 = uVar2;
  func_0x000107c5efd4();
  func_0x000107c417e0();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar12);
  FUN_102e901e4();
  uVar3 = param_1;
  func_0x000107c61480(param_1,uVar12);
  uVar5 = param_1;
  if (uVar3 != 0) {
    uVar4 = uVar3;
    func_0x000107c5efec();
    lVar11 = _DAT_112f244b8;
    if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102e8f7dc);
      (*pcVar1)();
    }
    puVar10 = auStack_68;
    func_0x000107c61428(unaff_x20 + _DAT_112f244b8,puVar10,0x20,0);
    lVar11 = *(long *)(unaff_x20 + lVar11);
    if ((*(long *)(lVar11 + 0x10) == 0) ||
       (uVar5 = uVar4, FUN_102e8fd34(), ((ulong)puVar10 & 1) == 0)) {
      func_0x000107c614a8(auStack_68);
      lVar11 = _DAT_112f244c0;
      func_0x000107c61428(unaff_x20 + _DAT_112f244c0,auStack_68,0,0);
      uVar5 = uVar4;
      func_0x000101492fb4(uVar4,*(undefined8 *)(unaff_x20 + lVar11));
      lVar11 = _DAT_112f244f8;
      if ((uVar5 & 1) == 0) {
        func_0x000107c526c0(0,*(undefined8 *)(uVar3 + _DAT_112f24508));
        func_0x000107c550d8(*(undefined8 *)(uVar3 + _DAT_112f244f8));
        FUN_102e8e3e8();
      }
      else {
        uVar12 = *(undefined8 *)(uVar3 + _DAT_112f244f8);
        func_0x000107c4aba4(uVar12);
        func_0x000107c61180();
        uVar2 = 0x61704f65736c7570;
        func_0x000107c5fadc(0x61704f65736c7570,0xec00000079746963);
        func_0x000107c4fe90(uVar12);
        func_0x000107c61170(uVar12);
        func_0x000107c61170(uVar2);
        func_0x000107c550d8(*(undefined8 *)(uVar3 + lVar11));
        lVar11 = _DAT_112f24500;
        func_0x000107c550d8(*(undefined8 *)(uVar3 + _DAT_112f24500));
        alStack_80[0] = uVar4 + 1;
        uVar12 = *(undefined8 *)(uVar3 + lVar11);
        func_0x000107c61174(uVar12);
        puVar7 = PTR___sSuN_11034e220;
        puVar9 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
        func_0x000107c6057c(PTR___sSuN_11034e220,PTR___sSus23CustomStringConvertiblesWP_11034e240);
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar9);
        func_0x000107c59c6c(uVar12);
        func_0x000107c61170(uVar12);
        func_0x000107c61170(puVar7);
      }
    }
    else {
      uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar5 * 8);
      func_0x000107c614a8(auStack_68);
      lVar11 = _DAT_112f24508;
      uVar2 = *(undefined8 *)(uVar3 + _DAT_112f24508);
      func_0x000107c61174(uVar12);
      func_0x000107c55258(uVar2);
      func_0x000107c526c0(0x3ff0000000000000,*(undefined8 *)(uVar3 + lVar11));
      lVar11 = _DAT_112f244f8;
      uVar2 = *(undefined8 *)(uVar3 + _DAT_112f244f8);
      func_0x000107c4aba4(uVar2);
      func_0x000107c61180();
      uVar6 = 0x61704f65736c7570;
      func_0x000107c5fadc(0x61704f65736c7570,0xec00000079746963);
      func_0x000107c4fe90(uVar2);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar6);
      func_0x000107c550d8(*(undefined8 *)(uVar3 + lVar11));
      func_0x000107c61170(uVar12);
    }
    lVar11 = _DAT_112f244d8;
    func_0x000107c61428(unaff_x20 + _DAT_112f244d8,alStack_80,0,0);
    uVar5 = uVar3;
    if (uVar4 == *(ulong *)(unaff_x20 + lVar11)) {
      func_0x000107c61174(param_1);
      uVar4 = uVar3;
      func_0x000107c40510(uVar3);
      func_0x000107c61180();
      uVar8 = uVar4;
      func_0x000107c4aba4();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      func_0x000107c52e0c(0x4000000000000000,uVar8);
      func_0x000107c61170(uVar8);
      func_0x000107c40510(uVar3);
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      uVar4 = uVar3;
      func_0x000107c4aba4(uVar3);
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c5af88();
      func_0x000107c61180();
      puVar9 = puVar7;
      func_0x000107c3ab24();
      func_0x000107c61180();
      func_0x000107c61170(puVar7);
      func_0x000107c52df8(uVar4);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(puVar9);
    }
  }
  return uVar5;
}



/* Entry: 102e8f7dc; end: 102e8f8a3; -[SCStoryScrubOverlayView collectionView:cellForItemAtIndexPath:] */

void FUN_102e8f7dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5efdc(puVar3,param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  FUN_102e8f3f0(param_3,puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102e8f8a4; end: 102e8f8a7;  */

void FUN_102e8f8a4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102e8f8a8; end: 102e8f8db;  */

void FUN_102e8f8a8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102e8f8dc; end: 102e8faff; -[SCStoryScrubOverlayView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102e8f8f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e8f918: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e8f8fc) */
/* WARNING: Removing unreachable block (ram,0x000102e8f91c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e8f8dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f24490));
  return;
}



/* Entry: 102e8fb00; end: 102e8fd33;  */

ulong FUN_102e8fb00(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102e8fbe4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102e8fbe8);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000102e91154(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102e8fcbc);
  (*pcVar2)();
}



/* Entry: 102e8fd34; end: 102e8fd63;  */

void FUN_102e8fd34(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x28);
  func_0x000107c60688(uVar1,param_1);
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(long *)(*(long *)(unaff_x20 + 0x30) + uVar1 * 8) == param_1) {
      return;
    }
    uVar1 = uVar1 + 1 & ~uVar2;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 102e8fd64; end: 102e8fe03;  */

void FUN_102e8fd64(long param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(long *)(*(long *)(unaff_x20 + 0x30) + param_2 * 8) == param_1) {
      return;
    }
    param_2 = param_2 + 1 & ~uVar1;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 102e8fe04; end: 102e8ff63;  */

ulong FUN_102e8fe04(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102e8ff64);
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
  FUN_102e8ff64(uVar2,uVar4,param_5,param_6,param_7,param_8);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102e8ff60);
      (*pcVar1)();
    }
    FUN_102e8fff4(0,uVar2,uVar3 + 0x20,param_4,param_5,param_6);
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



/* Entry: 102e8ff64; end: 102e8fff3;  */

undefined *
FUN_102e8ff64(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    func_0x000102e8fcbc(param_3,param_4,param_5,param_6);
    func_0x000107c613fc();
    puVar1 = param_3;
    func_0x000107c610a4();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Entry: 102e8fff4; end: 102e9010f;  */

long FUN_102e8fff4(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102e9010c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102e90110);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x000102e91154(0,param_5,param_6);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      func_0x000102e91154(0,param_5,param_6);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102e90108);
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



/* Entry: 102e90110; end: 102e901e3;  */

undefined8 FUN_102e90110(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long *unaff_x20;
  long lVar5;
  
  lVar5 = *unaff_x20;
  uVar1 = *(ulong *)(lVar5 + 0x28);
  func_0x000107c60688();
  uVar4 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar5 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0) {
    do {
      if (*(long *)(*(long *)(lVar5 + 0x30) + uVar1 * 8) == param_2) {
        uVar2 = 0;
        goto LAB_102e901c8;
      }
      uVar1 = uVar1 + 1 & ~uVar4;
    } while ((*(ulong *)(lVar5 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  }
  lVar5 = *unaff_x20;
  func_0x000107c61558(lVar5);
  lVar3 = *unaff_x20;
  FUN_102e90204(param_2,uVar1,lVar5);
  *unaff_x20 = lVar3;
  uVar2 = 1;
LAB_102e901c8:
  *param_1 = param_2;
  return uVar2;
}



/* Entry: 102e901e4; end: 102e90203;  */

void FUN_102e901e4(void)

{
  func_0x000107c61168(&PTR_PTR_1128a9f50);
  return;
}



/* Entry: 102e90204; end: 102e9030b;  */

void FUN_102e90204(long param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long *unaff_x20;
  long lVar4;
  
  uVar3 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar3 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_3 & 1) == 0) {
      FUN_102e904fc();
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      FUN_102e9030c(uVar3 + 1);
    }
    else {
      FUN_102e9063c();
    }
    lVar4 = *unaff_x20;
    param_2 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c60688(param_2,param_1);
    uVar3 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    param_2 = param_2 & (uVar3 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar4 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0) {
      do {
        if (*(long *)(*(long *)(lVar4 + 0x30) + param_2 * 8) == param_1) {
          func_0x000107c60620(PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102e9030c);
          (*pcVar1)();
        }
        param_2 = param_2 + 1 & ~uVar3;
      } while ((*(ulong *)(lVar4 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
    }
  }
  lVar2 = *unaff_x20;
  lVar4 = lVar2 + (param_2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x38) = *(ulong *)(lVar4 + 0x38) | 1L << (param_2 & 0x3f);
  *(long *)(*(long *)(lVar2 + 0x30) + param_2 * 8) = param_1;
  if (!SCARRY8(*(long *)(lVar2 + 0x10),1)) {
    *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e902fc);
  (*pcVar1)();
}



/* Entry: 102e9030c; end: 102e904fb;  */

void FUN_102e9030c(long param_1)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  
  lVar11 = *unaff_x20;
  lVar1 = *(long *)(lVar11 + 0x18);
  if (*(long *)(lVar11 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar12 = 0x112da2fc8;
  func_0x0001000285a8(0x112da2fc8,&UNK_10db5f1c0);
  lVar4 = lVar11;
  func_0x000107c602e0(lVar11,lVar1,0,uVar12);
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_102e904cc:
    func_0x000107c61574(lVar11);
    *unaff_x20 = lVar4;
    return;
  }
  uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(lVar11 + 0x38);
  lVar1 = lVar4 + 0x38;
  lVar7 = 0;
  do {
    if (uVar14 == 0) {
      do {
        lVar13 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102e904f8);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar13) goto LAB_102e904cc;
        uVar14 = ((ulong *)(lVar11 + 0x38))[lVar13];
        lVar7 = lVar7 + 1;
      } while (uVar14 == 0);
      uVar6 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
    }
    else {
      uVar6 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
      lVar13 = lVar7;
    }
    uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x30) + (LZCOUNT(uVar6) | lVar13 << 6) * 8);
    uVar5 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c60688(uVar5,uVar12);
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102e904fc);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
        uVar5 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar5 == 0xffffffffffffffff);
      uVar5 = ~uVar5;
      uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar12;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar13;
  } while( true );
}



/* Entry: 102e904fc; end: 102e9063b;  */

void FUN_102e904fc(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  func_0x0001000285a8(0x112da2fc8,&UNK_10db5f1c0);
  lVar9 = *unaff_x20;
  lVar3 = lVar9;
  func_0x000107c602dc();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x38;
    uVar4 = (1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar3 != lVar9 || lVar1 + uVar4 * 8 <= lVar3 + 0x38U) {
      func_0x000107c610b8(lVar3 + 0x38U,lVar1,uVar4 << 3);
    }
    lVar5 = 0;
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(lVar9 + 0x38);
    do {
      lVar7 = lVar5;
      if (uVar4 == 0) {
        do {
          lVar5 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102e9063c);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_102e9061c;
          uVar4 = *(ulong *)(lVar1 + lVar5 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 * 0x40;
      }
      else {
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 << 6;
      }
      *(undefined8 *)(*(long *)(lVar3 + 0x30) + uVar8 * 8) =
           *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar8 * 8);
    } while( true );
  }
LAB_102e9061c:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar3;
  return;
}



/* Entry: 102e9063c; end: 102e9085f;  */

void FUN_102e9063c(long param_1)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  ulong *puVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  
  lVar13 = *unaff_x20;
  lVar1 = *(long *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar15 = 0x112da2fc8;
  func_0x0001000285a8(0x112da2fc8,&UNK_10db5f1c0);
  lVar4 = lVar13;
  func_0x000107c602e0(lVar13,lVar1,1,uVar15);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_102e9082c:
    func_0x000107c61574(lVar13);
    *unaff_x20 = lVar4;
    return;
  }
  puVar14 = (ulong *)(lVar13 + 0x38);
  bVar10 = *(byte *)(lVar13 + 0x20) & 0x3f;
  uVar9 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar12 = -1L << (uVar9 & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if (bVar10 < 6) {
    uVar17 = ~uVar12;
  }
  uVar17 = uVar17 & *puVar14;
  uVar9 = uVar9 + 0x3f >> 6;
  lVar1 = lVar4 + 0x38;
  lVar7 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar16 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102e9085c);
          (*pcVar3)();
        }
        if ((long)uVar9 <= lVar16) {
          if (bVar10 < 6) {
            *puVar14 = uVar12;
          }
          else {
            func_0x000107c60ee4(puVar14,uVar9 << 3);
          }
          *(undefined8 *)(lVar13 + 0x10) = 0;
          goto LAB_102e9082c;
        }
        uVar17 = puVar14[lVar16];
        lVar7 = lVar7 + 1;
      } while (uVar17 == 0);
      uVar6 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar6 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar16 = lVar7;
    }
    uVar15 = *(undefined8 *)(*(long *)(lVar13 + 0x30) + (LZCOUNT(uVar6) | lVar16 << 6) * 8);
    uVar5 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c60688(uVar5,uVar15);
    uVar11 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar11 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar11 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102e90860);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
        uVar5 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar5 == 0xffffffffffffffff);
      uVar5 = ~uVar5;
      uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar15;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar16;
  } while( true );
}



/* Entry: 102e90860; end: 102e90957;  */

void FUN_102e90860(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  FUN_102e8fd34();
  lVar5 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102e90924);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar4) {
    param_3 = param_3 & 1;
    FUN_102e90ab4(lVar4);
    uVar2 = param_2;
    FUN_102e8fd34();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      func_0x000107c60624(PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102e908f0);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_102e90958();
    lVar4 = *unaff_x20;
    goto joined_r0x000102e90938;
  }
  lVar4 = *unaff_x20;
joined_r0x000102e90938:
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar2 * 8);
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar2 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar6);
    return;
  }
  lVar5 = lVar4 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar2 & 0x3f);
  *(ulong *)(*(long *)(lVar4 + 0x30) + uVar2 * 8) = param_2;
  *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar2 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102e8ba74);
    (*pcVar1)();
  }
  *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
  return;
}



/* Entry: 102e90958; end: 102e90ab3;  */

void FUN_102e90958(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  
  func_0x0001000285a8(0x112f24430,&UNK_10db5f028);
  lVar9 = *unaff_x20;
  lVar4 = lVar9;
  func_0x000107c6048c();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x40;
    uVar6 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar9 || lVar1 + uVar6 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar6 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar7 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(lVar9 + 0x40);
    if (uVar6 == 0) goto LAB_102e90a34;
    do {
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      while( true ) {
        uVar8 = LZCOUNT(uVar8) | lVar10 << 6;
        uVar5 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar8 * 8) =
             *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar8 * 8) = uVar5;
        func_0x000107c61174();
        if (uVar6 != 0) break;
LAB_102e90a34:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102e90ab4);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_102e90a8c;
          uVar6 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar6 == 0);
        uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar6 = uVar6 - 1 & uVar6;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_102e90a8c:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 102e90ab4; end: 102e90d17;  */

void FUN_102e90ab4(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  ulong *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  
  lVar11 = *unaff_x20;
  lVar1 = *(long *)(lVar11 + 0x18);
  if (*(long *)(lVar11 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar13 = 0x112f24430;
  func_0x0001000285a8(0x112f24430,&UNK_10db5f028);
  lVar4 = lVar11;
  func_0x000107c60490(lVar11,lVar1,param_2,uVar13);
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_102e90ce4:
    func_0x000107c61574(lVar11);
    *unaff_x20 = lVar4;
    return;
  }
  puVar12 = (ulong *)(lVar11 + 0x40);
  uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar16 = uVar16 & *puVar12;
  lVar1 = lVar4 + 0x40;
  lVar7 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar15 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102e90d14);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar15) {
          if ((param_2 & 1) != 0) {
            uVar16 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
            if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
              *puVar12 = -1L << (uVar16 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar12,uVar16 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar11 + 0x10) = 0;
          }
          goto LAB_102e90ce4;
        }
        uVar16 = puVar12[lVar15];
        lVar7 = lVar7 + 1;
      } while (uVar16 == 0);
      uVar6 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar6 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar15 = lVar7;
    }
    uVar6 = LZCOUNT(uVar6) | lVar15 << 6;
    uVar14 = *(undefined8 *)(*(long *)(lVar11 + 0x30) + uVar6 * 8);
    uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar6 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61174(uVar13);
    }
    uVar5 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c60688(uVar5,uVar14);
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102e90d18);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
        uVar5 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar5 == 0xffffffffffffffff);
      uVar5 = ~uVar5;
      uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar14;
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar6 * 8) = uVar13;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar15;
  } while( true );
}



/* Entry: 102e90d18; end: 102e90f57;  */

/* WARNING: Possible PIC construction at 0x000102e90e88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e90e8c) */
/* WARNING: Removing unreachable block (ram,0x000102e90f54) */
/* WARNING: Removing unreachable block (ram,0x000102e90f04) */

void FUN_102e90d18(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  dVar4 = param_1;
  dVar5 = param_2;
  func_0x000107c5b078();
  if ((0.0 < dVar4) && (func_0x000107c5b078(param_4), 0.0 < dVar5)) {
    uVar1 = 0;
    func_0x000102e91154(0,0x112daaf08,&PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00);
    func_0x000107c614e8();
    func_0x000107c415a4();
    func_0x000107c61180();
    func_0x000107c56f90();
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c4c194();
    func_0x000107c61180();
    func_0x000107c51820();
    func_0x000107c61170(puVar2);
    func_0x000107c58bfc(dVar4,uVar1);
    func_0x000107c610f8(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
    func_0x000107c486fc(param_1,param_2);
    puVar2 = &UNK_1105e0da8;
    func_0x000107c613fc(&UNK_1105e0da8,0x30,7);
    *(double *)(puVar2 + 0x10) = param_1;
    *(double *)(puVar2 + 0x18) = param_2;
    *(undefined8 *)(puVar2 + 0x20) = param_3;
    *(undefined8 *)(puVar2 + 0x28) = param_4;
    puVar3 = &UNK_1105e0dd0;
    func_0x000107c613fc(&UNK_1105e0dd0,0x20,7);
    *(code **)(puVar3 + 0x10) = FUN_102e91124;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    uStack_80 = 0x102e91134;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_100f9148c;
    puStack_88 = &UNK_1105e0de8;
    puStack_78 = puVar3;
    func_0x000107c60bc4(&puStack_a0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_4);
  return;
}



/* Entry: 102e90f58; end: 102e90f77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e90f58(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f24508),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 102e90f78; end: 102e90f97;  */

void FUN_102e90f78(void)

{
  func_0x000107c61168(&PTR_PTR_1128a9e90);
  return;
}



/* Entry: 102e90f98; end: 102e90f9b;  */

void FUN_102e90f98(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f24510 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db5f098;
  func_0x000107c61520(&UNK_10db5f098,&UNK_1105e0d38);
  puRam0000000112f24510 = puVar1;
  return;
}



/* Entry: 102e90f9c; end: 102e90fdb;  */

void FUN_102e90f9c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f24510 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db5f098;
  func_0x000107c61520(&UNK_10db5f098,&UNK_1105e0d38);
  puRam0000000112f24510 = puVar1;
  return;
}



/* Entry: 102e90fdc; end: 102e90feb;  */

undefined1  [16] FUN_102e90fdc(void)

{
  return ZEXT816(0x1105e0d38);
}



/* Entry: 102e90fec; end: 102e9100b;  */

void FUN_102e90fec(void)

{
  func_0x000107c61168(&PTR_PTR_1128aa018);
  return;
}



/* Entry: 102e9100c; end: 102e91123;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e9100c(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112f244d0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f244e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f244d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f244f0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f24488) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f24498) = 0x3ff0000000000000;
  lVar1 = _DAT_112f24490;
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + _DAT_112f244c8) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar1 = _DAT_112f244b8;
  FUN_102e8bb54();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  *(undefined **)(unaff_x20 + _DAT_112f244c0) = PTR___swiftEmptySetSingleton_11034f1d8;
  lVar1 = _DAT_112f244e8;
  puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCStoryScrubController/SCStoryScrubOverlayView.swift",0x34,2,0xe1,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102e91124);
  (*pcVar2)();
}



/* Entry: 102e91124; end: 102e91133;  */

void FUN_102e91124(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  
  dVar4 = *(double *)(unaff_x20 + 0x10);
  dVar6 = *(double *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x000107c61168(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  dVar3 = 0.0;
  dVar5 = 0.0;
  func_0x000107c3e8b0(0,0,dVar4,dVar6,uVar8);
  func_0x000107c61180();
  func_0x000107c3d618();
  func_0x000107c61170(puVar1);
  func_0x000107c5b078(uVar2);
  func_0x000107c5b078(uVar2);
  dVar3 = dVar3 / dVar5;
  dVar7 = dVar4;
  dVar5 = dVar4 / dVar3;
  if (dVar4 / dVar6 < dVar3) {
    dVar7 = dVar6 * dVar3;
    dVar5 = dVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((dVar4 - dVar7) * 0.5,(dVar6 - dVar5) * 0.5,uVar2,PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 102e91134; end: 102e91193;  */

void FUN_102e91134(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102e91194; end: 102e911cf;  */

void FUN_102e91194(long param_1,long param_2)

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



/* Entry: 102e911d0; end: 102e9165b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e911d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  long unaff_x20;
  long lVar12;
  code *pcVar13;
  undefined8 uVar14;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  
  lVar11 = param_5;
  func_0x000107c5ded8(param_5,param_6,*(undefined8 *)PTR__UITransitionContextToViewKey_110345e60);
  func_0x000107c61180();
  if (lVar11 != 0) {
    pcVar13 = *(code **)(unaff_x20 + _DAT_112f245b0);
    if (pcVar13 != (code *)0x0) {
      lVar12 = ((undefined8 *)(unaff_x20 + _DAT_112f245b0))[1];
      lVar2 = lVar12;
      func_0x000107c6157c();
      (*pcVar13)();
      func_0x000100ba52d8(pcVar13,lVar12);
      if (lVar2 != 0) {
        lVar12 = lVar2;
        func_0x000107c5c42c();
        func_0x000107c61180();
        if (lVar12 != 0) {
          lVar3 = lVar2;
          func_0x000107c5e3f8();
          func_0x000107c61180();
          if (lVar3 != 0) {
            lVar4 = unaff_x20 + _DAT_112f245a0;
            func_0x000107c61618();
            if (lVar4 != 0) {
              lVar5 = lVar4;
              func_0x000107c403bc();
              func_0x000107c61180();
              func_0x000107c61170(lVar4);
              lVar4 = lVar5;
              func_0x000107c5b57c();
              func_0x000107c61180();
              func_0x000107c61170(lVar5);
              if (lVar4 != 0) {
                func_0x000107c3ec60(lVar4);
                uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112f245b8);
                FUN_102e9215c();
                func_0x000107c610f8();
                func_0x000107c615f0();
                FUN_102e91e34(param_1,param_2,param_3,param_4);
                func_0x000107c3ec60(lVar4);
                func_0x000107c54b80(uVar14);
                func_0x000107c3f74c(lVar11);
                func_0x000107c532b4(uVar14);
                uVar6 = uVar14;
                func_0x000107c4aba4(uVar14);
                func_0x000107c61180();
                func_0x000107c562fc();
                func_0x000107c61170(uVar6);
                func_0x000107c3d89c(uVar14);
                func_0x000107c3d89c(lVar11);
                func_0x000107c3ec60(lVar2);
                func_0x000107c4073c(lVar2);
                uVar6 = param_1;
                func_0x000107c609bc();
                func_0x000107c609c0(param_1,param_2,param_3,param_4);
                func_0x000107c526c0(0,lVar2);
                func_0x000107c6088c(&puStack_c0,0,0);
                func_0x000107c5a03c(lVar2);
                puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
                func_0x000107c61168();
                puVar8 = &UNK_1105e0f70;
                func_0x000107c613fc(&UNK_1105e0f70,0x30,7);
                *(undefined8 *)(puVar8 + 0x10) = uVar6;
                *(undefined8 *)(puVar8 + 0x18) = param_1;
                *(undefined8 *)(puVar8 + 0x20) = uVar14;
                *(long *)(puVar8 + 0x28) = lVar4;
                puVar1 = PTR___NSConcreteStackBlock_11034bd00;
                pcStack_a0 = FUN_102e9217c;
                puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_b8 = 0x42000000;
                puStack_b0 = &UNK_1000f6b44;
                puStack_a8 = &UNK_1105e0f88;
                ppuVar9 = &puStack_c0;
                puStack_98 = puVar8;
                func_0x000107c60bc4(ppuVar9);
                puVar8 = puStack_98;
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61574(puVar8);
                puVar8 = &UNK_1105e0fc0;
                func_0x000107c613fc(&UNK_1105e0fc0,0x38,7);
                *(long *)(puVar8 + 0x10) = unaff_x20;
                *(long *)(puVar8 + 0x18) = param_5;
                *(undefined8 *)(puVar8 + 0x20) = uVar14;
                *(long *)(puVar8 + 0x28) = lVar12;
                *(long *)(puVar8 + 0x30) = lVar2;
                pcStack_a0 = (code *)0x102e921a4;
                puStack_c0 = puVar1;
                uStack_b8 = 0x42000000;
                puStack_b0 = &UNK_100288f10;
                puStack_a8 = &UNK_1105e0fd8;
                ppuVar10 = &puStack_c0;
                puStack_98 = puVar8;
                func_0x000107c60bc4(ppuVar10);
                puVar8 = puStack_98;
                func_0x000107c61174(uVar14);
                func_0x000107c61174(unaff_x20);
                func_0x000107c615f0(param_5);
                func_0x000107c61174(lVar12);
                func_0x000107c61174(lVar2);
                func_0x000107c61574(puVar8);
                func_0x000107c3dcd8(0x3fe0000000000000,0,0x3fe999999999999a,0x3ff0000000000000,
                                    puVar7);
                func_0x000107c61170(uVar14);
                func_0x000107c61170(lVar4);
                func_0x000107c61170(lVar3);
                func_0x000107c61170(lVar12);
                func_0x000107c61170(lVar2);
                func_0x000107c61170(lVar11);
                func_0x000107c60bd0(ppuVar10);
                func_0x000107c60bd0(ppuVar9);
                return;
              }
            }
            func_0x000107c61170(lVar3);
            lVar11 = lVar12;
          }
          func_0x000107c61170(lVar11);
          lVar11 = lVar2;
        }
        func_0x000107c61170(lVar11);
      }
    }
    func_0x000107c61170();
  }
  lVar11 = unaff_x20 + _DAT_112f245a0;
  func_0x000107c61618();
  if (lVar11 != 0) {
    func_0x000107c4ff34();
    func_0x000107c61170(lVar11);
  }
  func_0x000107c435a4(param_5);
  func_0x000107c5cf60(param_5);
  func_0x000107c3fef0(param_5);
  lVar11 = unaff_x20 + _DAT_112f245a8;
  lVar2 = lVar11;
  func_0x000107c61618();
  if (lVar2 == 0) {
    return;
  }
  lVar11 = *(long *)(lVar11 + 8);
  func_0x000107c614f0();
  (**(code **)(lVar11 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 102e9165c; end: 102e91703;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e9165c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = unaff_x20 + _DAT_112f245a0;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c4ff34();
    func_0x000107c61170(lVar2);
  }
  func_0x000107c435a4(param_1);
  func_0x000107c5cf60(param_1);
  func_0x000107c3fef0(param_1);
  lVar2 = unaff_x20 + _DAT_112f245a8;
  lVar1 = lVar2;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar2 + 8);
    func_0x000107c614f0();
    (**(code **)(lVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 102e91704; end: 102e917d7;  */

/* WARNING: Possible PIC construction at 0x000102e91764: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e91768) */

void FUN_102e91704(double param_1,double param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c4aba4();
  func_0x000107c61180();
  func_0x000107c539d4(0x4018000000000000);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1 + -20.0,param_2 + -20.0,0x4044000000000000,0x4044000000000000,param_3,
             PTR_s_setFrame__112645658);
  return;
}



/* Entry: 102e917d8; end: 102e91b63;  */

void FUN_102e917d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  FUN_102e9165c(param_3);
  func_0x000107c3ec60(param_4);
  func_0x000107c4073c(param_4);
  func_0x000107c54b80(param_4);
  func_0x000107c3d89c(param_5);
  func_0x000107c3ec8c(param_5);
  func_0x000107c5a378(param_4);
  pcVar1 = "beginAnimation(transitionContext:)";
  func_0x0001000c10c0("beginAnimation(transitionContext:)");
  func_0x000107c61180();
  puVar2 = &UNK_1105e1010;
  func_0x000107c613fc(&UNK_1105e1010,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  *(undefined8 *)(puVar2 + 0x18) = param_6;
  uStack_50 = 0x102e921b4;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1105e1028;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  func_0x000107c61574(puVar2);
  func_0x000107c4e528(0x3ff0000000000000,pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 102e91b64; end: 102e91c47;  */

void FUN_102e91b64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  func_0x000107c4ff34();
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar2 = &UNK_1105e10b0;
  func_0x000107c613fc(&UNK_1105e10b0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  pcStack_40 = FUN_102e921c4;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1105e10c8;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c3dcd8(0x3fc999999999999a,0,0x3fe999999999999a,0x3ff0000000000000,puVar1);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 102e91c48; end: 102e91d1f;  */

/* WARNING: Possible PIC construction at 0x000102e91ce4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e91cfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e91ce8) */

void FUN_102e91c48(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x000107c403bc();
  func_0x000107c61180();
  lVar2 = param_1;
  func_0x000107c5ded8(param_1,param_2,*(undefined8 *)PTR__UITransitionContextToViewKey_110345e60);
  func_0x000107c61180();
  if (lVar2 == 0) {
    FUN_102e9165c(param_1);
    lVar2 = lVar1;
  }
  else {
    lVar3 = param_1;
    func_0x000107c5de84(param_1,param_2,
                        *(undefined8 *)PTR__UITransitionContextToViewControllerKey_110345e58);
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c43538(param_1,param_2,lVar3);
      func_0x000107c54b80(lVar2);
      func_0x000107c3d89c(lVar1,param_2,lVar2);
      FUN_102e911d0(param_1);
      lVar2 = lVar1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 102e91d20; end: 102e91d67; -[_TtC30MemoriesPreviewSaveDismissImpl34MemoriesPreviewSaveDismissAnimator startInteractiveTransition:] */

void FUN_102e91d20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_102e91c48(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e91d68; end: 102e91de3; -[_TtC30MemoriesPreviewSaveDismissImpl34MemoriesPreviewSaveDismissAnimator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e91d68(long param_1)

{
  func_0x000100d29a84(param_1 + _DAT_112f245c0);
  func_0x000100d29a84(param_1 + _DAT_112f245a8);
  func_0x000100d29a84(param_1 + _DAT_112f245a0);
  func_0x000100d29a84(param_1 + _DAT_112f245c8);
  func_0x000100ba52d8(*(undefined8 *)(param_1 + _DAT_112f245b0),
                      ((undefined8 *)(param_1 + _DAT_112f245b0))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f245b8));
  return;
}



/* Entry: 102e91de4; end: 102e91e33;  */

/* WARNING: Possible PIC construction at 0x000102e91e0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e91e10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e91de4(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(unaff_x20 + _DAT_112f245a0,param_1);
  return;
}



/* Entry: 102e91e34; end: 102e91f5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102e91e34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  puVar1 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f245f8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f24600) = 0;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffffa0,
                      PTR_s_initWithFrame__1125e2948);
  uVar3 = *(undefined8 *)(puVar1 + _DAT_112f24600);
  *(undefined8 *)(puVar1 + _DAT_112f24600) = param_5;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(param_5);
  func_0x000107c615e8(uVar3);
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  func_0x000107c610f8();
  func_0x000107c48c2c();
  func_0x000107c61170(puVar1);
  uVar3 = *(undefined8 *)(puVar1 + _DAT_112f245f8);
  *(undefined **)(puVar1 + _DAT_112f245f8) = puVar2;
  func_0x000107c61174(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c3d6fc(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(puVar2);
  return puVar1;
}



/* Entry: 102e91f60; end: 102e91fcf; -[_TtC30MemoriesPreviewSaveDismissImpl50MemoriesPreviewSaveDismissAnimatorImagehostingView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e91f60(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112f245f8) = 0;
  *(undefined8 *)(param_1 + _DAT_112f24600) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "MemoriesPreviewSaveDismissImpl/MemoriesPreviewSaveDismissAnimator.swift",0x47
                      ,2,0xba,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e91fd0);
  (*pcVar1)();
}



/* Entry: 102e91fd0; end: 102e92093; -[_TtC30MemoriesPreviewSaveDismissImpl50MemoriesPreviewSaveDismissAnimatorImagehostingView hitTest:withEvent:] */

void FUN_102e91fd0(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  
  ppuVar3 = &puStack_50;
  puVar1 = param_3;
  func_0x000107c614f0();
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  puVar2 = param_3;
  func_0x000107c4eadc(param_1,param_2);
  if ((int)puVar2 == 0) {
    puStack_50 = param_3;
    puStack_48 = puVar1;
    func_0x000107c61154(param_1,param_2,&puStack_50,PTR_s_hitTest_withEvent__1125d6850,param_5);
    func_0x000107c61180();
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_5);
  }
  else {
    func_0x000107c61170(param_5);
    ppuVar3 = (undefined1 **)param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 102e92094; end: 102e920bf; -[_TtC30MemoriesPreviewSaveDismissImpl50MemoriesPreviewSaveDismissAnimatorImagehostingView handleTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e92094(long param_1)

{
  if (*(long *)(param_1 + _DAT_112f24600) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c152490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112f24600),PTR_s_scrollToGalleryFromCameraAnimate_112632340,
               1,0xb,0,0,0);
    return;
  }
  return;
}



/* Entry: 102e920c0; end: 102e920eb; -[_TtC30MemoriesPreviewSaveDismissImpl50MemoriesPreviewSaveDismissAnimatorImagehostingView initWithFrame:] */

void FUN_102e920c0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesPreviewSaveDismissImpl.MemoriesPreviewSaveDismissAnimatorImagehostingView"
                      ,0x51,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e920ec);
  (*pcVar1)();
}



/* Entry: 102e920ec; end: 102e920ef;  */

void FUN_102e920ec(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102e920f0; end: 102e92123;  */

void FUN_102e920f0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102e92124; end: 102e9215b; -[_TtC30MemoriesPreviewSaveDismissImpl50MemoriesPreviewSaveDismissAnimatorImagehostingView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e92124(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f245f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f24600));
  return;
}



/* Entry: 102e9215c; end: 102e9217b;  */

void FUN_102e9215c(void)

{
  func_0x000107c61168(&PTR_PTR_1128aa210);
  return;
}



/* Entry: 102e9217c; end: 102e921c3;  */

/* WARNING: Possible PIC construction at 0x000102e91764: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e91768) */

void FUN_102e9217c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  double dVar3;
  double dVar4;
  
  dVar3 = *(double *)(unaff_x20 + 0x10);
  dVar4 = *(double *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = uVar1;
  func_0x000107c4aba4(uVar1,*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61180();
  func_0x000107c539d4(0x4018000000000000);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar3 + -20.0,dVar4 + -20.0,0x4044000000000000,0x4044000000000000,uVar1,
             PTR_s_setFrame__112645658);
  return;
}



/* Entry: 102e921c4; end: 102e9220f;  */

void FUN_102e921c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_50 = 0x3ff0000000000000;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0x3ff0000000000000;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x000107c5a03c(uVar1,param_2,&uStack_50);
  func_0x000107c526c0(0x3ff0000000000000,uVar1);
  return;
}



/* Entry: 102e92210; end: 102e92233;  */

void FUN_102e92210(long param_1,long param_2)

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



/* Entry: 102e92234; end: 102e9227b; -[_TtC30MemoriesPreviewSaveDismissImpl30MemoriesPreviewSaveDismissImpl saveDismissDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e92234(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f24630;
  func_0x000107c61428(param_1 + _DAT_112f24630,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e9227c; end: 102e9235b; -[_TtC30MemoriesPreviewSaveDismissImpl30MemoriesPreviewSaveDismissImpl setSaveDismissDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e9227c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f24630;
  func_0x000107c61428(param_1 + _DAT_112f24630,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102e9235c; end: 102e92383; -[_TtC30MemoriesPreviewSaveDismissImpl30MemoriesPreviewSaveDismissImpl configureTransitionControllerAnimators] */

void FUN_102e9235c(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000102e922d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e92384; end: 102e9238b; -[_TtC30MemoriesPreviewSaveDismissImpl30MemoriesPreviewSaveDismissImpl responderChainPriority] */

undefined8 FUN_102e92384(void)

{
  return 0x7fffffffffffffff;
}



/* Entry: 102e9238c; end: 102e92457; -[_TtC30MemoriesPreviewSaveDismissImpl30MemoriesPreviewSaveDismissImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e9238c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puStack_58;
  
  puStack_58 = PTR_DAT_11269e3f0;
  lVar2 = param_3;
  func_0x000107c61494(param_3,1,&puStack_58);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112f24650);
    lVar1 = ((undefined8 *)(param_1 + _DAT_112f24650))[1];
    func_0x000107c614f0(uVar3);
    pcVar4 = *(code **)(lVar1 + 8);
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_1);
    (*pcVar4)(lVar2,param_1,&PTR_DAT_1105e10f8,uVar3,lVar1);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102e92458; end: 102e9248b;  */

void FUN_102e92458(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102e9248c; end: 102e9256b; -[_TtC30MemoriesPreviewSaveDismissImpl30MemoriesPreviewSaveDismissImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102e924b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e924bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e9248c(long param_1)

{
  func_0x000100d29b6c(param_1 + _DAT_112f24630);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f24650));
  return;
}



/* Entry: 102e9256c; end: 102e9258b;  */

void FUN_102e9256c(void)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 102e9258c; end: 102e92727;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_102e9258c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 unaff_x20;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  func_0x000107c613fc();
  lVar1 = *(long *)(param_3 + _DAT_112ff3e68);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar4 = param_4;
    func_0x000107c4d524(param_4);
    func_0x000107c61180();
    func_0x000107c569ec(lVar1);
    func_0x000107c615e8(lVar1);
    func_0x000107c615e8(uVar4);
  }
  uVar4 = *(undefined8 *)(param_1 + _DAT_1130352c0);
  puVar2 = &UNK_1105e1148;
  func_0x000107c613fc(&UNK_1105e1148,0x18,7);
  *(long *)(puVar2 + 0x10) = param_3;
  pcStack_70 = FUN_102e92728;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100ba4fb0;
  puStack_78 = &UNK_1105e1160;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar2 = puStack_68;
  func_0x000107c61174(uVar4);
  func_0x000107c61174(param_3);
  func_0x000107c61574(puVar2);
  func_0x000107c5dc64(uVar4);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar4);
  return unaff_x20;
}



/* Entry: 102e92728; end: 102e9272f;  */

/* WARNING: Possible PIC construction at 0x000100ba5124: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ba5134: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ba5128) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e92728(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  if ((param_2 == 0) && (param_1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113035438);
    lVar3 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112ff3e68);
    func_0x000107c615f0(uVar2);
    func_0x000107c61174(param_1);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 == 0) {
      func_0x000107c61170(param_1);
    }
    else {
      puVar1 = &UNK_1105e11b0;
      func_0x000107c613fc(&UNK_1105e11b0,0x18,7);
      func_0x000107c61614(puVar1 + 0x10,uVar2);
      uStack_40 = 0x102e927fc;
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0x42000000;
      puStack_50 = &UNK_100f11710;
      puStack_48 = &UNK_1105e11c8;
      puStack_38 = puVar1;
      func_0x000107c60bc4(&puStack_60);
      func_0x000107c61574(puStack_38);
      func_0x000107c59c1c(lVar3);
      func_0x000107c61170(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar2);
    return;
  }
  return;
}



/* Entry: 102e92730; end: 102e927d7;  */

void FUN_102e92730(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c4cc80();
    func_0x000107c61180();
    func_0x000107c615e8(param_1);
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c42e38(lVar1);
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      func_0x000107c4cc80(lVar2);
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 102e927d8; end: 102e92807;  */

void FUN_102e927d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 102e92808; end: 102e928c7;  */

long FUN_102e92808(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001000285a8(0x112f24718,&UNK_10db5f2f0);
  func_0x000107c613fc();
  puVar1 = &UNK_100ba4cec;
  func_0x0001000bdd8c(&UNK_100ba4cec,0);
  puVar2 = puVar1;
  func_0x0001003a5b88();
  func_0x000107c61574(puVar1);
  func_0x00010033e374(0);
  func_0x000107c610f8();
  func_0x00010090d628();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  return unaff_x20;
}



/* Entry: 102e928c8; end: 102e928eb;  */

void FUN_102e928c8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e928ec; end: 102e928f7;  */

void FUN_102e928ec(void)

{
  return;
}



/* Entry: 102e928f8; end: 102e929fb;  */

undefined8 FUN_102e928f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = &UNK_1105e1228;
  func_0x000107c613fc(&UNK_1105e1228,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  func_0x0001000285a8(0x112f247c0,&UNK_10db5f350);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  pcVar2 = FUN_102e92a38;
  func_0x0001000bdd8c(FUN_102e92a38,puVar1);
  pcVar3 = pcVar2;
  func_0x0001000bf56c();
  func_0x000107c61574(pcVar2);
  uVar4 = param_1;
  func_0x000107c4e9e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(pcVar3);
  func_0x000107c61170(uVar4);
  return unaff_x20;
}



/* Entry: 102e929fc; end: 102e92a37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e929fc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_112ff3e68);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 102e92a38; end: 102e92a3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e92a38(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112ff3e68);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 102e92a3c; end: 102e92a7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e92a3c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112ff3e68);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 102e92a7c; end: 102e92a97;  */

void FUN_102e92a7c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e92a98; end: 102e92ab7;  */

void FUN_102e92a98(void)

{
  func_0x000107c61168(&PTR_PTR_112f24808);
  return;
}



/* Entry: 102e92ab8; end: 102e92afb; -[SCMemoriesPreviewSaveDismissServicesCameraEntryPoint end] */

void FUN_102e92ab8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e92afc; end: 102e92b2f;  */

void FUN_102e92afc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102e92b30; end: 102e92ba7; -[SCMemoriesPreviewSaveDismissServicesCameraEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e92b30(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f24860);
  func_0x000107c61610(param_1 + _DAT_112f24868);
  func_0x000107c61610(param_1 + _DAT_112f24870);
  func_0x000107c61610(param_1 + _DAT_112f24878);
  func_0x000107c61610(param_1 + _DAT_112f24880);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f24888));
  return;
}



/* Entry: 102e92ba8; end: 102e92bc7;  */

void FUN_102e92ba8(void)

{
  func_0x000107c61168(&PTR_PTR_1128aa3b0);
  return;
}



/* Entry: 102e92bc8; end: 102e92bd3; -[SCMemoriesPreviewSaveDismissServicesPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e92bc8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f248b8;
  func_0x000107c61428(param_1 + _DAT_112f248b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e92bd4; end: 102e92bdf; -[SCMemoriesPreviewSaveDismissServicesPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e92bd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f248b8;
  func_0x000107c61428(param_1 + _DAT_112f248b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102e92be0; end: 102e92beb; -[SCMemoriesPreviewSaveDismissServicesPluginEntryPoint memoriesSaveDismissServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e92be0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f248c0;
  func_0x000107c61428(param_1 + _DAT_112f248c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e92bec; end: 102e92bf7; -[SCMemoriesPreviewSaveDismissServicesPluginEntryPoint setMemoriesSaveDismissServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e92bec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f248c0;
  func_0x000107c61428(param_1 + _DAT_112f248c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102e92bf8; end: 102e92c03; -[SCMemoriesPreviewSaveDismissServicesPluginEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e92bf8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f248c8;
  func_0x000107c61428(param_1 + _DAT_112f248c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e92c04; end: 102e92c47;  */

void FUN_102e92c04(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 102e92c48; end: 102e92c53; -[SCMemoriesPreviewSaveDismissServicesPluginEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e92c48(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f248c8;
  func_0x000107c61428(param_1 + _DAT_112f248c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102e92c54; end: 102e92ca7;  */

void FUN_102e92c54(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102e92ca8; end: 102e92e47;  */

/* WARNING: Possible PIC construction at 0x000102e92d94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e92db8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e92dc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e92dd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e92dcc) */
/* WARNING: Removing unreachable block (ram,0x000102e92dbc) */
/* WARNING: Removing unreachable block (ram,0x000102e92d98) */
/* WARNING: Removing unreachable block (ram,0x000102e92ddc) */

void FUN_102e92ca8(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c4cc60();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c3fa0c();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      FUN_102e92a98(0);
      func_0x000107c613fc();
      puVar3 = &UNK_1105e12c0;
      func_0x000107c613fc(&UNK_1105e12c0,0x18,7);
      *(long *)(puVar3 + 0x10) = lVar2;
      func_0x0001000285a8(0x112f247c0,&UNK_10db5f350);
      func_0x000107c613fc();
      func_0x000107c61174(lVar2);
      pcVar4 = FUN_102e92e48;
      func_0x0001000bdd8c(FUN_102e92e48,puVar3);
      func_0x0001000bf56c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(pcVar4);
      return;
    }
    func_0x000107c61170(lVar1);
    lVar1 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 102e92e48; end: 102e92e4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e92e48(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112ff3e68);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 102e92e50; end: 102e92e77; -[SCMemoriesPreviewSaveDismissServicesPluginEntryPoint begin] */

void FUN_102e92e50(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102e92ca8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e92e78; end: 102e92ebb; -[SCMemoriesPreviewSaveDismissServicesPluginEntryPoint end] */

void FUN_102e92e78(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e92ebc; end: 102e930bf;  */

void FUN_102e92ebc(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe5) || (param_3 != -0x7ffffffef0eed630)) {
      uVar2 = 0xd00000000000001b;
      func_0x000107c605b8(0xd00000000000001b,0x800000010f1129d0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef10ed550)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd00000000000001a,0x800000010ef12ab0,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "MemoriesPreviewSaveDismissImpl/SCMemoriesPreviewSaveDismissServicesPluginEntryPoint.swift"
                                ,0x59,2,0x2f,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102e930c0);
            (*pcVar1)();
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c53414();
        goto LAB_102e92f48;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c565b8();
  }
LAB_102e92f48:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102e930c0; end: 102e9316b; -[SCMemoriesPreviewSaveDismissServicesPluginEntryPoint setValue:forIvarName:] */

void FUN_102e930c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102e92ebc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102e9316c; end: 102e931f3; -[SCMemoriesPreviewSaveDismissServicesPluginEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e9316c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f248b8,0);
  func_0x000107c61614(param_1 + _DAT_112f248c0,0);
  func_0x000107c61614(param_1 + _DAT_112f248c8,0);
  *(undefined8 *)(param_1 + _DAT_112f248d0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}


