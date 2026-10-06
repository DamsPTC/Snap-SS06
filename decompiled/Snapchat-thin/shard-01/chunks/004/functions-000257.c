/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100f6b0bc; end: 100f6b0ef;  */

void FUN_100f6b0bc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f6b0f0; end: 100f6b127; -[_TtC34SpotlightCommentsStickerPickerImpl44SpotlightCommentsStickerPickerViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100f6b10c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f6b110) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6b0f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d4f030));
  return;
}



/* Entry: 100f6b128; end: 100f6b147;  */

void FUN_100f6b128(void)

{
  func_0x000107c61168(&PTR_PTR_1127a5830);
  return;
}



/* Entry: 100f6b148; end: 100f6b16f;  */

ulong FUN_100f6b148(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100f6b254);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100f6b258);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126be988;
    func_0x000107c61168(PTR_PTR_1126be988);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126be988;
    func_0x000107c61168(PTR_PTR_1126be988);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_100f6b340(0,0x112d4edc8,&PTR_PTR_1126be988);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100f6b32c);
  (*pcVar2)();
}



/* Entry: 100f6b170; end: 100f6b32b;  */

ulong FUN_100f6b170(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100f6b254);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100f6b258);
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
  FUN_100f6b340(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100f6b32c);
  (*pcVar2)();
}



/* Entry: 100f6b32c; end: 100f6b33f;  */

ulong FUN_100f6b32c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100f6b254);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100f6b258);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126bec00;
    func_0x000107c61168(PTR_PTR_1126bec00);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126bec00;
    func_0x000107c61168(PTR_PTR_1126bec00);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_100f6b340(0,0x112d4eff8,&PTR_PTR_1126bec00);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100f6b32c);
  (*pcVar2)();
}



/* Entry: 100f6b340; end: 100f6b37f;  */

void FUN_100f6b340(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 100f6b380; end: 100f6b383;  */

void FUN_100f6b380(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f6b384; end: 100f6b38f; -[SCSpotlightCommentsStickerPickerEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6b384(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4f068;
  func_0x000107c61428(param_1 + _DAT_112d4f068,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f6b390; end: 100f6b39b; -[SCSpotlightCommentsStickerPickerEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6b390(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4f068;
  func_0x000107c61428(param_1 + _DAT_112d4f068,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f6b39c; end: 100f6b3a7; -[SCSpotlightCommentsStickerPickerEntryPoint userSessionScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6b39c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4f070;
  func_0x000107c61428(param_1 + _DAT_112d4f070,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f6b3a8; end: 100f6b3b3; -[SCSpotlightCommentsStickerPickerEntryPoint setUserSessionScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6b3a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4f070;
  func_0x000107c61428(param_1 + _DAT_112d4f070,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f6b3b4; end: 100f6b3bf; -[SCSpotlightCommentsStickerPickerEntryPoint ctpRepositoryServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6b3b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4f078;
  func_0x000107c61428(param_1 + _DAT_112d4f078,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f6b3c0; end: 100f6b3cb; -[SCSpotlightCommentsStickerPickerEntryPoint setCtpRepositoryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6b3c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4f078;
  func_0x000107c61428(param_1 + _DAT_112d4f078,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f6b3cc; end: 100f6b3d7; -[SCSpotlightCommentsStickerPickerEntryPoint bitmojiFetchServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6b3cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4f080;
  func_0x000107c61428(param_1 + _DAT_112d4f080,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f6b3d8; end: 100f6b3e3; -[SCSpotlightCommentsStickerPickerEntryPoint setBitmojiFetchServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6b3d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4f080;
  func_0x000107c61428(param_1 + _DAT_112d4f080,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f6b3e4; end: 100f6b3ef; -[SCSpotlightCommentsStickerPickerEntryPoint bitmojiStickerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6b3e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4f088;
  func_0x000107c61428(param_1 + _DAT_112d4f088,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f6b3f0; end: 100f6b3fb; -[SCSpotlightCommentsStickerPickerEntryPoint setBitmojiStickerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6b3f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4f088;
  func_0x000107c61428(param_1 + _DAT_112d4f088,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f6b3fc; end: 100f6b407; -[SCSpotlightCommentsStickerPickerEntryPoint ctpItemViewServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6b3fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4f090;
  func_0x000107c61428(param_1 + _DAT_112d4f090,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f6b408; end: 100f6b413; -[SCSpotlightCommentsStickerPickerEntryPoint setCtpItemViewServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6b408(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4f090;
  func_0x000107c61428(param_1 + _DAT_112d4f090,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f6b414; end: 100f6b41f; -[SCSpotlightCommentsStickerPickerEntryPoint ctpUserDataFeedServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6b414(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4f098;
  func_0x000107c61428(param_1 + _DAT_112d4f098,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f6b420; end: 100f6b42b; -[SCSpotlightCommentsStickerPickerEntryPoint setCtpUserDataFeedServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6b420(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4f098;
  func_0x000107c61428(param_1 + _DAT_112d4f098,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f6b42c; end: 100f6b437; -[SCSpotlightCommentsStickerPickerEntryPoint userBlizzardServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6b42c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4f0a0;
  func_0x000107c61428(param_1 + _DAT_112d4f0a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f6b438; end: 100f6b443; -[SCSpotlightCommentsStickerPickerEntryPoint setUserBlizzardServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6b438(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4f0a0;
  func_0x000107c61428(param_1 + _DAT_112d4f0a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f6b444; end: 100f6b44f; -[SCSpotlightCommentsStickerPickerEntryPoint bitmojiFlatlandContentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6b444(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4f0a8;
  func_0x000107c61428(param_1 + _DAT_112d4f0a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f6b450; end: 100f6b45b; -[SCSpotlightCommentsStickerPickerEntryPoint setBitmojiFlatlandContentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6b450(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4f0a8;
  func_0x000107c61428(param_1 + _DAT_112d4f0a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f6b45c; end: 100f6b467; -[SCSpotlightCommentsStickerPickerEntryPoint bitmojiStyleProvidingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6b45c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4f0b0;
  func_0x000107c61428(param_1 + _DAT_112d4f0b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f6b468; end: 100f6b473; -[SCSpotlightCommentsStickerPickerEntryPoint setBitmojiStyleProvidingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6b468(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4f0b0;
  func_0x000107c61428(param_1 + _DAT_112d4f0b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f6b474; end: 100f6b47f; -[SCSpotlightCommentsStickerPickerEntryPoint bitmojiAppServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6b474(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4f0b8;
  func_0x000107c61428(param_1 + _DAT_112d4f0b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f6b480; end: 100f6b48b; -[SCSpotlightCommentsStickerPickerEntryPoint setBitmojiAppServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6b480(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4f0b8;
  func_0x000107c61428(param_1 + _DAT_112d4f0b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f6b48c; end: 100f6b497; -[SCSpotlightCommentsStickerPickerEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6b48c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4f0c0;
  func_0x000107c61428(param_1 + _DAT_112d4f0c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f6b498; end: 100f6b4a3; -[SCSpotlightCommentsStickerPickerEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6b498(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4f0c0;
  func_0x000107c61428(param_1 + _DAT_112d4f0c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f6b4a4; end: 100f6b4af; -[SCSpotlightCommentsStickerPickerEntryPoint bloopsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6b4a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4f0c8;
  func_0x000107c61428(param_1 + _DAT_112d4f0c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f6b4b0; end: 100f6b4bb; -[SCSpotlightCommentsStickerPickerEntryPoint setBloopsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6b4b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4f0c8;
  func_0x000107c61428(param_1 + _DAT_112d4f0c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f6b4bc; end: 100f6b4c7; -[SCSpotlightCommentsStickerPickerEntryPoint stickerSearchServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6b4bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4f0d0;
  func_0x000107c61428(param_1 + _DAT_112d4f0d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f6b4c8; end: 100f6b4d3; -[SCSpotlightCommentsStickerPickerEntryPoint setStickerSearchServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6b4c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4f0d0;
  func_0x000107c61428(param_1 + _DAT_112d4f0d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f6b4d4; end: 100f6b4df; -[SCSpotlightCommentsStickerPickerEntryPoint customStickerManagerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6b4d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4f0d8;
  func_0x000107c61428(param_1 + _DAT_112d4f0d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f6b4e0; end: 100f6b4eb; -[SCSpotlightCommentsStickerPickerEntryPoint setCustomStickerManagerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6b4e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4f0d8;
  func_0x000107c61428(param_1 + _DAT_112d4f0d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f6b4ec; end: 100f6b4f7; -[SCSpotlightCommentsStickerPickerEntryPoint stickerInjectorSnapEditorServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6b4ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4f0e0;
  func_0x000107c61428(param_1 + _DAT_112d4f0e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f6b4f8; end: 100f6b503; -[SCSpotlightCommentsStickerPickerEntryPoint setStickerInjectorSnapEditorServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6b4f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4f0e0;
  func_0x000107c61428(param_1 + _DAT_112d4f0e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f6b504; end: 100f6b50f; -[SCSpotlightCommentsStickerPickerEntryPoint creativeToolsABServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6b504(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4f0e8;
  func_0x000107c61428(param_1 + _DAT_112d4f0e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f6b510; end: 100f6b51b; -[SCSpotlightCommentsStickerPickerEntryPoint setCreativeToolsABServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6b510(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4f0e8;
  func_0x000107c61428(param_1 + _DAT_112d4f0e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f6b51c; end: 100f6b527; -[SCSpotlightCommentsStickerPickerEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6b51c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4f0f0;
  func_0x000107c61428(param_1 + _DAT_112d4f0f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f6b528; end: 100f6b533; -[SCSpotlightCommentsStickerPickerEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6b528(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4f0f0;
  func_0x000107c61428(param_1 + _DAT_112d4f0f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f6b534; end: 100f6b53f; -[SCSpotlightCommentsStickerPickerEntryPoint ctpSearchServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6b534(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4f0f8;
  func_0x000107c61428(param_1 + _DAT_112d4f0f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f6b540; end: 100f6b583;  */

void FUN_100f6b540(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100f6b584; end: 100f6b58f; -[SCSpotlightCommentsStickerPickerEntryPoint setCtpSearchServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6b584(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4f0f8;
  func_0x000107c61428(param_1 + _DAT_112d4f0f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f6b590; end: 100f6b5e3;  */

void FUN_100f6b590(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f6b5e4; end: 100f6c013;  */

/* WARNING: Possible PIC construction at 0x000100f6ba70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6ba80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6ba90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6baa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bac0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bad0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6baf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bb0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bf7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bf8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bf9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bfac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bfbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bfcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bfdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bfec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6befc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bf0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bf1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bf2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bf3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bf4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bf5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6be7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6be8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6be9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6beac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bebc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6becc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bedc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6be0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6be1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6be2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6be3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6be4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6be5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6be6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bdac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bdbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bdcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bddc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bdec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bdfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bd4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bd5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bd6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bd7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bd8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bcec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bcfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bd0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bd1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bd2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bc9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bcac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bcbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bccc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bcdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bc5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bc6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bc7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bc8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bc1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bc2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bc3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bbdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bbec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bbfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bbac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bbbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bbcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bb8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bb9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bb6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bb4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6bb3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f6bb50) */
/* WARNING: Removing unreachable block (ram,0x000100f6bb70) */
/* WARNING: Removing unreachable block (ram,0x000100f6bba0) */
/* WARNING: Removing unreachable block (ram,0x000100f6bb90) */
/* WARNING: Removing unreachable block (ram,0x000100f6bbd0) */
/* WARNING: Removing unreachable block (ram,0x000100f6bbc0) */
/* WARNING: Removing unreachable block (ram,0x000100f6bbb0) */
/* WARNING: Removing unreachable block (ram,0x000100f6bc00) */
/* WARNING: Removing unreachable block (ram,0x000100f6bbf0) */
/* WARNING: Removing unreachable block (ram,0x000100f6bbe0) */
/* WARNING: Removing unreachable block (ram,0x000100f6bc40) */
/* WARNING: Removing unreachable block (ram,0x000100f6bc30) */
/* WARNING: Removing unreachable block (ram,0x000100f6bc20) */
/* WARNING: Removing unreachable block (ram,0x000100f6bc90) */
/* WARNING: Removing unreachable block (ram,0x000100f6bc80) */
/* WARNING: Removing unreachable block (ram,0x000100f6bc70) */
/* WARNING: Removing unreachable block (ram,0x000100f6bc60) */
/* WARNING: Removing unreachable block (ram,0x000100f6bce0) */
/* WARNING: Removing unreachable block (ram,0x000100f6bcd0) */
/* WARNING: Removing unreachable block (ram,0x000100f6bcc0) */
/* WARNING: Removing unreachable block (ram,0x000100f6bcb0) */
/* WARNING: Removing unreachable block (ram,0x000100f6bca0) */
/* WARNING: Removing unreachable block (ram,0x000100f6bd30) */
/* WARNING: Removing unreachable block (ram,0x000100f6bd20) */
/* WARNING: Removing unreachable block (ram,0x000100f6bd10) */
/* WARNING: Removing unreachable block (ram,0x000100f6bd00) */
/* WARNING: Removing unreachable block (ram,0x000100f6bcf0) */
/* WARNING: Removing unreachable block (ram,0x000100f6bd90) */
/* WARNING: Removing unreachable block (ram,0x000100f6bd80) */
/* WARNING: Removing unreachable block (ram,0x000100f6bd70) */
/* WARNING: Removing unreachable block (ram,0x000100f6bd60) */
/* WARNING: Removing unreachable block (ram,0x000100f6bd50) */
/* WARNING: Removing unreachable block (ram,0x000100f6be00) */
/* WARNING: Removing unreachable block (ram,0x000100f6bdf0) */
/* WARNING: Removing unreachable block (ram,0x000100f6bde0) */
/* WARNING: Removing unreachable block (ram,0x000100f6bdd0) */
/* WARNING: Removing unreachable block (ram,0x000100f6bdc0) */
/* WARNING: Removing unreachable block (ram,0x000100f6bdb0) */
/* WARNING: Removing unreachable block (ram,0x000100f6be70) */
/* WARNING: Removing unreachable block (ram,0x000100f6be60) */
/* WARNING: Removing unreachable block (ram,0x000100f6be50) */
/* WARNING: Removing unreachable block (ram,0x000100f6be40) */
/* WARNING: Removing unreachable block (ram,0x000100f6be30) */
/* WARNING: Removing unreachable block (ram,0x000100f6be20) */
/* WARNING: Removing unreachable block (ram,0x000100f6be10) */
/* WARNING: Removing unreachable block (ram,0x000100f6bee0) */
/* WARNING: Removing unreachable block (ram,0x000100f6bed0) */
/* WARNING: Removing unreachable block (ram,0x000100f6bec0) */
/* WARNING: Removing unreachable block (ram,0x000100f6beb0) */
/* WARNING: Removing unreachable block (ram,0x000100f6bea0) */
/* WARNING: Removing unreachable block (ram,0x000100f6be90) */
/* WARNING: Removing unreachable block (ram,0x000100f6be80) */
/* WARNING: Removing unreachable block (ram,0x000100f6bf60) */
/* WARNING: Removing unreachable block (ram,0x000100f6bf50) */
/* WARNING: Removing unreachable block (ram,0x000100f6bf40) */
/* WARNING: Removing unreachable block (ram,0x000100f6bf30) */
/* WARNING: Removing unreachable block (ram,0x000100f6bf20) */
/* WARNING: Removing unreachable block (ram,0x000100f6bf10) */
/* WARNING: Removing unreachable block (ram,0x000100f6bf00) */
/* WARNING: Removing unreachable block (ram,0x000100f6bff0) */
/* WARNING: Removing unreachable block (ram,0x000100f6bfe0) */
/* WARNING: Removing unreachable block (ram,0x000100f6bfd0) */
/* WARNING: Removing unreachable block (ram,0x000100f6bfc0) */
/* WARNING: Removing unreachable block (ram,0x000100f6bfb0) */
/* WARNING: Removing unreachable block (ram,0x000100f6bfa0) */
/* WARNING: Removing unreachable block (ram,0x000100f6bf90) */
/* WARNING: Removing unreachable block (ram,0x000100f6bf80) */
/* WARNING: Removing unreachable block (ram,0x000100f6baf4) */
/* WARNING: Removing unreachable block (ram,0x000100f6bae4) */
/* WARNING: Removing unreachable block (ram,0x000100f6bad4) */
/* WARNING: Removing unreachable block (ram,0x000100f6bac4) */
/* WARNING: Removing unreachable block (ram,0x000100f6bab4) */
/* WARNING: Removing unreachable block (ram,0x000100f6baa4) */
/* WARNING: Removing unreachable block (ram,0x000100f6ba94) */
/* WARNING: Removing unreachable block (ram,0x000100f6ba84) */
/* WARNING: Removing unreachable block (ram,0x000100f6ba74) */
/* WARNING: Removing unreachable block (ram,0x000100f6bb40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6b5e4(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long unaff_x20;
  long lStack_78;
  long lStack_70;
  
  lVar3 = unaff_x20;
  func_0x000107c5da74();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  lVar4 = unaff_x20;
  func_0x000107c40e34();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c3e9b4();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar6 = unaff_x20;
      func_0x000107c3ea50();
      func_0x000107c61180();
      if (lVar6 != 0) {
        lVar7 = unaff_x20;
        func_0x000107c40e2c();
        func_0x000107c61180();
        if (lVar7 == 0) {
          func_0x000107c61170(lVar3);
          lVar3 = lVar4;
        }
        else {
          lVar8 = unaff_x20;
          func_0x000107c40e3c();
          func_0x000107c61180();
          if (lVar8 == 0) {
            func_0x000107c61170(lVar3);
            lVar3 = lVar4;
          }
          else {
            lVar9 = unaff_x20;
            func_0x000107c5d900();
            func_0x000107c61180();
            if (lVar9 != 0) {
              lVar10 = unaff_x20;
              func_0x000107c3e9bc();
              func_0x000107c61180();
              if (lVar10 != 0) {
                lVar11 = unaff_x20;
                func_0x000107c3ea5c();
                func_0x000107c61180();
                if (lVar11 == 0) {
                  func_0x000107c61170(lVar3);
                  lVar3 = lVar4;
                }
                else {
                  lVar12 = unaff_x20;
                  func_0x000107c3e95c();
                  func_0x000107c61180();
                  if (lVar12 == 0) {
                    func_0x000107c61170(lVar3);
                    lVar3 = lVar4;
                  }
                  else {
                    lVar13 = unaff_x20;
                    func_0x000107c3fa0c();
                    func_0x000107c61180();
                    if (lVar13 != 0) {
                      lVar14 = unaff_x20;
                      func_0x000107c3eb54();
                      func_0x000107c61180();
                      if (lVar14 != 0) {
                        lVar15 = unaff_x20;
                        func_0x000107c5bdc4();
                        func_0x000107c61180();
                        if (lVar15 == 0) {
                          func_0x000107c61170(lVar3);
                          lVar3 = lVar4;
                        }
                        else {
                          lVar16 = unaff_x20;
                          func_0x000107c410f4();
                          func_0x000107c61180();
                          if (lVar16 == 0) {
                            func_0x000107c61170(lVar3);
                            lVar3 = lVar4;
                          }
                          else {
                            lVar17 = unaff_x20;
                            func_0x000107c5bd9c();
                            func_0x000107c61180();
                            if (lVar17 != 0) {
                              lVar18 = unaff_x20;
                              func_0x000107c40c98();
                              func_0x000107c61180();
                              if (lVar18 != 0) {
                                lVar19 = unaff_x20;
                                func_0x000107c40014();
                                func_0x000107c61180();
                                if (lVar19 == 0) {
                                  func_0x000107c61170(lVar3);
                                  lVar3 = lVar4;
                                }
                                else {
                                  lVar20 = unaff_x20;
                                  func_0x000107c40e38();
                                  func_0x000107c61180();
                                  if (lVar20 == 0) {
                                    func_0x000107c61170(lVar3);
                                    lVar3 = lVar4;
                                  }
                                  else {
                                    func_0x000107c3e794();
                                    func_0x000107c61180();
                                    lVar21 = 0;
                                    FUN_100f6a2a0();
                                    lVar22 = lVar21;
                                    func_0x000107c610f8();
                                    *(undefined8 *)(lVar22 + _DAT_112d4eed8) = 0;
                                    *(undefined8 *)(lVar22 + _DAT_112d4eee0) = 0;
                                    *(undefined8 *)(lVar22 + _DAT_112d4eee8) = 0;
                                    *(undefined8 *)(lVar22 + _DAT_112d4eef0) = 0;
                                    *(undefined8 *)(lVar22 + _DAT_112d4eef8) = 0;
                                    *(undefined8 *)(lVar22 + _DAT_112d4ef00) = 0;
                                    *(undefined8 *)(lVar22 + _DAT_112d4ef08) = 0;
                                    *(undefined8 *)(lVar22 + _DAT_112d4ef10) = 0;
                                    *(undefined8 *)(lVar22 + _DAT_112d4ef18) = 0;
                                    *(undefined8 *)(lVar22 + _DAT_112d4ef20) = 0;
                                    puVar1 = (undefined8 *)(lVar22 + _DAT_112d4ef28);
                                    *puVar1 = 0;
                                    puVar1[1] = 0;
                                    *(undefined1 *)(lVar22 + _DAT_112d4ef30) = 0;
                                    *(long *)(lVar22 + _DAT_112d4ef38) = unaff_x20;
                                    *(long *)(lVar22 + _DAT_112d4ef40) = lVar3;
                                    *(long *)(lVar22 + _DAT_112d4ef48) = lVar4;
                                    *(long *)(lVar22 + _DAT_112d4ef50) = lVar5;
                                    *(long *)(lVar22 + _DAT_112d4ef58) = lVar6;
                                    *(long *)(lVar22 + _DAT_112d4ef60) = lVar7;
                                    *(long *)(lVar22 + _DAT_112d4ef68) = lVar8;
                                    *(long *)(lVar22 + _DAT_112d4ef70) = lVar9;
                                    *(long *)(lVar22 + _DAT_112d4ef78) = lVar10;
                                    *(long *)(lVar22 + _DAT_112d4ef80) = lVar11;
                                    *(long *)(lVar22 + _DAT_112d4ef88) = lVar12;
                                    *(long *)(lVar22 + _DAT_112d4ef90) = lVar13;
                                    *(long *)(lVar22 + _DAT_112d4ef98) = lVar14;
                                    *(long *)(lVar22 + _DAT_112d4efa0) = lVar15;
                                    *(long *)(lVar22 + _DAT_112d4efa8) = lVar16;
                                    *(long *)(lVar22 + _DAT_112d4efb0) = lVar17;
                                    *(long *)(lVar22 + _DAT_112d4efb8) = lVar18;
                                    *(long *)(lVar22 + _DAT_112d4efc0) = lVar19;
                                    *(long *)(lVar22 + _DAT_112d4efc8) = lVar20;
                                    puVar2 = PTR_s_init_1125d9248;
                                    lStack_78 = lVar22;
                                    lStack_70 = lVar21;
                                    func_0x000107c61174();
                                    func_0x000107c61174();
                                    func_0x000107c61174();
                                    func_0x000107c61174();
                                    func_0x000107c61174();
                                    func_0x000107c61174();
                                    func_0x000107c61174();
                                    func_0x000107c61174();
                                    func_0x000107c61174();
                                    func_0x000107c61174();
                                    func_0x000107c61174(lVar13);
                                    func_0x000107c61174(lVar14);
                                    func_0x000107c61174(lVar15);
                                    func_0x000107c61174(lVar16);
                                    func_0x000107c61174(lVar17);
                                    func_0x000107c61174(lVar18);
                                    func_0x000107c61174(lVar19);
                                    func_0x000107c61174(lVar20);
                                    func_0x000107c61154(&lStack_78,puVar2);
                                    func_0x000100f6765c();
                                    lVar3 = lVar20;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 100f6c014; end: 100f6c03b; -[SCSpotlightCommentsStickerPickerEntryPoint begin] */

void FUN_100f6c014(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100f6b5e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f6c03c; end: 100f6c07f; -[SCSpotlightCommentsStickerPickerEntryPoint end] */

void FUN_100f6c03c(undefined8 param_1)

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



/* Entry: 100f6c080; end: 100f6c8fb;  */

void FUN_100f6c080(long param_1,long param_2,long param_3)

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
    goto LAB_100f6c110;
  }
  if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ef630)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000010,0x800000010ef109d0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0xd000000000000015;
      if (((param_2 == -0x2fffffffffffffeb) && (param_3 == -0x7ffffffef10e37a0)) ||
         (func_0x000107c605b8(0xd000000000000015,0x800000010ef1c860,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c53bc0();
      }
      else {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffec) && (param_3 == -0x7ffffffef10e69b0)) ||
           (func_0x000107c605b8(0xd000000000000014,0x800000010ef19650,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c52cf4();
        }
        else {
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef10e3780)) ||
             (func_0x000107c605b8(0xd000000000000016,0x800000010ef1c880,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c52d48();
          }
          else {
            uVar2 = 0xd000000000000013;
            if (((param_2 == -0x2fffffffffffffed) && (param_3 == -0x7ffffffef10e3760)) ||
               (func_0x000107c605b8(0xd000000000000013,0x800000010ef1c8a0,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c53bb8();
            }
            else {
              uVar2 = 0xd000000000000017;
              if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef10e36d0)) ||
                 (func_0x000107c605b8(0xd000000000000017,0x800000010ef1c930,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c53bcc();
              }
              else {
                if ((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef10ef610)) {
                  uVar2 = 0;
                  func_0x000107c605b8(0xd000000000000014,0x800000010ef109f0,param_2,param_3,0);
                  if ((uVar2 & 1) == 0) {
                    uVar2 = 0;
                    if (((param_2 == -0x2fffffffffffffe2) && (param_3 == -0x7ffffffef10e3690)) ||
                       (func_0x000107c605b8(0xd00000000000001e,0x800000010ef1c970,param_2,param_3,0)
                       , (uVar2 & 1) != 0)) {
                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c52cfc();
                    }
                    else {
                      uVar2 = 0xd00000000000001d;
                      if (((param_2 == -0x2fffffffffffffe3) && (param_3 == -0x7ffffffef10e5db0)) ||
                         (func_0x000107c605b8(0xd00000000000001d,0x800000010ef1a250,param_2,param_3,
                                              0), (uVar2 & 1) != 0)) {
                        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                        func_0x000107c605b0();
                        func_0x000107c52d4c();
                      }
                      else {
                        uVar2 = 0;
                        if (((param_2 == -0x2fffffffffffffee) && (param_3 == -0x7ffffffef10e5d30))
                           || (func_0x000107c605b8(0xd000000000000012,0x800000010ef1a2d0,param_2,
                                                   param_3,0), (uVar2 & 1) != 0)) {
                          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                          func_0x000107c605b0();
                          func_0x000107c52c90();
                        }
                        else {
                          uVar2 = 0;
                          if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef10ed550))
                             || (func_0x000107c605b8(0xd00000000000001a,0x800000010ef12ab0,param_2,
                                                     param_3,0), (uVar2 & 1) != 0)) {
                            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                            func_0x000107c605b0();
                            func_0x000107c53414();
                          }
                          else {
                            uVar2 = 0;
                            if (((param_2 == 0x655373706f6f6c62) && (param_3 == -0x11ff8c9a9c96898e)
                                ) || (func_0x000107c605b8(0x655373706f6f6c62,0xee00736563697672,
                                                          param_2,param_3,0), (uVar2 & 1) != 0)) {
                              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                              func_0x000107c605b0();
                              func_0x000107c52dac();
                            }
                            else {
                              if ((param_2 != -0x2fffffffffffffeb) ||
                                 (param_3 != -0x7ffffffef10e3740)) {
                                uVar2 = 0xd000000000000015;
                                func_0x000107c605b8(0xd000000000000015,0x800000010ef1c8c0,param_2,
                                                    param_3,0);
                                if ((uVar2 & 1) == 0) {
                                  uVar2 = 0;
                                  if (((param_2 == -0x2fffffffffffffe4) &&
                                      (param_3 == -0x7ffffffef10e36f0)) ||
                                     (func_0x000107c605b8(0xd00000000000001c,0x800000010ef1c910,
                                                          param_2,param_3,0), (uVar2 & 1) != 0)) {
                                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                    func_0x000107c605b0();
                                    func_0x000107c53d30();
                                  }
                                  else {
                                    uVar2 = 0xd000000000000021;
                                    if (((param_2 == -0x2fffffffffffffdf) &&
                                        (param_3 == -0x7ffffffef10e3720)) ||
                                       (func_0x000107c605b8(0xd000000000000021,0x800000010ef1c8e0,
                                                            param_2,param_3,0), (uVar2 & 1) != 0)) {
                                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                      func_0x000107c605b0();
                                      func_0x000107c598a8();
                                    }
                                    else {
                                      if ((param_2 != -0x2fffffffffffffe9) ||
                                         (param_3 != -0x7ffffffef10e36b0)) {
                                        uVar2 = 0xd000000000000017;
                                        func_0x000107c605b8(0xd000000000000017,0x800000010ef1c950,
                                                            param_2,param_3,0);
                                        if ((uVar2 & 1) == 0) {
                                          if ((param_2 != -0x2ffffffffffffff0) ||
                                             (param_3 != -0x7ffffffef10ed9b0)) {
                                            uVar2 = 0;
                                            func_0x000107c605b8(0xd000000000000010,
                                                                0x800000010ef12650,param_2,param_3,0
                                                               );
                                            if ((uVar2 & 1) == 0) {
                                              uVar2 = 0xd000000000000011;
                                              if (((param_2 != -0x2fffffffffffffef) ||
                                                  (param_3 != -0x7ffffffef10e34f0)) &&
                                                 (func_0x000107c605b8(0xd000000000000011,
                                                                      0x800000010ef1cb10,param_2,
                                                                      param_3,0), (uVar2 & 1) == 0))
                                              {
                                                func_0x000107c602fc(0x15);
                                                func_0x000107c6142c(0xe000000000000000);
                                                func_0x000107c5fb78(param_2,param_3);
                                                func_0x000107c60450("Fatal error",0xb,2,
                                                                    0xd000000000000013,
                                                                    0x800000010ef0fc20,
                                                                                                                                        
                                                  "SpotlightCommentsStickerPickerImpl/SCSpotlightCommentsStickerPickerEntryPoint.swift"
                                                  ,0x53,2,0x84,0);
                    /* WARNING: Does not return */
                                                pcVar1 = (code *)SoftwareBreakpoint(1,0x100f6c8fc);
                                                (*pcVar1)();
                                              }
                                              func_0x0001006732c8(param_1,*(undefined8 *)
                                                                           (param_1 + 0x18));
                                              func_0x000107c605b0();
                                              func_0x000107c53bc4();
                                              goto LAB_100f6c110;
                                            }
                                          }
                                          func_0x0001006732c8(param_1,*(undefined8 *)
                                                                       (param_1 + 0x18));
                                          func_0x000107c605b0();
                                          func_0x000107c536e0();
                                          goto LAB_100f6c110;
                                        }
                                      }
                                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                      func_0x000107c605b0();
                                      func_0x000107c53ae0();
                                    }
                                  }
                                  goto LAB_100f6c110;
                                }
                              }
                              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                              func_0x000107c605b0();
                              func_0x000107c598ac();
                            }
                          }
                        }
                      }
                    }
                    goto LAB_100f6c110;
                  }
                }
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c5a2fc();
              }
            }
          }
        }
      }
      goto LAB_100f6c110;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c5a3f8();
LAB_100f6c110:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100f6c8fc; end: 100f6c9a7; -[SCSpotlightCommentsStickerPickerEntryPoint setValue:forIvarName:] */

void FUN_100f6c8fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100f6c080(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100f6c9a8; end: 100f6cb6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6c9a8(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d4f068,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4f070,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4f078,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4f080,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4f088,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4f090,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4f098,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4f0a0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4f0a8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4f0b0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4f0b8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4f0c0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4f0c8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4f0d0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4f0d8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4f0e0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4f0e8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4f0f0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4f0f8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d4f100) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100f6cb70; end: 100f6cb8f; -[SCSpotlightCommentsStickerPickerEntryPoint init] */

void FUN_100f6cb70(void)

{
  FUN_100f6c9a8();
  return;
}



/* Entry: 100f6cb90; end: 100f6cbc3;  */

void FUN_100f6cb90(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f6cbc4; end: 100f6cd1b; -[SCSpotlightCommentsStickerPickerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6cbc4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d4f068);
  func_0x000107c61610(param_1 + _DAT_112d4f070);
  func_0x000107c61610(param_1 + _DAT_112d4f078);
  func_0x000107c61610(param_1 + _DAT_112d4f080);
  func_0x000107c61610(param_1 + _DAT_112d4f088);
  func_0x000107c61610(param_1 + _DAT_112d4f090);
  func_0x000107c61610(param_1 + _DAT_112d4f098);
  func_0x000107c61610(param_1 + _DAT_112d4f0a0);
  func_0x000107c61610(param_1 + _DAT_112d4f0a8);
  func_0x000107c61610(param_1 + _DAT_112d4f0b0);
  func_0x000107c61610(param_1 + _DAT_112d4f0b8);
  func_0x000107c61610(param_1 + _DAT_112d4f0c0);
  func_0x000107c61610(param_1 + _DAT_112d4f0c8);
  func_0x000107c61610(param_1 + _DAT_112d4f0d0);
  func_0x000107c61610(param_1 + _DAT_112d4f0d8);
  func_0x000107c61610(param_1 + _DAT_112d4f0e0);
  func_0x000107c61610(param_1 + _DAT_112d4f0e8);
  func_0x000107c61610(param_1 + _DAT_112d4f0f0);
  func_0x000107c61610(param_1 + _DAT_112d4f0f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d4f100));
  return;
}



/* Entry: 100f6cd1c; end: 100f6cd3b;  */

void FUN_100f6cd1c(void)

{
  func_0x000107c61168(&PTR_PTR_1127a58f8);
  return;
}



/* Entry: 100f6cd3c; end: 100f6cd4f;  */

bool FUN_100f6cd3c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100f6cd50; end: 100f6cdfb;  */

void FUN_100f6cd50(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 100f6cdfc; end: 100f6ce0b;  */

void FUN_100f6cdfc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 100f6ce0c; end: 100f6cedf;  */

void FUN_100f6ce0c(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar4 = *param_1;
  *(undefined8 *)(unaff_x22 + 0xf0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar4;
  uVar1 = *(undefined4 *)((long)param_1 + 0xc);
  *(undefined4 *)(unaff_x22 + 0xe4) = *(undefined4 *)(param_1 + 1);
  *(undefined8 **)(unaff_x22 + 0xe8) = param_1;
  *(undefined4 *)(unaff_x22 + 0x198) = uVar1;
  uVar3 = param_1[3];
  uVar4 = param_1[2];
  *(undefined8 *)(unaff_x22 + 0x19c) = param_1[4];
  uVar6 = param_1[6];
  uVar5 = param_1[5];
  *(undefined8 *)(unaff_x22 + 0x108) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x100) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x118) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x110) = uVar5;
  uVar4 = param_1[7];
  *(undefined8 *)(unaff_x22 + 0x128) = param_1[8];
  *(undefined8 *)(unaff_x22 + 0x120) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x130) = param_1[9];
  *(undefined1 *)(unaff_x22 + 0xb1) = *(undefined1 *)(param_1 + 10);
  uVar3 = 0;
  func_0x000107c5fcec();
  puVar2 = PTR___sScMMa_11034fc70;
  uVar4 = uVar3;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x138) = uVar4;
  uVar4 = 0x112d45220;
  FUN_100f6e73c(0x112d45220,puVar2,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x140) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x148) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f6cee0,uVar3,uVar4);
  return;
}



/* Entry: 100f6cee0; end: 100f6d0a7;  */

void FUN_100f6cee0(void)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined1 uVar6;
  long lVar7;
  undefined4 uVar8;
  long lVar9;
  long unaff_x22;
  undefined4 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar4 = *(undefined8 **)(unaff_x22 + 0xe8);
  uVar12 = puVar4[4];
  uVar15 = puVar4[7];
  uVar13 = puVar4[6];
  uVar19 = puVar4[1];
  uVar18 = *puVar4;
  uVar17 = puVar4[3];
  uVar16 = puVar4[2];
  *(undefined8 *)(unaff_x22 + 0x38) = puVar4[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar19;
  *(undefined8 *)(unaff_x22 + 0x10) = uVar18;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar17;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar16;
  uVar12 = puVar4[0xc];
  uVar15 = puVar4[0xf];
  uVar13 = puVar4[0xe];
  uVar19 = puVar4[9];
  uVar18 = puVar4[8];
  uVar17 = puVar4[0xb];
  uVar16 = puVar4[10];
  *(undefined8 *)(unaff_x22 + 0x78) = puVar4[0xd];
  *(undefined8 *)(unaff_x22 + 0x70) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar19;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar18;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar17;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar16;
  iVar2 = (int)unaff_x22 + 0x10;
  FUN_100f6e77c();
  if (iVar2 == 1) {
    uVar12 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uVar10 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 8);
    uVar8 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 0xc);
    uVar13 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    func_0x000107c42378(&uStack_60,*(undefined8 *)(*(long *)(unaff_x22 + 0xf0) + 8));
    uVar15 = 0;
    uVar16 = 0;
    uVar6 = 1;
    uVar17 = 0;
    uVar18 = 0;
  }
  else {
    if (*(char *)(unaff_x22 + 0x7c) != '\x01') {
      lVar11 = *(long *)(unaff_x22 + 0x74);
      lVar7 = *(long *)(unaff_x22 + 0x6c);
      lVar9 = *(long *)(unaff_x22 + 100);
      plVar3 = (long *)0xf0;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x150) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_100f6d0a8;
      lVar14 = *(long *)(unaff_x22 + 0xf0);
      plVar3[7] = lVar11;
      plVar3[8] = lVar14;
      plVar3[5] = lVar9;
      plVar3[6] = lVar7;
      lVar14 = 0;
      func_0x000107c5fcec();
      puVar1 = PTR___sScMMa_11034fc70;
      lVar7 = lVar14;
      func_0x000107c5fce8();
      plVar3[9] = lVar7;
      lVar7 = 0x112d45220;
      FUN_100f6e73c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
      func_0x000107c5fca8();
      plVar3[10] = lVar14;
      plVar3[0xb] = lVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_100f6d3dc,lVar14,lVar7);
      return;
    }
    uVar6 = *(undefined1 *)(unaff_x22 + 0xb1);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x128);
    uStack_58 = *(undefined8 *)(unaff_x22 + 0x19c);
    uStack_60 = *(undefined8 *)(unaff_x22 + 0x108);
    uStack_50 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar8 = *(undefined4 *)(unaff_x22 + 0x198);
    uVar10 = *(undefined4 *)(unaff_x22 + 0xe4);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x100);
  }
  lVar14 = *(long *)(unaff_x22 + 0xf0);
  *(undefined8 *)(unaff_x22 + 0x98) = uVar16;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar15;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar18;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar17;
  *(undefined1 *)(unaff_x22 + 0xb0) = uVar6;
  *(undefined8 *)(unaff_x22 + 0xb4) = uVar12;
  *(undefined4 *)(unaff_x22 + 0xbc) = uVar10;
  *(undefined4 *)(unaff_x22 + 0xc0) = uVar8;
  *(undefined8 *)(unaff_x22 + 0xc4) = uVar13;
  *(undefined8 *)(unaff_x22 + 0xcc) = uStack_60;
  *(undefined8 *)(unaff_x22 + 0xd4) = uStack_58;
  *(undefined8 *)(unaff_x22 + 0xdc) = uStack_50;
  uVar12 = *(undefined8 *)(lVar14 + 0x28);
  lVar7 = *(long *)(lVar14 + 0x30);
  func_0x0001000a8868(lVar14 + 0x10,uVar12);
  uVar13 = *(undefined8 *)(lVar14 + 8);
  piVar5 = *(int **)(lVar7 + 0x10);
  iVar2 = *piVar5;
  plVar3 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x168) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100f6d14c;
                    /* WARNING: Could not recover jumptable at 0x000100f6d04c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar2 + (long)piVar5))
            (uVar13,(undefined8 *)(unaff_x22 + 0xb4),(undefined8 *)(unaff_x22 + 0x90),1,uVar12,lVar7
            );
  return;
}



/* Entry: 100f6d0a8; end: 100f6d113;  */

void FUN_100f6d0a8(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x158) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x150));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar4 + 0x160) = param_1;
    uVar2 = *(undefined8 *)(lVar4 + 0x140);
    uVar3 = *(undefined8 *)(lVar4 + 0x148);
    pcVar1 = FUN_100f6d114;
  }
  else {
    uVar2 = *(undefined8 *)(lVar4 + 0x140);
    uVar3 = *(undefined8 *)(lVar4 + 0x148);
    pcVar1 = FUN_100f6d2e0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 100f6d114; end: 100f6d14b;  */

void FUN_100f6d114(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x138));
                    /* WARNING: Could not recover jumptable at 0x000100f6d148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x160));
  return;
}



/* Entry: 100f6d14c; end: 100f6d1af;  */

void FUN_100f6d14c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x170) = param_1;
  *(undefined8 *)(lVar2 + 0x178) = param_2;
  *(undefined8 *)(lVar2 + 0x180) = param_3;
  *(undefined8 *)(lVar2 + 0x188) = param_4;
  *(long *)(lVar2 + 400) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x168));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100f6d1b0;
  }
  else {
    pcVar1 = (code *)0x100f6d314;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0x140),*(undefined8 *)(lVar2 + 0x148));
  return;
}



/* Entry: 100f6d1b0; end: 100f6d2df;  */

void FUN_100f6d1b0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  ulong uVar7;
  
  uVar7 = *(ulong *)(unaff_x22 + 0x188);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x178);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x138));
  lVar5 = 0x112d4f218;
  func_0x0001000285a8(0x112d4f218,&UNK_10d9151c0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x18) = 2;
  *(undefined8 *)(lVar5 + 0x10) = 1;
  *(undefined8 *)(lVar5 + 0x20) = uVar1;
  *(undefined8 *)(lVar5 + 0x28) = uVar2;
  *(undefined2 *)(lVar5 + 0x30) = 0x201;
  uVar1 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x178);
  if (uVar7 >> 0x3c < 0xf) {
    FUN_100de78a0(uVar1,uVar3);
    func_0x00010006c00c(uVar2,uVar4);
    FUN_100de78a0(uVar1,uVar3);
    lVar6 = 1;
    FUN_100f6e804(1,2,1,lVar5);
    *(undefined8 *)(lVar6 + 0x10) = 2;
    *(undefined8 *)(lVar6 + 0x38) = uVar1;
    *(undefined8 *)(lVar6 + 0x40) = uVar3;
    *(undefined2 *)(lVar6 + 0x48) = 0x101;
    func_0x00010006c090(uVar2,uVar4);
    func_0x0001000b44c0(uVar1,uVar3);
  }
  else {
    func_0x00010006c00c(uVar2,uVar4);
    func_0x00010006c090(uVar2,uVar4);
    lVar6 = lVar5;
  }
  func_0x0001000b44c0(uVar1,uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100f6d2dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar6);
  return;
}



/* Entry: 100f6d2e0; end: 100f6d347;  */

void FUN_100f6d2e0(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x138));
                    /* WARNING: Could not recover jumptable at 0x000100f6d310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100f6d348; end: 100f6d3db;  */

void FUN_100f6d348(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar3;
  uVar3 = 0x112d45220;
  FUN_100f6e73c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f6d3dc,uVar2,uVar3);
  return;
}



/* Entry: 100f6d3dc; end: 100f6d4af;  */

void FUN_100f6d3dc(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  puVar3 = PTR__OBJC_CLASS___AVAssetImageGenerator_1126ba170;
  func_0x000107c610f8();
  func_0x000107c457a0();
  *(undefined **)(unaff_x22 + 0x60) = puVar3;
  func_0x000107c52860();
  uVar5 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uVar1 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 8);
  uVar2 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 0xc);
  uVar6 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar5;
  *(undefined4 *)(unaff_x22 + 0xc0) = uVar1;
  *(undefined4 *)(unaff_x22 + 0xc4) = uVar2;
  *(undefined8 *)(unaff_x22 + 200) = uVar6;
  func_0x000107c57e18(puVar3);
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar5;
  *(undefined4 *)(unaff_x22 + 0xd8) = uVar1;
  *(undefined4 *)(unaff_x22 + 0xdc) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar6;
  func_0x000107c57e14(puVar3);
  plVar4 = (long *)(ulong)*(uint *)(
                                   PTR___sSo21AVAssetImageGeneratorC12AVFoundationE5image2atSo10CGImageRefaAD_So6CMTimea10actualTimetAI_tYaKFTu_11034d578
                                   + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100f6d4b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb8888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___sSo21AVAssetImageGeneratorC12AVFoundationE5image2atSo10CGImageRefaAD_So6CMTimea10actualTimetAI_tYaKF_11034d570
  )(*(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x30),
    *(undefined8 *)(unaff_x22 + 0x38));
  return;
}



/* Entry: 100f6d4b0; end: 100f6d50b;  */

void FUN_100f6d4b0(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x70) = param_1;
  *(long *)(lVar2 + 0x78) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x68));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100f6d50c;
  }
  else {
    pcVar1 = FUN_100f6d920;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0x50),*(undefined8 *)(lVar2 + 0x58));
  return;
}



/* Entry: 100f6d50c; end: 100f6d5cb;  */

void FUN_100f6d50c(void)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  long lVar7;
  undefined8 uVar8;
  
  lVar7 = *(long *)(unaff_x22 + 0x40);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c610f8();
  func_0x000107c45af0();
  *(undefined **)(unaff_x22 + 0x80) = puVar3;
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x10);
  lVar2 = *(long *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x88) = uVar4;
  func_0x000107c614f0(uVar4);
  uVar8 = *(undefined8 *)(lVar7 + 0x48);
  piVar6 = *(int **)(lVar2 + 0x10);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x90) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100f6d5cc;
                    /* WARNING: Could not recover jumptable at 0x000100f6d5c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(puVar3,2,uVar8,uVar4,lVar2);
  return;
}



/* Entry: 100f6d5cc; end: 100f6d64f;  */

void FUN_100f6d5cc(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x90));
  uVar3 = *(undefined8 *)(lVar4 + 0x88);
  if (unaff_x20 == 0) {
    func_0x000107c615e8(uVar3);
    *(undefined8 *)(lVar4 + 0x98) = param_1;
    uVar3 = *(undefined8 *)(lVar4 + 0x50);
    uVar2 = *(undefined8 *)(lVar4 + 0x58);
    pcVar1 = FUN_100f6d650;
  }
  else {
    func_0x000107c614ac();
    func_0x000107c615e8(uVar3);
    uVar3 = *(undefined8 *)(lVar4 + 0x50);
    uVar2 = *(undefined8 *)(lVar4 + 0x58);
    pcVar1 = FUN_100f6d750;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar3,uVar2);
  return;
}



/* Entry: 100f6d650; end: 100f6d74f;  */

void FUN_100f6d650(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  puVar1 = &UNK_11036eaa8;
  func_0x000107c613fc(&UNK_11036eaa8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar5;
  *(undefined8 *)(puVar1 + 0x18) = uVar4;
  func_0x000107c61174(uVar4);
  uVar4 = 0x112d4f220;
  func_0x0001000285a8(0x112d4f220,&UNK_10d915048);
  uVar2 = 0x10;
  func_0x00010488e6a4(0x10,3,0x2c,3,0,0,&UNK_10d915040,puVar1,uVar4);
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar2;
  func_0x000107c61574(puVar1);
  plVar3 = (long *)(ulong)*(uint *)(PTR___sScT5valuexvgTu_11034fdc0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa8) = plVar3;
  uVar5 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100f6d854;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT5valuexvg_11034fdb8)
            (unaff_x22 + 0x20,uVar2,uVar4,uVar5,PTR___ss5ErrorWS_11034ee10);
  return;
}



/* Entry: 100f6d750; end: 100f6d853;  */

void FUN_100f6d750(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
  puVar1 = &UNK_11036eaa8;
  func_0x000107c613fc(&UNK_11036eaa8,0x20,7);
  *(undefined **)(puVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(puVar1 + 0x18) = uVar5;
  func_0x000107c61174(uVar5);
  uVar5 = 0x112d4f220;
  func_0x0001000285a8(0x112d4f220,&UNK_10d915048);
  uVar2 = 0x10;
  func_0x00010488e6a4(0x10,3,0x2c,3,0,0,&UNK_10d915040,puVar1,uVar5);
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar2;
  func_0x000107c61574(puVar1);
  plVar3 = (long *)(ulong)*(uint *)(PTR___sScT5valuexvgTu_11034fdc0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa8) = plVar3;
  uVar4 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100f6d854;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT5valuexvg_11034fdb8)
            (unaff_x22 + 0x20,uVar2,uVar5,uVar4,PTR___ss5ErrorWS_11034ee10);
  return;
}



/* Entry: 100f6d854; end: 100f6d8bb;  */

void FUN_100f6d854(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xa0);
  *(long *)(lVar3 + 0xb0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xa8));
  func_0x000107c61574(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_100f6d8bc;
  }
  else {
    pcVar2 = FUN_100f6d960;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar2,*(undefined8 *)(lVar3 + 0x50),*(undefined8 *)(lVar3 + 0x58));
  return;
}



/* Entry: 100f6d8bc; end: 100f6d91f;  */

void FUN_100f6d8bc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x70));
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100f6d91c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x20));
  return;
}



/* Entry: 100f6d920; end: 100f6d95f;  */

void FUN_100f6d920(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100f6d95c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100f6d960; end: 100f6d9bf;  */

void FUN_100f6d960(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x70));
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100f6d9bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100f6d9c0; end: 100f6d9db;  */

void FUN_100f6d9c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f6d9dc,0,0);
  return;
}



/* Entry: 100f6d9dc; end: 100f6dcf3;  */

void FUN_100f6d9dc(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  code *UNRECOVERED_JUMPTABLE;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 *puVar15;
  ulong uVar16;
  long lVar17;
  long unaff_x22;
  long *plVar18;
  ulong uVar19;
  
  uVar14 = *(ulong *)(unaff_x22 + 0x18);
  uVar19 = uVar14 & 0xffffffffffffff8;
  if (uVar14 >> 0x3e == 0) {
    uVar16 = *(ulong *)(uVar19 + 0x10);
    uVar13 = uVar14;
  }
  else {
    uVar16 = uVar19;
    if (0x7fffffffffffffff < uVar14) {
      uVar16 = uVar14;
    }
    func_0x000107c60480();
    uVar13 = *(ulong *)(unaff_x22 + 0x18);
  }
  lVar12 = param_2;
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar16 != 0) {
    uVar7 = 0;
    do {
      while( true ) {
        if ((uVar14 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar19 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100f6dcdc);
            (*UNRECOVERED_JUMPTABLE)();
          }
          uVar5 = *(ulong *)(uVar13 + 0x20 + uVar7 * 8);
          func_0x000107c61174();
          lVar12 = param_2;
        }
        else {
          lVar12 = *(long *)(unaff_x22 + 0x18);
          uVar5 = uVar7;
          FUN_100f95e24();
        }
        uVar1 = uVar7 + 1;
        if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100f6dcd8);
          (*UNRECOVERED_JUMPTABLE)();
        }
        uVar6 = uVar5;
        func_0x000107c60bb8();
        func_0x000107c61180();
        if (uVar6 != 0) break;
        func_0x000107c61170(uVar5);
        param_2 = lVar12;
        uVar7 = uVar7 + 1;
        if (uVar1 == uVar16) goto LAB_100f6db44;
      }
      uVar7 = uVar6;
      func_0x000107c5ee30();
      param_2 = lVar12;
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar6);
      puVar8 = puVar10;
      func_0x000107c61558();
      puVar9 = puVar10;
      if (((ulong)puVar8 & 1) == 0) {
        param_2 = *(long *)(puVar10 + 0x10) + 1;
        puVar9 = (undefined *)0x0;
        FUN_100f23260(0,param_2,1,puVar10);
      }
      uVar5 = *(ulong *)(puVar9 + 0x10);
      lVar17 = uVar5 + 1;
      puVar10 = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar5) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
        param_2 = lVar17;
        FUN_100f23260(puVar10,lVar17,1,puVar9);
      }
      *(long *)(puVar10 + 0x10) = lVar17;
      *(ulong *)(puVar10 + uVar5 * 0x10 + 0x20) = uVar7;
      *(long *)(puVar10 + uVar5 * 0x10 + 0x28) = lVar12;
      lVar12 = param_2;
      uVar7 = uVar1;
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    } while (uVar1 != uVar16);
  }
LAB_100f6db44:
  lVar17 = *(long *)(puVar10 + 0x10);
  if (lVar17 == 0) {
    func_0x000107c6142c(puVar10);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000100f72b74(0,lVar17,0);
    plVar18 = (long *)(puVar10 + 0x28);
    do {
      lVar3 = plVar18[-1];
      lVar4 = *plVar18;
      lVar12 = lVar4;
      func_0x00010006c00c(lVar3);
      uVar14 = *(ulong *)(puVar8 + 0x10);
      lVar2 = uVar14 + 1;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar14) {
        lVar12 = lVar2;
        func_0x000100f72b74(1 < *(ulong *)(puVar8 + 0x18),lVar2,1);
      }
      plVar18 = plVar18 + 2;
      *(long *)(puVar8 + 0x10) = lVar2;
      *(long *)(puVar8 + uVar14 * 0x18 + 0x20) = lVar3;
      *(long *)(puVar8 + uVar14 * 0x18 + 0x28) = lVar4;
      *(undefined2 *)(puVar8 + uVar14 * 0x18 + 0x30) = 0;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    func_0x000107c6142c(puVar10);
  }
  if (*(long *)(puVar8 + 0x10) == 0) {
    puVar15 = *(undefined1 **)(unaff_x22 + 0x20);
    func_0x000107c6142c(puVar8);
    func_0x000107c60bb8();
    func_0x000107c61180();
    if (puVar15 == (undefined1 *)0x0) {
      FUN_100f6e7a0();
      func_0x000107c613f8(&UNK_11036eb40,puVar15,0,0);
      *puVar15 = 2;
      func_0x000107c61654();
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      goto LAB_100f6dc7c;
    }
    puVar11 = puVar15;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar15);
    puVar8 = (undefined *)0x112d4f218;
    func_0x0001000285a8(0x112d4f218,&UNK_10d9151c0);
    func_0x000107c613fc();
    *(undefined8 *)(puVar8 + 0x18) = 2;
    *(undefined8 *)(puVar8 + 0x10) = 1;
    *(undefined1 **)(puVar8 + 0x20) = puVar11;
    *(long *)(puVar8 + 0x28) = lVar12;
    *(undefined2 *)(puVar8 + 0x30) = 0;
  }
  **(undefined8 **)(unaff_x22 + 0x10) = puVar8;
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_100f6dc7c:
                    /* WARNING: Could not recover jumptable at 0x000100f6dc98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 100f6dcf4; end: 100f6dd93;  */

void FUN_100f6dcf4(undefined8 param_1,undefined8 param_2,undefined2 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa0) = unaff_x20;
  *(undefined2 *)(unaff_x22 + 0xf0) = param_3;
  *(undefined8 *)(unaff_x22 + 0x90) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar2;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar3;
  uVar3 = 0x112d45220;
  FUN_100f6e73c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar3;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar2;
  *(undefined8 *)(unaff_x22 + 200) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f6dd94,uVar2,uVar3);
  return;
}



/* Entry: 100f6dd94; end: 100f6de6f;  */

void FUN_100f6dd94(long param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x50);
  *(long *)(unaff_x22 + 0xd0) = *(long *)(unaff_x22 + 0x50);
  if (*(long *)(unaff_x22 + 0x50) != 0) {
    func_0x000107c5fce8();
    *(long *)(unaff_x22 + 0xd8) = param_1;
    if (param_1 == 0) {
      param_1 = 0;
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
      func_0x000107c614f0();
      func_0x000107c5fca8();
    }
    *(long *)(unaff_x22 + 0xe0) = param_1;
    *(undefined8 *)(unaff_x22 + 0xe8) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_100f6de70,param_1);
    return;
  }
  puVar1 = *(undefined1 **)(unaff_x22 + 0xb0);
  func_0x000107c61574();
  FUN_100f6e7a0();
  func_0x000107c613f8(&UNK_11036eb40,puVar1,0,0);
  *puVar1 = 0;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000100f6de40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100f6de70; end: 100f6df77;  */

void FUN_100f6de70(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100f6df78;
  lVar2 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar2,0);
  func_0x000107c5ee20(uVar3,uVar1);
  puVar4 = &UNK_11036ea58;
  func_0x000107c613fc(&UNK_11036ea58,0x18,7);
  puVar6 = (undefined8 *)(unaff_x22 + 0x50);
  *puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  *(long *)(puVar4 + 0x10) = lVar2;
  *(code **)(unaff_x22 + 0x70) = FUN_100f6e7e0;
  *(undefined **)(unaff_x22 + 0x78) = puVar4;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_100f91b08;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_11036ea70;
  func_0x000107c60bc4(puVar6);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
  func_0x000107c40ba4(uVar5);
  func_0x000107c60bd0(puVar6);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 100f6df78; end: 100f6dfeb;  */

void FUN_100f6df78(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x100f6dfb4,*(undefined8 *)(*unaff_x22 + 0xe0),*(undefined8 *)(*unaff_x22 + 0xe8));
  return;
}



/* Entry: 100f6dfec; end: 100f6e09b;  */

void FUN_100f6dfec(void)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  puVar1 = *(undefined1 **)(unaff_x22 + 0xb0);
  func_0x000107c61574();
  lVar2 = *(long *)(unaff_x22 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
    func_0x000107c615e8(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100f6e044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(uVar4,lVar2);
    return;
  }
  FUN_100f6e7a0();
  func_0x000107c613f8(&UNK_11036eb40,puVar1,0,0);
  *puVar1 = 1;
  func_0x000107c61654();
  func_0x000107c615e8(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100f6e098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100f6e09c; end: 100f6e107;  */

void FUN_100f6e09c(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_1 != 0) {
    func_0x000107c4a77c();
    func_0x000107c61180();
    if (param_1 != 0) {
      lVar2 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      goto LAB_100f6e0e8;
    }
  }
  lVar2 = 0;
  param_2 = 0;
LAB_100f6e0e8:
  plVar1 = *(long **)(*(long *)(param_3 + 0x40) + 0x28);
  *plVar1 = lVar2;
  plVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(param_3);
  return;
}



/* Entry: 100f6e108; end: 100f6e10f;  */

undefined1 FUN_100f6e108(void)

{
  undefined1 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 100f6e110; end: 100f6e15b;  */

void FUN_100f6e110(long *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long unaff_x20;
  long unaff_x22;
  long lVar6;
  long lVar7;
  
  plVar4 = (long *)0x1b0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100f6e15c;
  lVar5 = *param_1;
  plVar4[0x1e] = unaff_x20;
  plVar4[0x1f] = lVar5;
  uVar1 = *(undefined4 *)((long)param_1 + 0xc);
  *(int *)((long)plVar4 + 0xe4) = (int)param_1[1];
  plVar4[0x1d] = (long)param_1;
  *(undefined4 *)(plVar4 + 0x33) = uVar1;
  lVar3 = param_1[3];
  lVar5 = param_1[2];
  *(long *)((long)plVar4 + 0x19c) = param_1[4];
  lVar7 = param_1[6];
  lVar6 = param_1[5];
  plVar4[0x21] = lVar3;
  plVar4[0x20] = lVar5;
  plVar4[0x23] = lVar7;
  plVar4[0x22] = lVar6;
  lVar5 = param_1[7];
  plVar4[0x25] = param_1[8];
  plVar4[0x24] = lVar5;
  plVar4[0x26] = param_1[9];
  *(char *)((long)plVar4 + 0xb1) = (char)param_1[10];
  lVar3 = 0;
  func_0x000107c5fcec();
  puVar2 = PTR___sScMMa_11034fc70;
  lVar5 = lVar3;
  func_0x000107c5fce8();
  plVar4[0x27] = lVar5;
  lVar5 = 0x112d45220;
  FUN_100f6e73c(0x112d45220,puVar2,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar4[0x28] = lVar3;
  plVar4[0x29] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f6cee0,lVar3,lVar5);
  return;
}



/* Entry: 100f6e15c; end: 100f6e1a3;  */

void FUN_100f6e15c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100f6e1a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100f6e1a4; end: 100f6e207;  */

void FUN_100f6e1a4(long param_1,long param_2,ushort param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  plVar4 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100f6e208;
  plVar4[0x13] = param_2;
  plVar4[0x14] = unaff_x20;
  *(ushort *)(plVar4 + 0x1e) = param_3 & 0xff01;
  plVar4[0x12] = param_1;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  plVar4[0x15] = lVar2;
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar4[0x16] = lVar3;
  lVar3 = 0x112d45220;
  FUN_100f6e73c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  plVar4[0x17] = lVar3;
  func_0x000107c5fca8();
  plVar4[0x18] = lVar2;
  plVar4[0x19] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f6dd94,lVar2,lVar3);
  return;
}



/* Entry: 100f6e208; end: 100f6e25f;  */

void FUN_100f6e208(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100f6e25c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100f6e260; end: 100f6e2eb;  */

void FUN_100f6e260(void)

{
  FUN_100f6e77c();
  func_0x0001000285a8(0x112d4f1d8,&UNK_10d915010);
  func_0x000107c61538();
  return;
}



/* Entry: 100f6e2ec; end: 100f6e32f;  */

void FUN_100f6e2ec(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d4f130 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000107c5f330(0xff);
  puVar2 = PTR___s7SwiftUI14_TaskModifier2VAA12ViewModifierAAMc_110348a18;
  func_0x000107c61520(PTR___s7SwiftUI14_TaskModifier2VAA12ViewModifierAAMc_110348a18,uVar1);
  puRam0000000112d4f130 = puVar2;
  return;
}



/* Entry: 100f6e330; end: 100f6e497;  */

void FUN_100f6e330(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11036e718;
  if (lRam0000000112d4f170 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112d4f170 = param_1;
  }
  return;
}



/* Entry: 100f6e498; end: 100f6e4cf;  */

/* WARNING: Possible PIC construction at 0x000100f6e4bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f6e4c0) */

void FUN_100f6e498(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + 8));
  func_0x0001000834e4(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 100f6e4d0; end: 100f6e5df;  */

undefined1 * FUN_100f6e4d0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  lVar3 = *(long *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(long *)(param_1 + 0x28) = lVar3;
  pcVar2 = (code *)**(undefined8 **)(lVar3 + -8);
  func_0x000107c61174();
  (*pcVar2)(param_1 + 0x10,param_2 + 0x10,lVar3);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  func_0x000107c6157c();
  func_0x000107c6157c(uVar1);
  return param_1;
}



/* Entry: 100f6e5e0; end: 100f6e653;  */

undefined1 * FUN_100f6e5e0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  func_0x000107c61170(uVar1);
  func_0x0001000834e4(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  func_0x000107c61574(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  func_0x000107c61574(uVar1);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  return param_1;
}



/* Entry: 100f6e654; end: 100f6e73b;  */

int FUN_100f6e654(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100f6e73c; end: 100f6e77b;  */

void FUN_100f6e73c(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}


