/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1043fe438; end: 1043fe483;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fe438(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113077018) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043fe484; end: 1043fe4db; -[_TtC33SCPreviewToolbarItemProviderScope33SCPreviewToolbarItemProviderScope initWithPlugInRegistry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fe484(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113077018) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 1043fe4dc; end: 1043fe53b; -[_TtC33SCPreviewToolbarItemProviderScope33SCPreviewToolbarItemProviderScope init] */

void FUN_1043fe4dc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCPreviewToolbarItemProviderScope.SCPreviewToolbarItemProviderScope",0x43,"init()",6,0
            );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043fe508);
  (*pcVar1)();
}



/* Entry: 1043fe53c; end: 1043fe54b; -[_TtC33SCPreviewToolbarItemProviderScope33SCPreviewToolbarItemProviderScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fe53c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113077018));
  return;
}



/* Entry: 1043fe54c; end: 1043fe56b;  */

void FUN_1043fe54c(void)

{
  _objc_opt_self(&PTR_PTR_1129aea00);
  return;
}



/* Entry: 1043fe56c; end: 1043fe57b; -[SCPreviewToolbarItemViewModel previewToolbarItemType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043fe56c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113077048);
}



/* Entry: 1043fe57c; end: 1043fe58b; -[SCPreviewToolbarItemViewModel isEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043fe57c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113077050);
}



/* Entry: 1043fe58c; end: 1043fe59b; -[SCPreviewToolbarItemViewModel overrideArtworkImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fe58c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113077058));
  return;
}



/* Entry: 1043fe59c; end: 1043fe5ab; -[SCPreviewToolbarItemViewModel isHighlighted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043fe59c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113077060);
}



/* Entry: 1043fe5ac; end: 1043fe5bb; -[SCPreviewToolbarItemViewModel isLoading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043fe5ac(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113077068);
}



/* Entry: 1043fe5bc; end: 1043fe5cb; -[SCPreviewToolbarItemViewModel optionalPayload] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fe5bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113077070));
  return;
}



/* Entry: 1043fe5cc; end: 1043fe67f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fe5cc(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113077048) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_113077050) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113077058) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_113077060) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_113077068) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113077070) = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043fe680; end: 1043fe747; -[SCPreviewToolbarItemViewModel initWithPreviewToolbarItemType:isEnabled:overrideArtworkImage:isHighlighted:isLoading:optionalPayload:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fe680(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113077048) = param_3;
  *(undefined1 *)(param_1 + _DAT_113077050) = param_4;
  *(undefined8 *)(param_1 + _DAT_113077058) = param_5;
  *(undefined1 *)(param_1 + _DAT_113077060) = param_6;
  *(undefined1 *)(param_1 + _DAT_113077068) = param_7;
  *(undefined8 *)(param_1 + _DAT_113077070) = param_8;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_msgSendSuper2(&lStack_60,puVar1);
  return;
}



/* Entry: 1043fe748; end: 1043fe7b7;  */

undefined8 FUN_1043fe748(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_1043ff0b0(param_1);
  func_0x0001043fe400(param_1);
  return uVar1;
}



/* Entry: 1043fe7b8; end: 1043fe7eb; -[SCPreviewToolbarItemViewModel hash] */

undefined8 FUN_1043fe7b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1043fe7ec();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1043fe7ec; end: 1043fe8f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fe7ec(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113077048));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113077050));
  lVar1 = *(long *)(unaff_x20 + _DAT_113077058);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113077060));
  uVar2 = (ulong)*(byte *)(unaff_x20 + _DAT_113077068);
  __ss6HasherV8_combineyys5UInt8VF(uVar2);
  if (*(long *)(unaff_x20 + _DAT_113077070) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1043ff430();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1043fe8f4; end: 1043fead3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1043fe8f4(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  long unaff_x20;
  long lVar14;
  long lStack_88;
  long alStack_80 [4];
  
  lVar12 = unaff_x20;
  _swift_getObjectType();
  FUN_1043ff3e4(param_1,alStack_80,0x112d387f8,&UNK_10d902650);
  if (alStack_80[3] == 0) {
    func_0x00010006e7f4(alStack_80);
  }
  else {
    plVar11 = &lStack_88;
    _swift_dynamicCast(plVar11,alStack_80,PTR___sypN_11034f1a8 + 8,lVar12,6);
    if (((ulong)plVar11 & 1) != 0) {
      iVar1 = *(int *)(unaff_x20 + _DAT_113077048);
      iVar2 = *(int *)(lStack_88 + _DAT_113077048);
      bVar3 = *(byte *)(unaff_x20 + _DAT_113077050);
      bVar4 = *(byte *)(lStack_88 + _DAT_113077050);
      lVar12 = *(long *)(unaff_x20 + _DAT_113077058);
      if (lVar12 == 0) {
        uVar9 = (uint)(*(long *)(lStack_88 + _DAT_113077058) == 0);
      }
      else {
        func_0x00010c071ae0();
        uVar9 = (uint)lVar12;
      }
      bVar5 = *(byte *)(unaff_x20 + _DAT_113077060);
      bVar6 = *(byte *)(lStack_88 + _DAT_113077060);
      bVar7 = *(byte *)(unaff_x20 + _DAT_113077068);
      bVar8 = *(byte *)(lStack_88 + _DAT_113077068);
      if (*(long *)(unaff_x20 + _DAT_113077070) == 0) {
        lVar14 = *(long *)(lStack_88 + _DAT_113077070);
        lVar12 = lVar14;
        _objc_retain(lVar14);
        _objc_release(lStack_88);
        if (lVar14 == 0) {
          uVar10 = 1;
        }
        else {
          _objc_release(lVar12);
          uVar10 = 0;
        }
      }
      else {
        lVar12 = *(long *)(lStack_88 + _DAT_113077070);
        if (lVar12 == 0) {
          uVar13 = 0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          uVar13 = 0;
          FUN_10440049c();
        }
        alStack_80[0] = lVar12;
        alStack_80[3] = uVar13;
        _objc_retain(lVar12);
        plVar11 = alStack_80;
        FUN_1043ff60c(plVar11);
        uVar10 = (uint)plVar11;
        _objc_release(lStack_88);
        func_0x00010006e7f4(alStack_80);
      }
      return (uint)(iVar1 == iVar2) & ((bVar3 ^ bVar4) ^ 1) & uVar9 & ((bVar5 ^ bVar6) ^ 1) &
             ((bVar7 ^ bVar8) ^ 1) & uVar10;
    }
  }
  return 0;
}



/* Entry: 1043fead4; end: 1043feb53; -[SCPreviewToolbarItemViewModel isEqual:] */

uint FUN_1043fead4(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1043fe8f4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1043feb54; end: 1043feb57; -[SCPreviewToolbarItemViewModel copyWithZone:] */

void FUN_1043feb54(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1043feb58; end: 1043febeb; -[SCPreviewToolbarItemViewModel description] */

void FUN_1043feb58(undefined8 param_1)

{
  undefined1 auStack_50 [48];
  
  _objc_retain();
  FUN_1043ff1b8(auStack_50);
  _objc_release(param_1);
  func_0x0001043fe400(auStack_50);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043febec; end: 1043fec33; -[SCPreviewToolbarItemViewModel init] */

void FUN_1043febec(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCPreviewToolbarItemProviderScope/PreviewToolbarItemViewModelWrapper.swift",0x4a,2,
             0x55,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043fec34);
  (*pcVar1)();
}



/* Entry: 1043fec34; end: 1043fec4f; +[SCPreviewToolbarItemViewModelBuilder previewToolbarItemViewModel] */

void FUN_1043fec34(void)

{
  _swift_getObjCClassMetadata();
  _objc_allocWithZone();
  func_0x00010bfee200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043fec50; end: 1043fec8f; +[SCPreviewToolbarItemViewModelBuilder previewToolbarItemViewModelWithExistingPreviewToolbarItemViewModel:] */

void FUN_1043fec50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_1043ff27c(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043fec90; end: 1043feca7; -[SCPreviewToolbarItemViewModelBuilder withPreviewToolbarItemType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fec90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113077078);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043feca8; end: 1043fecb7; -[SCPreviewToolbarItemViewModelBuilder withIsEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043feca8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113077080) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043fecb8; end: 1043fed17; -[SCPreviewToolbarItemViewModelBuilder withOverrideArtworkImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1043fecb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113077088);
  *(undefined8 *)(param_1 + _DAT_113077088) = param_3;
  _objc_retain(param_3);
  _objc_retain();
  _objc_retainAutoreleaseReturnValue(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1043fed18; end: 1043fed27; -[SCPreviewToolbarItemViewModelBuilder withIsHighlighted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fed18(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113077090) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043fed28; end: 1043fed37; -[SCPreviewToolbarItemViewModelBuilder withIsLoading:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fed28(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113077098) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043fed38; end: 1043fed97; -[SCPreviewToolbarItemViewModelBuilder withOptionalPayload:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1043fed38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1130770a0);
  *(undefined8 *)(param_1 + _DAT_1130770a0) = param_3;
  _objc_retain(param_3);
  _objc_retain();
  _objc_retainAutoreleaseReturnValue(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1043fed98; end: 1043feeeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fed98(long param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lStack_60;
  long lStack_58;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113077078);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar9 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar9 = *puVar1;
  }
  bVar2 = *(byte *)(unaff_x20 + _DAT_113077080);
  if (bVar2 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_113077080) = 0;
  }
  bVar3 = *(byte *)(unaff_x20 + _DAT_113077090);
  if (bVar3 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_113077090) = 0;
  }
  bVar4 = *(byte *)(unaff_x20 + _DAT_113077098);
  if (bVar4 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_113077098) = 0;
  }
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_113077088);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_1130770a0);
  FUN_1043ff3a4();
  lVar6 = param_1;
  _objc_allocWithZone();
  *(undefined8 *)(lVar6 + _DAT_113077048) = uVar9;
  *(byte *)(lVar6 + _DAT_113077050) = bVar2 & 1;
  *(undefined8 *)(lVar6 + _DAT_113077058) = uVar8;
  *(byte *)(lVar6 + _DAT_113077060) = bVar3 & 1;
  *(byte *)(lVar6 + _DAT_113077068) = bVar4 & 1;
  *(undefined8 *)(lVar6 + _DAT_113077070) = uVar7;
  puVar5 = PTR_s_init_1125d9248;
  lStack_60 = lVar6;
  lStack_58 = param_1;
  _objc_retain(uVar8);
  _objc_retain(uVar7);
  _objc_msgSendSuper2(&lStack_60,puVar5);
  return;
}



/* Entry: 1043feeec; end: 1043fef2f; -[SCPreviewToolbarItemViewModelBuilder build] */

void FUN_1043feeec(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1043fed98();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043fef30; end: 1043fef73; -[SCPreviewToolbarItemViewModelBuilder safeBuildAndReturnError:] */

void FUN_1043fef30(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1043fed98();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043fef74; end: 1043ff007; -[SCPreviewToolbarItemViewModelBuilder init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fef74(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  puVar1 = (undefined8 *)(param_1 + _DAT_113077078);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(param_1 + _DAT_113077080) = 2;
  *(undefined8 *)(param_1 + _DAT_113077088) = 0;
  *(undefined1 *)(param_1 + _DAT_113077090) = 2;
  *(undefined1 *)(param_1 + _DAT_113077098) = 2;
  *(undefined8 *)(param_1 + _DAT_1130770a0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043ff008; end: 1043ff00b;  */

void FUN_1043ff008(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043ff00c; end: 1043ff043; -[SCPreviewToolbarItemViewModelBuilder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ff00c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113077088));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130770a0));
  return;
}



/* Entry: 1043ff044; end: 1043ff077;  */

void FUN_1043ff044(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043ff078; end: 1043ff0af; -[SCPreviewToolbarItemViewModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ff078(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113077058));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113077070));
  return;
}



/* Entry: 1043ff0b0; end: 1043ff1b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ff0b0(undefined8 *param_1)

{
  char cVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _DAT_113077048) = *param_1;
  *(undefined1 *)(unaff_x20 + _DAT_113077050) = *(undefined1 *)(param_1 + 1);
  uStack_38 = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_113077058) = uStack_38;
  *(undefined1 *)(unaff_x20 + _DAT_113077060) = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(unaff_x20 + _DAT_113077068) = *(undefined1 *)((long)param_1 + 0x19);
  cVar1 = *(char *)(param_1 + 5);
  if (cVar1 == -1) {
    FUN_1043ff3e4(&uStack_38,auStack_40,0x112d36838,&UNK_10d915fb0);
    uVar2 = 0;
  }
  else {
    uVar2 = param_1[4];
    FUN_1043ff3e4(&uStack_38,auStack_40,0x112d36838,&UNK_10d915fb0);
    FUN_1043ffcb4(uVar2,cVar1);
  }
  *(undefined8 *)(unaff_x20 + _DAT_113077070) = uVar2;
  _objc_msgSendSuper2(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043ff1b8; end: 1043ff27b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ff1b8(undefined8 *param_1,long param_2,undefined1 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_2 + _DAT_113077048);
  uVar1 = *(undefined1 *)(param_2 + _DAT_113077050);
  uVar4 = *(undefined8 *)(param_2 + _DAT_113077058);
  uVar2 = *(undefined1 *)(param_2 + _DAT_113077060);
  uVar3 = *(undefined1 *)(param_2 + _DAT_113077068);
  lVar5 = *(long *)(param_2 + _DAT_113077070);
  if (lVar5 == 0) {
    _objc_retain(uVar4);
    lVar5 = 0;
    param_3 = 0xff;
  }
  else {
    _objc_retain(uVar4);
    _objc_retain();
    FUN_1043ffebc();
  }
  *param_1 = uVar6;
  *(undefined1 *)(param_1 + 1) = uVar1;
  param_1[2] = uVar4;
  *(undefined1 *)(param_1 + 3) = uVar2;
  *(undefined1 *)((long)param_1 + 0x19) = uVar3;
  param_1[4] = lVar5;
  *(undefined1 *)(param_1 + 5) = param_3;
  return;
}



/* Entry: 1043ff27c; end: 1043ff3a3;  */

/* WARNING: Possible PIC construction at 0x0001043ff2b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001043ff2b4) */

void FUN_1043ff27c(long param_1)

{
  if (param_1 == 0) {
    func_0x0001043ff3c4();
    _objc_allocWithZone();
  }
  else {
    func_0x0001043ff3c4();
    _objc_allocWithZone();
    _objc_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1043ff3a4; end: 1043ff3e3;  */

void FUN_1043ff3a4(void)

{
  _objc_opt_self(&PTR_PTR_1129aeac0);
  return;
}



/* Entry: 1043ff3e4; end: 1043ff42b;  */

undefined8 FUN_1043ff3e4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1043ff42c; end: 1043ff42f;  */

void FUN_1043ff42c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043ff430; end: 1043ff60b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ff430(void)

{
  ulong uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined8 uVar4;
  long unaff_x20;
  ulong uVar5;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(unaff_x20 + _DAT_1130770f8));
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113077100) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113077100);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar4);
  }
  if ((char)((ulong *)(unaff_x20 + _DAT_113077108))[1] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = *(ulong *)(unaff_x20 + _DAT_113077108);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar5;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113077110) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113077110);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar4);
  }
  bVar3 = *(byte *)(unaff_x20 + _DAT_113077118);
  if (bVar3 == 2) {
    bVar3 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar3 = bVar3 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar3);
  if (*(char *)((undefined4 *)(unaff_x20 + _DAT_113077120) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = *(undefined4 *)(unaff_x20 + _DAT_113077120);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyys6UInt32VF(uVar2);
  }
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113077128) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113077128);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar4);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1043ff60c; end: 1043ff807;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1043ff60c(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  byte bVar7;
  long lVar8;
  long *plVar9;
  char cVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar8 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar9 = &lStack_68;
    _swift_dynamicCast(plVar9,auStack_60,PTR___sypN_11034f1a8 + 8,lVar8,6);
    if (((ulong)plVar9 & 1) != 0) {
      bVar7 = *(byte *)(unaff_x20 + _DAT_1130770f8);
      if (bVar7 == *(byte *)(lStack_68 + _DAT_1130770f8)) {
        if (bVar7 < 3) {
          lVar8 = _DAT_113077100;
          if ((bVar7 == 0) || (lVar8 = _DAT_113077110, bVar7 != 1)) goto LAB_1043ff7b0;
          dVar13 = *(double *)(unaff_x20 + _DAT_113077108);
          cVar3 = *(char *)((double *)(unaff_x20 + _DAT_113077108) + 1);
          dVar14 = *(double *)(lStack_68 + _DAT_113077108);
          cVar10 = *(char *)((double *)(lStack_68 + _DAT_113077108) + 1);
          _objc_release();
          if (cVar3 != '\x01') {
            bVar7 = dVar13 == dVar14 && cVar10 != '\x01';
            goto LAB_1043ff6ec;
          }
        }
        else {
          if (bVar7 == 3) {
            bVar4 = *(byte *)(unaff_x20 + _DAT_113077118);
            bVar5 = *(byte *)(lStack_68 + _DAT_113077118);
            _objc_release();
            bVar7 = bVar5 == 2 && bVar4 == 2;
            if (bVar4 != 2 && bVar5 != 2) {
              bVar7 = bVar4 ^ bVar5 ^ 1;
            }
            goto LAB_1043ff6ec;
          }
          lVar8 = _DAT_113077128;
          if (bVar7 == 4) {
            iVar1 = *(int *)(unaff_x20 + _DAT_113077120);
            iVar6 = ((int *)(unaff_x20 + _DAT_113077120))[1];
            iVar2 = *(int *)(lStack_68 + _DAT_113077120);
            cVar10 = (char)((int *)(lStack_68 + _DAT_113077120))[1];
            _objc_release();
            if ((char)iVar6 == '\x01') {
              bVar7 = cVar10 == '\x01';
            }
            else {
              bVar7 = cVar10 != '\x01' && iVar1 == iVar2;
            }
            goto LAB_1043ff6ec;
          }
LAB_1043ff7b0:
          cVar10 = *(char *)((undefined8 *)(lStack_68 + lVar8) + 1);
          if (*(char *)((undefined8 *)(unaff_x20 + lVar8) + 1) != '\x01') {
            uVar11 = *(undefined8 *)(unaff_x20 + lVar8);
            uVar12 = *(undefined8 *)(lStack_68 + lVar8);
            _objc_release();
            if (cVar10 != '\x01') {
              bVar7 = (int)uVar11 == (int)uVar12;
              goto LAB_1043ff6ec;
            }
            goto LAB_1043ff6e8;
          }
          _objc_release();
        }
        bVar7 = cVar10 == '\x01';
        goto LAB_1043ff6ec;
      }
      _objc_release();
    }
  }
LAB_1043ff6e8:
  bVar7 = 0;
LAB_1043ff6ec:
  return bVar7 & 1;
}



/* Entry: 1043ff808; end: 1043ff8db;  */

void FUN_1043ff808(void)

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



/* Entry: 1043ff8dc; end: 1043ff8fb;  */

void FUN_1043ff8dc(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1043ff8fc; end: 1043ff91f; -[SCPreviewToolbarItemPayload description] */

void FUN_1043ff8fc(void)

{
  _objc_retain();
  FUN_1043ffebc();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043ff920; end: 1043ff967; -[SCPreviewToolbarItemPayload init] */

void FUN_1043ff920(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCPreviewToolbarItemProviderScope/PreviewToolbarItemPayloadWrapper.swift",0x48,2,0x4b,
             0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043ff968);
  (*pcVar1)();
}



/* Entry: 1043ff968; end: 1043ff987; -[SCPreviewToolbarItemPayload hash] */

void FUN_1043ff968(void)

{
  FUN_1043ff430();
  return;
}



/* Entry: 1043ff988; end: 1043ffa07; -[SCPreviewToolbarItemPayload isEqual:] */

uint FUN_1043ff988(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1043ff60c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1043ffa08; end: 1043ffa0b; -[SCPreviewToolbarItemPayload copyWithZone:] */

void FUN_1043ffa08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1043ffa0c; end: 1043ffa23; +[SCPreviewToolbarItemPayload ctLensWithState:] */

void FUN_1043ffa0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1043fffdc(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043ffa24; end: 1043ffa37; +[SCPreviewToolbarItemPayload imageTimerWithValue:] */

void FUN_1043ffa24(void)

{
  FUN_1044000a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043ffa38; end: 1043ffa4f; +[SCPreviewToolbarItemPayload videoTimerWithState:] */

void FUN_1043ffa38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_104400174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043ffa50; end: 1043ffa67; +[SCPreviewToolbarItemPayload audioWithIsMuted:] */

void FUN_1043ffa50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010440023c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043ffa68; end: 1043ffa7f; +[SCPreviewToolbarItemPayload plusSnapModeWithMode:] */

void FUN_1043ffa68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000104400304(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043ffa80; end: 1043ffa97; +[SCPreviewToolbarItemPayload filterStackingWithState:] */

void FUN_1043ffa80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001044003d0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043ffa98; end: 1043ffbe3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ffa98(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,code *param_7,undefined8 param_8,code *param_9,
                  undefined4 param_10,undefined4 param_11,code *param_12)

{
  byte bVar1;
  code *pcVar2;
  long unaff_x20;
  
  bVar1 = *(byte *)(unaff_x20 + _DAT_1130770f8);
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113077100) + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1043ffbd0);
        (*pcVar2)();
      }
      (*param_1)(*(undefined8 *)(unaff_x20 + _DAT_113077100));
    }
    else if (bVar1 == 1) {
      if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113077108) + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1043ffbd8);
        (*pcVar2)();
      }
      (*param_3)(*(undefined8 *)(unaff_x20 + _DAT_113077108));
    }
    else {
      if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113077110) + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1043ffbe0);
        (*pcVar2)();
      }
      (*param_5)(*(undefined8 *)(unaff_x20 + _DAT_113077110));
    }
  }
  else if (bVar1 == 3) {
    if (*(byte *)(unaff_x20 + _DAT_113077118) == 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1043ffbd4);
      (*pcVar2)();
    }
    (*param_7)(*(byte *)(unaff_x20 + _DAT_113077118) & 1);
  }
  else if (bVar1 == 4) {
    if (*(char *)((undefined4 *)(unaff_x20 + _DAT_113077120) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1043ffbdc);
      (*pcVar2)();
    }
    (*param_9)(*(undefined4 *)(unaff_x20 + _DAT_113077120));
  }
  else {
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113077128) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1043ffbe4);
      (*pcVar2)();
    }
    (*param_12)(*(undefined8 *)(unaff_x20 + _DAT_113077128));
  }
  return;
}



/* Entry: 1043ffbe4; end: 1043ffc7f; -[SCPreviewToolbarItemPayload matchCtLens:imageTimer:videoTimer:audio:plusSnapMode:filterStacking:] */

void FUN_1043ffbe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
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
  
  uStack_d0 = param_8;
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_1043ffa98(FUN_104400664,auStack_40,0x104400674,auStack_60,0x1044006a4,auStack_80,0x104400680,
                auStack_a0,0x104400694,auStack_c0,0x1044006a8,auStack_e0);
  _objc_release(param_1);
  return;
}



/* Entry: 1043ffc80; end: 1043ffcb3;  */

void FUN_1043ffc80(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043ffcb4; end: 1043ffebb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ffcb4(long param_1,byte param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined1 uVar4;
  long *plVar5;
  long lVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  byte bVar9;
  byte bVar10;
  undefined1 uVar11;
  undefined4 uStack_dc;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long alStack_c0 [2];
  long alStack_b0 [2];
  long alStack_a0 [2];
  long alStack_90 [2];
  long alStack_80 [2];
  long alStack_70 [2];
  
  if (param_2 < 3) {
    bVar9 = param_2;
    if (param_2 == 0) {
      plVar5 = alStack_c0;
      bVar10 = 2;
      lStack_c8 = param_1;
LAB_1043ffd94:
      lStack_d8 = 0;
      uVar8 = 1;
LAB_1043ffdbc:
      uStack_dc = 0;
      uVar4 = 1;
      goto LAB_1043ffdc0;
    }
    if (param_2 != 1) {
      lStack_c8 = 0;
      uVar8 = 0;
      plVar5 = alStack_a0;
      bVar10 = 2;
      bVar9 = 1;
      lStack_d8 = param_1;
      goto LAB_1043ffdbc;
    }
    lStack_c8 = 0;
    uVar7 = 0;
    lStack_d8 = 0;
    uStack_dc = 0;
    plVar5 = alStack_b0;
    bVar10 = 2;
    uVar4 = 1;
    uVar8 = 1;
    lStack_d0 = param_1;
  }
  else {
    uStack_dc = (undefined4)param_1;
    if (param_2 == 3) {
      lStack_c8 = 0;
      bVar10 = (byte)param_1 & 1;
      plVar5 = alStack_90;
      bVar9 = 1;
      goto LAB_1043ffd94;
    }
    if (param_2 != 4) {
      lStack_d0 = 0;
      lStack_c8 = 0;
      lStack_d8 = 0;
      uStack_dc = 0;
      uVar11 = 0;
      plVar5 = alStack_70;
      bVar10 = 2;
      bVar9 = 1;
      uVar7 = 1;
      uVar8 = 1;
      uVar4 = 1;
      lVar6 = param_1;
      goto LAB_1043ffdc8;
    }
    lStack_c8 = 0;
    lStack_d8 = 0;
    uVar4 = 0;
    plVar5 = alStack_80;
    bVar10 = 2;
    bVar9 = 1;
    uVar8 = 1;
LAB_1043ffdc0:
    lStack_d0 = 0;
    uVar7 = 1;
  }
  uVar11 = 1;
  lVar6 = 0;
LAB_1043ffdc8:
  FUN_10440049c();
  lVar3 = param_1;
  _objc_allocWithZone();
  *(byte *)(lVar3 + _DAT_1130770f8) = param_2;
  plVar1 = (long *)(lVar3 + _DAT_113077100);
  *plVar1 = lStack_c8;
  *(byte *)(plVar1 + 1) = bVar9;
  plVar1 = (long *)(lVar3 + _DAT_113077108);
  *plVar1 = lStack_d0;
  *(undefined1 *)(plVar1 + 1) = uVar7;
  plVar1 = (long *)(lVar3 + _DAT_113077110);
  *plVar1 = lStack_d8;
  *(undefined1 *)(plVar1 + 1) = uVar8;
  *(byte *)(lVar3 + _DAT_113077118) = bVar10;
  puVar2 = (undefined4 *)(lVar3 + _DAT_113077120);
  *puVar2 = uStack_dc;
  *(undefined1 *)(puVar2 + 1) = uVar4;
  plVar1 = (long *)(lVar3 + _DAT_113077128);
  *plVar1 = lVar6;
  *(undefined1 *)(plVar1 + 1) = uVar11;
  *plVar5 = lVar3;
  plVar5[1] = param_1;
  _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043ffebc; end: 1043fffcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1043ffebc(long param_1)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  bVar1 = *(byte *)(param_1 + _DAT_1130770f8);
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      puVar4 = (ulong *)(param_1 + _DAT_113077100);
      if ((char)puVar4[1] == '\x01') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1043fff50);
        (*pcVar3)();
      }
    }
    else if (bVar1 == 1) {
      puVar4 = (ulong *)(param_1 + _DAT_113077108);
      if ((char)puVar4[1] == '\x01') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1043fff04);
        (*pcVar3)();
      }
    }
    else {
      puVar4 = (ulong *)(param_1 + _DAT_113077110);
      if ((char)puVar4[1] == '\x01') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1043fff8c);
        (*pcVar3)();
      }
    }
LAB_1043fffa4:
    uVar5 = *puVar4;
  }
  else {
    if (bVar1 == 3) {
      bVar2 = *(byte *)(param_1 + _DAT_113077118);
      if (bVar2 == 2) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1043fffc4);
        (*pcVar3)();
      }
      _objc_release();
      uVar5 = (ulong)bVar2 & 1;
      goto LAB_1043fffac;
    }
    if (bVar1 != 4) {
      puVar4 = (ulong *)(param_1 + _DAT_113077128);
      if ((char)puVar4[1] == '\x01') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1043fffcc);
        (*pcVar3)();
      }
      goto LAB_1043fffa4;
    }
    if ((char)((uint *)(param_1 + _DAT_113077120))[1] == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1043fffc8);
      (*pcVar3)();
    }
    uVar5 = (ulong)*(uint *)(param_1 + _DAT_113077120);
  }
  _objc_release();
LAB_1043fffac:
  auVar6[8] = bVar1;
  auVar6._0_8_ = uVar5;
  auVar6._9_7_ = 0;
  return auVar6;
}



/* Entry: 1043fffcc; end: 1043fffdb;  */

ulong FUN_1043fffcc(ulong param_1)

{
  if (5 < param_1) {
    param_1 = 6;
  }
  return param_1;
}



/* Entry: 1043fffdc; end: 1044000a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fffdc(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  long lStack_30;
  long lStack_28;
  
  lVar4 = param_1;
  FUN_10440049c();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_1130770f8) = 0;
  plVar1 = (long *)(lVar5 + _DAT_113077100);
  *plVar1 = param_1;
  *(undefined1 *)(plVar1 + 1) = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113077108);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113077110);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  *(undefined1 *)(lVar5 + _DAT_113077118) = 2;
  puVar3 = (undefined4 *)(lVar5 + _DAT_113077120);
  *puVar3 = 0;
  *(undefined1 *)(puVar3 + 1) = 1;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113077128);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  lStack_30 = lVar5;
  lStack_28 = lVar4;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044000a4; end: 104400173;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044000a4(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  FUN_10440049c();
  lVar3 = param_2;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_1130770f8) = 1;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113077100);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113077108);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113077110);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar3 + _DAT_113077118) = 2;
  puVar2 = (undefined4 *)(lVar3 + _DAT_113077120);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113077128);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_40 = lVar3;
  lStack_38 = param_2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104400174; end: 10440049b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104400174(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  long lStack_30;
  long lStack_28;
  
  lVar4 = param_1;
  FUN_10440049c();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_1130770f8) = 2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113077100);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113077108);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  plVar2 = (long *)(lVar5 + _DAT_113077110);
  *plVar2 = param_1;
  *(undefined1 *)(plVar2 + 1) = 0;
  *(undefined1 *)(lVar5 + _DAT_113077118) = 2;
  puVar3 = (undefined4 *)(lVar5 + _DAT_113077120);
  *puVar3 = 0;
  *(undefined1 *)(puVar3 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113077128);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar5;
  lStack_28 = lVar4;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10440049c; end: 1044004bb;  */

void FUN_10440049c(void)

{
  _objc_opt_self(&PTR_PTR_1129aec90);
  return;
}



/* Entry: 1044004bc; end: 104400623;  */

int FUN_1044004bc(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfa < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 5) {
      iVar2 = 4;
    }
    if (param_2 + 5 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104400538;
        goto LAB_10440051c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10440051c:
      return ((uint)*param_1 | uVar1 << 8) - 5;
    }
  }
LAB_104400538:
  iVar2 = *param_1 - 6;
  if (*param_1 < 6) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104400624; end: 104400663;  */

void FUN_104400624(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077158 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf8c24;
  _swift_getWitnessTable(&UNK_10dcf8c24,&UNK_1107683b8);
  puRam0000000113077158 = puVar1;
  return;
}



/* Entry: 104400664; end: 1044006ab;  */

void FUN_104400664(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000104400670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 1044006ac; end: 1044006f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044006ac(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113077160) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044006f8; end: 10440074f; -[_TtC23SnapEditorTweakServices23SnapEditorTweakServices initWithTweaks:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044006f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113077160) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _swift_unknownObjectRetain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 104400750; end: 1044007af; -[_TtC23SnapEditorTweakServices23SnapEditorTweakServices init] */

void FUN_104400750(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SnapEditorTweakServices.SnapEditorTweakServices",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10440077c);
  (*pcVar1)();
}



/* Entry: 1044007b0; end: 1044007d7; -[_TtC23SnapEditorTweakServices23SnapEditorTweakServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044007b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_113077160));
  return;
}



/* Entry: 1044007d8; end: 104400817;  */

void FUN_1044007d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077190 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf8cf0;
  _swift_getWitnessTable(&UNK_10dcf8cf0,&UNK_1107684d8);
  puRam0000000113077190 = puVar1;
  return;
}



/* Entry: 104400818; end: 1044008c3;  */

void FUN_104400818(void)

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



/* Entry: 1044008c4; end: 1044008fb;  */

void FUN_1044008c4(ulong *param_1,ulong *param_2)

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



/* Entry: 1044008fc; end: 1044009d3;  */

void FUN_1044008fc(void)

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



/* Entry: 1044009d4; end: 1044009f3;  */

void FUN_1044009d4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1044009f4; end: 104400a73; -[_TtC24SnapEditorActionBarUtils31SnapEditorActionBarPluginConfig pluginConfigs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044009f4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113077198);
  func_0x000100f99ab0(0);
  FUN_1044011d0(0x112d50630,&UNK_10d916e60);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104400a74; end: 104400ac3; -[_TtC24SnapEditorActionBarUtils31SnapEditorActionBarPluginConfig blocklist] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104400a74(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130771a0);
  func_0x000100f99ab0(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104400ac4; end: 104400b7f; -[_TtC24SnapEditorActionBarUtils31SnapEditorActionBarPluginConfig initWithPluginConfigs:blocklist:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104400ac4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  _swift_getObjectType();
  uVar2 = 0;
  func_0x000100f99ab0(0);
  uVar3 = 0x112d50630;
  FUN_1044011d0(0x112d50630,&UNK_10d916e60);
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_3,uVar2,PTR___syXlN_11034f1a0 + 8,uVar3);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_4,uVar2);
  *(undefined8 *)(param_1 + _DAT_113077198) = param_3;
  *(undefined8 *)(param_1 + _DAT_1130771a0) = param_4;
  lStack_50 = param_1;
  lStack_48 = lVar1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104400b80; end: 104400b83;  */

void FUN_104400b80(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104400b84; end: 104400bbb; -[_TtC24SnapEditorActionBarUtils31SnapEditorActionBarPluginConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104400b84(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113077198));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130771a0));
  return;
}



/* Entry: 104400bbc; end: 104400bd3; +[_TtC24SnapEditorActionBarUtils32SnapEditorActionBarConfiguration pluginConfigurationFor:] */

void FUN_104400bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_104400c54(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104400bd4; end: 104400c0f; -[_TtC24SnapEditorActionBarUtils32SnapEditorActionBarConfiguration init] */

void FUN_104400bd4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104400c10; end: 104400c43;  */

void FUN_104400c10(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104400c44; end: 104400c53;  */

undefined1  [16] FUN_104400c44(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 4) {
    uVar1 = param_1;
  }
  auVar2[8] = 3 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 104400c54; end: 10440113b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104400c54(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined *puVar11;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_e8;
  long lStack_e0;
  long lStack_98;
  long lStack_90;
  long lStack_58;
  
  if (param_1 < 2) {
    if (param_1 == 0) {
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000100faca28();
      lVar6 = 0x112d515b8;
      func_0x0001000285a8(0x112d515b8,&UNK_10d918260);
      _swift_allocObject();
      *(undefined8 *)(lVar6 + 0x18) = 2;
      *(undefined8 *)(lVar6 + 0x10) = 1;
      puVar11 = PTR_PTR_1133bb590;
      *(undefined **)(lVar6 + 0x20) = PTR_PTR_1133bb590;
      lVar7 = lVar6;
      FUN_104401190();
      lVar8 = lVar7;
      _objc_allocWithZone();
      *(undefined **)(lVar8 + _DAT_113077198) = puVar5;
      *(long *)(lVar8 + _DAT_1130771a0) = lVar6;
      puVar5 = PTR_s_init_1125d9248;
      lStack_138 = lVar8;
      lStack_130 = lVar7;
      _objc_retain(puVar11);
      _objc_msgSendSuper2(&lStack_138,puVar5);
    }
    else {
      if (param_1 != 1) {
LAB_104401118:
        lStack_58 = param_1;
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (&UNK_1107685d0,&lStack_58,&UNK_1107685d0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10440113c);
        (*pcVar1)();
      }
      puVar2 = PTR_PTR_1126c81f0;
      _objc_allocWithZone();
      func_0x00010bfee200();
      func_0x00010c1695c0();
      func_0x00010c2203c0(puVar2);
      puVar3 = PTR_PTR_1126c81c0;
      _objc_allocWithZone();
      func_0x00010bfee200();
      lVar6 = 0x112d70c98;
      func_0x0001000285a8(0x112d70c98,&UNK_10d931cc0);
      _swift_initStackObject();
      *(undefined8 *)(lVar6 + 0x18) = 4;
      *(undefined8 *)(lVar6 + 0x10) = 2;
      *(undefined8 *)(lVar6 + 0x20) = PTR_PTR_1133bb590;
      puVar5 = PTR_PTR_1133bb578;
      *(undefined **)(lVar6 + 0x28) = puVar2;
      *(undefined **)(lVar6 + 0x30) = puVar5;
      *(undefined **)(lVar6 + 0x38) = puVar3;
      _objc_retain();
      _objc_retain(puVar2);
      _objc_retain(puVar5);
      _objc_retain(puVar3);
      lVar7 = lVar6;
      func_0x000100faca28();
      _swift_setDeallocating(lVar6);
      uVar4 = 0x112d70ca0;
      func_0x0001000285a8(0x112d70ca0,&UNK_10dc27520);
      _swift_arrayDestroy((undefined8 *)(lVar6 + 0x20),2,uVar4);
      lVar6 = 0x112d515b8;
      func_0x0001000285a8(0x112d515b8,&UNK_10d918260);
      _swift_allocObject();
      *(undefined8 *)(lVar6 + 0x18) = 2;
      *(undefined8 *)(lVar6 + 0x10) = 1;
      puVar11 = PTR_PTR_1133bb5a0;
      *(undefined **)(lVar6 + 0x20) = PTR_PTR_1133bb5a0;
      lVar8 = lVar6;
      FUN_104401190();
      lVar9 = lVar8;
      _objc_allocWithZone();
      *(long *)(lVar9 + _DAT_113077198) = lVar7;
      *(long *)(lVar9 + _DAT_1130771a0) = lVar6;
      puVar5 = PTR_s_init_1125d9248;
      lStack_e8 = lVar9;
      lStack_e0 = lVar8;
      _objc_retain(puVar11);
      _objc_msgSendSuper2(&lStack_e8,puVar5);
      _objc_release(puVar2);
      _objc_release(puVar3);
    }
  }
  else {
    puVar5 = PTR_PTR_1126c81f0;
    if (param_1 == 2) {
      _objc_allocWithZone();
      func_0x00010bfee200();
      func_0x00010c1695c0();
      func_0x00010c2203c0(puVar5);
      lVar6 = 0x112d70c98;
      func_0x0001000285a8(0x112d70c98,&UNK_10d931cc0);
      _swift_initStackObject();
      *(undefined8 *)(lVar6 + 0x18) = 2;
      *(undefined8 *)(lVar6 + 0x10) = 1;
      *(undefined8 *)(lVar6 + 0x20) = PTR_PTR_1133bb590;
      *(undefined **)(lVar6 + 0x28) = puVar5;
      _objc_retain();
      _objc_retain(puVar5);
      lVar7 = lVar6;
      func_0x000100faca28();
      _swift_setDeallocating(lVar6);
      func_0x0001012e2ed8((undefined8 *)(lVar6 + 0x20));
      lVar6 = 0x112d515b8;
      func_0x0001000285a8(0x112d515b8,&UNK_10d918260);
      _swift_allocObject();
      *(undefined8 *)(lVar6 + 0x18) = 2;
      *(undefined8 *)(lVar6 + 0x10) = 1;
      puVar2 = PTR_PTR_1133bb5a0;
      *(undefined **)(lVar6 + 0x20) = PTR_PTR_1133bb5a0;
      lVar8 = lVar6;
      FUN_104401190();
      lVar9 = lVar8;
      _objc_allocWithZone();
      *(long *)(lVar9 + _DAT_113077198) = lVar7;
      *(long *)(lVar9 + _DAT_1130771a0) = lVar6;
      puVar11 = PTR_s_init_1125d9248;
      lStack_128 = lVar9;
      lStack_120 = lVar8;
      _objc_retain(puVar2);
      plVar10 = &lStack_128;
    }
    else {
      if (param_1 != 3) goto LAB_104401118;
      _objc_allocWithZone();
      func_0x00010bfee200();
      func_0x00010c1695c0();
      func_0x00010c2203c0(puVar5);
      lVar6 = 0x112d70c98;
      func_0x0001000285a8(0x112d70c98,&UNK_10d931cc0);
      _swift_initStackObject();
      *(undefined8 *)(lVar6 + 0x18) = 2;
      *(undefined8 *)(lVar6 + 0x10) = 1;
      *(undefined8 *)(lVar6 + 0x20) = PTR_PTR_1133bb590;
      *(undefined **)(lVar6 + 0x28) = puVar5;
      _objc_retain();
      _objc_retain(puVar5);
      lVar7 = lVar6;
      func_0x000100faca28();
      _swift_setDeallocating(lVar6);
      func_0x0001012e2ed8((undefined8 *)(lVar6 + 0x20));
      lVar6 = 0x112d515b8;
      func_0x0001000285a8(0x112d515b8,&UNK_10d918260);
      _swift_allocObject();
      *(undefined8 *)(lVar6 + 0x18) = 2;
      *(undefined8 *)(lVar6 + 0x10) = 1;
      puVar2 = PTR_PTR_1133bb5a0;
      *(undefined **)(lVar6 + 0x20) = PTR_PTR_1133bb5a0;
      lVar8 = lVar6;
      FUN_104401190();
      lVar9 = lVar8;
      _objc_allocWithZone();
      *(long *)(lVar9 + _DAT_113077198) = lVar7;
      *(long *)(lVar9 + _DAT_1130771a0) = lVar6;
      puVar11 = PTR_s_init_1125d9248;
      lStack_98 = lVar9;
      lStack_90 = lVar8;
      _objc_retain(puVar2);
      plVar10 = &lStack_98;
    }
    _objc_msgSendSuper2(plVar10,puVar11);
    _objc_release(puVar5);
  }
  return;
}



/* Entry: 10440113c; end: 10440113f;  */

void FUN_10440113c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130771a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf8e28;
  _swift_getWitnessTable(&UNK_10dcf8e28,&UNK_1107685d0);
  puRam00000001130771a8 = puVar1;
  return;
}



/* Entry: 104401140; end: 10440117f;  */

void FUN_104401140(void)

{
  undefined *puVar1;
  
  if (puRam00000001130771a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf8e28;
  _swift_getWitnessTable(&UNK_10dcf8e28,&UNK_1107685d0);
  puRam00000001130771a8 = puVar1;
  return;
}



/* Entry: 104401180; end: 10440118f;  */

undefined1  [16] FUN_104401180(void)

{
  return ZEXT816(0x1107685d0);
}



/* Entry: 104401190; end: 1044011cf;  */

void FUN_104401190(void)

{
  _objc_opt_self(&PTR_PTR_1129aee40);
  return;
}



/* Entry: 1044011d0; end: 10440120f;  */

void FUN_1044011d0(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    func_0x000100f99ab0(0xff);
    _swift_getWitnessTable(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 104401210; end: 104401213;  */

void FUN_104401210(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104401214; end: 104401223; -[_TtC16SCTopicSelection24SCTopicSelectionServices lazyTopicTrackerCreator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104401214(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113077200));
  return;
}



/* Entry: 104401224; end: 104401233; -[_TtC16SCTopicSelection24SCTopicSelectionServices lazyTopicCarouselViewProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104401224(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113077208));
  return;
}



/* Entry: 104401234; end: 104401243; -[_TtC16SCTopicSelection24SCTopicSelectionServices lazySuggestedTopicsRequester] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104401234(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113077210));
  return;
}



/* Entry: 104401244; end: 104401253; -[_TtC16SCTopicSelection24SCTopicSelectionServices lazyTopicSendToDelegateCreator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104401244(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113077218));
  return;
}


