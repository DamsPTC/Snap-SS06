/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102902a3c; end: 102902b5f;  */

long FUN_102902a3c(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102902b5c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102902b60);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112ecc748;
        func_0x0001000285a8(0x112ecc748,&UNK_10daf0bb8);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112ecc748;
      func_0x0001000285a8(0x112ecc748,&UNK_10daf0bb8);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102902b58);
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



/* Entry: 102902b60; end: 102902b73;  */

void FUN_102902b60(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ecc750 == (undefined *)0x0 || ((ulong)puRam0000000112ecc750 & 1) != 0) {
    puVar1 = &UNK_10e930406;
    func_0x000107c61518(&UNK_10e930406,0x2b,0,0);
    puRam0000000112ecc750 = puVar1;
  }
  return;
}



/* Entry: 102902b74; end: 102902d27;  */

ulong FUN_102902b74(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102902c5c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102902c60);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar4 = 0x112ea2c88;
    func_0x0001000285a8(0x112ea2c88,&UNK_10dab50b0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0x112ea2c88;
    func_0x0001000285a8(0x112ea2c88,&UNK_10dab50b0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd00000000000002e,0x800000010f0cb5b0);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102902d28);
  (*pcVar2)();
}



/* Entry: 102902d28; end: 102902d4f;  */

undefined1  [16] FUN_102902d28(void)

{
  return ZEXT816(0x11056a060);
}



/* Entry: 102902d50; end: 102902d8f;  */

void FUN_102902d50(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ecc770 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf0c40;
  func_0x000107c61520(&UNK_10daf0c40,&UNK_11056a130);
  puRam0000000112ecc770 = puVar1;
  return;
}



/* Entry: 102902d90; end: 102902e3b;  */

void FUN_102902d90(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102902e3c; end: 102902e73;  */

void FUN_102902e3c(ulong *param_1,ulong *param_2)

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



/* Entry: 102902e74; end: 102902e83; -[_TtC17AdPreviewServices17AdPreviewServices adCreativeFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102902e74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ecc778));
  return;
}



/* Entry: 102902e84; end: 102902ecf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102902e84(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ecc778) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102902ed0; end: 102902f27; -[_TtC17AdPreviewServices17AdPreviewServices initWithAdCreativeFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102902ed0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ecc778) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 102902f28; end: 102902f87; -[_TtC17AdPreviewServices17AdPreviewServices init] */

void FUN_102902f28(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPreviewServices.AdPreviewServices",0x23,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102902f54);
  (*pcVar1)();
}



/* Entry: 102902f88; end: 102902f97; -[_TtC17AdPreviewServices17AdPreviewServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102902f88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ecc778));
  return;
}



/* Entry: 102902f98; end: 102903173;  */

long FUN_102902f98(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102903174; end: 102903183; -[SCAdCreativePreview entityType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102903174(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ecc7a8);
}



/* Entry: 102903184; end: 1029031cf; -[SCAdCreativePreview entityId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102903184(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ecc7b0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112ecc7b0))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1029031d0; end: 1029031df; -[SCAdCreativePreview createdTimestampMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1029031d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ecc7b8);
}



/* Entry: 1029031e0; end: 1029031ef; -[SCAdCreativePreview isActionExpirable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1029031e0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ecc7c0);
}



/* Entry: 1029031f0; end: 1029031ff; -[SCAdCreativePreview ttlMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1029031f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ecc7c8);
}



/* Entry: 102903200; end: 1029032ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102903200(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ecc7a8) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ecc7b0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ecc7b8) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_112ecc7c0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ecc7c8) = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029032ac; end: 10290335f; -[SCAdCreativePreview initWithEntityType:entityId:createdTimestampMs:isActionExpirable:ttlMs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029032ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  *(undefined8 *)(param_1 + _DAT_112ecc7a8) = param_3;
  puVar1 = (undefined8 *)(param_1 + _DAT_112ecc7b0);
  *puVar1 = param_4;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_112ecc7b8) = param_5;
  *(undefined1 *)(param_1 + _DAT_112ecc7c0) = param_6;
  *(undefined8 *)(param_1 + _DAT_112ecc7c8) = param_7;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102903360; end: 1029033ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102903360(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ecc7a8) = *param_1;
  uVar2 = param_1[1];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ecc7b0);
  puVar1[1] = param_1[2];
  *puVar1 = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112ecc7b8) = param_1[3];
  *(undefined1 *)(unaff_x20 + _DAT_112ecc7c0) = *(undefined1 *)(param_1 + 4);
  *(undefined8 *)(unaff_x20 + _DAT_112ecc7c8) = param_1[5];
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029033f0; end: 1029033f3; -[SCAdCreativePreview copyWithZone:] */

void FUN_1029033f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1029033f4; end: 10290340f; -[SCAdCreativePreview description] */

void FUN_1029033f4(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102903410; end: 10290348b; -[SCAdCreativePreview init] */

void FUN_102903410(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "AdPreviewServices/AdCreativePreviewWrapper.swift",0x30,2,0x32,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102903458);
  (*pcVar1)();
}



/* Entry: 10290348c; end: 10290349f; -[SCAdCreativePreview .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10290348c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ecc7b0 + 8))
  ;
  return;
}



/* Entry: 1029034a0; end: 1029034bf;  */

void FUN_1029034a0(void)

{
  func_0x000107c61168(&PTR_PTR_11286f420);
  return;
}



/* Entry: 1029034c0; end: 102903523;  */

void FUN_1029034c0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10290390c();
  func_0x000107c613fc();
  FUN_102903560(uStack_38);
  *param_1 = param_2;
  param_1[1] = &PTR_DAT_11056a2d0;
  return;
}



/* Entry: 102903524; end: 10290355f;  */

undefined8 FUN_102903524(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_102903560(param_1);
  return unaff_x20;
}



/* Entry: 102903560; end: 10290377b;  */

void FUN_102903560(ulong param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  long unaff_x20;
  ulong uVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined1 *puStack_58;
  
  ppuVar5 = &puStack_80;
  ppuVar6 = &puStack_80;
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x20) = puVar2;
  uVar9 = param_1;
  func_0x000107c42e5c();
  func_0x000107c61180();
  uVar3 = uVar9;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  if (uVar3 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = uVar3;
    func_0x000107c3da50();
    func_0x000107c61180();
    uVar4 = uVar9;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    uVar9 = uVar4;
    func_0x000107c5bcc0();
    func_0x000107c61170(uVar4);
    if ((uVar9 | 2) == 3) {
      uVar8 = 1;
      goto LAB_102903624;
    }
  }
  uVar8 = 0;
LAB_102903624:
  *(undefined1 *)(unaff_x20 + 0x10) = uVar8;
  puStack_80 = (undefined *)CONCAT71(puStack_80._1_7_,uVar9 == 1);
  func_0x0001000285a8(0x112d61fd8,&UNK_10d927f90);
  func_0x000107c613fc();
  func_0x00010042e6a0();
  *(undefined ***)(unaff_x20 + 0x18) = ppuVar5;
  if (uVar3 != 0) {
    func_0x000107c6157c();
    uVar9 = uVar3;
    func_0x000107c3da50(uVar3);
    func_0x000107c61180();
    uVar4 = uVar9;
    func_0x000107c5d6fc();
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    pcStack_60 = FUN_102903804;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_10290377c;
    puStack_68 = &UNK_11056a2a8;
    puStack_58 = (undefined1 *)ppuVar5;
    func_0x000107c60bc4(&puStack_80);
    puVar1 = puStack_58;
    func_0x000107c6157c(ppuVar5);
    func_0x000107c61574(puVar1);
    uVar9 = uVar4;
    func_0x000107c5c320(uVar4);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(uVar4);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
    func_0x000107c61174(uVar7);
    func_0x000107c3e924(uVar9);
    func_0x000107c615e8(uVar3);
    func_0x000107c61574(ppuVar5);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar7);
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10290377c; end: 1029037c7;  */

void FUN_10290377c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1029037c8; end: 1029037f3;  */

void FUN_1029037c8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1029037f4; end: 102903803;  */

undefined1 FUN_1029037f4(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + 0x10);
}



/* Entry: 102903804; end: 1029038df;  */

void FUN_102903804(long param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  func_0x000107c5bcc0();
  pcVar1 = "init(plusServices:)";
  func_0x0001000c10c0("init(plusServices:)");
  func_0x000107c61180();
  puVar2 = &UNK_11056a318;
  func_0x000107c613fc(&UNK_11056a318,0x19,7);
  *(undefined8 *)(puVar2 + 0x10) = unaff_x20;
  puVar2[0x18] = param_1 == 1;
  pcStack_40 = FUN_10290392c;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11056a330;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c6157c();
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1029038e0; end: 10290390b;  */

void FUN_1029038e0(long param_1,long param_2)

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



/* Entry: 10290390c; end: 10290392b;  */

void FUN_10290390c(void)

{
  func_0x000107c61168(&PTR_PTR_112ecc840);
  return;
}



/* Entry: 10290392c; end: 102903963;  */

void FUN_10290392c(void)

{
  long unaff_x20;
  undefined1 uStack_21;
  
  uStack_21 = *(undefined1 *)(unaff_x20 + 0x18);
  func_0x0001007d6d78(*(undefined8 *)(unaff_x20 + 0x10),&uStack_21);
  return;
}



/* Entry: 102903964; end: 10290396b;  */

void FUN_102903964(long param_1,long param_2)

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



/* Entry: 10290396c; end: 102903a47;  */

/* WARNING: Possible PIC construction at 0x000102903a10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102903a20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102903a14) */
/* WARNING: Removing unreachable block (ram,0x000102903a24) */

void FUN_10290396c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar4 = &UNK_11056a440;
  func_0x000107c613fc(&UNK_11056a440,0x38,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  *(undefined8 *)(puVar4 + 0x30) = uVar7;
  uVar5 = 0x112ecc8b8;
  func_0x0001000285a8(0x112ecc8b8,&UNK_10daf0e88);
  func_0x000107c613fc();
  pcVar6 = FUN_102903a9c;
  func_0x0001000841fc(FUN_102903a9c,puVar4,uVar5);
  func_0x000100084214(&UNK_10daf0e50,0x33,2);
  *param_1 = pcVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102903a48; end: 102903a57;  */

undefined1  [16] FUN_102903a48(void)

{
  return ZEXT816(0x11056a420);
}



/* Entry: 102903a58; end: 102903a9b;  */

void FUN_102903a58(void)

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



/* Entry: 102903a9c; end: 102903bab;  */

void FUN_102903a9c(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_58;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar9 = *param_2;
  func_0x0001000285a8(0x112ecc8c0,&UNK_10daf0e90);
  puVar4 = &uStack_58;
  uStack_58 = uVar9;
  func_0x0001000838ec();
  FUN_10290439c(uVar5);
  func_0x000100082720("PlusGenAiStickersPAndLServiceImplServiceProvider",0x30,2);
  puVar6 = puVar4;
  FUN_102903cbc(puVar4,uVar2,uVar1,uVar5,uVar3,uVar8);
  func_0x000100082720("PlusAIStickersLegalTrayViewControllerServiceProvider",0x34,2);
  puVar7 = puVar4;
  FUN_102903bac(puVar4,puVar6);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(puVar4);
  func_0x000100082720("PlusAIStickersLegalTrayViewControllerEntryPointProvider",0x37,2);
  *param_1 = (long)puVar7;
  return;
}



/* Entry: 102903bac; end: 102903cb3;  */

void FUN_102903bac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e9c1f8,&UNK_10daaa000);
  puVar1 = &UNK_11056a4f0;
  func_0x000107c613fc(&UNK_11056a4f0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102903cb4,puVar1);
  return;
}



/* Entry: 102903cb4; end: 102903cbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102903cb4(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  lVar1 = lStack_38;
  func_0x000100083b20(&lStack_38);
  uVar2 = *(undefined8 *)(lStack_38 + _DAT_112f262b8);
  func_0x000107c615f0(uVar2);
  func_0x000107c61170(lStack_38);
  func_0x000107c3e2c0(uVar2);
  func_0x000107c615e8(uVar2);
  *param_1 = lVar1;
  return;
}



/* Entry: 102903cbc; end: 102903e9f;  */

void FUN_102903cbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ecc8c8,&UNK_10daf0e98);
  puVar1 = &UNK_11056a518;
  func_0x000107c613fc(&UNK_11056a518,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001000823a8(FUN_102903ea0,puVar1);
  return;
}



/* Entry: 102903ea0; end: 102903eaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102903ea0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  FUN_10290437c();
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ecc8d0) = 0;
  *(undefined8 *)(lVar1 + _DAT_112ecc8d8) = uStack_58;
  *(undefined8 *)(lVar1 + _DAT_112ecc8e0) = uStack_60;
  *(undefined8 *)(lVar1 + _DAT_112ecc8e8) = uStack_68;
  *(undefined8 *)(lVar1 + _DAT_112ecc8f0) = uStack_70;
  *(undefined8 *)(lVar1 + _DAT_112ecc8f8) = uStack_78;
  *(undefined8 *)(lVar1 + _DAT_112ecc900) = uStack_80;
  uVar2 = 4;
  FUN_102be6c14();
  *param_1 = uVar2;
  return;
}



/* Entry: 102903eb0; end: 102903f5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102903eb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ecc8d0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ecc8d8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ecc8e0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ecc8e8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ecc8f0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ecc8f8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ecc900) = param_6;
  FUN_102be6c14(4);
  return;
}



/* Entry: 102903f60; end: 102903fb7;  */

void FUN_102903f60(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "PlusAIStickersLegalTray/PlusAIStickersLegalTrayViewController.swift",0x43,2,
                      0x3b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102903fb8);
  (*pcVar1)();
}



/* Entry: 102903fb8; end: 1029041c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102903fb8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ecc8e0);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    if (lVar1 != 0) {
      lVar3 = *(long *)(unaff_x20 + _DAT_112ecc8e8);
      func_0x000107c3dae4();
      func_0x000107c61180();
      lVar2 = lVar3;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar2 != 0) {
        puVar4 = PTR_PTR_1126b33f0;
        func_0x000107c610f8();
        func_0x000107c4842c();
        lVar3 = unaff_x20;
        func_0x000106c733fc();
        func_0x000107c61180();
        lVar5 = lVar2;
        func_0x000107c4c1e0(lVar2,param_2,lVar3);
        func_0x000107c61180();
        puVar6 = PTR_PTR_1126ab8a8;
        func_0x000107c610f8(PTR_PTR_1126ab8a8);
        func_0x000107c47a04();
        puVar7 = PTR_PTR_1126b34e8;
        func_0x000107c610f8(PTR_PTR_1126b34e8);
        func_0x000107c486ec();
        func_0x000107c55310(puVar6,param_2,puVar7);
        func_0x000107c61170(puVar7);
        puVar7 = PTR_PTR_1126ab8b0;
        func_0x000107c610f8(PTR_PTR_1126ab8b0);
        func_0x000107c49520();
        func_0x000107c61174();
        func_0x000107c561c0();
        func_0x000107c61170(puVar4);
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(puVar6);
        func_0x000107c615e8(lVar5);
        func_0x000107c615e8(lVar3);
        func_0x000107c615e8(lVar1);
        uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ecc8d0);
        *(undefined **)(unaff_x20 + _DAT_112ecc8d0) = puVar4;
        func_0x000107c61170(uVar8);
        return puVar7;
      }
      func_0x000107c615e8(lVar1);
    }
  }
  return (undefined *)0x0;
}



/* Entry: 1029041c8; end: 102904223;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029041c8(long param_1)

{
  long unaff_x20;
  
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(unaff_x20 + _DAT_112ecc8d8)) +
              0x60))();
  if (param_1 != 0) {
    func_0x000107c3da90();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 102904224; end: 1029042d3;  */

/* WARNING: Possible PIC construction at 0x000102904238: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102904258: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102904278: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010290425c) */
/* WARNING: Removing unreachable block (ram,0x00010290423c) */
/* WARNING: Removing unreachable block (ram,0x00010290427c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102904224(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + _DAT_112ecc8d8));
  return;
}



/* Entry: 1029042d4; end: 1029042f3;  */

undefined1  [16] FUN_1029042d4(void)

{
  return ZEXT816(0x11056a540);
}



/* Entry: 1029042f4; end: 10290437b; -[_TtC23PlusAIStickersLegalTray37PlusAIStickersLegalTrayViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102904310: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102904330: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102904350: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102904334) */
/* WARNING: Removing unreachable block (ram,0x000102904314) */
/* WARNING: Removing unreachable block (ram,0x000102904354) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029042f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ecc8d8));
  return;
}



/* Entry: 10290437c; end: 10290439b;  */

void FUN_10290437c(void)

{
  func_0x000107c61168(&PTR_PTR_11286f508);
  return;
}



/* Entry: 10290439c; end: 1029043e7;  */

void FUN_10290439c(undefined8 param_1)

{
  func_0x0001000285a8(0x112ecc930,&UNK_10daf0f70);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102904454,param_1);
  return;
}



/* Entry: 1029043e8; end: 102904453;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029043e8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102904618();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ecc938) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102904454; end: 10290445b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102904454(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102904618();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ecc938) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10290445c; end: 102904563;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10290445c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ecc938) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102904564; end: 102904597; -[_TtC23PlusAIStickersLegalTray33PlusGenAiStickersPAndLServiceImpl accept] */

void FUN_102904564(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001029044a8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102904598; end: 1029045f7; -[_TtC23PlusAIStickersLegalTray33PlusGenAiStickersPAndLServiceImpl init] */

void FUN_102904598(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlusAIStickersLegalTray.PlusGenAiStickersPAndLServiceImpl",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029045c4);
  (*pcVar1)();
}



/* Entry: 1029045f8; end: 102904607;  */

undefined1  [16] FUN_1029045f8(void)

{
  return ZEXT816(0x11056a5a0);
}



/* Entry: 102904608; end: 102904617; -[_TtC23PlusAIStickersLegalTray33PlusGenAiStickersPAndLServiceImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102904608(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ecc938));
  return;
}



/* Entry: 102904618; end: 102904637;  */

void FUN_102904618(void)

{
  func_0x000107c61168(&PTR_PTR_11286f6f0);
  return;
}



/* Entry: 102904638; end: 1029047a3;  */

/* WARNING: Possible PIC construction at 0x00010290471c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010290472c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010290473c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010290474c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010290475c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010290476c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010290477c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102904770) */
/* WARNING: Removing unreachable block (ram,0x000102904760) */
/* WARNING: Removing unreachable block (ram,0x000102904750) */
/* WARNING: Removing unreachable block (ram,0x000102904740) */
/* WARNING: Removing unreachable block (ram,0x000102904730) */
/* WARNING: Removing unreachable block (ram,0x000102904720) */
/* WARNING: Removing unreachable block (ram,0x000102904780) */

void FUN_102904638(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  code *pcVar16;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x78);
  puVar14 = &UNK_11056a6b0;
  func_0x000107c613fc(&UNK_11056a6b0,0x80,7);
  *(undefined8 *)(puVar14 + 0x10) = uVar1;
  *(undefined8 *)(puVar14 + 0x18) = uVar7;
  *(undefined8 *)(puVar14 + 0x20) = uVar15;
  *(undefined8 *)(puVar14 + 0x28) = uVar8;
  *(undefined8 *)(puVar14 + 0x30) = uVar2;
  *(undefined8 *)(puVar14 + 0x38) = uVar9;
  *(undefined8 *)(puVar14 + 0x40) = uVar3;
  *(undefined8 *)(puVar14 + 0x48) = uVar10;
  *(undefined8 *)(puVar14 + 0x50) = uVar4;
  *(undefined8 *)(puVar14 + 0x58) = uVar11;
  *(undefined8 *)(puVar14 + 0x60) = uVar5;
  *(undefined8 *)(puVar14 + 0x68) = uVar12;
  *(undefined8 *)(puVar14 + 0x70) = uVar6;
  *(undefined8 *)(puVar14 + 0x78) = uVar13;
  uVar15 = 0x112ecc970;
  func_0x0001000285a8(0x112ecc970,&UNK_10daf1040);
  func_0x000107c613fc();
  pcVar16 = FUN_102904840;
  func_0x0001000841fc(FUN_102904840,puVar14,uVar15);
  func_0x000100084214(&UNK_10daf1000,0x3c,2);
  *param_1 = pcVar16;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1029047a4; end: 1029047b3;  */

undefined1  [16] FUN_1029047a4(void)

{
  return ZEXT816(0x11056a690);
}



/* Entry: 1029047b4; end: 10290483f;  */

void FUN_1029047b4(void)

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



/* Entry: 102904840; end: 102904987;  */

void FUN_102904840(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long unaff_x20;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uStack_68;
  
  uVar11 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar14 = *param_2;
  func_0x0001000285a8(0x112ecc978,&UNK_10daf1048);
  puVar10 = &uStack_68;
  uStack_68 = uVar14;
  func_0x0001000838ec();
  FUN_102904988(uVar11);
  func_0x000100082720("PlusCustomNotificationSoundsPageScopedPlusSubscribeScopeExposerServiceProvider"
                      ,0x4e,2);
  puVar12 = puVar10;
  FUN_102904c10(puVar10,uVar5,uVar1,uVar6,uVar2,uVar7,uVar3,uVar8,uVar17,uVar18,uVar15,uVar16,uVar4)
  ;
  func_0x000100082720("SCPlusCustomNotificationSoundsPageViewControllerServiceProvider",0x3f,2);
  puVar13 = puVar10;
  FUN_102904a78(puVar10,puVar12,uVar9);
  func_0x000107c61574(puVar12);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(puVar10);
  func_0x000100082720("PlusCustomNotificationSoundsPageEntryPointProvider",0x32,2);
  *param_1 = puVar13;
  return;
}



/* Entry: 102904988; end: 1029049d3;  */

void FUN_102904988(undefined8 param_1)

{
  func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102904a60,param_1);
  return;
}



/* Entry: 1029049d4; end: 102904a5f;  */

void FUN_1029049d4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112e5e838;
  func_0x0001000285a8(0x112e5e838,&UNK_10da68a50);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 102904a60; end: 102904a77;  */

void FUN_102904a60(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112e5e838;
  func_0x0001000285a8(0x112e5e838,&UNK_10da68a50);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 102904a78; end: 102904c03;  */

void FUN_102904a78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e9c1f8,&UNK_10daaa000);
  puVar1 = &UNK_11056a7a0;
  func_0x000107c613fc(&UNK_11056a7a0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102904c04,puVar1);
  return;
}



/* Entry: 102904c04; end: 102904c0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102904c04(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lStack_50;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = lStack_48;
  func_0x000100083b20(&lStack_50);
  uVar3 = *(undefined8 *)(lStack_50 + _DAT_113097748);
  func_0x000107c615f0(uVar3);
  func_0x000107c61170(lStack_50);
  puVar2 = PTR_PTR_1126b3400;
  func_0x000107c610f8();
  func_0x000107c483fc();
  func_0x000107c61170(lVar1);
  func_0x000107c615e8(uVar3);
  func_0x000100083b20(&lStack_48);
  uVar3 = *(undefined8 *)(lStack_48 + _DAT_112fb04b8);
  func_0x000107c615f0(uVar3);
  func_0x000107c61170(lStack_48);
  func_0x000107c3e2c0(uVar3);
  func_0x000107c615e8(uVar3);
  *param_1 = puVar2;
  return;
}



/* Entry: 102904c10; end: 102904f7b;  */

void FUN_102904c10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ecc980,&UNK_10daf10e8);
  puVar1 = &UNK_11056a7c8;
  func_0x000107c613fc(&UNK_11056a7c8,0x78,7);
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
  func_0x000107c6157c(param_1);
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
  func_0x0001000823a8(FUN_102904f7c,puVar1);
  return;
}



/* Entry: 102904f7c; end: 102904fb7;  */

void FUN_102904f7c(void)

{
  long unaff_x20;
  
  func_0x000102904d54(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 102904fb8; end: 1029050f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102904fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  long unaff_x20;
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ecc988) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ecc990) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ecc998) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ecc9a0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ecc9a8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ecc9b0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ecc9b8) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ecc9c0) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112ecc9c8) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112ecc9d0) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112ecc9d8) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112ecc9e0) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112ecc9e8) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112ecc9f0) = param_13;
  FUN_102be6c14(2);
  return;
}



/* Entry: 1029050f8; end: 1029051e3;  */

/* WARNING: Possible PIC construction at 0x00010290510c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010290512c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010290514c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010290516c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010290518c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029051ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029051cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029051b0) */
/* WARNING: Removing unreachable block (ram,0x000102905190) */
/* WARNING: Removing unreachable block (ram,0x000102905170) */
/* WARNING: Removing unreachable block (ram,0x000102905150) */
/* WARNING: Removing unreachable block (ram,0x000102905130) */
/* WARNING: Removing unreachable block (ram,0x000102905110) */
/* WARNING: Removing unreachable block (ram,0x0001029051d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029050f8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + _DAT_112ecc990));
  return;
}



/* Entry: 1029051e4; end: 102905277;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029051e4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar1 = _DAT_112ecc9e8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112ecc9e8);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170();
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x000107c61174(uVar3);
    uVar4 = uVar3;
    func_0x000107c4ffe8();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x000107c615e8(uVar4);
  }
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102905278; end: 102905323; -[_TtC48SCPlusCustomNotificationSoundsPageImplementation48SCPlusCustomNotificationSoundsPageViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102905278(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112ecc9e8;
  lVar6 = *(long *)(param_1 + _DAT_112ecc9e8);
  lVar3 = param_1;
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar6 != 0) {
    func_0x000107c61170();
    uVar4 = *(undefined8 *)(param_1 + lVar1);
    func_0x000107c61174(uVar4);
    uVar5 = uVar4;
    func_0x000107c4ffe8();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c615e8(uVar5);
  }
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102905324; end: 10290541b; -[_TtC48SCPlusCustomNotificationSoundsPageImplementation48SCPlusCustomNotificationSoundsPageViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102905340: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102905360: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102905380: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029053a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029053c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029053e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102905400: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029053e4) */
/* WARNING: Removing unreachable block (ram,0x0001029053c4) */
/* WARNING: Removing unreachable block (ram,0x0001029053a4) */
/* WARNING: Removing unreachable block (ram,0x000102905384) */
/* WARNING: Removing unreachable block (ram,0x000102905364) */
/* WARNING: Removing unreachable block (ram,0x000102905344) */
/* WARNING: Removing unreachable block (ram,0x000102905404) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102905324(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ecc990));
  return;
}



/* Entry: 10290541c; end: 102905a23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10290541c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *unaff_x20;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lStack_68;
  
  puVar3 = unaff_x20;
  func_0x000106c733b0();
  func_0x000107c61180();
  lVar4 = *(long *)(unaff_x20 + _DAT_112ecc998);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar17 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar17 == 0) {
LAB_102905538:
    func_0x000107c615e8(puVar3);
    puVar16 = (undefined *)0x0;
  }
  else {
    lVar4 = lVar17;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar17);
    if (lVar4 == 0) {
      puVar16 = (undefined *)0x0;
    }
    else {
      lVar5 = *(long *)(unaff_x20 + _DAT_112ecc9a0);
      func_0x000107c3dae4();
      func_0x000107c61180();
      lVar17 = lVar5;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      if (lVar17 == 0) {
        func_0x000107c615e8(lVar4);
        goto LAB_102905538;
      }
      lVar5 = lVar17;
      func_0x000107c4c1e0();
      func_0x000107c61180();
      func_0x000107c615e8(lVar17);
      lVar17 = _DAT_112fb04d0;
      lVar13 = *(long *)(unaff_x20 + _DAT_112ecc990);
      lStack_68 = *(long *)(lVar13 + _DAT_112fb04d0);
      if ((lStack_68 != 0) && (lStack_68 != 1)) {
LAB_102905a00:
        func_0x000107c60614(&UNK_1106add60,&lStack_68,&UNK_1106add60,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102905a24);
        (*pcVar2)();
      }
      puVar6 = PTR_PTR_1126ab8b8;
      func_0x000107c610f8();
      func_0x000107c48888();
      lVar14 = ((undefined8 *)(lVar13 + _DAT_112fb04b0))[1];
      if (lVar14 == 0) {
        uVar15 = 0;
      }
      else {
        uVar15 = *(undefined8 *)(lVar13 + _DAT_112fb04b0);
        func_0x000107c61434(lVar14);
        func_0x000107c5fadc(uVar15,lVar14);
        func_0x000107c6142c(lVar14);
      }
      func_0x000107c53970();
      func_0x000107c61170(uVar15);
      puVar7 = PTR_PTR_1126b33f0;
      func_0x000107c610f8();
      func_0x000107c4842c();
      puVar8 = PTR_PTR_1126b2ef8;
      func_0x000107c610f8();
      func_0x000107c45864();
      puVar9 = PTR_PTR_1126b34d8;
      func_0x000107c610f8();
      func_0x000107c47f90();
      lVar14 = _DAT_112fb04c0;
      puVar10 = PTR_PTR_1126b35c8;
      func_0x000107c610f8();
      func_0x000107c48f74();
      lStack_68 = *(long *)(lVar13 + lVar17);
      if (lStack_68 == 1) {
        uVar15 = *(undefined8 *)(lVar13 + _DAT_112fb04a8);
        uVar1 = ((undefined8 *)(lVar13 + _DAT_112fb04a8))[1];
        lVar17 = *(long *)(unaff_x20 + _DAT_112ecc9e0);
        func_0x000107c61434(uVar1);
        func_0x000107c42eac();
        func_0x000107c61180();
        if (lVar17 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1029059f8);
          (*pcVar2)();
        }
        puVar11 = PTR_PTR_1126b36e0;
        func_0x000107c610f8();
        func_0x000107c5fadc(uVar15,uVar1);
        func_0x000107c6142c(uVar1);
        func_0x000107c46178();
        func_0x000107c61170(lVar17);
        func_0x000107c61170(uVar15);
        if (puVar11 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102905a00);
          (*pcVar2)();
        }
      }
      else {
        if (lStack_68 != 0) goto LAB_102905a00;
        uVar15 = *(undefined8 *)(lVar13 + _DAT_112fb04a8);
        uVar1 = ((undefined8 *)(lVar13 + _DAT_112fb04a8))[1];
        uVar18 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112ecc9b0) + _DAT_113093a98);
        puVar11 = PTR_PTR_1126b36d8;
        func_0x000107c610f8();
        func_0x000107c61434(uVar1);
        func_0x000107c61174(uVar18);
        func_0x000107c5fadc(uVar15,uVar1);
        func_0x000107c6142c(uVar1);
        func_0x000107c4617c();
        func_0x000107c61170(uVar18);
        func_0x000107c61170(uVar15);
        if (puVar11 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1029059fc);
          (*pcVar2)();
        }
      }
      puVar12 = PTR_PTR_1126ab8c0;
      func_0x000107c610f8(PTR_PTR_1126ab8c0);
      func_0x000107c47a1c();
      func_0x000106c7424c(2);
      puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c46ecc();
      func_0x000107c57734(puVar12);
      func_0x000107c61170(puVar16);
      uVar15 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112ecc9d8) + _DAT_113083898);
      func_0x000107c5c734(uVar15);
      func_0x000107c61180();
      func_0x000107c52d78(puVar12);
      func_0x000107c615e8(uVar15);
      uVar15 = *(undefined8 *)(lVar13 + lVar14);
      func_0x000106c68d1c(uVar15);
      func_0x000107c61180();
      func_0x000107c560e4(puVar12);
      func_0x000107c61170(uVar15);
      puVar16 = PTR_PTR_1126ab8c8;
      func_0x000107c610f8(PTR_PTR_1126ab8c8);
      func_0x000107c49520();
      uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112ecc988);
      *(undefined **)(unaff_x20 + _DAT_112ecc988) = puVar7;
      func_0x000107c61174(puVar7);
      func_0x000107c61170(uVar15);
      func_0x000107c61174(puVar7);
      func_0x000107c561c0();
      func_0x000107c61170(puVar12);
      func_0x000107c61170(puVar6);
      func_0x000107c615e8(lVar5);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar8);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar7);
      func_0x000107c615e8(lVar4);
      func_0x000107c615e8(puVar3);
      puVar3 = puVar11;
    }
    func_0x000107c615e8(puVar3);
  }
  return puVar16;
}



/* Entry: 102905a24; end: 102905a8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102905a24(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb04c8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112ecc990);
  func_0x000107c61428(lVar2 + _DAT_112fb04c8,auStack_38,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c410c0();
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 102905a8c; end: 102905ab3; -[_TtC48SCPlusCustomNotificationSoundsPageImplementation48SCPlusCustomNotificationSoundsPageViewController pageViewName] */

undefined8 FUN_102905a8c(void)

{
  return 199;
}



/* Entry: 102905ab4; end: 102905ad3;  */

void FUN_102905ab4(void)

{
  func_0x000107c61168(&PTR_PTR_11286f7b0);
  return;
}



/* Entry: 102905ad4; end: 102905b97;  */

/* WARNING: Possible PIC construction at 0x000102905b6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102905b7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102905b70) */
/* WARNING: Removing unreachable block (ram,0x000102905b80) */

void FUN_102905ad4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar4 = &UNK_11056a920;
  func_0x000107c613fc(&UNK_11056a920,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  uVar5 = 0x112ecca28;
  func_0x0001000285a8(0x112ecca28,&UNK_10daf11f8);
  func_0x000107c613fc();
  pcVar6 = FUN_102905be4;
  func_0x0001000841fc(FUN_102905be4,puVar4,uVar5);
  func_0x000100084214(&UNK_10daf11c0,0x31,2);
  *param_1 = pcVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102905b98; end: 102905ba7;  */

undefined1  [16] FUN_102905b98(void)

{
  return ZEXT816(0x11056a900);
}



/* Entry: 102905ba8; end: 102905be3;  */

void FUN_102905ba8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102905be4; end: 102905ceb;  */

void FUN_102905be4(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uStack_58;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar8 = *param_2;
  func_0x0001000285a8(0x112ecca30,&UNK_10daf1200);
  puVar4 = &uStack_58;
  uStack_58 = uVar8;
  func_0x0001000838ec();
  FUN_1029064cc(uVar5);
  func_0x000100082720("GiftingLinkTrayScopedPlusGiftingScopeExposerServiceProvider",0x3b,2);
  puVar6 = puVar4;
  FUN_102905e98(puVar4,uVar2,uVar1,uVar5);
  func_0x000100082720("PlusGiftingLinkTrayViewControllerServiceProvider",0x30,2);
  puVar7 = puVar4;
  FUN_102905cec(puVar4,puVar6,uVar3);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(puVar4);
  func_0x000100082720("PlusGiftingLinkTrayViewControllerEntryPointProvider",0x33,2);
  *param_1 = (long)puVar7;
  return;
}



/* Entry: 102905cec; end: 102905e8b;  */

void FUN_102905cec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e9c1f8,&UNK_10daaa000);
  puVar1 = &UNK_11056a9d0;
  func_0x000107c613fc(&UNK_11056a9d0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_102905e8c,puVar1);
  return;
}



/* Entry: 102905e8c; end: 102905e97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102905e8c(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lStack_50;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = lStack_48;
  func_0x000100083b20(&lStack_48);
  func_0x000100083b20(&lStack_50);
  uVar3 = *(undefined8 *)(lStack_50 + _DAT_113097748);
  func_0x000107c615f0(uVar3);
  func_0x000107c61170(lStack_50);
  puVar2 = PTR_PTR_1126b3400;
  func_0x000107c610f8();
  func_0x000107c483fc();
  func_0x000107c61170(lStack_48);
  func_0x000107c615e8(uVar3);
  uVar3 = *(undefined8 *)(lVar1 + _DAT_112ececd8);
  func_0x000107c615f0(uVar3);
  func_0x000107c61174();
  func_0x000107c3e2c0(uVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c615e8(uVar3);
  func_0x000107c61170(lVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 102905e98; end: 10290600f;  */

void FUN_102905e98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ecca38,&UNK_10daf1208);
  puVar1 = &UNK_11056a9f8;
  func_0x000107c613fc(&UNK_11056a9f8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_102906010,puVar1);
  return;
}



/* Entry: 102906010; end: 10290601b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102906010(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  FUN_1029064ac();
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ecca40) = 0;
  *(undefined8 *)(lVar1 + _DAT_112ecca48) = uStack_48;
  *(undefined8 *)(lVar1 + _DAT_112ecca50) = uStack_50;
  *(undefined8 *)(lVar1 + _DAT_112ecca58) = uStack_58;
  *(undefined8 *)(lVar1 + _DAT_112ecca60) = uStack_60;
  uVar2 = 4;
  FUN_102be6c14();
  *param_1 = uVar2;
  return;
}



/* Entry: 10290601c; end: 1029060a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10290601c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ecca40) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ecca48) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ecca50) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ecca58) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ecca60) = param_4;
  FUN_102be6c14(4);
  return;
}



/* Entry: 1029060a4; end: 1029060fb;  */

void FUN_1029060a4(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCPlusGiftingLinkTrayImplementation/PlusGiftingLinkTrayViewController.swift",
                      0x4b,2,0x3d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029060fc);
  (*pcVar1)();
}



/* Entry: 1029060fc; end: 10290632b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1029060fc(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ecca50);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    if (lVar1 != 0) {
      puVar3 = PTR_PTR_1126b33f0;
      func_0x000107c610f8();
      func_0x000107c4842c();
      lVar4 = unaff_x20;
      func_0x000106c733fc();
      func_0x000107c61180();
      lVar2 = _DAT_112ecece0;
      lVar10 = *(long *)(unaff_x20 + _DAT_112ecca48);
      puVar5 = PTR_PTR_1126c3510;
      func_0x000107c610f8(PTR_PTR_1126c3510);
      func_0x000107c48f50();
      puVar6 = PTR_PTR_1126b35f0;
      func_0x000107c610f8(PTR_PTR_1126b35f0);
      func_0x000107c48f0c();
      puVar7 = PTR_PTR_1126b34f8;
      func_0x000107c610f8(PTR_PTR_1126b34f8);
      func_0x000107c45974();
      uVar11 = *(undefined8 *)(lVar10 + lVar2);
      func_0x000107c61174();
      func_0x000106c68d1c(uVar11);
      func_0x000107c61180();
      puVar8 = PTR_PTR_1126ab8d0;
      func_0x000107c610f8(PTR_PTR_1126ab8d0);
      func_0x000107c47a10();
      func_0x000107c61170(puVar3);
      func_0x000107c61170(uVar11);
      puVar9 = PTR_PTR_1126ab8d8;
      func_0x000107c610f8(PTR_PTR_1126ab8d8);
      func_0x000107c49520();
      func_0x000107c61174();
      func_0x000107c561c0();
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar8);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar5);
      func_0x000107c615e8(lVar4);
      func_0x000107c615e8(lVar1);
      uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112ecca40);
      *(undefined **)(unaff_x20 + _DAT_112ecca40) = puVar3;
      func_0x000107c61170(uVar11);
      return puVar9;
    }
  }
  return (undefined *)0x0;
}



/* Entry: 10290632c; end: 102906393;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10290632c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ecece8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112ecca48);
  func_0x000107c61428(lVar2 + _DAT_112ecece8,auStack_38,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c443f0();
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 102906394; end: 102906423;  */

/* WARNING: Possible PIC construction at 0x0001029063a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029063c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029063ac) */
/* WARNING: Removing unreachable block (ram,0x0001029063cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102906394(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + _DAT_112ecca48));
  return;
}



/* Entry: 102906424; end: 102906443;  */

undefined1  [16] FUN_102906424(void)

{
  return ZEXT816(0x11056aa20);
}



/* Entry: 102906444; end: 1029064ab; -[_TtC35SCPlusGiftingLinkTrayImplementation33PlusGiftingLinkTrayViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102906460: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102906480: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102906464) */
/* WARNING: Removing unreachable block (ram,0x000102906484) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102906444(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ecca48));
  return;
}



/* Entry: 1029064ac; end: 1029064cb;  */

void FUN_1029064ac(void)

{
  func_0x000107c61168(&PTR_PTR_11286f9c8);
  return;
}



/* Entry: 1029064cc; end: 102906517;  */

void FUN_1029064cc(undefined8 param_1)

{
  func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1029065a4,param_1);
  return;
}



/* Entry: 102906518; end: 1029065a3;  */

void FUN_102906518(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112e609b8;
  func_0x0001000285a8(0x112e609b8,&UNK_10da68a80);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}


