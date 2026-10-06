/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102492058; end: 102492077;  */

void FUN_102492058(void)

{
  func_0x000107c61168(&PTR_PTR_112845d10);
  return;
}



/* Entry: 102492078; end: 1024920df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102492078(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112e9e1b8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112e9e1b8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    func_0x000100431464();
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 1024920e0; end: 1024923b7;  */

/* WARNING: Removing unreachable block (ram,0x0001024923b4) */
/* WARNING: Removing unreachable block (ram,0x0001024923ac) */
/* WARNING: Removing unreachable block (ram,0x0001024923b0) */
/* WARNING: Removing unreachable block (ram,0x0001024923a8) */

void FUN_1024920e0(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined1 auStack_f8 [144];
  undefined **ppuStack_68;
  
  ppuVar6 = (undefined **)0x112e9e1e8;
  func_0x0001000285a8(0x112e9e1e8,&UNK_10daadee0);
  func_0x000107c61534();
  ppuVar6[3] = (undefined *)0x4;
  ppuVar6[2] = (undefined *)0x2;
  ppuVar8 = ppuVar6 + 4;
  *ppuVar8 = (undefined *)&PTR____CFConstantStringClassReference_110daf5b8;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  puVar2 = (undefined *)0x0;
  FUN_1024933b0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  ppuVar6[8] = puVar2;
  ppuVar6[5] = puVar1;
  ppuVar6[9] = (undefined *)&PTR____CFConstantStringClassReference_110dcad78;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  ppuVar6[0xd] = puVar2;
  ppuVar6[10] = puVar1;
  ppuVar3 = ppuVar6;
  FUN_1024932ac();
  func_0x000107c61588(ppuVar6);
  uVar4 = 0x112e9e1f0;
  func_0x0001000285a8(0x112e9e1f0,&UNK_10db2b4f0);
  ppuVar6 = (undefined **)0x2;
  func_0x000107c61408(ppuVar8,2,uVar4);
  ppuStack_68 = ppuVar3;
  if (param_3 != (undefined **)0x0) {
    ppuVar8 = &PTR____CFConstantStringClassReference_110dc60f8;
    func_0x000107c61174();
    ppuVar5 = param_3;
    func_0x000108f51f98();
    func_0x000107c61180();
    if (ppuVar5 == (undefined **)0x0) {
      ppuStack_118 = (undefined **)0x0;
      ppuStack_120 = (undefined **)0x0;
      puStack_108 = (undefined *)0x0;
      uStack_110 = 0;
      ppuVar6 = (undefined **)0x112d387f8;
      func_0x0001024933f0(&ppuStack_120,0x112d387f8,&UNK_10d902650);
      func_0x000102492ad0(auStack_f8,&PTR____CFConstantStringClassReference_110dc60f8);
      func_0x000107c61170(&PTR____CFConstantStringClassReference_110dc60f8);
      func_0x0001024933f0(auStack_f8,0x112d387f8,&UNK_10d902650);
      func_0x000107c61170();
      ppuVar8 = param_3;
    }
    else {
      ppuVar7 = ppuVar5;
      func_0x000107c5faec();
      func_0x000107c61170(ppuVar5);
      uStack_110 = 0;
      puStack_108 = PTR___sSSN_11034da80;
      ppuStack_120 = ppuVar7;
      ppuStack_118 = ppuVar6;
      func_0x000100102924(&ppuStack_120,auStack_f8);
      ppuVar5 = ppuVar3;
      func_0x000107c61558(ppuVar3);
      ppuVar6 = ppuVar8;
      ppuStack_120 = ppuVar3;
      func_0x000102492b94(auStack_f8,&PTR____CFConstantStringClassReference_110dc60f8,ppuVar5);
      func_0x000107c61170(param_3);
      func_0x000107c61170();
      ppuStack_68 = ppuStack_120;
    }
  }
  FUN_102492078();
  ppuVar7 = &PTR____CFConstantStringClassReference_110f41518;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f41518);
  func_0x000107c61170(&PTR____CFConstantStringClassReference_110f41518);
  ppuVar3 = ppuStack_68;
  ppuVar5 = ppuStack_68;
  FUN_1024925ac(ppuStack_68);
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & (ulong)*ppuVar8) + 0x90))
            (ppuVar7,ppuVar6,0xd00000000000002e,0x800000010f0a2810,ppuVar5);
  func_0x000107c6142c(ppuVar3);
  func_0x000107c61170(ppuVar8);
  func_0x000107c6142c(ppuVar6);
  func_0x000107c6142c(ppuVar5);
  return;
}



/* Entry: 1024923b8; end: 10249241b; -[_TtC39SCCreatorsLoggingServicesImplementation26CreatorsDiscoverFeedLogger logSpotlightCreationMenuOpenedWithStoryId:pageType:] */

/* WARNING: Possible PIC construction at 0x000102492404: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102492408) */

void FUN_1024923b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1024920e0(0x6e,param_4,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10249241c; end: 10249247f; -[_TtC39SCCreatorsLoggingServicesImplementation26CreatorsDiscoverFeedLogger logSpotlightCreationMenuDismissedWithStoryId:pageType:] */

/* WARNING: Possible PIC construction at 0x000102492468: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010249246c) */

void FUN_10249241c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1024920e0(0x72,param_4,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102492480; end: 1024924e3; -[_TtC39SCCreatorsLoggingServicesImplementation26CreatorsDiscoverFeedLogger logSpotlightCreationMenuUploadTappedWithStoryId:pageType:] */

/* WARNING: Possible PIC construction at 0x0001024924cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024924d0) */

void FUN_102492480(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1024920e0(0x70,param_4,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1024924e4; end: 102492547; -[_TtC39SCCreatorsLoggingServicesImplementation26CreatorsDiscoverFeedLogger logSpotlightCreationMenuCreateTappedWithStoryId:pageType:] */

/* WARNING: Possible PIC construction at 0x000102492530: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102492534) */

void FUN_1024924e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1024920e0(0x6f,param_4,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102492548; end: 1024925ab; -[_TtC39SCCreatorsLoggingServicesImplementation26CreatorsDiscoverFeedLogger logSpotlightMediaPickerOpenedWithStoryId:pageType:] */

/* WARNING: Possible PIC construction at 0x000102492594: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102492598) */

void FUN_102492548(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1024920e0(0x8e,param_4,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1024925ac; end: 1024928bb;  */

undefined * FUN_1024925ac(long param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [32];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [40];
  undefined1 auStack_e0 [32];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined1 auStack_88 [40];
  
  puVar10 = *(undefined **)(param_1 + 0x10);
  puVar12 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar10 != (undefined *)0x0) {
    uVar3 = 0x112d37798;
    func_0x0001000285a8(0x112d37798,&UNK_10d902e10);
    func_0x000107c60498(puVar10,uVar3);
    puVar12 = puVar10;
  }
  uVar7 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar7 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(param_1 + 0x40);
  func_0x000107c6157c(puVar12);
  func_0x000107c61434(param_1);
  lVar13 = 0;
  while( true ) {
    for (; uVar14 != 0; uVar14 = uVar14 - 1 & uVar14) {
      uVar5 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | lVar13 << 6;
      uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x30) + uVar5 * 8);
      uStack_90 = uVar11;
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + uVar5 * 0x20,auStack_88);
      uVar3 = 0;
      uStack_180 = uVar11;
      FUN_1024933b0(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x000107c61174(uVar11);
      func_0x000107c61174();
      func_0x000107c6147c(&uStack_178,&uStack_180,uVar3,PTR___ss11AnyHashableVN_11034e448,7);
      func_0x0001000bb420(auStack_88,auStack_150);
      func_0x0001024933f0(&uStack_90,0x112e9e200,&UNK_10db2ac70);
      if (lStack_160 == 0) {
        func_0x000107c61574(param_1);
        func_0x0001024933f0(&uStack_178,0x112d55e70,&UNK_10d92d170);
        func_0x000107c61574(puVar12);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1024928bc);
        (*pcVar1)();
      }
      uStack_128 = uStack_170;
      uStack_130 = uStack_178;
      lStack_118 = lStack_160;
      uStack_120 = uStack_168;
      uStack_110 = uStack_158;
      func_0x000100102924(auStack_150,auStack_108);
      uStack_b8 = uStack_128;
      uStack_c0 = uStack_130;
      lStack_a8 = lStack_118;
      uStack_b0 = uStack_120;
      uStack_a0 = uStack_110;
      func_0x000100102924(auStack_108,auStack_e0);
      uVar4 = *(ulong *)(puVar12 + 0x28);
      func_0x000107c602c4();
      uVar9 = -1L << ((ulong)(byte)puVar12[0x20] & 0x3f);
      uVar4 = uVar4 & (uVar9 ^ 0xffffffffffffffff);
      uVar6 = uVar4 >> 6;
      uVar5 = -1L << (uVar4 & 0x3f) & (*(ulong *)(puVar12 + uVar6 * 8 + 0x40) ^ 0xffffffffffffffff);
      if (uVar5 == 0) {
        bVar2 = false;
        uVar5 = 0x3f - uVar9 >> 6;
        do {
          uVar4 = uVar6 + 1;
          if ((uVar4 == uVar5) && (bVar2)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102492890);
            (*pcVar1)();
          }
          uVar6 = 0;
          if (uVar4 != uVar5) {
            uVar6 = uVar4;
          }
          bVar2 = (bool)(uVar4 == uVar5 | bVar2);
        } while (*(ulong *)(puVar12 + uVar6 * 8 + 0x40) == 0xffffffffffffffff);
        uVar5 = ~*(ulong *)(puVar12 + uVar6 * 8 + 0x40);
        uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar6 << 6;
      }
      else {
        uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar4 & 0x7fffffffffffffc0;
      }
      uVar6 = uVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar12 + uVar6 + 0x40) = 1L << (uVar5 & 0x3f) | *(ulong *)(puVar12 + uVar6 + 0x40)
      ;
      puVar8 = (undefined8 *)(*(long *)(puVar12 + 0x30) + uVar5 * 0x28);
      puVar8[1] = uStack_b8;
      *puVar8 = uStack_c0;
      puVar8[3] = lStack_a8;
      puVar8[2] = uStack_b0;
      puVar8[4] = uStack_a0;
      func_0x000100102924(auStack_e0,*(long *)(puVar12 + 0x38) + uVar5 * 0x20);
      *(long *)(puVar12 + 0x10) = *(long *)(puVar12 + 0x10) + 1;
    }
    bVar2 = SCARRY8(lVar13,1);
    lVar13 = lVar13 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10249288c);
      (*pcVar1)();
    }
    if ((long)(uVar7 + 0x3f >> 6) <= lVar13) break;
    uVar14 = ((ulong *)(param_1 + 0x40))[lVar13];
  }
  func_0x000107c61574(puVar12);
  func_0x000107c61574(param_1);
  return puVar12;
}



/* Entry: 1024928bc; end: 102492903; -[_TtC39SCCreatorsLoggingServicesImplementation26CreatorsDiscoverFeedLogger init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024928bc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112e9e1b8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102492904; end: 102492937;  */

void FUN_102492904(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102492938; end: 102492947; -[_TtC39SCCreatorsLoggingServicesImplementation26CreatorsDiscoverFeedLogger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102492938(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9e1b8));
  return;
}



/* Entry: 102492948; end: 102492973; +[_TtC39SCCreatorsLoggingServicesImplementation26CreatorsDiscoverFeedLogger announcerIdentifier] */

void FUN_102492948(void)

{
  func_0x000107c5fadc(0xd00000000000002e,0x800000010f0a2810);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102492974; end: 1024929ef; -[_TtC39SCCreatorsLoggingServicesImplementation26CreatorsDiscoverFeedLogger addListener:] */

/* WARNING: Possible PIC construction at 0x0001024929d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024929d4) */

void FUN_102492974(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174();
  FUN_102492078();
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_1) + 0x80))(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024929f0; end: 102492a6b; -[_TtC39SCCreatorsLoggingServicesImplementation26CreatorsDiscoverFeedLogger removeListener:] */

/* WARNING: Possible PIC construction at 0x000102492a4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102492a50) */

void FUN_1024929f0(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174();
  FUN_102492078();
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_1) + 0x88))(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102492a6c; end: 102492acf;  */

void FUN_102492a6c(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = param_4 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  *(undefined8 *)(*(long *)(param_4 + 0x30) + param_1 * 8) = param_2;
  func_0x000100102924(param_3,*(long *)(param_4 + 0x38) + param_1 * 0x20);
  if (!SCARRY8(*(long *)(param_4 + 0x10),1)) {
    *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102492ad0);
  (*pcVar2)();
}



/* Entry: 102492ad0; end: 102492cab;  */

void FUN_102492ad0(undefined8 *param_1,long param_2,ulong param_3)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  func_0x000107c61434(lVar2);
  func_0x000101913e60();
  func_0x000107c6142c(lVar2);
  if ((param_3 & 1) == 0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      func_0x000102492cac();
    }
    func_0x000107c61170(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_2 * 8));
    func_0x000100102924(*(long *)(lVar2 + 0x38) + param_2 * 0x20,param_1);
    func_0x0001024930b0(param_2,lVar2);
    *unaff_x20 = lVar2;
  }
  return;
}



/* Entry: 102492cac; end: 10249323f;  */

void FUN_102492cac(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_80 [32];
  
  func_0x0001000285a8(0x112e9e1f8,&UNK_10db2ac60);
  lVar8 = *unaff_x20;
  lVar4 = lVar8;
  func_0x000107c6048c();
  if (*(long *)(lVar8 + 0x10) != 0) {
    lVar1 = lVar8 + 0x40;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar8 || lVar1 + uVar5 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar5 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((*(byte *)(lVar8 + 0x20) & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar8 + 0x40);
    if (uVar5 == 0) goto LAB_102492d90;
    do {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      while( true ) {
        uVar7 = LZCOUNT(uVar7) | lVar10 << 6;
        uVar9 = *(undefined8 *)(*(long *)(lVar8 + 0x30) + uVar7 * 8);
        func_0x0001000bb420(*(long *)(lVar8 + 0x38) + uVar7 * 0x20,auStack_80);
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar7 * 8) = uVar9;
        func_0x000100102924(auStack_80,*(long *)(lVar4 + 0x38) + uVar7 * 0x20);
        func_0x000107c61174(uVar9);
        if (uVar5 != 0) break;
LAB_102492d90:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102492e30);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar2) goto LAB_102492e00;
          uVar5 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar5 == 0);
        uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar5 = uVar5 - 1 & uVar5;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_102492e00:
  func_0x000107c61574(lVar8);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 102493240; end: 10249328b;  */

void FUN_102493240(ulong *param_1)

{
  ulong *puVar1;
  
  puVar1 = param_1;
  FUN_102492078();
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar1) + 0x80))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10249328c; end: 1024932ab;  */

void FUN_10249328c(void)

{
  func_0x000107c61168(&PTR_PTR_112845dd0);
  return;
}



/* Entry: 1024932ac; end: 1024933af;  */

undefined * FUN_1024932ac(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uStack_78;
  undefined1 auStack_70 [32];
  
  puVar5 = *(undefined **)(param_1 + 0x10);
  puVar2 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar5 != (undefined *)0x0) {
    func_0x0001000285a8(0x112e9e1f8,&UNK_10db2ac60);
    puVar2 = puVar5;
    func_0x000107c60498();
    param_1 = param_1 + 0x20;
    func_0x000107c6157c();
    do {
      uVar4 = 0;
      func_0x000102493430(param_1);
      uVar3 = uStack_78;
      func_0x000101913e60();
      if ((uVar4 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1024933ac);
        (*pcVar1)();
      }
      uVar4 = uVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar4 + 0x40) = *(ulong *)(puVar2 + uVar4 + 0x40) | 1L << (uVar3 & 0x3f);
      *(ulong *)(*(long *)(puVar2 + 0x30) + uVar3 * 8) = uStack_78;
      func_0x000100102924(auStack_70,*(long *)(puVar2 + 0x38) + uVar3 * 0x20);
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1024933b0);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      param_1 = param_1 + 0x28;
      puVar5 = puVar5 + -1;
    } while (puVar5 != (undefined *)0x0);
    func_0x000107c61574(puVar2);
  }
  return puVar2;
}



/* Entry: 1024933b0; end: 10249347f;  */

void FUN_1024933b0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102493480; end: 10249367f;  */

long FUN_102493480(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_110511120;
  func_0x000107c613fc(&UNK_110511120,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  pcStack_50 = FUN_102493718;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_102493720;
  puStack_58 = &UNK_110511138;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c60bd0(ppuVar3);
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  return unaff_x20;
}



/* Entry: 102493680; end: 102493717;  */

undefined8 FUN_102493680(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0;
  FUN_10249328c(0);
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c4ac44();
  func_0x000107c61180();
  lVar2 = param_1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (lVar2 != 0) {
    func_0x000107c614f0(lVar2);
    func_0x000107c615f0(lVar2);
    FUN_102493240();
    func_0x000107c615ec(lVar2,2);
  }
  return uVar1;
}



/* Entry: 102493718; end: 10249371f;  */

undefined8 FUN_102493718(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = 0;
  FUN_10249328c(0);
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c4ac44();
  func_0x000107c61180();
  lVar2 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar2 != 0) {
    func_0x000107c614f0(lVar2);
    func_0x000107c615f0(lVar2);
    FUN_102493240();
    func_0x000107c615ec(lVar2,2);
  }
  return uVar1;
}



/* Entry: 102493720; end: 102493757;  */

void FUN_102493720(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102493758; end: 102493773;  */

void FUN_102493758(long param_1,long param_2)

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



/* Entry: 102493774; end: 1024937ab;  */

void FUN_102493774(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x00010032d360(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar1);
  func_0x0001024ce7e0();
  return;
}



/* Entry: 1024937ac; end: 1024937b3;  */

void FUN_1024937ac(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1024937b4; end: 102493853;  */

void FUN_1024937b4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102493854; end: 10249389f;  */

void FUN_102493854(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x00010032d360(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x0001024ce7e0();
  *param_1 = uVar1;
  return;
}



/* Entry: 1024938a0; end: 1024938ab;  */

void FUN_1024938a0(long param_1,long param_2)

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



/* Entry: 1024938ac; end: 102493917;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024938ac(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102493ca0();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e9e2e0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102493918; end: 102493983;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102493918(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9e2e0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102493984; end: 1024939e3; -[_TtC40DSAExplainerScopedFactoryServiceProvider28SCDSAExplainerScopedServices init] */

void FUN_102493984(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DSAExplainerScopedFactoryServiceProvider.SCDSAExplainerScopedServices",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024939b0);
  (*pcVar1)();
}



/* Entry: 1024939e4; end: 1024939f3; -[_TtC40DSAExplainerScopedFactoryServiceProvider28SCDSAExplainerScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024939e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e9e2e0));
  return;
}



/* Entry: 1024939f4; end: 102493a5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024939f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110511390;
  func_0x000107c613fc(&UNK_110511390,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_102493d38,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102493a60; end: 102493afb;  */

void FUN_102493a60(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1105112a0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1105112a0;
  return;
}



/* Entry: 102493afc; end: 102493b33;  */

void FUN_102493afc(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 102493b34; end: 102493b3b;  */

undefined8 FUN_102493b34(void)

{
  return 0x1b;
}



/* Entry: 102493b3c; end: 102493c6f;  */

void FUN_102493b3c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1105113b8;
  func_0x000107c613fc(&UNK_1105113b8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102493d10;
  func_0x00010058fa64(FUN_102493d10,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102493c70; end: 102493c9f;  */

undefined ** FUN_102493c70(void)

{
  return &PTR_DAT_112fede40;
}



/* Entry: 102493ca0; end: 102493cbf;  */

void FUN_102493ca0(void)

{
  func_0x000107c61168(&PTR_PTR_112845e88);
  return;
}



/* Entry: 102493cc0; end: 102493d0f;  */

undefined1  [16] FUN_102493cc0(void)

{
  return ZEXT816(0x1105112f0);
}



/* Entry: 102493d10; end: 102493d37;  */

void FUN_102493d10(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 102493d38; end: 102493d3b;  */

void FUN_102493d38(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102493d3c; end: 102493e2b;  */

/* WARNING: Possible PIC construction at 0x000102493dec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102493dfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102493e0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102493e00) */
/* WARNING: Removing unreachable block (ram,0x000102493df0) */
/* WARNING: Removing unreachable block (ram,0x000102493e10) */

void FUN_102493d3c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_110511440;
  func_0x000107c613fc(&UNK_110511440,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  uVar2 = 0x112e9e350;
  func_0x0001000285a8(0x112e9e350,&UNK_10daae160);
  func_0x000107c613fc();
  pcVar3 = FUN_1024942c0;
  func_0x0001000841fc(FUN_1024942c0,puVar1,uVar2);
  func_0x000100084214(&UNK_10daae130,0x2a,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 102493e2c; end: 102493e4b;  */

/* WARNING: Possible PIC construction at 0x000102493dec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102493dfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102493e0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102493e00) */
/* WARNING: Removing unreachable block (ram,0x000102493df0) */
/* WARNING: Removing unreachable block (ram,0x000102493e10) */

void FUN_102493e2c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  puVar6 = &UNK_110511440;
  func_0x000107c613fc(&UNK_110511440,0x40,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  *(undefined8 *)(puVar6 + 0x20) = uVar7;
  *(undefined8 *)(puVar6 + 0x28) = uVar4;
  *(undefined8 *)(puVar6 + 0x30) = uVar2;
  *(undefined8 *)(puVar6 + 0x38) = uVar5;
  uVar7 = 0x112e9e350;
  func_0x0001000285a8(0x112e9e350,&UNK_10daae160);
  func_0x000107c613fc();
  pcVar8 = FUN_1024942c0;
  func_0x0001000841fc(FUN_1024942c0,puVar6,uVar7);
  func_0x000100084214(&UNK_10daae130,0x2a,2);
  *param_1 = pcVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102493e4c; end: 102494273;  */

void FUN_102493e4c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 *puVar4;
  char *pcVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  code *pcVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_68;
  
  uVar12 = *param_2;
  func_0x0001000285a8(0x112e9e358,&UNK_10daae168);
  puVar1 = &uStack_68;
  uStack_68 = uVar12;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x000102495b08();
  pcVar3 = "SCSettingsScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCSettingsScopeExposerSubjectServiceProvider",0x2c,2);
  func_0x000102495b88();
  func_0x000100082720("WebBrowsingScopeExposerSubjectServiceProvider",0x2d,2);
  puVar4 = puVar2;
  FUN_102495b48();
  func_0x000100082720("SCSettingsScopeExposerObservableServiceProvider",0x2f,2);
  pcVar5 = pcVar3;
  FUN_102495c14();
  func_0x000100082720("WebBrowsingScopeExposerObservableServiceProvider",0x30,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar6 = FUN_102493afc;
  func_0x0001000823a8(FUN_102493afc,0);
  func_0x000100082720("SCDSAExplainerScopedServicesCleanupRelayServiceProvider",0x37,2);
  puVar7 = puVar2;
  FUN_10249595c(puVar2,pcVar3);
  func_0x000100082720("DSAExplainerScopeGraphBridgeServicesServiceProvider",0x33,2);
  func_0x0001000285a8(0x112e9e360,&UNK_10daae180);
  puVar8 = &UNK_110511468;
  func_0x000107c613fc(&UNK_110511468,0x58,7);
  *(undefined8 **)(puVar8 + 0x10) = puVar1;
  *(undefined8 *)(puVar8 + 0x18) = param_3;
  *(undefined8 *)(puVar8 + 0x20) = param_4;
  *(undefined8 *)(puVar8 + 0x28) = param_5;
  *(undefined8 *)(puVar8 + 0x30) = param_6;
  *(undefined8 *)(puVar8 + 0x38) = param_7;
  *(undefined8 *)(puVar8 + 0x40) = param_8;
  *(undefined8 **)(puVar8 + 0x48) = puVar4;
  *(char **)(puVar8 + 0x50) = pcVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(puVar4);
  func_0x000107c6157c(pcVar5);
  pcVar9 = FUN_1024942d0;
  func_0x0001000823a8(FUN_1024942d0,puVar8);
  func_0x000100082720("SCDSAExplainerEntryPointWrapperServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112e9e368,&UNK_10daae170);
  puVar8 = &UNK_110511490;
  func_0x000107c613fc(&UNK_110511490,0x30,7);
  *(undefined8 **)(puVar8 + 0x10) = puVar1;
  *(undefined8 **)(puVar8 + 0x18) = puVar7;
  *(code **)(puVar8 + 0x20) = pcVar9;
  *(code **)(puVar8 + 0x28) = pcVar6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar7);
  func_0x000107c6157c(pcVar9);
  func_0x000107c6157c(pcVar6);
  pcVar10 = FUN_102494304;
  func_0x0001000823a8(FUN_102494304,puVar8);
  func_0x000100082720("SCDSAExplainerScopeInitializationPluginRegistryServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112e9e2e8,&UNK_10daadf30);
  func_0x000107c6157c(pcVar10);
  uVar12 = 0x102494310;
  func_0x0001000823a8(0x102494310,pcVar10);
  func_0x000100082720("SCDSAExplainerScopeInitializationServiceProvider",0x30,2);
  func_0x0001000285a8(0x112e9e2d8,&UNK_10daadf20);
  func_0x000107c6157c(uVar12);
  uVar11 = 0x102494318;
  func_0x0001000823a8(0x102494318,uVar12);
  func_0x000100082720("SCDSAExplainerScopedServicesServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar8 = &UNK_1105114b8;
  func_0x000107c613fc(&UNK_1105114b8,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar11;
  *(code **)(puVar8 + 0x18) = pcVar6;
  func_0x000107c6157c(pcVar6);
  uVar11 = 0x102494320;
  func_0x0001000823a8(0x102494320,puVar8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(pcVar10);
  func_0x000107c61574(uVar12);
  func_0x000100082720("SCDSAExplainerScopeEntryPointProvider",0x25,2);
  *param_1 = uVar11;
  return;
}



/* Entry: 102494274; end: 1024942bf;  */

void FUN_102494274(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1024942c0; end: 1024942cf;  */

void FUN_1024942c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 *puVar8;
  char *pcVar9;
  code *pcVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  code *pcVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long unaff_x20;
  undefined8 uStack_68;
  
  uVar15 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar17 = *param_2;
  func_0x0001000285a8(0x112e9e358,&UNK_10daae168);
  puVar5 = &uStack_68;
  uStack_68 = uVar17;
  func_0x0001000838ec();
  puVar6 = puVar5;
  func_0x000102495b08();
  pcVar7 = "SCSettingsScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCSettingsScopeExposerSubjectServiceProvider",0x2c,2);
  func_0x000102495b88();
  func_0x000100082720("WebBrowsingScopeExposerSubjectServiceProvider",0x2d,2);
  puVar8 = puVar6;
  FUN_102495b48();
  func_0x000100082720("SCSettingsScopeExposerObservableServiceProvider",0x2f,2);
  pcVar9 = pcVar7;
  FUN_102495c14();
  func_0x000100082720("WebBrowsingScopeExposerObservableServiceProvider",0x30,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar10 = FUN_102493afc;
  func_0x0001000823a8(FUN_102493afc,0);
  func_0x000100082720("SCDSAExplainerScopedServicesCleanupRelayServiceProvider",0x37,2);
  puVar11 = puVar6;
  FUN_10249595c(puVar6,pcVar7);
  func_0x000100082720("DSAExplainerScopeGraphBridgeServicesServiceProvider",0x33,2);
  func_0x0001000285a8(0x112e9e360,&UNK_10daae180);
  puVar12 = &UNK_110511468;
  func_0x000107c613fc(&UNK_110511468,0x58,7);
  *(undefined8 **)(puVar12 + 0x10) = puVar5;
  *(undefined8 *)(puVar12 + 0x18) = uVar15;
  *(undefined8 *)(puVar12 + 0x20) = uVar2;
  *(undefined8 *)(puVar12 + 0x28) = uVar16;
  *(undefined8 *)(puVar12 + 0x30) = uVar3;
  *(undefined8 *)(puVar12 + 0x38) = uVar1;
  *(undefined8 *)(puVar12 + 0x40) = uVar4;
  *(undefined8 **)(puVar12 + 0x48) = puVar8;
  *(char **)(puVar12 + 0x50) = pcVar9;
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(uVar15);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar16);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(puVar8);
  func_0x000107c6157c(pcVar9);
  pcVar13 = FUN_1024942d0;
  func_0x0001000823a8(FUN_1024942d0,puVar12);
  func_0x000100082720("SCDSAExplainerEntryPointWrapperServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112e9e368,&UNK_10daae170);
  puVar12 = &UNK_110511490;
  func_0x000107c613fc(&UNK_110511490,0x30,7);
  *(undefined8 **)(puVar12 + 0x10) = puVar5;
  *(undefined8 **)(puVar12 + 0x18) = puVar11;
  *(code **)(puVar12 + 0x20) = pcVar13;
  *(code **)(puVar12 + 0x28) = pcVar10;
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(puVar11);
  func_0x000107c6157c(pcVar13);
  func_0x000107c6157c(pcVar10);
  pcVar14 = FUN_102494304;
  func_0x0001000823a8(FUN_102494304,puVar12);
  func_0x000100082720("SCDSAExplainerScopeInitializationPluginRegistryServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112e9e2e8,&UNK_10daadf30);
  func_0x000107c6157c(pcVar14);
  uVar15 = 0x102494310;
  func_0x0001000823a8(0x102494310,pcVar14);
  func_0x000100082720("SCDSAExplainerScopeInitializationServiceProvider",0x30,2);
  func_0x0001000285a8(0x112e9e2d8,&UNK_10daadf20);
  func_0x000107c6157c(uVar15);
  uVar16 = 0x102494318;
  func_0x0001000823a8(0x102494318,uVar15);
  func_0x000100082720("SCDSAExplainerScopedServicesServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar12 = &UNK_1105114b8;
  func_0x000107c613fc(&UNK_1105114b8,0x20,7);
  *(undefined8 *)(puVar12 + 0x10) = uVar16;
  *(code **)(puVar12 + 0x18) = pcVar10;
  func_0x000107c6157c(pcVar10);
  uVar16 = 0x102494320;
  func_0x0001000823a8(0x102494320,puVar12);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(pcVar10);
  func_0x000107c61574(puVar11);
  func_0x000107c61574(pcVar13);
  func_0x000107c61574(pcVar14);
  func_0x000107c61574(uVar15);
  func_0x000100082720("SCDSAExplainerScopeEntryPointProvider",0x25,2);
  *param_1 = uVar16;
  return;
}



/* Entry: 1024942d0; end: 102494303;  */

void FUN_1024942d0(void)

{
  long unaff_x20;
  
  FUN_102494328(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 102494304; end: 102494327;  */

void FUN_102494304(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102495088(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCDSAExplainerScopeInitializationPluginRegistryServiceProvider",0x3e,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102494328; end: 102494e4f;  */

void FUN_102494328(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  FUN_102494fd8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  *(undefined8 *)(param_2 + 0x50) = uStack_a0;
  func_0x0001000285a8(0x112e51dd8,&UNK_10da52048);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174();
  uVar6 = uStack_a0;
  func_0x000107c61174(uStack_a0);
  uVar11 = uStack_a8;
  func_0x000107c6157c(uStack_a8);
  func_0x00010017da58();
  puVar7 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar11);
  *(undefined **)(param_2 + 0x18) = puVar7;
  func_0x0001000285a8(0x112e4de20,&UNK_10da49000);
  func_0x000107c610f8();
  uVar11 = uStack_b0;
  func_0x000107c6157c(uStack_b0);
  func_0x00010017da58();
  puVar8 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar11);
  *(undefined **)(param_2 + 0x20) = puVar8;
  puVar9 = PTR_PTR_1126aa8f8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar9;
  func_0x000107c61174();
  uVar10 = auStack_70[0];
  func_0x000107c61174();
  uVar11 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f0a2a70);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(puVar9);
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar9);
  uVar11 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef19c30);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar9);
  uVar11 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efbaa40);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar9);
  uVar11 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef3c3c0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar9);
  uVar11 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f0a2a90);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f05c530);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(puVar7);
  uVar11 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f05c870);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(puVar8);
  uVar11 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12670);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c3e740(puVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(uStack_a8);
  func_0x000107c61574(uStack_b0);
  *param_1 = param_2;
  return;
}



/* Entry: 102494e50; end: 102494ecb;  */

void FUN_102494e50(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 102494ecc; end: 102494ed3;  */

undefined8 FUN_102494ecc(void)

{
  return 0x1b;
}



/* Entry: 102494ed4; end: 102494f57;  */

void FUN_102494ed4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102495018,param_2,FUN_10249501c,param_2,FUN_102495044,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102494f58; end: 102494fa7;  */

undefined8 FUN_102494f58(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102494fa8; end: 102494fd7;  */

undefined ** FUN_102494fa8(void)

{
  return &PTR_DAT_112fede40;
}



/* Entry: 102494fd8; end: 102494ff7;  */

void FUN_102494fd8(void)

{
  func_0x000107c61168(&PTR_PTR_112e9e3d8);
  return;
}



/* Entry: 102494ff8; end: 10249501b;  */

undefined1  [16] FUN_102494ff8(void)

{
  return ZEXT816(0x110511510);
}



/* Entry: 10249501c; end: 102495043;  */

void FUN_10249501c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102495044; end: 10249504b;  */

undefined8 FUN_102495044(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 10249504c; end: 102495087;  */

void FUN_10249504c(undefined8 *param_1,undefined8 param_2)

{
  FUN_102495088();
  func_0x0001000a7f38("SCDSAExplainerScopeInitializationPluginRegistryServiceProvider",0x3e,2);
  *param_1 = param_2;
  return;
}



/* Entry: 102495088; end: 102495273;  */

void FUN_102495088(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1106d6ef0;
  ppuVar4 = &PTR_DAT_112fede40;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_110511560;
  func_0x000107c613fc(&UNK_110511560,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112e9e478;
  func_0x0001000285a8(0x112e9e478,&UNK_10daae2d8);
  func_0x0001000a6ee8(&UNK_1105117c0,"DSAExplainerScopeGraphBridgeScopeInitializationPluginKey",0x38
                      ,2,FUN_102495274,puVar2,uVar3,&UNK_1105117c0,&PTR_DAT_112e9e518);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110511510,"SCDSAExplainerEntryPointWrapperScopeInitializationPluginKey",
                      0x3b,2,FUN_102495328,param_3,uVar3,&UNK_110511510,&PTR_DAT_112e9e370);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_110511588;
  func_0x000107c613fc(&UNK_110511588,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110511330,"SCDSAExplainerScopedServicesScopeInitializationPluginKey",0x38
                      ,2,FUN_1024953d8,puVar2,uVar3,&UNK_110511330,&PTR_DAT_112e9e2f0);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112e9e480;
  func_0x0001000285a8(0x112e9e480,&UNK_10daae2e0);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 102495274; end: 1024952b3;  */

void FUN_102495274(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000102495c80(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("DSAExplainerScopeGraphBridgeScopeInitializationPluginProvider",0x3d,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1024952b4; end: 102495327;  */

void FUN_1024952b4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x102495414;
  func_0x0001000823a8(0x102495414,param_3);
  func_0x000100082720("SCDSAExplainerEntryPointWrapperScopeInitializationPluginProvider",0x40,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102495328; end: 10249532f;  */

void FUN_102495328(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x102495414;
  func_0x0001000823a8();
  func_0x000100082720("SCDSAExplainerEntryPointWrapperScopeInitializationPluginProvider",0x40,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102495330; end: 1024953d7;  */

void FUN_102495330(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105115b0;
  func_0x000107c613fc(&UNK_1105115b0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_10249540c;
  func_0x0001000823a8(FUN_10249540c,puVar1);
  func_0x000100082720("SCDSAExplainerScopedServicesScopeInitializationPluginProvider",0x3d,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1024953d8; end: 1024953df;  */

void FUN_1024953d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1105115b0;
  func_0x000107c613fc(&UNK_1105115b0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_10249540c;
  func_0x0001000823a8(FUN_10249540c,puVar3);
  func_0x000100082720("SCDSAExplainerScopedServicesScopeInitializationPluginProvider",0x3d,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1024953e0; end: 10249540b;  */

void FUN_1024953e0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10249540c; end: 10249541b;  */

void FUN_10249540c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1105113b8;
  func_0x000107c613fc(&UNK_1105113b8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102493d10;
  func_0x00010058fa64(FUN_102493d10,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10249541c; end: 102495533;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10249541c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar4 = auStack_70;
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_10249586c();
  if (lVar3 != 0) {
    func_0x000100083b20(&uStack_58);
    uVar1 = uStack_58;
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_3;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112e9e488) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112e9e490) = param_4;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102495534);
  (*pcVar2)();
}



/* Entry: 102495534; end: 102495593; -[_TtC28DSAExplainerScopeGraphBridge43DSAExplainerScopeGraphBridgeSaberEntryPoint init] */

void FUN_102495534(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DSAExplainerScopeGraphBridge.DSAExplainerScopeGraphBridgeSaberEntryPoint",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102495560);
  (*pcVar1)();
}



/* Entry: 102495594; end: 1024955cb; -[_TtC28DSAExplainerScopeGraphBridge43DSAExplainerScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024955b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024955b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102495594(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9e488));
  return;
}



/* Entry: 1024955cc; end: 1024955f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024955cc(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e9e490),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e9e488));
  return;
}



/* Entry: 1024955f4; end: 102495613;  */

void FUN_1024955f4(void)

{
  func_0x000107c61168(&PTR_PTR_112845f48);
  return;
}



/* Entry: 102495614; end: 10249569b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102495614(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9e4c0) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e9e4c8);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10249569c);
  (*pcVar2)();
}



/* Entry: 10249569c; end: 102495783;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10249569c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e9e4c0);
  *(undefined **)(unaff_x20 + _DAT_112e9e4c0) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e9e4c8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e9e4c8))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110511678;
  func_0x000107c613fc(&UNK_110511678,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x102495788,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 102495784; end: 10249578f;  */

void FUN_102495784(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102495790; end: 1024957ef; -[_TtC28DSAExplainerScopeGraphBridge43SCDSAExplainerScopedServicesSaberEntryPoint init] */

void FUN_102495790(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DSAExplainerScopeGraphBridge.SCDSAExplainerScopedServicesSaberEntryPoint",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024957bc);
  (*pcVar1)();
}



/* Entry: 1024957f0; end: 102495827; -[_TtC28DSAExplainerScopeGraphBridge43SCDSAExplainerScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024957f0(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e9e4c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9e4c0));
  return;
}



/* Entry: 102495828; end: 10249582b;  */

void FUN_102495828(void)

{
  return;
}



/* Entry: 10249582c; end: 10249584b;  */

void FUN_10249582c(void)

{
  FUN_10249569c();
  return;
}



/* Entry: 10249584c; end: 10249586b;  */

void FUN_10249584c(void)

{
  func_0x000107c61168(&PTR_PTR_112846010);
  return;
}



/* Entry: 10249586c; end: 10249593b;  */

undefined8 FUN_10249586c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112e9e4f8,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_10249593c();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 10249593c; end: 10249595b;  */

void FUN_10249593c(void)

{
  func_0x000107c61168(&PTR_PTR_1128460d8);
  return;
}



/* Entry: 10249595c; end: 10249597f;  */

void FUN_10249595c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105116c0;
  func_0x0001000285a8(0x112e9e500,&UNK_10daae398);
  func_0x000107c613fc(&UNK_1105116c0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102495a04,puVar1);
  return;
}



/* Entry: 102495980; end: 102495a03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102495980(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_10249593c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112e9e508) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112e9e510) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 102495a04; end: 102495a0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102495a04(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_40;
  lVar4 = lVar1;
  FUN_10249593c();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112e9e508) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112e9e510) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 102495a0c; end: 102495a6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102495a0c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9e508) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e9e510) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102495a70; end: 102495acf; -[_TtC28DSAExplainerScopeGraphBridge36DSAExplainerScopeGraphBridgeServices init] */

void FUN_102495a70(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DSAExplainerScopeGraphBridge.DSAExplainerScopeGraphBridgeServices",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102495a9c);
  (*pcVar1)();
}



/* Entry: 102495ad0; end: 102495b47; -[_TtC28DSAExplainerScopeGraphBridge36DSAExplainerScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102495aec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102495af0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102495ad0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e9e508));
  return;
}



/* Entry: 102495b48; end: 102495b53;  */

void FUN_102495b48(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102495b54,param_1);
  return;
}



/* Entry: 102495b54; end: 102495c13;  */

void FUN_102495b54(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 102495c14; end: 102495c1f;  */

void FUN_102495c14(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102495f44,param_1);
  return;
}



/* Entry: 102495c20; end: 102495c77;  */

void FUN_102495c20(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 102495c78; end: 102495ca3;  */

undefined8 FUN_102495c78(void)

{
  return 0x1b;
}



/* Entry: 102495ca4; end: 102495d23;  */

void FUN_102495ca4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c613fc(param_5,0x20,7);
  *(undefined8 *)(param_5 + 0x10) = param_1;
  *(undefined8 *)(param_5 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(param_6,param_5);
  return;
}



/* Entry: 102495d24; end: 102495e1b;  */

void FUN_102495d24(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50);
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112e9e4f8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e9e4f8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110511800;
  func_0x000107c613fc(&UNK_110511800,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102495f3c;
  func_0x00010058fa64(0x102495f3c,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}


