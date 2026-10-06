/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103afbb58; end: 103afbba3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103afbb58(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fe9ee0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103afbba4; end: 103afbc03; -[_TtC28CameraModeActivationServices44MainCameraScopedCameraModeActivationServices init] */

void FUN_103afbba4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CameraModeActivationServices.MainCameraScopedCameraModeActivationServices",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103afbbd0);
  (*pcVar1)();
}



/* Entry: 103afbc04; end: 103afbc13; -[_TtC28CameraModeActivationServices44MainCameraScopedCameraModeActivationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103afbc04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fe9ee0));
  return;
}



/* Entry: 103afbc14; end: 103afbcbf;  */

void FUN_103afbc14(void)

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



/* Entry: 103afbcc0; end: 103afbcfb;  */

void FUN_103afbcc0(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 103afbcfc; end: 103afbd17; -[SCCameraModeActivationState description] */

void FUN_103afbcfc(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103afbd18; end: 103afbd5f; -[SCCameraModeActivationState init] */

void FUN_103afbd18(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "CameraModeActivationServices/CameraModeActivationStateWrapper.swift",0x43,2,
                      0x2e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103afbd60);
  (*pcVar1)();
}



/* Entry: 103afbd60; end: 103afbd63; -[SCCameraModeActivationState copyWithZone:] */

void FUN_103afbd60(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103afbd64; end: 103afbd6b; +[SCCameraModeActivationState initialized] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103afbd64(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_112fe9f10) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103afbd6c; end: 103afbd73; +[SCCameraModeActivationState active] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103afbd6c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_112fe9f10) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103afbd74; end: 103afbd7b; +[SCCameraModeActivationState inactive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103afbd74(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_112fe9f10) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103afbd7c; end: 103afbdcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103afbd7c(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_112fe9f10) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103afbdcc; end: 103afbdf7; -[SCCameraModeActivationState matchInitialized:active:inactive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103afbdcc(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  if ((*(char *)(param_1 + _DAT_112fe9f10) != '\0') &&
     (param_3 = param_4, *(char *)(param_1 + _DAT_112fe9f10) != '\x01')) {
    param_3 = param_5;
  }
                    /* WARNING: Could not recover jumptable at 0x000103afbdf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 103afbdf8; end: 103afbe2b;  */

void FUN_103afbdf8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103afbe2c; end: 103afbe9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103afbe2c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong auStack_50 [6];
  
  uVar1 = param_1;
  func_0x00010080b714();
  uVar2 = uVar1;
  func_0x000107c610f8();
  puVar3 = auStack_50;
  if ((param_1 & 0xff) != 0) {
    puVar3 = auStack_50 + 2;
    if (((uint)param_1 & 0xff) != 1) {
      puVar3 = auStack_50 + 4;
    }
  }
  *(char *)(uVar2 + _DAT_112fe9f10) = (char)param_1;
  *puVar3 = uVar2;
  puVar3[1] = uVar1;
  func_0x000107c61154(puVar3,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103afbe9c; end: 103afc003;  */

int FUN_103afbe9c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103afbf18;
        goto LAB_103afbefc;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103afbefc:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_103afbf18:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103afc004; end: 103afc043;  */

void FUN_103afc004(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe9f40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc52454;
  func_0x000107c61520(&UNK_10dc52454,&UNK_1106d01b8);
  puRam0000000112fe9f40 = puVar1;
  return;
}



/* Entry: 103afc044; end: 103afc117;  */

void FUN_103afc044(void)

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



/* Entry: 103afc118; end: 103afc137;  */

void FUN_103afc118(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 103afc138; end: 103afc15b; -[SCCameraModeActivationInfo description] */

void FUN_103afc138(void)

{
  FUN_103afc52c();
  func_0x000102a32ff8();
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103afc15c; end: 103afc1a3;  */

undefined8 FUN_103afc15c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_103afc52c();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 103afc1a4; end: 103afc1eb; -[SCCameraModeActivationInfo init] */

void FUN_103afc1a4(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "CameraModeActivationServices/CameraModeActivationInfoWrapper.swift",0x42,2,
                      0x50,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103afc1ec);
  (*pcVar1)();
}



/* Entry: 103afc1ec; end: 103afc1ef; -[SCCameraModeActivationInfo copyWithZone:] */

void FUN_103afc1ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103afc1f0; end: 103afc22f; +[SCCameraModeActivationInfo fullScreenLensModeWithActivationState:shouldBlockSwipeToDismiss:] */

void FUN_103afc1f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000103afc678();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103afc230; end: 103afc267; +[SCCameraModeActivationInfo timerModeWithActivationState:] */

void FUN_103afc230(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_103afc740();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103afc268; end: 103afc2cb; +[SCCameraModeActivationInfo continuousCaptureModeWithActivationState:workflowState:timelineConfiguration:] */

void FUN_103afc268(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_5);
  uVar1 = param_3;
  FUN_103afc800(param_3,param_4,param_5);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103afc2cc; end: 103afc40b; +[SCCameraModeActivationInfo handsFreeCameraModeWithActivationState:] */

void FUN_103afc2cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_103afc8d4();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103afc40c; end: 103afc47f; -[SCCameraModeActivationInfo matchFullScreenLensMode:timerMode:continuousCaptureMode:handsFreeCameraMode:] */

void FUN_103afc40c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  func_0x000107c61174();
  func_0x000103afc304(FUN_103afcb60,auStack_40,0x103afcb78,auStack_60,0x103afcb88,auStack_80,
                      0x103afcba0,auStack_a0);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103afc480; end: 103afc4b3;  */

void FUN_103afc480(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103afc4b4; end: 103afc51b; -[SCCameraModeActivationInfo .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103afc4d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103afc4f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103afc4d4) */
/* WARNING: Removing unreachable block (ram,0x000103afc4f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103afc4b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fe9f50));
  return;
}



/* Entry: 103afc51c; end: 103afc52b;  */

ulong FUN_103afc51c(ulong param_1)

{
  if (3 < param_1) {
    param_1 = 4;
  }
  return param_1;
}



/* Entry: 103afc52c; end: 103afc73f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_103afc52c(long param_1)

{
  byte bVar1;
  code *pcVar2;
  
  bVar1 = *(byte *)(param_1 + _DAT_112fe9f48);
  if (1 < bVar1) {
    if (bVar1 != 2) {
      if (*(long *)(param_1 + _DAT_112fe9f80) != 0) {
        return (ulong)*(byte *)(*(long *)(param_1 + _DAT_112fe9f80) + _DAT_112fe9f10) |
               0xc000000000000000;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103afc670);
      (*pcVar2)();
    }
    if (*(long *)(param_1 + _DAT_112fe9f68) != 0) {
      if (*(char *)(param_1 + _DAT_112fe9f70 + 8) != '\x01') {
        bVar1 = *(byte *)(*(long *)(param_1 + _DAT_112fe9f68) + _DAT_112fe9f10);
        func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112fe9f78));
        return (ulong)bVar1 | 0x8000000000000000;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103afc678);
      (*pcVar2)();
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103afc668);
    (*pcVar2)();
  }
  if (bVar1 != 0) {
    if (*(long *)(param_1 + _DAT_112fe9f60) != 0) {
      return (ulong)*(byte *)(*(long *)(param_1 + _DAT_112fe9f60) + _DAT_112fe9f10) |
             0x4000000000000000;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103afc66c);
    (*pcVar2)();
  }
  if (*(long *)(param_1 + _DAT_112fe9f50) != 0) {
    if (*(byte *)(param_1 + _DAT_112fe9f58) != 2) {
      return (ulong)*(byte *)(*(long *)(param_1 + _DAT_112fe9f50) + _DAT_112fe9f10) |
             ((ulong)*(byte *)(param_1 + _DAT_112fe9f58) & 1) << 8;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103afc674);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103afc664);
  (*pcVar2)();
}



/* Entry: 103afc740; end: 103afc7ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103afc740(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  FUN_103afc998();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined1 *)(lVar4 + _DAT_112fe9f48) = 1;
  *(undefined8 *)(lVar4 + _DAT_112fe9f50) = 0;
  *(undefined1 *)(lVar4 + _DAT_112fe9f58) = 2;
  *(long *)(lVar4 + _DAT_112fe9f60) = param_1;
  *(undefined8 *)(lVar4 + _DAT_112fe9f68) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112fe9f70);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_112fe9f78) = 0;
  *(undefined8 *)(lVar4 + _DAT_112fe9f80) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&lStack_30,puVar2);
  return;
}



/* Entry: 103afc800; end: 103afc8d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103afc800(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  FUN_103afc998();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined1 *)(lVar4 + _DAT_112fe9f48) = 2;
  *(undefined8 *)(lVar4 + _DAT_112fe9f50) = 0;
  *(undefined1 *)(lVar4 + _DAT_112fe9f58) = 2;
  *(undefined8 *)(lVar4 + _DAT_112fe9f60) = 0;
  *(long *)(lVar4 + _DAT_112fe9f68) = param_1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112fe9f70);
  *puVar1 = param_2;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined8 *)(lVar4 + _DAT_112fe9f78) = param_3;
  *(undefined8 *)(lVar4 + _DAT_112fe9f80) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  func_0x000107c61174(param_1);
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_40,puVar2);
  return;
}



/* Entry: 103afc8d4; end: 103afc997;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103afc8d4(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  FUN_103afc998();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined1 *)(lVar4 + _DAT_112fe9f48) = 3;
  *(undefined8 *)(lVar4 + _DAT_112fe9f50) = 0;
  *(undefined1 *)(lVar4 + _DAT_112fe9f58) = 2;
  *(undefined8 *)(lVar4 + _DAT_112fe9f60) = 0;
  *(undefined8 *)(lVar4 + _DAT_112fe9f68) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112fe9f70);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_112fe9f78) = 0;
  *(long *)(lVar4 + _DAT_112fe9f80) = param_1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&lStack_30,puVar2);
  return;
}



/* Entry: 103afc998; end: 103afc9b7;  */

void FUN_103afc998(void)

{
  func_0x000107c61168(&PTR_PTR_112927310);
  return;
}



/* Entry: 103afc9b8; end: 103afcb1f;  */

int FUN_103afc9b8(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103afca34;
        goto LAB_103afca18;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103afca18:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_103afca34:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103afcb20; end: 103afcb5f;  */

void FUN_103afcb20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe9fb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc52540;
  func_0x000107c61520(&UNK_10dc52540,&UNK_1106d02a0);
  puRam0000000112fe9fb0 = puVar1;
  return;
}



/* Entry: 103afcb60; end: 103afcba3;  */

void FUN_103afcb60(undefined8 param_1,uint param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103afcb74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1,param_2 & 1)
  ;
  return;
}



/* Entry: 103afcba4; end: 103afcbcb; +[SCCameraSoftStopDelayExperiment cameraSoftStopDelay] */

undefined8 FUN_103afcba4(char *param_1)

{
  undefined8 uVar1;
  
  func_0x0001005e3364();
  uVar1 = 0x4008000000000000;
  if (*param_1 == '\0') {
    uVar1 = 0x3fe0000000000000;
  }
  return uVar1;
}



/* Entry: 103afcbcc; end: 103afcbd3; +[SCCameraSoftStopDelayExperiment cameraToPreviewSoftStopDelay] */

undefined8 FUN_103afcbcc(void)

{
  return 0x4014000000000000;
}



/* Entry: 103afcbd4; end: 103afcbf3;  */

void FUN_103afcbd4(void)

{
  func_0x000107c61168(&PTR_PTR_112927408);
  return;
}



/* Entry: 103afcbf4; end: 103afcc2f; -[SCCameraSoftStopDelayExperiment init] */

void FUN_103afcbf4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_103afcbd4();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103afcc30; end: 103afcc83;  */

void FUN_103afcc30(void)

{
  FUN_103afcbd4();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103afcc84; end: 103afccf7; +[_TtC18SCCameraFrameStamp18SCCameraFrameStamp shared] */

void FUN_103afcc84(void)

{
  if (lRam00000001135872a0 != -1) {
    func_0x000107c61568(0x1135872a0,0x103afcc60);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011380cd38);
  return;
}



/* Entry: 103afccf8; end: 103afce9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103afccf8(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x20;
  long lVar6;
  
  func_0x000107c614f0();
  lVar2 = 0;
  func_0x000107c5ef14();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  *(undefined8 *)(unaff_x20 + _DAT_112fe9ff8) = 0x280;
  *(undefined8 *)(unaff_x20 + _DAT_112fea000) = 0x28;
  *(undefined8 *)(unaff_x20 + _DAT_112fe9fe8) = 0;
  lVar1 = _DAT_112fe9fe0;
  puVar3 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  puVar3 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar1 = _DAT_112fe9ff0;
  *(undefined **)(unaff_x20 + _DAT_112fe9ff0) = puVar3;
  func_0x000107c61174();
  uVar4 = 0x4f505f53555f6e65;
  func_0x000107c5eed0(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                      0x4f505f53555f6e65,0xeb00000000584953);
  func_0x000107c5ef00();
  (**(code **)(lVar6 + 8))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  func_0x000107c5601c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c61174(uVar4);
  uVar5 = 0x73733a6d6d3a4848;
  func_0x000107c5fadc(0x73733a6d6d3a4848,0xec0000005353532e);
  func_0x000107c53e28(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103afce9c; end: 103afcebb; -[_TtC18SCCameraFrameStamp18SCCameraFrameStamp init] */

void FUN_103afce9c(void)

{
  FUN_103afccf8();
  return;
}



/* Entry: 103afcebc; end: 103afd5d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103afcebc(long param_1)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  long extraout_x8;
  long lVar12;
  long lVar13;
  long unaff_x20;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  ulong uVar21;
  ulong uStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined1 auStack_e8 [8];
  ulong uStack_e0;
  
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar16 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar8 = (long)&uStack_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (lRam00000001135872a8 != -1) {
    func_0x000107c61568(0x1135872a8,0x103afccc4);
  }
  uVar14 = uRam00000001135872b0;
  lVar5 = param_1;
  func_0x000107c60a0c(param_1,uRam00000001135872b0,0);
  func_0x000107c61180();
  if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
    return;
  }
  func_0x000107c60a30(param_1,uVar14,*(undefined8 *)PTR__kCFBooleanTrue_11034ab90,1);
  lVar5 = param_1;
  func_0x000107c60a1c();
  func_0x000107c61180();
  if (lVar5 == 0) {
    return;
  }
  func_0x000107c60a24(auStack_e8,param_1);
  uVar21 = uStack_e0;
  func_0x000107c60a3c(auStack_e8);
  uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112fe9fe0);
  func_0x000107c4b940(uVar14);
  lVar17 = *(long *)(unaff_x20 + _DAT_112fe9fe8);
  *(long *)(unaff_x20 + _DAT_112fe9fe8) = lVar17 + 1;
  func_0x000107c5d278(uVar14);
  lVar6 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x18) = 6;
  *(undefined8 *)(lVar6 + 0x10) = 3;
  uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112fe9ff0);
  lVar7 = lVar6;
  func_0x000107c5eea0(lVar8);
  func_0x000107c5ee70();
  (**(code **)(lVar16 + 8))(lVar8);
  func_0x000107c5c1b8();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  uVar14 = uVar15;
  func_0x000107c5faec();
  func_0x000107c61170();
  *(undefined **)(lVar6 + 0x38) = PTR___sSSN_11034da80;
  func_0x00010075bbf0();
  *(undefined8 *)(lVar6 + 0x20) = uVar14;
  *(long *)(lVar6 + 0x28) = lVar4;
  puVar9 = PTR___sSds7CVarArgsWP_11034ddc0;
  puVar2 = PTR___sSdN_11034dd90;
  if (0x7fefffffffffffff < (uVar21 & 0x7fffffffffffffff)) {
    uVar21 = 0;
    puVar9 = PTR___sSis7CVarArgsWP_11034df08;
    puVar2 = PTR___sSiN_11034deb0;
  }
  *(undefined **)(lVar6 + 0x60) = puVar2;
  *(undefined **)(lVar6 + 0x68) = puVar9;
  *(undefined8 *)(lVar6 + 0x40) = uVar15;
  *(ulong *)(lVar6 + 0x48) = uVar21;
  puVar9 = PTR___ss6UInt64Vs7CVarArgsWP_11034f078;
  *(undefined **)(lVar6 + 0x88) = PTR___ss6UInt64VN_11034f048;
  *(undefined **)(lVar6 + 0x90) = puVar9;
  *(long *)(lVar6 + 0x70) = lVar17;
  uVar11 = 0x800000010f19dfc0;
  uVar15 = 0xd000000000000015;
  func_0x000107c5fb00(0xd000000000000015,0x800000010f19dfc0,lVar6);
  uVar14 = uVar15;
  func_0x000107c608b8();
  lVar4 = 0;
  func_0x000107c608a0(0,0x280,0x28,8,0x280,uVar14,0);
  if (lVar4 == 0) {
    func_0x000107c61170(uVar14);
    func_0x000107c6142c(uVar11);
  }
  else {
    func_0x000107c60914(0x3fbe1e1e1e1e1e1e,0x3ff0000000000000);
    func_0x000107c608f0(0,0,0x4084000000000000,0x4044000000000000,lVar4);
    func_0x000107c60938(0,0x4044000000000000,lVar4);
    func_0x000107c60908(0x3ff0000000000000,0xbff0000000000000,lVar4);
    func_0x000107c60bb0(lVar4);
    lVar8 = 0x112d48380;
    func_0x0001000285a8(0x112d48380,&UNK_10d910f10);
    func_0x000107c61534();
    *(undefined8 *)(lVar8 + 0x18) = 4;
    *(undefined8 *)(lVar8 + 0x10) = 2;
    uVar18 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
    *(undefined8 *)(lVar8 + 0x20) = uVar18;
    puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168();
    func_0x000107c61174(uVar18);
    func_0x000107c5e2ac();
    func_0x000107c61180();
    uVar18 = 0;
    FUN_103afd6b0(0,0x112d48390,&PTR__OBJC_CLASS___UIColor_1126aea70);
    *(undefined **)(lVar8 + 0x28) = puVar9;
    uVar19 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    *(undefined8 *)(lVar8 + 0x40) = uVar18;
    *(undefined8 *)(lVar8 + 0x48) = uVar19;
    puVar9 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x000107c61168();
    uVar18 = *(undefined8 *)PTR__UIFontWeightBold_110345c30;
    func_0x000107c61174(uVar19);
    func_0x000107c4d114(0x403a000000000000,uVar18);
    func_0x000107c61180();
    uVar18 = 0;
    FUN_103afd6b0(0,0x112d48388,&PTR__OBJC_CLASS___UIFont_1126aec38);
    *(undefined8 *)(lVar8 + 0x68) = uVar18;
    *(undefined **)(lVar8 + 0x50) = puVar9;
    lVar16 = lVar8;
    func_0x000100ecbca8(lVar8);
    func_0x000107c61588(lVar8);
    uVar18 = 0x112d48398;
    func_0x0001000285a8(0x112d48398,&UNK_10d90f130);
    func_0x000107c61408((undefined8 *)(lVar8 + 0x20),2,uVar18);
    func_0x000107c5fadc(uVar15,uVar11);
    uVar19 = 0;
    func_0x000100eca28c(0);
    uVar18 = 0x112d483a0;
    func_0x000103afd6f0(0x112d483a0,&UNK_10d90f180);
    lVar8 = lVar16;
    func_0x000107c5f9dc(lVar16,uVar19,PTR___sypN_11034f1a8 + 8,uVar18);
    func_0x000107c6142c(lVar16);
    func_0x000107c422b8(0x4024000000000000,0x4018000000000000,uVar15);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(uVar15);
    func_0x000107c60bac();
    lVar8 = lVar4;
    func_0x000107c608a4();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(uVar14);
    func_0x000107c6142c(uVar11);
    if (lVar8 != 0) {
      lVar4 = lVar8;
      func_0x000107c60978();
      func_0x000107c61180();
      if (lVar4 != 0) {
        lVar16 = lVar4;
        func_0x000107c6093c();
        if (lVar16 != 0) {
          lVar6 = lVar16;
          func_0x000107c60778();
          if (lVar6 != 0) {
            lVar7 = lVar8;
            func_0x000107c60970();
            lVar17 = lVar5;
            func_0x000107c60ad0(lVar5,0);
            if ((int)lVar17 == 0) {
              lVar17 = lVar5;
              func_0x000107c60ac4();
              if ((0 < lVar17) &&
                 (lVar17 = lVar5, func_0x000107c60aac(lVar5,0), lStack_f8 = lVar17, lVar17 != 0)) {
                lVar17 = lVar5;
                func_0x000107c60acc(lVar5,0);
                lVar20 = lVar5;
                func_0x000107c60abc(lVar5,0);
                lVar10 = lVar5;
                func_0x000107c60ab4(lVar5,0);
                if (SBORROW8(lVar17,0x280)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x103afd5c4);
                  (*pcVar3)();
                }
                lStack_f0 = (lVar17 + -0x280) / 2;
                if (lVar17 + -0x280 < -1) {
                  lStack_f0 = 0;
                }
                if (SBORROW8(lVar20,0x28)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x103afd5c8);
                  (*pcVar3)();
                }
                if (SBORROW8(lVar20 + -0x28,8)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x103afd5cc);
                  (*pcVar3)();
                }
                uStack_100 = lVar20 - 0x30U & ((long)(lVar20 - 0x30U) >> 0x3f ^ 0xffffffffffffffffU)
                ;
                lVar1 = lVar20 - uStack_100;
                if (SBORROW8(lVar20,uStack_100)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x103afd5d0);
                  (*pcVar3)();
                }
                lVar20 = lVar17 - lStack_f0;
                if (SBORROW8(lVar17,lStack_f0)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x103afd5d4);
                  (*pcVar3)();
                }
                lVar17 = lVar20;
                if (0x27f < lVar20) {
                  lVar17 = 0x280;
                }
                if ((0 < lVar1) && (0 < lVar20)) {
                  lVar20 = 0;
                  if (0x27 < lVar1) {
                    lVar1 = 0x28;
                  }
                  do {
                    if (SCARRY8(uStack_100,lVar20)) {
                    /* WARNING: Does not return */
                      pcVar3 = (code *)SoftwareBreakpoint(1,0x103afd5b4);
                      (*pcVar3)();
                    }
                    lVar12 = (uStack_100 + lVar20) * lVar10;
                    if (SUB168(SEXT816((long)(uStack_100 + lVar20)) * SEXT816(lVar10),8) !=
                        lVar12 >> 0x3f) {
                    /* WARNING: Does not return */
                      pcVar3 = (code *)SoftwareBreakpoint(1,0x103afd5b8);
                      (*pcVar3)();
                    }
                    if (SCARRY8(lVar12,lStack_f0)) {
                    /* WARNING: Does not return */
                      pcVar3 = (code *)SoftwareBreakpoint(1,0x103afd5bc);
                      (*pcVar3)();
                    }
                    lVar13 = lVar20 * lVar7;
                    if (SUB168(SEXT816(lVar20) * SEXT816(lVar7),8) != lVar13 >> 0x3f) {
                    /* WARNING: Does not return */
                      pcVar3 = (code *)SoftwareBreakpoint(1,0x103afd5c0);
                      (*pcVar3)();
                    }
                    lVar20 = lVar20 + 1;
                    func_0x000107c610b4(lStack_f8 + lVar12 + lStack_f0,lVar6 + lVar13,lVar17);
                  } while (lVar1 != lVar20);
                }
              }
              func_0x000107c60ae0(lVar5,0);
            }
            func_0x000107c61170(lVar5);
            func_0x000107c61170(lVar8);
            func_0x000107c61170(lVar4);
            lVar5 = lVar16;
            goto LAB_103afd570;
          }
          func_0x000107c61170(lVar4);
          lVar4 = lVar16;
        }
        func_0x000107c61170(lVar4);
      }
      func_0x000107c61170(lVar5);
      lVar5 = lVar8;
    }
  }
LAB_103afd570:
  func_0x000107c61170(lVar5);
  return;
}



/* Entry: 103afd5d4; end: 103afd623; -[_TtC18SCCameraFrameStamp18SCCameraFrameStamp stampSampleBufferInPlace:] */

/* WARNING: Possible PIC construction at 0x000103afd60c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103afd610) */

void FUN_103afd5d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_103afcebc(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103afd624; end: 103afd657;  */

void FUN_103afd624(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103afd658; end: 103afd68f; -[_TtC18SCCameraFrameStamp18SCCameraFrameStamp .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103afd674: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103afd678) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103afd658(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fe9ff0));
  return;
}



/* Entry: 103afd690; end: 103afd6af;  */

void FUN_103afd690(void)

{
  func_0x000107c61168(&PTR_PTR_1129274b8);
  return;
}



/* Entry: 103afd6b0; end: 103afd9e7;  */

void FUN_103afd6b0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103afd9e8; end: 103afda23; -[SCCameraViewfinderLayoutExperiment init] */

void FUN_103afd9e8(undefined8 param_1)

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



/* Entry: 103afda24; end: 103afda57;  */

void FUN_103afda24(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103afda58; end: 103afda5b; -[SCCameraViewfinderLayoutExperiment .cxx_destruct] */

void FUN_103afda58(void)

{
  return;
}



/* Entry: 103afda5c; end: 103afdac7;  */

ulong FUN_103afda5c(undefined8 param_1,undefined8 param_2)

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



/* Entry: 103afdac8; end: 103afdacb;  */

void FUN_103afdac8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fea0c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc52660;
  func_0x000107c61520(&UNK_10dc52660,&UNK_1106d0578);
  puRam0000000112fea0c0 = puVar1;
  return;
}



/* Entry: 103afdacc; end: 103afdb0b;  */

void FUN_103afdacc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fea0c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc52660;
  func_0x000107c61520(&UNK_10dc52660,&UNK_1106d0578);
  puRam0000000112fea0c0 = puVar1;
  return;
}



/* Entry: 103afdb0c; end: 103afdb1f;  */

void FUN_103afdb0c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103afdb20();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103afdb60)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103afdb20; end: 103afdbcb;  */

void FUN_103afdb20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fea0c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc52728;
  func_0x000107c61520(&UNK_10dc52728,&UNK_1106d0578);
  puRam0000000112fea0c8 = puVar1;
  return;
}



/* Entry: 103afdbcc; end: 103afdbcf;  */

void FUN_103afdbcc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fea0e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc52760;
  func_0x000107c61520(&UNK_10dc52760,&UNK_1106d0628);
  puRam0000000112fea0e8 = puVar1;
  return;
}



/* Entry: 103afdbd0; end: 103afdc0f;  */

void FUN_103afdbd0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fea0e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc52760;
  func_0x000107c61520(&UNK_10dc52760,&UNK_1106d0628);
  puRam0000000112fea0e8 = puVar1;
  return;
}



/* Entry: 103afdc10; end: 103afdc23;  */

void FUN_103afdc10(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103afdc54();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103afdc94)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103afdc24; end: 103afdc53;  */

void FUN_103afdc24(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103afdc54; end: 103afdcff;  */

void FUN_103afdc54(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fea0f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc52828;
  func_0x000107c61520(&UNK_10dc52828,&UNK_1106d0628);
  puRam0000000112fea0f0 = puVar1;
  return;
}



/* Entry: 103afdd00; end: 103afdd43;  */

void FUN_103afdd00(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 103afdd44; end: 103afdd63;  */

void FUN_103afdd44(void)

{
  func_0x000107c61168(&PTR_PTR_112927590);
  return;
}



/* Entry: 103afdd64; end: 103afdf3b;  */

undefined1  [16] FUN_103afdd64(void)

{
  return ZEXT816(0x1106d04e8);
}



/* Entry: 103afdf3c; end: 103afdf87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103afdf3c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fea278) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103afdf88; end: 103afdfe7; -[_TtC26LensesCameraIntegrationAPI47SCLensesCameraLensesFeaturesIntegrationServices init] */

void FUN_103afdf88(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensesCameraIntegrationAPI.SCLensesCameraLensesFeaturesIntegrationServices",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103afdfb4);
  (*pcVar1)();
}



/* Entry: 103afdfe8; end: 103afdff7; -[_TtC26LensesCameraIntegrationAPI47SCLensesCameraLensesFeaturesIntegrationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103afdfe8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fea278));
  return;
}



/* Entry: 103afdff8; end: 103afe043;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103afdff8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fea2a8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103afe044; end: 103afe0a3; -[_TtC32SimpleSnapchatExperimentServices32SimpleSnapchatExperimentServices init] */

void FUN_103afe044(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SimpleSnapchatExperimentServices.SimpleSnapchatExperimentServices",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103afe070);
  (*pcVar1)();
}



/* Entry: 103afe0a4; end: 103afe0b3; -[_TtC32SimpleSnapchatExperimentServices32SimpleSnapchatExperimentServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103afe0a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fea2a8));
  return;
}



/* Entry: 103afe0b4; end: 103afe19b;  */

void FUN_103afe0b4(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_103aff20c(uVar1,param_2[1],0x112feae48);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 103afe19c; end: 103afe257; +[SCCameraContinuousCaptureExperiment autoEnableHandsFreeOnMusicWithCircumstanceEngine:] */

undefined8 FUN_103afe19c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(0x112fea328,auStack_48,0,0);
  if (cRam0000000112fea328 == '\0') {
    uVar1 = 0;
  }
  else if (cRam0000000112fea328 == '\x01') {
    uVar1 = 1;
  }
  else {
    func_0x000107c615f0(param_3);
    uVar2 = 0xd00000000000002a;
    func_0x000107c5fadc(0xd00000000000002a,0x800000010f19e110);
    uVar1 = param_3;
    func_0x000107c3ebd4(param_3);
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(param_3);
  }
  return uVar1;
}



/* Entry: 103afe258; end: 103afe2cb;  */

void FUN_103afe258(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_103aff20c(uVar1,param_2[1],0x112fead68);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 103afe2cc; end: 103afe387; +[SCCameraContinuousCaptureExperiment autoEnableHandsFreeOnSpotlightSoundUnlockWithCircumstanceEngine:] */

undefined8 FUN_103afe2cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(0x112fea370,auStack_48,0,0);
  if (cRam0000000112fea370 == '\0') {
    uVar1 = 0;
  }
  else if (cRam0000000112fea370 == '\x01') {
    uVar1 = 1;
  }
  else {
    func_0x000107c615f0(param_3);
    uVar2 = 0xd00000000000003b;
    func_0x000107c5fadc(0xd00000000000003b,0x800000010f19e140);
    uVar1 = param_3;
    func_0x000107c3ebd4(param_3);
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(param_3);
  }
  return uVar1;
}



/* Entry: 103afe388; end: 103afe3fb;  */

void FUN_103afe388(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_103aff20c(uVar1,param_2[1],0x112feacf8);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 103afe3fc; end: 103afe4b7; +[SCCameraContinuousCaptureExperiment autoEnableHandsFreeOnSpotlightLensUnlockWithCircumstanceEngine:] */

undefined8 FUN_103afe3fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(0x112fea3b8,auStack_48,0,0);
  if (cRam0000000112fea3b8 == '\0') {
    uVar1 = 0;
  }
  else if (cRam0000000112fea3b8 == '\x01') {
    uVar1 = 1;
  }
  else {
    func_0x000107c615f0(param_3);
    uVar2 = 0xd00000000000003a;
    func_0x000107c5fadc(0xd00000000000003a,0x800000010f19e180);
    uVar1 = param_3;
    func_0x000107c3ebd4(param_3);
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(param_3);
  }
  return uVar1;
}



/* Entry: 103afe4b8; end: 103afe5cf;  */

void FUN_103afe4b8(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_103aff20c(uVar1,param_2[1],0x112feac88);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 103afe5d0; end: 103afe68b; +[SCCameraContinuousCaptureExperiment useModularCameraForSpotlightCreateWithCircumstanceEngine:] */

undefined8 FUN_103afe5d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(0x112fea400,auStack_48,0,0);
  if (cRam0000000112fea400 == '\0') {
    uVar1 = 0;
  }
  else if (cRam0000000112fea400 == '\x01') {
    uVar1 = 1;
  }
  else {
    func_0x000107c615f0(param_3);
    uVar2 = 0xd00000000000002b;
    func_0x000107c5fadc(0xd00000000000002b,0x800000010f19e1c0);
    uVar1 = param_3;
    func_0x000107c3ebd4(param_3);
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(param_3);
  }
  return uVar1;
}



/* Entry: 103afe68c; end: 103afe6ff;  */

void FUN_103afe68c(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_103aff20c(uVar1,param_2[1],0x112feac18);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 103afe700; end: 103afe7bb; +[SCCameraContinuousCaptureExperiment greenScreenInModularSpotlightCreateEnabledWithCircumstanceEngine:] */

undefined8 FUN_103afe700(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(0x112fea448,auStack_48,0,0);
  if (cRam0000000112fea448 == '\0') {
    uVar1 = 0;
  }
  else if (cRam0000000112fea448 == '\x01') {
    uVar1 = 1;
  }
  else {
    func_0x000107c615f0(param_3);
    uVar2 = 0xd000000000000033;
    func_0x000107c5fadc(0xd000000000000033,0x800000010f19e1f0);
    uVar1 = param_3;
    func_0x000107c3ebd4(param_3);
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(param_3);
  }
  return uVar1;
}



/* Entry: 103afe7bc; end: 103afe82f;  */

void FUN_103afe7bc(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_103aff20c(uVar1,param_2[1],0x112feaba8);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 103afe830; end: 103afe8eb; +[SCCameraContinuousCaptureExperiment autoEnableHandsFreeOnSnapEditorCreateUnlockWithCircumstanceEngine:] */

undefined8 FUN_103afe830(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(0x112fea490,auStack_48,0,0);
  if (cRam0000000112fea490 == '\0') {
    uVar1 = 0;
  }
  else if (cRam0000000112fea490 == '\x01') {
    uVar1 = 1;
  }
  else {
    func_0x000107c615f0(param_3);
    uVar2 = 0xd00000000000003e;
    func_0x000107c5fadc(0xd00000000000003e,0x800000010f19e230);
    uVar1 = param_3;
    func_0x000107c3ebd4(param_3);
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(param_3);
  }
  return uVar1;
}



/* Entry: 103afe8ec; end: 103afe94b;  */

undefined8 FUN_103afe8ec(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xd000000000000034;
  func_0x000107c5fadc(0xd000000000000034,0x800000010f19e270);
  func_0x000107c3ebd4(param_1);
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 103afe94c; end: 103afe9c3; +[SCCameraContinuousCaptureExperiment snapEditorGreenScreenEnabledWithCircumstanceEngine:] */

undefined8 FUN_103afe94c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c615f0(param_3);
  uVar1 = 0xd000000000000034;
  func_0x000107c5fadc(0xd000000000000034,0x800000010f19e270);
  uVar2 = param_3;
  func_0x000107c3ebd4(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 103afe9c4; end: 103afeadb;  */

void FUN_103afe9c4(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_103aff20c(uVar1,param_2[1],0x112feab38);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 103afeadc; end: 103afeb97; +[SCCameraContinuousCaptureExperiment openToCameraSpotlightFromProfileWithCircumstanceEngine:] */

undefined8 FUN_103afeadc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(0x112fea4d8,auStack_48,0,0);
  if (cRam0000000112fea4d8 == '\0') {
    uVar1 = 0;
  }
  else if (cRam0000000112fea4d8 == '\x01') {
    uVar1 = 1;
  }
  else {
    func_0x000107c615f0(param_3);
    uVar2 = 0xd000000000000030;
    func_0x000107c5fadc(0xd000000000000030,0x800000010f19e2b0);
    uVar1 = param_3;
    func_0x000107c3ebd4(param_3);
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(param_3);
  }
  return uVar1;
}



/* Entry: 103afeb98; end: 103afecaf;  */

void FUN_103afeb98(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_103aff20c(uVar1,param_2[1],0x112feaac8);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 103afecb0; end: 103afed6b; +[SCCameraContinuousCaptureExperiment openToCameraSpotlightCreateWithCircumstanceEngine:] */

undefined8 FUN_103afecb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(0x112fea520,auStack_48,0,0);
  if (cRam0000000112fea520 == '\0') {
    uVar1 = 0;
  }
  else if (cRam0000000112fea520 == '\x01') {
    uVar1 = 1;
  }
  else {
    func_0x000107c615f0(param_3);
    uVar2 = 0xd00000000000002a;
    func_0x000107c5fadc(0xd00000000000002a,0x800000010f19e2f0);
    uVar1 = param_3;
    func_0x000107c3ebd4(param_3);
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(param_3);
  }
  return uVar1;
}



/* Entry: 103afed6c; end: 103afeddf;  */

void FUN_103afed6c(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_103aff20c(uVar1,param_2[1],0x112feaa58);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 103afede0; end: 103afee9b; +[SCCameraContinuousCaptureExperiment handsFreeTapToRecordTooltipEnabledWithCircumstanceEngine:] */

undefined8 FUN_103afede0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(0x112fea568,auStack_48,0,0);
  if (cRam0000000112fea568 == '\0') {
    uVar1 = 0;
  }
  else if (cRam0000000112fea568 == '\x01') {
    uVar1 = 1;
  }
  else {
    func_0x000107c615f0(param_3);
    uVar2 = 0xd000000000000020;
    func_0x000107c5fadc(0xd000000000000020,0x800000010f19e320);
    uVar1 = param_3;
    func_0x000107c3ebd4(param_3);
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(param_3);
  }
  return uVar1;
}



/* Entry: 103afee9c; end: 103aff0df;  */

void FUN_103afee9c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar3 = 0x64656c62616e45;
  if (cVar4 != '\x01') {
    uVar3 = 0x2074636570736552;
  }
  uVar1 = 0xe700000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xeb00000000422f41;
  }
  uVar2 = 0x64656c6261736944;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe800000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 103aff0e0; end: 103aff19b; +[SCCameraContinuousCaptureExperiment handsFreeClipThumbnailsEnabledWithCircumstanceEngine:] */

undefined8 FUN_103aff0e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(0x112fea5b0,auStack_48,0,0);
  if (cRam0000000112fea5b0 == '\0') {
    uVar1 = 0;
  }
  else if (cRam0000000112fea5b0 == '\x01') {
    uVar1 = 1;
  }
  else {
    func_0x000107c615f0(param_3);
    uVar2 = 0xd000000000000025;
    func_0x000107c5fadc(0xd000000000000025,0x800000010f19e350);
    uVar1 = param_3;
    func_0x000107c3ebd4(param_3);
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(param_3);
  }
  return uVar1;
}



/* Entry: 103aff19c; end: 103aff1d7; -[SCCameraContinuousCaptureExperiment init] */

void FUN_103aff19c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_103aff278();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103aff1d8; end: 103aff207;  */

void FUN_103aff1d8(void)

{
  FUN_103aff278();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103aff208; end: 103aff20b; -[SCCameraContinuousCaptureExperiment .cxx_destruct] */

void FUN_103aff208(void)

{
  return;
}


