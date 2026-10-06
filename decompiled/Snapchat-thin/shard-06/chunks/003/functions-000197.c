/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10468fbc8; end: 10468fddb;  */

undefined8 FUN_10468fbc8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 unaff_x20;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar2 = 0x4e4f4d4d4f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e4f4d4d4f43,0xe600000000000000);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
LAB_10468fd84:
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    uVar2 = 0;
    FUN_10468fddc(0,0x11308bd50,&PTR_PTR_1126b9150);
    puVar1 = PTR___sypN_11034f1a8;
    plVar4 = &lStack_88;
    _swift_dynamicCast(plVar4,&uStack_60,PTR___sypN_11034f1a8 + 8,uVar2,6);
    lVar3 = lStack_88;
    if (((ulong)plVar4 & 1) != 0) {
      uVar2 = 0x544e455645;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x544e455645,0xe500000000000000);
      lVar5 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (lVar5 == 0) {
        uStack_78 = 0;
        uStack_80 = 0;
        lStack_68 = 0;
        uStack_70 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar5);
        _swift_unknownObjectRelease(lVar5);
      }
      uStack_58 = uStack_78;
      uStack_60 = uStack_80;
      lStack_48 = lStack_68;
      uStack_50 = uStack_70;
      if (lStack_68 == 0) {
        _objc_release(param_1);
        param_1 = lVar3;
        goto LAB_10468fd84;
      }
      uVar2 = 0;
      FUN_10468fddc(0,0x11308c498,&PTR_PTR_1126b8ff0);
      plVar4 = &lStack_88;
      _swift_dynamicCast(plVar4,&uStack_60,puVar1 + 8,uVar2,6);
      if (((ulong)plVar4 & 1) != 0) {
        func_0x00010c000060();
        _objc_release(param_1);
        _objc_release(lStack_88);
        _objc_release(lVar3);
        return unaff_x20;
      }
      _objc_release(param_1);
      param_1 = lVar3;
    }
    _objc_release(param_1);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 10468fddc; end: 10468fe1b;  */

void FUN_10468fddc(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 10468fe1c; end: 10468fe43; -[SCAdSKOverlayEvent initWithCoder:] */

void FUN_10468fe1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10468fbc8();
  return;
}



/* Entry: 10468fe44; end: 10468fe5f; -[SCAdSKOverlayEvent description] */

void FUN_10468fe44(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10468fe60; end: 10468fedb; -[SCAdSKOverlayEvent init] */

void FUN_10468fe60(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdSKOverlayEventWrapper.swift",0x36,2,0x4a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10468fea8);
  (*pcVar1)();
}



/* Entry: 10468fedc; end: 10468ff13; -[SCAdSKOverlayEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468fedc(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308c488));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308c490));
  return;
}



/* Entry: 10468ff14; end: 10468ff33;  */

void FUN_10468ff14(void)

{
  _objc_opt_self(&PTR_PTR_1129d0af8);
  return;
}



/* Entry: 10468ff34; end: 10468ff37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468ff34(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308c488) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308c490) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10468ff38; end: 10468ff4b; -[SCAdStickerPosition stickerSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10468ff38(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11308c4c8);
}



/* Entry: 10468ff4c; end: 10468ff5f; -[SCAdStickerPosition stickerRelativeSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10468ff4c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11308c4d0);
}



/* Entry: 10468ff60; end: 10468ff73; -[SCAdStickerPosition bottomLeftPosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10468ff60(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11308c4d8);
}



/* Entry: 10468ff74; end: 10468ff87; -[SCAdStickerPosition bottomLeftRelativePosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10468ff74(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11308c4e0);
}



/* Entry: 10468ff88; end: 10469003b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468ff88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308c4c8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308c4d0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308c4d8);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308c4e0);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10469003c; end: 1046900f7; -[SCAdStickerPosition initWithStickerSize:stickerRelativeSize:bottomLeftPosition:bottomLeftRelativePosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469003c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_9;
  _swift_getObjectType();
  puVar1 = (undefined8 *)(param_9 + _DAT_11308c4c8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_9 + _DAT_11308c4d0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(param_9 + _DAT_11308c4d8);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(param_9 + _DAT_11308c4e0);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  lStack_70 = param_9;
  lStack_68 = lVar2;
  _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1046900f8; end: 10469016f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046900f8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  uVar2 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308c4c8);
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308c4d0);
  puVar1[1] = uVar4;
  *puVar1 = uVar3;
  uVar2 = param_1[4];
  uVar4 = param_1[7];
  uVar3 = param_1[6];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308c4d8);
  puVar1[1] = param_1[5];
  *puVar1 = uVar2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308c4e0);
  puVar1[1] = uVar4;
  *puVar1 = uVar3;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104690170; end: 10469018f; -[SCAdStickerPosition hash] */

void FUN_104690170(void)

{
  FUN_104690190();
  return;
}



/* Entry: 104690190; end: 1046902c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104690190(void)

{
  double *pdVar1;
  long unaff_x20;
  double dVar2;
  double dVar3;
  undefined1 auStack_88 [72];
  
  __ss6HasherVABycfC(auStack_88);
  pdVar1 = (double *)(unaff_x20 + _DAT_11308c4c8);
  dVar2 = *pdVar1;
  dVar3 = 0.0;
  if (dVar2 != 0.0) {
    dVar3 = dVar2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar2 = pdVar1[1];
  dVar3 = 0.0;
  if (dVar2 != 0.0) {
    dVar3 = dVar2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  pdVar1 = (double *)(unaff_x20 + _DAT_11308c4d0);
  dVar2 = *pdVar1;
  dVar3 = 0.0;
  if (dVar2 != 0.0) {
    dVar3 = dVar2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar2 = pdVar1[1];
  dVar3 = 0.0;
  if (dVar2 != 0.0) {
    dVar3 = dVar2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  pdVar1 = (double *)(unaff_x20 + _DAT_11308c4d8);
  dVar2 = *pdVar1;
  dVar3 = 0.0;
  if (dVar2 != 0.0) {
    dVar3 = dVar2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar2 = pdVar1[1];
  dVar3 = 0.0;
  if (dVar2 != 0.0) {
    dVar3 = dVar2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  pdVar1 = (double *)(unaff_x20 + _DAT_11308c4e0);
  dVar2 = *pdVar1;
  dVar3 = 0.0;
  if (dVar2 != 0.0) {
    dVar3 = dVar2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar2 = pdVar1[1];
  dVar3 = 0.0;
  if (dVar2 != 0.0) {
    dVar3 = dVar2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1046902c8; end: 1046903fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1046902c8(undefined8 param_1)

{
  undefined1 auVar1 [16];
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long unaff_x20;
  double dVar11;
  double dVar12;
  double dVar13;
  long lVar14;
  double dVar15;
  double dVar16;
  long lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  long lStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar9 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_70);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(auStack_70);
  }
  else {
    plVar10 = &lStack_78;
    _swift_dynamicCast(plVar10,auStack_70,PTR___sypN_11034f1a8 + 8,lVar9,6);
    if (((ulong)plVar10 & 1) != 0) {
      dVar15 = ((double *)(unaff_x20 + _DAT_11308c4c8))[1];
      dVar11 = *(double *)(unaff_x20 + _DAT_11308c4c8);
      dVar6 = ((double *)(lStack_78 + _DAT_11308c4c8))[1];
      dVar3 = *(double *)(lStack_78 + _DAT_11308c4c8);
      dVar16 = ((double *)(unaff_x20 + _DAT_11308c4d0))[1];
      dVar12 = *(double *)(unaff_x20 + _DAT_11308c4d0);
      dVar7 = ((double *)(lStack_78 + _DAT_11308c4d0))[1];
      dVar4 = *(double *)(lStack_78 + _DAT_11308c4d0);
      dVar5 = *(double *)(unaff_x20 + _DAT_11308c4d8);
      dVar13 = ((double *)(unaff_x20 + _DAT_11308c4d8))[1];
      dVar18 = *(double *)(lStack_78 + _DAT_11308c4d8);
      dVar19 = ((double *)(lStack_78 + _DAT_11308c4d8))[1];
      dVar22 = *(double *)(unaff_x20 + _DAT_11308c4e0);
      dVar20 = ((double *)(unaff_x20 + _DAT_11308c4e0))[1];
      dVar23 = *(double *)(lStack_78 + _DAT_11308c4e0);
      dVar21 = ((double *)(lStack_78 + _DAT_11308c4e0))[1];
      _objc_release();
      if (dVar22 == dVar23) {
        lVar9 = -(ulong)(dVar12 == dVar4);
        lVar8 = -(ulong)(dVar16 == dVar7);
        lVar14 = -(ulong)(dVar11 == dVar3);
        lVar17 = -(ulong)(dVar15 == dVar6);
        auVar1[1] = ~(byte)((ulong)lVar14 >> 8);
        auVar1[0] = ~(byte)lVar14;
        auVar1[2] = ~(byte)((ulong)lVar14 >> 0x10);
        auVar1[3] = ~(byte)((ulong)lVar14 >> 0x18);
        auVar1[4] = ~(byte)lVar17;
        auVar1[5] = ~(byte)((ulong)lVar17 >> 8);
        auVar1[6] = ~(byte)((ulong)lVar17 >> 0x10);
        auVar1[7] = ~(byte)((ulong)lVar17 >> 0x18);
        auVar1[8] = ~(byte)lVar9;
        auVar1[9] = ~(byte)((ulong)lVar9 >> 8);
        auVar1[10] = ~(byte)((ulong)lVar9 >> 0x10);
        auVar1[0xb] = ~(byte)((ulong)lVar9 >> 0x18);
        auVar1[0xc] = ~(byte)lVar8;
        auVar1[0xd] = ~(byte)((ulong)lVar8 >> 8);
        auVar1[0xe] = ~(byte)((ulong)lVar8 >> 0x10);
        auVar1[0xf] = ~(byte)((ulong)lVar8 >> 0x18);
        uVar2 = NEON_umaxv(auVar1,4);
        if ((uVar2 & 1) == 0) {
          return dVar20 == dVar21 && (dVar13 == dVar19 && dVar5 == dVar18);
        }
      }
    }
  }
  return false;
}



/* Entry: 1046903fc; end: 10469047b; -[SCAdStickerPosition isEqual:] */

uint FUN_1046903fc(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1046902c8(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10469047c; end: 10469047f; -[SCAdStickerPosition copyWithZone:] */

void FUN_10469047c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104690480; end: 10469049b; -[SCAdStickerPosition description] */

void FUN_104690480(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10469049c; end: 104690537; -[SCAdStickerPosition init] */

void FUN_10469049c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdStickerPositionWrapper.swift",0x37,2,0x4a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046904e4);
  (*pcVar1)();
}



/* Entry: 104690538; end: 104690547; -[SCAdStickersEvent common] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104690538(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308c510));
  return;
}



/* Entry: 104690548; end: 104690557; -[SCAdStickersEvent type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104690548(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308c518));
  return;
}



/* Entry: 104690558; end: 1046905bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104690558(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308c510) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308c518) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1046905bc; end: 104690633; -[SCAdStickersEvent initWithCommon:type:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046905bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308c510) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308c518) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 104690634; end: 10469070f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104690634(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_1d0 [8];
  undefined1 auStack_1c0 [224];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_allocWithZone();
  uStack_78 = param_1[0xd];
  uStack_80 = param_1[0xc];
  uStack_68 = param_1[0xf];
  uStack_70 = param_1[0xe];
  uStack_58 = param_1[0x11];
  uStack_60 = param_1[0x10];
  uStack_48 = param_1[0x13];
  uStack_50 = param_1[0x12];
  uStack_b8 = param_1[5];
  uStack_c0 = param_1[4];
  uStack_a8 = param_1[7];
  uStack_b0 = param_1[6];
  uStack_98 = param_1[9];
  uStack_a0 = param_1[8];
  uStack_88 = param_1[0xb];
  uStack_90 = param_1[10];
  uStack_d8 = param_1[1];
  uStack_e0 = *param_1;
  uStack_c8 = param_1[3];
  uStack_d0 = param_1[2];
  FUN_10469d938(0);
  _objc_allocWithZone();
  func_0x000104690ad4(param_1,auStack_1c0);
  puVar1 = &uStack_e0;
  FUN_10469d28c();
  *(undefined8 **)(unaff_x20 + _DAT_11308c510) = puVar1;
  FUN_10466a500(param_1 + 0x14,auStack_1c0);
  puVar2 = auStack_1c0;
  FUN_104690f3c();
  func_0x00010466e40c(param_1);
  *(undefined1 **)(unaff_x20 + _DAT_11308c518) = puVar2;
  _objc_msgSendSuper2(auStack_1d0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104690710; end: 1046907ff; -[SCAdStickersEvent hash] */

undefined8 FUN_104690710(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000104690744();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104690800; end: 10469090f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104690800(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 unaff_x20;
  undefined8 uVar6;
  long lStack_58;
  undefined8 auStack_50 [3];
  long lStack_38;
  
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar1 = &lStack_58;
    _swift_dynamicCast(plVar1,auStack_50,PTR___sypN_11034f1a8 + 8,unaff_x20,6);
    if (((ulong)plVar1 & 1) != 0) {
      uVar6 = *(undefined8 *)(lStack_58 + _DAT_11308c510);
      uVar2 = 0;
      FUN_10469d938();
      auStack_50[0] = uVar6;
      lStack_38 = uVar2;
      _objc_retain(uVar6);
      puVar3 = auStack_50;
      FUN_10469c8c4(puVar3);
      func_0x00010006e7f4(auStack_50);
      uVar6 = *(undefined8 *)(lStack_58 + _DAT_11308c518);
      uVar2 = 0;
      func_0x0001046910bc();
      auStack_50[0] = uVar6;
      lStack_38 = uVar2;
      _objc_retain(uVar6);
      puVar4 = auStack_50;
      FUN_104690b30(puVar4);
      _objc_release(lStack_58);
      func_0x00010006e7f4(auStack_50);
      uVar5 = (uint)puVar3 & (uint)puVar4;
      goto LAB_1046908f8;
    }
  }
  uVar5 = 0;
LAB_1046908f8:
  return uVar5 & 1;
}



/* Entry: 104690910; end: 10469098f; -[SCAdStickersEvent isEqual:] */

uint FUN_104690910(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104690800(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104690990; end: 104690993; -[SCAdStickersEvent copyWithZone:] */

void FUN_104690990(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104690994; end: 104690a1f; -[SCAdStickersEvent description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104690994(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_150 [160];
  undefined1 auStack_b0 [64];
  undefined1 auStack_70 [64];
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308c510);
  _objc_retain();
  _objc_retain(uVar1);
  FUN_10469d68c(auStack_150);
  FUN_10469103c(auStack_70,*(undefined8 *)(param_1 + _DAT_11308c518));
  _objc_release(param_1);
  FUN_10466a500(auStack_70,auStack_b0);
  func_0x00010466e40c(auStack_150);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104690a20; end: 104690a9b; -[SCAdStickersEvent init] */

void FUN_104690a20(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdStickersEventWrapper.swift",0x35,2,0x3b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104690a68);
  (*pcVar1)();
}



/* Entry: 104690a9c; end: 104690b0f; -[SCAdStickersEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104690a9c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308c510));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308c518));
  return;
}



/* Entry: 104690b10; end: 104690b2f;  */

void FUN_104690b10(void)

{
  _objc_opt_self(&PTR_PTR_1129d0cb0);
  return;
}



/* Entry: 104690b30; end: 104690c3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104690b30(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  uint uVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  long lStack_58;
  long alStack_50 [4];
  
  lVar4 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,alStack_50);
  if (alStack_50[3] == 0) {
    func_0x00010006e7f4(alStack_50);
  }
  else {
    plVar1 = &lStack_58;
    _swift_dynamicCast(plVar1,alStack_50,PTR___sypN_11034f1a8 + 8,lVar4,6);
    if (((ulong)plVar1 & 1) != 0) {
      if (*(long *)(unaff_x20 + _DAT_11308c548) != 0) {
        lVar4 = *(long *)(lStack_58 + _DAT_11308c548);
        if (lVar4 == 0) {
          uVar2 = 0;
          alStack_50[1] = 0;
          alStack_50[2] = 0;
        }
        else {
          uVar2 = 0;
          func_0x000104690518();
        }
        alStack_50[0] = lVar4;
        alStack_50[3] = uVar2;
        _objc_retain(lVar4);
        plVar1 = alStack_50;
        FUN_1046902c8(plVar1);
        uVar3 = (uint)plVar1;
        _objc_release(lStack_58);
        func_0x00010006e7f4(alStack_50);
        goto LAB_104690c20;
      }
      lVar5 = *(long *)(lStack_58 + _DAT_11308c548);
      lVar4 = lVar5;
      _objc_retain(lVar5);
      _objc_release(lStack_58);
      if (lVar5 == 0) {
        uVar3 = 1;
        goto LAB_104690c20;
      }
      _objc_release(lVar4);
    }
  }
  uVar3 = 0;
LAB_104690c20:
  return uVar3 & 1;
}



/* Entry: 104690c40; end: 104690cdf;  */

void FUN_104690c40(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104690ce0; end: 104690d03;  */

void FUN_104690ce0(undefined8 param_1,long *param_2)

{
  *(bool *)param_1 = *param_2 != 0;
  return;
}



/* Entry: 104690d04; end: 104690d2f; -[SCAdStickersEventType description] */

void FUN_104690d04(void)

{
  undefined1 auStack_50 [64];
  
  FUN_10469103c(auStack_50);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104690d30; end: 104690d77; -[SCAdStickersEventType init] */

void FUN_104690d30(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdStickersEventTypeWrapper.swift",0x39,2,0x26,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104690d78);
  (*pcVar1)();
}



/* Entry: 104690d78; end: 104690df7; -[SCAdStickersEventType hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104690d78(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  uVar1 = 0;
  __ss6HasherV8_combineyySuF(0);
  if (*(long *)(param_1 + _DAT_11308c548) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_104690190();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104690df8; end: 104690e77; -[SCAdStickersEventType isEqual:] */

uint FUN_104690df8(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104690b30(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104690e78; end: 104690e7b; -[SCAdStickersEventType copyWithZone:] */

void FUN_104690e78(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104690e7c; end: 104690ed7; +[SCAdStickersEventType stickerPositionWithPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104690e7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined8 *)(lVar2 + _DAT_11308c548) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104690ed8; end: 104690ef7; -[SCAdStickersEventType matchStickerPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104690ed8(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  
  if (*(long *)(param_1 + _DAT_11308c548) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104690ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104690ef8);
  (*pcVar1)();
}



/* Entry: 104690ef8; end: 104690f2b;  */

void FUN_104690ef8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104690f2c; end: 104690f3b; -[SCAdStickersEventType .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104690f2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308c548));
  return;
}



/* Entry: 104690f3c; end: 10469103b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104690f3c(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plStack_d0;
  long *plStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  FUN_10466a500(param_1,&uStack_b0);
  lVar2 = 0;
  func_0x000104690518();
  lVar3 = lVar2;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(lVar3 + _DAT_11308c4c8);
  *puVar1 = uStack_b0;
  puVar1[1] = uStack_a8;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11308c4d0);
  *puVar1 = uStack_a0;
  puVar1[1] = uStack_98;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11308c4d8);
  *puVar1 = uStack_90;
  puVar1[1] = uStack_88;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11308c4e0);
  *puVar1 = uStack_80;
  puVar1[1] = uStack_78;
  plVar4 = &lStack_c0;
  lStack_c0 = lVar3;
  lStack_b8 = lVar2;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  plVar5 = plVar4;
  func_0x0001046910bc();
  plVar6 = plVar5;
  _objc_allocWithZone();
  *(long **)((long)plVar6 + _DAT_11308c548) = plVar4;
  plStack_d0 = plVar6;
  plStack_c8 = plVar5;
  _objc_msgSendSuper2(&plStack_d0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10469103c; end: 1046910db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469103c(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  lVar2 = *(long *)(param_2 + _DAT_11308c548);
  if (lVar2 != 0) {
    uStack_48 = ((undefined8 *)(lVar2 + _DAT_11308c4c8))[1];
    uStack_50 = *(undefined8 *)(lVar2 + _DAT_11308c4c8);
    uStack_38 = ((undefined8 *)(lVar2 + _DAT_11308c4d0))[1];
    uStack_40 = *(undefined8 *)(lVar2 + _DAT_11308c4d0);
    uStack_28 = ((undefined8 *)(lVar2 + _DAT_11308c4d8))[1];
    uStack_30 = *(undefined8 *)(lVar2 + _DAT_11308c4d8);
    uStack_18 = ((undefined8 *)(lVar2 + _DAT_11308c4e0))[1];
    uStack_20 = *(undefined8 *)(lVar2 + _DAT_11308c4e0);
    FUN_10466a500(&uStack_50,param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046910bc);
  (*pcVar1)();
}



/* Entry: 1046910dc; end: 1046911cb;  */

uint FUN_1046910dc(uint *param_1,int param_2)

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



/* Entry: 1046911cc; end: 10469120b;  */

void FUN_1046911cc(void)

{
  undefined *puVar1;
  
  if (puRam000000011308c580 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd25f4c;
  _swift_getWitnessTable(&UNK_10dd25f4c,&UNK_110796388);
  puRam000000011308c580 = puVar1;
  return;
}



/* Entry: 10469120c; end: 10469121b; -[SCAdStickersEventV2 common] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469120c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308c588));
  return;
}



/* Entry: 10469121c; end: 10469122f; -[SCAdStickersEventV2 event] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469121c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308c590));
  return;
}



/* Entry: 104691230; end: 10469130b; -[SCAdStickersEventV2 initWithCommon:event:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104691230(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308c588) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308c590) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 10469130c; end: 10469138f; -[SCAdStickersEventV2 hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10469130c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308c588);
  _objc_retain();
  func_0x00010bfde980(uVar1);
  __ss6HasherV8_combineyySuF();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308c590);
  func_0x00010bfde980(uVar1);
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104691390; end: 104691467;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104691390(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar1 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar2 = &lStack_58;
    _swift_dynamicCast(plVar2,auStack_50,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if (((ulong)plVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308c588);
      func_0x00010c071ae0(uVar3);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11308c590);
      uVar4 = *(undefined8 *)(lStack_58 + _DAT_11308c590);
      _objc_retain(uVar4);
      func_0x00010c071ae0(uVar5);
      _objc_release(uVar4);
      _objc_release(lStack_58);
      return (uint)uVar3 & (uint)uVar5;
    }
  }
  return 0;
}



/* Entry: 104691468; end: 1046914e7; -[SCAdStickersEventV2 isEqual:] */

uint FUN_104691468(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104691390(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1046914e8; end: 1046914eb; -[SCAdStickersEventV2 copyWithZone:] */

void FUN_1046914e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1046914ec; end: 104691507; -[SCAdStickersEventV2 description] */

void FUN_1046914ec(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104691508; end: 104691583; -[SCAdStickersEventV2 init] */

void FUN_104691508(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdStickersEventV2Wrapper.swift",0x37,2,0x3b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104691550);
  (*pcVar1)();
}



/* Entry: 104691584; end: 1046915bb; -[SCAdStickersEventV2 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104691584(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308c588));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308c590));
  return;
}



/* Entry: 1046915bc; end: 1046915db;  */

void FUN_1046915bc(void)

{
  _objc_opt_self(&PTR_PTR_1129d0e48);
  return;
}



/* Entry: 1046915dc; end: 1046915df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046915dc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308c588) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308c590) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1046915e0; end: 1046915ef; -[SCAdSubscribeEvent common] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046915e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308c5c0));
  return;
}



/* Entry: 1046915f0; end: 1046915ff; -[SCAdSubscribeEvent type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046915f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308c5c8));
  return;
}



/* Entry: 104691600; end: 104691663;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104691600(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308c5c0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308c5c8) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104691664; end: 1046916db; -[SCAdSubscribeEvent initWithCommon:type:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104691664(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308c5c0) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308c5c8) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 1046916dc; end: 10469170b;  */

void FUN_1046916dc(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10469170c(param_1);
  return;
}



/* Entry: 10469170c; end: 10469181b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469170c(undefined8 *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long alStack_1b8 [2];
  long alStack_198 [2];
  undefined1 auStack_188 [168];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _swift_getObjectType();
  uStack_78 = param_1[0xd];
  uStack_80 = param_1[0xc];
  uStack_68 = param_1[0xf];
  uStack_70 = param_1[0xe];
  uStack_58 = param_1[0x11];
  uStack_60 = param_1[0x10];
  uStack_48 = param_1[0x13];
  uStack_50 = param_1[0x12];
  uStack_b8 = param_1[5];
  uStack_c0 = param_1[4];
  uStack_a8 = param_1[7];
  uStack_b0 = param_1[6];
  uStack_98 = param_1[9];
  uStack_a0 = param_1[8];
  uStack_88 = param_1[0xb];
  uStack_90 = param_1[10];
  uStack_d8 = param_1[1];
  uStack_e0 = *param_1;
  uStack_c8 = param_1[3];
  uStack_d0 = param_1[2];
  FUN_10469d938(0);
  _objc_allocWithZone();
  func_0x000104691bc8(param_1,auStack_188);
  puVar2 = &uStack_e0;
  FUN_10469d28c();
  *(undefined8 **)(unaff_x20 + _DAT_11308c5c0) = puVar2;
  cVar1 = *(char *)(param_1 + 0x14);
  lVar3 = 0;
  func_0x000104692364();
  lVar4 = lVar3;
  _objc_allocWithZone();
  plVar5 = alStack_198;
  if (cVar1 != '\x01') {
    plVar5 = alStack_1b8;
  }
  *(bool *)(lVar4 + _DAT_11308c630) = cVar1 == '\x01';
  *plVar5 = lVar4;
  plVar5[1] = lVar3;
  _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  func_0x00010466e4f0(param_1);
  *(long **)(unaff_x20 + _DAT_11308c5c8) = plVar5;
  _objc_msgSendSuper2(&stack0xfffffffffffffe58,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10469181c; end: 1046918d3; -[SCAdSubscribeEvent hash] */

undefined8 FUN_10469181c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000104691850();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1046918d4; end: 1046919e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1046918d4(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 unaff_x20;
  undefined8 uVar6;
  long lStack_58;
  undefined8 auStack_50 [3];
  long lStack_38;
  
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar1 = &lStack_58;
    _swift_dynamicCast(plVar1,auStack_50,PTR___sypN_11034f1a8 + 8,unaff_x20,6);
    if (((ulong)plVar1 & 1) != 0) {
      uVar6 = *(undefined8 *)(lStack_58 + _DAT_11308c5c0);
      uVar2 = 0;
      FUN_10469d938();
      auStack_50[0] = uVar6;
      lStack_38 = uVar2;
      _objc_retain(uVar6);
      puVar3 = auStack_50;
      FUN_10469c8c4(puVar3);
      func_0x00010006e7f4(auStack_50);
      uVar6 = *(undefined8 *)(lStack_58 + _DAT_11308c5c8);
      uVar2 = 0;
      func_0x000104692364();
      auStack_50[0] = uVar6;
      lStack_38 = uVar2;
      _objc_retain(uVar6);
      puVar4 = auStack_50;
      FUN_104691ff8(puVar4);
      _objc_release(lStack_58);
      func_0x00010006e7f4(auStack_50);
      uVar5 = (uint)puVar3 & (uint)puVar4;
      goto LAB_1046919cc;
    }
  }
  uVar5 = 0;
LAB_1046919cc:
  return uVar5 & 1;
}



/* Entry: 1046919e4; end: 104691a63; -[SCAdSubscribeEvent isEqual:] */

uint FUN_1046919e4(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1046918d4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104691a64; end: 104691a67; -[SCAdSubscribeEvent copyWithZone:] */

void FUN_104691a64(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104691a68; end: 104691aaf; -[SCAdSubscribeEvent description] */

void FUN_104691a68(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  FUN_104691ab0();
  _objc_release(param_1);
  uVar1 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
  _swift_bridgeObjectRelease(0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104691ab0; end: 104691b13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104691ab0(void)

{
  long unaff_x20;
  undefined1 auStack_b8 [160];
  undefined1 uStack_18;
  
  _objc_retain(*(undefined8 *)(unaff_x20 + _DAT_11308c5c0));
  FUN_10469d68c(auStack_b8);
  uStack_18 = *(char *)(*(long *)(unaff_x20 + _DAT_11308c5c8) + _DAT_11308c630) == '\x01';
  func_0x00010466e4f0(auStack_b8);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 104691b14; end: 104691b8f; -[SCAdSubscribeEvent init] */

void FUN_104691b14(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdSubscribeEventWrapper.swift",0x36,2,0x3b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104691b5c);
  (*pcVar1)();
}



/* Entry: 104691b90; end: 104691c03; -[SCAdSubscribeEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104691b90(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308c5c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308c5c8));
  return;
}



/* Entry: 104691c04; end: 104691c23;  */

void FUN_104691c04(void)

{
  _objc_opt_self(&PTR_PTR_1129d0f18);
  return;
}



/* Entry: 104691c24; end: 104691c33; -[SCAdSubscribeEventV2 common] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104691c24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308c5f8));
  return;
}



/* Entry: 104691c34; end: 104691c47; -[SCAdSubscribeEventV2 event] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104691c34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308c600));
  return;
}



/* Entry: 104691c48; end: 104691d23; -[SCAdSubscribeEventV2 initWithCommon:event:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104691c48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308c5f8) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308c600) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 104691d24; end: 104691da7; -[SCAdSubscribeEventV2 hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104691d24(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308c5f8);
  _objc_retain();
  func_0x00010bfde980(uVar1);
  __ss6HasherV8_combineyySuF();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308c600);
  func_0x00010bfde980(uVar1);
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104691da8; end: 104691e7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104691da8(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar1 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar2 = &lStack_58;
    _swift_dynamicCast(plVar2,auStack_50,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if (((ulong)plVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308c5f8);
      func_0x00010c071ae0(uVar3);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11308c600);
      uVar4 = *(undefined8 *)(lStack_58 + _DAT_11308c600);
      _objc_retain(uVar4);
      func_0x00010c071ae0(uVar5);
      _objc_release(uVar4);
      _objc_release(lStack_58);
      return (uint)uVar3 & (uint)uVar5;
    }
  }
  return 0;
}



/* Entry: 104691e80; end: 104691eff; -[SCAdSubscribeEventV2 isEqual:] */

uint FUN_104691e80(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104691da8(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104691f00; end: 104691f03; -[SCAdSubscribeEventV2 copyWithZone:] */

void FUN_104691f00(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104691f04; end: 104691f1f; -[SCAdSubscribeEventV2 description] */

void FUN_104691f04(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104691f20; end: 104691f9b; -[SCAdSubscribeEventV2 init] */

void FUN_104691f20(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdSubscribeEventV2Wrapper.swift",0x38,2,0x3b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104691f68);
  (*pcVar1)();
}



/* Entry: 104691f9c; end: 104691fd3; -[SCAdSubscribeEventV2 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104691f9c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308c5f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308c600));
  return;
}



/* Entry: 104691fd4; end: 104691ff3;  */

void FUN_104691fd4(void)

{
  _objc_opt_self(&PTR_PTR_1129d0fe8);
  return;
}



/* Entry: 104691ff4; end: 104691ff7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104691ff4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308c5f8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308c600) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104691ff8; end: 104692097;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104691ff8(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar4 = &lStack_58;
    _swift_dynamicCast(plVar4,auStack_50,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      cVar1 = *(char *)(unaff_x20 + _DAT_11308c630);
      cVar2 = *(char *)(lStack_58 + _DAT_11308c630);
      _objc_release();
      return cVar1 == cVar2;
    }
  }
  return false;
}



/* Entry: 104692098; end: 104692143;  */

void FUN_104692098(void)

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



/* Entry: 104692144; end: 104692183;  */

void FUN_104692144(undefined1 *param_1,long *param_2)

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



/* Entry: 104692184; end: 10469219f; -[SCAdSubscribeType description] */

void FUN_104692184(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1046921a0; end: 1046921e7; -[SCAdSubscribeType init] */

void FUN_1046921a0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdSubscribeTypeWrapper.swift",0x35,2,0x29,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046921e8);
  (*pcVar1)();
}



/* Entry: 1046921e8; end: 10469222f; -[SCAdSubscribeType hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046921e8(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_11308c630));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104692230; end: 1046922af; -[SCAdSubscribeType isEqual:] */

uint FUN_104692230(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104691ff8(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1046922b0; end: 1046922b3; -[SCAdSubscribeType copyWithZone:] */

void FUN_1046922b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1046922b4; end: 1046922bb; +[SCAdSubscribeType subscribe] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046922b4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11308c630) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1046922bc; end: 1046922c3; +[SCAdSubscribeType unsubscribe] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046922bc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11308c630) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


