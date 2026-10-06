/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1038da190; end: 1038da1a3;  */

void FUN_1038da190(void)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    FUN_1038d8af0(1,uVar1,unaff_x20 + 0x20,uVar3);
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 1038da1a4; end: 1038da1ef;  */

void FUN_1038da1a4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1038da1f0; end: 1038da253;  */

void FUN_1038da1f0(void)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    FUN_1038d8af0(1,uVar1,unaff_x20 + 0x20,uVar3);
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 1038da254; end: 1038da2e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038da254(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = &UNK_1106a7468;
  func_0x000107c613fc(&UNK_1106a7468,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  lVar2 = 0;
  func_0x0001038d9cac();
  func_0x000107c613fc();
  *(code **)(lVar2 + 0x10) = FUN_1038da2e8;
  *(undefined **)(lVar2 + 0x18) = puVar1;
  *(long *)(unaff_x20 + _DAT_112fac8d0) = lVar2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038da2e8; end: 1038da303;  */

void FUN_1038da2e8(void)

{
  long unaff_x20;
  
  func_0x000107c5c734(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1038da304; end: 1038da3a3; -[SCMemoriesFeaturedStoryQualityReporter initWithReportCreator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038da304(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  puVar2 = &UNK_1106a7490;
  func_0x000107c613fc(&UNK_1106a7490,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  lVar3 = 0;
  func_0x0001038d9cac();
  func_0x000107c613fc();
  *(code **)(lVar3 + 0x10) = FUN_1038da6a8;
  *(undefined **)(lVar3 + 0x18) = puVar2;
  *(long *)(param_1 + _DAT_112fac8d0) = lVar3;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar2);
  return;
}



/* Entry: 1038da3a4; end: 1038da4eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038da3a4(ulong param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,long param_8,long param_9)

{
  bool bVar1;
  ulong uVar2;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 uStack_68;
  
  if (param_9 != 0 && param_3 != 0) {
    uVar2 = param_2 & 0xffffffffffff;
    if ((param_3 & 0x2000000000000000) != 0) {
      uVar2 = param_3 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      bVar1 = param_8 == 0;
      if (bVar1) {
        func_0x000107c61174(param_9);
        func_0x000107c61434(param_3);
        param_8 = 0;
      }
      else {
        func_0x000107c61174(param_9);
        func_0x000107c61434(param_3);
        func_0x000107c49820();
      }
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_a0 = 0;
      uStack_88 = 1;
      uStack_c0 = param_2;
      uStack_b8 = param_3;
      uStack_b0 = param_4;
      uStack_a8 = param_5;
      uStack_80 = param_6;
      uStack_78 = param_7;
      lStack_70 = param_8;
      uStack_68 = bVar1;
      func_0x000107c61434(param_7);
      func_0x000107c61434(param_5);
      if ((param_1 & 1) == 0) {
        func_0x0001038d8f34(&uStack_c0,param_9);
        func_0x000107c61170(param_9);
        func_0x000102776958(&uStack_c0);
      }
      else {
        FUN_1038d8af0(0,4,&uStack_c0,param_9);
        func_0x000102776958(&uStack_c0);
        func_0x000107c61170(param_9);
      }
    }
  }
  return;
}



/* Entry: 1038da4ec; end: 1038da617; -[SCMemoriesFeaturedStoryQualityReporter beginWithIsGoodMatch:storyID:storyTitle:snapID:snapIndexInStory:presentingViewController:] */

/* WARNING: Possible PIC construction at 0x0001038da5e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038da5ec) */

void FUN_1038da4ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_4 == 0) {
    param_4 = 0;
    uVar2 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
    uVar2 = param_2;
  }
  if (param_5 == 0) {
    param_5 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
    uVar1 = param_2;
  }
  if (param_6 == 0) {
    param_6 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_6);
  }
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  FUN_1038da3a4(param_3,param_4,uVar2,param_5,uVar1,param_6,param_2,param_7,param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1038da618; end: 1038da677; -[SCMemoriesFeaturedStoryQualityReporter init] */

void FUN_1038da618(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesFeaturedStoryQuality.FeaturedStoryQualityReporterObjC",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038da644);
  (*pcVar1)();
}



/* Entry: 1038da678; end: 1038da687; -[SCMemoriesFeaturedStoryQualityReporter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038da678(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fac8d0));
  return;
}



/* Entry: 1038da688; end: 1038da6a7;  */

void FUN_1038da688(void)

{
  func_0x000107c61168(&PTR_PTR_1128fd848);
  return;
}



/* Entry: 1038da6a8; end: 1038da6b7;  */

void FUN_1038da6a8(void)

{
  long unaff_x20;
  
  func_0x000107c5c734(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1038da6b8; end: 1038da6e3; +[SCMemoriesFeaturedStoryQualityRowTitles goodMatch] */

void FUN_1038da6b8(void)

{
  func_0x000107c5fadc(0x74614d20646f6f47,0xea00000000006863);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038da6e4; end: 1038da6ef;  */

undefined * FUN_1038da6e4(void)

{
  return &UNK_10dc1eee0;
}



/* Entry: 1038da6f0; end: 1038da71b; +[SCMemoriesFeaturedStoryQualityRowTitles badMatch] */

void FUN_1038da6f0(void)

{
  func_0x000107c5fadc(0x6374614d20646142,0xe900000000000068);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038da71c; end: 1038da727;  */

undefined * FUN_1038da71c(void)

{
  return &UNK_1106a74a8;
}



/* Entry: 1038da728; end: 1038da753; +[SCMemoriesFeaturedStoryQualityRowTitles innovationProgramOptIn] */

void FUN_1038da728(void)

{
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f174cb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038da754; end: 1038da78f; -[SCMemoriesFeaturedStoryQualityRowTitles init] */

void FUN_1038da754(undefined8 param_1)

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



/* Entry: 1038da790; end: 1038da7c3;  */

void FUN_1038da790(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1038da7c4; end: 1038da7c7; -[SCMemoriesFeaturedStoryQualityRowTitles .cxx_destruct] */

void FUN_1038da7c4(void)

{
  return;
}



/* Entry: 1038da7c8; end: 1038da7e7;  */

void FUN_1038da7c8(void)

{
  func_0x000107c61168(&PTR_PTR_1128fd908);
  return;
}



/* Entry: 1038da7e8; end: 1038da7f7; -[_TtC42SCShakeToReportSimpleReportCreatorServices40ShakeToReportSimpleReportCreatorServices simpleReportCreator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038da7e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fac928));
  return;
}



/* Entry: 1038da7f8; end: 1038da88f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038da7f8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fac928) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038da890; end: 1038da8ef; -[_TtC42SCShakeToReportSimpleReportCreatorServices40ShakeToReportSimpleReportCreatorServices init] */

void FUN_1038da890(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCShakeToReportSimpleReportCreatorServices.ShakeToReportSimpleReportCreatorServices"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038da8bc);
  (*pcVar1)();
}



/* Entry: 1038da8f0; end: 1038da913; -[_TtC42SCShakeToReportSimpleReportCreatorServices40ShakeToReportSimpleReportCreatorServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038da8f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fac928));
  return;
}



/* Entry: 1038da914; end: 1038da9bf;  */

void FUN_1038da914(void)

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



/* Entry: 1038da9c0; end: 1038da9e7;  */

void FUN_1038da9c0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 1038da9e8; end: 1038daa47;  */

void FUN_1038da9e8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x000108dfdbcc();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar1 = 0;
    param_2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
  }
  lRam000000011380bbb8 = lVar1;
  uRam000000011380bbc0 = param_2;
  return;
}



/* Entry: 1038daa48; end: 1038dab13; -[_TtC27MemoriesFullScreenLoadingUI39MemoriesFullScreenLoadingViewController initWithDelegate:title:animatedSubtitles:presentationStyle:] */

undefined8
FUN_1038daa48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_4);
  func_0x000107c5fc54(param_5,PTR___sSSN_11034da80);
  FUN_1038dabac();
  func_0x000107c610f8();
  func_0x000107c615f0(param_3);
  FUN_1038dabcc();
  uVar1 = param_1;
  func_0x000107c614f0(param_1);
  func_0x000107c61464(param_1,uVar1,0x88,7);
  return param_3;
}



/* Entry: 1038dab14; end: 1038dabab;  */

void FUN_1038dab14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  func_0x000107c610f8();
  FUN_1038dabcc(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}



/* Entry: 1038dabac; end: 1038dabcb;  */

void FUN_1038dabac(void)

{
  func_0x000107c61168(&PTR_PTR_1128fda78);
  return;
}



/* Entry: 1038dabcc; end: 1038db793;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1038dabcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined *param_7,long param_8,long param_9)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined **ppuVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long unaff_x20;
  undefined8 uVar19;
  long lVar20;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  
  lVar20 = _DAT_112fac958;
  func_0x000107c61614(unaff_x20 + _DAT_112fac958,0);
  lVar10 = _DAT_112fac960;
  *(undefined8 *)(unaff_x20 + _DAT_112fac960) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fac968);
  *puVar1 = 0;
  puVar1[1] = 0xe000000000000000;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112fac970);
  *puVar2 = 0;
  puVar2[1] = 0xe000000000000000;
  lVar16 = _DAT_112fac978;
  puVar4 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar16) = puVar4;
  lVar16 = _DAT_112fac980;
  puVar4 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar16) = puVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112fac988) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fac990) = 0xffffffffffffffff;
  func_0x000107c61604(unaff_x20 + lVar20,param_1);
  puVar4 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + _DAT_112fac998) = puVar4;
  uVar19 = puVar1[1];
  *puVar1 = param_2;
  puVar1[1] = param_3;
  func_0x000107c61434();
  func_0x000107c6142c(uVar19);
  if (param_5 == 0) {
    uVar19 = 0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126aea58;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar19 = param_4;
  }
  uVar18 = *(undefined8 *)(unaff_x20 + lVar10);
  *(undefined **)(unaff_x20 + lVar10) = puVar4;
  func_0x000107c61170(uVar18);
  uVar18 = puVar2[1];
  lVar20 = -0x2000000000000000;
  if (param_5 != 0) {
    lVar20 = param_5;
  }
  *puVar2 = uVar19;
  puVar2[1] = lVar20;
  func_0x000107c61434(param_5);
  func_0x000107c6142c(uVar18);
  puVar4 = PTR_PTR_1126d8088;
  func_0x000107c610f8();
  func_0x000107c469a4(0,0,0,0);
  *(undefined **)(unaff_x20 + _DAT_112fac9a0) = puVar4;
  puVar4 = PTR_PTR_1126aec40;
  func_0x000107c61168();
  puVar5 = puVar4;
  func_0x000107c3ee98();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + _DAT_112fac9a8) = puVar5;
  puVar5 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + _DAT_112fac9b0) = puVar5;
  func_0x000107c3ee98();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + _DAT_112fac9b8) = puVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112fac9c0) = param_6;
  FUN_1038dabac();
  puVar6 = &stack0xffffffffffffff80;
  func_0x000107c61154(puVar6,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (param_7 == (undefined *)0x1) {
    puVar12 = puVar6;
    func_0x000107c61174();
    puVar7 = puVar12;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (puVar7 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1038db768);
      (*pcVar3)();
    }
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168();
    puVar5 = puVar4;
    func_0x000107c3ea80();
    func_0x000107c61180();
    puVar8 = puVar5;
    func_0x000107c3fdd0(0x3fe999999999999a);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c52b50(puVar7);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar8);
    func_0x000107c5677c(puVar12);
    puVar5 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
    func_0x000107c610f8();
    func_0x000107c453e4();
    lVar20 = 0x112d38dc0;
    func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
    func_0x000107c613fc();
    *(undefined8 *)(lVar20 + 0x18) = 4;
    *(undefined8 *)(lVar20 + 0x10) = 2;
    puVar8 = puVar4;
    func_0x000107c5af88();
    func_0x000107c61180();
    puVar9 = puVar8;
    func_0x000107c3ab24();
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    uVar19 = 0;
    func_0x000100ef8bfc();
    *(undefined8 *)(lVar20 + 0x38) = uVar19;
    *(undefined **)(lVar20 + 0x20) = puVar9;
    func_0x000107c5af88();
    func_0x000107c61180();
    puVar8 = puVar4;
    func_0x000107c3ab24();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    *(undefined8 *)(lVar20 + 0x58) = uVar19;
    *(undefined **)(lVar20 + 0x40) = puVar8;
    lVar10 = lVar20;
    func_0x000107c5fc48(lVar20,PTR___sypN_11034f1a8 + 8);
    func_0x000107c61574(lVar20);
    func_0x000107c535a0(puVar5);
    func_0x000107c61170(lVar10);
    lVar20 = 0x112d38c88;
    FUN_1038dcce8(0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x112d4a820,&UNK_10d910f30);
    func_0x000107c613fc();
    *(undefined8 *)(lVar20 + 0x18) = 5;
    *(undefined8 *)(lVar20 + 0x10) = 2;
    uVar18 = 0;
    func_0x0001038dcea0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar19 = uVar18;
    func_0x000107c60108(0);
    *(undefined8 *)(lVar20 + 0x20) = uVar19;
    func_0x000107c60108(0x3fe8000000000000);
    *(undefined8 *)(lVar20 + 0x28) = uVar19;
    lVar10 = lVar20;
    func_0x000107c5fc48(lVar20,uVar18);
    func_0x000107c61574(lVar20);
    func_0x000107c56084(puVar5);
    func_0x000107c61170(lVar10);
    func_0x000107c597c4(0x3fe0000000000000,0,puVar5);
    func_0x000107c54598(0x3fe0000000000000,0x3ff0000000000000,puVar5);
    puVar7 = puVar12;
    func_0x000107c5de64();
    func_0x000107c61180();
    func_0x000107c61170(puVar12);
    if (puVar7 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1038db770);
      (*pcVar3)();
    }
    puVar11 = puVar7;
    func_0x000107c4aba4(puVar7);
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    func_0x000107c3d894(puVar11);
    func_0x000107c61170(puVar11);
    uVar19 = *(undefined8 *)(puVar12 + _DAT_112fac988);
    *(undefined **)(puVar12 + _DAT_112fac988) = puVar5;
    func_0x000107c61170(uVar19);
    if (param_5 != 0) goto LAB_1038db140;
LAB_1038db0e0:
    func_0x000107c61174(puVar6);
  }
  else {
    if (param_7 != (undefined *)0x0) {
      puStack_b0 = param_7;
      func_0x000107c60614(&UNK_1106a76e0,&puStack_b0,&UNK_1106a76e0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1038db794);
      (*pcVar3)();
    }
    puVar12 = puVar6;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (puVar12 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1038db76c);
      (*pcVar3)();
    }
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c3ea80();
    func_0x000107c61180();
    func_0x000107c52b50(puVar12);
    func_0x000107c61170(puVar12);
    func_0x000107c61170(puVar4);
    if (param_5 == 0) goto LAB_1038db0e0;
LAB_1038db140:
    lVar20 = *(long *)(puVar6 + _DAT_112fac960);
    if (lVar20 == 0) {
      func_0x000107c61174(puVar6);
      func_0x000107c6142c(param_5);
    }
    else {
      puVar12 = puVar6;
      func_0x000107c61174();
      func_0x000107c61174(lVar20);
      func_0x000107c5a050();
      func_0x000107c5a100(lVar20);
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c61174(lVar20);
      func_0x000107c5e2ac(puVar4);
      func_0x000107c61180();
      func_0x000107c59c78(lVar20);
      func_0x000107c61170(puVar4);
      func_0x000107c59c74(lVar20);
      func_0x000107c5fadc(param_4,param_5);
      func_0x000107c6142c(param_5);
      func_0x000107c59c6c(lVar20);
      func_0x000107c61170(lVar20);
      func_0x000107c61170(param_4);
      func_0x000107c5b09c(lVar20);
      func_0x000107c3d5b4(*(undefined8 *)(puVar12 + _DAT_112fac9b0));
      func_0x000107c61170(lVar20);
    }
  }
  lVar20 = _DAT_112fac998;
  func_0x000107c5a050(*(undefined8 *)(puVar6 + _DAT_112fac998));
  func_0x000107c5a100(*(undefined8 *)(puVar6 + lVar20));
  uVar19 = *(undefined8 *)(puVar6 + lVar20);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(uVar19);
  func_0x000107c5e2ac(puVar4);
  func_0x000107c61180();
  func_0x000107c59c78(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(puVar4);
  func_0x000107c59c74(*(undefined8 *)(puVar6 + lVar20));
  uVar19 = *(undefined8 *)(puVar6 + lVar20);
  func_0x000107c61174(uVar19);
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c6142c(param_3);
  func_0x000107c59c6c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(param_2);
  func_0x000107c5b09c(*(undefined8 *)(puVar6 + lVar20));
  lVar10 = _DAT_112fac9b0;
  func_0x000107c3d5b4(*(undefined8 *)(puVar6 + _DAT_112fac9b0));
  lVar20 = _DAT_112fac9a0;
  func_0x000107c5a050(*(undefined8 *)(puVar6 + _DAT_112fac9a0));
  func_0x000107c57920(0,*(undefined8 *)(puVar6 + lVar20));
  func_0x000107c3d5b4(*(undefined8 *)(puVar6 + lVar10));
  FUN_1038dba80();
  lVar20 = _DAT_112fac9b8;
  func_0x000107c5a050(*(undefined8 *)(puVar6 + _DAT_112fac9b8));
  func_0x000107c550d8(*(undefined8 *)(puVar6 + lVar20));
  func_0x000107c52b54(*(undefined8 *)(puVar6 + lVar20));
  uVar18 = *(undefined8 *)(puVar6 + lVar20);
  func_0x000107c61174(uVar18);
  uVar13 = 0x696167615f797274;
  func_0x000107c5fadc(0x696167615f797274,0xe90000000000006e);
  uVar14 = 0;
  func_0x000107c5fe40(0);
  uVar19 = uVar13;
  func_0x000107c312f4(uVar13,uVar14);
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c59e1c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar19);
  func_0x000107c59e34(*(undefined8 *)(puVar6 + lVar20));
  puVar4 = PTR_PTR_1126b0c40;
  func_0x000107c61168();
  func_0x000107c45114(0x4034000000000000,0x4034000000000000,
                      *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18));
  func_0x000107c61180();
  if (puVar4 != (undefined *)0x0) {
    func_0x000107c55260(*(undefined8 *)(puVar6 + lVar20));
    func_0x000107c552c8(*(undefined8 *)(puVar6 + lVar20));
    func_0x000107c61170(puVar4);
  }
  uVar19 = *(undefined8 *)(puVar6 + lVar20);
  puVar4 = &UNK_1106a75f0;
  func_0x000107c613fc(&UNK_1106a75f0,0x18,7);
  *(undefined1 **)(puVar4 + 0x10) = puVar6;
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_90 = FUN_1038dcd60;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1000f6b44;
  puStack_98 = &UNK_1106a7608;
  ppuVar15 = &puStack_b0;
  puStack_88 = puVar4;
  func_0x000107c60bc4(ppuVar15);
  puVar4 = puStack_88;
  puVar12 = puVar6;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(uVar19);
  func_0x000107c61574(puVar4);
  func_0x000107c56ea0(uVar19);
  func_0x000107c60bd0(ppuVar15);
  func_0x000107c61170(uVar19);
  func_0x000107c3d5b4(*(undefined8 *)(puVar6 + lVar10));
  func_0x000107c5a050(*(undefined8 *)(puVar6 + lVar10));
  func_0x000107c52b2c(*(undefined8 *)(puVar6 + lVar10));
  func_0x000107c52610(*(undefined8 *)(puVar6 + lVar10));
  func_0x000107c59594(0x4024000000000000,*(undefined8 *)(puVar6 + lVar10));
  puVar6 = puVar12;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (puVar6 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1038db760);
    (*pcVar3)();
  }
  func_0x000107c3d89c();
  func_0x000107c61170(puVar6);
  lVar20 = _DAT_112fac9a8;
  func_0x000107c5a050(*(undefined8 *)(puVar12 + _DAT_112fac9a8));
  func_0x000107c52b54(*(undefined8 *)(puVar12 + lVar20));
  uVar19 = *(undefined8 *)(puVar12 + lVar20);
  if (param_9 == 0) {
    func_0x000107c61174(uVar19);
    lVar16 = 0x6c65636e6163;
    func_0x000107c5fadc(0x6c65636e6163,0xe600000000000000);
    lVar17 = 0;
    func_0x000107c5fe40(0);
    lVar10 = lVar16;
    param_9 = lVar17;
    func_0x000107c312f4(lVar16,lVar17);
    func_0x000107c61180();
    func_0x000107c61170(lVar16);
    func_0x000107c61170(lVar17);
    if (lVar10 == 0) goto LAB_1038db638;
    param_8 = lVar10;
    func_0x000107c5faec(lVar10);
    func_0x000107c61170(lVar10);
  }
  else {
    func_0x000107c61174(uVar19);
  }
  func_0x000107c5fadc(param_8,param_9);
  func_0x000107c6142c(param_9);
  lVar10 = param_8;
LAB_1038db638:
  func_0x000107c59e1c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(lVar10);
  func_0x000107c59e34(*(undefined8 *)(puVar12 + lVar20));
  uVar19 = *(undefined8 *)(puVar12 + lVar20);
  puVar4 = &UNK_1106a7640;
  func_0x000107c613fc(&UNK_1106a7640,0x18,7);
  *(undefined1 **)(puVar4 + 0x10) = puVar12;
  pcStack_90 = (code *)0x1038dce08;
  puStack_b0 = puVar5;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1000f6b44;
  puStack_98 = &UNK_1106a7658;
  ppuVar15 = &puStack_b0;
  puStack_88 = puVar4;
  func_0x000107c60bc4(ppuVar15);
  puVar4 = puStack_88;
  func_0x000107c61174();
  func_0x000107c61174(uVar19);
  func_0x000107c61574(puVar4);
  func_0x000107c56ea0(uVar19);
  func_0x000107c60bd0(ppuVar15);
  func_0x000107c61170(uVar19);
  puVar6 = puVar12;
  func_0x000107c5de64();
  func_0x000107c61180();
  func_0x000107c61170(puVar12);
  if (puVar6 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1038db764);
    (*pcVar3)();
  }
  func_0x000107c3d89c(puVar6);
  func_0x000107c61170(puVar12);
  func_0x000107c615e8(param_1);
  func_0x000107c61170(puVar6);
  return puVar12;
}



/* Entry: 1038db794; end: 1038db7bb; -[_TtC27MemoriesFullScreenLoadingUI39MemoriesFullScreenLoadingViewController initWithCoder:] */

void FUN_1038db794(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_1038dd03c();
  return;
}



/* Entry: 1038db7bc; end: 1038db8a3;  */

void FUN_1038db7bc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  FUN_1038dabac();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x000107c61168(PTR__OBJC_CLASS___NSTimer_1126af1b0);
  puVar2 = &UNK_1106a7690;
  func_0x000107c613fc(&UNK_1106a7690,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  uStack_50 = 0x1038dce50;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_100fef460;
  puStack_58 = &UNK_1106a76a8;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  func_0x000107c51924(0x4000000000000000,puVar1);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 1038db8a4; end: 1038db8cb; -[_TtC27MemoriesFullScreenLoadingUI39MemoriesFullScreenLoadingViewController viewDidLoad] */

void FUN_1038db8a4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1038db7bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1038db8cc; end: 1038dba57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038db8cc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  double dVar4;
  double dVar5;
  
  FUN_1038dabac();
  func_0x000107c61154(&stack0xffffffffffffff80,PTR_s_viewDidLayoutSubviews_112684cc8);
  lVar2 = *(long *)(unaff_x20 + _DAT_112fac988);
  if (lVar2 != 0) {
    func_0x000107c61174();
    lVar3 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1038dba50);
      (*pcVar1)();
    }
    func_0x000107c3ec60();
    func_0x000107c61170(lVar3);
    func_0x000107c609b0(param_1,param_2,param_3,param_4);
    lVar3 = unaff_x20;
    dVar4 = param_1;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1038dba54);
      (*pcVar1)();
    }
    func_0x000107c3ec60();
    func_0x000107c61170(lVar3);
    func_0x000107c609cc(dVar4,param_2,param_3,param_4);
    dVar5 = dVar4;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1038dba58);
      (*pcVar1)();
    }
    func_0x000107c3ec60();
    func_0x000107c61170(unaff_x20);
    func_0x000107c609b0(dVar5,param_2,param_3,param_4);
    func_0x000107c54b80(0,param_1 * 0.5,dVar4,dVar5 * 0.5,lVar2);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1038dba58; end: 1038dba7f; -[_TtC27MemoriesFullScreenLoadingUI39MemoriesFullScreenLoadingViewController viewDidLayoutSubviews] */

void FUN_1038dba58(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1038db8cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1038dba80; end: 1038dbd7f;  */

/* WARNING: Possible PIC construction at 0x0001038dbb50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038dbb9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038dbbc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038dbc74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038dbcc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038dbd1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038dbccc) */
/* WARNING: Removing unreachable block (ram,0x0001038dbc78) */
/* WARNING: Removing unreachable block (ram,0x0001038dbbcc) */
/* WARNING: Removing unreachable block (ram,0x0001038dbba0) */
/* WARNING: Removing unreachable block (ram,0x0001038dbb54) */
/* WARNING: Removing unreachable block (ram,0x0001038dbd20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038dba80(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112fac978);
  func_0x000107c5a050(uVar3,param_2,0);
  func_0x000107c58cd8(uVar3,param_2,0);
  lVar1 = _DAT_112fac980;
  func_0x000107c3d89c(uVar3,param_2,*(undefined8 *)(unaff_x20 + _DAT_112fac980));
  func_0x000107c3d5b4(*(undefined8 *)(unaff_x20 + _DAT_112fac9b0),param_2,uVar3);
  func_0x000107c5a050(*(undefined8 *)(unaff_x20 + lVar1),param_2,0);
  func_0x000107c5a100(*(undefined8 *)(unaff_x20 + lVar1),param_2,6);
  func_0x000107c59c74(*(undefined8 *)(unaff_x20 + lVar1),param_2,1);
  uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(uVar3);
  func_0x000107c5e2ac(puVar2);
  func_0x000107c61180();
  func_0x000107c59c78(uVar3,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1038dbd80; end: 1038dc077;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038dbd80(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  ulong uVar12;
  long lVar13;
  long unaff_x20;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar4 = _DAT_112fac990;
  ppuVar10 = &puStack_80;
  ppuVar11 = &puStack_80;
  lVar1 = *(long *)(unaff_x20 + _DAT_112fac990) + 1;
  if (SCARRY8(*(long *)(unaff_x20 + _DAT_112fac990),1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1038dc06c);
    (*pcVar5)();
  }
  lVar16 = *(long *)(unaff_x20 + _DAT_112fac9c0);
  lVar13 = *(long *)(lVar16 + 0x10);
  if (lVar13 != 0) {
    lVar2 = 0;
    if (lVar13 != 0) {
      lVar2 = lVar1 / lVar13;
    }
    *(long *)(unaff_x20 + _DAT_112fac990) = lVar1 - lVar2 * lVar13;
    puVar6 = PTR_PTR_1126aea58;
    func_0x000107c610f8();
    func_0x000107c453e4();
    lVar1 = _DAT_112fac980;
    func_0x000107c5d100(*(undefined8 *)(unaff_x20 + _DAT_112fac980));
    func_0x000107c5a100(puVar6);
    uVar14 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x000107c61174();
    func_0x000107c5c834(uVar14);
    func_0x000107c59c74(puVar6);
    uVar14 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x000107c5c838(uVar14);
    func_0x000107c61180();
    func_0x000107c59c78(puVar6);
    func_0x000107c61170(uVar14);
    func_0x000107c61174();
    uVar14 = 0;
    func_0x000107c526c0(0);
    uVar12 = *(ulong *)(unaff_x20 + lVar4);
    if (-1 < (long)uVar12) {
      if (uVar12 < *(ulong *)(lVar16 + 0x10)) {
        lVar16 = lVar16 + uVar12 * 0x10;
        uVar7 = *(undefined8 *)(lVar16 + 0x20);
        uVar17 = *(undefined8 *)(lVar16 + 0x28);
        func_0x000107c61434(uVar17);
        func_0x000107c5fadc(uVar7,uVar17);
        func_0x000107c6142c(uVar17);
        func_0x000107c59c6c(puVar6);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(uVar7);
        uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112fac978);
        func_0x000107c3ec60(uVar15);
        func_0x000107c609b0();
        uVar7 = uVar14;
        func_0x000107c3ec60(uVar15);
        func_0x000107c609cc();
        uVar17 = uVar7;
        func_0x000107c3ec60(uVar15);
        func_0x000107c609b0();
        func_0x000107c54b80(0,uVar14,uVar7,uVar17,puVar6);
        func_0x000107c61170(puVar6);
        func_0x000107c3d89c(uVar15);
        puVar8 = PTR__OBJC_CLASS___UIView_1126aec20;
        func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
        puVar9 = &UNK_1106a7700;
        func_0x000107c613fc(&UNK_1106a7700,0x20,7);
        *(long *)(puVar9 + 0x10) = unaff_x20;
        *(undefined **)(puVar9 + 0x18) = puVar6;
        puVar3 = PTR___NSConcreteStackBlock_11034bd00;
        pcStack_60 = FUN_1038dcf34;
        puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_78 = 0x42000000;
        puStack_70 = &UNK_1000f6b44;
        puStack_68 = &UNK_1106a7718;
        puStack_58 = puVar9;
        func_0x000107c60bc4(&puStack_80);
        puVar9 = puStack_58;
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61574(puVar9);
        puVar9 = &UNK_1106a7750;
        func_0x000107c613fc(&UNK_1106a7750,0x20,7);
        *(long *)(puVar9 + 0x10) = unaff_x20;
        *(undefined **)(puVar9 + 0x18) = puVar6;
        pcStack_60 = FUN_1038dcff4;
        puStack_80 = puVar3;
        uStack_78 = 0x42000000;
        puStack_70 = &UNK_100288f10;
        puStack_68 = &UNK_1106a7768;
        puStack_58 = puVar9;
        func_0x000107c60bc4(&puStack_80);
        puVar9 = puStack_58;
        func_0x000107c61174(puVar6);
        func_0x000107c61174(unaff_x20);
        func_0x000107c61574(puVar9);
        func_0x000107c3dcd0(0x3fd3333333333333,puVar8);
        func_0x000107c60bd0(ppuVar11);
        func_0x000107c60bd0(ppuVar10);
        func_0x000107c61170(puVar6);
        return;
      }
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1038dc078);
      (*pcVar5)();
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1038dc074);
    (*pcVar5)();
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1038dc070);
  (*pcVar5)();
}



/* Entry: 1038dc078; end: 1038dca37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038dc078(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  
  FUN_1038dabac();
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_viewWillLayoutSubviews_112526958);
  lVar2 = 0x112d360b8;
  FUN_1038dcce8(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  lVar12 = lVar2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar12 + 0x18) = 9;
  *(undefined8 *)(lVar12 + 0x10) = 4;
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112fac9b0);
  uVar7 = uVar11;
  func_0x000107c3f75c();
  func_0x000107c61180();
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1038dca28);
    (*pcVar1)();
  }
  lVar4 = lVar3;
  func_0x000107c3f75c();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  uVar5 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(lVar4);
  *(undefined8 *)(lVar12 + 0x20) = uVar5;
  uVar7 = uVar11;
  func_0x000107c3f764();
  func_0x000107c61180();
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1038dca2c);
    (*pcVar1)();
  }
  lVar4 = lVar3;
  func_0x000107c3f764();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  uVar5 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(lVar4);
  *(undefined8 *)(lVar12 + 0x28) = uVar5;
  uVar7 = uVar11;
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1038dca30);
    (*pcVar1)();
  }
  lVar4 = lVar3;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  uVar5 = uVar7;
  func_0x000107c40284(0x4040000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(lVar4);
  *(undefined8 *)(lVar12 + 0x30) = uVar5;
  uVar7 = uVar11;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 != 0) {
    puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar4 = lVar3;
    func_0x000107c5ce8c(lVar3);
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    uVar5 = uVar7;
    func_0x000107c40284(0xc040000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(lVar4);
    *(undefined8 *)(lVar12 + 0x38) = uVar5;
    uVar7 = 0;
    func_0x0001038dcea0(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar3 = lVar12;
    func_0x000107c5fc48(lVar12,uVar7);
    func_0x000107c61574(lVar12);
    func_0x000107c3d048(puVar6);
    func_0x000107c61170(lVar3);
    lVar12 = *(long *)(unaff_x20 + _DAT_112fac960);
    if (lVar12 != 0) {
      lVar3 = lVar2;
      func_0x000107c613fc(lVar2,((ulong)*(uint *)(lVar2 + 0x30) + 7 & 0x1fffffff8) + 0x10,
                          *(ushort *)(lVar2 + 0x34) | 7);
      *(undefined8 *)(lVar3 + 0x18) = 5;
      *(undefined8 *)(lVar3 + 0x10) = 2;
      func_0x000107c61174();
      func_0x000107c61174();
      lVar4 = lVar12;
      func_0x000107c4acb0();
      func_0x000107c61180();
      uVar5 = uVar11;
      func_0x000107c4acb0(uVar11);
      func_0x000107c61180();
      lVar8 = lVar4;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      func_0x000107c61170(uVar5);
      *(long *)(lVar3 + 0x20) = lVar8;
      lVar4 = lVar12;
      func_0x000107c5ce8c();
      func_0x000107c61180();
      func_0x000107c61170(lVar12);
      uVar5 = uVar11;
      func_0x000107c5ce8c(uVar11);
      func_0x000107c61180();
      lVar8 = lVar4;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      func_0x000107c61170(uVar5);
      *(long *)(lVar3 + 0x28) = lVar8;
      lVar4 = lVar3;
      func_0x000107c5fc48(lVar3,uVar7);
      func_0x000107c61574(lVar3);
      func_0x000107c3d048(puVar6);
      func_0x000107c61170(lVar12);
      func_0x000107c61170(lVar4);
    }
    lVar12 = lVar2;
    func_0x000107c613fc(lVar2,((ulong)*(uint *)(lVar2 + 0x30) + 7 & 0x1fffffff8) + 0x10,
                        *(ushort *)(lVar2 + 0x34) | 7);
    *(undefined8 *)(lVar12 + 0x18) = 5;
    *(undefined8 *)(lVar12 + 0x10) = 2;
    uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112fac998);
    uVar5 = uVar13;
    func_0x000107c4acb0();
    func_0x000107c61180();
    uVar9 = uVar11;
    func_0x000107c4acb0(uVar11);
    func_0x000107c61180();
    uVar10 = uVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar9);
    *(undefined8 *)(lVar12 + 0x20) = uVar10;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    uVar5 = uVar11;
    func_0x000107c5ce8c(uVar11);
    func_0x000107c61180();
    uVar9 = uVar13;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar5);
    *(undefined8 *)(lVar12 + 0x28) = uVar9;
    lVar3 = lVar12;
    func_0x000107c5fc48(lVar12,uVar7);
    func_0x000107c61574(lVar12);
    func_0x000107c3d048(puVar6);
    func_0x000107c61170(lVar3);
    lVar12 = lVar2;
    func_0x000107c613fc(lVar2,((ulong)*(uint *)(lVar2 + 0x30) + 7 & 0x1fffffff8) + 0x18,
                        *(ushort *)(lVar2 + 0x34) | 7);
    *(undefined8 *)(lVar12 + 0x18) = 7;
    *(undefined8 *)(lVar12 + 0x10) = 3;
    uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112fac9a0);
    uVar5 = uVar13;
    func_0x000107c4acb0();
    func_0x000107c61180();
    uVar9 = uVar11;
    func_0x000107c4acb0(uVar11);
    func_0x000107c61180();
    uVar10 = uVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar9);
    *(undefined8 *)(lVar12 + 0x20) = uVar10;
    uVar5 = uVar13;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    uVar9 = uVar11;
    func_0x000107c5ce8c(uVar11);
    func_0x000107c61180();
    uVar10 = uVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar9);
    *(undefined8 *)(lVar12 + 0x28) = uVar10;
    func_0x000107c44d9c();
    func_0x000107c61180();
    uVar5 = uVar13;
    func_0x000107c40290(0x4010000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar13);
    *(undefined8 *)(lVar12 + 0x30) = uVar5;
    lVar3 = lVar12;
    func_0x000107c5fc48(lVar12,uVar7);
    func_0x000107c61574(lVar12);
    func_0x000107c3d048(puVar6);
    func_0x000107c61170(lVar3);
    lVar12 = lVar2;
    func_0x000107c613fc(lVar2,((ulong)*(uint *)(lVar2 + 0x30) + 7 & 0x1fffffff8) + 0x18,
                        *(ushort *)(lVar2 + 0x34) | 7);
    *(undefined8 *)(lVar12 + 0x18) = 7;
    *(undefined8 *)(lVar12 + 0x10) = 3;
    uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112fac978);
    uVar5 = uVar13;
    func_0x000107c4acb0();
    func_0x000107c61180();
    uVar9 = uVar11;
    func_0x000107c4acb0(uVar11);
    func_0x000107c61180();
    uVar10 = uVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar9);
    *(undefined8 *)(lVar12 + 0x20) = uVar10;
    uVar5 = uVar13;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    uVar9 = uVar11;
    func_0x000107c5ce8c(uVar11);
    func_0x000107c61180();
    uVar10 = uVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar9);
    *(undefined8 *)(lVar12 + 0x28) = uVar10;
    func_0x000107c44d9c();
    func_0x000107c61180();
    uVar5 = uVar13;
    func_0x000107c40290(0x403e000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar13);
    *(undefined8 *)(lVar12 + 0x30) = uVar5;
    lVar3 = lVar12;
    func_0x000107c5fc48(lVar12,uVar7);
    func_0x000107c61574(lVar12);
    func_0x000107c3d048(puVar6);
    func_0x000107c61170(lVar3);
    lVar12 = lVar2;
    func_0x000107c613fc(lVar2,((ulong)*(uint *)(lVar2 + 0x30) + 7 & 0x1fffffff8) + 8,
                        *(ushort *)(lVar2 + 0x34) | 7);
    *(undefined8 *)(lVar12 + 0x18) = 3;
    *(undefined8 *)(lVar12 + 0x10) = 1;
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112fac9b8);
    func_0x000107c3f75c();
    func_0x000107c61180();
    uVar5 = uVar11;
    func_0x000107c3f75c(uVar11);
    func_0x000107c61180();
    uVar9 = uVar10;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar5);
    *(undefined8 *)(lVar12 + 0x20) = uVar9;
    lVar3 = lVar12;
    func_0x000107c5fc48(lVar12,uVar7);
    func_0x000107c61574(lVar12);
    func_0x000107c3d048(puVar6);
    func_0x000107c61170(lVar3);
    func_0x000107c613fc(lVar2,((ulong)*(uint *)(lVar2 + 0x30) + 7 & 0x1fffffff8) + 0x10,
                        *(ushort *)(lVar2 + 0x34) | 7);
    *(undefined8 *)(lVar2 + 0x18) = 5;
    *(undefined8 *)(lVar2 + 0x10) = 2;
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112fac9a8);
    uVar5 = uVar10;
    func_0x000107c3f75c();
    func_0x000107c61180();
    func_0x000107c3f75c(uVar11);
    func_0x000107c61180();
    uVar9 = uVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar11);
    *(undefined8 *)(lVar2 + 0x20) = uVar9;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar12 = unaff_x20;
      func_0x000107c515ac();
      func_0x000107c61180();
      func_0x000107c61170(unaff_x20);
      lVar3 = lVar12;
      func_0x000107c3ec1c(lVar12);
      func_0x000107c61180();
      func_0x000107c61170(lVar12);
      uVar11 = uVar10;
      func_0x000107c40284(0xc034000000000000);
      func_0x000107c61180();
      func_0x000107c61170(uVar10);
      func_0x000107c61170(lVar3);
      *(undefined8 *)(lVar2 + 0x28) = uVar11;
      lVar12 = lVar2;
      func_0x000107c5fc48(lVar2,uVar7);
      func_0x000107c61574(lVar2);
      func_0x000107c3d048(puVar6);
      func_0x000107c61170(lVar12);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1038dca38);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038dca34);
  (*pcVar1)();
}



/* Entry: 1038dca38; end: 1038dca5f; -[_TtC27MemoriesFullScreenLoadingUI39MemoriesFullScreenLoadingViewController viewWillLayoutSubviews] */

void FUN_1038dca38(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1038dc078();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1038dca60; end: 1038dca6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038dca60(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c1e4690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + _DAT_112fac9a0),PTR_s_setProgress__112656bc8);
  return;
}



/* Entry: 1038dca70; end: 1038dca7f; -[_TtC27MemoriesFullScreenLoadingUI39MemoriesFullScreenLoadingViewController updateProgress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038dca70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e4690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112fac9a0),PTR_s_setProgress__112656bc8);
  return;
}



/* Entry: 1038dca80; end: 1038dcbc7;  */

/* WARNING: Possible PIC construction at 0x0001038dcb14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038dcb18) */
/* WARNING: Removing unreachable block (ram,0x0001038dcb28) */
/* WARNING: Removing unreachable block (ram,0x0001038dcb30) */
/* WARNING: Removing unreachable block (ram,0x0001038dcbc4) */
/* WARNING: Removing unreachable block (ram,0x0001038dcb84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038dca80(ulong param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112fac998);
  if ((param_1 & 1) == 0) {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fac968);
    lVar3 = puVar1[1];
  }
  else {
    if (lRam0000000113568ab0 != -1) {
      func_0x000107c61568(0x113568ab0,FUN_1038da9e8);
    }
    if (lRam000000011380bbc0 == 0) {
      uVar4 = 0;
      goto LAB_1038dcb04;
    }
    puVar1 = (undefined8 *)0x11380bbb8;
    lVar3 = lRam000000011380bbc0;
  }
  uVar4 = *puVar1;
  func_0x000107c61434(lVar3);
  func_0x000107c5fadc(uVar4,lVar3);
  func_0x000107c6142c(lVar3);
LAB_1038dcb04:
  func_0x000107c59c6c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1038dcbc8; end: 1038dcbf7;  */

void FUN_1038dcbc8(void)

{
  FUN_1038dabac();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1038dcbf8; end: 1038dcce7; -[_TtC27MemoriesFullScreenLoadingUI39MemoriesFullScreenLoadingViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001038dcc48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038dcc4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038dcbf8(long param_1)

{
  func_0x0001038dd130(param_1 + _DAT_112fac958);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fac998));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fac960));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fac968 + 8))
  ;
  return;
}



/* Entry: 1038dcce8; end: 1038dcd5f;  */

void FUN_1038dcce8(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x0001038dcea0(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1038dcd60; end: 1038dcdeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038dcd60(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c57920(0,*(undefined8 *)(lVar3 + _DAT_112fac9a0));
  FUN_1038dca80(0);
  lVar2 = lVar3;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1038dcdec);
    (*pcVar1)();
  }
  func_0x000107c4ac20();
  func_0x000107c61170(lVar2);
  lVar3 = lVar3 + _DAT_112fac958;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x000107c41da8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
    return;
  }
  return;
}



/* Entry: 1038dcdec; end: 1038dce07;  */

void FUN_1038dcdec(long param_1,long param_2)

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



/* Entry: 1038dce08; end: 1038dcedf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038dce08(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10) + _DAT_112fac958;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c41d84();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 1038dcee0; end: 1038dcee3;  */

void FUN_1038dcee0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fac9c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1ef78;
  func_0x000107c61520(&UNK_10dc1ef78,&UNK_1106a76e0);
  puRam0000000112fac9c8 = puVar1;
  return;
}



/* Entry: 1038dcee4; end: 1038dcf23;  */

void FUN_1038dcee4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fac9c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1ef78;
  func_0x000107c61520(&UNK_10dc1ef78,&UNK_1106a76e0);
  puRam0000000112fac9c8 = puVar1;
  return;
}



/* Entry: 1038dcf24; end: 1038dcf33;  */

undefined1  [16] FUN_1038dcf24(void)

{
  return ZEXT816(0x1106a76e0);
}



/* Entry: 1038dcf34; end: 1038dcff3;  */

/* WARNING: Possible PIC construction at 0x0001038dcfa4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038dcfa8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038dcf34(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar2 = _DAT_112fac980;
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(lVar1 + _DAT_112fac980);
  uVar4 = *(undefined8 *)(lVar1 + _DAT_112fac978);
  func_0x000107c61174(uVar3);
  func_0x000107c3ec60(uVar4);
  func_0x000107c609b0();
  func_0x000107c438d4(uVar3);
  func_0x000107c54b80(uVar3);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,*(undefined8 *)(lVar1 + lVar2),PTR_s_setAlpha__112637810)
  ;
  return;
}



/* Entry: 1038dcff4; end: 1038dd03b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038dcff4(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = _DAT_112fac980;
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c4ff34(*(undefined8 *)(lVar1 + _DAT_112fac980));
  uVar4 = *(undefined8 *)(lVar1 + lVar3);
  *(undefined8 *)(lVar1 + lVar3) = uVar2;
  func_0x000107c61174(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1038dd03c; end: 1038dd153;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038dd03c(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long unaff_x20;
  
  func_0x000107c61614(unaff_x20 + _DAT_112fac958,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fac960) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fac968);
  *puVar1 = 0;
  puVar1[1] = 0xe000000000000000;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fac970);
  *puVar1 = 0;
  puVar1[1] = 0xe000000000000000;
  lVar2 = _DAT_112fac978;
  puVar4 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112fac980;
  puVar4 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112fac988) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fac990) = 0xffffffffffffffff;
  func_0x000107c60450("Fatal error",0xb,2,0xd00000000000001d,0x800000010ef19c10,
                      "MemoriesFullScreenLoadingUI/MemoriesFullScreenLoadingViewController.swift",
                      0x49,2,0xae,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1038dd130);
  (*pcVar3)();
}



/* Entry: 1038dd154; end: 1038dd187;  */

void FUN_1038dd154(long param_1,long param_2)

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



/* Entry: 1038dd188; end: 1038dd26f;  */

void FUN_1038dd188(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_80 [72];
  undefined8 uStack_38;
  
  uStack_38 = *unaff_x20;
  func_0x000107c6068c(auStack_80,0);
  func_0x000107c5fa50(auStack_80,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1038dd270; end: 1038dd297;  */

void FUN_1038dd270(ulong *param_1,ulong *param_2)

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



/* Entry: 1038dd298; end: 1038dd2e7;  */

void FUN_1038dd298(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x0001038de60c();
                    /* WARNING: Could not recover jumptable at 0x00010bdb4bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10Foundation15_BridgedNSErrorPAAE7_domainSSvg_1103506f8)(param_1,uVar1);
  return;
}



/* Entry: 1038dd2e8; end: 1038dd30b;  */

void FUN_1038dd2e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE9_userInfoyXlSgvg_11034ee00)();
  return;
}



/* Entry: 1038dd30c; end: 1038dd34b;  */

void FUN_1038dd30c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x0001038de60c();
                    /* WARNING: Could not recover jumptable at 0x00010bdb4b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10Foundation15_BridgedNSErrorPAAE08_bridgedC0xSgSo0C0Ch_tcfC_1103506e0)
            (param_1,param_2,param_3,uVar1);
  return;
}



/* Entry: 1038dd34c; end: 1038dd397;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038dd34c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fac9f8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038dd398; end: 1038dd3ef; -[MemoriesMashupEditQuickCutRouter initWithQuickCutExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038dd398(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fac9f8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1038dd3f0; end: 1038ddab7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038dd3f0(undefined8 *param_1,undefined8 *param_2,undefined *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined8 *puVar19;
  long unaff_x20;
  long unaff_x21;
  long lVar20;
  undefined *puVar21;
  ulong uVar22;
  undefined *puVar23;
  undefined8 *puVar24;
  undefined *puStack_58;
  
  puVar9 = param_2;
  func_0x000107e627dc();
  if ((int)puVar9 == 0) {
    uVar12 = 0;
    goto LAB_1038dda40;
  }
  func_0x000107c40c3c();
  func_0x000107c61180();
  puVar9 = param_1;
  if (param_1 != (undefined8 *)0x0) {
    puVar18 = PTR___sypN_11034f1a8 + 8;
    func_0x000107c5fc54();
    func_0x000107c61170(param_1);
    puVar10 = puVar9;
    func_0x000101158fcc();
    func_0x000107c6142c();
    if (puVar10 != (undefined8 *)0x0) {
      uVar15 = puVar10[2];
      if (uVar15 != 0) {
        puVar21 = (undefined *)((ulong)param_3 & 0xffffffffffffff8);
        if ((ulong)param_3 >> 0x3e == 0) {
          puVar23 = *(undefined **)(puVar21 + 0x10);
        }
        else {
          puVar23 = puVar21;
          if ((undefined *)0x7fffffffffffffff < param_3) {
            puVar23 = param_3;
          }
          func_0x000107c60480();
        }
        puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (puVar23 != (undefined *)0x0) {
          puVar6 = (undefined *)0x0;
          do {
            while( true ) {
              if (((ulong)param_3 & 0xc000000000000001) == 0) {
                if (*(undefined **)(puVar21 + 0x10) <= puVar6) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1038dda0c);
                  (*pcVar3)();
                }
                puVar4 = *(undefined **)(param_3 + (long)puVar6 * 8 + 0x20);
                func_0x000107c61174();
                puVar13 = puVar18;
              }
              else {
                puVar4 = puVar6;
                puVar13 = param_3;
                func_0x000101a3ee24();
              }
              puVar1 = puVar6 + 1;
              if (SCARRY8((long)puVar6,1)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1038dda08);
                (*pcVar3)();
              }
              puVar5 = puVar4;
              func_0x000107c5b2d0();
              func_0x000107c61180();
              if (puVar5 != (undefined *)0x0) break;
              func_0x000107c61170(puVar4);
              puVar18 = puVar13;
              puVar6 = puVar6 + 1;
              if (puVar1 == puVar23) goto LAB_1038dd5e0;
            }
            puVar6 = puVar5;
            func_0x000107c5faec();
            puVar18 = puVar13;
            func_0x000107c61170(puVar5);
            puVar5 = puVar8;
            func_0x000107c61558();
            puVar7 = puVar8;
            if (((ulong)puVar5 & 1) == 0) {
              puVar18 = (undefined *)(*(long *)(puVar8 + 0x10) + 1);
              puVar7 = (undefined *)0x0;
              FUN_1038de0cc(0,puVar18,1,puVar8);
            }
            uVar16 = *(ulong *)(puVar7 + 0x10);
            puVar5 = (undefined *)(uVar16 + 1);
            puVar8 = puVar7;
            if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar16) {
              puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
              puVar18 = puVar5;
              FUN_1038de0cc(puVar8,puVar5,1,puVar7);
            }
            *(undefined **)(puVar8 + 0x10) = puVar5;
            *(undefined **)(puVar8 + uVar16 * 0x18 + 0x20) = puVar6;
            *(undefined **)(puVar8 + uVar16 * 0x18 + 0x28) = puVar13;
            *(undefined **)(puVar8 + uVar16 * 0x18 + 0x30) = puVar4;
            puVar6 = puVar1;
          } while (puVar1 != puVar23);
        }
LAB_1038dd5e0:
        puVar18 = *(undefined **)(puVar8 + 0x10);
        puStack_58 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
        if (puVar18 != (undefined *)0x0) {
          func_0x0001000285a8(0x112faca08,&UNK_10dc1f0b0);
          func_0x000107c60498();
          puStack_58 = puVar18;
        }
        puVar14 = (undefined8 *)0x1;
        FUN_1038de210(puVar8,1,&puStack_58);
        if (unaff_x21 != 0) {
          func_0x000107c6142c(puVar8);
          func_0x000107c61574(puStack_58);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1038ddab8);
          (*pcVar3)();
        }
        func_0x000107c6142c(puVar8);
        puVar18 = puStack_58;
        uVar16 = 0;
        puVar9 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_1038dd660:
        puVar19 = puVar10 + uVar16 * 2 + 5;
        uVar22 = uVar16;
        do {
          if ((ulong)puVar10[2] <= uVar22) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1038dda04);
            (*pcVar3)();
          }
          if (*(long *)(puVar18 + 0x10) != 0) {
            lVar20 = puVar19[-1];
            puVar24 = (undefined8 *)*puVar19;
            func_0x000107c61434(puVar24);
            func_0x000107c6157c(puVar18);
            puVar14 = puVar24;
            func_0x000100029284();
            if (((ulong)puVar14 & 1) != 0) goto LAB_1038dd6c8;
            func_0x000107c61574(puVar18);
            func_0x000107c6142c(puVar24);
          }
          uVar22 = uVar22 + 1;
          puVar19 = puVar19 + 2;
          if (uVar15 == uVar22) goto LAB_1038dd790;
        } while( true );
      }
      uVar12 = 1;
      puVar9 = puVar10;
      goto LAB_1038dda38;
    }
  }
  uVar12 = 1;
  goto LAB_1038dda40;
LAB_1038dd6c8:
  uVar12 = *(undefined8 *)(*(long *)(puVar18 + 0x38) + lVar20 * 8);
  func_0x000107c61174();
  func_0x000107c61574(puVar18);
  func_0x000107c6142c(puVar24);
  puVar19 = puVar9;
  func_0x000107c61550();
  if ((((int)puVar19 == 0) || ((long)puVar9 < 0)) ||
     (puVar19 = puVar9, ((ulong)puVar9 >> 0x3e & 1) != 0)) {
    if ((ulong)puVar9 >> 0x3e == 0) {
      puVar14 = *(undefined8 **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar14 = (undefined8 *)((ulong)puVar9 & 0xffffffffffffff8);
      if ((undefined8 *)0x7fffffffffffffff < puVar9) {
        puVar14 = puVar9;
      }
      func_0x000107c60480();
    }
    puVar14 = (undefined8 *)((long)puVar14 + 1);
    puVar19 = (undefined8 *)0x0;
    func_0x0001022b0b6c(0,puVar14,1,puVar9);
  }
  uVar17 = (ulong)puVar19 & 0xffffffffffffff8;
  uVar2 = *(ulong *)(uVar17 + 0x10);
  puVar24 = (undefined8 *)(uVar2 + 1);
  puVar9 = puVar19;
  if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar2) {
    puVar9 = (undefined8 *)(ulong)(1 < *(ulong *)(uVar17 + 0x18));
    puVar14 = puVar24;
    func_0x0001022b0b6c(puVar9,puVar24,1,puVar19);
    uVar17 = (ulong)puVar9 & 0xffffffffffffff8;
  }
  uVar16 = uVar22 + 1;
  *(undefined8 **)(uVar17 + 0x10) = puVar24;
  *(undefined8 *)(uVar17 + uVar2 * 8 + 0x20) = uVar12;
  if (uVar15 - 1 == uVar22) goto LAB_1038dd790;
  goto LAB_1038dd660;
LAB_1038dd790:
  func_0x000107c6142c(puVar10);
  func_0x000107c61574(puVar18);
  if ((ulong)puVar9 >> 0x3e == 0) {
    puVar10 = (undefined8 *)((undefined8 *)((ulong)puVar9 & 0xffffffffffffff8))[2];
  }
  else {
    puVar10 = (undefined8 *)((ulong)puVar9 & 0xffffffffffffff8);
    if ((undefined8 *)0x7fffffffffffffff < puVar9) {
      puVar10 = puVar9;
    }
    func_0x000107c60480();
  }
  if (puVar10 != (undefined8 *)0x0) {
    puVar21 = *(undefined **)(unaff_x20 + _DAT_112fac9f8);
    puVar18 = puVar21;
    func_0x000107c5194c();
    func_0x000107c61180();
    if (puVar18 == (undefined *)0x0) {
      if ((ulong)puVar9 >> 0x3e == 0) {
        puVar10 = (undefined8 *)((undefined8 *)((ulong)puVar9 & 0xffffffffffffff8))[2];
      }
      else {
        puVar10 = (undefined8 *)((ulong)puVar9 & 0xffffffffffffff8);
        if ((undefined8 *)0x7fffffffffffffff < puVar9) {
          puVar10 = puVar9;
        }
        func_0x000107c60480();
      }
      puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar10 != (undefined8 *)0x0) {
        puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
        puVar14 = (undefined8 *)((ulong)puVar10 & ((long)puVar10 >> 0x3f ^ 0xffffffffffffffffU));
        func_0x000100fa7de4(0,puVar14,0);
        if ((long)puVar10 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1038ddaa8);
          (*pcVar3)();
        }
        if (((ulong)puVar9 & 0xc000000000000001) == 0) {
          lVar20 = (long)*(undefined8 **)(puStack_58 + 0x10) << 4;
          puVar18 = puStack_58;
          puVar19 = puVar9 + 4;
          puVar24 = *(undefined8 **)(puStack_58 + 0x10);
          do {
            uVar12 = *puVar19;
            puVar11 = (undefined8 *)((long)puVar24 + 1);
            uVar15 = *(ulong *)(puVar18 + 0x18);
            puStack_58 = puVar18;
            func_0x000107c61174();
            if ((undefined8 *)(uVar15 >> 1) <= puVar24) {
              puVar14 = puVar11;
              func_0x000100fa7de4(1 < uVar15,puVar11,1);
              puVar18 = puStack_58;
            }
            *(undefined8 **)(puVar18 + 0x10) = puVar11;
            *(undefined8 *)(puVar18 + lVar20 + 0x20) = uVar12;
            puVar18[lVar20 + 0x28] = 1;
            lVar20 = lVar20 + 0x10;
            puVar10 = (undefined8 *)((long)puVar10 + -1);
            puVar19 = puVar19 + 1;
            puVar24 = puVar11;
          } while (puVar10 != (undefined8 *)0x0);
        }
        else {
          puVar19 = (undefined8 *)0x0;
          do {
            puVar18 = puStack_58;
            puVar11 = puVar19;
            puVar14 = puVar9;
            func_0x000101a3ee24();
            uVar15 = *(ulong *)(puVar18 + 0x10);
            puVar24 = (undefined8 *)(uVar15 + 1);
            puStack_58 = puVar18;
            if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar15) {
              puVar14 = puVar24;
              func_0x000100fa7de4(1 < *(ulong *)(puVar18 + 0x18),puVar24,1);
            }
            puVar19 = (undefined8 *)((long)puVar19 + 1);
            *(undefined8 **)(puStack_58 + 0x10) = puVar24;
            *(undefined8 **)(puStack_58 + uVar15 * 0x10 + 0x20) = puVar11;
            puStack_58[uVar15 * 0x10 + 0x28] = 1;
            puVar18 = puStack_58;
          } while (puVar10 != puVar19);
        }
      }
      func_0x000107e64248();
      func_0x000107c61180();
      if (param_2 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)0x0;
        puVar14 = (undefined8 *)0x1;
      }
      else {
        puVar10 = param_2;
        func_0x000107c5faec();
        func_0x000107c61170(param_2);
      }
      puVar23 = PTR_PTR_1126aff58;
      func_0x000107c610f8(PTR_PTR_1126aff58);
      func_0x000107c48080();
      FUN_1038e0838(0);
      func_0x000107c610f8();
      func_0x000107c61174(puVar23);
      func_0x000107c61174(unaff_x20);
      func_0x0001038dea38(puVar18,0,puVar23,unaff_x20,0,0,0,puVar10,puVar14,0,
                          param_2 != (undefined8 *)0x0);
      func_0x000107c42c1c(puVar21);
      func_0x000107c61170(puVar23);
    }
    func_0x000107c6142c(puVar9);
    func_0x000107c61170(puVar18);
    return;
  }
  uVar12 = 2;
LAB_1038dda38:
  func_0x000107c6142c();
LAB_1038dda40:
  FUN_1038ddab8();
  func_0x000107c613f8(&UNK_1106a78a0,puVar9,0,0);
  *puVar9 = uVar12;
  func_0x000107c61654();
  return;
}



/* Entry: 1038ddab8; end: 1038ddaf7;  */

void FUN_1038ddab8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112faca00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1f158;
  func_0x000107c61520(&UNK_10dc1f158,&UNK_1106a78a0);
  puRam0000000112faca00 = puVar1;
  return;
}



/* Entry: 1038ddaf8; end: 1038ddc03; -[MemoriesMashupEditQuickCutRouter handleEditForSnap:snapDoc:sourceSnaps:presentingFrom:error:] */

/* WARNING: Removing unreachable block (ram,0x0001038ddbb4) */
/* WARNING: Removing unreachable block (ram,0x0001038ddbdc) */
/* WARNING: Removing unreachable block (ram,0x0001038ddbbc) */

undefined8
FUN_1038ddaf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000101a3eb00(0);
  func_0x000107c5fc54(param_5,uVar1);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_1);
  FUN_1038dd3f0(param_3,param_4,param_5,param_6);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_5);
  return 1;
}



/* Entry: 1038ddc04; end: 1038ddc7b; -[MemoriesMashupEditQuickCutRouter removeQuickCutScopeWithScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038ddc04(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = _DAT_112fac9f8;
  lVar4 = *(long *)(param_1 + _DAT_112fac9f8);
  lVar2 = param_1;
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x000107c61170();
    uVar3 = *(undefined8 *)(param_1 + lVar1);
    func_0x000107c4ffe8(uVar3);
    func_0x000107c61180();
  }
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1038ddc7c; end: 1038ddcaf;  */

void FUN_1038ddc7c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1038ddcb0; end: 1038ddcbf; -[MemoriesMashupEditQuickCutRouter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038ddcb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fac9f8));
  return;
}



/* Entry: 1038ddcc0; end: 1038dde2f;  */

void FUN_1038ddcc0(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8(0x112faca08,&UNK_10dc1f0b0);
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_1038ddd9c;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        func_0x000107c61434();
        func_0x000107c61174(uVar12);
        if (uVar8 != 0) break;
LAB_1038ddd9c:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1038dde30);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_1038dde08;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_1038dde08:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 1038dde30; end: 1038de0cb;  */

void FUN_1038dde30(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112faca08;
  func_0x0001000285a8(0x112faca08,&UNK_10dc1f0b0);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_1038de098:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1038de0c8);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_1038de098;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c61174(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1038de0cc);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 1038de0cc; end: 1038de20f;  */

undefined * FUN_1038de0cc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1038de210);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112faca60;
    func_0x0001000285a8(0x112faca60,&UNK_10dc1f290);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112faca68;
    func_0x0001000285a8(0x112faca68,&UNK_10dc1f298);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x18 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1038de210; end: 1038de4c3;  */

void FUN_1038de210(long param_1,uint param_2,long *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 == 0) {
    return;
  }
  uVar2 = *(ulong *)(param_1 + 0x20);
  uVar3 = *(ulong *)(param_1 + 0x28);
  uVar12 = *(undefined8 *)(param_1 + 0x30);
  lVar11 = *param_3;
  func_0x000107c61434(uVar3);
  func_0x000107c61174();
  uVar5 = uVar2;
  uVar6 = uVar3;
  func_0x000100029284();
  lVar7 = *(long *)(lVar11 + 0x10);
  uVar9 = (ulong)~(uint)uVar6 & 1;
  lVar13 = lVar7 + uVar9;
  if (SCARRY8(lVar7,uVar9)) {
LAB_1038de4bc:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1038de4c0);
    (*pcVar4)();
  }
  if (*(long *)(lVar11 + 0x18) < lVar13) {
    FUN_1038dde30(lVar13,param_2 & 1);
    uVar5 = uVar2;
    uVar9 = uVar3;
    func_0x000100029284();
    if (((uint)uVar6 & 1) != ((uint)uVar9 & 1)) {
LAB_1038de2c4:
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1038de2d4);
      (*pcVar4)();
    }
  }
  else if ((param_2 & 1) == 0) {
    FUN_1038ddcc0();
    lVar13 = *param_3;
    goto joined_r0x0001038de338;
  }
  lVar13 = *param_3;
joined_r0x0001038de338:
  if ((uVar6 & 1) == 0) {
    lVar7 = lVar13 + (uVar5 >> 6) * 8;
    *(ulong *)(lVar7 + 0x40) = *(ulong *)(lVar7 + 0x40) | 1L << (uVar5 & 0x3f);
    puVar1 = (ulong *)(*(long *)(lVar13 + 0x30) + uVar5 * 0x10);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8) = uVar12;
    if (SCARRY8(*(long *)(lVar13 + 0x10),1)) {
LAB_1038de4c0:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1038de4c4);
      (*pcVar4)();
    }
    *(long *)(lVar13 + 0x10) = *(long *)(lVar13 + 0x10) + 1;
  }
  else {
    uVar8 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8);
    func_0x000107c61174();
    func_0x000107c61170(uVar12);
    func_0x000107c6142c(uVar3);
    uVar12 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8);
    *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8) = uVar8;
    func_0x000107c61170(uVar12);
  }
  if (lVar10 != 1) {
    lVar10 = lVar10 + -1;
    puVar14 = (undefined8 *)(param_1 + 0x48);
    do {
      uVar2 = puVar14[-2];
      uVar3 = puVar14[-1];
      uVar12 = *puVar14;
      lVar11 = *param_3;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar5 = uVar2;
      uVar6 = uVar3;
      func_0x000100029284();
      lVar7 = *(long *)(lVar11 + 0x10);
      uVar9 = (ulong)~(uint)uVar6 & 1;
      lVar13 = lVar7 + uVar9;
      if (SCARRY8(lVar7,uVar9)) goto LAB_1038de4bc;
      if (*(long *)(lVar11 + 0x18) < lVar13) {
        FUN_1038dde30(lVar13,1);
        uVar5 = uVar2;
        uVar9 = uVar3;
        func_0x000100029284();
        if (((uint)uVar6 & 1) != ((uint)uVar9 & 1)) goto LAB_1038de2c4;
      }
      lVar13 = *param_3;
      if ((uVar6 & 1) == 0) {
        lVar7 = lVar13 + (uVar5 >> 6) * 8;
        *(ulong *)(lVar7 + 0x40) = *(ulong *)(lVar7 + 0x40) | 1L << (uVar5 & 0x3f);
        puVar1 = (ulong *)(*(long *)(lVar13 + 0x30) + uVar5 * 0x10);
        *puVar1 = uVar2;
        puVar1[1] = uVar3;
        *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8) = uVar12;
        if (SCARRY8(*(long *)(lVar13 + 0x10),1)) goto LAB_1038de4c0;
        *(long *)(lVar13 + 0x10) = *(long *)(lVar13 + 0x10) + 1;
      }
      else {
        uVar8 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8);
        func_0x000107c61174();
        func_0x000107c61170(uVar12);
        func_0x000107c6142c(uVar3);
        uVar12 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8);
        *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8) = uVar8;
        func_0x000107c61170(uVar12);
      }
      puVar14 = puVar14 + 3;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}



/* Entry: 1038de4c4; end: 1038de4c7;  */

void FUN_1038de4c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112faca10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1f0b8;
  func_0x000107c61520(&UNK_10dc1f0b8,&UNK_1106a78a0);
  puRam0000000112faca10 = puVar1;
  return;
}



/* Entry: 1038de4c8; end: 1038de507;  */

void FUN_1038de4c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112faca10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1f0b8;
  func_0x000107c61520(&UNK_10dc1f0b8,&UNK_1106a78a0);
  puRam0000000112faca10 = puVar1;
  return;
}



/* Entry: 1038de508; end: 1038de50b;  */

void FUN_1038de508(void)

{
  undefined *puVar1;
  
  if (puRam0000000112faca18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1f1e0;
  func_0x000107c61520(&UNK_10dc1f1e0,&UNK_1106a78a0);
  puRam0000000112faca18 = puVar1;
  return;
}



/* Entry: 1038de50c; end: 1038de54b;  */

void FUN_1038de50c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112faca18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1f1e0;
  func_0x000107c61520(&UNK_10dc1f1e0,&UNK_1106a78a0);
  puRam0000000112faca18 = puVar1;
  return;
}



/* Entry: 1038de54c; end: 1038de54f;  */

void FUN_1038de54c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112faca20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1f0e0;
  func_0x000107c61520(&UNK_10dc1f0e0,&UNK_1106a78a0);
  puRam0000000112faca20 = puVar1;
  return;
}



/* Entry: 1038de550; end: 1038de58f;  */

void FUN_1038de550(void)

{
  undefined *puVar1;
  
  if (puRam0000000112faca20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1f0e0;
  func_0x000107c61520(&UNK_10dc1f0e0,&UNK_1106a78a0);
  puRam0000000112faca20 = puVar1;
  return;
}



/* Entry: 1038de590; end: 1038de593;  */

void FUN_1038de590(void)

{
  undefined *puVar1;
  
  if (puRam0000000112faca28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1f120;
  func_0x000107c61520(&UNK_10dc1f120,&UNK_1106a78a0);
  puRam0000000112faca28 = puVar1;
  return;
}



/* Entry: 1038de594; end: 1038de5d3;  */

void FUN_1038de594(void)

{
  undefined *puVar1;
  
  if (puRam0000000112faca28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1f120;
  func_0x000107c61520(&UNK_10dc1f120,&UNK_1106a78a0);
  puRam0000000112faca28 = puVar1;
  return;
}



/* Entry: 1038de5d4; end: 1038de5eb;  */

void FUN_1038de5d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d3a158 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___sSis17FixedWidthIntegersMc_11034def8;
  func_0x000107c61520(PTR___sSis17FixedWidthIntegersMc_11034def8,PTR___sSiN_11034deb0);
  puRam0000000112d3a158 = puVar1;
  return;
}



/* Entry: 1038de5ec; end: 1038de64b;  */

void FUN_1038de5ec(void)

{
  func_0x000107c61168(&PTR_PTR_1128fdc80);
  return;
}



/* Entry: 1038de64c; end: 1038de693;  */

undefined8 FUN_1038de64c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_1038de6dc(param_1);
  func_0x000107c615e8(param_1);
  return uVar1;
}



/* Entry: 1038de694; end: 1038de6b7;  */

void FUN_1038de694(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x70);
  func_0x000107c61470();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_defaultActor_deallocate_110350098)();
  return;
}



/* Entry: 1038de6b8; end: 1038de6c3;  */

void FUN_1038de6b8(void)

{
  return;
}



/* Entry: 1038de6c4; end: 1038de6db;  */

void FUN_1038de6c4(void)

{
  FUN_1038de6b8();
  return;
}



/* Entry: 1038de6dc; end: 1038de737;  */

void FUN_1038de6dc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61474();
  func_0x000107c61614(unaff_x20 + 0x70,0);
  func_0x000107c61428(unaff_x20 + 0x70,auStack_38,1,0);
  func_0x000107c61604(unaff_x20 + 0x70,param_1);
  return;
}



/* Entry: 1038de738; end: 1038de73b;  */

void FUN_1038de738(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 1038de73c; end: 1038de783;  */

void FUN_1038de73c(long param_1)

{
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_20 = &UNK_10dc1f310;
  puStack_18 = &UNK_10dc1f328;
  func_0x000107c61524(param_1,0,2,&puStack_20,param_1 + 0x58);
  return;
}



/* Entry: 1038de784; end: 1038de78f;  */

void FUN_1038de784(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e78b0c4);
  return;
}



/* Entry: 1038de790; end: 1038defcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1038de790(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long unaff_x20;
  long lVar10;
  long *plVar11;
  long alStack_110 [4];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [32];
  
  lVar3 = 0;
  alStack_110[3] = param_4;
  func_0x000107c5eec8();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar10 = (long)alStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_1038e5950();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  plVar11 = (long *)(lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c610f8();
  lVar5 = unaff_x20 + _DAT_11380bbf0;
  *(undefined8 *)(lVar5 + 8) = 0;
  func_0x000107c61614(lVar5,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112facaf0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11380bbe0) = param_3;
  lVar5 = 0x112facaf8;
  alStack_110[1] = param_1;
  alStack_110[2] = param_2;
  func_0x0001000285a8(0x112facaf8,&UNK_10dc1f340);
  func_0x000107c613fc();
  func_0x000100fbbc54(param_1,param_2);
  func_0x000107c615f0(param_3);
  func_0x000107c61474(lVar5);
  func_0x000107c61614(lVar5 + 0x70,0);
  func_0x000107c61428(lVar5 + 0x70,auStack_80,1,0);
  lVar2 = alStack_110[3];
  lVar6 = lVar5 + 0x70;
  lVar8 = alStack_110[3];
  func_0x000107c61604();
  *(long *)(unaff_x20 + _DAT_11380bbe8) = lVar5;
  func_0x000107c5eec4(lVar10);
  func_0x000107c5eeac();
  (**(code **)(lVar9 + 8))(lVar10,lVar3);
  func_0x000107c5eea0((long)plVar11 + (long)*(int *)(lVar4 + 0x14));
  *plVar11 = lVar6;
  plVar11[1] = lVar8;
  *(undefined8 *)((long)plVar11 + (long)*(int *)(lVar4 + 0x18)) = param_5;
  puVar1 = (undefined8 *)((long)plVar11 + (long)*(int *)(lVar4 + 0x1c));
  *puVar1 = param_6;
  puVar1[1] = param_7;
  func_0x000100fd1c94(plVar11,unaff_x20 + _DAT_11380bbc8);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11380bbd0);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  puVar1[2] = param_10;
  *(undefined1 *)(puVar1 + 3) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_11380bbd8) = param_13;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11380bbf8);
  *puVar1 = param_14;
  puVar1[1] = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_11380bc00) = param_16;
  puVar7 = auStack_90;
  func_0x000107c61154(puVar7,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(lVar2);
  func_0x000100fc3f6c(alStack_110[1],alStack_110[2]);
  return puVar7;
}



/* Entry: 1038defd0; end: 1038df033;  */

undefined8 FUN_1038defd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 in_x6;
  
  uVar1 = param_1;
  FUN_1038e0214();
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(in_x6);
  return uVar1;
}



/* Entry: 1038df034; end: 1038df127; -[MemoriesQuickCutScope initWithMediaInput:uiContainer:scopeRemover:source:contextSessionId:preselectedAssets:valdiRuntimeProvider:] */

undefined8
FUN_1038df034(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_7 == 0) {
    param_7 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_7);
  }
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  uVar1 = param_8;
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  uVar2 = param_3;
  FUN_1038e0214(param_3,param_4,param_5,param_6,param_7,param_2,param_8,param_9);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1038df128; end: 1038df20b; -[MemoriesQuickCutScope initWithUntypedItems:uiContainer:scopeRemover:source:preselectedAssets:] */

undefined8
FUN_1038df128(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR___syXlN_11034f1a0;
  func_0x000107c5fc54(param_3,PTR___syXlN_11034f1a0 + 8);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_7);
  uVar2 = param_3;
  func_0x000107c5fc48(param_3,puVar1 + 8);
  func_0x000107c6142c(param_3);
  func_0x000107c490e0(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_7);
  return param_1;
}



/* Entry: 1038df20c; end: 1038df2ff;  */

undefined8
FUN_1038df20c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  uVar1 = param_1;
  func_0x000107c5fc48(param_1,PTR___syXlN_11034f1a0 + 8);
  func_0x000107c6142c(param_1);
  if (param_6 == 0) {
    param_5 = 0;
  }
  else {
    func_0x000107c5fadc(param_5,param_6);
    func_0x000107c6142c(param_6);
  }
  func_0x000107c490e0();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_5);
  func_0x000107c615e8(param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_7);
  return unaff_x20;
}



/* Entry: 1038df300; end: 1038df3b3; -[MemoriesQuickCutScope initWithUntypedItems:uiContainer:scopeRemover:source:contextSessionId:preselectedAssets:] */

void FUN_1038df300(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  puVar1 = PTR___syXlN_11034f1a0 + 8;
  func_0x000107c5fc54(param_3,puVar1);
  if (param_7 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    func_0x000107c5faec(param_7);
  }
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_8);
  FUN_1038df20c(param_3,param_4,param_5,param_6,param_7,puVar1,param_8);
  return;
}



/* Entry: 1038df3b4; end: 1038df473; -[MemoriesQuickCutScope initWithSnapDocs:uiContainer:scopeRemover:source:] */

undefined8
FUN_1038df3b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000100fa1670(0);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x0001038e2bfc(param_3,0x2000000000000000);
  func_0x000107c47674(param_1);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_3);
  return param_1;
}



/* Entry: 1038df474; end: 1038df597; -[MemoriesQuickCutScope initWithPreselectedSnapIds:uiContainer:scopeRemover:source:contextSessionId:preselectedAssets:] */

undefined8
FUN_1038df474(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  puVar1 = PTR___sSSN_11034da80;
  func_0x000107c5fc54(param_3);
  if (param_7 == 0) {
    param_7 = 0;
    puVar1 = (undefined *)0x0;
  }
  else {
    func_0x000107c5faec(param_7);
  }
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_8);
  func_0x0001038e2bfc(param_3,0x3000000000000000);
  if (puVar1 == (undefined *)0x0) {
    param_7 = 0;
  }
  else {
    func_0x000107c5fadc(param_7,puVar1);
    func_0x000107c6142c(puVar1);
  }
  func_0x000107c47674(param_1);
  func_0x000107c61170(param_7);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_3);
  return param_1;
}


