/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10405c3d0; end: 10405c3f3; -[_TtC37SCGoogleContactPermissionInfoServices35GoogleContactPermissionInfoServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405c3d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113052260));
  return;
}



/* Entry: 10405c3f4; end: 10405c4c7;  */

void FUN_10405c3f4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10405c4c8; end: 10405c4e7;  */

void FUN_10405c4c8(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 10405c4e8; end: 10405c593;  */

void FUN_10405c4e8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10405c594; end: 10405c5cf;  */

void FUN_10405c594(ulong *param_1,ulong *param_2)

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



/* Entry: 10405c5d0; end: 10405c60f;  */

void FUN_10405c5d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113052290 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc9c90;
  _swift_getWitnessTable(&UNK_10dcc9c90,&UNK_11073b560);
  puRam0000000113052290 = puVar1;
  return;
}



/* Entry: 10405c610; end: 10405c613;  */

void FUN_10405c610(void)

{
  undefined *puVar1;
  
  if (puRam0000000113052298 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc9d30;
  _swift_getWitnessTable(&UNK_10dcc9d30,&UNK_11073b580);
  puRam0000000113052298 = puVar1;
  return;
}



/* Entry: 10405c614; end: 10405c653;  */

void FUN_10405c614(void)

{
  undefined *puVar1;
  
  if (puRam0000000113052298 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc9d30;
  _swift_getWitnessTable(&UNK_10dcc9d30,&UNK_11073b580);
  puRam0000000113052298 = puVar1;
  return;
}



/* Entry: 10405c654; end: 10405c9af;  */

int FUN_10405c654(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10405c6d0;
        goto LAB_10405c6b4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10405c6b4:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_10405c6d0:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10405c9b0; end: 10405ca4b;  */

undefined8 * FUN_10405c9b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x00010405c968(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 10405ca4c; end: 10405ca8f;  */

undefined8 * FUN_10405ca4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  func_0x00010405c994(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 10405ca90; end: 10405cb67;  */

int FUN_10405ca90(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfb < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfc;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 5) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10405cb68; end: 10405cc3b;  */

void FUN_10405cb68(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10405cc3c; end: 10405cc5b;  */

void FUN_10405cc3c(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 10405cc5c; end: 10405cc83; -[SCGoogleContactPermissionResult description] */

void FUN_10405cc5c(void)

{
  _objc_retain();
  FUN_10405da34();
  func_0x00010405c994();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10405cc84; end: 10405cccb; -[SCGoogleContactPermissionResult init] */

void FUN_10405cc84(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCGoogleContactPermissionInfoServices/GoogleContactPermissionResultWrapper.swift",0x50
             ,2,0x55,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10405cccc);
  (*pcVar1)();
}



/* Entry: 10405cccc; end: 10405ccff; -[SCGoogleContactPermissionResult hash] */

undefined8 FUN_10405cccc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10405cd00();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10405cd00; end: 10405d02f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405cd00(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(unaff_x20 + _DAT_1130522a0));
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_1130522a8) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1130522a8);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_1130522b0))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130522b0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_1130522b8))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130522b8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_1130522c0))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130522c0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10405d030; end: 10405d0af; -[SCGoogleContactPermissionResult isEqual:] */

uint FUN_10405d030(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  func_0x00010405ce60(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10405d0b0; end: 10405d0bb; -[SCGoogleContactPermissionResult copyWithZone:] */

void FUN_10405d0b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10405d0bc; end: 10405d0cb; +[SCGoogleContactPermissionResult accessTokenExpired] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405d0bc(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_1130522a0) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130522a8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130522b0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130522b8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130522c0);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10405d0cc; end: 10405d0d3; +[SCGoogleContactPermissionResult noValidGoogleUserSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405d0cc(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_1130522a0) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130522a8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130522b0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130522b8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130522c0);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10405d0d4; end: 10405d167;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405d0d4(undefined8 param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_1130522a0) = 2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130522a8);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130522b0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130522b8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130522c0);
  *puVar1 = 0;
  puVar1[1] = 0;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10405d168; end: 10405d1ff; +[SCGoogleContactPermissionResult requestGoogleContactsFailWithErrorCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405d168(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_1130522a0) = 2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130522a8);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130522b0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130522b8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130522c0);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10405d200; end: 10405d207;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405d200(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_1130522a0) = 3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130522a8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130522b0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130522b8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130522c0);
  *puVar1 = 0;
  puVar1[1] = 0;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10405d208; end: 10405d217; +[SCGoogleContactPermissionResult noParentView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405d208(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_1130522a0) = 3;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130522a8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130522b0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130522b8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130522c0);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10405d218; end: 10405d227; +[SCGoogleContactPermissionResult notDetermined] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405d218(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_1130522a0) = 4;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130522a8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130522b0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130522b8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130522c0);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10405d228; end: 10405d2bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405d228(undefined1 param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_1130522a0) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130522a8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130522b0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130522b8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130522c0);
  *puVar1 = 0;
  puVar1[1] = 0;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10405d2bc; end: 10405d2c3; +[SCGoogleContactPermissionResult noContactPermissionGranted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405d2bc(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_1130522a0) = 5;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130522a8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130522b0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130522b8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130522c0);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10405d2c4; end: 10405d35b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405d2c4(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_1130522a0) = param_3;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130522a8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130522b0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130522b8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130522c0);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10405d35c; end: 10405d40b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405d35c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_1130522a0) = 6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130522a8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130522b0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130522b8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130522c0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = PTR_s_init_1125d9248;
  _swift_bridgeObjectRetain(param_2);
  _objc_msgSendSuper2(auStack_40,puVar2);
  return;
}



/* Entry: 10405d40c; end: 10405d573; +[SCGoogleContactPermissionResult contactsListOnlyWithAccessToken:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405d40c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_1130522a0) = 6;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130522a8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130522b0);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130522b8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130522c0);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10405d574; end: 10405d6db; +[SCGoogleContactPermissionResult otherContactsOnlyWithAccessToken:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405d574(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_1130522a0) = 7;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130522a8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130522b0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130522b8);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130522c0);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10405d6dc; end: 10405d793; +[SCGoogleContactPermissionResult allContactsWithAccessToken:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405d6dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_1130522a0) = 8;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130522a8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130522b0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130522b8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130522c0);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10405d794; end: 10405d8bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405d794(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,code *param_7,undefined8 param_8,code *param_9,
                  undefined4 param_10,undefined4 param_11,code *param_12,undefined4 param_13,
                  undefined4 param_14,code *param_15,undefined4 param_16,undefined4 param_17,
                  code *param_18,undefined4 param_19,undefined4 param_20,code *param_21)

{
  byte bVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long unaff_x20;
  
  bVar1 = *(byte *)(unaff_x20 + _DAT_1130522a0);
  if (bVar1 < 4) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        (*param_1)();
      }
      else {
        (*param_3)();
      }
    }
    else if (bVar1 == 2) {
      if (*(char *)((undefined8 *)(unaff_x20 + _DAT_1130522a8) + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10405d8b0);
        (*pcVar2)();
      }
      (*param_5)(*(undefined8 *)(unaff_x20 + _DAT_1130522a8));
    }
    else {
      (*param_7)();
    }
  }
  else if (bVar1 < 6) {
    if (bVar1 == 4) {
      param_12 = param_9;
    }
    (*param_12)();
  }
  else {
    if (bVar1 == 6) {
      puVar3 = (undefined8 *)(unaff_x20 + _DAT_1130522b0);
      if (puVar3[1] == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10405d8b4);
        (*pcVar2)();
      }
    }
    else if (bVar1 == 7) {
      puVar3 = (undefined8 *)(unaff_x20 + _DAT_1130522b8);
      param_15 = param_18;
      if (puVar3[1] == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10405d8b8);
        (*pcVar2)();
      }
    }
    else {
      puVar3 = (undefined8 *)(unaff_x20 + _DAT_1130522c0);
      param_15 = param_21;
      if (puVar3[1] == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10405d8bc);
        (*pcVar2)();
      }
    }
    (*param_15)(*puVar3);
  }
  return;
}



/* Entry: 10405d8bc; end: 10405d99b; -[SCGoogleContactPermissionResult matchAccessTokenExpired:noValidGoogleUserSession:requestGoogleContactsFail:noParentView:notDetermined:noContactPermissionGranted:contactsListOnly:otherContactsOnly:allContacts:] */

void FUN_10405d8bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
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
  
  uStack_f0 = param_9;
  uStack_110 = param_10;
  uStack_130 = param_11;
  uStack_d0 = param_8;
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_10405d794(FUN_10405dd74,auStack_40,FUN_10405ddcc,auStack_60,0x10405dd80,auStack_80,0x10405ddd0
                ,auStack_a0,0x10405ddd4,auStack_c0,0x10405ddd8,auStack_e0,0x10405dd90,auStack_100,
                0x10405dddc,auStack_120,0x10405dde0,auStack_140);
  _objc_release(param_1);
  return;
}



/* Entry: 10405d99c; end: 10405d9cf;  */

void FUN_10405d99c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10405d9d0; end: 10405da23; -[SCGoogleContactPermissionResult .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405d9d0(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130522b0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130522b8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130522c0 + 8))
  ;
  return;
}



/* Entry: 10405da24; end: 10405da33;  */

ulong FUN_10405da24(ulong param_1)

{
  if (8 < param_1) {
    param_1 = 9;
  }
  return param_1;
}



/* Entry: 10405da34; end: 10405dbab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10405da34(long param_1)

{
  byte bVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  
  bVar1 = *(byte *)(param_1 + _DAT_1130522a0);
  uVar3 = (ulong)bVar1;
  if (bVar1 < 4) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        uVar3 = 1;
      }
    }
    else if (bVar1 == 2) {
      if ((char)((ulong *)(param_1 + _DAT_1130522a8))[1] == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10405dba0);
        (*pcVar2)();
      }
      uVar3 = *(ulong *)(param_1 + _DAT_1130522a8);
    }
    else {
      uVar3 = 2;
    }
  }
  else if (bVar1 < 6) {
    uVar3 = 3;
    if (bVar1 != 4) {
      uVar3 = 4;
    }
  }
  else if (bVar1 == 6) {
    uVar4 = ((ulong *)(param_1 + _DAT_1130522b0))[1];
    if (uVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10405dba4);
      (*pcVar2)();
    }
    uVar3 = *(ulong *)(param_1 + _DAT_1130522b0);
    _swift_bridgeObjectRetain(uVar4);
  }
  else if (bVar1 == 7) {
    uVar4 = ((ulong *)(param_1 + _DAT_1130522b8))[1];
    if (uVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10405dba8);
      (*pcVar2)();
    }
    uVar3 = *(ulong *)(param_1 + _DAT_1130522b8);
    _swift_bridgeObjectRetain(uVar4);
  }
  else {
    uVar4 = ((ulong *)(param_1 + _DAT_1130522c0))[1];
    if (uVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10405dbac);
      (*pcVar2)();
    }
    uVar3 = *(ulong *)(param_1 + _DAT_1130522c0);
    _swift_bridgeObjectRetain(uVar4);
  }
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 10405dbac; end: 10405dbcb;  */

void FUN_10405dbac(void)

{
  _objc_opt_self(&PTR_PTR_112981c40);
  return;
}



/* Entry: 10405dbcc; end: 10405dd33;  */

int FUN_10405dbcc(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf7 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 8) {
      iVar2 = 4;
    }
    if (param_2 + 8 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10405dc48;
        goto LAB_10405dc2c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10405dc2c:
      return ((uint)*param_1 | uVar1 << 8) - 8;
    }
  }
LAB_10405dc48:
  iVar2 = *param_1 - 9;
  if (*param_1 < 9) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10405dd34; end: 10405dd73;  */

void FUN_10405dd34(void)

{
  undefined *puVar1;
  
  if (puRam00000001130522f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc9ed8;
  _swift_getWitnessTable(&UNK_10dcc9ed8,&UNK_11073b708);
  puRam00000001130522f0 = puVar1;
  return;
}



/* Entry: 10405dd74; end: 10405dd93;  */

void FUN_10405dd74(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010405dd7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 10405dd94; end: 10405ddcb;  */

void FUN_10405dd94(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10405ddcc; end: 10405dde3;  */

void FUN_10405ddcc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010405dd7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 10405dde4; end: 10405ddf3; -[_TtC32SCActivationDeepLinkInfoServices32SCActivationDeepLinkInfoServices deepLinkInfoService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405dde4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130522f8));
  return;
}



/* Entry: 10405ddf4; end: 10405de3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405ddf4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130522f8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10405de40; end: 10405de97; -[_TtC32SCActivationDeepLinkInfoServices32SCActivationDeepLinkInfoServices initWithDeepLinkInfoService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405de40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_1130522f8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 10405de98; end: 10405def7; -[_TtC32SCActivationDeepLinkInfoServices32SCActivationDeepLinkInfoServices init] */

void FUN_10405de98(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCActivationDeepLinkInfoServices.SCActivationDeepLinkInfoServices",0x41,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10405dec4);
  (*pcVar1)();
}



/* Entry: 10405def8; end: 10405df07; -[_TtC32SCActivationDeepLinkInfoServices32SCActivationDeepLinkInfoServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405def8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130522f8));
  return;
}



/* Entry: 10405df08; end: 10405df73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405df08(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  func_0x0001002d9208();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(long *)(lVar3 + _DAT_113052330) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  _swift_retain(param_2);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10405df74; end: 10405df7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405df74(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  func_0x0001002d9208();
  _objc_allocWithZone();
  *(long *)(lVar2 + _DAT_113052330) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain();
  _objc_msgSendSuper2(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 10405df7c; end: 10405dfc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405df7c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113052330) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10405dfc8; end: 10405e00f; -[_TtC30AuthenticationWorkflowServices33ActiveUserSessionWorkflowServices activeUserSessionWorkflow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405dfc8(undefined8 param_1)

{
  undefined8 uStack_28;
  
  _objc_retain();
  func_0x000100083b20(&uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_28);
  return;
}



/* Entry: 10405e010; end: 10405e06f; -[_TtC30AuthenticationWorkflowServices33ActiveUserSessionWorkflowServices init] */

void FUN_10405e010(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AuthenticationWorkflowServices.ActiveUserSessionWorkflowServices",0x40,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10405e03c);
  (*pcVar1)();
}



/* Entry: 10405e070; end: 10405e07f;  */

undefined1  [16] FUN_10405e070(void)

{
  return ZEXT816(0x11073b880);
}



/* Entry: 10405e080; end: 10405e08f; -[_TtC30AuthenticationWorkflowServices33ActiveUserSessionWorkflowServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405e080(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113052330));
  return;
}



/* Entry: 10405e090; end: 10405e0fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405e090(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  func_0x0001000a3190();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(long *)(lVar3 + _DAT_113052368) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  _swift_retain(param_2);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10405e0fc; end: 10405e103;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405e0fc(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  func_0x0001000a3190();
  _objc_allocWithZone();
  *(long *)(lVar2 + _DAT_113052368) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain();
  _objc_msgSendSuper2(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 10405e104; end: 10405e14f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405e104(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113052368) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10405e150; end: 10405e197; -[_TtC30AuthenticationWorkflowServices30AuthenticationWorkflowServices authenticationWorkflow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405e150(undefined8 param_1)

{
  undefined8 uStack_28;
  
  _objc_retain();
  func_0x000100083b20(&uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_28);
  return;
}



/* Entry: 10405e198; end: 10405e1f7; -[_TtC30AuthenticationWorkflowServices30AuthenticationWorkflowServices init] */

void FUN_10405e198(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AuthenticationWorkflowServices.AuthenticationWorkflowServices",0x3d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10405e1c4);
  (*pcVar1)();
}



/* Entry: 10405e1f8; end: 10405e207;  */

undefined1  [16] FUN_10405e1f8(void)

{
  return ZEXT816(0x11073b8a0);
}



/* Entry: 10405e208; end: 10405e217; -[_TtC30AuthenticationWorkflowServices30AuthenticationWorkflowServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405e208(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113052368));
  return;
}



/* Entry: 10405e218; end: 10405e283;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405e218(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  func_0x00010024444c();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(long *)(lVar3 + _DAT_1130523a0) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  _swift_retain(param_2);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10405e284; end: 10405e28b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405e284(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  func_0x00010024444c();
  _objc_allocWithZone();
  *(long *)(lVar2 + _DAT_1130523a0) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain();
  _objc_msgSendSuper2(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 10405e28c; end: 10405e2d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405e28c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130523a0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10405e2d8; end: 10405e31f; -[_TtC30AuthenticationWorkflowServices27UserSessionWorkflowServices userSessionWorkflow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405e2d8(undefined8 param_1)

{
  undefined8 uStack_28;
  
  _objc_retain();
  func_0x000100083b20(&uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_28);
  return;
}



/* Entry: 10405e320; end: 10405e37f; -[_TtC30AuthenticationWorkflowServices27UserSessionWorkflowServices init] */

void FUN_10405e320(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AuthenticationWorkflowServices.UserSessionWorkflowServices",0x3a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10405e34c);
  (*pcVar1)();
}



/* Entry: 10405e380; end: 10405e38f;  */

undefined1  [16] FUN_10405e380(void)

{
  return ZEXT816(0x11073b8c0);
}



/* Entry: 10405e390; end: 10405e39f; -[_TtC30AuthenticationWorkflowServices27UserSessionWorkflowServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405e390(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130523a0));
  return;
}



/* Entry: 10405e3a0; end: 10405e3af; -[AuthenticationExperimentServices experimentService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405e3a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130523d0));
  return;
}



/* Entry: 10405e3b0; end: 10405e447;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405e3b0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130523d0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10405e448; end: 10405e49f; -[AuthenticationExperimentServices initWithExperimentService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405e448(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_1130523d0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 10405e4a0; end: 10405e4ff; -[AuthenticationExperimentServices init] */

void FUN_10405e4a0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AuthenticationExperimentServices.AuthenticationExperimentServices",0x41,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10405e4cc);
  (*pcVar1)();
}



/* Entry: 10405e500; end: 10405e593; -[AuthenticationExperimentServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405e500(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130523d0));
  return;
}



/* Entry: 10405e594; end: 10405e7f3;  */

uint FUN_10405e594(ulong param_1,ulong param_2,code *param_3,code *param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong *puVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  
  if (param_1 >> 0x3e == 0) {
    uVar11 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar11 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar11 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (param_2 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_2 & 0xffffffffffffff8;
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar2 = param_2;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar11 == uVar2) {
    if (uVar11 != 0) {
      uVar5 = param_1 & 0xffffffffffffff8;
      uVar2 = uVar5;
      if ((param_1 & 0x8000000000000000) != 0) {
        uVar2 = param_1;
      }
      uVar3 = uVar5 + 0x20;
      if (param_1 >> 0x3e != 0) {
        uVar3 = uVar2;
      }
      uVar6 = param_2 & 0xffffffffffffff8;
      uVar2 = uVar6;
      if ((param_2 & 0x8000000000000000) != 0) {
        uVar2 = param_2;
      }
      uVar4 = uVar6 + 0x20;
      if (param_2 >> 0x3e != 0) {
        uVar4 = uVar2;
      }
      if (uVar3 != uVar4) {
        if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10405e7f4);
          (*pcVar1)();
        }
        (*param_3)(0);
        if (((param_2 | param_1) & 0xc000000000000001) == 0) {
          lVar8 = *(long *)(uVar5 + 0x10);
          lVar13 = *(long *)(uVar6 + 0x10);
          puVar9 = (ulong *)(param_1 + 0x20);
          puVar12 = (undefined8 *)(param_2 + 0x20);
          do {
            uVar11 = uVar11 - 1;
            if (lVar8 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10405e784);
              (*pcVar1)();
            }
            if (lVar13 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10405e788);
              (*pcVar1)();
            }
            uVar5 = *puVar9;
            uVar7 = *puVar12;
            _objc_retain();
            _objc_retain(uVar7);
            uVar2 = uVar5;
            __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar5,uVar7);
            uVar10 = (uint)uVar2;
            _objc_release(uVar5);
            _objc_release(uVar7);
            if ((uVar2 & 1) == 0) break;
            lVar13 = lVar13 + -1;
            lVar8 = lVar8 + -1;
            puVar9 = puVar9 + 1;
            puVar12 = puVar12 + 1;
          } while (uVar11 != 0);
        }
        else {
          lVar8 = 4;
          do {
            uVar11 = uVar11 - 1;
            uVar2 = lVar8 - 4;
            if ((param_1 & 0xc000000000000001) == 0) {
              if (*(long *)(uVar5 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x10405e78c);
                (*pcVar1)();
              }
              uVar3 = *(ulong *)(param_1 + lVar8 * 8);
              _objc_retain();
              if ((param_2 & 0xc000000000000001) == 0) goto LAB_10405e6ac;
LAB_10405e678:
              (*param_4)(uVar2,param_2);
            }
            else {
              uVar3 = uVar2;
              (*param_4)(uVar2,param_1);
              if ((param_2 & 0xc000000000000001) != 0) goto LAB_10405e678;
LAB_10405e6ac:
              if (*(long *)(uVar6 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x10405e790);
                (*pcVar1)();
              }
              uVar2 = *(ulong *)(param_2 + lVar8 * 8);
              _objc_retain(uVar2);
            }
            uVar4 = uVar3;
            __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar3,uVar2);
            uVar10 = (uint)uVar4;
            _objc_release(uVar3);
            _objc_release(uVar2);
          } while (((uVar4 & 1) != 0) && (lVar8 = lVar8 + 1, uVar11 != 0));
        }
        goto LAB_10405e7cc;
      }
    }
    uVar10 = 1;
  }
  else {
    uVar10 = 0;
  }
LAB_10405e7cc:
  return uVar10 & 1;
}



/* Entry: 10405e7f4; end: 10405e87f;  */

bool FUN_10405e7f4(ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar8 = param_1[2];
  uVar1 = param_2[1];
  uVar9 = param_2[2];
  FUN_10405e594(uVar3,*param_2,&SUB_10486de80,FUN_10405f860);
  if (((uVar3 & 1) == 0) ||
     (FUN_10405e594(uVar4,uVar1,&SUB_10486de80,FUN_10405f860), (uVar4 & 1) == 0)) {
    return false;
  }
  lVar7 = *(long *)(uVar8 + 0x10);
  if (lVar7 != *(long *)(uVar9 + 0x10)) {
    return false;
  }
  if ((lVar7 != 0) && (uVar8 != uVar9)) {
    pcVar5 = (char *)(uVar8 + 0x20);
    pcVar6 = (char *)(uVar9 + 0x20);
    do {
      lVar7 = lVar7 + -1;
      bVar2 = *pcVar5 == *pcVar6;
      if (*pcVar5 != *pcVar6) {
        return bVar2;
      }
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    } while (lVar7 != 0);
    return bVar2;
  }
  return true;
}



/* Entry: 10405e880; end: 10405e92b;  */

void FUN_10405e880(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10405e92c; end: 10405e92f;  */

void FUN_10405e92c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113052400 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcca1a8;
  _swift_getWitnessTable(&UNK_10dcca1a8,&UNK_11073ba58);
  puRam0000000113052400 = puVar1;
  return;
}



/* Entry: 10405e930; end: 10405e96f;  */

void FUN_10405e930(void)

{
  undefined *puVar1;
  
  if (puRam0000000113052400 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcca1a8;
  _swift_getWitnessTable(&UNK_10dcca1a8,&UNK_11073ba58);
  puRam0000000113052400 = puVar1;
  return;
}



/* Entry: 10405e970; end: 10405e983;  */

bool FUN_10405e970(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10405e984; end: 10405e9b3;  */

void FUN_10405e984(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
  _swift_bridgeObjectRelease(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[2]);
  return;
}



/* Entry: 10405e9b4; end: 10405ea73;  */

undefined8 * FUN_10405e9b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Entry: 10405ea74; end: 10405eabf;  */

undefined8 * FUN_10405ea74(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_bridgeObjectRelease(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 10405eac0; end: 10405ecc3;  */

int FUN_10405eac0(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10405ecc4; end: 10405ecdb; -[SCOAuthLoginConfig types] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405ecc4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113052408);
  (*(code *)&SUB_10486de80)(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10405ecdc; end: 10405ecf3; -[SCOAuthLoginConfig passwordlessTypes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405ecdc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113052410);
  (*(code *)&SUB_10486de80)(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10405ecf4; end: 10405ed07; -[SCOAuthLoginConfig pages] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405ecf4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113052418);
  (*(code *)0x10405fa24)(param_4);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10405ed08; end: 10405ed53;  */

void FUN_10405ed08(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,code *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  (*param_5)(param_4);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10405ed54; end: 10405ee3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405ed54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113052408) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113052410) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113052418) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10405ee3c; end: 10405eef7; -[SCOAuthLoginConfig initWithTypes:passwordlessTypes:pages:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405ee3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  _swift_getObjectType();
  uVar2 = 0;
  func_0x00010486de80(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar2);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_4,uVar2);
  uVar2 = param_4;
  func_0x00010405fa24();
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_5,uVar2);
  *(undefined8 *)(param_1 + _DAT_113052408) = param_3;
  *(undefined8 *)(param_1 + _DAT_113052410) = param_4;
  *(undefined8 *)(param_1 + _DAT_113052418) = param_5;
  lStack_50 = param_1;
  lStack_48 = lVar1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10405eef8; end: 10405ef3f;  */

void FUN_10405eef8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_allocWithZone();
  FUN_10405ef40(param_1,param_2,param_3);
  return;
}



/* Entry: 10405ef40; end: 10405f113;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405ef40(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_88 [16];
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _DAT_113052408) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113052410) = param_2;
  lVar8 = *(long *)(param_3 + 0x10);
  if (lVar8 == 0) {
    _swift_bridgeObjectRelease(param_3);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_bridgeObjectRetain(param_1);
    _swift_bridgeObjectRetain(param_2);
    lVar3 = 0;
    FUN_10405fa08(0,lVar8,0);
    puVar6 = puStack_68;
    func_0x00010405fa24();
    lVar7 = 0x20;
    do {
      cVar2 = *(char *)(param_3 + lVar7);
      lVar4 = lVar3;
      _objc_allocWithZone();
      if (cVar2 == '\0') {
        *(undefined1 *)(lVar4 + _DAT_113052420) = 0;
        plVar5 = &lStack_a8;
        lStack_a8 = lVar4;
        lStack_a0 = lVar3;
      }
      else if (cVar2 == '\x01') {
        *(undefined1 *)(lVar4 + _DAT_113052420) = 1;
        plVar5 = &lStack_98;
        lStack_98 = lVar4;
        lStack_90 = lVar3;
      }
      else {
        *(undefined1 *)(lVar4 + _DAT_113052420) = 2;
        plVar5 = &lStack_78;
        lStack_78 = lVar4;
        lStack_70 = lVar3;
      }
      _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
      uVar1 = *(ulong *)(puVar6 + 0x10);
      puStack_68 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
        FUN_10405fa08(1 < *(ulong *)(puVar6 + 0x18),uVar1 + 1,1);
      }
      puVar6 = puStack_68;
      *(ulong *)(puStack_68 + 0x10) = uVar1 + 1;
      *(long **)(puStack_68 + uVar1 * 8 + 0x20) = plVar5;
      lVar7 = lVar7 + 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    _swift_bridgeObjectRelease(param_3);
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_1);
  }
  *(undefined **)(unaff_x20 + _DAT_113052418) = puVar6;
  _objc_msgSendSuper2(auStack_88,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10405f114; end: 10405f147; -[SCOAuthLoginConfig hash] */

undefined8 FUN_10405f114(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10405f148();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10405f148; end: 10405f237;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405f148(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_113052408);
  uVar1 = 0;
  func_0x00010486de80(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar3,uVar1);
  uVar2 = uVar3;
  func_0x00010bfde980();
  _objc_release(uVar3);
  __ss6HasherV8_combineyySuF(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_113052410);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar3,uVar1);
  uVar2 = uVar3;
  func_0x00010bfde980();
  _objc_release(uVar3);
  __ss6HasherV8_combineyySuF(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113052418);
  func_0x00010405fa24();
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,uVar2);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10405f238; end: 10405f367;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10405f238(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar1 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar2 = &lStack_68;
    _swift_dynamicCast(plVar2,auStack_60,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if (((ulong)plVar2 & 1) != 0) {
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113052408);
      uVar5 = *(undefined8 *)(lStack_68 + _DAT_113052408);
      _swift_bridgeObjectRetain(uVar5);
      func_0x00010405e510(uVar4,uVar5);
      _swift_bridgeObjectRelease(uVar5);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113052410);
      uVar6 = *(undefined8 *)(lStack_68 + _DAT_113052410);
      _swift_bridgeObjectRetain(uVar6);
      func_0x00010405e510(uVar5,uVar6);
      _swift_bridgeObjectRelease(uVar6);
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_113052418);
      uVar7 = *(undefined8 *)(lStack_68 + _DAT_113052418);
      _swift_bridgeObjectRetain(uVar7);
      func_0x00010405e580(uVar6,uVar7);
      _objc_release(lStack_68);
      _swift_bridgeObjectRelease(uVar7);
      uVar3 = (uint)uVar4 & (uint)uVar5 & (uint)uVar6;
      goto LAB_10405f34c;
    }
  }
  uVar3 = 0;
LAB_10405f34c:
  return uVar3 & 1;
}



/* Entry: 10405f368; end: 10405f373; -[SCOAuthLoginConfig isEqual:] */

uint FUN_10405f368(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_10405f238(&uStack_50);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10405f374; end: 10405f3d7; -[SCOAuthLoginConfig description] */

void FUN_10405f374(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10405fcc8();
  _objc_release(param_1);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(param_3);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


