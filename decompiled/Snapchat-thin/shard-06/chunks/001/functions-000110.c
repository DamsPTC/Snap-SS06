/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104502034; end: 1045020e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104502034(code *param_1,undefined8 param_2,code *param_3)

{
  code *pcVar1;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_113081fe8) == '\x01') {
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113081ff0) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1045020d8);
      (*pcVar1)();
    }
    if (*(long *)(unaff_x20 + _DAT_113081ff8) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1045020e0);
      (*pcVar1)();
    }
    if (*(long *)(unaff_x20 + _DAT_113082000) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1045020e4);
      (*pcVar1)();
    }
    (*param_3)(*(undefined8 *)(unaff_x20 + _DAT_113081ff0));
  }
  else {
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113082008) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1045020dc);
      (*pcVar1)();
    }
    (*param_1)(*(undefined8 *)(unaff_x20 + _DAT_113082008));
  }
  return;
}



/* Entry: 1045020e4; end: 104502137; -[SCLensCarouselContextConfig matchPredefined:custom:] */

void FUN_1045020e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_104502034(FUN_104502508,auStack_40,0x104502510,auStack_60);
  _objc_release(param_1);
  return;
}



/* Entry: 104502138; end: 10450216b;  */

void FUN_104502138(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10450216c; end: 1045021a3; -[SCLensCarouselContextConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450216c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113081ff8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_113082000));
  return;
}



/* Entry: 1045021a4; end: 104502287;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1045021a4(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + _DAT_113081fe8) == '\x01') {
    if (*(char *)((undefined8 *)(param_1 + _DAT_113081ff0) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10450227c);
      (*pcVar1)();
    }
    if (*(long *)(param_1 + _DAT_113081ff8) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104502284);
      (*pcVar1)();
    }
    lVar2 = *(long *)(param_1 + _DAT_113082000);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104502288);
      (*pcVar1)();
    }
    uVar3 = *(undefined8 *)(param_1 + _DAT_113081ff0);
    _objc_retain(*(long *)(param_1 + _DAT_113081ff8));
    _swift_unknownObjectRetain(lVar2);
  }
  else {
    if (*(char *)((undefined8 *)(param_1 + _DAT_113082008) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104502280);
      (*pcVar1)();
    }
    uVar3 = *(undefined8 *)(param_1 + _DAT_113082008);
  }
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 104502288; end: 10450233f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104502288(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  lVar4 = param_1;
  FUN_104502340();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_113081fe8) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113082008);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  plVar2 = (long *)(lVar5 + _DAT_113081ff0);
  *plVar2 = param_1;
  *(undefined1 *)(plVar2 + 1) = 0;
  *(undefined8 *)(lVar5 + _DAT_113081ff8) = param_2;
  *(undefined8 *)(lVar5 + _DAT_113082000) = param_3;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  _objc_retain(param_2);
  _swift_unknownObjectRetain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar3);
  return;
}



/* Entry: 104502340; end: 10450235f;  */

void FUN_104502340(void)

{
  _objc_opt_self(&PTR_PTR_1129c7500);
  return;
}



/* Entry: 104502360; end: 1045024c7;  */

int FUN_104502360(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1045023dc;
        goto LAB_1045023c0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1045023c0:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1045023dc:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1045024c8; end: 104502507;  */

void FUN_1045024c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113082038 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd10624;
  _swift_getWitnessTable(&UNK_10dd10624,&UNK_1107809e0);
  puRam0000000113082038 = puVar1;
  return;
}



/* Entry: 104502508; end: 10450253b;  */

void FUN_104502508(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000104502538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 10450253c; end: 10450260f;  */

void FUN_10450253c(void)

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



/* Entry: 104502610; end: 10450262f;  */

void FUN_104502610(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 104502630; end: 104502663; -[SCLensCarouselActivationEvent description] */

void FUN_104502630(void)

{
  undefined1 auStack_48 [56];
  
  func_0x0001045031c4(auStack_48);
  FUN_1044fbc8c(auStack_48);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104502664; end: 1045026ab; -[SCLensCarouselActivationEvent init] */

void FUN_104502664(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCLensCarouselScope/LensCarouselActivationEventWrapper.swift",0x3c,2,0x4e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1045026ac);
  (*pcVar1)();
}



/* Entry: 1045026ac; end: 1045026df; -[SCLensCarouselActivationEvent hash] */

undefined8 FUN_1045026ac(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1045026e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1045026e0; end: 104502af7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045026e0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(unaff_x20 + _DAT_113082040));
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113082048) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_113082048);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar3);
  }
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113082050) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_113082050);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar3);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_113082058);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  if (*(long *)(unaff_x20 + _DAT_113082060) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1044fe9fc();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_113082068))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113082068);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar3 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113082070) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_113082070);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar3);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104502af8; end: 104502b77; -[SCLensCarouselActivationEvent isEqual:] */

uint FUN_104502af8(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x0001045028bc(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104502b78; end: 104502b7b; -[SCLensCarouselActivationEvent copyWithZone:] */

void FUN_104502b78(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104502b7c; end: 104502b93; +[SCLensCarouselActivationEvent activateWithCarouselType:] */

void FUN_104502b7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_104503358(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104502b94; end: 104502bab; +[SCLensCarouselActivationEvent activateCarouselSourceWithActivationSource:] */

void FUN_104502b94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000104503410(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104502bac; end: 104502c0b; +[SCLensCarouselActivationEvent activateCarouselDataWithLenses:activationConfiguration:] */

void FUN_104502bac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  FUN_1045034c8(param_3,param_4);
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104502c0c; end: 104502d57; +[SCLensCarouselActivationEvent activateContextWithContextId:activationSource:] */

void FUN_104502c0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  func_0x0001045035a4();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104502d58; end: 104502dcb; -[SCLensCarouselActivationEvent matchActivate:activateCarouselSource:activateCarouselData:activateContext:] */

void FUN_104502d58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain();
  func_0x000104502c4c(FUN_104503844,auStack_40,FUN_1045038b0,auStack_60,0x104503854,auStack_80,
                      FUN_104503868,auStack_a0);
  _objc_release(param_1);
  return;
}



/* Entry: 104502dcc; end: 104502dff;  */

void FUN_104502dcc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104502e00; end: 104502e4b; -[SCLensCarouselActivationEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104502e00(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113082058));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113082060));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113082068 + 8))
  ;
  return;
}



/* Entry: 104502e4c; end: 104503347;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104502e4c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 **ppuVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  ppuVar14 = &puStack_a0;
  uVar15 = *param_1;
  bVar5 = *(byte *)(param_1 + 6);
  if (bVar5 < 2) {
    if (bVar5 == 0) {
      FUN_10450367c();
      puVar13 = param_1;
      _objc_allocWithZone();
      *(undefined1 *)((long)puVar13 + _DAT_113082040) = 0;
      puVar1 = (undefined8 *)((long)puVar13 + _DAT_113082048);
      *puVar1 = uVar15;
      *(undefined1 *)(puVar1 + 1) = 0;
      puVar1 = (undefined8 *)((long)puVar13 + _DAT_113082050);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      *(undefined8 *)((long)puVar13 + _DAT_113082058) = 0;
      *(undefined8 *)((long)puVar13 + _DAT_113082060) = 0;
      puVar1 = (undefined8 *)((long)puVar13 + _DAT_113082068);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar13 + _DAT_113082070);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puStack_a0 = puVar13;
      puStack_98 = param_1;
    }
    else {
      FUN_10450367c();
      puVar13 = param_1;
      _objc_allocWithZone();
      *(undefined1 *)((long)puVar13 + _DAT_113082040) = 1;
      puVar1 = (undefined8 *)((long)puVar13 + _DAT_113082048);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)((long)puVar13 + _DAT_113082050);
      *puVar1 = uVar15;
      *(undefined1 *)(puVar1 + 1) = 0;
      *(undefined8 *)((long)puVar13 + _DAT_113082058) = 0;
      *(undefined8 *)((long)puVar13 + _DAT_113082060) = 0;
      puVar1 = (undefined8 *)((long)puVar13 + _DAT_113082068);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar13 + _DAT_113082070);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      ppuVar14 = &puStack_90;
      puStack_90 = puVar13;
      puStack_88 = param_1;
    }
  }
  else {
    uVar9 = param_1[1];
    uVar3 = param_1[2];
    if (bVar5 == 2) {
      uVar2 = param_1[4];
      uVar4 = param_1[5];
      uVar16 = param_1[3];
      lVar7 = 0;
      FUN_1044ff1bc();
      lVar8 = lVar7;
      _objc_allocWithZone();
      *(undefined8 *)(lVar8 + _DAT_113081e00) = uVar9;
      puVar1 = (undefined8 *)(lVar8 + _DAT_113081e08);
      *puVar1 = uVar3;
      puVar1[1] = uVar16;
      puVar1 = (undefined8 *)(lVar8 + _DAT_113081e10);
      *puVar1 = uVar2;
      puVar1[1] = uVar4;
      puVar6 = PTR_s_init_1125d9248;
      uVar9 = uVar15;
      lStack_70 = lVar8;
      lStack_68 = lVar7;
      _objc_retain(uVar15);
      _swift_bridgeObjectRetain(uVar16);
      _swift_bridgeObjectRetain(uVar4);
      plVar10 = &lStack_70;
      _objc_msgSendSuper2(plVar10,puVar6);
      plVar11 = plVar10;
      FUN_10450367c();
      plVar12 = plVar11;
      _objc_allocWithZone();
      puVar6 = PTR_s_init_1125d9248;
      *(undefined1 *)((long)plVar12 + _DAT_113082040) = 2;
      *(undefined8 *)((long)plVar12 + _DAT_113082048) = 0;
      *(undefined1 *)((undefined8 *)((long)plVar12 + _DAT_113082048) + 1) = 1;
      *(undefined8 *)((long)plVar12 + _DAT_113082050) = 0;
      *(undefined1 *)((undefined8 *)((long)plVar12 + _DAT_113082050) + 1) = 1;
      *(undefined8 *)((long)plVar12 + _DAT_113082058) = uVar15;
      *(long **)((long)plVar12 + _DAT_113082060) = plVar10;
      *(undefined8 *)((long)plVar12 + _DAT_113082068) = 0;
      ((undefined8 *)((long)plVar12 + _DAT_113082068))[1] = 0;
      *(undefined8 *)((long)plVar12 + _DAT_113082070) = 0;
      *(undefined1 *)((undefined8 *)((long)plVar12 + _DAT_113082070) + 1) = 1;
      plStack_80 = plVar12;
      plStack_78 = plVar11;
      _objc_retain(uVar9);
      _objc_retain(plVar10);
      _objc_msgSendSuper2(&plStack_80,puVar6);
      FUN_1044fbc8c(param_1);
      _objc_release(uVar9);
      _objc_release(plVar10);
      return;
    }
    FUN_10450367c();
    puVar13 = param_1;
    _objc_allocWithZone();
    *(undefined1 *)((long)puVar13 + _DAT_113082040) = 3;
    puVar1 = (undefined8 *)((long)puVar13 + _DAT_113082048);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar1 = (undefined8 *)((long)puVar13 + _DAT_113082050);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    *(undefined8 *)((long)puVar13 + _DAT_113082058) = 0;
    *(undefined8 *)((long)puVar13 + _DAT_113082060) = 0;
    puVar1 = (undefined8 *)((long)puVar13 + _DAT_113082068);
    *puVar1 = uVar15;
    puVar1[1] = uVar9;
    puVar1 = (undefined8 *)((long)puVar13 + _DAT_113082070);
    *puVar1 = uVar3;
    *(undefined1 *)(puVar1 + 1) = 0;
    ppuVar14 = &puStack_60;
    puStack_60 = puVar13;
    puStack_58 = param_1;
  }
  _objc_msgSendSuper2(ppuVar14,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104503348; end: 104503357;  */

ulong FUN_104503348(ulong param_1)

{
  if (3 < param_1) {
    param_1 = 4;
  }
  return param_1;
}



/* Entry: 104503358; end: 1045034c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104503358(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  FUN_10450367c();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113082040) = 0;
  plVar1 = (long *)(lVar4 + _DAT_113082048);
  *plVar1 = param_1;
  *(undefined1 *)(plVar1 + 1) = 0;
  puVar2 = (undefined8 *)(lVar4 + _DAT_113082050);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113082058) = 0;
  *(undefined8 *)(lVar4 + _DAT_113082060) = 0;
  puVar2 = (undefined8 *)(lVar4 + _DAT_113082068);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar4 + _DAT_113082070);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1045034c8; end: 10450367b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045034c8(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  FUN_10450367c();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113082040) = 2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082048);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082050);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(long *)(lVar4 + _DAT_113082058) = param_1;
  *(undefined8 *)(lVar4 + _DAT_113082060) = param_2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082068);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082070);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_msgSendSuper2(&lStack_40,puVar2);
  return;
}



/* Entry: 10450367c; end: 10450369b;  */

void FUN_10450367c(void)

{
  _objc_opt_self(&PTR_PTR_1129c75e0);
  return;
}



/* Entry: 10450369c; end: 104503803;  */

int FUN_10450369c(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104503718;
        goto LAB_1045036fc;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1045036fc:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_104503718:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104503804; end: 104503843;  */

void FUN_104503804(void)

{
  undefined *puVar1;
  
  if (puRam00000001130820a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd10714;
  _swift_getWitnessTable(&UNK_10dd10714,&UNK_110780ac8);
  puRam00000001130820a0 = puVar1;
  return;
}



/* Entry: 104503844; end: 104503867;  */

void FUN_104503844(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000104503850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 104503868; end: 1045038af;  */

void FUN_104503868(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1045038b0; end: 1045038b3;  */

void FUN_1045038b0(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000104503850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 1045038b4; end: 104503953;  */

undefined8 FUN_1045038b4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_10450408c(param_1);
  FUN_104504264(param_1);
  return uVar1;
}



/* Entry: 104503954; end: 104503963; -[SCLensCarouselConfiguration activationEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104503954(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130820a8));
  return;
}



/* Entry: 104503964; end: 104503973; -[SCLensCarouselConfiguration controllerState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104503964(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130820b0));
  return;
}



/* Entry: 104503974; end: 104503983; -[SCLensCarouselConfiguration lensCarouselUIConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104503974(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130820b8));
  return;
}



/* Entry: 104503984; end: 104503993; -[SCLensCarouselConfiguration selection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104503984(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130820c0));
  return;
}



/* Entry: 104503994; end: 104503a1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104503994(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130820a8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130820b0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130820b8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_1130820c0) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104503a20; end: 104503acf; -[SCLensCarouselConfiguration initWithActivationEvent:controllerState:lensCarouselUIConfiguration:selection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104503a20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_1130820a8) = param_3;
  *(undefined8 *)(param_1 + _DAT_1130820b0) = param_4;
  *(undefined8 *)(param_1 + _DAT_1130820b8) = param_5;
  *(undefined8 *)(param_1 + _DAT_1130820c0) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_msgSendSuper2(&lStack_50,puVar1);
  return;
}



/* Entry: 104503ad0; end: 104503b03; -[SCLensCarouselConfiguration hash] */

undefined8 FUN_104503ad0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104503b04();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104503b04; end: 104503c8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104503b04(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (*(long *)(unaff_x20 + _DAT_1130820a8) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1045026e0();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(param_1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_1130820b0);
  if (lVar1 == 0) {
    lVar1 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_c0);
    lVar1 = *(long *)(lVar1 + _DAT_113081ec0);
    if (lVar1 == 0) {
      __ss6HasherV8_combineyys5UInt8VF();
    }
    else {
      func_0x00010bfde980();
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(lVar1);
    }
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  if (*(long *)(unaff_x20 + _DAT_1130820b8) == 0) {
    lVar1 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x0001044ff3d4();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  if (*(long *)(unaff_x20 + _DAT_1130820c0) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_104500934();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104503c8c; end: 104503ee7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104503c8c(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  long unaff_x20;
  uint uVar6;
  long lVar7;
  uint uVar8;
  long lStack_68;
  long alStack_60 [4];
  
  lVar7 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,alStack_60);
  if (alStack_60[3] == 0) {
    func_0x00010006e7f4(alStack_60);
  }
  else {
    plVar1 = &lStack_68;
    _swift_dynamicCast(plVar1,alStack_60,PTR___sypN_11034f1a8 + 8,lVar7,6);
    if (((ulong)plVar1 & 1) != 0) {
      if (*(long *)(unaff_x20 + _DAT_1130820a8) == 0) {
        uVar6 = (uint)(*(long *)(lStack_68 + _DAT_1130820a8) == 0);
      }
      else {
        lVar7 = *(long *)(lStack_68 + _DAT_1130820a8);
        if (lVar7 == 0) {
          lVar2 = 0;
          alStack_60[1] = 0;
          alStack_60[2] = 0;
        }
        else {
          lVar2 = 0;
          FUN_10450367c();
        }
        alStack_60[0] = lVar7;
        alStack_60[3] = lVar2;
        _objc_retain(lVar7);
        uVar6 = 0;
        func_0x0001045028bc();
        func_0x00010006e7f4(alStack_60);
      }
      if (*(long *)(unaff_x20 + _DAT_1130820b0) == 0) {
        uVar8 = (uint)(*(long *)(lStack_68 + _DAT_1130820b0) == 0);
      }
      else {
        lVar7 = *(long *)(lStack_68 + _DAT_1130820b0);
        if (lVar7 == 0) {
          lVar2 = 0;
          alStack_60[1] = 0;
          alStack_60[2] = 0;
        }
        else {
          lVar2 = 0;
          FUN_1044ffc50();
        }
        alStack_60[0] = lVar7;
        alStack_60[3] = lVar2;
        _objc_retain(lVar7);
        uVar8 = 0;
        func_0x0001044ff7d0();
        func_0x00010006e7f4(alStack_60);
      }
      if (*(long *)(unaff_x20 + _DAT_1130820b8) == 0) {
        uVar4 = (uint)(*(long *)(lStack_68 + _DAT_1130820b8) == 0);
      }
      else {
        lVar7 = *(long *)(lStack_68 + _DAT_1130820b8);
        if (lVar7 == 0) {
          lVar2 = 0;
          alStack_60[1] = 0;
          alStack_60[2] = 0;
        }
        else {
          lVar2 = 0;
          FUN_1044ff654();
        }
        alStack_60[0] = lVar7;
        alStack_60[3] = lVar2;
        _objc_retain(lVar7);
        plVar1 = alStack_60;
        FUN_1044ff448(plVar1);
        uVar4 = (uint)plVar1;
        func_0x00010006e7f4(alStack_60);
      }
      if (*(long *)(unaff_x20 + _DAT_1130820c0) == 0) {
        lVar2 = *(long *)(lStack_68 + _DAT_1130820c0);
        lVar7 = lVar2;
        _objc_retain(lVar2);
        _objc_release(lStack_68);
        if (lVar2 == 0) {
          uVar5 = 1;
        }
        else {
          _objc_release(lVar7);
          uVar5 = 0;
        }
      }
      else {
        lVar7 = *(long *)(lStack_68 + _DAT_1130820c0);
        if (lVar7 == 0) {
          uVar3 = 0;
          alStack_60[1] = 0;
          alStack_60[2] = 0;
        }
        else {
          uVar3 = 0;
          FUN_104501ac4();
        }
        alStack_60[0] = lVar7;
        alStack_60[3] = uVar3;
        _objc_retain(lVar7);
        plVar1 = alStack_60;
        func_0x000104500b30(plVar1);
        uVar5 = (uint)plVar1;
        _objc_release(lStack_68);
        func_0x00010006e7f4(alStack_60);
      }
      if ((uVar6 & uVar8 & 1) != 0) {
        uVar4 = uVar4 & uVar5;
        goto LAB_104503ecc;
      }
    }
  }
  uVar4 = 0;
LAB_104503ecc:
  return uVar4 & 1;
}



/* Entry: 104503ee8; end: 104503f67; -[SCLensCarouselConfiguration isEqual:] */

uint FUN_104503ee8(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104503c8c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104503f68; end: 104503f6b; -[SCLensCarouselConfiguration copyWithZone:] */

void FUN_104503f68(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104503f6c; end: 104503fb7; -[SCLensCarouselConfiguration description] */

void FUN_104503f6c(undefined8 param_1)

{
  undefined1 auStack_a0 [128];
  
  _objc_retain();
  FUN_104504298(auStack_a0);
  _objc_release(param_1);
  FUN_104504264(auStack_a0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104503fb8; end: 104504033; -[SCLensCarouselConfiguration init] */

void FUN_104503fb8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCLensCarouselScope/LensCarouselConfigurationWrapper.swift",0x3a,2,0x46,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104504000);
  (*pcVar1)();
}



/* Entry: 104504034; end: 10450408b; -[SCLensCarouselConfiguration .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104504034(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130820a8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130820b0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130820b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130820c0));
  return;
}



/* Entry: 10450408c; end: 104504263;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450408c(undefined8 *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long unaff_x20;
  long lVar8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  byte bStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  char cStack_58;
  
  plVar4 = &lStack_e0;
  _swift_getObjectType();
  if (*(char *)(param_1 + 6) == -1) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    uStack_68 = param_1[4];
    uStack_60 = param_1[5];
    uStack_78 = param_1[2];
    uStack_70 = param_1[3];
    uStack_88 = *param_1;
    uStack_80 = param_1[1];
    cStack_58 = *(char *)(param_1 + 6);
    func_0x000103f68ed0();
    puVar7 = &uStack_88;
    FUN_104502e4c();
  }
  *(undefined8 **)(unaff_x20 + _DAT_1130820a8) = puVar7;
  lVar8 = param_1[7];
  if (lVar8 == 1) {
    plVar4 = (long *)0x0;
  }
  else {
    lVar6 = 0;
    FUN_1044ffc50();
    lVar5 = lVar6;
    _objc_allocWithZone();
    *(long *)(lVar5 + _DAT_113081ec0) = lVar8;
    puVar3 = PTR_s_init_1125d9248;
    lStack_e0 = lVar5;
    lStack_d8 = lVar6;
    _objc_retain(lVar8);
    _objc_msgSendSuper2(&lStack_e0,puVar3);
  }
  *(long **)(unaff_x20 + _DAT_1130820b0) = plVar4;
  lVar8 = param_1[9];
  if (lVar8 == 0) {
    plVar4 = (long *)0x0;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10);
    bVar2 = *(byte *)(param_1 + 8);
    lVar6 = 0;
    FUN_1044ff654();
    lVar5 = lVar6;
    _objc_allocWithZone();
    *(byte *)(lVar5 + _DAT_113081e80) = bVar2 & 1;
    *(long *)(lVar5 + _DAT_113081e88) = lVar8;
    *(byte *)(lVar5 + _DAT_113081e90) = bVar1 & 1;
    puVar3 = PTR_s_init_1125d9248;
    lStack_d0 = lVar5;
    lStack_c8 = lVar6;
    _objc_retain(lVar8);
    plVar4 = &lStack_d0;
    _objc_msgSendSuper2(plVar4,puVar3);
  }
  *(long **)(unaff_x20 + _DAT_1130820b8) = plVar4;
  if (((ulong)param_1[0xd] >> 1 == 0xffffffff) && (*(byte *)(param_1 + 0xf) < 2)) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    uStack_98 = param_1[0xe];
    uStack_b0 = param_1[0xb];
    uStack_a8 = param_1[0xc];
    uStack_a0 = param_1[0xd];
    bStack_90 = *(byte *)(param_1 + 0xf);
    func_0x000103f68f50();
    puVar7 = &uStack_b0;
    FUN_1045011cc();
  }
  *(undefined8 **)(unaff_x20 + _DAT_1130820c0) = puVar7;
  _objc_msgSendSuper2(&stack0xffffffffffffff40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104504264; end: 104504297;  */

undefined8 FUN_104504264(undefined8 param_1)

{
  (*(code *)(undefined *)0x1044fb834)();
  return param_1;
}



/* Entry: 104504298; end: 10450443f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104504298(undefined8 *param_1,long param_2)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  ulong uVar6;
  undefined1 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined1 auStack_b8 [16];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [16];
  undefined1 uStack_88;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  
  if (*(long *)(param_2 + _DAT_1130820a8) == 0) {
    uVar5 = 0xff;
    uStack_120 = 0;
    uStack_110 = 0;
    uStack_f0 = 0;
    uStack_e0 = 0;
    uStack_d0 = 0;
    uStack_100 = 0;
  }
  else {
    func_0x0001045031c4(auStack_b8);
    auVar1._8_8_ = uStack_a0;
    auVar1._0_8_ = uStack_a8;
    auVar8._8_8_ = uStack_a0;
    auVar8._0_8_ = uStack_a8;
    uStack_f0 = uStack_a8;
    uStack_e0 = auStack_98._0_8_;
    auVar9 = NEON_ext(auStack_98,auStack_98,8,1);
    auVar8 = NEON_ext(auVar8,auVar1,8,1);
    uStack_110 = auVar8._0_8_;
    uStack_100 = auVar9._0_8_;
    uStack_d0 = auStack_b8._0_8_;
    auVar8 = NEON_ext(auStack_b8,auStack_b8,8,1);
    uStack_120 = auVar8._0_8_;
    uVar5 = uStack_88;
  }
  if (*(long *)(param_2 + _DAT_1130820b0) == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = *(undefined8 *)(*(long *)(param_2 + _DAT_1130820b0) + _DAT_113081ec0);
    _objc_retain(uVar3);
  }
  lVar2 = *(long *)(param_2 + _DAT_1130820b8);
  if (lVar2 == 0) {
    uVar6 = 0;
    uVar7 = 0;
    uVar4 = 0;
  }
  else {
    uVar6 = (ulong)*(byte *)(lVar2 + _DAT_113081e80);
    uVar4 = *(undefined8 *)(lVar2 + _DAT_113081e88);
    uVar7 = *(undefined1 *)(lVar2 + _DAT_113081e90);
    _objc_retain(uVar4);
  }
  if (*(long *)(param_2 + _DAT_1130820c0) == 0) {
    uStack_60 = 0;
    uStack_70 = 0x1fffffffe;
    uStack_68 = 0;
    auStack_80 = ZEXT216(0);
  }
  else {
    _objc_retain();
    FUN_104501598(auStack_80);
  }
  param_1[1] = uStack_120;
  *param_1 = uStack_d0;
  param_1[3] = uStack_110;
  param_1[2] = uStack_f0;
  param_1[5] = uStack_100;
  param_1[4] = uStack_e0;
  *(undefined1 *)(param_1 + 6) = uVar5;
  param_1[7] = uVar3;
  param_1[8] = uVar6;
  param_1[9] = uVar4;
  *(undefined1 *)(param_1 + 10) = uVar7;
  param_1[0xc] = auStack_80._8_8_;
  param_1[0xb] = auStack_80._0_8_;
  param_1[0xe] = uStack_68;
  param_1[0xd] = uStack_70;
  *(undefined1 *)(param_1 + 0xf) = uStack_60;
  return;
}



/* Entry: 104504440; end: 10450445f;  */

void FUN_104504440(void)

{
  _objc_opt_self(&PTR_PTR_1129c76d0);
  return;
}



/* Entry: 104504460; end: 10450446f; -[SCLensCarouselPresenterLensState lens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104504460(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130820f0));
  return;
}



/* Entry: 104504470; end: 10450447f; -[SCLensCarouselPresenterLensState carouselPosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104504470(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130820f8);
}



/* Entry: 104504480; end: 104504497; -[SCLensCarouselPresenterLensState screenPosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104504480(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113082100);
}



/* Entry: 104504498; end: 1045045ff; -[SCLensCarouselPresenterLensState initWithLens:carouselPosition:screenPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104504498(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_1130820f0) = param_3;
  *(undefined8 *)(param_1 + _DAT_1130820f8) = param_4;
  *(undefined8 *)(param_1 + _DAT_113082100) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 104504600; end: 104504693; -[SCLensCarouselPresenterLensState hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104504600(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1130820f0);
  _objc_retain();
  func_0x00010bfde980(uVar1);
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_1130820f8));
  uVar1 = *(undefined8 *)(param_1 + _DAT_113082100);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104504694; end: 10450476f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_104504694(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar1 = &lStack_68;
    _swift_dynamicCast(plVar1,auStack_60,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar1 & 1) != 0) {
      uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1130820f0);
      func_0x00010c071ae0(uVar2);
      lVar5 = *(long *)(unaff_x20 + _DAT_1130820f8);
      lVar6 = *(long *)(lStack_68 + _DAT_1130820f8);
      lVar3 = *(long *)(unaff_x20 + _DAT_113082100);
      lVar7 = *(long *)(lStack_68 + _DAT_113082100);
      _objc_release(lStack_68);
      uVar4 = 0;
      if (lVar5 == lVar6) {
        uVar4 = (undefined4)uVar2;
      }
      if (lVar3 != lVar7) {
        return 0;
      }
      return uVar4;
    }
  }
  return 0;
}



/* Entry: 104504770; end: 1045047ef; -[SCLensCarouselPresenterLensState isEqual:] */

uint FUN_104504770(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104504694(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1045047f0; end: 1045047f3; -[SCLensCarouselPresenterLensState copyWithZone:] */

void FUN_1045047f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1045047f4; end: 10450480f; -[SCLensCarouselPresenterLensState description] */

void FUN_1045047f4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104504810; end: 10450488b; -[SCLensCarouselPresenterLensState init] */

void FUN_104504810(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCLensCarouselScope/LensCarouselPresenterLensStateWrapper.swift",0x3f,2,0x42,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104504858);
  (*pcVar1)();
}



/* Entry: 10450488c; end: 10450489b; -[SCLensCarouselPresenterLensState .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450488c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130820f0));
  return;
}



/* Entry: 10450489c; end: 1045048bb;  */

void FUN_10450489c(void)

{
  _objc_opt_self(&PTR_PTR_1129c77b0);
  return;
}



/* Entry: 1045048bc; end: 1045048d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045048bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130820f0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130820f8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113082100) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1045048d4; end: 104504b33;  */

uint FUN_1045048d4(ulong param_1,ulong param_2,code *param_3,code *param_4)

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
          pcVar1 = (code *)SoftwareBreakpoint(1,0x104504b34);
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
              pcVar1 = (code *)SoftwareBreakpoint(1,0x104504ac4);
              (*pcVar1)();
            }
            if (lVar13 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x104504ac8);
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
                pcVar1 = (code *)SoftwareBreakpoint(1,0x104504acc);
                (*pcVar1)();
              }
              uVar3 = *(ulong *)(param_1 + lVar8 * 8);
              _objc_retain();
              if ((param_2 & 0xc000000000000001) == 0) goto LAB_1045049ec;
LAB_1045049b8:
              (*param_4)(uVar2,param_2);
            }
            else {
              uVar3 = uVar2;
              (*param_4)(uVar2,param_1);
              if ((param_2 & 0xc000000000000001) != 0) goto LAB_1045049b8;
LAB_1045049ec:
              if (*(long *)(uVar6 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x104504ad0);
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
        goto LAB_104504b0c;
      }
    }
    uVar10 = 1;
  }
  else {
    uVar10 = 0;
  }
LAB_104504b0c:
  return uVar10 & 1;
}



/* Entry: 104504b34; end: 104504c07;  */

void FUN_104504b34(void)

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



/* Entry: 104504c08; end: 104504c27;  */

void FUN_104504c08(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 104504c28; end: 104504c5f; -[SCLensCarouselUIEvent description] */

void FUN_104504c28(void)

{
  undefined1 auStack_40 [48];
  
  _objc_retain();
  FUN_104506178(auStack_40);
  FUN_104506550(auStack_40);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104504c60; end: 104504ca7; -[SCLensCarouselUIEvent init] */

void FUN_104504c60(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCLensCarouselScope/LensCarouselUIEventWrapper.swift",0x34,2,0xac,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104504ca8);
  (*pcVar1)();
}



/* Entry: 104504ca8; end: 104504cdb; -[SCLensCarouselUIEvent hash] */

undefined8 FUN_104504ca8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104504cdc();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104504cdc; end: 10450525b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104504cdc(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(unaff_x20 + _DAT_113082130));
  lVar1 = *(long *)(unaff_x20 + _DAT_113082138);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113082140) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113082140);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113082148) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113082148);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113082150) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113082150);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113082158) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113082158);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_113082160);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113082168) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113082168);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113082170) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113082170);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_113082178);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113082180) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113082180);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113082188) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113082188);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113082190) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113082190);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113082198) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113082198);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_1130821a0);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = 0;
    func_0x000100c70ba8(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar1,uVar2);
    lVar3 = lVar1;
    func_0x00010bfde980();
    _objc_release(lVar1);
  }
  __ss6HasherV8_combineyySuF(lVar3);
  lVar1 = *(long *)(unaff_x20 + _DAT_1130821a8);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = 0;
    FUN_10450489c(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar1,uVar2);
    lVar3 = lVar1;
    func_0x00010bfde980();
    _objc_release(lVar1);
  }
  __ss6HasherV8_combineyySuF(lVar3);
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_1130821b0) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1130821b0);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_1130821b8) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1130821b8);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_1130821c0);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_1130821c8);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_1130821d0);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10450525c; end: 1045057cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10450525c(long *param_1)

{
  char cVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  long **pplVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  uint uVar11;
  byte bVar12;
  long *plVar13;
  long *unaff_x20;
  long *plVar14;
  long *unaff_x22;
  long *unaff_x23;
  long *plStack_68;
  long alStack_60 [3];
  long lStack_48;
  
  plVar13 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,alStack_60);
  if (lStack_48 == 0) {
LAB_1045052fc:
    plStack_68 = alStack_60;
code_r0x000104505300:
    func_0x00010006e7f4(plStack_68);
code_r0x000104505304:
    goto LAB_1045057b0;
  }
  pplVar5 = &plStack_68;
  _swift_dynamicCast(pplVar5,alStack_60,PTR___sypN_11034f1a8 + 8,plVar13,6);
  if (((ulong)pplVar5 & 1) == 0) goto LAB_1045057b0;
  bVar2 = *(byte *)((long)unaff_x20 + _DAT_113082130);
  plVar6 = (long *)(ulong)bVar2;
  plVar14 = plStack_68;
  if (bVar2 != *(byte *)((long)plStack_68 + _DAT_113082130)) goto LAB_1045057ac;
  plVar10 = (long *)&UNK_10dd10820;
  bVar12 = *(byte *)(plVar6 + 0x21ba2104);
  uVar11 = (uint)bVar12 * 4 + 0x45052f0;
  plVar7 = plStack_68;
  plVar9 = plVar6;
  plVar3 = param_1;
  plVar4 = unaff_x22;
  switch(bVar2) {
  default:
    _objc_release();
  case 0x5c:
  case 0x6a:
  case 0xa2:
  case 0xe2:
    plVar13 = (long *)0x1;
code_r0x0001045052f8:
    uVar11 = (uint)plVar13;
    break;
  case 4:
    plVar7 = *(long **)((long)unaff_x20 + _DAT_113082138);
    plVar13 = plStack_68;
    if (plVar7 != (long *)0x0) goto code_r0x000104505354;
    if (*(long *)((long)plStack_68 + _DAT_113082138) != 0) goto LAB_1045057ac;
    goto code_r0x0001045054e0;
  case 5:
    plVar6 = (long *)&DAT_113082000;
  case 0x1e:
  case 0x3e:
  case 0xc4:
    plVar13 = plVar6 + 0x2c;
    plVar6 = *(long **)((long)unaff_x20 + *plVar13);
    if (plVar6 != (long *)0x0) {
code_r0x000104505410:
code_r0x000104505414:
      plVar7 = plVar6;
      func_0x00010c071ae0();
      plVar13 = plStack_68;
code_r0x000104505420:
      plStack_68 = plVar13;
      plVar14 = plStack_68;
      if (((ulong)plVar7 & 1) == 0) goto LAB_1045057ac;
code_r0x00010450542c:
code_r0x000104505540:
      cVar1 = (char)((long *)((long)plStack_68 + _DAT_113082168))[1];
      plVar14 = plStack_68;
      if ((char)((long *)((long)unaff_x20 + _DAT_113082168))[1] != '\x01') {
        if ((cVar1 != '\x01') &&
           (*(long *)((long)unaff_x20 + _DAT_113082168) ==
            *(long *)((long)plStack_68 + _DAT_113082168))) goto code_r0x00010450562c;
        goto LAB_1045057ac;
      }
      if (cVar1 != '\x01') goto LAB_1045057ac;
code_r0x00010450562c:
      plVar9 = _DAT_113082170;
      goto code_r0x00010450569c;
    }
    plVar6 = *(long **)((long)plStack_68 + *plVar13);
code_r0x00010450553c:
    if (plVar6 == (long *)0x0) goto code_r0x000104505540;
    goto LAB_1045057ac;
  case 6:
    plVar6 = *(long **)((long)unaff_x20 + (long)_DAT_113082178);
    plVar10 = _DAT_113082178;
  case 0x43:
    if (plVar6 != (long *)0x0) {
code_r0x000104505444:
      func_0x00010c071ae0();
      if (((ulong)plVar6 & 1) == 0) goto LAB_1045057ac;
code_r0x000104505574:
      plVar6 = (long *)((long)unaff_x20 + (long)_DAT_113082180);
      plVar10 = _DAT_113082180;
code_r0x000104505580:
      bVar12 = *(byte *)(plVar6 + 1);
      plVar10 = (long *)((long)plStack_68 + (long)plVar10);
      uVar11 = (uint)*(byte *)(plVar10 + 1);
code_r0x00010450558c:
      if (bVar12 != 1) {
        if ((uVar11 != 1) && (*plVar6 == *plVar10)) goto code_r0x000104505650;
        goto LAB_1045057ac;
      }
      if (uVar11 != 1) goto LAB_1045057ac;
code_r0x000104505650:
      cVar1 = *(char *)((undefined8 *)((long)plStack_68 + _DAT_113082188) + 1);
      if (*(char *)((undefined8 *)((long)unaff_x20 + _DAT_113082188) + 1) != '\x01') {
        if ((cVar1 != '\x01') &&
           ((int)*(undefined8 *)((long)unaff_x20 + _DAT_113082188) ==
            (int)*(undefined8 *)((long)plStack_68 + _DAT_113082188))) goto code_r0x000104505738;
        goto LAB_1045057ac;
      }
      if (cVar1 != '\x01') goto LAB_1045057ac;
code_r0x000104505738:
      cVar1 = (char)((long *)((long)plStack_68 + _DAT_113082190))[1];
      plVar9 = _DAT_113082198;
      if ((char)((long *)((long)unaff_x20 + _DAT_113082190))[1] != '\x01') {
        if ((cVar1 != '\x01') &&
           (*(long *)((long)unaff_x20 + _DAT_113082190) ==
            *(long *)((long)plStack_68 + _DAT_113082190))) goto code_r0x00010450569c;
        goto LAB_1045057ac;
      }
joined_r0x0001045055c8:
      plVar14 = plStack_68;
      if (cVar1 != '\x01') goto LAB_1045057ac;
      goto code_r0x00010450569c;
    }
    plVar6 = *(long **)((long)plStack_68 + (long)plVar10);
code_r0x000104505570:
    if (plVar6 == (long *)0x0) goto code_r0x000104505574;
    goto LAB_1045057ac;
  case 7:
  case 0x94:
    param_1 = *(long **)((long)unaff_x20 + _DAT_1130821a0);
    unaff_x20 = *(long **)((long)plStack_68 + _DAT_1130821a0);
    if (param_1 == (long *)0x0) {
      _swift_bridgeObjectRetain(unaff_x20);
      _objc_release(plStack_68);
      goto code_r0x000104505520;
    }
  case 0x88:
  case 0x90:
  case 0x98:
    if (unaff_x20 != (long *)0x0) {
      _swift_bridgeObjectRetain(unaff_x20);
      plVar14 = param_1;
      _swift_bridgeObjectRetain(param_1);
      unaff_x22 = plStack_68;
code_r0x0001045053d0:
      FUN_1045048d4();
code_r0x0001045053e4:
      _swift_bridgeObjectRelease(param_1);
      _swift_bridgeObjectRelease(unaff_x20);
      plVar13 = plVar14;
      plVar4 = unaff_x22;
code_r0x0001045053f8:
      plStack_68 = plVar4;
code_r0x0001045053fc:
      uVar11 = (uint)plVar13;
code_r0x000104505330:
      _objc_release(plStack_68);
      break;
    }
    goto LAB_1045057ac;
  case 8:
  case 0x15:
  case 0x35:
  case 0xf2:
  case 0xfb:
    plVar6 = (long *)&DAT_113082000;
  case 0x24:
  case 0x45:
    plVar6 = (long *)plVar6[0x35];
code_r0x00010450547c:
    param_1 = *(long **)((long)unaff_x20 + (long)plVar6);
    plVar13 = *(long **)((long)plStack_68 + (long)plVar6);
code_r0x000104505484:
    if (param_1 != (long *)0x0) {
      uVar11 = 0;
      if (plVar13 != (long *)0x0) {
        _swift_bridgeObjectRetain(plVar13);
        unaff_x23 = plStack_68;
code_r0x000104505498:
        plVar14 = param_1;
        _swift_bridgeObjectRetain();
code_r0x0001045054a0:
code_r0x0001045054a8:
code_r0x0001045054ac:
code_r0x0001045054b0:
code_r0x0001045054b4:
        FUN_1045048d4();
code_r0x0001045054b8:
        plVar3 = param_1;
        unaff_x22 = plVar14;
code_r0x0001045054bc:
        plStack_68 = plVar3;
code_r0x0001045054c0:
        _swift_bridgeObjectRelease(plStack_68);
code_r0x0001045054c4:
        plStack_68 = plVar13;
code_r0x0001045054c8:
        plVar14 = unaff_x23;
        _swift_bridgeObjectRelease(plStack_68);
code_r0x0001045054d0:
        if (((ulong)unaff_x22 & 1) != 0) {
code_r0x0001045054d4:
          plStack_68 = plVar14;
          plVar10 = _DAT_1130821b0;
          goto code_r0x0001045055ac;
        }
        goto LAB_1045057ac;
      }
      goto code_r0x000104505330;
    }
    plVar10 = _DAT_1130821b0;
    if (plVar13 == (long *)0x0) {
code_r0x0001045055ac:
      plVar6 = (long *)((long)unaff_x20 + (long)plVar10);
      bVar12 = *(byte *)(plVar6 + 1);
code_r0x0001045055b4:
      cVar1 = (char)((long *)((long)plStack_68 + (long)plVar10))[1];
      plVar9 = _DAT_1130821b8;
      if (bVar12 == 1) goto joined_r0x0001045055c8;
      plVar14 = plStack_68;
      if ((cVar1 == '\x01') || (*plVar6 != *(long *)((long)plStack_68 + (long)plVar10)))
      goto LAB_1045057ac;
      goto code_r0x00010450569c;
    }
    goto LAB_1045057ac;
  case 9:
    lVar8 = *(long *)((long)unaff_x20 + (long)_DAT_1130821c0);
    plVar10 = _DAT_1130821c0;
    if (lVar8 == 0) goto code_r0x000104505378;
    goto code_r0x000104505318;
  case 10:
    plVar6 = (long *)&DAT_113082000;
  case 0x71:
    plVar10 = (long *)plVar6[0x39];
code_r0x000104505468:
    lVar8 = *(long *)((long)unaff_x20 + (long)plVar10);
joined_r0x000104505314:
    if (lVar8 != 0) {
code_r0x000104505318:
      func_0x00010c071ae0(lVar8);
      uVar11 = (uint)lVar8;
      goto code_r0x000104505330;
    }
code_r0x000104505378:
    plVar14 = *(long **)((long)plStack_68 + (long)plVar10);
    unaff_x20 = plVar14;
    param_1 = plStack_68;
code_r0x000104505384:
    _objc_retain(plVar14);
    _objc_release(param_1);
    if (unaff_x20 == (long *)0x0) goto code_r0x000104505530;
    goto LAB_1045057ac;
  case 0xb:
    lVar8 = *(long *)((long)unaff_x20 + (long)_DAT_1130821d0);
    plVar10 = _DAT_1130821d0;
    goto joined_r0x000104505314;
  case 0x10:
  case 0x30:
  case 0x9c:
  case 0xf6:
    goto code_r0x000104505420;
  case 0x11:
  case 0x1a:
  case 0x20:
  case 0x31:
  case 0x3a:
  case 0x40:
  case 0x49:
  case 0xf5:
  case 0xf7:
    goto code_r0x000104505484;
  case 0x12:
  case 0x21:
  case 0x32:
  case 0x41:
  case 0xf8:
    goto code_r0x0001045054a8;
  case 0x13:
  case 0x19:
  case 0x33:
  case 0x39:
  case 0xf9:
  case 0xff:
    goto code_r0x0001045054bc;
  case 0x14:
  case 0x34:
  case 0x65:
  case 0x95:
  case 0x9d:
  case 0xfa:
    goto code_r0x0001045053fc;
  case 0x16:
  case 0x36:
  case 0xfc:
    goto code_r0x0001045054b8;
  case 0x17:
  case 0x37:
  case 0xfd:
    goto code_r0x0001045054ac;
  case 0x18:
  case 0x38:
  case 0x44:
  case 0xf4:
  case 0xfe:
    goto code_r0x0001045054c4;
  case 0x1b:
  case 0x3b:
    goto code_r0x0001045054a0;
  case 0x1c:
  case 0x3c:
  case 0x4c:
    goto code_r0x000104505444;
  case 0x1d:
  case 0x3d:
  case 0x60:
    goto code_r0x000104505414;
  case 0x1f:
  case 0x3f:
    goto code_r0x0001045054c8;
  case 0x22:
  case 0x42:
  case 0x46:
    goto code_r0x0001045054c0;
  case 0x23:
  case 0xf0:
    goto code_r0x00010450542c;
  case 0x25:
    goto code_r0x000104505498;
  case 0x26:
    goto code_r0x00010450547c;
  case 0x47:
    goto code_r0x0001045054d4;
  case 0x48:
  case 0xf1:
    goto code_r0x0001045054b0;
  case 0x4d:
  case 0x5a:
  case 0x61:
  case 0x75:
  case 0x82:
  case 0x84:
  case 0x89:
  case 0x91:
  case 0x99:
  case 0xad:
  case 0xba:
  case 0xc1:
  case 0xc9:
  case 0xd1:
  case 0xd9:
    goto LAB_1045052fc;
  case 0x4e:
  case 0x62:
  case 0x76:
  case 0x8a:
  case 0x92:
  case 0x9a:
  case 0xae:
  case 0xc2:
  case 0xca:
  case 0xd2:
  case 0xda:
    goto code_r0x00010450558c;
  case 0x4f:
  case 99:
  case 0x77:
  case 0x8b:
  case 0x93:
  case 0x9b:
  case 0xaf:
  case 0xc3:
  case 0xcb:
  case 0xd3:
  case 0xdb:
    goto code_r0x0001045052f8;
  case 0x51:
    goto code_r0x0001045056e8;
  case 0x52:
  case 0x7a:
  case 0xb2:
    goto code_r0x0001045055ac;
  case 100:
    goto code_r0x000104505530;
  case 0x66:
  case 0x96:
  case 0x9e:
  case 0xce:
  case 0xd6:
  case 0xde:
    goto code_r0x0001045054ec;
  case 0x67:
  case 0x97:
  case 0x9f:
  case 0xcf:
  case 0xd7:
  case 0xdf:
    goto code_r0x0001045056c8;
  case 0x70:
    goto code_r0x0001045056b0;
  case 0x72:
  case 0xaa:
  case 0xea:
    goto code_r0x00010450553c;
  case 0x73:
  case 0xab:
  case 0xeb:
    goto code_r0x000104505304;
  case 0x74:
    goto code_r0x0001045053e4;
  case 0x78:
    goto code_r0x000104505650;
  case 0x79:
  case 0xb1:
    goto code_r0x0001045056e4;
  case 0x8c:
    goto code_r0x00010450569c;
  case 0x8d:
code_r0x000104505520:
    if (unaff_x20 != (long *)0x0) {
      _swift_bridgeObjectRelease(unaff_x20);
      goto LAB_1045057b0;
    }
code_r0x000104505530:
    uVar11 = 1;
    break;
  case 0x8e:
    goto code_r0x0001045055b4;
  case 0xa8:
    goto code_r0x0001045053d0;
  case 0xa9:
  case 0xe9:
    goto code_r0x000104505468;
  case 0xac:
    goto code_r0x000104505384;
  case 0xb0:
    goto code_r0x000104505570;
  case 0xbc:
    goto code_r0x000104505300;
  case 0xc0:
  case 200:
  case 0xd0:
  case 0xd8:
code_r0x000104505354:
    plVar14 = plVar13;
    func_0x00010c071ae0();
    plStack_68 = plVar14;
    if (((ulong)plVar7 & 1) == 0) goto LAB_1045057ac;
code_r0x0001045054e0:
    plVar6 = (long *)((long)unaff_x20 + (long)_DAT_113082140);
    plVar10 = _DAT_113082140;
code_r0x0001045054ec:
    bVar12 = *(byte *)(plVar6 + 1);
code_r0x0001045054f0:
    bVar2 = *(byte *)((long *)((long)plStack_68 + (long)plVar10) + 1);
    uVar11 = (uint)bVar2;
    plVar14 = plStack_68;
    if (bVar12 == 1) {
code_r0x000104505500:
      plStack_68 = plVar14;
      if (uVar11 == 1) {
code_r0x0001045055e8:
        plVar6 = (long *)((long)unaff_x20 + _DAT_113082148);
        plVar10 = (long *)((long)plStack_68 + _DAT_113082148);
        plVar14 = plStack_68;
        if ((char)plVar6[1] == '\x01') {
          if ((char)plVar10[1] == '\x01') {
code_r0x0001045056f4:
            cVar1 = (char)((long *)((long)plStack_68 + _DAT_113082150))[1];
            plVar14 = plStack_68;
            plVar9 = _DAT_113082158;
            if ((char)((long *)((long)unaff_x20 + _DAT_113082150))[1] == '\x01') {
              if (cVar1 == '\x01') {
code_r0x00010450569c:
                plVar13 = *(long **)((long)unaff_x20 + (long)plVar9);
                unaff_x22 = (long *)(ulong)*(byte *)((undefined8 *)((long)unaff_x20 + (long)plVar9)
                                                    + 1);
                plVar6 = (long *)((long)plStack_68 + (long)plVar9);
                unaff_x20 = (long *)*plVar6;
code_r0x0001045056b0:
                lVar8 = plVar6[1];
                _objc_release();
                if ((int)unaff_x22 == 1) {
                  plVar13 = (long *)(ulong)((char)lVar8 == '\x01');
code_r0x0001045056c8:
                  uVar11 = (uint)plVar13;
                }
                else {
                  uVar11 = (uint)((char)lVar8 != '\x01' && plVar13 == unaff_x20);
                }
                break;
              }
            }
            else if ((cVar1 != '\x01') &&
                    (*(long *)((long)unaff_x20 + _DAT_113082150) ==
                     *(long *)((long)plStack_68 + _DAT_113082150))) goto code_r0x00010450569c;
          }
        }
        else if ((char)plVar10[1] != '\x01') {
code_r0x0001045056e4:
          plVar6 = (long *)*plVar6;
code_r0x0001045056e8:
          plVar14 = plStack_68;
          if ((int)plVar6 == (int)*plVar10) goto code_r0x0001045056f4;
        }
      }
    }
    else if ((bVar2 != 1) && (*plVar6 == *(long *)((long)plStack_68 + (long)plVar10)))
    goto code_r0x0001045055e8;
LAB_1045057ac:
    _objc_release(plVar14);
LAB_1045057b0:
    uVar11 = 0;
    break;
  case 0xc5:
    goto code_r0x0001045054f0;
  case 0xc6:
    goto code_r0x00010450562c;
  case 0xcc:
    goto code_r0x000104505410;
  case 0xcd:
  case 0xd5:
  case 0xdd:
    goto code_r0x0001045053f8;
  case 0xd4:
    goto code_r0x000104505500;
  case 0xdc:
    goto code_r0x000104505580;
  case 0xe8:
    goto code_r0x0001045054d0;
  case 0xf3:
    goto code_r0x0001045054b4;
  }
  return uVar11 & 1;
}



/* Entry: 1045057d0; end: 10450584f; -[SCLensCarouselUIEvent isEqual:] */

uint FUN_1045057d0(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10450525c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104505850; end: 104505853; -[SCLensCarouselUIEvent copyWithZone:] */

void FUN_104505850(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104505854; end: 10450586b;  */

void FUN_104505854(void)

{
  func_0x000104506584(0);
  return;
}



/* Entry: 10450586c; end: 10450589b; +[SCLensCarouselUIEvent willShowCarousel] */

void FUN_10450586c(void)

{
  func_0x000104506584(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10450589c; end: 1045058cb; +[SCLensCarouselUIEvent willHideCarousel] */

void FUN_10450589c(void)

{
  func_0x000104506584(1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1045058cc; end: 1045058fb; +[SCLensCarouselUIEvent didShowCarousel] */

void FUN_1045058cc(void)

{
  func_0x000104506584(2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1045058fc; end: 104505913; +[SCLensCarouselUIEvent didHideCarousel] */

void FUN_1045058fc(void)

{
  func_0x000104506584(3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104505914; end: 104505917;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104505914(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  FUN_104507528();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113082130) = 4;
  *(long *)(lVar4 + _DAT_113082138) = param_1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082140);
  *puVar1 = param_2;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082148);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082150);
  *puVar1 = param_4;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082158);
  *puVar1 = param_5;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined8 *)(lVar4 + _DAT_113082160) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082168);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082170);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113082178) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082180);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082188);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082190);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082198);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_1130821a0) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130821a8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130821b0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130821b8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_1130821c0) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130821c8) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130821d0) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_50,puVar2);
  return;
}



/* Entry: 104505918; end: 10450597f; +[SCLensCarouselUIEvent didActivateWithLens:index:selectionType:originalLensIndex:totalLensesCount:] */

void FUN_104505918(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_104506728();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104505980; end: 104505983;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104505980(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  FUN_104507528();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113082130) = 5;
  *(undefined8 *)(lVar4 + _DAT_113082138) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082140);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082148);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082150);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082158);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(long *)(lVar4 + _DAT_113082160) = param_1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082168);
  *puVar1 = param_2;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082170);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined8 *)(lVar4 + _DAT_113082178) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082180);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082188);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082190);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082198);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_1130821a0) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130821a8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130821b0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130821b8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_1130821c0) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130821c8) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130821d0) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_40,puVar2);
  return;
}



/* Entry: 104505984; end: 1045059d3; +[SCLensCarouselUIEvent willSelectWithLens:index:originalLensIndex:] */

void FUN_104505984(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_1045068fc();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1045059d4; end: 1045059d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045059d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  FUN_104507528();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113082130) = 6;
  *(undefined8 *)(lVar4 + _DAT_113082138) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082140);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082148);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082150);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082158);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113082160) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082168);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082170);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(long *)(lVar4 + _DAT_113082178) = param_1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082180);
  *puVar1 = param_2;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082188);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082190);
  *puVar1 = param_4;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082198);
  *puVar1 = param_5;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130821a0) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130821a8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130821b0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130821b8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_1130821c0) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130821c8) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130821d0) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_50,puVar2);
  return;
}



/* Entry: 1045059d8; end: 104505a3f; +[SCLensCarouselUIEvent didSelectWithLens:index:selectionType:originalLensIndex:totalLensesCount:] */

void FUN_1045059d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_104506ac0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104505a40; end: 104505a43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104505a40(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  FUN_104507528();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113082130) = 7;
  *(undefined8 *)(lVar4 + _DAT_113082138) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082140);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082148);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082150);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082158);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113082160) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082168);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082170);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113082178) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082180);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082188);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082190);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082198);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(long *)(lVar4 + _DAT_1130821a0) = param_1;
  *(undefined8 *)(lVar4 + _DAT_1130821a8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130821b0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130821b8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_1130821c0) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130821c8) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130821d0) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  _swift_bridgeObjectRetain(param_1);
  _objc_msgSendSuper2(&lStack_30,puVar2);
  return;
}



/* Entry: 104505a44; end: 104505a8b; +[SCLensCarouselUIEvent didUpdateLensesListWithLenses:] */

void FUN_104505a44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000100c70ba8(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  uVar1 = param_3;
  FUN_104506c94();
  _swift_bridgeObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104505a8c; end: 104505a8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104505a8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  FUN_104507528();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113082130) = 8;
  *(undefined8 *)(lVar4 + _DAT_113082138) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082140);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082148);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082150);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082158);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113082160) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082168);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082170);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113082178) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082180);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082188);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082190);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082198);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_1130821a0) = 0;
  *(long *)(lVar4 + _DAT_1130821a8) = param_1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130821b0);
  *puVar1 = param_2;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130821b8);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130821c0) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130821c8) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130821d0) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  _swift_bridgeObjectRetain(param_1);
  _objc_msgSendSuper2(&lStack_40,puVar2);
  return;
}



/* Entry: 104505a90; end: 104505aef; +[SCLensCarouselUIEvent didUpdateWithVisibleLenses:selectedLensIndex:originalLensIndex:] */

void FUN_104505a90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10450489c(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  uVar1 = param_3;
  FUN_104506e48();
  _swift_bridgeObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104505af0; end: 104505af3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104505af0(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  FUN_104507528();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113082130) = 9;
  *(undefined8 *)(lVar4 + _DAT_113082138) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082140);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082148);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082150);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082158);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113082160) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082168);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082170);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113082178) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082180);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082188);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082190);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082198);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_1130821a0) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130821a8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130821b0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130821b8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(long *)(lVar4 + _DAT_1130821c0) = param_1;
  *(undefined8 *)(lVar4 + _DAT_1130821c8) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130821d0) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_30,puVar2);
  return;
}



/* Entry: 104505af4; end: 104505b2b; +[SCLensCarouselUIEvent willDisplayWithLens:] */

void FUN_104505af4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_10450700c();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104505b2c; end: 104505b2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104505b2c(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  FUN_104507528();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113082130) = 10;
  *(undefined8 *)(lVar4 + _DAT_113082138) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082140);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082148);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082150);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082158);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113082160) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082168);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082170);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113082178) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082180);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082188);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082190);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082198);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_1130821a0) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130821a8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130821b0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130821b8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_1130821c0) = 0;
  *(long *)(lVar4 + _DAT_1130821c8) = param_1;
  *(undefined8 *)(lVar4 + _DAT_1130821d0) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_30,puVar2);
  return;
}



/* Entry: 104505b30; end: 104505b67; +[SCLensCarouselUIEvent didUpdateDisplayedWithLens:] */

void FUN_104505b30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x0001045071c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104505b68; end: 104505b6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104505b68(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  FUN_104507528();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113082130) = 0xb;
  *(undefined8 *)(lVar4 + _DAT_113082138) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082140);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082148);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082150);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082158);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113082160) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082168);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082170);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113082178) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082180);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082188);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082190);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082198);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_1130821a0) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130821a8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130821b0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130821b8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_1130821c0) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130821c8) = 0;
  *(long *)(lVar4 + _DAT_1130821d0) = param_1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_30,puVar2);
  return;
}



/* Entry: 104505b6c; end: 104505ba3; +[SCLensCarouselUIEvent didEndDisplayingWithLens:] */

void FUN_104505b6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x000104507374();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104505ba4; end: 104505ecb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104505ba4(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,code *param_7,undefined8 param_8,code *param_9,
                  undefined8 *param_10,code *param_11,undefined4 param_12,undefined4 param_13,
                  code *param_14,undefined8 *param_15,code *param_16,undefined4 param_17,
                  undefined4 param_18,code *param_19,ulong param_20,code *param_21,
                  undefined4 param_22,undefined4 param_23,code *param_24,undefined4 param_25,
                  undefined4 param_26,code *param_27)

{
  code *pcVar1;
  long unaff_x20;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(unaff_x20 + _DAT_113082130)) {
  case 0:
    (*param_1)();
    break;
  case 1:
    (*param_3)();
    break;
  case 2:
    (*param_5)();
    break;
  case 3:
    (*param_7)();
    break;
  case 4:
    param_1 = *(code **)(unaff_x20 + _DAT_113082138);
    if (param_1 == (code *)0x0) goto code_r0x000104505e80;
    param_15 = (undefined8 *)(unaff_x20 + _DAT_113082140);
    param_20 = _DAT_113082148;
    if (*(char *)(param_15 + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104505ea0);
      (*pcVar1)();
    }
  case 0x10:
    if (*(char *)((undefined8 *)(unaff_x20 + param_20) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104505eb0);
      (*pcVar1)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113082150) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104505ec0);
      (*pcVar1)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113082158) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104505ec8);
      (*pcVar1)();
    }
    (*param_9)(param_1,*param_15,*(undefined8 *)(unaff_x20 + param_20),
               *(undefined8 *)(unaff_x20 + _DAT_113082150),
               *(undefined8 *)(unaff_x20 + _DAT_113082158));
    break;
  case 5:
    param_1 = *(code **)(unaff_x20 + _DAT_113082160);
    if (param_1 == (code *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104505e90);
      (*pcVar1)();
    }
  case 0xe:
    param_15 = (undefined8 *)(unaff_x20 + _DAT_113082168);
    if (*(char *)(param_15 + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104505ea4);
      (*pcVar1)();
    }
  case 0xf:
    param_10 = (undefined8 *)(unaff_x20 + _DAT_113082170);
    if (*(char *)(param_10 + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104505eb4);
      (*pcVar1)();
    }
  case 0x13:
    (*param_11)(param_1,*param_15,*param_10);
    break;
  case 6:
    param_1 = *(code **)(unaff_x20 + _DAT_113082178);
    if (param_1 == (code *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104505e94);
      (*pcVar1)();
    }
    param_10 = (undefined8 *)(unaff_x20 + _DAT_113082180);
    param_20 = (ulong)*(byte *)(param_10 + 1);
  case 0x11:
    if ((int)param_20 == 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104505ea8);
      (*pcVar1)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113082188) + 1) == '\x01') {
code_r0x000104505eb4:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104505eb8);
      (*pcVar1)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113082190) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104505ec4);
      (*pcVar1)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113082198) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104505ecc);
      (*pcVar1)();
    }
    param_2 = *param_10;
    param_3 = *(code **)(unaff_x20 + _DAT_113082188);
    param_4 = *(undefined8 *)(unaff_x20 + _DAT_113082190);
    param_5 = *(code **)(unaff_x20 + _DAT_113082198);
  case 0x12:
    (*param_14)(param_1,param_2,param_3,param_4,param_5);
    break;
  case 7:
    param_15 = (undefined8 *)&DAT_113082000;
  case 0x15:
    if (*(long *)(unaff_x20 + param_15[0x34]) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104505e8c);
      (*pcVar1)();
    }
    (*param_16)();
    break;
  case 8:
    if (*(long *)(unaff_x20 + _DAT_1130821a8) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104505e9c);
      (*pcVar1)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_1130821b0) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104505eac);
      (*pcVar1)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_1130821b8) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104505ebc);
      (*pcVar1)();
    }
    (*param_19)(*(long *)(unaff_x20 + _DAT_1130821a8),*(undefined8 *)(unaff_x20 + _DAT_1130821b0),
                *(undefined8 *)(unaff_x20 + _DAT_1130821b8));
    break;
  case 9:
    if (*(long *)(unaff_x20 + _DAT_1130821c0) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104505e88);
      (*pcVar1)();
    }
    (*param_21)();
    break;
  case 10:
    if (*(long *)(unaff_x20 + _DAT_1130821c8) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104505e98);
      (*pcVar1)();
    }
    (*param_24)();
    break;
  default:
    if (*(long *)(unaff_x20 + _DAT_1130821d0) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104505e80);
      (*pcVar1)();
    }
    (*param_27)();
  case 0x17:
    break;
  case 0xc:
    _objc_retain();
    FUN_104505ba4(FUN_1045076f0,&stack0xffffffffffffffc0,0x104507760,&stack0xffffffffffffffa0,
                  0x104507764,auStack_80,0x104507768,auStack_a0);
    _objc_release(param_1);
    return;
  case 0x14:
    goto code_r0x000104505eb4;
  case 0x16:
code_r0x000104505e80:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104505e84);
    (*pcVar1)();
  }
  return;
}



/* Entry: 104505ecc; end: 104506037; -[SCLensCarouselUIEvent matchWillShowCarousel:willHideCarousel:didShowCarousel:didHideCarousel:didActivate:willSelect:didSelect:didUpdateLensesList:didUpdate:willDisplay:didUpdateDisplayed:didEndDisplaying:] */

void FUN_104505ecc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined1 auStack_1a0 [16];
  undefined8 uStack_190;
  undefined1 auStack_180 [16];
  undefined8 uStack_170;
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
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
  uStack_150 = param_12;
  uStack_170 = param_13;
  uStack_190 = param_14;
  uStack_d0 = param_8;
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_104505ba4(FUN_1045076f0,auStack_40,0x104507760,auStack_60,0x104507764,auStack_80,0x104507768,
                auStack_a0,0x1045076fc,auStack_c0,0x10450771c,auStack_e0,0x104507754,auStack_100,
                0x104507734,auStack_120,0x10450773c,auStack_140,0x104507744,auStack_160,0x104507758,
                auStack_180,0x10450775c,auStack_1a0);
  _objc_release(param_1);
  return;
}


