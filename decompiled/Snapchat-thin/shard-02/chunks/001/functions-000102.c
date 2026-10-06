/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10196d434; end: 10196d473;  */

void FUN_10196d434(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10196d474; end: 10196d49f;  */

/* WARNING: Possible PIC construction at 0x00010196c8c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010196c91c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010196c8c4) */
/* WARNING: Removing unreachable block (ram,0x00010196c920) */

void FUN_10196d474(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  if ((param_2 == 0) && (param_1 != 0)) {
    func_0x000107c61428(lVar4 + 0x10,&uStack_58,0,0);
    lVar4 = lVar4 + 0x10;
    func_0x000107c61618();
    if (lVar4 != 0) {
      func_0x00010196c954(uVar2,uVar1,uVar3);
      func_0x000107c61170(lVar4);
    }
    return;
  }
  uStack_58 = 0;
  uStack_50 = 0xe000000000000000;
  func_0x000107c602fc(0x23);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uStack_50);
  return;
}



/* Entry: 10196d4a0; end: 10196d54b;  */

void FUN_10196d4a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  return;
}



/* Entry: 10196d54c; end: 10196d5f7;  */

code * FUN_10196d54c(void)

{
  undefined *puVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  puVar1 = &UNK_11041ae28;
  func_0x000107c613fc(&UNK_11041ae28,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  func_0x0001000285a8(0x112ddb460,&UNK_10d9a0220);
  func_0x000107c613fc();
  pcVar2 = FUN_10196d66c;
  func_0x0001000bdd8c(FUN_10196d66c,puVar1);
  pcVar3 = pcVar2;
  func_0x0001000bf56c();
  uVar4 = 0;
  func_0x00010023efb0(0);
  func_0x000107c610f8();
  func_0x0001028624d8(pcVar3,uVar4);
  func_0x000107c61574(pcVar2);
  return pcVar3;
}



/* Entry: 10196d5f8; end: 10196d66b;  */

void FUN_10196d5f8(long *param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_2;
    FUN_10196d674();
    func_0x000107c61574(param_2);
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 10196d66c; end: 10196d673;  */

void FUN_10196d66c(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    FUN_10196d674();
    func_0x000107c61574(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 10196d674; end: 10196d7bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10196d674(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar8 = *(undefined8 *)(*(long *)(unaff_x20 + 0x30) + _DAT_11305e778);
  func_0x000107c6157c(uVar8);
  func_0x0001000d224c(auStack_68);
  func_0x000107c61574(uVar8);
  puVar1 = auStack_68;
  func_0x0001000a8868(puVar1,uStack_50);
  uVar8 = 2;
  func_0x00010043c5c0(2,0,0,uStack_50,uStack_48,puVar1);
  func_0x0001000834e4(auStack_68);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c3f854();
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c4c984();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c4d48c();
  func_0x000107c61180();
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c4ed78();
  func_0x000107c61180();
  lVar6 = 0;
  FUN_10196d30c();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(undefined8 *)(lVar7 + _DAT_112ddb410) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112ddb418) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112ddb420) = uVar4;
  *(undefined8 *)(lVar7 + _DAT_112ddb428) = uVar5;
  *(undefined8 *)(lVar7 + _DAT_112ddb430) = uVar8;
  lStack_78 = lVar7;
  lStack_70 = lVar6;
  func_0x000107c61154(&lStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10196d7c0; end: 10196d7f3;  */

/* WARNING: Possible PIC construction at 0x00010196d7cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010196d7dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010196d7d0) */
/* WARNING: Removing unreachable block (ram,0x00010196d7e0) */

void FUN_10196d7c0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10196d7f4; end: 10196d857;  */

void FUN_10196d7f4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10196d858; end: 10196d8db;  */

void FUN_10196d858(undefined8 param_1)

{
  if (lRam0000000112ddb490 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e65d200);
  return;
}



/* Entry: 10196d8dc; end: 10196d993;  */

void FUN_10196d8dc(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  puVar1 = &UNK_11041ae28;
  func_0x000107c613fc(&UNK_11041ae28,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  func_0x0001000285a8(0x112ddb460,&UNK_10d9a0220);
  func_0x000107c613fc();
  pcVar2 = FUN_10196d994;
  func_0x0001000bdd8c(FUN_10196d994,puVar1);
  pcVar3 = pcVar2;
  func_0x0001000bf56c();
  uVar4 = 0;
  func_0x00010023efb0(0);
  func_0x000107c610f8();
  func_0x0001028624d8(pcVar3,uVar4);
  func_0x000107c61574(pcVar2);
  *param_1 = pcVar3;
  return;
}



/* Entry: 10196d994; end: 10196d997;  */

void FUN_10196d994(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    FUN_10196d674();
    func_0x000107c61574(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 10196d998; end: 10196dad7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10196d998(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_90 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  puVar4 = auStack_90;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ddb558) = param_1;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_11041aee8;
  func_0x000107c613fc(&UNK_11041aee8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  pcStack_60 = FUN_10196eb38;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100619acc;
  puStack_68 = &UNK_11041af00;
  ppuVar3 = &puStack_80;
  puStack_58 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar2 = puStack_58;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  *(undefined **)(unaff_x20 + _DAT_112ddb560) = puVar1;
  func_0x000107c61154(auStack_90,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return puVar4;
}



/* Entry: 10196dad8; end: 10196dbbb;  */

void FUN_10196dad8(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar3 = 0x13;
  }
  else {
    uVar2 = 0xd00000000000001b;
    func_0x000107c5fadc(0xd00000000000001b,0x800000010efc3850);
    lVar3 = param_1;
    func_0x000107c4980c();
    func_0x000107c615e8(param_1);
    func_0x000107c61170(uVar2);
    lVar3 = (long)(int)lVar3;
  }
  if (SUB168(SEXT816(lVar3) * SEXT816(0xe10),8) == lVar3 * 0xe10 >> 0x3f) {
    if (SUB168(SEXT816(lVar3 * 0xe10) * SEXT816(1000),8) == lVar3 * 3600000 >> 0x3f) {
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    /* WARNING: Could not recover jumptable at 0x00010c00e370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)((double)(lVar3 * 3600000));
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10196dbbc);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10196dbb8);
  (*pcVar1)();
}



/* Entry: 10196dbbc; end: 10196dc1f; -[SCStreakMetadataProvider initWithStreakProvider:circumstanceEngine:] */

undefined8
FUN_10196dbbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar1 = param_3;
  FUN_10196ea18(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return uVar1;
}



/* Entry: 10196dc20; end: 10196de2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10196dc20(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined **ppuVar10;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ddb558);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    puVar5 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100214a84(PTR___swiftEmptyArrayStorage_11034f1c8);
    ppuVar10 = &PTR____CFConstantStringClassReference_110dcb2f8;
    puVar7 = PTR_PTR_1126a7fe0;
    func_0x000107c610f8(PTR_PTR_1126a7fe0);
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110dcb2f8);
    puVar8 = puVar6;
    func_0x000107c5f9dc(puVar6,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(puVar6);
    func_0x000107c48ae8(0,puVar7);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(ppuVar10);
    func_0x000107c4a8a4(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    puVar6 = puVar5;
    func_0x000107c5cb24(puVar5);
    func_0x000107c61180();
  }
  else {
    lVar2 = lVar1;
    func_0x000107c406d0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    func_0x0001000285a8(0x112d5ec78,&UNK_10d9a0280);
    lVar1 = lVar2;
    func_0x0001000b637c(lVar2);
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112ddb560);
    puVar5 = &UNK_11041af38;
    func_0x000107c613fc(&UNK_11041af38,0x18,7);
    *(undefined8 *)(puVar5 + 0x10) = uVar9;
    uVar3 = 0;
    FUN_10196ed28(0,0x112ddb568,&PTR_PTR_1126a7fe0);
    func_0x000107c61174(uVar9);
    pcVar4 = FUN_10196eb5c;
    func_0x0001000bfde0(FUN_10196eb5c,puVar5,uVar3);
    func_0x000107c61574(lVar1);
    func_0x000107c61574(puVar5);
    func_0x0001004575f0();
    func_0x000107c61574(pcVar4);
    puVar6 = puVar5;
    func_0x000107c5cb24(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61170(puVar5);
  return puVar6;
}



/* Entry: 10196de30; end: 10196e2bb;  */

undefined * FUN_10196de30(long param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  long extraout_x8;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_d0 [8];
  long lStack_c8;
  ulong *puStack_c0;
  undefined1 *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined *puStack_88;
  
  lVar6 = 0;
  lStack_c8 = param_2;
  func_0x000107c5eea4();
  lStack_b0 = *(long *)(lVar6 + -8);
  lStack_a8 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b0 + 0x40));
  puStack_b8 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_10196ec30(PTR___swiftEmptyArrayStorage_11034f1c8,0x112ddb5a0,&UNK_10d9a02d0);
  puStack_c0 = (ulong *)(param_1 + 0x40);
  uVar14 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar18 = ~(-1L << (uVar14 & 0x3f));
  }
  uVar18 = uVar18 & *puStack_c0;
  dVar19 = 4.94065645841247e-321;
  lStack_a0 = param_1;
  func_0x000107c61434(param_1);
  lVar6 = 0;
  while( true ) {
    while (uVar18 != 0) {
      uVar13 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | lVar6 << 6;
      puVar1 = (ulong *)(*(long *)(lStack_a0 + 0x30) + uVar13 * 0x10);
      uStack_98 = *puVar1;
      uStack_90 = puVar1[1];
      uVar16 = *(ulong *)(*(long *)(lStack_a0 + 0x38) + uVar13 * 8);
      func_0x000107c61434();
      func_0x000107c61174();
      uVar13 = uVar16;
      func_0x000107c5c0d4();
      dVar20 = (double)uVar13;
      uVar13 = uVar16;
      func_0x000107c42bcc(uVar16);
      func_0x000107c61180();
      puVar3 = puStack_b8;
      func_0x000107c5ee94(puStack_b8);
      func_0x000107c61170(uVar13);
      func_0x000107c5ee8c();
      (**(code **)(lStack_b0 + 8))(puVar3,lStack_a8);
      func_0x000107c49e30(uVar16);
      puVar9 = PTR_PTR_1126a7fe8;
      func_0x000107c610f8();
      func_0x000107c461fc(dVar20,dVar19 * 1000.0);
      uVar13 = uVar16;
      func_0x000107c42be8();
      func_0x000107c61180();
      if (uVar13 != 0) {
        uVar8 = uVar13;
        func_0x000107c5c0c4();
        dVar20 = (double)uVar8;
        uVar8 = uVar13;
        func_0x000107c5ca68(uVar13);
        func_0x000107c4a340(uVar13);
        func_0x000107c4a344(uVar13);
        uVar15 = uVar13;
        func_0x000107c50690(uVar13);
        puVar11 = PTR_PTR_1126a7ff0;
        func_0x000107c610f8(PTR_PTR_1126a7ff0);
        func_0x000107c48ad4(dVar20,(double)(long)uVar8,(double)(long)uVar15);
        func_0x000107c547b4(puVar9);
        func_0x000107c61170(uVar13);
        func_0x000107c61170(puVar11);
      }
      func_0x000107c61174();
      puVar11 = puVar7;
      func_0x000107c61558();
      uVar13 = uStack_98;
      uVar8 = uStack_90;
      puStack_88 = puVar7;
      func_0x000100029284();
      uVar15 = (ulong)~(uint)uVar8 & 1;
      lVar2 = *(long *)(puVar7 + 0x10) + uVar15;
      if (SCARRY8(*(long *)(puVar7 + 0x10),uVar15)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10196e2a8);
        (*pcVar4)();
      }
      if (*(long *)(puVar7 + 0x18) < lVar2) {
        FUN_10196e77c(lVar2,puVar11);
        uVar13 = uStack_98;
        uVar15 = uStack_90;
        func_0x000100029284();
        if (((uint)uVar8 & 1) != ((uint)uVar15 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10196e2bc);
          (*pcVar4)();
        }
      }
      else if (((ulong)puVar11 & 1) == 0) {
        FUN_10196e60c();
      }
      puVar7 = puStack_88;
      uVar18 = uVar18 - 1 & uVar18;
      if ((uVar8 & 1) == 0) {
        *(ulong *)(puStack_88 + (uVar13 >> 6) * 8 + 0x40) =
             *(ulong *)(puStack_88 + (uVar13 >> 6) * 8 + 0x40) | 1L << (uVar13 & 0x3f);
        puVar1 = (ulong *)(*(long *)(puStack_88 + 0x30) + uVar13 * 0x10);
        *puVar1 = uStack_98;
        puVar1[1] = uStack_90;
        *(undefined **)(*(long *)(puStack_88 + 0x38) + uVar13 * 8) = puVar9;
        func_0x000107c61170(puVar9);
        func_0x000107c61170(uVar16);
        if (SCARRY8(*(long *)(puVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10196e2ac);
          (*pcVar4)();
        }
        *(long *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + 1;
        dVar19 = dVar20;
      }
      else {
        uVar17 = *(undefined8 *)(*(long *)(puStack_88 + 0x38) + uVar13 * 8);
        *(undefined **)(*(long *)(puStack_88 + 0x38) + uVar13 * 8) = puVar9;
        func_0x000107c61170(puVar9);
        func_0x000107c6142c(uStack_90);
        func_0x000107c61170(uVar16);
        func_0x000107c61170(uVar17);
        dVar19 = dVar20;
      }
    }
    bVar5 = SCARRY8(lVar6,1);
    lVar6 = lVar6 + 1;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10196e2a4);
      (*pcVar4)();
    }
    if ((long)(uVar14 + 0x3f >> 6) <= lVar6) break;
    uVar18 = puStack_c0[lVar6];
  }
  func_0x000107c61574(lStack_a0);
  puVar9 = puVar7;
  FUN_10196e35c(puVar7);
  ppuVar10 = &PTR____CFConstantStringClassReference_110dcb2f8;
  func_0x000107c61174(&PTR____CFConstantStringClassReference_110dcb2f8);
  lVar6 = lStack_c8;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar6 == 0) {
    dVar19 = 0.0;
  }
  else {
    func_0x000107c4223c();
    func_0x000107c61170(lVar6);
  }
  puVar11 = PTR_PTR_1126a7fe0;
  func_0x000107c610f8(PTR_PTR_1126a7fe0);
  puVar12 = puVar9;
  func_0x000107c5f9dc(puVar9,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90)
  ;
  func_0x000107c6142c(puVar9);
  func_0x000107c48ae8(dVar19,puVar11);
  func_0x000107c6142c(puVar7);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(ppuVar10);
  return puVar11;
}



/* Entry: 10196e2bc; end: 10196e2ef; -[SCStreakMetadataProvider observeStreakMetadata] */

void FUN_10196e2bc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10196dc20();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10196e2f0; end: 10196e323;  */

void FUN_10196e2f0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10196e324; end: 10196e35b; -[SCStreakMetadataProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010196e340: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010196e344) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10196e324(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ddb558));
  return;
}



/* Entry: 10196e35c; end: 10196e60b;  */

undefined * FUN_10196e35c(long param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined1 auStack_d0 [32];
  ulong uStack_b0;
  ulong uStack_a8;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  
  puVar11 = *(undefined **)(param_1 + 0x10);
  puVar12 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar11 != (undefined *)0x0) {
    uVar6 = 0x112d4b5f8;
    func_0x0001000285a8(0x112d4b5f8,&UNK_10d9121b0);
    func_0x000107c60498(puVar11,uVar6);
    puVar12 = puVar11;
  }
  uVar10 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(param_1 + 0x40);
  func_0x000107c6157c(puVar12);
  func_0x000107c61434(param_1);
  lVar13 = 0;
  while( true ) {
    while (uVar15 != 0) {
      uVar3 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) | lVar13 << 6;
      puVar2 = (ulong *)(*(long *)(param_1 + 0x30) + uVar8 * 0x10);
      uStack_e0 = *puVar2;
      uVar3 = puVar2[1];
      uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar8 * 8);
      uVar6 = 0;
      uStack_e8 = uVar14;
      uStack_d8 = uVar3;
      FUN_10196ed28(0,0x112ddb5a8,&PTR_PTR_1126a7fe8);
      func_0x000107c61438(uVar3,2);
      func_0x000107c61174(uVar14);
      func_0x000107c61174();
      func_0x000107c6147c(auStack_d0,&uStack_e8,uVar6,PTR___sypN_11034f1a8 + 8,7);
      func_0x000107c61170(uVar14);
      func_0x000107c6142c(uVar3);
      if (uStack_d8 == 0) {
        func_0x000107c61574(param_1);
        FUN_101695968(&uStack_e0);
        func_0x000107c61574(puVar12);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10196e60c);
        (*pcVar4)();
      }
      uVar15 = uVar15 - 1 & uVar15;
      uStack_b0 = uStack_e0;
      uStack_a8 = uStack_d8;
      func_0x000100102924(auStack_d0,auStack_a0);
      uVar8 = uStack_a8;
      uVar3 = uStack_b0;
      func_0x000100102924(auStack_a0,auStack_80);
      uVar7 = uVar3;
      uVar9 = uVar8;
      func_0x000100029284();
      if ((uVar9 & 1) == 0) {
        if (*(ulong *)(puVar12 + 0x18) <= *(ulong *)(puVar12 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10196e5ec);
          (*pcVar4)();
        }
        uVar9 = uVar7 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar12 + uVar9 + 0x40) =
             *(ulong *)(puVar12 + uVar9 + 0x40) | 1L << (uVar7 & 0x3f);
        puVar2 = (ulong *)(*(long *)(puVar12 + 0x30) + uVar7 * 0x10);
        *puVar2 = uVar3;
        puVar2[1] = uVar8;
        func_0x000100102924(auStack_80,*(long *)(puVar12 + 0x38) + uVar7 * 0x20);
        if (SCARRY8(*(long *)(puVar12 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10196e5f0);
          (*pcVar4)();
        }
        *(long *)(puVar12 + 0x10) = *(long *)(puVar12 + 0x10) + 1;
      }
      else {
        puVar2 = (ulong *)(*(long *)(puVar12 + 0x30) + uVar7 * 0x10);
        uVar9 = puVar2[1];
        *puVar2 = uVar3;
        puVar2[1] = uVar8;
        func_0x000107c6142c(uVar9);
        lVar1 = *(long *)(puVar12 + 0x38) + uVar7 * 0x20;
        func_0x000100183ab8(lVar1);
        func_0x000100102924(auStack_80,lVar1);
      }
    }
    bVar5 = SCARRY8(lVar13,1);
    lVar13 = lVar13 + 1;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10196e5e8);
      (*pcVar4)();
    }
    if ((long)(uVar10 + 0x3f >> 6) <= lVar13) break;
    uVar15 = ((ulong *)(param_1 + 0x40))[lVar13];
  }
  func_0x000107c61574(puVar12);
  func_0x000107c61574(param_1);
  return puVar12;
}



/* Entry: 10196e60c; end: 10196e77b;  */

void FUN_10196e60c(void)

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
  
  func_0x0001000285a8(0x112ddb5a0,&UNK_10d9a02d0);
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
    if (uVar8 == 0) goto LAB_10196e6e8;
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
LAB_10196e6e8:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10196e77c);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_10196e754;
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
LAB_10196e754:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 10196e77c; end: 10196ea17;  */

void FUN_10196e77c(long param_1,ulong param_2)

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
  uVar6 = 0x112ddb5a0;
  func_0x0001000285a8(0x112ddb5a0,&UNK_10d9a02d0);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_10196e9e4:
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10196ea14);
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
          goto LAB_10196e9e4;
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10196ea18);
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



/* Entry: 10196ea18; end: 10196eb37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10196ea18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112ddb558) = param_1;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_11041af60;
  func_0x000107c613fc(&UNK_11041af60,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  uStack_60 = 0x10196ed6c;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100619acc;
  puStack_68 = &UNK_11041af78;
  ppuVar3 = &puStack_80;
  puStack_58 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar2 = puStack_58;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  *(undefined **)(unaff_x20 + _DAT_112ddb560) = puVar1;
  func_0x000107c61154(&stack0xffffffffffffff70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10196eb38; end: 10196eb5b;  */

void FUN_10196eb38(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 == 0) {
    lVar4 = 0x13;
  }
  else {
    uVar2 = 0xd00000000000001b;
    func_0x000107c5fadc(0xd00000000000001b,0x800000010efc3850);
    lVar3 = lVar4;
    func_0x000107c4980c();
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(uVar2);
    lVar4 = (long)(int)lVar3;
  }
  if (SUB168(SEXT816(lVar4) * SEXT816(0xe10),8) == lVar4 * 0xe10 >> 0x3f) {
    if (SUB168(SEXT816(lVar4 * 0xe10) * SEXT816(1000),8) == lVar4 * 3600000 >> 0x3f) {
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    /* WARNING: Could not recover jumptable at 0x00010c00e370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)((double)(lVar4 * 3600000));
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10196dbbc);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10196dbb8);
  (*pcVar1)();
}



/* Entry: 10196eb5c; end: 10196ec0f;  */

void FUN_10196eb5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_38;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *param_2;
  puStack_38 = (undefined *)0x0;
  uVar1 = 0;
  FUN_10196ed28(0,0x112ddb598,&PTR_PTR_1126ba230);
  func_0x000107c5f9e4(uVar5,&puStack_38,PTR___sSSN_11034da80,uVar1,PTR___sSSSHsWP_11034da90);
  puVar2 = puStack_38;
  if (puStack_38 == (undefined *)0x0) {
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_10196ec30(PTR___swiftEmptyArrayStorage_11034f1c8,0x112ddb5b0,&UNK_10d9a02d8);
  }
  puVar3 = puVar2;
  FUN_10196de30(puVar2,uVar4);
  func_0x000107c6142c(puVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 10196ec10; end: 10196ec2f;  */

void FUN_10196ec10(void)

{
  func_0x000107c61168(&PTR_PTR_1127ee008);
  return;
}



/* Entry: 10196ec30; end: 10196ed27;  */

undefined * FUN_10196ec30(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(param_2,param_3);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10196ed24);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10196ed28);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 10196ed28; end: 10196ed67;  */

void FUN_10196ed28(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10196ed68; end: 10196ed73;  */

void FUN_10196ed68(long param_1,long param_2)

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



/* Entry: 10196ed74; end: 10196ed93;  */

void FUN_10196ed74(void)

{
  func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 10196ed94; end: 10196edc3;  */

void FUN_10196ed94(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10196f218();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = uVar1;
  return;
}



/* Entry: 10196edc4; end: 10196edd3;  */

void FUN_10196edc4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10196edd4; end: 10196ee5b;  */

void FUN_10196edd4(undefined8 *param_1)

{
  code *pcVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112ddb5b8,&UNK_10d9a02e0);
  func_0x000107c613fc();
  pcVar1 = FUN_10196ed94;
  func_0x0001000bdd8c(FUN_10196ed94,0);
  pcVar2 = pcVar1;
  func_0x0001003a5b88();
  func_0x000107c61574(pcVar1);
  func_0x0001001def18(0);
  func_0x000107c610f8();
  func_0x00010040f5e0();
  *param_1 = pcVar2;
  return;
}



/* Entry: 10196ee5c; end: 10196ee63;  */

void FUN_10196ee5c(void)

{
  if (lRam000000011347eee0 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e65d2b8);
  return;
}



/* Entry: 10196ee64; end: 10196ef67; -[_TtC39SponsoredSnapConversationSeqNumProvider39SponsoredSnapConversationSeqNumProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10196ee64(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined **)(param_1 + _DAT_112ddb690) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lVar1 = _DAT_112ddb698;
  uVar3 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(param_1 + lVar1) = uVar3;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10196ef68; end: 10196f027; -[_TtC39SponsoredSnapConversationSeqNumProvider39SponsoredSnapConversationSeqNumProvider conversationViewSeqNumForAdServeItemId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10196ef68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c5faec(param_3);
  func_0x000107c61174();
  func_0x00010006c804();
  lVar2 = _DAT_112ddb690;
  func_0x000107c61428(param_1 + _DAT_112ddb690,auStack_58,0x20,0);
  uVar3 = param_2;
  func_0x00010196eee8(param_3,param_2,*(undefined8 *)(param_1 + lVar2));
  func_0x000107c614a8(auStack_58);
  uVar1 = 0;
  if (((uint)uVar3 & 0xff) != 1) {
    uVar1 = param_3;
  }
  func_0x000100070bfc();
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return uVar1;
}



/* Entry: 10196f028; end: 10196f14f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10196f028(long param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined1 auStack_68 [24];
  
  func_0x00010006c804();
  lVar1 = _DAT_112ddb690;
  func_0x000107c61428(unaff_x20 + _DAT_112ddb690,auStack_68,0x20,0);
  lVar6 = *(long *)(unaff_x20 + lVar1);
  if (*(long *)(lVar6 + 0x10) == 0) {
    lVar7 = 0;
  }
  else {
    func_0x000107c61434(lVar6);
    lVar7 = param_1;
    uVar4 = param_2;
    func_0x000100029284();
    if ((uVar4 & 1) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = *(long *)(*(long *)(lVar6 + 0x38) + lVar7 * 8);
    }
    func_0x000107c6142c(lVar6);
  }
  func_0x000107c614a8(auStack_68);
  if (lVar7 != -1) {
    func_0x000107c61428(unaff_x20 + lVar1,auStack_68,0x21,0);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x000107c61558(uVar3);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined8 *)(unaff_x20 + lVar1) = 0x8000000000000000;
    FUN_10195f270(lVar7 + 1,param_1,param_2,uVar3);
    *(undefined8 *)(unaff_x20 + lVar1) = uVar5;
    func_0x000107c614a8(auStack_68);
    func_0x000100070bfc();
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10196f150);
  (*pcVar2)();
}



/* Entry: 10196f150; end: 10196f1ab; -[_TtC39SponsoredSnapConversationSeqNumProvider39SponsoredSnapConversationSeqNumProvider incrementConversationViewSeqNumForAdServeItemId:] */

void FUN_10196f150(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_10196f028(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10196f1ac; end: 10196f1df;  */

void FUN_10196f1ac(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10196f1e0; end: 10196f217; -[_TtC39SponsoredSnapConversationSeqNumProvider39SponsoredSnapConversationSeqNumProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10196f1e0(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ddb690));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ddb698));
  return;
}



/* Entry: 10196f218; end: 10196f237;  */

void FUN_10196f218(void)

{
  func_0x000107c61168(&PTR_PTR_1127ee0d0);
  return;
}



/* Entry: 10196f238; end: 10196f2af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10196f238(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined **)(unaff_x20 + _DAT_112ddb6c8) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined8 *)(unaff_x20 + _DAT_112ddb6d0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ddb6d8) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10196f2b0; end: 10196f33b; -[_TtC34UserPropertyDelegateImplementation34UserPropertyDelegateImplementation initWithPerformer:featureSettingsService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10196f2b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined **)(param_1 + _DAT_112ddb6c8) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined8 *)(param_1 + _DAT_112ddb6d0) = param_3;
  *(undefined8 *)(param_1 + _DAT_112ddb6d8) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 10196f33c; end: 10196f47b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10196f33c(void)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  long unaff_x20;
  long lVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_68 [24];
  
  func_0x000107c614f0();
  lVar5 = _DAT_112ddb6c8;
  func_0x000107c61428(unaff_x20 + _DAT_112ddb6c8,auStack_68,0,0);
  lVar5 = *(long *)(unaff_x20 + lVar5);
  puVar6 = (ulong *)(lVar5 + 0x40);
  uVar8 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if (-uVar8 < 0x40) {
    uVar9 = ~(-1L << (-uVar8 & 0x3f));
  }
  uVar9 = uVar9 & *puVar6;
  func_0x000107c61438(lVar5,2);
  lVar7 = 0;
  lVar1 = lVar7;
  while( true ) {
    for (; uVar9 != 0; uVar9 = uVar9 - 1 & uVar9) {
      uVar2 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      func_0x000107c5d320(*(undefined8 *)
                           (*(long *)(lVar5 + 0x38) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 8 +
                           lVar1 * 0x200));
      lVar7 = lVar1;
    }
    bVar4 = SCARRY8(lVar1,1);
    lVar1 = lVar1 + 1;
    if (bVar4) break;
    if ((long)(0x3f - uVar8 >> 6) <= lVar1) {
      func_0x000107c6142c(lVar5);
      FUN_10196f47c(lVar5,puVar6,~uVar8,lVar7,0);
      func_0x000107c61154(&stack0xffffffffffffff88,PTR_s_dealloc_112525b20);
      return;
    }
    uVar9 = puVar6[lVar1];
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10196f47c);
  (*pcVar3)();
}



/* Entry: 10196f47c; end: 10196f483;  */

void FUN_10196f47c(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 10196f484; end: 10196f4a7; -[_TtC34UserPropertyDelegateImplementation34UserPropertyDelegateImplementation dealloc] */

void FUN_10196f484(void)

{
  func_0x000107c61174();
  FUN_10196f33c();
  return;
}



/* Entry: 10196f4a8; end: 10196f4ef; -[_TtC34UserPropertyDelegateImplementation34UserPropertyDelegateImplementation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10196f4a8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ddb6d0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ddb6d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ddb6c8));
  return;
}



/* Entry: 10196f4f0; end: 10196f5fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10196f4f0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  if (param_2 != 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ddb6d0);
    puVar1 = &UNK_11041b148;
    func_0x000107c613fc(&UNK_11041b148,0x18,7);
    func_0x000107c61614(puVar1 + 0x10);
    puVar2 = &UNK_11041b170;
    func_0x000107c613fc(&UNK_11041b170,0x28,7);
    *(undefined **)(puVar2 + 0x10) = puVar1;
    *(undefined8 *)(puVar2 + 0x18) = param_1;
    *(long *)(puVar2 + 0x20) = param_2;
    pcStack_50 = FUN_10196f5fc;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_11041b188;
    puStack_48 = puVar2;
    func_0x000107c60bc4(&puStack_70);
    puVar1 = puStack_48;
    func_0x000107c61174(param_2);
    func_0x000107c61174();
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar1);
    func_0x000107c4e524(uVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10196f5fc; end: 10196f91f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10196f5fc(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long lVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined1 auStack_d8 [24];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar11 = *(long *)(unaff_x20 + 0x18);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar1 + 0x10,auStack_d8,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    return;
  }
  puVar13 = *(undefined **)(lVar1 + _DAT_112ddb6d0);
  func_0x000107c3e208(puVar13);
  func_0x000107c4f7c0();
  func_0x000107c61180();
  if (puVar13 != (undefined *)0x0) {
    lVar2 = *(long *)(lVar1 + _DAT_112ddb6d8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c4a8c4(lVar11);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c47580();
      lVar4 = lVar11;
      func_0x000107c4a8c4();
      lVar5 = lVar4;
      func_0x000100673624();
      func_0x000107c61534();
      *(undefined8 *)(lVar5 + 0x18) = 3;
      *(undefined8 *)(lVar5 + 0x10) = 1;
      puVar15 = (undefined8 *)(lVar5 + 0x20);
      *puVar15 = puVar3;
      func_0x000107c61174();
      lVar6 = lVar5;
      func_0x000100673700(lVar5);
      func_0x000107c61588(lVar5);
      uVar14 = *(undefined8 *)(lVar5 + 0x10);
      uVar7 = 0;
      func_0x0001002ed07c(0);
      func_0x000107c61408(puVar15,uVar14,uVar7);
      func_0x000100120cb0();
      lVar5 = lVar6;
      func_0x000107c5fe08(lVar6,uVar7,puVar15);
      func_0x000107c6142c(lVar6);
      puVar8 = &UNK_11041b148;
      func_0x000107c613fc(&UNK_11041b148,0x18,7);
      func_0x000107c61614(puVar8 + 0x10,lVar1);
      puVar9 = &UNK_11041b1c0;
      func_0x000107c613fc(&UNK_11041b1c0,0x30,7);
      *(undefined **)(puVar9 + 0x10) = puVar8;
      *(undefined **)(puVar9 + 0x18) = puVar3;
      *(long *)(puVar9 + 0x20) = lVar11;
      *(undefined8 *)(puVar9 + 0x28) = uVar12;
      pcStack_a0 = FUN_1019700e0;
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0x42000000;
      uStack_b0 = 0x10168981c;
      puStack_a8 = &UNK_11041b1d8;
      ppuVar10 = &puStack_c0;
      puStack_98 = puVar9;
      func_0x000107c60bc4(ppuVar10);
      puVar8 = puStack_98;
      func_0x000107c61174(puVar3);
      func_0x000107c61174();
      func_0x000107c61174(uVar12);
      func_0x000107c61574(puVar8);
      lVar6 = lVar2;
      func_0x000107c4da64(lVar2);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar10);
      func_0x000107c61170(lVar5);
      func_0x000107c61428(lVar1 + _DAT_112ddb6c8,&puStack_c0,0x21,0);
      func_0x00010196f9c8(lVar6,lVar4);
      func_0x000107c614a8(&puStack_c0);
      lVar4 = lVar11;
      func_0x000107c4a8c4();
      if (-1 < lVar4) {
        lVar4 = lVar2;
        func_0x000107c5dc1c();
        func_0x000107c61180();
        if (lVar4 == 0) {
          uStack_b8 = 0;
          puStack_c0 = (undefined *)0x0;
          puStack_a8 = (undefined *)0x0;
          uStack_b0 = 0;
        }
        else {
          func_0x000107c60234(&puStack_c0);
          func_0x000107c615e8(lVar4);
        }
        FUN_1019701b0(&puStack_c0,lVar11,uVar12);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(puVar13);
        func_0x00010006e7f4(&puStack_c0);
        goto LAB_10196f8f8;
      }
      func_0x000107c61170(puVar13);
      func_0x000107c61170(lVar2);
      puVar13 = puVar3;
    }
    func_0x000107c61170(puVar13);
  }
LAB_10196f8f8:
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 10196f920; end: 10196f93b;  */

void FUN_10196f920(long param_1,long param_2)

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



/* Entry: 10196f93c; end: 10196f95b;  */

void FUN_10196f93c(void)

{
  func_0x000107c61168(&PTR_PTR_1127ee190);
  return;
}



/* Entry: 10196f95c; end: 10196fa83; -[_TtC34UserPropertyDelegateImplementation34UserPropertyDelegateImplementation observeProperty:observer:] */

/* WARNING: Possible PIC construction at 0x00010196f9a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010196f9ac) */

void FUN_10196f95c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_10196f4f0(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10196fa84; end: 10196fbb3;  */

void FUN_10196fa84(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  func_0x000100f89a68();
  lVar4 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar7;
  if (SCARRY8(lVar4,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10196fb48);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    param_3 = param_3 & 1;
    FUN_10196fd10(lVar5);
    uVar2 = param_2;
    func_0x000100f89a68();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      func_0x000107c60624(PTR___ss5Int64VN_11034ee50);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10196fb14);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_10196fbb4();
    lVar5 = *unaff_x20;
    goto joined_r0x00010196fb5c;
  }
  lVar5 = *unaff_x20;
joined_r0x00010196fb5c:
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8);
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar6);
    return;
  }
  lVar4 = lVar5 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
  *(ulong *)(*(long *)(lVar5 + 0x30) + uVar2 * 8) = param_2;
  *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10196fbb4);
    (*pcVar1)();
  }
  *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
  return;
}



/* Entry: 10196fbb4; end: 10196fd0f;  */

void FUN_10196fbb4(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  
  func_0x0001000285a8(0x112ddb708,&UNK_10d9a0380);
  lVar9 = *unaff_x20;
  lVar4 = lVar9;
  func_0x000107c6048c();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x40;
    uVar6 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar9 || lVar1 + uVar6 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar6 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar7 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(lVar9 + 0x40);
    if (uVar6 == 0) goto LAB_10196fc90;
    do {
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      while( true ) {
        uVar8 = LZCOUNT(uVar8) | lVar10 << 6;
        uVar5 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar8 * 8) =
             *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar8 * 8) = uVar5;
        func_0x000107c615f0();
        if (uVar6 != 0) break;
LAB_10196fc90:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10196fd10);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_10196fce8;
          uVar6 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar6 == 0);
        uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar6 = uVar6 - 1 & uVar6;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_10196fce8:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 10196fd10; end: 1019700df;  */

void FUN_10196fd10(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  ulong *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  
  lVar11 = *unaff_x20;
  lVar1 = *(long *)(lVar11 + 0x18);
  if (*(long *)(lVar11 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar13 = 0x112ddb708;
  func_0x0001000285a8(0x112ddb708,&UNK_10d9a0380);
  lVar4 = lVar11;
  func_0x000107c60490(lVar11,lVar1,param_2,uVar13);
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_10196ff40:
    func_0x000107c61574(lVar11);
    *unaff_x20 = lVar4;
    return;
  }
  puVar12 = (ulong *)(lVar11 + 0x40);
  uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar16 = uVar16 & *puVar12;
  lVar1 = lVar4 + 0x40;
  lVar7 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar15 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10196ff70);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar15) {
          if ((param_2 & 1) != 0) {
            uVar16 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
            if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
              *puVar12 = -1L << (uVar16 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar12,uVar16 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar11 + 0x10) = 0;
          }
          goto LAB_10196ff40;
        }
        uVar16 = puVar12[lVar15];
        lVar7 = lVar7 + 1;
      } while (uVar16 == 0);
      uVar6 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar6 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar15 = lVar7;
    }
    uVar6 = LZCOUNT(uVar6) | lVar15 << 6;
    uVar14 = *(undefined8 *)(*(long *)(lVar11 + 0x30) + uVar6 * 8);
    uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar6 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c615f0(uVar13);
    }
    uVar5 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c60688(uVar5,uVar14);
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10196ff74);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
        uVar5 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar5 == 0xffffffffffffffff);
      uVar5 = ~uVar5;
      uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar14;
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar6 * 8) = uVar13;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar15;
  } while( true );
}



/* Entry: 1019700e0; end: 1019701af;  */

void FUN_1019700e0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar5 = auStack_58;
  func_0x000107c61428(lVar3 + 0x10,puVar5,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 == 0) {
    return;
  }
  if ((param_1 != 0) && (*(long *)(param_1 + 0x10) != 0)) {
    func_0x000107c61434(param_1);
    func_0x000100121450(lVar4);
    if (((ulong)puVar5 & 1) != 0) {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar4 * 0x20,&uStack_80);
      func_0x000107c6142c(param_1);
      goto LAB_101970178;
    }
    func_0x000107c6142c(param_1);
  }
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
LAB_101970178:
  FUN_1019701b0(&uStack_80,uVar1,uVar2);
  func_0x000107c61170(lVar3);
  func_0x00010006e7f4(&uStack_80);
  return;
}



/* Entry: 1019701b0; end: 10197052f;  */

void FUN_1019701b0(undefined8 param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  func_0x000100672b50(param_1,auStack_70);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(auStack_70);
  }
  else {
    func_0x000107c6147c(&uStack_80,auStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
  }
  func_0x000107c5d0f0();
  if (param_2 < 2) {
    if (param_2 == 0) {
      func_0x000100672b50(param_1,auStack_70);
      if (lStack_58 == 0) goto LAB_1019704d0;
      puVar2 = &uStack_80;
      func_0x000107c6147c(puVar2,auStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
      if (((ulong)puVar2 & 1) == 0) {
        return;
      }
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      puVar4 = PTR_PTR_1126dad68;
      func_0x000107c610f8(PTR_PTR_1126dad68);
    }
    else {
      if (param_2 != 1) {
LAB_1019704f4:
        func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                            "UserPropertyDelegateImplementation/UserPropertyDelegateImplementation.swift"
                            ,0x4b,2,0x7b,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101970530);
        (*pcVar1)();
      }
      func_0x000100672b50(param_1,auStack_70);
      if (lStack_58 == 0) goto LAB_1019704d0;
      puVar2 = &uStack_80;
      func_0x000107c6147c(puVar2,auStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSiN_11034deb0,6);
      if (((ulong)puVar2 & 1) == 0) {
        return;
      }
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c46ed0();
      puVar4 = PTR_PTR_1126dad68;
      func_0x000107c610f8(PTR_PTR_1126dad68);
    }
  }
  else if (param_2 == 2) {
    func_0x000100672b50(param_1,auStack_70);
    if (lStack_58 == 0) {
LAB_1019704d0:
      func_0x00010006e7f4(auStack_70);
      return;
    }
    puVar2 = &uStack_80;
    func_0x000107c6147c(puVar2,auStack_70,PTR___sypN_11034f1a8 + 8,PTR___ss5Int64VN_11034ee50,6);
    if (((ulong)puVar2 & 1) == 0) {
      return;
    }
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c47580();
    puVar4 = PTR_PTR_1126dad68;
    func_0x000107c610f8(PTR_PTR_1126dad68);
  }
  else if (param_2 == 3) {
    func_0x000100672b50(param_1,auStack_70);
    if (lStack_58 == 0) goto LAB_1019704d0;
    puVar2 = &uStack_80;
    func_0x000107c6147c(puVar2,auStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if (((ulong)puVar2 & 1) == 0) {
      return;
    }
    puVar3 = (undefined *)CONCAT71(uStack_7f,uStack_80);
    puVar4 = PTR_PTR_1126dad68;
    func_0x000107c610f8(PTR_PTR_1126dad68);
    func_0x000107c5fadc(puVar3,uStack_78);
    func_0x000107c6142c(uStack_78);
  }
  else {
    if (param_2 != 4) goto LAB_1019704f4;
    func_0x000100672b50(param_1,auStack_70);
    if (lStack_58 == 0) goto LAB_1019704d0;
    puVar2 = &uStack_80;
    func_0x000107c6147c(puVar2,auStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSdN_11034dd90,6);
    if (((ulong)puVar2 & 1) == 0) {
      return;
    }
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c466c0(CONCAT71(uStack_7f,uStack_80));
    puVar4 = PTR_PTR_1126dad68;
    func_0x000107c610f8(PTR_PTR_1126dad68);
  }
  func_0x000107c45a4c();
  func_0x000107c61170(puVar3);
  func_0x000107c4dcd0(param_3);
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 101970530; end: 101970537;  */

void FUN_101970530(long param_1,long param_2)

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



/* Entry: 101970538; end: 101970597; -[_TtC30MessagingMediaPrefetchDelegate34MessagingMediaPrefetchDelegateImpl init] */

void FUN_101970538(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MessagingMediaPrefetchDelegate.MessagingMediaPrefetchDelegateImpl",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101970564);
  (*pcVar1)();
}



/* Entry: 101970598; end: 101970613; -[_TtC30MessagingMediaPrefetchDelegate34MessagingMediaPrefetchDelegateImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001019705c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019705cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101970598(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ddb720 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ddb728));
  return;
}



/* Entry: 101970614; end: 101970853;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101970614(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar10;
  long lVar11;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  func_0x000107c5f7fc();
  puVar1 = PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8;
  lStack_a0 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar10 = (long)&uStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  lVar11 = *(long *)(lVar3 + -8);
  lStack_a8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar3 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_b0 = *(undefined8 *)(unaff_x20 + _DAT_112ddb718);
  puVar4 = &UNK_11041b290;
  func_0x000107c613fc(&UNK_11041b290,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar5 = &UNK_11041b2b8;
  func_0x000107c613fc(&UNK_11041b2b8,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  pcStack_70 = FUN_1019708dc;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_11041b2d0;
  ppuVar6 = &puStack_90;
  puStack_68 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar4);
  func_0x000107c5f808(lVar3);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar7 = 0x112d4af88;
  func_0x00010041bb14(0x112d4af88,puVar1,
                      PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar8 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar9 = 0x112d4af98;
  func_0x00010041bb54(0x112d4af98,0x112d4af90,&UNK_10d914100);
  func_0x000107c60264(lVar10,&puStack_98,uVar8,uVar9,lVar2,uVar7);
  func_0x000107c5ffe8(0,lVar3,lVar10,ppuVar6);
  func_0x000107c60bd0(ppuVar6);
  (**(code **)(lStack_a0 + 8))(lVar10,lVar2);
  (**(code **)(lVar11 + 8))(lVar3,lStack_a8);
  puVar5 = puStack_68;
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar5);
  return;
}



/* Entry: 101970854; end: 1019708db;  */

void FUN_101970854(long param_1,long param_2)

{
  undefined *puVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  puVar1 = (undefined *)(param_1 + 0x10);
  func_0x000107c61618();
  if (puVar1 == (undefined *)0x0) {
    if (param_2 == 0) {
      return;
    }
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
    func_0x000107c4db8c(param_2);
  }
  else {
    FUN_1019708e4(param_2);
  }
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 1019708dc; end: 1019708e3;  */

void FUN_1019708dc(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
  puVar3 = (undefined *)(lVar1 + 0x10);
  func_0x000107c61618();
  if (puVar3 == (undefined *)0x0) {
    if (lVar2 == 0) {
      return;
    }
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
    func_0x000107c4db8c(lVar2);
  }
  else {
    FUN_1019708e4(lVar2);
  }
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 1019708e4; end: 101970bb7;  */

/* WARNING: Possible PIC construction at 0x000101970954: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101970a94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101970b58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101970a98) */
/* WARNING: Removing unreachable block (ram,0x000101970958) */
/* WARNING: Removing unreachable block (ram,0x000101970b5c) */
/* WARNING: Removing unreachable block (ram,0x000101970ba0) */
/* WARNING: Removing unreachable block (ram,0x000101970b60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019708e4(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  lVar3 = *(long *)(unaff_x20 + _DAT_112ddb728);
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar3 != 0) {
    lVar6 = lVar3;
    func_0x000107c3db5c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    uVar4 = 0;
    func_0x000102d86f34(0);
    func_0x000107c5fc54(lVar6,uVar4);
    goto code_r0x000107c61170;
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112ddb740);
  if ((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e == 0) {
    uVar10 = (ulong)PTR___swiftEmptyArrayStorage_11034f1c8 & 0xffffffffffffff8;
    func_0x00010552912c(*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(uVar10 + 0x10));
    if (*(long *)(uVar10 + 0x10) != 0) goto LAB_101970990;
LAB_101970b1c:
    func_0x000107c6142c(puVar2);
    uVar9 = *(undefined8 *)(lVar3 + 0x10);
    lVar6 = 0x73776f725f6f6e;
    uVar4 = 0xe700000000000000;
  }
  else {
    puVar8 = (undefined *)((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < PTR___swiftEmptyArrayStorage_11034f1c8) {
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    puVar7 = puVar8;
    func_0x000107c60480(puVar8);
    func_0x00010552912c(*(undefined8 *)(lVar3 + 0x10),puVar7);
    func_0x000107c60480();
    if (puVar8 == (undefined *)0x0) goto LAB_101970b1c;
LAB_101970990:
    uVar1 = ((ulong *)(unaff_x20 + _DAT_112ddb720))[1];
    uVar10 = *(ulong *)(unaff_x20 + _DAT_112ddb720) & 0xffffffffffff;
    if ((uVar1 & 0x2000000000000000) != 0) {
      uVar10 = uVar1 >> 0x38 & 0xf;
    }
    if (uVar10 == 0) {
      func_0x000107c6142c(puVar2);
      uVar9 = *(undefined8 *)(lVar3 + 0x10);
      lVar6 = -0x2fffffffffffffec;
      uVar4 = 0x800000010efc3a10;
    }
    else {
      lVar6 = unaff_x20 + _DAT_112ddb710;
      func_0x000107c61618();
      if (lVar6 != 0) {
        puVar8 = &UNK_11041b290;
        func_0x000107c613fc(&UNK_11041b290,0x18,7);
        func_0x000107c61614(puVar8 + 0x10);
        uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ddb718);
        puVar7 = &UNK_11041b308;
        func_0x000107c613fc(&UNK_11041b308,0x30,7);
        *(undefined8 *)(puVar7 + 0x10) = uVar4;
        *(undefined **)(puVar7 + 0x18) = puVar8;
        *(undefined8 *)(puVar7 + 0x20) = param_1;
        *(undefined **)(puVar7 + 0x28) = puVar2;
        pcStack_50 = FUN_101972bcc;
        puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_68 = 0x42000000;
        pcStack_60 = FUN_101971828;
        puStack_58 = &UNK_11041b320;
        puStack_48 = puVar7;
        func_0x000107c60bc4(&puStack_70);
        puVar2 = puStack_48;
        func_0x000107c61174(param_1);
        func_0x000107c61174(uVar4);
        func_0x000107c61574(puVar2);
        func_0x000107c5dc64(lVar6);
        func_0x000107c60bd0(ppuVar5);
        goto code_r0x000107c61170;
      }
      func_0x000107c6142c(puVar2);
      uVar9 = *(undefined8 *)(lVar3 + 0x10);
      uVar4 = 0x800000010efc39f0;
      lVar6 = -0x2fffffffffffffee;
    }
  }
  func_0x000107c5fadc(lVar6,uVar4);
  func_0x000105528e44(uVar9,lVar6,1);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 101970bb8; end: 101970bd3;  */

void FUN_101970bb8(long param_1,long param_2)

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



/* Entry: 101970bd4; end: 101970bf3;  */

void FUN_101970bd4(void)

{
  func_0x000107c61168(&PTR_PTR_1127ee260);
  return;
}



/* Entry: 101970bf4; end: 101970c47; -[_TtC30MessagingMediaPrefetchDelegate34MessagingMediaPrefetchDelegateImpl hydrateContentManagerWithExistingDownloads:] */

/* WARNING: Possible PIC construction at 0x000101970c30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101970c34) */

void FUN_101970bf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101970614(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101970c48; end: 101970e67;  */

void FUN_101970c48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long lVar10;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  uStack_a0 = param_3;
  func_0x000107c5f7fc();
  puVar1 = PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8;
  lStack_a8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a8 + 0x40));
  lVar9 = (long)&lStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  lVar10 = *(long *)(lVar3 + -8);
  lStack_b0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar3 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &UNK_11041b358;
  func_0x000107c613fc(&UNK_11041b358,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = param_4;
  *(undefined8 *)(puVar4 + 0x18) = param_5;
  *(undefined8 *)(puVar4 + 0x20) = param_1;
  *(undefined8 *)(puVar4 + 0x28) = param_6;
  uStack_70 = 0x101972bd8;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_11041b370;
  ppuVar5 = &puStack_90;
  puStack_68 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c615f0(param_1);
  func_0x000107c61434(param_6);
  func_0x000107c6157c(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c5f808(lVar3);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar6 = 0x112d4af88;
  func_0x00010041bb14(0x112d4af88,puVar1,
                      PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar7 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar8 = 0x112d4af98;
  func_0x00010041bb54(0x112d4af98,0x112d4af90,&UNK_10d914100);
  func_0x000107c60264(lVar9,&puStack_98,uVar7,uVar8,lVar2,uVar6);
  func_0x000107c5ffe8(0,lVar3,lVar9,ppuVar5);
  func_0x000107c60bd0(ppuVar5);
  (**(code **)(lStack_a8 + 8))(lVar9,lVar2);
  (**(code **)(lVar10 + 8))(lVar3,lStack_b0);
  func_0x000107c61574(puStack_68);
  return;
}



/* Entry: 101970e68; end: 101970fc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101970e68(long param_1,long param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  puVar1 = (undefined *)(param_1 + 0x10);
  func_0x000107c61618();
  if (puVar1 == (undefined *)0x0) {
    if (param_2 == 0) {
      return;
    }
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
    func_0x000107c4db8c(param_2);
  }
  else {
    if (param_3 != (undefined *)0x0) {
      func_0x000107c44174();
      func_0x000107c61180();
      if (param_3 != (undefined *)0x0) {
        FUN_101970fc4(param_4,param_3,param_2);
        func_0x000107c61170(puVar1);
        puVar1 = param_3;
        goto LAB_101970fa4;
      }
    }
    lVar4 = *(long *)(puVar1 + _DAT_112ddb740);
    uVar5 = *(undefined8 *)(lVar4 + 0x10);
    func_0x000107c6157c(lVar4);
    uVar2 = 0xd000000000000012;
    func_0x000107c5fadc(0xd000000000000012,0x800000010efc39f0);
    func_0x000105528e44(uVar5,uVar2,1);
    func_0x000107c61574(lVar4);
    func_0x000107c61170(uVar2);
    if (param_2 != 0) {
      puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
      func_0x000107c4db8c(param_2);
      func_0x000107c61170(puVar3);
    }
  }
LAB_101970fa4:
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 101970fc4; end: 101971827;  */

/* WARNING: Possible PIC construction at 0x0001019714b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101971534: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019715cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101971610: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019713c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019717a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010197156c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101971394: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019713ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019713bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101971398) */
/* WARNING: Removing unreachable block (ram,0x000101971570) */
/* WARNING: Removing unreachable block (ram,0x0001019717a8) */
/* WARNING: Removing unreachable block (ram,0x000101971824) */
/* WARNING: Removing unreachable block (ram,0x0001019717fc) */
/* WARNING: Removing unreachable block (ram,0x0001019713cc) */
/* WARNING: Removing unreachable block (ram,0x0001019715d0) */
/* WARNING: Removing unreachable block (ram,0x0001019715d4) */
/* WARNING: Removing unreachable block (ram,0x000101971538) */
/* WARNING: Removing unreachable block (ram,0x000101971550) */
/* WARNING: Removing unreachable block (ram,0x000101971548) */
/* WARNING: Removing unreachable block (ram,0x0001019714bc) */
/* WARNING: Removing unreachable block (ram,0x000101971580) */
/* WARNING: Removing unreachable block (ram,0x000101971614) */
/* WARNING: Removing unreachable block (ram,0x0001019713c0) */
/* WARNING: Removing unreachable block (ram,0x00010197159c) */
/* WARNING: Removing unreachable block (ram,0x0001019714dc) */
/* WARNING: Removing unreachable block (ram,0x0001019713b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101970fc4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar16;
  long unaff_x20;
  undefined8 uVar17;
  ulong uVar18;
  undefined1 auStack_190 [8];
  undefined8 uStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined1 *puStack_168;
  long lStack_160;
  long lStack_158;
  char *pcStack_150;
  char *pcStack_148;
  undefined8 uStack_140;
  long lStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  uStack_80 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = 0;
  uStack_188 = param_3;
  uStack_128 = param_2;
  func_0x000107c5f7fc();
  lStack_160 = *(long *)(lVar6 + -8);
  lStack_158 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_160 + 0x40));
  lVar6 = 0;
  puStack_168 = auStack_190 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5f824();
  lStack_178 = *(long *)(lVar6 + -8);
  lStack_170 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_178 + 0x40));
  lStack_180 = (long)(auStack_190 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
               (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60f34();
  lVar7 = 0;
  lStack_108 = lVar6;
  func_0x000101972bac();
  func_0x000107c613fc();
  puVar8 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar7 + 0x10) = puVar8;
  *(undefined **)(lVar7 + 0x18) = puVar13;
  lStack_110 = lVar7;
  if (param_1 >> 0x3e == 0) {
    uVar18 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    lVar6 = _DAT_112ddb728;
  }
  else {
    uVar18 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar18 = param_1;
    }
    func_0x000107c60480();
    lVar6 = _DAT_112ddb728;
  }
  _DAT_112ddb728 = lVar6;
  if (uVar18 == 0) {
    uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112ddb718);
    uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112ddb740);
    puVar13 = &UNK_11041b3d0;
    func_0x000107c613fc(&UNK_11041b3d0,0x28,7);
    lVar1 = lStack_110;
    uVar9 = uStack_188;
    *(long *)(puVar13 + 0x10) = lStack_110;
    *(undefined8 *)(puVar13 + 0x18) = uVar17;
    *(undefined8 *)(puVar13 + 0x20) = uStack_188;
    pcStack_90 = FUN_101972dd8;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    puStack_a0 = &UNK_1000f6b44;
    puStack_98 = &UNK_11041b3e8;
    ppuVar14 = &puStack_b0;
    puStack_88 = puVar13;
    func_0x000107c60bc4(ppuVar14);
    func_0x000107c61174(uVar9);
    func_0x000107c6157c(lVar1);
    func_0x000107c6157c(uVar17);
    lVar7 = lStack_180;
    func_0x000107c5f808(lStack_180);
    puStack_e8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar9 = 0x112d4af88;
    func_0x00010041bb14(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                        PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
    uVar17 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar15 = 0x112d4af98;
    func_0x00010041bb54(0x112d4af98,0x112d4af90,&UNK_10d914100);
    puVar3 = puStack_168;
    func_0x000107c60264(puStack_168,&puStack_e8,uVar17,uVar15,lStack_158,uVar9);
    lVar6 = lStack_108;
    func_0x000107c5ffb8(lVar7,puVar3,uVar16,ppuVar14);
    func_0x000107c60bd0(ppuVar14);
    func_0x000107c61574(lVar1);
  }
  else {
    uVar9 = 0;
    func_0x00010041bad4(0,0x112d4e810,&PTR_PTR_1126b0cd8);
    uStack_118 = uVar9;
    if ((long)uVar18 < 1) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101971824);
      (*pcVar5)();
    }
    uStack_140 = *(undefined8 *)(unaff_x20 + lVar6);
    lStack_138 = *(long *)(unaff_x20 + _DAT_112ddb740);
    uStack_120 = param_1 & 0xc000000000000001;
    pcStack_148 = "skipped_no_directory";
    pcStack_150 = "invalid_conversation";
    uStack_130 = uVar18;
    if (uStack_120 == 0) {
      lVar7 = *(long *)(param_1 + 0x20);
      func_0x000107c61174();
    }
    else {
      lVar7 = 0;
      FUN_101972be4(0,param_1);
    }
    lVar4 = lStack_108;
    func_0x000107c60f38(lStack_108);
    puVar13 = &UNK_11041b3a8;
    func_0x000107c613fc(&UNK_11041b3a8,0x20,7);
    *(long *)(puVar13 + 0x10) = lStack_110;
    *(long *)(puVar13 + 0x18) = lVar4;
    lVar6 = *(long *)(lVar7 + _DAT_112f15550);
    lVar1 = ((long *)(lVar7 + _DAT_112f15550))[1];
    func_0x000107c6157c();
    func_0x000107c61174(lVar4);
    func_0x000107c61434(lVar1);
    func_0x000103c1912c(lVar6,lVar1);
    if (lVar6 == 0) {
      uVar9 = *(undefined8 *)(lStack_138 + 0x10);
      lVar6 = -0x2fffffffffffffec;
      func_0x000107c5fadc(0xd000000000000014,(ulong)pcStack_148 | 0x8000000000000000);
      func_0x000105528fb8(uVar9,lVar6,1);
    }
    else {
      uVar9 = *(undefined8 *)(lVar7 + _DAT_112f15558);
      puVar8 = &UNK_11041b290;
      func_0x000107c613fc(&UNK_11041b290,0x18,7);
      func_0x000107c61614(puVar8 + 0x10,unaff_x20);
      puVar10 = &UNK_11041b420;
      func_0x000107c613fc(&UNK_11041b420,0x30,7);
      *(undefined **)(puVar10 + 0x10) = puVar8;
      *(code **)(puVar10 + 0x18) = FUN_101972dac;
      *(undefined **)(puVar10 + 0x20) = puVar13;
      *(long *)(puVar10 + 0x28) = lVar7;
      func_0x000107c610f8();
      func_0x000107c6157c(puVar8);
      func_0x000107c6157c(puVar13);
      func_0x000107c61174(lVar7);
      func_0x000107c485dc();
      puVar13 = &UNK_11041b448;
      func_0x000107c613fc(&UNK_11041b448,0x20,7);
      *(undefined8 *)(puVar13 + 0x10) = 0x101972de4;
      *(undefined **)(puVar13 + 0x18) = puVar10;
      puVar8 = &UNK_11041b470;
      func_0x000107c613fc(&UNK_11041b470,0x28,7);
      *(undefined8 *)(puVar8 + 0x10) = uVar9;
      *(undefined8 *)(puVar8 + 0x18) = 0x101972de4;
      *(undefined **)(puVar8 + 0x20) = puVar10;
      puVar11 = PTR_PTR_1126ba510;
      func_0x000107c610f8(PTR_PTR_1126ba510);
      puVar2 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_90 = FUN_101972df0;
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0x42000000;
      puStack_a0 = &UNK_1011e1384;
      puStack_98 = &UNK_11041b488;
      ppuVar14 = &puStack_b0;
      puStack_88 = puVar13;
      func_0x000107c60bc4(ppuVar14);
      uStack_c8 = 0x101972e10;
      puStack_e8 = puVar2;
      uStack_e0 = 0x42000000;
      puStack_d8 = &UNK_1011adf84;
      puStack_d0 = &UNK_11041b4b0;
      ppuVar12 = &puStack_e8;
      puStack_c0 = puVar8;
      func_0x000107c60bc4(ppuVar12);
      func_0x000107c61580(puVar10,2);
      func_0x000107c48b60(puVar11);
      func_0x000107c60bd0(ppuVar12);
      func_0x000107c60bd0(ppuVar14);
      func_0x000107c61574(puStack_c0);
      func_0x000107c61574(puStack_88);
      func_0x000107c61174(puVar11);
      func_0x000107c431dc(uStack_128);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 101971828; end: 101971897;  */

void FUN_101971828(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  uVar3 = param_3;
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
  func_0x000107c615e8(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101971898; end: 101971987;  */

void FUN_101971898(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  ulong uVar5;
  undefined1 auStack_68 [24];
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4b940(uVar4);
  func_0x000107c61428(unaff_x20 + 0x18,auStack_68,0x21,0);
  uVar5 = *(ulong *)(unaff_x20 + 0x18);
  func_0x000107c61434(param_2);
  uVar2 = uVar5;
  func_0x000107c61558();
  *(ulong *)(unaff_x20 + 0x18) = uVar5;
  uVar3 = uVar5;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    func_0x0001000d182c(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    *(ulong *)(unaff_x20 + 0x18) = uVar3;
  }
  uVar2 = *(ulong *)(uVar3 + 0x10);
  uVar5 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
    uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    func_0x0001000d182c(uVar5,uVar2 + 1,1,uVar3);
  }
  *(ulong *)(uVar5 + 0x10) = uVar2 + 1;
  lVar1 = uVar5 + uVar2 * 0x10;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  *(ulong *)(unaff_x20 + 0x18) = uVar5;
  func_0x000107c614a8(auStack_68);
  func_0x000107c5d278(uVar4);
  return;
}



/* Entry: 101971988; end: 101971c5b;  */

void FUN_101971988(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c4b940(uVar3);
  func_0x000107c61428(param_1 + 0x18,auStack_48,0,0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c61434(uVar1);
  func_0x000107c5d278(uVar3);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = 0x6574656c706d6f63;
  func_0x000107c5fadc(0x6574656c706d6f63,0xe800000000000000);
  func_0x000105528e44(uVar2,uVar3,1);
  func_0x000107c61170(uVar3);
  if (param_3 == 0) {
    func_0x000107c6142c(uVar1);
  }
  else {
    uVar3 = uVar1;
    func_0x000107c5fc48(uVar1,PTR___sSSN_11034da80);
    func_0x000107c6142c(uVar1);
    func_0x000107c4db8c(param_3);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 101971c5c; end: 1019727f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101971c5c(undefined8 param_1,long param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  func_0x000107c5f7fc();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar8 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lVar9 = *(long *)(lVar2 + -8);
  lStack_b8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar2 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    (*param_3)();
  }
  else {
    uStack_c8 = *(undefined8 *)(param_2 + _DAT_112ddb718);
    puVar3 = &UNK_11041b4e8;
    lStack_c0 = lVar10;
    func_0x000107c613fc(&UNK_11041b4e8,0x38,7);
    *(long *)(puVar3 + 0x10) = param_2;
    *(undefined8 *)(puVar3 + 0x18) = param_1;
    *(undefined8 *)(puVar3 + 0x20) = param_5;
    *(code **)(puVar3 + 0x28) = param_3;
    *(undefined8 *)(puVar3 + 0x30) = param_4;
    uStack_88 = 0x101972e34;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000b0c7c;
    puStack_90 = &UNK_11041b500;
    ppuVar4 = &puStack_a8;
    puStack_80 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c61174(param_1);
    func_0x000107c61174(param_5);
    func_0x000107c6157c(param_4);
    func_0x000107c61174(param_2);
    func_0x000107c5f808(lVar2);
    puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar5 = 0x112d4af88;
    func_0x00010041bb14(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                        PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
    uVar6 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar7 = 0x112d4af98;
    func_0x00010041bb54(0x112d4af98,0x112d4af90,&UNK_10d914100);
    func_0x000107c60264(puVar8,&puStack_b0,uVar6,uVar7,lVar1,uVar5);
    func_0x000107c5ffe8(0,lVar2,puVar8,ppuVar4);
    func_0x000107c60bd0(ppuVar4);
    (**(code **)(lStack_c0 + 8))(puVar8,lVar1);
    (**(code **)(lVar9 + 8))(lVar2,lStack_b8);
    func_0x000107c61170(param_2);
    func_0x000107c61574(puStack_80);
  }
  return;
}



/* Entry: 1019727f4; end: 1019729af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019727f4(ulong param_1,long param_2,long param_3,long param_4,code *param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  undefined8 uVar4;
  
  lVar1 = 0;
  func_0x000107c5fb10();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  uVar4 = *(undefined8 *)(*(long *)(param_2 + _DAT_112ddb740) + 0x10);
  if ((param_1 & 1) == 0) {
    uVar2 = 0x6961665f65766173;
    func_0x000107c5fadc(0x6961665f65766173,0xeb0000000064656c);
    func_0x000105528fb8(uVar4,uVar2,1);
    func_0x000107c61170(uVar2);
    (*param_5)(0,0);
  }
  else {
    uVar2 = 0x6465766173;
    func_0x000107c5fadc(0x6465766173,0xe500000000000000);
    func_0x000105528fb8(uVar4,uVar2,1);
    func_0x000107c61170(uVar2);
    uVar4 = *(undefined8 *)(param_3 + _DAT_112f15548);
    uVar2 = ((undefined8 *)(param_3 + _DAT_112f15548))[1];
    func_0x000101971a68(uVar4,uVar2);
    func_0x000101971b8c(uVar4,uVar2);
    func_0x000107c40488();
    func_0x000107c61180();
    if (param_4 == 0) {
      lVar1 = 0;
      uVar4 = 0;
    }
    else {
      lVar3 = param_4;
      func_0x000107c5ee30();
      func_0x000107c61170(param_4);
      func_0x000107c5fb04(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      lVar1 = lVar3;
      uVar4 = uVar2;
      func_0x000107c5faf0(lVar3,uVar2,
                          &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      func_0x00010006c090(lVar3,uVar2);
    }
    (*param_5)(lVar1,uVar4);
    func_0x000107c6142c(uVar4);
  }
  return;
}



/* Entry: 1019729b0; end: 101972b7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1019729b0(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  undefined1 auVar8 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  uVar4 = 0;
  uVar5 = *(ulong *)(unaff_x20 + _DAT_112ddb720);
  uVar7 = ((ulong *)(unaff_x20 + _DAT_112ddb720))[1];
  uVar1 = uVar5 & 0xffffffffffff;
  if ((uVar7 & 0x2000000000000000) != 0) {
    uVar1 = uVar7 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    func_0x000107c5fadc();
    uVar1 = param_1;
    func_0x000107c4aa34();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    uVar6 = param_2;
    uVar2 = uVar1;
    if (uVar1 == 0) {
      uVar2 = 0;
      func_0x000107c5faec(0);
      uVar6 = param_2;
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
    }
    func_0x000107c5faec();
    uVar3 = uVar1 & 0xffffffffffff;
    if ((uVar6 & 0x2000000000000000) != 0) {
      uVar3 = uVar6 >> 0x38 & 0xf;
    }
    if (((uVar3 != 0) &&
        (((uVar1 != 0x2e || (uVar6 != 0xe100000000000000)) &&
         (uVar3 = uVar1, func_0x000107c605b8(), (uVar3 & 1) == 0)))) &&
       (((uVar1 != 0x2e2e || (uVar6 != 0xe200000000000000)) &&
        (uVar3 = uVar1, func_0x000107c605b8(uVar1,uVar6,0x2e2e,0xe200000000000000,0),
        (uVar3 & 1) == 0)))) {
      uStack_60 = 0x2f;
      uStack_58 = 0xe100000000000000;
      uStack_50 = uVar1;
      uStack_48 = uVar6;
      func_0x000100e8b654();
      func_0x000107c6022c(&uStack_60,PTR___sSSN_11034da80,PTR___sSSN_11034da80,uVar3,uVar3);
      if ((uVar4 & 1) == 0) {
        func_0x000107c5fadc(uVar5,uVar7);
        func_0x000107c6142c(uVar6);
        uVar1 = uVar5;
        func_0x000107c5c168(uVar5);
        func_0x000107c61180();
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar2);
        uVar5 = uVar1;
        func_0x000107c5faec(uVar1);
        func_0x000107c61170(uVar1);
        goto LAB_101972b04;
      }
    }
    func_0x000107c6142c(uVar6);
    func_0x000107c61170(uVar2);
  }
  uVar5 = 0;
  uVar7 = 0;
LAB_101972b04:
  auVar8._8_8_ = uVar7;
  auVar8._0_8_ = uVar5;
  return auVar8;
}



/* Entry: 101972b80; end: 101972bcb;  */

void FUN_101972b80(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101972bcc; end: 101972be3;  */

void FUN_101972bcc(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar2 = 0;
  func_0x000107c5f7fc();
  puVar1 = PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8;
  lStack_a8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a8 + 0x40));
  lVar9 = (long)&lStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  lVar10 = *(long *)(lVar3 + -8);
  lStack_b0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar3 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &UNK_11041b358;
  func_0x000107c613fc(&UNK_11041b358,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar7;
  *(undefined8 *)(puVar4 + 0x18) = uVar6;
  *(undefined8 *)(puVar4 + 0x20) = param_1;
  *(undefined8 *)(puVar4 + 0x28) = uVar8;
  uStack_70 = 0x101972bd8;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_11041b370;
  ppuVar5 = &puStack_90;
  puStack_68 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c615f0(param_1);
  func_0x000107c61434(uVar8);
  func_0x000107c6157c(uVar7);
  func_0x000107c61174(uVar6);
  func_0x000107c5f808(lVar3);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar6 = 0x112d4af88;
  func_0x00010041bb14(0x112d4af88,puVar1,
                      PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar7 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar8 = 0x112d4af98;
  func_0x00010041bb54(0x112d4af98,0x112d4af90,&UNK_10d914100);
  func_0x000107c60264(lVar9,&puStack_98,uVar7,uVar8,lVar2,uVar6);
  func_0x000107c5ffe8(0,lVar3,lVar9,ppuVar5);
  func_0x000107c60bd0(ppuVar5);
  (**(code **)(lStack_a8 + 8))(lVar9,lVar2);
  (**(code **)(lVar10 + 8))(lVar3,lStack_b0);
  func_0x000107c61574(puStack_68);
  return;
}



/* Entry: 101972be4; end: 101972d7f;  */

ulong FUN_101972be4(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101972cb4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101972cb8);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000102d86f34(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
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
    uVar4 = 0;
    func_0x000102d86f34(0);
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
  func_0x000107c5fb78(0xd000000000000016,0x800000010efc3ad0);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101972d80);
  (*pcVar2)();
}



/* Entry: 101972d80; end: 101972dab;  */

void FUN_101972d80(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101972dac; end: 101972dd7;  */

void FUN_101972dac(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  if (param_2 != 0) {
    FUN_101971898();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(uVar1);
  return;
}



/* Entry: 101972dd8; end: 101972def;  */

void FUN_101972dd8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c4b940(uVar6);
  func_0x000107c61428(lVar1 + 0x18,auStack_48,0,0);
  uVar4 = *(undefined8 *)(lVar1 + 0x18);
  func_0x000107c61434(uVar4);
  func_0x000107c5d278(uVar6);
  uVar5 = *(undefined8 *)(lVar2 + 0x10);
  uVar6 = 0x6574656c706d6f63;
  func_0x000107c5fadc(0x6574656c706d6f63,0xe800000000000000);
  func_0x000105528e44(uVar5,uVar6,1);
  func_0x000107c61170(uVar6);
  if (lVar3 == 0) {
    func_0x000107c6142c(uVar4);
  }
  else {
    uVar6 = uVar4;
    func_0x000107c5fc48(uVar4,PTR___sSSN_11034da80);
    func_0x000107c6142c(uVar4);
    func_0x000107c4db8c(lVar3);
    func_0x000107c61170(uVar6);
  }
  return;
}



/* Entry: 101972df0; end: 101972e5f;  */

void FUN_101972df0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101972e60; end: 101972ecb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101972e60(byte param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar11;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_d0 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x40);
  lVar2 = 0;
  func_0x000107c5f7fc();
  lStack_b8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b8 + 0x40));
  puVar11 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  lStack_c8 = *(long *)(lVar3 + -8);
  lStack_c0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c8 + 0x40));
  lVar3 = (long)puVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(lVar4 + 0x10,auStack_78,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 == 0) {
    (*pcVar1)();
  }
  else {
    uStack_d8 = *(undefined8 *)(lVar4 + _DAT_112ddb718);
    puVar5 = &UNK_11041b588;
    func_0x000107c613fc(&UNK_11041b588,0x50,7);
    puVar5[0x10] = param_1 & 1;
    *(long *)(puVar5 + 0x18) = lVar4;
    *(undefined8 *)(puVar5 + 0x20) = uVar9;
    *(undefined8 *)(puVar5 + 0x28) = uVar8;
    *(code **)(puVar5 + 0x30) = pcVar1;
    *(undefined8 *)(puVar5 + 0x38) = uVar7;
    *(undefined8 *)(puVar5 + 0x40) = uStack_d0;
    *(undefined8 *)(puVar5 + 0x48) = uVar10;
    uStack_88 = 0x101972e74;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000b0c7c;
    puStack_90 = &UNK_11041b5a0;
    ppuVar6 = &puStack_a8;
    puStack_80 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    func_0x000107c61174(lVar4);
    func_0x000107c61174(uVar9);
    func_0x000107c61174(uVar8);
    func_0x000107c6157c(uVar7);
    func_0x000107c61434(uVar10);
    func_0x000107c5f808(lVar3);
    puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar7 = 0x112d4af88;
    func_0x00010041bb14(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                        PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
    uVar8 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar9 = 0x112d4af98;
    func_0x00010041bb54(0x112d4af98,0x112d4af90,&UNK_10d914100);
    func_0x000107c60264(puVar11,&puStack_b0,uVar8,uVar9,lVar2,uVar7);
    func_0x000107c5ffe8(0,lVar3,puVar11,ppuVar6);
    func_0x000107c60bd0(ppuVar6);
    (**(code **)(lStack_b8 + 8))(puVar11,lVar2);
    (**(code **)(lStack_c8 + 8))(lVar3,lStack_c0);
    func_0x000107c61170(lVar4);
    func_0x000107c61574(puStack_80);
  }
  return;
}



/* Entry: 101972ecc; end: 101972eef;  */

void FUN_101972ecc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101972ef0; end: 101973027;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101972ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  puVar3 = auStack_60;
  func_0x000107c610f8();
  lVar1 = _DAT_112ddb8d0;
  func_0x000107c61614(unaff_x20 + _DAT_112ddb8d0,0);
  func_0x0001000285a8(0x112ddb730,&UNK_10d9a0440);
  uVar2 = param_1;
  func_0x0001000bda74();
  *(undefined8 *)(unaff_x20 + _DAT_112ddb8d8) = uVar2;
  func_0x0001000285a8(0x112ddb8e0,&UNK_10d9a0448);
  uVar2 = param_2;
  func_0x0001000bda74();
  *(undefined8 *)(unaff_x20 + _DAT_112ddb8e8) = uVar2;
  func_0x000107c61604(unaff_x20 + lVar1,param_3);
  func_0x0001000285a8(0x112ddb8f0,&UNK_10d9a0450);
  uVar2 = param_4;
  func_0x0001000bda74();
  *(undefined8 *)(unaff_x20 + _DAT_112ddb8f8) = uVar2;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return puVar3;
}



/* Entry: 101973028; end: 10197305b;  */

void FUN_101973028(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10197305c; end: 1019730b3; -[_TtC21NativeContentDelegate25NativeContentDelegateImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101973078: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010197307c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10197305c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ddb8d8));
  return;
}



/* Entry: 1019730b4; end: 1019732b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019730b4(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lStack_68;
  
  uVar5 = param_2;
  func_0x0001000d224c(&lStack_68);
  if (lStack_68 != 0) {
    if (param_1 >> 0x3e == 0) {
      uVar6 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar6 = param_1 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_1) {
        uVar6 = param_1;
      }
      func_0x000107c60480();
    }
    if (uVar6 != 0) {
      if ((long)uVar6 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1019732b0);
        (*pcVar1)();
      }
      uVar7 = 0;
      do {
        if ((param_1 & 0xc000000000000001) == 0) {
          uVar2 = *(ulong *)(param_1 + uVar7 * 8 + 0x20);
          func_0x000107c61174();
          uVar4 = uVar5;
        }
        else {
          uVar2 = uVar7;
          uVar4 = param_1;
          func_0x000101973954(uVar7,param_1,&PTR_PTR_1126ba688,0x112ddb928);
        }
        uVar3 = uVar2;
        func_0x000107c4ca04();
        func_0x000107c61180();
        uVar5 = uVar4;
        if (uVar3 == 0) {
          func_0x000107c5faec();
          uVar5 = uVar4;
          func_0x000107c5fadc();
          func_0x000107c6142c(uVar4);
        }
        uVar7 = uVar7 + 1;
        func_0x000107c4fec4(lStack_68);
        func_0x000107c61170(uVar2);
        func_0x000107c61170(uVar3);
      } while (uVar6 != uVar7);
    }
    if (param_2 >> 0x3e == 0) {
      uVar5 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar5 = param_2 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_2) {
        uVar5 = param_2;
      }
      func_0x000107c60480();
    }
    if (uVar5 != 0) {
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1019732b4);
        (*pcVar1)();
      }
      uVar6 = 0;
      do {
        if ((param_2 & 0xc000000000000001) == 0) {
          uVar7 = *(ulong *)(param_2 + uVar6 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar7 = uVar6;
          func_0x000101973954(uVar6,param_2,&PTR_PTR_1126d7ab8,0x112d670c8);
        }
        uVar2 = uVar7;
        func_0x000107d6b108();
        func_0x000107c61180();
        if (uVar2 != 0) {
          func_0x000107c4fec4(lStack_68);
          func_0x000107c61170(uVar2);
        }
        uVar6 = uVar6 + 1;
        func_0x000107c61170(uVar7);
      } while (uVar5 != uVar6);
    }
    func_0x000107c615e8(lStack_68);
  }
  return;
}



/* Entry: 1019732b4; end: 10197335b; -[_TtC21NativeContentDelegate25NativeContentDelegateImpl onMediaContentExpired:localMediaReferences:] */

/* WARNING: Possible PIC construction at 0x000101973344: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101973348) */

void FUN_1019732b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_101973ee8(0,0x112ddb928,&PTR_PTR_1126ba688);
  func_0x000107c5fc54(param_3,uVar1);
  uVar1 = 0;
  FUN_101973ee8(0,0x112d670c8,&PTR_PTR_1126d7ab8);
  func_0x000107c5fc54(param_4,uVar1);
  func_0x000107c61174(param_1);
  FUN_1019730b4(param_3,param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 10197335c; end: 1019734f7;  */

/* WARNING: Possible PIC construction at 0x000101973478: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101973490: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019734a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101973494) */
/* WARNING: Removing unreachable block (ram,0x00010197347c) */
/* WARNING: Removing unreachable block (ram,0x0001019734a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10197335c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  puVar1 = &UNK_11041b658;
  func_0x000107c613fc(&UNK_11041b658,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_11041b680;
  func_0x000107c613fc(&UNK_11041b680,0x30,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  lVar3 = unaff_x20 + _DAT_112ddb8d0;
  func_0x000107c61618();
  if (lVar3 == 0) {
    func_0x000107c61174(param_1);
    func_0x000107c61174(param_3);
  }
  else {
    puVar4 = &UNK_11041b6a8;
    func_0x000107c613fc(&UNK_11041b6a8,0x28,7);
    *(code **)(puVar4 + 0x10) = FUN_101973b10;
    *(undefined **)(puVar4 + 0x18) = puVar2;
    *(undefined8 *)(puVar4 + 0x20) = param_1;
    pcStack_60 = FUN_101973d08;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_101971828;
    puStack_68 = &UNK_11041b6c0;
    puStack_58 = puVar4;
    func_0x000107c60bc4(&puStack_80);
    puVar4 = puStack_58;
    func_0x000107c61174(param_1);
    func_0x000107c61174();
    func_0x000107c61174(param_3);
    func_0x000107c6157c(puVar1);
    func_0x000107c6157c(puVar2);
    puVar2 = puVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 1019734f8; end: 10197388b;  */

/* WARNING: Possible PIC construction at 0x0001019735c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101973608: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101973624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010197367c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019736c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010197373c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101973760: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101973798: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019737c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019737d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019737e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101973868: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101973848: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101973858: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101973808: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010197380c) */
/* WARNING: Removing unreachable block (ram,0x00010006c090) */
/* WARNING: Removing unreachable block (ram,0x00010006c09c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0cc) */
/* WARNING: Removing unreachable block (ram,0x00010006c0a4) */
/* WARNING: Removing unreachable block (ram,0x00010197385c) */
/* WARNING: Removing unreachable block (ram,0x00010197384c) */
/* WARNING: Removing unreachable block (ram,0x0001019737e8) */
/* WARNING: Removing unreachable block (ram,0x000101973868) */
/* WARNING: Removing unreachable block (ram,0x0001019737d8) */
/* WARNING: Removing unreachable block (ram,0x0001019737c8) */
/* WARNING: Removing unreachable block (ram,0x00010197379c) */
/* WARNING: Removing unreachable block (ram,0x000101973764) */
/* WARNING: Removing unreachable block (ram,0x000101973838) */
/* WARNING: Removing unreachable block (ram,0x000101973780) */
/* WARNING: Removing unreachable block (ram,0x000101973740) */
/* WARNING: Removing unreachable block (ram,0x000101973680) */
/* WARNING: Removing unreachable block (ram,0x000101973628) */
/* WARNING: Removing unreachable block (ram,0x0001019736cc) */
/* WARNING: Removing unreachable block (ram,0x000101973804) */
/* WARNING: Removing unreachable block (ram,0x0001019736d0) */
/* WARNING: Removing unreachable block (ram,0x00010197363c) */
/* WARNING: Removing unreachable block (ram,0x0001019736c4) */
/* WARNING: Removing unreachable block (ram,0x0001019736c8) */
/* WARNING: Removing unreachable block (ram,0x000101973654) */
/* WARNING: Removing unreachable block (ram,0x00010197360c) */
/* WARNING: Removing unreachable block (ram,0x0001019735c8) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Removing unreachable block (ram,0x00010006c0c4) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_1019734f8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c4c930();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c4c99c();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar2 = param_1;
      func_0x000107c40488();
      func_0x000107c61180();
      if (lVar2 == 0) {
        func_0x000107c61170(param_1);
        param_1 = lVar1;
      }
      else {
        func_0x000107c5ee30();
        param_1 = lVar2;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10197388c; end: 101973b0f; -[_TtC21NativeContentDelegate25NativeContentDelegateImpl onMediaPrefetchComplete:messageID:result:] */

/* WARNING: Possible PIC construction at 0x0001019738e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019738e8) */

void FUN_10197388c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_10197335c(param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101973b10; end: 101973d07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101973b10(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long unaff_x20;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  if (param_1 != 0) {
    ppuVar9 = &puStack_c0;
    lVar6 = *(long *)(unaff_x20 + 0x10);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
    func_0x000107c61428(lVar6 + 0x10,auStack_78,0,0);
    lVar4 = lVar6 + 0x10;
    func_0x000107c61618();
    if (lVar4 != 0) {
      puVar5 = &UNK_11041b658;
      func_0x000107c613fc(&UNK_11041b658,0x18,7);
      func_0x000107c61428(lVar6 + 0x10,auStack_90,0,0);
      lVar6 = lVar6 + 0x10;
      func_0x000107c61618(lVar6);
      func_0x000107c61614(puVar5 + 0x10,lVar6);
      func_0x000107c61174();
      func_0x000107c61170(lVar6);
      puVar7 = &UNK_11041b798;
      func_0x000107c613fc(&UNK_11041b798,0x28,7);
      *(undefined **)(puVar7 + 0x10) = puVar5;
      *(long *)(puVar7 + 0x18) = param_1;
      *(undefined8 *)(puVar7 + 0x20) = uVar3;
      lVar6 = lVar4 + _DAT_112ddb8d0;
      func_0x000107c61618();
      if (lVar6 == 0) {
        func_0x000107c61174(uVar3);
      }
      else {
        puVar8 = &UNK_11041b7c0;
        func_0x000107c613fc(&UNK_11041b7c0,0x30,7);
        *(code **)(puVar8 + 0x10) = FUN_101973f48;
        *(undefined **)(puVar8 + 0x18) = puVar7;
        *(undefined8 *)(puVar8 + 0x20) = uVar2;
        *(undefined8 *)(puVar8 + 0x28) = uVar1;
        pcStack_a0 = FUN_101974334;
        puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b8 = 0x42000000;
        pcStack_b0 = FUN_101971828;
        puStack_a8 = &UNK_11041b7d8;
        puStack_98 = puVar8;
        func_0x000107c60bc4(&puStack_c0);
        puVar8 = puStack_98;
        func_0x000107c61174(param_1);
        func_0x000107c61174(uVar3);
        func_0x000107c6157c(puVar5);
        func_0x000107c6157c(puVar7);
        func_0x000107c61174(uVar1);
        func_0x000107c61574(puVar8);
        func_0x000107c5dc64(lVar6);
        func_0x000107c61170(lVar4);
        func_0x000107c61574(puVar7);
        func_0x000107c61170(param_1);
        func_0x000107c60bd0(ppuVar9);
        lVar4 = lVar6;
        puVar7 = puVar5;
      }
      func_0x000107c61170(lVar4);
      func_0x000107c61574(puVar7);
    }
  }
  return;
}



/* Entry: 101973d08; end: 101973eab;  */

void FUN_101973d08(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar7 = &puStack_90;
  ppuVar8 = &puStack_90;
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  if (param_1 != 0) {
    uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
    func_0x000107c44174();
    func_0x000107c61180();
    if (param_1 != 0) {
      puVar4 = &UNK_11041b6f8;
      func_0x000107c613fc(&UNK_11041b6f8,0x20,7);
      *(code **)(puVar4 + 0x10) = pcVar1;
      *(undefined8 *)(puVar4 + 0x18) = uVar2;
      puVar5 = &UNK_11041b720;
      func_0x000107c613fc(&UNK_11041b720,0x28,7);
      *(undefined8 *)(puVar5 + 0x10) = uVar9;
      *(code **)(puVar5 + 0x18) = pcVar1;
      *(undefined8 *)(puVar5 + 0x20) = uVar2;
      puVar6 = PTR_PTR_1126ba338;
      func_0x000107c610f8(PTR_PTR_1126ba338);
      puVar3 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0x101973f28;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = (undefined *)0x101973904;
      puStack_78 = &UNK_11041b738;
      puStack_68 = puVar4;
      func_0x000107c60bc4(&puStack_90);
      puVar4 = puStack_68;
      func_0x000107c61580(uVar2,2);
      func_0x000107c61174(uVar9);
      func_0x000107c61574(puVar4);
      uStack_70 = 0x101974538;
      puStack_90 = puVar3;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1011adf84;
      puStack_78 = &UNK_11041b760;
      puStack_68 = puVar5;
      func_0x000107c60bc4(&puStack_90);
      func_0x000107c61574(puStack_68);
      func_0x000107c48b64(puVar6);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c4304c(param_1);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(param_1);
      return;
    }
  }
  (*pcVar1)(0);
  return;
}



/* Entry: 101973eac; end: 101973ec7;  */

void FUN_101973eac(long param_1,long param_2)

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



/* Entry: 101973ec8; end: 101973ee7;  */

void FUN_101973ec8(void)

{
  func_0x000107c61168(&PTR_PTR_1127ee348);
  return;
}



/* Entry: 101973ee8; end: 101973f47;  */

void FUN_101973ee8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101973f48; end: 101974333;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101973f48(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long unaff_x20;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  long lStack_c8;
  long alStack_b8 [3];
  undefined1 auStack_a0 [32];
  
  if (param_1 == 0) {
    return;
  }
  lVar7 = *(long *)(unaff_x20 + 0x10);
  lVar10 = *(long *)(unaff_x20 + 0x20);
  puVar8 = auStack_a0;
  func_0x000107c61428(lVar7 + 0x10,puVar8,0,0);
  lVar1 = lVar7 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    func_0x000107c61174(param_1);
    goto LAB_1019742d0;
  }
  lVar2 = param_1;
  func_0x000107c61174();
  func_0x0001000d224c(alStack_b8);
  if (alStack_b8[0] != 0) {
    lVar3 = lVar2;
    func_0x000107c4c930();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x000107c4c99c();
      func_0x000107c61180();
      if (lVar4 != 0) {
        lVar13 = lVar10;
        func_0x000107c5bbf8(lVar10);
        dVar14 = (double)lVar13 / 1000.0;
        lVar13 = lVar10;
        func_0x000107c42890(lVar10);
        dVar16 = dVar14;
        func_0x000107c4bb0c(dVar14,alStack_b8[0]);
        lVar5 = lVar3;
        func_0x000107c5b34c();
        func_0x000107c61180();
        lVar6 = lVar5;
        func_0x000107c4d1bc();
        func_0x000107c61180();
        func_0x000107c61170(lVar5);
        lStack_c8 = lVar2;
        func_0x000107c40258();
        func_0x000107c61180();
        puVar9 = puVar8;
        if (lStack_c8 == 0) {
          func_0x000107c5faec();
          puVar9 = puVar8;
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar8);
        }
        func_0x000107c40674();
        func_0x000107c61180();
        if (lVar2 == 0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar9);
        }
        func_0x000107c406e8();
        func_0x000107c5d0f0();
        func_0x000107c4ca5c();
        lVar5 = lVar3;
        func_0x000107c42378();
        func_0x000107c61180();
        if (lVar5 == 0) {
          dVar16 = 0.0;
        }
        else {
          func_0x000107c4223c();
          func_0x000107c61170(lVar5);
        }
        dVar15 = dVar14 + (double)lVar13 / 1000.0;
        if (lVar6 == 0) {
          puVar11 = (undefined *)0x0;
          puVar12 = (undefined *)0x0;
          lVar13 = 0;
        }
        else {
          lVar13 = lVar6;
          func_0x000107c3ee04();
          func_0x000107c61180();
          lVar5 = lVar6;
          func_0x000107c61174(lVar6);
          func_0x000107c51c0c();
          puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8();
          func_0x000107c490d4();
          func_0x000107c61170(lVar5);
          func_0x000107c61174(lVar5);
          func_0x000107c51c08();
          puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8();
          func_0x000107c490d4();
          func_0x000107c61170(lVar5);
        }
        func_0x000107c56684(dVar16,alStack_b8[0]);
        func_0x000107c61170(lStack_c8);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar13);
        func_0x000107c61170(puVar12);
        func_0x000107c61170(puVar11);
        func_0x000107c4a578();
        func_0x000107c4ca30(lVar10);
        func_0x000107c56488(alStack_b8[0]);
        func_0x000107c4bef8(dVar14,dVar15,alStack_b8[0]);
        func_0x000107c4bef8(dVar15,dVar15,alStack_b8[0]);
        func_0x000107c615e8(alStack_b8[0]);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar6);
        func_0x000107c61170(lVar4);
        goto LAB_1019742c8;
      }
      func_0x000107c61170(lVar3);
    }
    func_0x000107c615e8(alStack_b8[0]);
  }
LAB_1019742c8:
  func_0x000107c61170(lVar1);
LAB_1019742d0:
  func_0x000107c61428(lVar7 + 0x10,alStack_b8,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61618();
  if (lVar7 != 0) {
    FUN_1019734f8(param_1);
    func_0x000107c61170(lVar7);
  }
  func_0x000107c61170(param_1);
  return;
}


