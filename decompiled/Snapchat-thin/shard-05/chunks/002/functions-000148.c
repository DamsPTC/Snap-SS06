/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103bc73a0; end: 103bc73d7; +[SCMemoriesClientGenOperation applyTimingWithTimingOperation:] */

void FUN_103bc73a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_103bc78c4();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103bc73d8; end: 103bc740f; +[SCMemoriesClientGenOperation applyTemplateServiceWithApplyTemplateServiceOperation:] */

void FUN_103bc73d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000103bc796c();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103bc7410; end: 103bc7447; +[SCMemoriesClientGenOperation applyPlaybackCharacteristicWithPlaybackCharacteristic:] */

void FUN_103bc7410(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000103bc7a14();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103bc7448; end: 103bc756f; +[SCMemoriesClientGenOperation applyMusicForAnimatedCollageWithMusicOperation:] */

void FUN_103bc7448(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000103bc7abc();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103bc7570; end: 103bc75f7; -[SCMemoriesClientGenOperation matchApplyCollageCTItems:applyTiming:applyTemplateService:applyPlaybackCharacteristic:applyMusicForAnimatedCollage:] */

void FUN_103bc7570(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  func_0x000107c61174();
  func_0x000103bc7480(FUN_103bc7d2c,auStack_40,0x103bc7d40,auStack_60,0x103bc7d50,auStack_80,
                      0x103bc7d54,auStack_a0,0x103bc7d58,auStack_c0);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103bc75f8; end: 103bc762b;  */

void FUN_103bc75f8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bc762c; end: 103bc77bf; -[SCMemoriesClientGenOperation .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103bc7648: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bc7668: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bc7688: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bc766c) */
/* WARNING: Removing unreachable block (ram,0x000103bc764c) */
/* WARNING: Removing unreachable block (ram,0x000103bc768c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc762c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff4710));
  return;
}



/* Entry: 103bc77c0; end: 103bc77cf;  */

ulong FUN_103bc77c0(ulong param_1)

{
  if (4 < param_1) {
    param_1 = 5;
  }
  return param_1;
}



/* Entry: 103bc77d0; end: 103bc780b;  */

undefined8 FUN_103bc77d0(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103bc780c; end: 103bc78c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc780c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  FUN_103bc7b64();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined1 *)(lVar3 + _DAT_112ff46e8) = 0;
  *(long *)(lVar3 + _DAT_112ff4710) = param_1;
  *(undefined8 *)(lVar3 + _DAT_112ff4718) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112ff4708) = 0;
  *(undefined8 *)(lVar3 + _DAT_112ff4700) = 0;
  *(undefined8 *)(lVar3 + _DAT_112ff46f8) = 0;
  *(undefined8 *)(lVar3 + _DAT_112ff46f0) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 103bc78c4; end: 103bc7b63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc78c4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  FUN_103bc7b64();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined1 *)(lVar3 + _DAT_112ff46e8) = 1;
  *(undefined8 *)(lVar3 + _DAT_112ff4710) = 0;
  *(undefined8 *)(lVar3 + _DAT_112ff4718) = 0;
  *(long *)(lVar3 + _DAT_112ff4708) = param_1;
  *(undefined8 *)(lVar3 + _DAT_112ff4700) = 0;
  *(undefined8 *)(lVar3 + _DAT_112ff46f8) = 0;
  *(undefined8 *)(lVar3 + _DAT_112ff46f0) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 103bc7b64; end: 103bc7b83;  */

void FUN_103bc7b64(void)

{
  func_0x000107c61168(&PTR_PTR_11293f8d0);
  return;
}



/* Entry: 103bc7b84; end: 103bc7ceb;  */

int FUN_103bc7b84(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 4) {
      iVar2 = 4;
    }
    if (param_2 + 4 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103bc7c00;
        goto LAB_103bc7be4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103bc7be4:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_103bc7c00:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103bc7cec; end: 103bc7d2b;  */

void FUN_103bc7cec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff4748 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc60d24;
  func_0x000107c61520(&UNK_10dc60d24,&UNK_1106e24a0);
  puRam0000000112ff4748 = puVar1;
  return;
}



/* Entry: 103bc7d2c; end: 103bc7d5b;  */

void FUN_103bc7d2c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103bc7d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1,param_2);
  return;
}



/* Entry: 103bc7d5c; end: 103bc7e07;  */

void FUN_103bc7d5c(void)

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



/* Entry: 103bc7e08; end: 103bc7e47;  */

void FUN_103bc7e08(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 103bc7e48; end: 103bc7e9f; -[SCMemoriesInsertClipOperation description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc7e48(long param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_112ff4750) == '\x01') {
    if (*(long *)(param_1 + _DAT_112ff4760) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103bc7e70);
      (*pcVar1)();
    }
  }
  else if (*(long *)(param_1 + _DAT_112ff4758) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103bc7ea0);
    (*pcVar1)();
  }
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bc7ea0; end: 103bc7ee7; -[SCMemoriesInsertClipOperation init] */

void FUN_103bc7ea0(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCMemoriesClientGenContentOperationPool/SCMemoriesInsertClipOperationWrapper.swift"
                      ,0x52,2,0x30,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bc7ee8);
  (*pcVar1)();
}



/* Entry: 103bc7ee8; end: 103bc7eeb; -[SCMemoriesInsertClipOperation copyWithZone:] */

void FUN_103bc7ee8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103bc7eec; end: 103bc7f6b; +[SCMemoriesInsertClipOperation gallerySnapClipWithSnapIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc7eec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_112ff4750) = 0;
  *(undefined8 *)(lVar1 + _DAT_112ff4758) = param_3;
  *(undefined8 *)(lVar1 + _DAT_112ff4760) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bc7f6c; end: 103bc7ff3; +[SCMemoriesInsertClipOperation cameraRollClipWithPhAssets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc7f6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  uVar1 = 0;
  func_0x0001011733e8(0);
  func_0x000107c5fc54(param_3,uVar1);
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112ff4750) = 1;
  *(undefined8 *)(lVar2 + _DAT_112ff4758) = 0;
  *(undefined8 *)(lVar2 + _DAT_112ff4760) = param_3;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bc7ff4; end: 103bc80c3; -[SCMemoriesInsertClipOperation matchGallerySnapClip:cameraRollClip:] */

/* WARNING: Possible PIC construction at 0x000103bc80a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bc80a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc7ff4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  
  if (*(char *)(param_1 + _DAT_112ff4750) == '\x01') {
    lVar3 = *(long *)(param_1 + _DAT_112ff4760);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103bc80c0);
      (*pcVar2)();
    }
    uVar1 = 0;
    func_0x0001011733e8(0);
    func_0x000107c61174(param_1);
    func_0x000107c5fc48(lVar3,uVar1);
    pcVar2 = *(code **)(param_4 + 0x10);
    param_3 = param_4;
  }
  else {
    lVar3 = *(long *)(param_1 + _DAT_112ff4758);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103bc80c4);
      (*pcVar2)();
    }
    func_0x000107c61174(param_1);
    func_0x000107c5fc48(lVar3,PTR___sSSN_11034da80);
    pcVar2 = *(code **)(param_3 + 0x10);
  }
  (*pcVar2)(param_3,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103bc80c4; end: 103bc80f7;  */

void FUN_103bc80c4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bc80f8; end: 103bc812f; -[SCMemoriesInsertClipOperation .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103bc8114: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bc8118) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc80f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ff4758));
  return;
}



/* Entry: 103bc8130; end: 103bc814f;  */

void FUN_103bc8130(void)

{
  func_0x000107c61168(&PTR_PTR_11293f9c0);
  return;
}



/* Entry: 103bc8150; end: 103bc82b7;  */

int FUN_103bc8150(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103bc81cc;
        goto LAB_103bc81b0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103bc81b0:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_103bc81cc:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103bc82b8; end: 103bc82f7;  */

void FUN_103bc82b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff4790 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc60e14;
  func_0x000107c61520(&UNK_10dc60e14,&UNK_1106e2588);
  puRam0000000112ff4790 = puVar1;
  return;
}



/* Entry: 103bc82f8; end: 103bc8397;  */

void FUN_103bc82f8(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 103bc8398; end: 103bc83bb;  */

void FUN_103bc8398(undefined8 param_1,long *param_2)

{
  *(bool *)param_1 = *param_2 != 0;
  return;
}



/* Entry: 103bc83bc; end: 103bc83ef; -[SCMemoriesClientGenApplyCTItemsOperation description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc83bc(long param_1)

{
  code *pcVar1;
  
  if (*(long *)(param_1 + _DAT_112ff4798 + 8) != 0) {
    func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bc83f0);
  (*pcVar1)();
}



/* Entry: 103bc83f0; end: 103bc8437; -[SCMemoriesClientGenApplyCTItemsOperation init] */

void FUN_103bc83f0(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCMemoriesClientGenContentOperationPool/SCMemoriesClientGenApplyCTItemsOperationWrapper.swift"
                      ,0x5d,2,0x2b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bc8438);
  (*pcVar1)();
}



/* Entry: 103bc8438; end: 103bc843b; -[SCMemoriesClientGenApplyCTItemsOperation copyWithZone:] */

void FUN_103bc8438(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103bc843c; end: 103bc84c7; +[SCMemoriesClientGenApplyCTItemsOperation collageCreativeToolsWithLensId:collageCreativeTools:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc843c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c614ec();
  func_0x000107c5faec();
  lVar3 = param_1;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112ff4798);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(lVar3 + _DAT_112ff47a0) = param_4;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = param_1;
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bc84c8; end: 103bc8553; -[SCMemoriesClientGenApplyCTItemsOperation matchCollageCreativeTools:] */

/* WARNING: Possible PIC construction at 0x000103bc8534: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bc8538) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc84c8(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = ((undefined8 *)(param_1 + _DAT_112ff4798))[1];
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112ff4798);
    uVar4 = *(undefined8 *)(param_1 + _DAT_112ff47a0);
    func_0x000107c61174();
    func_0x000107c5fadc(uVar3,lVar2);
    (**(code **)(param_3 + 0x10))(param_3,uVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bc8554);
  (*pcVar1)();
}



/* Entry: 103bc8554; end: 103bc8587;  */

void FUN_103bc8554(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bc8588; end: 103bc85c3; -[SCMemoriesClientGenApplyCTItemsOperation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc8588(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ff4798 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff47a0));
  return;
}



/* Entry: 103bc85c4; end: 103bc85e3;  */

void FUN_103bc85c4(void)

{
  func_0x000107c61168(&PTR_PTR_11293fa90);
  return;
}



/* Entry: 103bc85e4; end: 103bc86d3;  */

uint FUN_103bc85e4(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 103bc86d4; end: 103bc8713;  */

void FUN_103bc86d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff47d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc60f20;
  func_0x000107c61520(&UNK_10dc60f20,&UNK_1106e2670);
  puRam0000000112ff47d8 = puVar1;
  return;
}



/* Entry: 103bc8714; end: 103bc89af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc8714(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffffa0 + -extraout_x8;
  lVar1 = 0x112ff46d8;
  func_0x0001000285a8(0x112ff46d8,&UNK_10dc60cc8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar4 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar5 = (undefined8 *)(lVar4 - extraout_x12);
  lVar1 = 0;
  func_0x000103bc5b04();
  lVar8 = *(long *)(lVar1 + -8);
  pcVar9 = *(code **)(lVar8 + 0x38);
  (*pcVar9)(puVar5,1,1,lVar1);
  if (*(char *)(param_2 + _DAT_112ff47e0) == '\x01') {
    func_0x000103bc900c(param_2 + _DAT_112ff47e8,puVar6,0x112d373d8,&UNK_10d9014c0);
    lVar2 = 0;
    func_0x000107c5eea4();
    lVar10 = *(long *)(lVar2 + -8);
    puVar3 = puVar6;
    (**(code **)(lVar10 + 0x30))(puVar6,1,lVar2);
    if ((int)puVar3 == 1) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x103bc89ac);
      (*pcVar9)();
    }
    func_0x000103bc9054(puVar5,0x112ff46d8,&UNK_10dc60cc8);
    (**(code **)(lVar10 + 0x10))(puVar5,puVar6,lVar2);
    func_0x000107c6159c(puVar5,lVar1,1);
    (*pcVar9)(puVar5,0,1,lVar1);
    (**(code **)(lVar10 + 8))(puVar6,lVar2);
  }
  else {
    lVar2 = ((undefined8 *)(param_2 + _DAT_112ff47f0))[1];
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x103bc89b0);
      (*pcVar9)();
    }
    uVar7 = *(undefined8 *)(param_2 + _DAT_112ff47f0);
    func_0x000103bc9054(puVar5,0x112ff46d8,&UNK_10dc60cc8);
    *puVar5 = uVar7;
    puVar5[1] = lVar2;
    func_0x000107c6159c(puVar5,lVar1,0);
    (*pcVar9)(puVar5,0,1,lVar1);
    func_0x000107c61434(lVar2);
  }
  func_0x000103bc900c(puVar5,lVar4,0x112ff46d8,&UNK_10dc60cc8);
  lVar2 = lVar4;
  (**(code **)(lVar8 + 0x30))(lVar4,1,lVar1);
  if ((int)lVar2 != 1) {
    func_0x000107c61170(param_2);
    FUN_103bc4470(lVar4,param_1);
    func_0x000103bc9054(puVar5,0x112ff46d8,&UNK_10dc60cc8);
    return;
  }
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x103bc89a8);
  (*pcVar9)();
}



/* Entry: 103bc89b0; end: 103bc8a5b;  */

void FUN_103bc89b0(void)

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



/* Entry: 103bc8a5c; end: 103bc8a9b;  */

void FUN_103bc8a5c(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 103bc8a9c; end: 103bc8b13; -[SCMemoriesApplyTimingOperation description] */

void FUN_103bc8a9c(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  func_0x000103bc5b04();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  func_0x000107c61174(param_1);
  FUN_103bc8714(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000103bc5ac8(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bc8b14; end: 103bc8b5b; -[SCMemoriesApplyTimingOperation init] */

void FUN_103bc8b14(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCMemoriesClientGenContentOperationPool/SCMemoriesApplyTimingOperationWrapper.swift"
                      ,0x53,2,0x2d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bc8b5c);
  (*pcVar1)();
}



/* Entry: 103bc8b5c; end: 103bc8b5f; -[SCMemoriesApplyTimingOperation copyWithZone:] */

void FUN_103bc8b5c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103bc8b60; end: 103bc8c8b; +[SCMemoriesApplyTimingOperation snapTimingWithSnapId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc8b60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  long extraout_x8;
  long lVar5;
  long lStack_60;
  long lStack_58;
  
  func_0x000107c614ec();
  lVar2 = 0x112d373d8;
  puVar4 = &UNK_10d9014c0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)&lStack_60 - extraout_x8;
  func_0x000107c5faec();
  lVar2 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar5,1,1,lVar2);
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112ff47e0) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112ff47f0);
  *puVar1 = param_3;
  puVar1[1] = puVar4;
  func_0x000103bc900c(lVar5,lVar2 + _DAT_112ff47e8,0x112d373d8,&UNK_10d9014c0);
  plVar3 = &lStack_60;
  lStack_60 = lVar2;
  lStack_58 = param_1;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  func_0x000103bc9054(lVar5,0x112d373d8,&UNK_10d9014c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar3);
  return;
}



/* Entry: 103bc8c8c; end: 103bc8e0f; +[SCMemoriesApplyTimingOperation customizedTimingWithTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc8c8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  long lVar6;
  long lVar7;
  long lStack_70;
  long lStack_68;
  
  func_0x000107c614ec();
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)&lStack_70 - extraout_x8;
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = lVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5ee94(lVar6,param_3);
  (**(code **)(lVar7 + 0x10))(lVar5,lVar6,lVar3);
  (**(code **)(lVar7 + 0x38))(lVar5,0,1,lVar3);
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112ff47e0) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112ff47f0);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000103bc900c(lVar5,lVar2 + _DAT_112ff47e8,0x112d373d8,&UNK_10d9014c0);
  plVar4 = &lStack_70;
  lStack_70 = lVar2;
  lStack_68 = param_1;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000103bc9054(lVar5,0x112d373d8,&UNK_10d9014c0);
  (**(code **)(lVar7 + 8))(lVar6,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 103bc8e10; end: 103bc8f33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc8e10(code *param_1,undefined8 param_2,code *param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffc0 + -extraout_x8;
  if (*(char *)(unaff_x20 + _DAT_112ff47e0) == '\x01') {
    func_0x000103bc900c(unaff_x20 + _DAT_112ff47e8,puVar4,0x112d373d8,&UNK_10d9014c0);
    lVar2 = 0;
    func_0x000107c5eea4();
    lVar5 = *(long *)(lVar2 + -8);
    puVar3 = puVar4;
    (**(code **)(lVar5 + 0x30))(puVar4,1,lVar2);
    if ((int)puVar3 == 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103bc8f30);
      (*pcVar1)();
    }
    (*param_3)(puVar4);
    (**(code **)(lVar5 + 8))(puVar4,lVar2);
  }
  else {
    if (((undefined8 *)(unaff_x20 + _DAT_112ff47f0))[1] == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103bc8f34);
      (*pcVar1)();
    }
    (*param_1)(*(undefined8 *)(unaff_x20 + _DAT_112ff47f0));
  }
  return;
}



/* Entry: 103bc8f34; end: 103bc8f87; -[SCMemoriesApplyTimingOperation matchSnapTiming:customizedTiming:] */

void FUN_103bc8f34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_50 = param_4;
  uStack_30 = param_3;
  func_0x000107c61174();
  FUN_103bc8e10(FUN_103bc92fc,auStack_40,0x103bc9334,auStack_60);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103bc8f88; end: 103bc8fbb;  */

void FUN_103bc8f88(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bc8fbc; end: 103bc9093; -[SCMemoriesApplyTimingOperation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc8fbc(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ff47f0 + 8));
  func_0x000103bc9054(param_1 + _DAT_112ff47e8,0x112d373d8,&UNK_10d9014c0);
  return;
}



/* Entry: 103bc9094; end: 103bc909b;  */

void FUN_103bc9094(void)

{
  if (lRam0000000112ff4820 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e7b6358);
  return;
}



/* Entry: 103bc909c; end: 103bc90d3;  */

void FUN_103bc909c(undefined8 param_1)

{
  if (lRam0000000112ff4820 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7b6358);
  return;
}



/* Entry: 103bc90d4; end: 103bc9153;  */

void FUN_103bc90d4(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_38 = &UNK_10dc60fe8;
  puStack_30 = &UNK_10dc61000;
  lVar1 = 0x13f;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61630(param_1,0x100,3,&puStack_38,param_1 + 0x50);
  }
  return;
}



/* Entry: 103bc9154; end: 103bc92bb;  */

int FUN_103bc9154(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103bc91d0;
        goto LAB_103bc91b4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103bc91b4:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_103bc91d0:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103bc92bc; end: 103bc92fb;  */

void FUN_103bc92bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff4830 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc61044;
  func_0x000107c61520(&UNK_10dc61044,&UNK_1106e2758);
  puRam0000000112ff4830 = puVar1;
  return;
}



/* Entry: 103bc92fc; end: 103bc936f;  */

void FUN_103bc92fc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103bc9370; end: 103bc93bb; -[SCMemoriesApplyTemplateServiceOperation templateId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc9370(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ff4838);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112ff4838))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103bc93bc; end: 103bc9403; -[SCMemoriesApplyTemplateServiceOperation snapIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc93bc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ff4840);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103bc9404; end: 103bc9407;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc9404(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff4838);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ff4840) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bc9408; end: 103bc9473;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc9408(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff4838);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ff4840) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bc9474; end: 103bc9507; -[SCMemoriesApplyTemplateServiceOperation initWithTemplateId:snapIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc9474(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  func_0x000107c5fc54(param_4,PTR___sSSN_11034da80);
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff4838);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_112ff4840) = param_4;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bc9508; end: 103bc950b; -[SCMemoriesApplyTemplateServiceOperation copyWithZone:] */

void FUN_103bc9508(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103bc950c; end: 103bc9527; -[SCMemoriesApplyTemplateServiceOperation description] */

void FUN_103bc950c(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bc9528; end: 103bc95a3; -[SCMemoriesApplyTemplateServiceOperation init] */

void FUN_103bc9528(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCMemoriesClientGenContentOperationPool/SCMemoriesApplyTemplateServiceOperationWrapper.swift"
                      ,0x5c,2,0x26,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bc9570);
  (*pcVar1)();
}



/* Entry: 103bc95a4; end: 103bc95df; -[SCMemoriesApplyTemplateServiceOperation .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103bc95c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bc95c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc95a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ff4838 + 8))
  ;
  return;
}



/* Entry: 103bc95e0; end: 103bc95ff;  */

void FUN_103bc95e0(void)

{
  func_0x000107c61168(&PTR_PTR_11293fc38);
  return;
}



/* Entry: 103bc9600; end: 103bc9603;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc9600(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff4838);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ff4840) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bc9604; end: 103bc9613; -[SCMemoriesClientGenContentMusicForAnimatedCollageOperation isBeatSynced] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103bc9604(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ff4870);
}



/* Entry: 103bc9614; end: 103bc965f; -[SCMemoriesClientGenContentMusicForAnimatedCollageOperation collageUCOLensIDInt64] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc9614(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ff4878);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112ff4878))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103bc9660; end: 103bc9663;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc9660(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112ff4870) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff4878);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bc9664; end: 103bc96cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc9664(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112ff4870) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff4878);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bc96d0; end: 103bc9743; -[SCMemoriesClientGenContentMusicForAnimatedCollageOperation initWithIsBeatSynced:collageUCOLensIDInt64:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc96d0(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  *(undefined1 *)(param_1 + _DAT_112ff4870) = param_3;
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff4878);
  *puVar1 = param_4;
  puVar1[1] = param_2;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bc9744; end: 103bc9747; -[SCMemoriesClientGenContentMusicForAnimatedCollageOperation copyWithZone:] */

void FUN_103bc9744(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103bc9748; end: 103bc9763; -[SCMemoriesClientGenContentMusicForAnimatedCollageOperation description] */

void FUN_103bc9748(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bc9764; end: 103bc97df; -[SCMemoriesClientGenContentMusicForAnimatedCollageOperation init] */

void FUN_103bc9764(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCMemoriesClientGenContentOperationPool/SCMemoriesClientGenContentMusicForAnimatedCollageOperationWrapper.swift"
                      ,0x6f,2,0x26,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bc97ac);
  (*pcVar1)();
}



/* Entry: 103bc97e0; end: 103bc97f3; -[SCMemoriesClientGenContentMusicForAnimatedCollageOperation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc97e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ff4878 + 8))
  ;
  return;
}



/* Entry: 103bc97f4; end: 103bc9813;  */

void FUN_103bc97f4(void)

{
  func_0x000107c61168(&PTR_PTR_11293fd08);
  return;
}



/* Entry: 103bc9814; end: 103bc9817;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc9814(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112ff4870) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff4878);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bc9818; end: 103bc9837; -[MemoriesClientGenStoryLoadingScreenScope entry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc9818(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ff48b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bc9838; end: 103bc9847; -[MemoriesClientGenStoryLoadingScreenScope actionModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc9838(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff48c0));
  return;
}



/* Entry: 103bc9848; end: 103bc9857; -[MemoriesClientGenStoryLoadingScreenScope sourceView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc9848(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff48c8));
  return;
}



/* Entry: 103bc9858; end: 103bc999f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103bc9858(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_88 [8];
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112ff48d0;
  func_0x000107c61614(unaff_x20 + _DAT_112ff48d0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ff48a8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ff48b0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff48b8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ff48c0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ff48c8) = param_5;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_6);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_2);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puVar3 = auStack_88;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c615e8(param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c615e8(param_6);
  return puVar3;
}



/* Entry: 103bc99a0; end: 103bc9a73; -[MemoriesClientGenStoryLoadingScreenScope initWithUiContainer:generationProgress:entry:actionModel:sourceView:delegate:] */

undefined8
FUN_103bc99a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c615f0(param_8);
  uVar1 = param_4;
  FUN_103bc9b3c(param_1,param_4,param_5,param_6,param_7,param_8);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c615e8(param_8);
  return uVar1;
}



/* Entry: 103bc9a74; end: 103bc9ad3; -[MemoriesClientGenStoryLoadingScreenScope init] */

void FUN_103bc9a74(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesClientGenStoryLoadingScreenScope.MemoriesClientGenStoryLoadingScreenScope"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bc9aa0);
  (*pcVar1)();
}



/* Entry: 103bc9ad4; end: 103bc9b3b; -[MemoriesClientGenStoryLoadingScreenScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103bc9ad4(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ff48a8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ff48b8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ff48c0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ff48c8));
  param_1 = param_1 + _DAT_112ff48d0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103bc9b3c; end: 103bc9c4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc9b3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  func_0x000107c614f0();
  lVar2 = _DAT_112ff48d0;
  func_0x000107c61614(unaff_x20 + _DAT_112ff48d0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ff48a8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ff48b0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff48b8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ff48c0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ff48c8) = param_5;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_6);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_2);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61154(&stack0xffffffffffffff78,puVar1);
  return;
}



/* Entry: 103bc9c4c; end: 103bc9c6f;  */

undefined8 FUN_103bc9c4c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103bc9c70; end: 103bc9c8f;  */

void FUN_103bc9c70(void)

{
  func_0x000107c61168(&PTR_PTR_11293fdd8);
  return;
}



/* Entry: 103bc9c90; end: 103bc9d3f;  */

void FUN_103bc9c90(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000103bc9d60();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 103bc9d40; end: 103bc9d73;  */

void FUN_103bc9d40(long *param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  
  bVar2 = *param_2 - 2U < 0xfffffffffffffffd;
  lVar1 = 0;
  if (!bVar2) {
    lVar1 = *param_2;
  }
  *param_1 = lVar1;
  *(bool *)(param_1 + 1) = bVar2;
  return;
}



/* Entry: 103bc9d74; end: 103bc9db3;  */

void FUN_103bc9d74(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff4900 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc61190;
  func_0x000107c61520(&UNK_10dc61190,&UNK_1106e28d0);
  puRam0000000112ff4900 = puVar1;
  return;
}



/* Entry: 103bc9db4; end: 103bc9db7;  */

void FUN_103bc9db4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff4908 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc61230;
  func_0x000107c61520(&UNK_10dc61230,&UNK_1106e28f0);
  puRam0000000112ff4908 = puVar1;
  return;
}



/* Entry: 103bc9db8; end: 103bc9df7;  */

void FUN_103bc9db8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff4908 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc61230;
  func_0x000107c61520(&UNK_10dc61230,&UNK_1106e28f0);
  puRam0000000112ff4908 = puVar1;
  return;
}



/* Entry: 103bc9df8; end: 103bc9e3f;  */

undefined1  [16] FUN_103bc9df8(void)

{
  return ZEXT816(0x1106e28d0);
}



/* Entry: 103bc9e40; end: 103bc9eab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc9e40(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  func_0x00010028bef0();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112ff4918) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 103bc9eac; end: 103bc9eb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc9eac(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  func_0x00010028bef0();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112ff4918) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 103bc9eb4; end: 103bc9f27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc9eb4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff4918) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bc9f28; end: 103bc9f87; -[_TtC17MemoriesTweaksAPI27MemoriesDebugTweaksServices init] */

void FUN_103bc9f28(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesTweaksAPI.MemoriesDebugTweaksServices",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bc9f54);
  (*pcVar1)();
}


