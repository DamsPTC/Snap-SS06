/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103e49738; end: 103e4973b; -[SCUrlPreviewPdfContent copyWithZone:] */

void FUN_103e49738(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103e4973c; end: 103e49833;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e4973c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11301b0e8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_11301b0e8))[1]);
  uVar1 = 0x4c5255;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c5255,0xe300000000000000);
  func_0x000107c42744(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = 0x5f4d554e5f464450;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f4d554e5f464450,0xed00005345474150);
  func_0x000107c42744(param_1);
  _objc_release(uVar2);
  uVar2 = 0x455a49535f464450;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x455a49535f464450,0xe800000000000000);
  func_0x000107c42744(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 103e49834; end: 103e49883; -[SCUrlPreviewPdfContent encodeWithCoder:] */

void FUN_103e49834(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_103e4973c(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103e49884; end: 103e498b3;  */

void FUN_103e49884(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_103e498b4(param_1);
  return;
}



/* Entry: 103e498b4; end: 103e49b7b;  */

undefined8 FUN_103e498b4(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 unaff_x20;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  int iVar3;
  
  uVar6 = 0;
  iVar2 = (int)&uStack_a0;
  iVar3 = (int)&uStack_a0;
  uVar4 = 0x4c5255;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c5255,0xe300000000000000);
  lVar5 = param_1;
  func_0x000107c41478();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (lVar5 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar5);
    _swift_unknownObjectRelease(lVar5);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_70);
  }
  else {
    _swift_dynamicCast(&uStack_a0,&uStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uVar4 = uStack_a0;
    if ((uVar6 & 1) != 0) {
      uVar7 = 0x5f4d554e5f464450;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f4d554e5f464450,0xed00005345474150);
      lVar5 = param_1;
      func_0x000107c41478();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      if (lVar5 == 0) {
        uStack_88 = 0;
        uStack_90 = 0;
        lStack_78 = 0;
        uStack_80 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar5);
        _swift_unknownObjectRelease(lVar5);
      }
      uStack_68 = uStack_88;
      uStack_70 = uStack_90;
      lStack_58 = lStack_78;
      uStack_60 = uStack_80;
      if (lStack_78 == 0) {
        func_0x00010006e7f4(&uStack_70);
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        func_0x0001002ed07c(0);
        _swift_dynamicCast(&uStack_a0,&uStack_70,puVar1 + 8,uVar7,6);
        uVar7 = uStack_a0;
        if (iVar2 == 0) {
          uVar7 = 0;
        }
      }
      uVar8 = 0x455a49535f464450;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x455a49535f464450,0xe800000000000000);
      lVar5 = param_1;
      func_0x000107c41478();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      if (lVar5 == 0) {
        uStack_88 = 0;
        uStack_90 = 0;
        lStack_78 = 0;
        uStack_80 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar5);
        _swift_unknownObjectRelease(lVar5);
      }
      uStack_68 = uStack_88;
      uStack_70 = uStack_90;
      lStack_58 = lStack_78;
      uStack_60 = uStack_80;
      if (lStack_78 == 0) {
        func_0x00010006e7f4(&uStack_70);
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        func_0x0001002ed07c(0);
        _swift_dynamicCast(&uStack_a0,&uStack_70,puVar1 + 8,uVar8,6);
        uVar8 = uStack_a0;
        if (iVar3 == 0) {
          uVar8 = 0;
        }
      }
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4,uStack_98);
      _swift_bridgeObjectRelease(uStack_98);
      func_0x000107c49158();
      _objc_release(uVar4);
      _objc_release(param_1);
      _objc_release(uVar7);
      _objc_release(uVar8);
      return unaff_x20;
    }
    _objc_release(param_1);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 103e49b7c; end: 103e49ba3; -[SCUrlPreviewPdfContent initWithCoder:] */

void FUN_103e49b7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_103e498b4();
  return;
}



/* Entry: 103e49ba4; end: 103e49bef; -[SCUrlPreviewPdfContent description] */

void FUN_103e49ba4(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  
  _objc_retain();
  FUN_103e49cb8(auStack_48);
  _objc_release(param_1);
  FUN_103e49374(auStack_48);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e49bf0; end: 103e49c6b; -[SCUrlPreviewPdfContent init] */

void FUN_103e49bf0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "UrlPreviewServices/UrlPreviewPdfContentWrapper.swift",0x34,2,0x54,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e49c38);
  (*pcVar1)();
}



/* Entry: 103e49c6c; end: 103e49cb7; -[SCUrlPreviewPdfContent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e49c6c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11301b0e8 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11301b0f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11301b0f8));
  return;
}



/* Entry: 103e49cb8; end: 103e49d63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e49cb8(undefined8 *param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  uVar3 = *(undefined8 *)(param_2 + _DAT_11301b0e8);
  uVar4 = ((undefined8 *)(param_2 + _DAT_11301b0e8))[1];
  lVar6 = *(long *)(param_2 + _DAT_11301b0f0);
  bVar1 = lVar6 == 0;
  if (bVar1) {
    _swift_bridgeObjectRetain(uVar4);
  }
  else {
    _swift_bridgeObjectRetain(uVar4);
    func_0x000107c5d384();
  }
  lVar5 = *(long *)(param_2 + _DAT_11301b0f8);
  bVar2 = lVar5 == 0;
  if (!bVar2) {
    func_0x000107c5d38c();
  }
  *param_1 = uVar3;
  param_1[1] = uVar4;
  *(int *)(param_1 + 2) = (int)lVar6;
  *(bool *)((long)param_1 + 0x14) = bVar1;
  param_1[3] = lVar5;
  *(bool *)(param_1 + 4) = bVar2;
  return;
}



/* Entry: 103e49d64; end: 103e49d83;  */

void FUN_103e49d64(void)

{
  _objc_opt_self(&PTR_PTR_112956588);
  return;
}



/* Entry: 103e49d84; end: 103e49ff3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e49d84(void)

{
  ulong uVar1;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar1 = (ulong)*(byte *)(unaff_x20 + _DAT_11301b128);
  __ss6HasherV8_combineyySuF(uVar1);
  if (*(long *)(unaff_x20 + _DAT_11301b130) == 0) {
    uVar1 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_103e48404();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  if (*(long *)(unaff_x20 + _DAT_11301b138) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_103e493dc();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 103e49ff4; end: 103e4a09f;  */

void FUN_103e49ff4(void)

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



/* Entry: 103e4a0a0; end: 103e4a0df;  */

void FUN_103e4a0a0(undefined1 *param_1,long *param_2)

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



/* Entry: 103e4a0e0; end: 103e4a12b; -[SCUrlPreviewRichContent description] */

void FUN_103e4a0e0(undefined8 param_1)

{
  undefined1 auStack_60 [64];
  
  _objc_retain();
  func_0x000103e4a540(auStack_60);
  _objc_release(param_1);
  FUN_103e444cc(auStack_60);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e4a12c; end: 103e4a173; -[SCUrlPreviewRichContent init] */

void FUN_103e4a12c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "UrlPreviewServices/UrlPreviewRichContentWrapper.swift",0x35,2,0x2d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e4a174);
  (*pcVar1)();
}



/* Entry: 103e4a174; end: 103e4a1a7; -[SCUrlPreviewRichContent hash] */

undefined8 FUN_103e4a174(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103e49d84();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 103e4a1a8; end: 103e4a237; -[SCUrlPreviewRichContent isEqual:] */

uint FUN_103e4a1a8(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x000103e49e54(&uStack_40);
  _objc_release(param_1);
  FUN_103e4a634(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 103e4a238; end: 103e4a23b; -[SCUrlPreviewRichContent copyWithZone:] */

void FUN_103e4a238(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103e4a23c; end: 103e4a2af; +[SCUrlPreviewRichContent htmlContentWithHtml:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e4a23c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11301b128) = 0;
  *(undefined8 *)(lVar2 + _DAT_11301b130) = param_3;
  *(undefined8 *)(lVar2 + _DAT_11301b138) = 0;
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



/* Entry: 103e4a2b0; end: 103e4a327; +[SCUrlPreviewRichContent pdfContentWithPdf:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e4a2b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11301b128) = 1;
  *(undefined8 *)(lVar2 + _DAT_11301b130) = 0;
  *(undefined8 *)(lVar2 + _DAT_11301b138) = param_3;
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



/* Entry: 103e4a328; end: 103e4a373; -[SCUrlPreviewRichContent matchHtmlContent:pdfContent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e4a328(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_11301b128) == '\x01') {
    param_3 = param_4;
    if (*(long *)(param_1 + _DAT_11301b138) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103e4a354);
      (*pcVar1)();
    }
  }
  else if (*(long *)(param_1 + _DAT_11301b130) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103e4a374);
    (*pcVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x000103e4a36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 103e4a374; end: 103e4a3a7;  */

void FUN_103e4a374(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e4a3a8; end: 103e4a3df; -[SCUrlPreviewRichContent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e4a3a8(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11301b130));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11301b138));
  return;
}



/* Entry: 103e4a3e0; end: 103e4a633;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_103e4a3e0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 auStack_b0 [2];
  undefined8 auStack_a0 [2];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar7 = auStack_b0;
  uStack_90 = *param_1;
  uVar1 = param_1[1];
  uStack_78 = param_1[3];
  lVar2 = param_1[5];
  uStack_88 = uVar1;
  if (lVar2 < 0) {
    uStack_80._0_5_ = (undefined5)param_1[2];
    uStack_70 = CONCAT71(uStack_70._1_7_,(char)param_1[4]);
    FUN_103e49d64(0);
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(uVar1);
    puVar4 = &uStack_90;
    FUN_103e4926c();
    puVar10 = (undefined8 *)0x0;
    puVar7 = auStack_a0;
    puVar9 = puVar4;
  }
  else {
    uVar8 = param_1[7];
    uStack_58 = param_1[7];
    uStack_60 = param_1[6];
    uStack_80 = param_1[2];
    uStack_70 = param_1[4];
    lStack_68 = lVar2;
    FUN_103e4908c(0);
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(uVar8);
    _swift_bridgeObjectRetain(uVar1);
    puVar4 = &uStack_90;
    FUN_103e482cc();
    puVar9 = (undefined8 *)0x0;
    puVar10 = puVar4;
  }
  puVar5 = puVar4;
  FUN_103e4a674();
  puVar6 = puVar5;
  _objc_allocWithZone();
  puVar3 = PTR_s_init_1125d9248;
  *(bool *)((long)puVar6 + _DAT_11301b128) = lVar2 < 0;
  *(undefined8 **)((long)puVar6 + _DAT_11301b130) = puVar10;
  *(undefined8 **)((long)puVar6 + _DAT_11301b138) = puVar9;
  *puVar7 = puVar6;
  puVar7[1] = puVar5;
  _objc_retain(puVar4);
  _objc_msgSendSuper2(puVar7,puVar3);
  FUN_103e444cc(param_1);
  _objc_release(puVar4);
  return puVar7;
}



/* Entry: 103e4a634; end: 103e4a673;  */

undefined8 FUN_103e4a634(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103e4a674; end: 103e4a693;  */

void FUN_103e4a674(void)

{
  _objc_opt_self(&PTR_PTR_112956668);
  return;
}



/* Entry: 103e4a694; end: 103e4a7fb;  */

int FUN_103e4a694(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103e4a710;
        goto LAB_103e4a6f4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103e4a6f4:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_103e4a710:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103e4a7fc; end: 103e4a83b;  */

void FUN_103e4a7fc(void)

{
  undefined *puVar1;
  
  if (puRam000000011301b168 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc9ebe0;
  _swift_getWitnessTable(&UNK_10dc9ebe0,&UNK_110718448);
  puRam000000011301b168 = puVar1;
  return;
}



/* Entry: 103e4a83c; end: 103e4a8c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e4a83c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  _objc_allocWithZone();
  lVar2 = unaff_x20;
  func_0x000100a5058c();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_11301b170) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_11301b178) = param_2;
    _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
    _objc_release(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e4a8c4);
  (*pcVar1)();
}



/* Entry: 103e4a8c4; end: 103e4a923; -[_TtC33CreateUserSessionScopeGraphBridge48CreateUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_103e4a8c4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("CreateUserSessionScopeGraphBridge.CreateUserSessionScopeGraphBridgeSaberEntryPoint",
             0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e4a8f0);
  (*pcVar1)();
}



/* Entry: 103e4a924; end: 103e4a95b; -[_TtC33CreateUserSessionScopeGraphBridge48CreateUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e4a924(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11301b170));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11301b178));
  return;
}



/* Entry: 103e4a95c; end: 103e4a983;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e4a95c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_11301b178),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_11301b170));
  return;
}



/* Entry: 103e4a984; end: 103e4aa1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e4a984(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_11301ce10);
  *(undefined8 *)(unaff_x20 + _DAT_11301b1a8) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_11301b1b0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 103e4aa20; end: 103e4aa7f; -[_TtC33CreateUserSessionScopeGraphBridge33CTPNetworkServicesSaberEntryPoint init] */

void FUN_103e4aa20(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("CreateUserSessionScopeGraphBridge.CTPNetworkServicesSaberEntryPoint",0x43,"init()",6,0
            );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e4aa4c);
  (*pcVar1)();
}



/* Entry: 103e4aa80; end: 103e4ab13; -[_TtC33CreateUserSessionScopeGraphBridge33CTPNetworkServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e4aa80(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11301b1a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11301b1b0));
  return;
}



/* Entry: 103e4ab14; end: 103e4ab1b;  */

undefined8 FUN_103e4ab14(void)

{
  return 0;
}



/* Entry: 103e4ab1c; end: 103e4abb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e4ab1c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_11301ce68);
  *(undefined8 *)(unaff_x20 + _DAT_11301b1e0) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_11301b1e8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 103e4abb8; end: 103e4ac17; -[_TtC33CreateUserSessionScopeGraphBridge44SCCaptionDataProviderServicesSaberEntryPoint init] */

void FUN_103e4abb8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("CreateUserSessionScopeGraphBridge.SCCaptionDataProviderServicesSaberEntryPoint",0x4e,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e4abe4);
  (*pcVar1)();
}



/* Entry: 103e4ac18; end: 103e4acab; -[_TtC33CreateUserSessionScopeGraphBridge44SCCaptionDataProviderServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e4ac18(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11301b1e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11301b1e8));
  return;
}



/* Entry: 103e4acac; end: 103e4acb3;  */

undefined8 FUN_103e4acac(void)

{
  return 0;
}



/* Entry: 103e4acb4; end: 103e4ad4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e4acb4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_11301cea8);
  *(undefined8 *)(unaff_x20 + _DAT_11301b218) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_11301b220) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 103e4ad50; end: 103e4adaf; -[_TtC33CreateUserSessionScopeGraphBridge29SCFontServicesSaberEntryPoint init] */

void FUN_103e4ad50(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("CreateUserSessionScopeGraphBridge.SCFontServicesSaberEntryPoint",0x3f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e4ad7c);
  (*pcVar1)();
}



/* Entry: 103e4adb0; end: 103e4ae43; -[_TtC33CreateUserSessionScopeGraphBridge29SCFontServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e4adb0(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11301b218));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11301b220));
  return;
}



/* Entry: 103e4ae44; end: 103e4ae4b;  */

undefined8 FUN_103e4ae44(void)

{
  return 0;
}



/* Entry: 103e4ae4c; end: 103e4aeaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e4ae4c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11301ce00);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e4aeb0; end: 103e4aeb7;  */

void FUN_103e4aeb0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e4aeb8; end: 103e4aedb;  */

void FUN_103e4aeb8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e4aedc; end: 103e4aefb;  */

void FUN_103e4aedc(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e4aefc; end: 103e4af5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e4aefc(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11301ce08);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e4af60; end: 103e4af67;  */

void FUN_103e4af60(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e4af68; end: 103e4b007;  */

void FUN_103e4af68(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e4b008; end: 103e4b027;  */

void FUN_103e4b008(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e4b028; end: 103e4b08b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e4b028(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11301ce18);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e4b08c; end: 103e4b093;  */

void FUN_103e4b08c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e4b094; end: 103e4b0b7;  */

void FUN_103e4b094(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e4b0b8; end: 103e4b0d7;  */

void FUN_103e4b0b8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e4b0d8; end: 103e4b13b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e4b0d8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11301ce20);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e4b13c; end: 103e4b143;  */

void FUN_103e4b13c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e4b144; end: 103e4b1e3;  */

void FUN_103e4b144(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e4b1e4; end: 103e4b203;  */

void FUN_103e4b1e4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e4b204; end: 103e4b267;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e4b204(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11301ce28);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e4b268; end: 103e4b26f;  */

void FUN_103e4b268(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e4b270; end: 103e4b293;  */

void FUN_103e4b270(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e4b294; end: 103e4b2b3;  */

void FUN_103e4b294(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e4b2b4; end: 103e4b317;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e4b2b4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11301ce30);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e4b318; end: 103e4b31f;  */

void FUN_103e4b318(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e4b320; end: 103e4b3bf;  */

void FUN_103e4b320(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e4b3c0; end: 103e4b3df;  */

void FUN_103e4b3c0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e4b3e0; end: 103e4b443;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e4b3e0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11301ce38);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e4b444; end: 103e4b44b;  */

void FUN_103e4b444(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e4b44c; end: 103e4b4eb;  */

void FUN_103e4b44c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e4b4ec; end: 103e4b50b;  */

void FUN_103e4b4ec(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e4b50c; end: 103e4b56f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e4b50c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11301ce40);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e4b570; end: 103e4b577;  */

void FUN_103e4b570(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e4b578; end: 103e4b617;  */

void FUN_103e4b578(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e4b618; end: 103e4b637;  */

void FUN_103e4b618(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e4b638; end: 103e4b69b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e4b638(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11301ce48);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e4b69c; end: 103e4b6a3;  */

void FUN_103e4b69c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e4b6a4; end: 103e4b743;  */

void FUN_103e4b6a4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e4b744; end: 103e4b763;  */

void FUN_103e4b744(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e4b764; end: 103e4b7c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e4b764(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11301ce50);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e4b7c8; end: 103e4b7cf;  */

void FUN_103e4b7c8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e4b7d0; end: 103e4b86f;  */

void FUN_103e4b7d0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e4b870; end: 103e4b88f;  */

void FUN_103e4b870(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e4b890; end: 103e4b8f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e4b890(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11301ce58);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e4b8f4; end: 103e4b8fb;  */

void FUN_103e4b8f4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e4b8fc; end: 103e4b99b;  */

void FUN_103e4b8fc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e4b99c; end: 103e4b9bb;  */

void FUN_103e4b99c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e4b9bc; end: 103e4ba1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e4b9bc(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11301ce60);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e4ba20; end: 103e4ba27;  */

void FUN_103e4ba20(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e4ba28; end: 103e4bac7;  */

void FUN_103e4ba28(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e4bac8; end: 103e4bae7;  */

void FUN_103e4bac8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e4bae8; end: 103e4bb4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e4bae8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11301ce70);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e4bb4c; end: 103e4bb53;  */

void FUN_103e4bb4c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e4bb54; end: 103e4bbf3;  */

void FUN_103e4bb54(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e4bbf4; end: 103e4bc13;  */

void FUN_103e4bbf4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e4bc14; end: 103e4bc77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e4bc14(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11301ce78);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e4bc78; end: 103e4bc7f;  */

void FUN_103e4bc78(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e4bc80; end: 103e4bca3;  */

void FUN_103e4bc80(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}


