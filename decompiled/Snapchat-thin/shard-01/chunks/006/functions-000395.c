/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1012249ec; end: 101224d2b;  */

void FUN_1012249ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  
  func_0x0001000d224c(&puStack_90);
  puVar1 = puStack_90;
  if (puStack_90 != (undefined *)0x0) {
    lVar2 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    uVar11 = 0x30;
    lVar3 = lVar2;
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 2;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    ppuVar4 = &PTR____CFConstantStringClassReference_110e12b58;
    func_0x000107c5faec();
    *(undefined ***)(lVar3 + 0x20) = ppuVar4;
    *(undefined8 *)(lVar3 + 0x28) = uVar11;
    lVar5 = lVar2;
    func_0x000107c613fc(lVar2,0x30,7);
    *(undefined8 *)(lVar5 + 0x18) = 2;
    *(undefined8 *)(lVar5 + 0x10) = 1;
    *(undefined8 *)(lVar5 + 0x20) = param_3;
    *(undefined8 *)(lVar5 + 0x28) = param_4;
    puVar6 = PTR_PTR_1126b5be8;
    func_0x000107c610f8(PTR_PTR_1126b5be8);
    func_0x000107c61434(param_4);
    puVar10 = PTR___sSSN_11034da80;
    lVar7 = lVar3;
    func_0x000107c5fc48(lVar3,PTR___sSSN_11034da80);
    func_0x000107c61574(lVar3);
    lVar3 = lVar5;
    func_0x000107c5fc48(lVar5,puVar10);
    func_0x000107c61574(lVar5);
    func_0x000107c45794(puVar6);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar3);
    puVar8 = PTR_PTR_1126b1a40;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar9 = puVar8;
    func_0x00010011df08();
    func_0x000107c61180();
    if (puVar9 == (undefined *)0x0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar10);
    }
    puVar10 = puVar8;
    func_0x000107c5e870(puVar8);
    func_0x000107c61180();
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar10);
    func_0x000107c5e7ec(puVar8);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c61174(puVar6);
    puVar10 = puVar8;
    func_0x000107c5e500(puVar8);
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar10);
    puVar10 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c48af4(puVar10);
    func_0x000107c61170(param_1);
    func_0x000107c613fc(lVar2,0x30,7);
    *(undefined8 *)(lVar2 + 0x18) = 2;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    *(undefined8 *)(lVar2 + 0x20) = param_3;
    *(undefined8 *)(lVar2 + 0x28) = param_4;
    func_0x000107c61434(param_4);
    lVar3 = lVar2;
    func_0x000107c5fc48(lVar2,PTR___sSSN_11034da80);
    func_0x000107c61574(lVar2);
    puVar9 = puVar8;
    func_0x000107c3ecc8(puVar8);
    func_0x000107c61180();
    pcStack_70 = FUN_101224d2c;
    uStack_68 = 0;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    uStack_80 = 0x100f5c588;
    puStack_78 = &UNK_110395a30;
    ppuVar4 = &puStack_90;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c51db4(puVar1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(puVar1);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(puVar9);
  }
  return;
}



/* Entry: 101224d2c; end: 101224d2f;  */

void FUN_101224d2c(void)

{
  return;
}



/* Entry: 101224d30; end: 101224d63;  */

void FUN_101224d30(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101224d64; end: 101224d83;  */

void FUN_101224d64(void)

{
  FUN_10122472c();
  return;
}



/* Entry: 101224d84; end: 101224daf;  */

void FUN_101224d84(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar6 = auStack_68;
  func_0x000107c61428(lVar4 + 0x10,puVar6,0,0,uVar3,uVar2,*(undefined8 *)(unaff_x20 + 0x38));
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    func_0x000107c4dfe8();
    func_0x000107c61180();
    if (param_1 == 0) {
      func_0x000107c61574(lVar4);
    }
    else {
      lVar5 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      FUN_1012249ec(uVar3,uVar2,lVar5,puVar6);
      func_0x000107c61574(lVar4);
      func_0x000107c6142c(puVar6);
    }
  }
  (*pcVar1)();
  return;
}



/* Entry: 101224db0; end: 101224dcf;  */

void FUN_101224db0(void)

{
  func_0x000107c61168(&PTR_PTR_112d69708);
  return;
}



/* Entry: 101224dd0; end: 101224dd7;  */

void FUN_101224dd0(long param_1,long param_2)

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



/* Entry: 101224dd8; end: 101224f6f;  */

undefined1  [16] FUN_101224dd8(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffd6;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010ef2f450);
  uVar3 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef2f480);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101224ea4);
  (*pcVar1)();
}



/* Entry: 101224f70; end: 101225077;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101224f70(undefined8 param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  func_0x000107c613fc();
  puVar3 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x28) = puVar3;
  iVar2 = (int)*(undefined8 *)(param_5 + _DAT_113092298);
  func_0x0001008fb738();
  plVar1 = (long *)&DAT_113091bd0;
  if (iVar2 == 0) {
    plVar1 = (long *)&DAT_113091bc0;
  }
  uVar4 = *(undefined8 *)(param_3 + _DAT_11305b998);
  *(undefined8 *)(unaff_x20 + 0x10) = *(undefined8 *)(param_2 + *plVar1);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar4;
  func_0x000107c61174();
  func_0x000107c6157c(uVar4);
  uVar4 = param_4;
  func_0x000107c3e270();
  func_0x000107c61180();
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_4);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar4;
  return unaff_x20;
}



/* Entry: 101225078; end: 101225147;  */

void FUN_101225078(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = &UNK_110395ae8;
  func_0x000107c613fc(&UNK_110395ae8,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  pcStack_40 = FUN_1012251dc;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_101225480;
  puStack_48 = &UNK_110395b00;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c5c320(uVar3);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c3e924(uVar3);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 101225148; end: 1012251db;  */

void FUN_101225148(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x00010484fff0(0x1012251e4,0,0x1012251e8,0,0x1012251ec,0,FUN_101225808,param_2,
                        FUN_10122547c,0);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1012251dc; end: 1012251ef;  */

void FUN_1012251dc(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x00010484fff0(0x1012251e4,0,0x1012251e8,0,0x1012251ec,0,FUN_101225808,lVar1,FUN_10122547c,
                        0);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 1012251f0; end: 101225387;  */

void FUN_1012251f0(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long extraout_x8;
  undefined1 *puVar7;
  long lVar8;
  
  lVar1 = 0;
  uVar6 = param_2;
  func_0x000107c5f824();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar7 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = param_1;
  func_0x000107c4d7e4();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x000107c5faec();
    func_0x000107c61170(lVar3);
    func_0x000107c5fb5c(lVar2,uVar6);
    func_0x000107c6142c(uVar6);
    if (((0 < lVar2) && (lVar3 = param_1, func_0x000107c5b634(), lVar3 == 3)) &&
       ((param_2 & 1) != 0)) {
      lVar3 = *(long *)(param_3 + 0x20);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar2 = lVar3;
        func_0x000107c4f800();
        func_0x000107c61180();
        func_0x000107c615e8(lVar3);
        func_0x000107c5f818(puVar7);
        puVar4 = &UNK_110395b60;
        func_0x000107c613fc(&UNK_110395b60,0x20,7);
        *(long *)(puVar4 + 0x10) = param_3;
        *(long *)(puVar4 + 0x18) = param_1;
        uVar5 = 0;
        func_0x000100964acc(0);
        func_0x000107c6157c(param_3);
        func_0x000107c61174(param_1);
        func_0x000100905790(puVar7,0x101225810,puVar4,uVar5);
        func_0x000107c61170(lVar2);
        func_0x000107c61574(puVar4);
        (**(code **)(lVar8 + 8))(puVar7,lVar1);
      }
    }
  }
  return;
}



/* Entry: 101225388; end: 10122547b;  */

void FUN_101225388(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  lVar1 = param_2;
  FUN_101225818();
  if (lVar1 != 0) {
    func_0x0001000d224c(&uStack_48);
    puVar2 = &UNK_110395b88;
    func_0x000107c613fc(&UNK_110395b88,0x18,7);
    *(long *)(puVar2 + 0x10) = param_2;
    pcStack_58 = FUN_101226388;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    uStack_68 = 0x100ff4e14;
    puStack_60 = &UNK_110395ba0;
    ppuVar3 = &puStack_78;
    puStack_50 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_50;
    func_0x000107c61174(param_2);
    func_0x000107c61574(puVar2);
    func_0x000107c518e8(uStack_48);
    func_0x000107c61170(lVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(uStack_48);
  }
  return;
}



/* Entry: 10122547c; end: 10122547f;  */

void FUN_10122547c(void)

{
  return;
}



/* Entry: 101225480; end: 1012254cb;  */

void FUN_101225480(long param_1,undefined8 param_2)

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



/* Entry: 1012254cc; end: 1012254e7;  */

void FUN_1012254cc(long param_1,long param_2)

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



/* Entry: 1012254e8; end: 101225783;  */

undefined * FUN_1012254e8(long param_1)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uStack_168;
  ulong uStack_160;
  undefined1 auStack_158 [56];
  undefined1 auStack_120 [32];
  ulong uStack_100;
  ulong uStack_f8;
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [40];
  undefined1 auStack_88 [40];
  
  puVar10 = *(undefined **)(param_1 + 0x10);
  puVar11 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar10 != (undefined *)0x0) {
    uVar5 = 0x112d4b5f8;
    func_0x0001000285a8(0x112d4b5f8,&UNK_10d9121b0);
    func_0x000107c60498(puVar10,uVar5);
    puVar11 = puVar10;
  }
  uVar9 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar13 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar13 = uVar13 & *(ulong *)(param_1 + 0x40);
  func_0x000107c61434(param_1);
  lVar12 = 0;
  while( true ) {
    while (uVar13 != 0) {
      uVar14 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) | lVar12 << 6;
      func_0x0001007bbd18(*(long *)(param_1 + 0x30) + uVar14 * 0x28,auStack_b0);
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + uVar14 * 0x20,auStack_88);
      func_0x0001007bbd18(auStack_b0,auStack_158);
      puVar6 = &uStack_168;
      func_0x000107c6147c(puVar6,auStack_158,PTR___ss11AnyHashableVN_11034e448,PTR___sSSN_11034da80,
                          6);
      uVar2 = uStack_160;
      uVar14 = uStack_168;
      if ((int)puVar6 == 0) {
        func_0x000107c61574(param_1);
        FUN_10122638c(auStack_b0,0x112d69838,&UNK_10d92d0b0);
        func_0x000107c61574(puVar11);
        return (undefined *)0x0;
      }
      uVar13 = uVar13 - 1 & uVar13;
      func_0x0001000bb420(auStack_88,auStack_120);
      FUN_10122638c(auStack_b0,0x112d69838,&UNK_10d92d0b0);
      uStack_100 = uVar14;
      uStack_f8 = uVar2;
      func_0x000100102924(auStack_120,auStack_f0);
      uVar2 = uStack_f8;
      uVar14 = uStack_100;
      func_0x000100102924(auStack_f0,auStack_d0);
      uVar7 = uVar14;
      uVar8 = uVar2;
      func_0x000100029284();
      if ((uVar8 & 1) == 0) {
        if (*(ulong *)(puVar11 + 0x18) <= *(ulong *)(puVar11 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101225780);
          (*pcVar3)();
        }
        uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar11 + uVar8 + 0x40) =
             *(ulong *)(puVar11 + uVar8 + 0x40) | 1L << (uVar7 & 0x3f);
        puVar6 = (ulong *)(*(long *)(puVar11 + 0x30) + uVar7 * 0x10);
        *puVar6 = uVar14;
        puVar6[1] = uVar2;
        func_0x000100102924(auStack_d0,*(long *)(puVar11 + 0x38) + uVar7 * 0x20);
        if (SCARRY8(*(long *)(puVar11 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101225784);
          (*pcVar3)();
        }
        *(long *)(puVar11 + 0x10) = *(long *)(puVar11 + 0x10) + 1;
      }
      else {
        puVar6 = (ulong *)(*(long *)(puVar11 + 0x30) + uVar7 * 0x10);
        uVar8 = puVar6[1];
        *puVar6 = uVar14;
        puVar6[1] = uVar2;
        func_0x000107c6142c(uVar8);
        lVar1 = *(long *)(puVar11 + 0x38) + uVar7 * 0x20;
        func_0x000100183ab8(lVar1);
        func_0x000100102924(auStack_d0,lVar1);
      }
    }
    bVar4 = SCARRY8(lVar12,1);
    lVar12 = lVar12 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10122577c);
      (*pcVar3)();
    }
    if ((long)(uVar9 + 0x3f >> 6) <= lVar12) break;
    uVar13 = ((ulong *)(param_1 + 0x40))[lVar12];
  }
  func_0x000107c61574(param_1);
  return puVar11;
}



/* Entry: 101225784; end: 1012257bf;  */

void FUN_101225784(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1012257c0; end: 1012257df;  */

void FUN_1012257c0(void)

{
  FUN_101225078();
  return;
}



/* Entry: 1012257e0; end: 1012257e7;  */

undefined8 FUN_1012257e0(void)

{
  return 0;
}



/* Entry: 1012257e8; end: 101225807;  */

void FUN_1012257e8(void)

{
  func_0x000107c61168(&PTR_PTR_112d697b8);
  return;
}



/* Entry: 101225808; end: 101225817;  */

void FUN_101225808(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar7;
  long lVar8;
  
  lVar1 = 0;
  uVar6 = param_2;
  func_0x000107c5f824();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar7 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = param_1;
  func_0x000107c4d7e4();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x000107c5faec();
    func_0x000107c61170(lVar3);
    func_0x000107c5fb5c(lVar2,uVar6);
    func_0x000107c6142c(uVar6);
    if (((0 < lVar2) && (lVar3 = param_1, func_0x000107c5b634(), lVar3 == 3)) &&
       ((param_2 & 1) != 0)) {
      lVar3 = *(long *)(unaff_x20 + 0x20);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar2 = lVar3;
        func_0x000107c4f800();
        func_0x000107c61180();
        func_0x000107c615e8(lVar3);
        func_0x000107c5f818(puVar7);
        puVar4 = &UNK_110395b60;
        func_0x000107c613fc(&UNK_110395b60,0x20,7);
        *(long *)(puVar4 + 0x10) = unaff_x20;
        *(long *)(puVar4 + 0x18) = param_1;
        uVar5 = 0;
        func_0x000100964acc(0);
        func_0x000107c6157c();
        func_0x000107c61174(param_1);
        func_0x000100905790(puVar7,0x101225810,puVar4,uVar5);
        func_0x000107c61170(lVar2);
        func_0x000107c61574(puVar4);
        (**(code **)(lVar8 + 8))(puVar7,lVar1);
      }
    }
  }
  return;
}



/* Entry: 101225818; end: 101226387;  */

undefined * FUN_101225818(undefined8 *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined **ppuVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = (int)&puStack_90;
  iVar4 = (int)&puStack_90;
  iVar5 = (int)&puStack_90;
  uVar13 = 0;
  iVar6 = (int)&puStack_90;
  iVar7 = (int)&puStack_90;
  uVar14 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  puVar8 = PTR__OBJC_CLASS___UNMutableNotificationContent_1126bc388;
  func_0x000107c610f8(PTR__OBJC_CLASS___UNMutableNotificationContent_1126bc388);
  func_0x000107c453e4();
  puVar9 = param_1;
  func_0x000107c5d9a4();
  func_0x000107c61180();
  puVar2 = PTR___sypN_11034f1a8;
  if (puVar9 == (undefined8 *)0x0) {
LAB_101225980:
    func_0x000107c61170(puVar8);
    return (undefined *)0x0;
  }
  puVar10 = puVar9;
  func_0x000107c5f9e8();
  func_0x000107c61170(puVar9);
  puVar9 = puVar10;
  FUN_1012254e8();
  func_0x000107c6142c(puVar10);
  if (puVar9 == (undefined8 *)0x0) goto LAB_101225980;
  puVar10 = puVar9;
  func_0x00010018cc3c(puVar9);
  puVar11 = puVar10;
  puVar16 = PTR___ss11AnyHashableVN_11034e448;
  func_0x000107c5f9dc();
  func_0x000107c6142c(puVar10);
  func_0x000107c5a360(puVar8);
  func_0x000107c61170(puVar11);
  ppuVar12 = &PTR____CFConstantStringClassReference_110f9dd98;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f9dd98);
  if (puVar9[2] == 0) {
LAB_101225998:
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
    func_0x000107c6142c(puVar16);
LAB_1012259a8:
    puVar10 = (undefined8 *)0x112d387f8;
    FUN_10122638c(&uStack_80,0x112d387f8,&UNK_10d902650);
    puVar15 = (undefined8 *)0x0;
    puVar11 = (undefined8 *)0x0;
  }
  else {
    func_0x000107c61434(puVar9);
    puVar21 = puVar16;
    func_0x000100029284(ppuVar12);
    if (((ulong)puVar21 & 1) == 0) {
      func_0x000107c6142c(puVar9);
      goto LAB_101225998;
    }
    func_0x0001000bb420(puVar9[7] + (long)ppuVar12 * 0x20,&uStack_80);
    func_0x000107c6142c(puVar16);
    func_0x000107c6142c(puVar9);
    if (lStack_68 == 0) goto LAB_1012259a8;
    puVar10 = &uStack_80;
    func_0x000107c6147c(&puStack_90,puVar10,puVar2 + 8,PTR___sSSN_11034da80,6);
    puVar15 = puStack_88;
    puVar11 = puStack_90;
    if (iVar3 == 0) {
      puVar11 = (undefined8 *)0x0;
      puVar15 = (undefined8 *)0x0;
    }
  }
  ppuVar12 = &PTR____CFConstantStringClassReference_110f9e898;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f9e898);
  if (puVar9[2] == 0) {
LAB_101225a28:
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c61434(puVar9);
    puVar23 = puVar10;
    func_0x000100029284(ppuVar12);
    if (((ulong)puVar23 & 1) == 0) {
      func_0x000107c6142c(puVar9);
      goto LAB_101225a28;
    }
    func_0x0001000bb420(puVar9[7] + (long)ppuVar12 * 0x20,&uStack_80);
    func_0x000107c6142c(puVar10);
    puVar10 = puVar9;
  }
  func_0x000107c6142c(puVar10);
  if (lStack_68 == 0) {
    puVar10 = (undefined8 *)0x112d387f8;
    FUN_10122638c(&uStack_80,0x112d387f8,&UNK_10d902650);
    puVar22 = (undefined8 *)0x0;
    puVar23 = (undefined8 *)0x0;
  }
  else {
    puVar10 = &uStack_80;
    func_0x000107c6147c(&puStack_90,puVar10,puVar2 + 8,PTR___sSSN_11034da80,6);
    puVar22 = puStack_88;
    puVar23 = puStack_90;
    if (iVar4 == 0) {
      puVar23 = (undefined8 *)0x0;
      puVar22 = (undefined8 *)0x0;
    }
  }
  ppuVar12 = &PTR____CFConstantStringClassReference_110f9e838;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f9e838);
  if (puVar9[2] == 0) {
LAB_101225af0:
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c61434(puVar9);
    puVar25 = puVar10;
    func_0x000100029284(ppuVar12);
    if (((ulong)puVar25 & 1) == 0) {
      func_0x000107c6142c(puVar9);
      goto LAB_101225af0;
    }
    func_0x0001000bb420(puVar9[7] + (long)ppuVar12 * 0x20,&uStack_80);
    func_0x000107c6142c(puVar10);
    puVar10 = puVar9;
  }
  func_0x000107c6142c(puVar10);
  if (lStack_68 == 0) {
    puVar10 = (undefined8 *)0x112d387f8;
    FUN_10122638c(&uStack_80,0x112d387f8,&UNK_10d902650);
    puVar25 = (undefined8 *)0x0;
    puVar24 = (undefined8 *)0x0;
    if (puVar15 != (undefined8 *)0x0) goto LAB_101225b38;
joined_r0x000101225bec:
    if (puVar22 != (undefined8 *)0x0) {
      uVar1 = (ulong)puVar23 & 0xffffffffffff;
      if (((ulong)puVar22 & 0x2000000000000000) != 0) {
        uVar1 = (ulong)puVar22 >> 0x38 & 0xf;
      }
      if (uVar1 == 0) {
        func_0x000107c6142c(puVar22);
        goto joined_r0x000101225c00;
      }
      func_0x000107c6142c(puVar24);
      puVar10 = puVar22;
      func_0x000107c5fadc(puVar23);
      puVar11 = puVar23;
LAB_101225c2c:
      func_0x000107c6142c(puVar22);
      func_0x000107c59e18(puVar8);
      goto LAB_101225c40;
    }
joined_r0x000101225c00:
    if (puVar24 != (undefined8 *)0x0) {
      uVar1 = (ulong)puVar25 & 0xffffffffffff;
      if (((ulong)puVar24 & 0x2000000000000000) != 0) {
        uVar1 = (ulong)puVar24 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        puVar10 = puVar24;
        func_0x000107c5fadc(puVar25);
        puVar22 = puVar24;
        puVar11 = puVar25;
        goto LAB_101225c2c;
      }
      func_0x000107c6142c(puVar24);
    }
  }
  else {
    puVar10 = &uStack_80;
    func_0x000107c6147c(&puStack_90,puVar10,puVar2 + 8,PTR___sSSN_11034da80,6);
    puVar24 = puStack_88;
    puVar25 = puStack_90;
    if (iVar5 == 0) {
      puVar25 = (undefined8 *)0x0;
      puVar24 = (undefined8 *)0x0;
    }
    if (puVar15 == (undefined8 *)0x0) goto joined_r0x000101225bec;
LAB_101225b38:
    uVar1 = (ulong)puVar11 & 0xffffffffffff;
    if (((ulong)puVar15 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)puVar15 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      func_0x000107c6142c(puVar15);
      goto joined_r0x000101225bec;
    }
    func_0x000107c6142c(puVar24);
    func_0x000107c6142c(puVar22);
    puVar10 = puVar15;
    func_0x000107c5fadc(puVar11);
    func_0x000107c6142c(puVar15);
    func_0x000107c59e18(puVar8);
LAB_101225c40:
    func_0x000107c61170(puVar11);
  }
  ppuVar12 = &PTR____CFConstantStringClassReference_110f9e858;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f9e858);
  if (puVar9[2] == 0) {
LAB_101225ca4:
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c61434(puVar9);
    puVar11 = puVar10;
    func_0x000100029284(ppuVar12);
    if (((ulong)puVar11 & 1) == 0) {
      func_0x000107c6142c(puVar9);
      goto LAB_101225ca4;
    }
    func_0x0001000bb420(puVar9[7] + (long)ppuVar12 * 0x20,&uStack_80);
    func_0x000107c6142c(puVar10);
    puVar10 = puVar9;
  }
  func_0x000107c6142c(puVar10);
  if (lStack_68 == 0) {
    puVar10 = (undefined8 *)0x112d387f8;
    FUN_10122638c(&uStack_80,0x112d387f8,&UNK_10d902650);
  }
  else {
    puVar10 = &uStack_80;
    func_0x000107c6147c(&puStack_90,puVar10,puVar2 + 8,PTR___sSSN_11034da80,6);
    puVar15 = puStack_88;
    puVar11 = puStack_90;
    if ((uVar13 & 1) != 0) {
      puVar23 = puStack_90;
      puVar10 = puStack_88;
      func_0x000107c5fb5c();
      if ((long)puVar23 < 1) {
        func_0x000107c6142c(puVar15);
      }
      else {
        puVar10 = puVar15;
        func_0x000107c5fadc(puVar11);
        func_0x000107c6142c(puVar15);
        func_0x000107c59a8c(puVar8);
        func_0x000107c61170(puVar11);
      }
    }
  }
  ppuVar12 = &PTR____CFConstantStringClassReference_110f9ef58;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f9ef58);
  if (puVar9[2] == 0) {
LAB_101225da8:
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c61434(puVar9);
    puVar11 = puVar10;
    func_0x000100029284(ppuVar12);
    if (((ulong)puVar11 & 1) == 0) {
      func_0x000107c6142c(puVar9);
      goto LAB_101225da8;
    }
    func_0x0001000bb420(puVar9[7] + (long)ppuVar12 * 0x20,&uStack_80);
    func_0x000107c6142c(puVar10);
    puVar10 = puVar9;
  }
  func_0x000107c6142c(puVar10);
  if (lStack_68 == 0) {
    puVar10 = (undefined8 *)0x112d387f8;
    FUN_10122638c(&uStack_80,0x112d387f8,&UNK_10d902650);
    puVar15 = (undefined8 *)0x0;
    puVar11 = (undefined8 *)0x0;
  }
  else {
    puVar10 = &uStack_80;
    func_0x000107c6147c(&puStack_90,puVar10,puVar2 + 8,PTR___sSSN_11034da80,6);
    puVar15 = puStack_88;
    puVar11 = puStack_90;
    if (iVar6 == 0) {
      puVar11 = (undefined8 *)0x0;
      puVar15 = (undefined8 *)0x0;
    }
  }
  ppuVar12 = &PTR____CFConstantStringClassReference_110f9e878;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f9e878);
  if (puVar9[2] == 0) {
LAB_101225e70:
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c61434(puVar9);
    puVar23 = puVar10;
    func_0x000100029284(ppuVar12);
    if (((ulong)puVar23 & 1) == 0) {
      func_0x000107c6142c(puVar9);
      goto LAB_101225e70;
    }
    func_0x0001000bb420(puVar9[7] + (long)ppuVar12 * 0x20,&uStack_80);
    func_0x000107c6142c(puVar10);
    puVar10 = puVar9;
  }
  func_0x000107c6142c(puVar10);
  if (lStack_68 == 0) {
    puVar10 = (undefined8 *)0x112d387f8;
    FUN_10122638c(&uStack_80,0x112d387f8,&UNK_10d902650);
    puVar23 = (undefined8 *)0x0;
    puVar22 = (undefined8 *)0x0;
    if (puVar15 != (undefined8 *)0x0) goto LAB_101225eb8;
joined_r0x000101225f28:
    if (puVar22 != (undefined8 *)0x0) {
      puVar11 = puVar23;
      puVar10 = puVar22;
      func_0x000107c5fb5c();
      if ((long)puVar11 < 1) {
        func_0x000107c6142c(puVar22);
      }
      else {
        puVar10 = puVar22;
        func_0x000107c5fadc(puVar23);
        func_0x000107c6142c(puVar22);
        func_0x000107c52dcc(puVar8);
        func_0x000107c61170(puVar23);
      }
    }
  }
  else {
    puVar10 = &uStack_80;
    func_0x000107c6147c(&puStack_90,puVar10,puVar2 + 8,PTR___sSSN_11034da80,6);
    puVar22 = puStack_88;
    puVar23 = puStack_90;
    if (iVar7 == 0) {
      puVar23 = (undefined8 *)0x0;
      puVar22 = (undefined8 *)0x0;
    }
    if (puVar15 == (undefined8 *)0x0) goto joined_r0x000101225f28;
LAB_101225eb8:
    puVar25 = puVar11;
    puVar10 = puVar15;
    func_0x000107c5fb5c();
    if ((long)puVar25 < 1) {
      func_0x000107c6142c(puVar15);
      goto joined_r0x000101225f28;
    }
    func_0x000107c6142c(puVar22);
    puVar10 = puVar15;
    func_0x000107c5fadc(puVar11);
    func_0x000107c6142c(puVar15);
    func_0x000107c52dcc(puVar8);
    func_0x000107c61170(puVar11);
  }
  func_0x000107c4f6e0();
  func_0x000107c61180();
  if (param_1 != (undefined8 *)0x0) {
    func_0x000107c53294(puVar8);
    func_0x000107c61170(param_1);
  }
  ppuVar12 = &PTR____CFConstantStringClassReference_110e63558;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110e63558);
  if (puVar9[2] == 0) {
LAB_101226014:
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c61434(puVar9);
    puVar11 = puVar10;
    func_0x000100029284(ppuVar12);
    if (((ulong)puVar11 & 1) == 0) {
      func_0x000107c6142c(puVar9);
      goto LAB_101226014;
    }
    func_0x0001000bb420(puVar9[7] + (long)ppuVar12 * 0x20,&uStack_80);
    func_0x000107c6142c(puVar10);
    puVar10 = puVar9;
  }
  func_0x000107c6142c(puVar10);
  if (lStack_68 == 0) {
    puVar10 = (undefined8 *)0x112d387f8;
    FUN_10122638c(&uStack_80,0x112d387f8,&UNK_10d902650);
  }
  else {
    puVar10 = &uStack_80;
    func_0x000107c6147c(&puStack_90,puVar10,puVar2 + 8,PTR___sSSN_11034da80,6);
    puVar11 = puStack_88;
    if ((uVar14 & 1) != 0) {
      puVar15 = puStack_90;
      puVar10 = puStack_88;
      func_0x000107c5fadc(puStack_90);
      func_0x000107c6142c(puVar11);
      puVar16 = PTR__OBJC_CLASS___UNNotificationSound_1126d8b80;
      func_0x000107c61168(PTR__OBJC_CLASS___UNNotificationSound_1126d8b80);
      func_0x000107c5b5f8();
      func_0x000107c61180();
      func_0x000107c59534(puVar8);
      func_0x000107c61170(puVar15);
      func_0x000107c61170(puVar16);
    }
  }
  ppuVar12 = &PTR____CFConstantStringClassReference_110ecba78;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110ecba78);
  if (puVar9[2] == 0) {
LAB_10122611c:
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c61434(puVar9);
    puVar11 = puVar10;
    func_0x000100029284(ppuVar12);
    if (((ulong)puVar11 & 1) == 0) {
      func_0x000107c6142c(puVar9);
      goto LAB_10122611c;
    }
    func_0x0001000bb420(puVar9[7] + (long)ppuVar12 * 0x20,&uStack_80);
    func_0x000107c6142c(puVar10);
    puVar10 = puVar9;
  }
  func_0x000107c6142c(puVar10);
  func_0x000107c6142c(puVar9);
  if (lStack_68 == 0) goto LAB_101226334;
  uVar17 = 0x112d472a8;
  func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
  puVar9 = &uStack_80;
  func_0x000107c6147c(&puStack_90,puVar9,puVar2 + 8,uVar17,6);
  puVar10 = puStack_90;
  if ((uVar18 & 1) == 0) {
    return puVar8;
  }
  ppuVar12 = &PTR____CFConstantStringClassReference_110dcef38;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110dcef38);
  if (puVar10[2] == 0) {
LAB_1012261d0:
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c61434(puVar10);
    puVar11 = puVar9;
    func_0x000100029284(ppuVar12);
    if (((ulong)puVar11 & 1) == 0) {
      func_0x000107c6142c(puVar10);
      goto LAB_1012261d0;
    }
    func_0x0001000bb420(puVar10[7] + (long)ppuVar12 * 0x20,&uStack_80);
    func_0x000107c6142c(puVar9);
    puVar9 = puVar10;
  }
  func_0x000107c6142c(puVar9);
  if (lStack_68 == 0) {
    puVar9 = (undefined8 *)0x112d387f8;
    FUN_10122638c(&uStack_80,0x112d387f8,&UNK_10d902650);
  }
  else {
    puVar9 = &uStack_80;
    func_0x000107c6147c(&puStack_90,puVar9,puVar2 + 8,PTR___sSSN_11034da80,6);
    puVar11 = puStack_88;
    if ((uVar19 & 1) != 0) {
      puVar15 = puStack_90;
      puVar9 = puStack_88;
      func_0x000107c5fadc(puStack_90);
      func_0x000107c6142c(puVar11);
      func_0x000107c53294(puVar8);
      func_0x000107c61170(puVar15);
    }
  }
  ppuVar12 = &PTR____CFConstantStringClassReference_110f9ec38;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f9ec38);
  if (puVar10[2] == 0) {
LAB_1012262b0:
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c61434(puVar10);
    puVar11 = puVar9;
    func_0x000100029284(ppuVar12);
    if (((ulong)puVar11 & 1) == 0) {
      func_0x000107c6142c(puVar10);
      goto LAB_1012262b0;
    }
    func_0x0001000bb420(puVar10[7] + (long)ppuVar12 * 0x20,&uStack_80);
    func_0x000107c6142c(puVar9);
    puVar9 = puVar10;
  }
  func_0x000107c6142c(puVar9);
  func_0x000107c6142c(puVar10);
  if (lStack_68 != 0) {
    func_0x000107c6147c(&puStack_90,&uStack_80,puVar2 + 8,PTR___sSSN_11034da80,6);
    if ((uVar20 & 1) == 0) {
      return puVar8;
    }
    uVar13 = (ulong)puStack_90 & 0xffffffffffff;
    if (((ulong)puStack_88 & 0x2000000000000000) != 0) {
      uVar13 = (ulong)puStack_88 >> 0x38 & 0xf;
    }
    if (uVar13 != 0) {
      puVar9 = puStack_90;
      func_0x000107c5fadc(puStack_90,puStack_88);
      func_0x000107c6142c(puStack_88);
      func_0x000107c59cd0(puVar8);
      func_0x000107c61170(puVar9);
      return puVar8;
    }
    func_0x000107c6142c(puStack_88);
    return puVar8;
  }
LAB_101226334:
  FUN_10122638c(&uStack_80,0x112d387f8,&UNK_10d902650);
  return puVar8;
}



/* Entry: 101226388; end: 10122638b;  */

void FUN_101226388(void)

{
  return;
}



/* Entry: 10122638c; end: 1012263cb;  */

undefined8 FUN_10122638c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1012263cc; end: 1012263d3;  */

void FUN_1012263cc(long param_1,long param_2)

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



/* Entry: 1012263d4; end: 1012263df; -[SCAddDuplexInAppNotificationToTrayEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012263d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d69840;
  func_0x000107c61428(param_1 + _DAT_112d69840,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012263e0; end: 1012263eb; -[SCAddDuplexInAppNotificationToTrayEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012263e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d69840;
  func_0x000107c61428(param_1 + _DAT_112d69840,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012263ec; end: 1012263f7; -[SCAddDuplexInAppNotificationToTrayEntryPoint systemScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012263ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d69848;
  func_0x000107c61428(param_1 + _DAT_112d69848,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012263f8; end: 101226403; -[SCAddDuplexInAppNotificationToTrayEntryPoint setSystemScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012263f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d69848;
  func_0x000107c61428(param_1 + _DAT_112d69848,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101226404; end: 10122640f; -[SCAddDuplexInAppNotificationToTrayEntryPoint localNotificationSchedulingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101226404(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d69850;
  func_0x000107c61428(param_1 + _DAT_112d69850,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101226410; end: 10122641b; -[SCAddDuplexInAppNotificationToTrayEntryPoint setLocalNotificationSchedulingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101226410(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d69850;
  func_0x000107c61428(param_1 + _DAT_112d69850,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10122641c; end: 101226427; -[SCAddDuplexInAppNotificationToTrayEntryPoint asyncQueueServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10122641c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d69858;
  func_0x000107c61428(param_1 + _DAT_112d69858,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101226428; end: 101226433; -[SCAddDuplexInAppNotificationToTrayEntryPoint setAsyncQueueServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101226428(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d69858;
  func_0x000107c61428(param_1 + _DAT_112d69858,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101226434; end: 10122643f; -[SCAddDuplexInAppNotificationToTrayEntryPoint appStartExperimentReaderServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101226434(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d69860;
  func_0x000107c61428(param_1 + _DAT_112d69860,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101226440; end: 101226483;  */

void FUN_101226440(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101226484; end: 10122648f; -[SCAddDuplexInAppNotificationToTrayEntryPoint setAppStartExperimentReaderServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101226484(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d69860;
  func_0x000107c61428(param_1 + _DAT_112d69860,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101226490; end: 1012264e3;  */

void FUN_101226490(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012264e4; end: 10122674f;  */

/* WARNING: Possible PIC construction at 0x000101226658: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101226668: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101226678: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101226688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101226698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012266a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101226728: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101226708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012266f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010122670c) */
/* WARNING: Removing unreachable block (ram,0x00010122672c) */
/* WARNING: Removing unreachable block (ram,0x0001012266ac) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x00010122669c) */
/* WARNING: Removing unreachable block (ram,0x00010122668c) */
/* WARNING: Removing unreachable block (ram,0x00010122667c) */
/* WARNING: Removing unreachable block (ram,0x00010122666c) */
/* WARNING: Removing unreachable block (ram,0x00010122665c) */
/* WARNING: Removing unreachable block (ram,0x0001012266fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012264e4(void)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  lVar4 = unaff_x20;
  func_0x000107c5c634();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c4b81c();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar6 = unaff_x20;
      func_0x000107c3e274();
      func_0x000107c61180();
      if (lVar6 != 0) {
        func_0x000107c3de4c();
        func_0x000107c61180();
        if (unaff_x20 == 0) {
          func_0x000107c61170(lVar3);
          lVar3 = lVar4;
        }
        else {
          lVar7 = 0;
          FUN_1012257e8();
          func_0x000107c613fc();
          puVar8 = PTR_PTR_1126ae810;
          func_0x000107c610f8();
          func_0x000107c61174(lVar3);
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174(lVar6);
          func_0x000107c61174();
          func_0x000107c453e4();
          *(undefined **)(lVar7 + 0x28) = puVar8;
          iVar2 = (int)*(undefined8 *)(unaff_x20 + _DAT_113092298);
          func_0x0001008fb738();
          plVar1 = (long *)&DAT_113091bd0;
          if (iVar2 == 0) {
            plVar1 = (long *)&DAT_113091bc0;
          }
          *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar4 + *plVar1);
          uVar9 = *(undefined8 *)(lVar5 + _DAT_11305b998);
          *(undefined8 *)(lVar7 + 0x18) = uVar9;
          func_0x000107c61174();
          func_0x000107c6157c(uVar9);
          func_0x000107c3e270(lVar6);
          func_0x000107c61180();
          lVar3 = unaff_x20;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 101226750; end: 101226777; -[SCAddDuplexInAppNotificationToTrayEntryPoint begin] */

void FUN_101226750(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1012264e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101226778; end: 1012267bb; -[SCAddDuplexInAppNotificationToTrayEntryPoint end] */

void FUN_101226778(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012267bc; end: 101226a9f;  */

void FUN_1012267bc(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0x63536d6574737973;
    if (((param_2 == 0x63536d6574737973) && (param_3 == -0x14ffffffff9a8f91)) ||
       (func_0x000107c605b8(0x63536d6574737973,0xeb0000000065706f,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c59b6c();
    }
    else {
      uVar2 = 0xd000000000000023;
      if (((param_2 == -0x2fffffffffffffdd) && (param_3 == -0x7ffffffef10e79d0)) ||
         (func_0x000107c605b8(0xd000000000000023,0x800000010ef18630,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5600c();
      }
      else {
        if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ed650)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000012,0x800000010ef129b0,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0;
            if (((param_2 != -0x2fffffffffffffe0) || (param_3 != -0x7ffffffef10ecd10)) &&
               (func_0x000107c605b8(0xd000000000000020,0x800000010ef132f0,param_2,param_3,0),
               (uVar2 & 1) == 0)) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "AddDuplexInAppNotificationToTray/SCAddDuplexInAppNotificationToTrayEntryPoint.swift"
                                  ,0x53,2,0x3c,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x101226aa0);
              (*pcVar1)();
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c527b4();
            goto LAB_101226848;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c52954();
      }
    }
  }
LAB_101226848:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101226aa0; end: 101226b4b; -[SCAddDuplexInAppNotificationToTrayEntryPoint setValue:forIvarName:] */

void FUN_101226aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_1012267bc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101226b4c; end: 101226bfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101226b4c(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d69840,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d69848,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d69850,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d69858,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d69860,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d69868) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101226bfc; end: 101226c1b; -[SCAddDuplexInAppNotificationToTrayEntryPoint init] */

void FUN_101226bfc(void)

{
  FUN_101226b4c();
  return;
}



/* Entry: 101226c1c; end: 101226c4f;  */

void FUN_101226c1c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101226c50; end: 101226cc7; -[SCAddDuplexInAppNotificationToTrayEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101226c50(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d69840);
  func_0x000107c61610(param_1 + _DAT_112d69848);
  func_0x000107c61610(param_1 + _DAT_112d69850);
  func_0x000107c61610(param_1 + _DAT_112d69858);
  func_0x000107c61610(param_1 + _DAT_112d69860);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d69868));
  return;
}



/* Entry: 101226cc8; end: 101226ce7;  */

void FUN_101226cc8(void)

{
  func_0x000107c61168(&PTR_PTR_1127bcb88);
  return;
}



/* Entry: 101226ce8; end: 101226dcf;  */

/* WARNING: Possible PIC construction at 0x000101226d30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101226d34) */
/* WARNING: Removing unreachable block (ram,0x000101226dc4) */
/* WARNING: Removing unreachable block (ram,0x000101226d60) */
/* WARNING: Removing unreachable block (ram,0x000101226d6c) */
/* WARNING: Removing unreachable block (ram,0x000101226d70) */
/* WARNING: Removing unreachable block (ram,0x000101226dc8) */
/* WARNING: Removing unreachable block (ram,0x000101226d74) */
/* WARNING: Removing unreachable block (ram,0x000101226d7c) */
/* WARNING: Removing unreachable block (ram,0x000101226d80) */
/* WARNING: Removing unreachable block (ram,0x000101226dcc) */
/* WARNING: Removing unreachable block (ram,0x000101226d84) */

void FUN_101226ce8(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c5fadc();
  func_0x000107b1f160(param_5,param_3 & 1,param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101226dd0; end: 10122711b;  */

/* WARNING: Possible PIC construction at 0x000101226e4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101226ef0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101226e50) */
/* WARNING: Removing unreachable block (ram,0x000101226f10) */
/* WARNING: Removing unreachable block (ram,0x000101226e88) */
/* WARNING: Removing unreachable block (ram,0x000101226e94) */
/* WARNING: Removing unreachable block (ram,0x000101226e98) */
/* WARNING: Removing unreachable block (ram,0x000101226f14) */
/* WARNING: Removing unreachable block (ram,0x000101226e9c) */
/* WARNING: Removing unreachable block (ram,0x000101226ea4) */
/* WARNING: Removing unreachable block (ram,0x000101226ea8) */
/* WARNING: Removing unreachable block (ram,0x000101226f18) */
/* WARNING: Removing unreachable block (ram,0x000101226eac) */
/* WARNING: Removing unreachable block (ram,0x000101226ef4) */

void FUN_101226dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001048535c0(0);
  func_0x00010485321c(param_3,uVar1);
  func_0x000107c5fadc();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107b1f994(param_5,param_3,param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10122711c; end: 10122712b;  */

undefined1  [16] FUN_10122711c(void)

{
  return ZEXT816(0x110395c68);
}



/* Entry: 10122712c; end: 10122718b; -[_TtC31SDNNotificationProcessingPlugin31SDNNotificationProcessingPlugin init] */

void FUN_10122712c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SDNNotificationProcessingPlugin.SDNNotificationProcessingPlugin",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101227158);
  (*pcVar1)();
}



/* Entry: 10122718c; end: 1012271c3; -[_TtC31SDNNotificationProcessingPlugin31SDNNotificationProcessingPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10122718c(long param_1)

{
  FUN_1012293f0(param_1 + _DAT_112d69898);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d698a0));
  return;
}



/* Entry: 1012271c4; end: 1012271e3;  */

void FUN_1012271c4(void)

{
  func_0x000107c61168(&PTR_PTR_1127bcc68);
  return;
}



/* Entry: 1012271e4; end: 10122748f;  */

/* WARNING: Removing unreachable block (ram,0x0001012273e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1012271e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long extraout_x8;
  long unaff_x20;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  ulong uStack_b0;
  undefined1 auStack_a8 [40];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar14 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  puVar12 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = param_1;
  func_0x000107c5d0f0();
  func_0x000107c61180();
  if (lVar5 == 0) {
    param_2 = 0xe700000000000000;
    lVar13 = 0x6e776f6e6b6e75;
  }
  else {
    lVar13 = lVar5;
    func_0x000107c5faec();
    func_0x000107c61170(lVar5);
  }
  func_0x000107c5eea0(puVar12);
  func_0x000107c5d9a4();
  func_0x000107c61180();
  puVar1 = PTR___sypN_11034f1a8;
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101227490);
    (*pcVar3)();
  }
  lVar5 = param_1;
  func_0x000107c5f9e8();
  func_0x000107c61170(param_1);
  lStack_b8 = 0x617461645f6e6473;
  uStack_b0 = 0xe800000000000000;
  puVar8 = PTR___sSSN_11034da80;
  func_0x000107c602d4(auStack_a8,&lStack_b8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(lVar5 + 0x10) == 0) {
LAB_101227348:
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c61434(lVar5);
    puVar6 = auStack_a8;
    FUN_100df95d0(puVar6);
    if (((ulong)puVar8 & 1) == 0) {
      func_0x000107c6142c(lVar5);
      goto LAB_101227348;
    }
    func_0x0001000bb420(*(long *)(lVar5 + 0x38) + (long)puVar6 * 0x20,&uStack_80);
    func_0x000107c6142c(lVar5);
  }
  func_0x000107c6142c(lVar5);
  func_0x0001007bbff0(auStack_a8);
  if (lStack_68 == 0) {
    func_0x000101229458(&uStack_80,0x112d387f8,&UNK_10d902650);
LAB_10122740c:
    lVar11 = 0;
    if (*(long *)(unaff_x20 + _DAT_112d698a0) == 0) goto LAB_101227434;
    uVar10 = 0;
  }
  else {
    plVar7 = &lStack_b8;
    func_0x000107c6147c(plVar7,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
    uVar2 = uStack_b0;
    if (((ulong)plVar7 & 1) == 0) goto LAB_10122740c;
    lVar5 = lStack_b8;
    uVar9 = uStack_b0;
    func_0x000107c5ee08(lStack_b8,uStack_b0,0);
    func_0x000107c6142c(uVar2);
    if (0xe < uVar9 >> 0x3c) goto LAB_10122740c;
    func_0x000107c610f8(PTR_PTR_1126d8ba0);
    lVar11 = lVar5;
    FUN_101228688(lVar5,uVar9);
    func_0x0001000b44c0(lVar5,uVar9);
    if (lVar11 == 0) goto LAB_10122740c;
    if (*(long *)(unaff_x20 + _DAT_112d698a0) == 0) goto LAB_101227434;
    uVar10 = 1;
  }
  FUN_101226ce8(lVar13,param_2,uVar10,puVar12);
LAB_101227434:
  func_0x000107c6142c(param_2);
  (**(code **)(lVar14 + 8))(puVar12,lVar4);
  return lVar11;
}



/* Entry: 101227490; end: 101227527; -[_TtC31SDNNotificationProcessingPlugin31SDNNotificationProcessingPlugin didReceivePushNotificationRequest:backgroundFetchResultCallback:processingCallback:] */

/* WARNING: Possible PIC construction at 0x000101227508: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010122750c) */

void FUN_101227490(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c60bc4(param_4);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  func_0x0001012288cc(param_3,param_5,param_1,param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c60bd0(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101227528; end: 101228173;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101227528(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  long extraout_x12;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [24];
  long lStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  char cStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lVar4 = 0;
  uStack_118 = param_2;
  lStack_108 = param_7;
  uStack_100 = param_8;
  uStack_f8 = param_5;
  uStack_f0 = param_6;
  func_0x000107c5eea4();
  lVar13 = *(long *)(lVar4 + -8);
  lVar15 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)&lStack_180 - (lVar15 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar9 - extraout_x12;
  lStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  FUN_101229410(param_1,&uStack_c0,0x112d698d0,&UNK_10d92d160);
  if (cStack_98 == '\x01') {
    func_0x000101229458(&uStack_c0,0x112d698d0,&UNK_10d92d160);
  }
  else {
    func_0x000101229458(&uStack_90,0x112d698d8,&UNK_10d92d168);
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    uStack_78 = uStack_a8;
    uStack_80 = uStack_b0;
    lStack_70 = lStack_a0;
  }
  uStack_110 = param_10;
  FUN_101229410(&uStack_90,auStack_e8,0x112d698d8,&UNK_10d92d168);
  if (lStack_d0 == 0) {
    func_0x000101229458(auStack_e8,0x112d698d8,&UNK_10d92d168);
    uVar1 = uStack_f8;
    if (param_4 != 0) {
      uVar7 = uStack_f8;
      func_0x000107c5fadc(uStack_f8,uStack_f0);
      func_0x000107b1f820(param_4,uVar7,1);
      func_0x000107c61170(uVar7);
    }
    lVar4 = lStack_108;
    uVar12 = *(undefined8 *)(lStack_108 + _DAT_112d698a0);
    func_0x0001000a8868(lStack_108 + _DAT_112d69898,
                        *(undefined8 *)(lStack_108 + _DAT_112d69898 + 0x18));
    uVar6 = param_9;
    func_0x000107c42e80(param_9);
    uVar7 = 0;
    func_0x00010122a704(0);
    (*(code *)(undefined *)0x10122a8f4)(uVar6,uVar7,&PTR_DAT_110395e08);
    puVar8 = &UNK_110395d58;
    func_0x000107c613fc(&UNK_110395d58,0x50,7);
    uVar3 = uStack_f0;
    uVar2 = uStack_100;
    uVar7 = uStack_110;
    *(undefined8 *)(puVar8 + 0x10) = param_11;
    *(long *)(puVar8 + 0x18) = lVar4;
    *(undefined8 *)(puVar8 + 0x20) = uStack_100;
    *(undefined8 *)(puVar8 + 0x28) = uVar12;
    *(undefined8 *)(puVar8 + 0x30) = uVar1;
    *(undefined8 *)(puVar8 + 0x38) = uStack_f0;
    *(undefined8 *)(puVar8 + 0x40) = param_9;
    *(undefined8 *)(puVar8 + 0x48) = uStack_110;
    func_0x000107c61174(uVar12);
    func_0x000107c61434(uVar3);
    func_0x000107c61174(lVar4);
    func_0x000107c61174(uVar2);
    func_0x000107c61174(param_9);
    func_0x000107c61174(uVar7);
    func_0x000107c61174(param_11);
    func_0x00010075a04c(0,1,0x101228f2c,puVar8);
    func_0x000107c61574(uVar6);
    func_0x000107c61574(puVar8);
    func_0x000101229458(&uStack_90,0x112d698d8,&UNK_10d92d168);
  }
  else {
    func_0x000101228f30(auStack_e8,&uStack_c0);
    func_0x000107c5eea0(lVar17);
    uStack_120 = uStack_a8;
    lStack_140 = lStack_a0;
    puVar5 = &uStack_c0;
    func_0x0001000a8868();
    lStack_158 = lVar9;
    puStack_128 = puVar5;
    (**(code **)(lVar13 + 0x10))(lVar9,lVar17,lVar4);
    lVar9 = lStack_108;
    uVar10 = (ulong)*(byte *)(lVar13 + 0x50);
    uStack_150 = param_11;
    uVar11 = uVar10 + 0x28 & (uVar10 ^ 0xffffffffffffffff);
    uVar16 = lVar15 + uVar11 + 7 & 0xfffffffffffffff8;
    lStack_170 = uVar16 + 0x10;
    uStack_168 = param_9;
    lStack_178 = uVar16 + 0x18;
    puVar8 = &UNK_110395d80;
    lStack_180 = param_4;
    uStack_160 = param_3;
    lStack_148 = lVar4;
    lStack_138 = lVar13;
    lStack_130 = lVar17;
    func_0x000107c613fc(&UNK_110395d80,uVar16 + 0x38,uVar10 | 7);
    *(long *)(puVar8 + 0x10) = param_4;
    *(undefined8 *)(puVar8 + 0x18) = uStack_f8;
    *(undefined8 *)(puVar8 + 0x20) = uStack_f0;
    (**(code **)(lVar13 + 0x20))(puVar8 + uVar11,lStack_158,lVar4);
    uVar3 = uStack_100;
    uVar2 = uStack_150;
    uVar7 = uStack_160;
    uVar1 = uStack_168;
    *(undefined8 *)(puVar8 + uVar16) = uStack_118;
    *(undefined8 *)((long)(puVar8 + uVar16) + 8) = uStack_160;
    *(long *)(puVar8 + lStack_170) = lVar9;
    *(undefined8 *)(puVar8 + lStack_178) = uStack_100;
    *(undefined8 *)(puVar8 + uVar16 + 0x20) = uStack_168;
    *(undefined8 *)(puVar8 + uVar16 + 0x28) = uStack_110;
    *(undefined8 *)(puVar8 + uVar16 + 0x30) = uStack_150;
    pcVar14 = *(code **)(lStack_140 + 0x10);
    func_0x000107c61174(uStack_110);
    func_0x000107c61174(uVar2);
    func_0x000107c61174(lStack_180);
    func_0x000107c61434(uStack_f0);
    func_0x000107c61434(uVar7);
    func_0x000107c61174(lVar9);
    func_0x000107c61174(uVar3);
    func_0x000107c61174(uVar1);
    (*pcVar14)();
    func_0x000107c61574(puVar8);
    (**(code **)(lStack_138 + 8))(lStack_130,lStack_148);
    func_0x000101229458(&uStack_90,0x112d698d8,&UNK_10d92d168);
    FUN_1012293f0(&uStack_c0);
  }
  return;
}



/* Entry: 101228174; end: 1012281af;  */

void FUN_101228174(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 1012281b0; end: 101228227; -[_TtC31SDNNotificationProcessingPlugin31SDNNotificationProcessingPlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x0001012281f4) */

void FUN_1012281b0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e125d8;
  func_0x000107c5fb14();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 101228228; end: 101228687;  */

void FUN_101228228(void)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_a8 [32];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x0001000285a8(0x112d37798,&UNK_10d902e10);
  lVar8 = *unaff_x20;
  lVar4 = lVar8;
  func_0x000107c6048c();
  if (*(long *)(lVar8 + 0x10) != 0) {
    lVar1 = lVar8 + 0x40;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar8 || lVar1 + uVar5 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar5 << 3);
    }
    lVar9 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((*(byte *)(lVar8 + 0x20) & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar8 + 0x40);
    if (uVar5 == 0) goto LAB_10122830c;
    do {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      while( true ) {
        uVar7 = LZCOUNT(uVar7) | lVar9 << 6;
        lVar11 = uVar7 * 0x28;
        func_0x0001007bbd18(*(long *)(lVar8 + 0x30) + lVar11,&uStack_88);
        lVar10 = uVar7 * 0x20;
        func_0x0001000bb420(*(long *)(lVar8 + 0x38) + lVar10,auStack_a8);
        puVar2 = (undefined8 *)(*(long *)(lVar4 + 0x30) + lVar11);
        puVar2[4] = uStack_68;
        puVar2[1] = uStack_80;
        *puVar2 = uStack_88;
        puVar2[3] = uStack_70;
        puVar2[2] = uStack_78;
        func_0x000100102924(auStack_a8,*(long *)(lVar4 + 0x38) + lVar10);
        if (uVar5 != 0) break;
LAB_10122830c:
        do {
          lVar10 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1012283cc);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar10) goto LAB_10122839c;
          uVar5 = *(ulong *)(lVar1 + lVar10 * 8);
          lVar9 = lVar9 + 1;
        } while (uVar5 == 0);
        uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar5 = uVar5 - 1 & uVar5;
        lVar9 = lVar10;
      }
    } while( true );
  }
LAB_10122839c:
  func_0x000107c61574(lVar8);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 101228688; end: 101228747;  */

undefined * FUN_101228688(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *unaff_x20;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  puVar2 = (undefined *)0x0;
  if (unaff_x20 == (undefined *)0x0) {
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170();
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    func_0x000107c60e78();
    uVar3 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    uVar4 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    uVar5 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    uVar6 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    puVar1 = PTR___sypN_11034f1a8;
    puVar8 = param_2;
    if (param_2 == (undefined *)0x0) {
      puVar7 = puVar2;
      func_0x000107c5d9a4();
      func_0x000107c61180();
      if (puVar7 == (undefined *)0x0) {
        puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        FUN_100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
      }
      else {
        puVar8 = puVar7;
        func_0x000107c5f9e8();
        func_0x000107c61170(puVar7);
      }
    }
    puVar7 = PTR_PTR_1126b2c50;
    func_0x000107c61168(PTR_PTR_1126b2c50);
    func_0x000107c61434(param_2);
    puVar9 = puVar8;
    func_0x000107c5f9dc(puVar8,PTR___ss11AnyHashableVN_11034e448,puVar1 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c6142c(puVar8);
    func_0x000107c4d84c(puVar2);
    func_0x000107c4525c(puVar7);
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(puVar9);
    return puVar7;
  }
  return unaff_x20;
}



/* Entry: 101228748; end: 101228df3;  */

undefined * FUN_101228748(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  uVar2 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  uVar3 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  uVar4 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  uVar5 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  puVar1 = PTR___sypN_11034f1a8;
  puVar7 = param_2;
  if (param_2 == (undefined *)0x0) {
    puVar6 = param_1;
    func_0x000107c5d9a4();
    func_0x000107c61180();
    if (puVar6 == (undefined *)0x0) {
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
    }
    else {
      puVar7 = puVar6;
      func_0x000107c5f9e8();
      func_0x000107c61170(puVar6);
    }
  }
  puVar6 = PTR_PTR_1126b2c50;
  func_0x000107c61168(PTR_PTR_1126b2c50);
  func_0x000107c61434(param_2);
  puVar8 = puVar7;
  func_0x000107c5f9dc(puVar7,PTR___ss11AnyHashableVN_11034e448,puVar1 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(puVar7);
  func_0x000107c4d84c(param_1);
  func_0x000107c4525c(puVar6);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar8);
  return puVar6;
}



/* Entry: 101228df4; end: 101228e03;  */

void FUN_101228df4(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000101228e00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 101228e04; end: 101228e6f;  */

void FUN_101228e04(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101227528(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 101228e70; end: 101228ee7;  */

void FUN_101228e70(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar3 = uVar3 + 0x40 & (uVar3 ^ 0xffffffffffffffff);
  pcVar1 = *(code **)(unaff_x20 +
                     (*(long *)(*(long *)(lVar2 + -8) + 0x40) + uVar3 + 7 & 0xfffffffffffffff8));
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x000101226f1c(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),param_1,
                        unaff_x20 + uVar3);
  }
  (*pcVar1)(param_1);
  return;
}



/* Entry: 101228ee8; end: 101228f47;  */

void FUN_101228ee8(long param_1,long param_2)

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



/* Entry: 101228f48; end: 101228ff3;  */

void FUN_101228f48(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar3 = uVar2 + 0x28 & (uVar2 ^ 0xffffffffffffffff);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + uVar3 + 7 & 0xfffffffffffffff8;
  func_0x000101227a20(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),unaff_x20 + uVar3,
                      *(undefined8 *)(unaff_x20 + uVar2),((undefined8 *)(unaff_x20 + uVar2))[1],
                      *(undefined8 *)(unaff_x20 + uVar2 + 0x10),
                      *(undefined8 *)(unaff_x20 + uVar2 + 0x18),
                      *(undefined8 *)(unaff_x20 + uVar2 + 0x20),
                      *(undefined8 *)(unaff_x20 + uVar2 + 0x28),
                      *(undefined8 *)(unaff_x20 + (uVar2 + 0x37 & 0xffffffffffffff8)));
  return;
}



/* Entry: 101228ff4; end: 101229077;  */

void FUN_101228ff4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101229078; end: 101229097;  */

/* WARNING: Possible PIC construction at 0x000101227d9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101227ec0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101227ed0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101227ee0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101227ed4) */
/* WARNING: Removing unreachable block (ram,0x000101227ec4) */
/* WARNING: Removing unreachable block (ram,0x000101227da0) */
/* WARNING: Removing unreachable block (ram,0x000101227ee4) */

void FUN_101229078(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined *puStack_68;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    FUN_101228748(lVar5,0,*(undefined8 *)(unaff_x20 + 0x18));
    func_0x000107c4dbec(uVar1);
  }
  else {
    func_0x000107c61434();
    lVar4 = lVar5;
    func_0x000107c5d9a4();
    func_0x000107c61180();
    if (lVar4 == 0) {
      puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_100dfa3f0();
      puVar3 = puVar2;
      func_0x000107c61558(puVar2);
      puStack_68 = puVar2;
      FUN_101229098(param_1,0x1012281f8,0,puVar3,&puStack_68);
      func_0x000107c6142c(param_1);
      puVar2 = puStack_68;
      puVar3 = PTR_PTR_1126b2c50;
      func_0x000107c61168(PTR_PTR_1126b2c50);
      lVar4 = 0;
      func_0x000107c5fadc(0,0xe000000000000000);
      func_0x000107c5fadc(0,0xe000000000000000);
      func_0x000107c5fadc(0,0xe000000000000000);
      func_0x000107c5fadc(0,0xe000000000000000);
      func_0x000107c61434(puVar2);
      func_0x000107c5f9dc();
      func_0x000107c61574(puVar2);
      func_0x000107c4d84c(lVar5);
      func_0x000107c4525c(puVar3);
      func_0x000107c61180();
      lVar5 = lVar4;
    }
    else {
      func_0x000107c5f9e8();
      lVar5 = lVar4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 101229098; end: 1012293ef;  */

void FUN_101229098(long param_1,code *param_2,undefined8 param_3,uint param_4,long *param_5)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar6 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar10 = ~(-1L << (uVar6 & 0x3f));
  }
  uVar10 = uVar10 & *(ulong *)(param_1 + 0x40);
  uVar6 = uVar6 + 0x3f >> 6;
  func_0x000107c61434();
  func_0x000107c6157c(param_3);
  lVar4 = 0;
  do {
    if (uVar10 == 0) {
      uVar10 = uVar6;
      if ((long)uVar6 <= lVar4 + 1) {
        uVar10 = lVar4 + 1;
      }
      lVar3 = uVar10 - 1;
      lVar9 = lVar4;
      do {
        lVar4 = lVar9 + 1;
        if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1012293d8);
          (*pcVar1)();
        }
        if ((long)uVar6 <= lVar4) {
          uVar10 = 0;
          uStack_c0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          uStack_c8 = 0;
          uStack_d0 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          lStack_e8 = 0;
          uStack_f0 = 0;
          goto LAB_1012291d4;
        }
        uVar10 = ((ulong *)(param_1 + 0x40))[lVar4];
        lVar9 = lVar9 + 1;
      } while (uVar10 == 0);
    }
    uVar8 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
    uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
    uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    uVar10 = uVar10 - 1 & uVar10;
    uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar4 << 6;
    func_0x0001007bbd18(*(long *)(param_1 + 0x30) + uVar8 * 0x28,&uStack_100);
    func_0x0001000bb420(*(long *)(param_1 + 0x38) + uVar8 * 0x20,&uStack_d8);
    lVar3 = lVar4;
LAB_1012291d4:
    FUN_101229410(&uStack_100,&uStack_148,0x112d55e70,&UNK_10d92d170);
    if (lStack_130 == 0) {
      func_0x000101229458(&uStack_100,0x112d55e70,&UNK_10d92d170);
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_70 = 0;
LAB_1012293a0:
      func_0x000107c61574(param_3);
      func_0x000107c61574(param_1);
      return;
    }
    uStack_168 = uStack_120;
    uStack_170 = uStack_128;
    uStack_158 = uStack_110;
    uStack_160 = uStack_118;
    uStack_150 = uStack_108;
    uStack_188 = uStack_140;
    uStack_190 = uStack_148;
    lStack_178 = lStack_130;
    uStack_180 = uStack_138;
    (*param_2)(&uStack_b0,&uStack_190);
    func_0x000101229458(&uStack_190,0x112d69838,&UNK_10d92d0b0);
    func_0x000101229458(&uStack_100,0x112d55e70,&UNK_10d92d170);
    if (lStack_98 == 0) goto LAB_1012293a0;
    uStack_f8 = uStack_a8;
    uStack_100 = uStack_b0;
    lStack_e8 = lStack_98;
    uStack_f0 = uStack_a0;
    uStack_e0 = uStack_90;
    uVar8 = 0;
    func_0x000100102924(&uStack_88);
    lVar9 = *param_5;
    puVar2 = &uStack_100;
    FUN_100df95d0();
    lVar4 = *(long *)(lVar9 + 0x10);
    uVar7 = (ulong)~(uint)uVar8 & 1;
    if (SCARRY8(lVar4,uVar7)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1012293dc);
      (*pcVar1)();
    }
    if (*(long *)(lVar9 + 0x18) < (long)(lVar4 + uVar7)) {
      param_4 = param_4 & 1;
      func_0x0001012283cc();
      puVar2 = &uStack_100;
      FUN_100df95d0();
      if (((uint)uVar8 & 1) != (param_4 & 1)) {
        func_0x000107c60624(PTR___ss11AnyHashableVN_11034e448);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1012293f0);
        (*pcVar1)();
      }
    }
    else if ((param_4 & 1) == 0) {
      func_0x000101228228();
    }
    lVar4 = *param_5;
    if ((uVar8 & 1) == 0) {
      lVar9 = lVar4 + ((ulong)puVar2 >> 6) * 8;
      *(ulong *)(lVar9 + 0x40) = *(ulong *)(lVar9 + 0x40) | 1L << ((ulong)puVar2 & 0x3f);
      puVar5 = (undefined8 *)(*(long *)(lVar4 + 0x30) + (long)puVar2 * 0x28);
      puVar5[4] = uStack_e0;
      puVar5[1] = uStack_f8;
      *puVar5 = uStack_100;
      puVar5[3] = lStack_e8;
      puVar5[2] = uStack_f0;
      func_0x000100102924(&uStack_148,*(long *)(lVar4 + 0x38) + (long)puVar2 * 0x20);
      if (SCARRY8(*(long *)(lVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1012293e0);
        (*pcVar1)();
      }
      *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    }
    else {
      func_0x0001007bbff0(&uStack_100);
      lVar4 = *(long *)(lVar4 + 0x38) + (long)puVar2 * 0x20;
      FUN_1012293f0(lVar4);
      func_0x000100102924(&uStack_148,lVar4);
    }
    param_4 = 1;
    lVar4 = lVar3;
  } while( true );
}



/* Entry: 1012293f0; end: 10122940f;  */

void FUN_1012293f0(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000101229404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 101229410; end: 101229497;  */

undefined8 FUN_101229410(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 101229498; end: 10122949b;  */

void FUN_101229498(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000101227bac(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 10122949c; end: 1012295a3;  */

undefined8
FUN_10122949c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x00010122a704(0);
  func_0x000107c613fc();
  uVar1 = param_2;
  FUN_10122b330(param_2,param_3,param_4);
  puVar2 = PTR_PTR_1126a6708;
  func_0x000107c610f8(PTR_PTR_1126a6708);
  func_0x000107c6157c(uVar1);
  func_0x000107c453e4(puVar2);
  uVar3 = uVar1;
  FUN_1012295c0(uVar1,puVar2);
  uVar4 = param_1;
  func_0x000107c4e9e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  return unaff_x20;
}



/* Entry: 1012295a4; end: 1012295bf;  */

void FUN_1012295a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1012295c0; end: 1012296d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1012295c0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long extraout_x12;
  undefined8 *puVar5;
  long alStack_a0 [5];
  long lStack_78;
  undefined **ppuStack_70;
  undefined8 auStack_68 [3];
  long lStack_50;
  undefined **ppuStack_48;
  
  lVar1 = 0;
  func_0x00010122a704();
  ppuStack_48 = &PTR_DAT_110395e08;
  lVar2 = 0;
  auStack_68[0] = param_1;
  lStack_50 = lVar1;
  FUN_1012271c4();
  lVar3 = lVar2;
  func_0x000107c610f8();
  func_0x0001000c6518(auStack_68,lVar1);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar5 = (undefined8 *)((long)alStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar5);
  alStack_a0[2] = *puVar5;
  ppuStack_70 = &PTR_DAT_110395e08;
  lStack_78 = lVar1;
  FUN_1012296f4(alStack_a0 + 2,lVar3 + _DAT_112d69898);
  *(undefined8 *)(lVar3 + _DAT_112d698a0) = param_2;
  plVar4 = alStack_a0;
  alStack_a0[0] = lVar3;
  alStack_a0[1] = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x0001000834e4(alStack_a0 + 2);
  func_0x0001000834e4(auStack_68);
  return plVar4;
}



/* Entry: 1012296d4; end: 1012296f3;  */

void FUN_1012296d4(void)

{
  func_0x000107c61168(&PTR_PTR_112d69920);
  return;
}



/* Entry: 1012296f4; end: 101229737;  */

long FUN_1012296f4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101229738; end: 10122974b;  */

void FUN_101229738(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10122c430();
  func_0x000107c610f8();
  func_0x000107c61174();
  (*(code *)0x10122c374)();
  param_1[3] = uVar1;
  *param_1 = param_2;
  return;
}



/* Entry: 10122974c; end: 10122998b;  */

void FUN_10122974c(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong *puVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    puVar11 = (ulong *)(param_1 + 0x38);
    uVar15 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
    uVar10 = 0xffffffffffffffff;
    if (-uVar15 < 0x40) {
      uVar10 = ~(-1L << (-uVar15 & 0x3f));
    }
    uVar10 = uVar10 & *puVar11;
    func_0x000107c61434(param_1);
    lVar12 = 0;
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar13 = lVar12;
    while( true ) {
      while (uVar10 != 0) {
        uVar1 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
        uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 - 1 & uVar10;
        func_0x0001007bbd18(*(long *)(param_1 + 0x30) +
                            LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 0x28 + lVar12 * 0xa00,
                            &uStack_a0);
        uStack_c8 = uStack_98;
        uStack_d0 = uStack_a0;
        uStack_b8 = uStack_88;
        uStack_c0 = uStack_90;
        uStack_b0 = uStack_80;
        uVar9 = 0x112d69a78;
        func_0x0001000285a8(0x112d69a78,&UNK_10d92d278);
        plVar5 = &lStack_a8;
        func_0x000107c6147c(plVar5,&uStack_d0,PTR___ss11AnyHashableVN_11034e448,uVar9,6);
        lVar2 = lStack_a8;
        lVar13 = lVar12;
        if ((((ulong)plVar5 & 1) != 0) && (lStack_a8 != 0)) {
          puVar7 = puVar14;
          func_0x000107c61550();
          if (((int)puVar7 == 0) ||
             (((long)puVar14 < 0 || (puVar7 = puVar14, ((ulong)puVar14 >> 0x3e & 1) != 0)))) {
            if ((ulong)puVar14 >> 0x3e == 0) {
              puVar6 = *(undefined **)(((ulong)puVar14 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar6 = (undefined *)((ulong)puVar14 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar14) {
                puVar6 = puVar14;
              }
              func_0x000107c60480(puVar6);
            }
            puVar7 = (undefined *)0x0;
            FUN_10122aba0(0,puVar6 + 1,1,puVar14);
          }
          uVar8 = (ulong)puVar7 & 0xffffffffffffff8;
          uVar1 = *(ulong *)(uVar8 + 0x10);
          if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar1) {
            puVar7 = (undefined *)(ulong)(1 < *(ulong *)(uVar8 + 0x18));
            FUN_10122aba0(puVar7,uVar1 + 1,1);
            uVar8 = (ulong)puVar7 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar8 + 0x10) = uVar1 + 1;
          *(long *)(uVar8 + uVar1 * 8 + 0x20) = lVar2;
          puVar14 = puVar7;
        }
      }
      bVar4 = SCARRY8(lVar12,1);
      lVar12 = lVar12 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10122998c);
        (*pcVar3)();
      }
      if ((long)(0x3f - uVar15 >> 6) <= lVar12) break;
      uVar10 = puVar11[lVar12];
    }
    func_0x000100ba5608(param_1,puVar11,~uVar15,lVar13,0);
    uVar9 = *(undefined8 *)(param_2 + 0x10);
    *(undefined **)(param_2 + 0x10) = puVar14;
    func_0x000107c61574(param_2);
    func_0x000107c6142c(uVar9);
  }
  func_0x000100b60084();
  return;
}



/* Entry: 10122998c; end: 10122999f;  */

void FUN_10122998c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10122c558();
  func_0x000107c610f8();
  func_0x000107c61174();
  (*(code *)0x10122c49c)();
  param_1[3] = uVar1;
  *param_1 = param_2;
  return;
}



/* Entry: 1012299a0; end: 101229a23;  */

void FUN_1012299a0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  puVar3 = auStack_50;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)(auStack_50);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  func_0x00010122b764(auStack_50,uStack_38);
  func_0x000107c605b0();
  func_0x00010122b788(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 101229a24; end: 101229c6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101229a24(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong *puVar12;
  long lVar13;
  ulong uVar14;
  undefined1 auStack_f8 [40];
  undefined1 auStack_d0 [40];
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [32];
  
  func_0x000107c61428(param_2 + 0x10,auStack_80,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    puVar12 = (ulong *)(param_1 + 0x38);
    uVar11 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
    uVar14 = 0xffffffffffffffff;
    if (-uVar11 < 0x40) {
      uVar14 = ~(-1L << (-uVar11 & 0x3f));
    }
    uVar14 = uVar14 & *puVar12;
    func_0x000107c61434(param_1);
    lVar13 = 0;
    lVar2 = lVar13;
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    while( true ) {
      while (uVar14 != 0) {
        uVar1 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
        uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
        uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        uVar14 = uVar14 - 1 & uVar14;
        lVar5 = *(long *)(param_1 + 0x30) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 0x28 +
                lVar13 * 0xa00;
        func_0x0001007bbd18(lVar5,auStack_a8);
        func_0x000107c602bc();
        func_0x0001007bbff0(auStack_a8);
        uVar6 = 0;
        FUN_10122c6c8(0);
        lVar7 = lVar5;
        func_0x000107c61480(lVar5,uVar6);
        lVar2 = lVar13;
        if (lVar7 == 0) {
          func_0x000107c61170(lVar5);
        }
        else {
          func_0x00010122b2e0(lVar7 + _DAT_112d69ba0,auStack_f8);
          func_0x000107c61170(lVar5);
          func_0x000101228f30(auStack_f8,auStack_d0);
          puVar8 = puVar10;
          func_0x000107c61558();
          puVar9 = puVar10;
          if (((ulong)puVar8 & 1) == 0) {
            puVar9 = (undefined *)0x0;
            FUN_10122b000(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10,
                          PTR__swift_bridgeObjectRelease_11034f258);
          }
          uVar1 = *(ulong *)(puVar9 + 0x10);
          puVar10 = puVar9;
          if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
            puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
            FUN_10122b000(puVar10,uVar1 + 1,1,puVar9,PTR__swift_bridgeObjectRelease_11034f258);
          }
          *(ulong *)(puVar10 + 0x10) = uVar1 + 1;
          func_0x000101228f30(auStack_d0,puVar10 + uVar1 * 0x28 + 0x20);
        }
      }
      bVar4 = SCARRY8(lVar13,1);
      lVar13 = lVar13 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101229c70);
        (*pcVar3)();
      }
      if ((long)(0x3f - uVar11 >> 6) <= lVar13) break;
      uVar14 = puVar12[lVar13];
    }
    func_0x000100ba5608(param_1,puVar12,~uVar11,lVar2,0);
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    *(undefined **)(param_2 + 0x20) = puVar10;
    func_0x000107c61574(param_2);
    func_0x000107c6142c(uVar6);
  }
  func_0x000100b60084();
  return;
}



/* Entry: 101229c70; end: 101229c83;  */

void FUN_101229c70(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10122c1c0();
  func_0x000107c610f8();
  func_0x000107c61174();
  (*(code *)0x10122c104)();
  param_1[3] = uVar1;
  *param_1 = param_2;
  return;
}



/* Entry: 101229c84; end: 101229ce3;  */

void FUN_101229c84(undefined8 *param_1,undefined8 param_2,code *param_3,code *param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  (*param_3)();
  func_0x000107c610f8();
  func_0x000107c61174();
  (*param_4)();
  param_1[3] = uVar1;
  *param_1 = param_2;
  return;
}



/* Entry: 101229ce4; end: 10122a6b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101229ce4(long param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  ulong *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined *puStack_a8;
  undefined1 auStack_a0 [40];
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    puVar8 = (ulong *)(param_1 + 0x38);
    uVar12 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
    uVar11 = 0xffffffffffffffff;
    if (-uVar12 < 0x40) {
      uVar11 = ~(-1L << (-uVar12 & 0x3f));
    }
    uVar11 = uVar11 & *puVar8;
    func_0x000107c61434(param_1);
    lVar9 = 0;
    puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar10 = lVar9;
    while( true ) {
      while (uVar11 != 0) {
        uVar1 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
        uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        uVar11 = uVar11 - 1 & uVar11;
        lVar4 = *(long *)(param_1 + 0x30) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 0x28 +
                lVar9 * 0xa00;
        func_0x0001007bbd18(lVar4,auStack_a0);
        func_0x000107c602bc();
        func_0x0001007bbff0(auStack_a0);
        uVar5 = 0;
        FUN_10122c308(0);
        lVar6 = lVar4;
        func_0x000107c61480(lVar4,uVar5);
        lVar10 = lVar9;
        if (lVar6 == 0) {
          func_0x000107c61170(lVar4);
        }
        else {
          uVar13 = ((undefined8 *)(lVar6 + _DAT_112d69b10))[1];
          uVar5 = *(undefined8 *)(lVar6 + _DAT_112d69b10);
          func_0x000107c615f0(uVar5);
          func_0x000107c61170(lVar4);
          puVar7 = puStack_a8;
          func_0x000107c61558();
          if (((ulong)puVar7 & 1) == 0) {
            puVar7 = (undefined *)0x0;
            func_0x00010122b150(0,*(long *)(puStack_a8 + 0x10) + 1,1,puStack_a8,
                                PTR__swift_bridgeObjectRelease_11034f258);
            puStack_a8 = puVar7;
          }
          uVar1 = *(ulong *)(puStack_a8 + 0x10);
          if (*(ulong *)(puStack_a8 + 0x18) >> 1 <= uVar1) {
            puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puStack_a8 + 0x18));
            func_0x00010122b150(puVar7,uVar1 + 1,1,puStack_a8,
                                PTR__swift_bridgeObjectRelease_11034f258);
            puStack_a8 = puVar7;
          }
          *(ulong *)(puStack_a8 + 0x10) = uVar1 + 1;
          *(undefined8 *)(puStack_a8 + uVar1 * 0x10 + 0x28) = uVar13;
          *(undefined8 *)(puStack_a8 + uVar1 * 0x10 + 0x20) = uVar5;
        }
      }
      bVar3 = SCARRY8(lVar9,1);
      lVar9 = lVar9 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101229f28);
        (*pcVar2)();
      }
      if ((long)(0x3f - uVar12 >> 6) <= lVar9) break;
      uVar11 = puVar8[lVar9];
    }
    func_0x000100ba5608(param_1,puVar8,~uVar12,lVar10,0);
    uVar5 = *(undefined8 *)(param_2 + 0x30);
    *(undefined **)(param_2 + 0x30) = puStack_a8;
    func_0x000107c61574(param_2);
    func_0x000107c6142c(uVar5);
  }
  func_0x000100b60084();
  return;
}



/* Entry: 10122a6b8; end: 10122a723;  */

void FUN_10122a6b8(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10122a724; end: 10122a9db;  */

undefined8 FUN_10122a724(undefined4 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  
  uVar4 = *unaff_x20;
  func_0x0001000285a8(0x112d69a70,&UNK_10d92d270);
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x00010095c380();
  puVar2 = &UNK_110395e38;
  func_0x000107c613fc(&UNK_110395e38,0x18,7);
  func_0x000107c61644(puVar2 + 0x10,uVar4);
  puVar3 = &UNK_110395eb0;
  func_0x000107c613fc(&UNK_110395eb0,0x24,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(long *)(puVar3 + 0x18) = lVar1;
  *(undefined4 *)(puVar3 + 0x20) = param_1;
  func_0x000107c6157c(lVar1);
  func_0x00010075a04c(0,1,FUN_10122b324,puVar3);
  func_0x000107c61574(puVar3);
  uVar4 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(lVar1);
  return uVar4;
}



/* Entry: 10122a9dc; end: 10122a9fb;  */

void FUN_10122a9dc(void)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x20;
  code *pcVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_88;
  undefined1 auStack_80 [32];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(uint *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar3 + 0x10,auStack_80,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 == 0) {
    uStack_d0 = 0;
    uStack_c8 = 0;
    func_0x000100b60084(&uStack_d0);
  }
  else {
    lVar11 = *(long *)(lVar3 + 0x30);
    if (lVar11 == 0) {
      uVar10 = 0;
      uStack_c8 = 0;
    }
    else {
      uVar13 = *(ulong *)(lVar11 + 0x10);
      func_0x000107c61434(lVar11);
      puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (uVar13 != 0) {
        uVar8 = 0;
LAB_10122a4b8:
        do {
          if (*(ulong *)(lVar11 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x10122a6b8);
            (*pcVar9)();
          }
          plVar2 = (long *)(lVar11 + 0x20 + uVar8 * 0x10);
          lVar15 = plVar2[1];
          lVar14 = *plVar2;
          uVar8 = uVar8 + 1;
          lVar4 = lVar14;
          func_0x000107c614f0();
          pcVar9 = *(code **)(lVar15 + 8);
          func_0x000107c615f0(lVar14,lVar14);
          (*pcVar9)(lVar4,lVar15);
          if (*(long *)(lVar4 + 0x10) != 0) {
            func_0x000107c6068c(&uStack_d0,*(undefined8 *)(lVar4 + 0x28));
            uVar6 = (ulong)uVar1;
            func_0x000107c6069c();
            func_0x000107c606a8();
            uVar7 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
            uVar6 = uVar6 & (uVar7 ^ 0xffffffffffffffff);
            if ((*(ulong *)(lVar4 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0) {
              do {
                if (*(uint *)(*(long *)(lVar4 + 0x30) + uVar6 * 4) == uVar1) {
                  func_0x000107c6142c();
                  puVar5 = puVar12;
                  func_0x000107c61558();
                  puStack_88 = puVar12;
                  if (((ulong)puVar5 & 1) == 0) {
                    func_0x00010122aeac(0,*(long *)(puVar12 + 0x10) + 1,1);
                  }
                  uVar6 = *(ulong *)(puStack_88 + 0x10);
                  if (*(ulong *)(puStack_88 + 0x18) >> 1 <= uVar6) {
                    func_0x00010122aeac(1 < *(ulong *)(puStack_88 + 0x18),uVar6 + 1,1);
                  }
                  *(ulong *)(puStack_88 + 0x10) = uVar6 + 1;
                  *(long *)(puStack_88 + uVar6 * 0x10 + 0x28) = lVar15;
                  *(long *)(puStack_88 + uVar6 * 0x10 + 0x20) = lVar14;
                  puVar12 = puStack_88;
                  if (uVar8 == uVar13) goto LAB_10122a638;
                  goto LAB_10122a4b8;
                }
                uVar6 = uVar6 + 1 & ~uVar7;
              } while ((*(ulong *)(lVar4 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0);
            }
          }
          func_0x000107c6142c();
          func_0x000107c615e8(lVar14);
        } while (uVar8 != uVar13);
      }
LAB_10122a638:
      func_0x000107c6142c(lVar11);
      if (*(long *)(puVar12 + 0x10) == 0) {
        func_0x000107c61574(puVar12);
        uVar10 = 0;
        uStack_c8 = 0;
      }
      else {
        uVar10 = *(undefined8 *)(puVar12 + 0x20);
        uStack_c8 = *(undefined8 *)(puVar12 + 0x28);
        func_0x000107c615f0(uVar10);
        func_0x000107c61574(puVar12);
      }
    }
    uStack_d0 = uVar10;
    func_0x000100b60084(&uStack_d0);
    func_0x000107c61574(lVar3);
    func_0x000107c615e8(uVar10);
  }
  return;
}



/* Entry: 10122a9fc; end: 10122ab9f;  */

ulong FUN_10122a9fc(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10122aad4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10122aad8);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61494();
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
    uVar3 = param_1;
    func_0x000107c61494();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000012,0x800000010ef2f570);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10122aba0);
  (*pcVar2)();
}



/* Entry: 10122aba0; end: 10122acc7;  */

ulong FUN_10122aba0(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10122acc8);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_10122acc8(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10122acc4);
      (*pcVar1)();
    }
    FUN_10122ad48(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 10122acc8; end: 10122ad47;  */

undefined * FUN_10122acc8(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    func_0x00010122a9e8();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 10122ad48; end: 10122ae6b;  */

long FUN_10122ad48(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10122ae68);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10122ae6c);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112d69a78;
        func_0x0001000285a8(0x112d69a78,&UNK_10d92d278);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112d69a78;
      func_0x0001000285a8(0x112d69a78,&UNK_10d92d278);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10122ae64);
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



/* Entry: 10122ae6c; end: 10122aecf;  */

void FUN_10122ae6c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10122aed0();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 10122aed0; end: 10122afff;  */

undefined * FUN_10122aed0(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10122b000);
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
    puVar3 = param_1;
    func_0x00010122a9e8();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0x112d69a78;
    func_0x0001000285a8(0x112d69a78,&UNK_10d92d278);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 10122b000; end: 10122b28b;  */

undefined *
FUN_10122b000(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10122b150);
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
    puVar3 = (undefined *)0x112d69a60;
    func_0x0001000285a8(0x112d69a60,&UNK_10d92d260);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112d69a68;
    func_0x0001000285a8(0x112d69a68,&UNK_10d92d268);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x28 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 10122b28c; end: 10122b297;  */

void FUN_10122b28c(void)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x20;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_b0 [24];
  long lStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [32];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(uint *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar4 + 0x10,auStack_80,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 == 0) {
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    func_0x000100b60084(&uStack_100);
    goto LAB_10122a3f4;
  }
  lVar9 = *(long *)(lVar4 + 0x20);
  if (lVar9 == 0) {
LAB_10122a3d4:
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
  }
  else {
    uVar11 = *(ulong *)(lVar9 + 0x10);
    func_0x000107c61434(lVar9);
    if (uVar11 == 0) {
      func_0x000107c6142c(lVar9);
      lVar9 = *(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar12 = 0;
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      do {
        if (*(ulong *)(lVar9 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10122a420);
          (*pcVar3)();
        }
        func_0x00010122b2e0(lVar9 + 0x20 + uVar12 * 0x28,auStack_b0);
        lVar2 = lStack_90;
        lVar5 = lStack_98;
        func_0x00010122b764(auStack_b0,lStack_98);
        (**(code **)(lVar2 + 8))(lVar5,lVar2);
        if (*(long *)(lVar5 + 0x10) != 0) {
          func_0x000107c6068c(&uStack_100,*(undefined8 *)(lVar5 + 0x28));
          uVar7 = (ulong)uVar1;
          func_0x000107c6069c();
          func_0x000107c606a8();
          uVar8 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
          uVar7 = uVar7 & (uVar8 ^ 0xffffffffffffffff);
          if ((*(ulong *)(lVar5 + 0x38 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) != 0) {
            do {
              if (*(uint *)(*(long *)(lVar5 + 0x30) + uVar7 * 4) == uVar1) {
                func_0x000107c6142c();
                puVar6 = puVar10;
                func_0x000107c61558();
                puStack_88 = puVar10;
                if (((ulong)puVar6 & 1) == 0) {
                  func_0x00010122ae88(0,*(long *)(puVar10 + 0x10) + 1,1);
                }
                uVar7 = *(ulong *)(puStack_88 + 0x10);
                if (*(ulong *)(puStack_88 + 0x18) >> 1 <= uVar7) {
                  func_0x00010122ae88(1 < *(ulong *)(puStack_88 + 0x18),uVar7 + 1,1);
                }
                puVar10 = puStack_88;
                *(ulong *)(puStack_88 + 0x10) = uVar7 + 1;
                func_0x000101228f30(auStack_b0,puStack_88 + uVar7 * 0x28 + 0x20);
                goto LAB_10122a21c;
              }
              uVar7 = uVar7 + 1 & ~uVar8;
            } while ((*(ulong *)(lVar5 + 0x38 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) != 0);
          }
        }
        func_0x000107c6142c();
        func_0x00010122b788(auStack_b0);
LAB_10122a21c:
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar11);
      func_0x000107c6142c(lVar9);
      if (puVar10 == (undefined *)0x0) goto LAB_10122a3d4;
      lVar9 = *(long *)(puVar10 + 0x10);
    }
    if (lVar9 == 0) {
      func_0x000107c6142c(puVar10);
      goto LAB_10122a3d4;
    }
    func_0x00010122b2e0(puVar10 + 0x20,&uStack_100);
    func_0x000107c6142c(puVar10);
  }
  func_0x000100b60084(&uStack_100);
  func_0x000107c61574(lVar4);
LAB_10122a3f4:
  func_0x00010122b298(&uStack_100);
  return;
}



/* Entry: 10122b298; end: 10122b323;  */

undefined8 FUN_10122b298(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112d698d8;
  func_0x0001000285a8(0x112d698d8,&UNK_10d92d168);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10122b324; end: 10122b32f;  */

void FUN_10122b324(void)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  long unaff_x20;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  iVar1 = *(int *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar3 + 0x10,auStack_78,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 == 0) {
    puStack_80 = (undefined *)0x0;
    func_0x000100b60084(&puStack_80);
    return;
  }
  uVar8 = *(ulong *)(lVar3 + 0x10);
  if (uVar8 != 0) {
    uVar12 = uVar8 & 0xffffffffffffff8;
    if (uVar8 >> 0x3e == 0) {
      uVar9 = *(ulong *)(uVar12 + 0x10);
    }
    else {
      uVar9 = uVar8;
      if (-1 < (long)uVar8) {
        uVar9 = uVar12;
      }
      func_0x000107c60480();
    }
    func_0x000107c61434(uVar8);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar9 != 0) {
      uVar11 = 0;
      do {
        while( true ) {
          if ((uVar8 & 0xc000000000000001) == 0) {
            if (*(ulong *)(uVar12 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10122a104);
              (*pcVar2)();
            }
            uVar10 = *(ulong *)(uVar8 + uVar11 * 8 + 0x20);
            func_0x000107c615f0(uVar10);
          }
          else {
            uVar10 = uVar11;
            FUN_10122a9fc(uVar11,uVar8);
          }
          if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10122a100);
            (*pcVar2)();
          }
          uVar6 = uVar11 + 1;
          uVar4 = uVar10;
          func_0x000107c4ce4c();
          if ((int)uVar4 != iVar1) break;
          puVar5 = puVar7;
          func_0x000107c61558();
          puStack_80 = puVar7;
          if (((ulong)puVar5 & 1) == 0) {
            FUN_10122ae6c(0,*(long *)(puVar7 + 0x10) + 1,1);
          }
          uVar11 = *(ulong *)(puStack_80 + 0x10);
          if (*(ulong *)(puStack_80 + 0x18) >> 1 <= uVar11) {
            FUN_10122ae6c(1 < *(ulong *)(puStack_80 + 0x18),uVar11 + 1,1);
          }
          *(ulong *)(puStack_80 + 0x10) = uVar11 + 1;
          *(ulong *)(puStack_80 + uVar11 * 8 + 0x20) = uVar10;
          puVar7 = puStack_80;
          uVar11 = uVar6;
          if (uVar6 == uVar9) goto LAB_10122a0b8;
        }
        func_0x000107c615e8(uVar10);
        uVar11 = uVar11 + 1;
      } while (uVar6 != uVar9);
    }
LAB_10122a0b8:
    func_0x000107c6142c(uVar8);
    if (((long)puVar7 < 0) || (((ulong)puVar7 >> 0x3e & 1) != 0)) {
      puVar5 = puVar7;
      func_0x000107c60480();
    }
    else {
      puVar5 = *(undefined **)(puVar7 + 0x10);
    }
    if (puVar5 != (undefined *)0x0) {
      if (((ulong)puVar7 & 0xc000000000000001) == 0) {
        if (*(long *)(puVar7 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10122a18c);
          (*pcVar2)();
        }
        puVar5 = *(undefined **)(puVar7 + 0x20);
        func_0x000107c615f0(puVar5);
      }
      else {
        puVar5 = (undefined *)0x0;
        FUN_10122a9fc(0,puVar7);
      }
      func_0x000107c61574(puVar7);
      goto LAB_10122a134;
    }
    func_0x000107c61574(puVar7);
  }
  puVar5 = (undefined *)0x0;
LAB_10122a134:
  puStack_80 = puVar5;
  func_0x000100b60084(&puStack_80);
  func_0x000107c61574(lVar3);
  func_0x000107c615e8(puVar5);
  return;
}


