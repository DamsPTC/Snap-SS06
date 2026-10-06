/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102e9a2bc; end: 102e9a31f;  */

undefined8 FUN_102e9a2bc(void)

{
  FUN_102e9a21c();
  return 0;
}



/* Entry: 102e9a320; end: 102e9a323;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e9a320(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112fcab38);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 102e9a324; end: 102e9a343;  */

void FUN_102e9a324(void)

{
  func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 102e9a344; end: 102e9a353;  */

void FUN_102e9a344(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e9a354; end: 102e9a383;  */

void FUN_102e9a354(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x00010033c910();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = uVar1;
  return;
}



/* Entry: 102e9a384; end: 102e9a3c3;  */

void FUN_102e9a384(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 102e9a3c4; end: 102e9a3df;  */

void FUN_102e9a3c4(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102e9a3e0; end: 102e9a44f;  */

void FUN_102e9a3e0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c615e8(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e9a450; end: 102e9a4c3;  */

void FUN_102e9a450(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = &UNK_1105e22c0;
  uStack_38 = param_1;
  func_0x000107c613fc(&UNK_1105e22c0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  pcStack_48 = FUN_102e9a4c4;
  puStack_40 = puVar1;
  func_0x000107c6157c(param_3);
  FUN_102e9c350(&uStack_38,&pcStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102e9a4c4; end: 102e9a4cb;  */

void FUN_102e9a4c4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102e9a4cc; end: 102e9a77f;  */

/* WARNING: Possible PIC construction at 0x000102e9a720: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e9a724) */

undefined * FUN_102e9a4cc(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x12;
  undefined8 unaff_x20;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  code *pcVar10;
  ulong uVar11;
  long alStack_90 [4];
  undefined1 auStack_70 [16];
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar2 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar7 = puVar2 + -extraout_x12;
  uVar4 = unaff_x20;
  func_0x000107c5c7fc();
  func_0x000107c61180();
  func_0x000107c5edb4(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c5eda4(puVar7);
  pcVar10 = *(code **)(lVar9 + 8);
  (*pcVar10)(puVar2,lVar1);
  func_0x000107c5ed74();
  puVar3 = puVar7;
  (*pcVar10)(puVar7,lVar1);
  func_0x000107c5eda4(puVar7);
  func_0x000107c5ed74();
  (*pcVar10)(puVar7,lVar1);
  uVar8 = *(ulong *)(puVar2 + 0x10);
  puVar6 = puVar3;
  if (uVar8 < *(ulong *)(puVar3 + 0x10)) {
    uVar4 = 0;
    func_0x000107c605fc(0);
    puVar5 = puVar3;
    func_0x000107c615f4(puVar3,2);
    func_0x000107c61480();
    if (puVar5 == (undefined *)0x0) {
      func_0x000107c615e8(puVar3);
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    uVar11 = *(ulong *)(puVar5 + 0x10);
    func_0x000107c61574();
    if (uVar11 == uVar8) {
      func_0x000107c61480(puVar3,uVar4);
      func_0x000107c615e8(puVar3);
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar6 == (undefined *)0x0) goto LAB_102e9a644;
    }
    else {
      func_0x000107c615e8(puVar3);
      puVar5 = puVar3;
      func_0x000101994330(puVar3,puVar3 + 0x20,0,uVar8 << 1 | 1);
LAB_102e9a644:
      func_0x000107c615e8(puVar3);
      puVar6 = puVar5;
    }
    puVar3 = puVar6;
    func_0x00010142cfc4(puVar6,puVar2);
    func_0x000107c6142c(puVar2);
    func_0x000107c61574();
    if (((ulong)puVar3 & 1) != 0) {
      func_0x000107c5ed90();
      puStack_60 = (undefined *)0x0;
      func_0x000107c4ff50();
      func_0x000107c61170(puVar6);
      if (((int)unaff_x20 == 0) ||
         (puVar3 = puVar6, *(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_retain_11034d2d8)(puStack_60);
        return puStack_60;
      }
      goto LAB_102e9a77c;
    }
  }
  else {
    func_0x000107c6142c(puVar2);
    func_0x000107c6142c(puVar3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar6;
  }
LAB_102e9a77c:
  func_0x000107c60e78();
  *(undefined **)(puVar7 + -0x20) = puVar3;
  *(undefined8 *)(puVar7 + -0x18) = unaff_x20;
  *(undefined1 **)(puVar7 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(puVar7 + -8) = FUN_102e9a780;
  func_0x000107c613fc(puVar3,0x30,7);
  uVar4 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(puVar3 + 0x10) = uVar4;
  *(undefined8 *)(puVar3 + 0x20) = 0;
  func_0x000107c61614(puVar3 + 0x18,0);
  puVar6 = &UNK_10db60420;
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(undefined **)(puVar3 + 0x28) = puVar6;
  return puVar3;
}



/* Entry: 102e9a780; end: 102e9a7f7;  */

long FUN_102e9a780(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  func_0x000107c61614(unaff_x20 + 0x18,0);
  puVar2 = &UNK_10db60420;
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + 0x28) = puVar2;
  return unaff_x20;
}



/* Entry: 102e9a7f8; end: 102e9a81f;  */

void FUN_102e9a7f8(void)

{
  FUN_102e9aba4();
  return;
}



/* Entry: 102e9a820; end: 102e9a87b;  */

void FUN_102e9a820(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x18;
  func_0x000107c61618();
  if ((lVar1 != 0) && (func_0x000107c615e8(), lVar1 == param_2)) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    func_0x000107c61604(param_1 + 0x18,0);
  }
  return;
}



/* Entry: 102e9a87c; end: 102e9a897;  */

void FUN_102e9a87c(void)

{
  long unaff_x20;
  
  FUN_102e9a820(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 102e9a898; end: 102e9a9eb;  */

void FUN_102e9a898(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long unaff_x20;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  
  func_0x0001000285a8(0x112f25600,&UNK_10db60438);
  func_0x000100087bd4(&puStack_88,FUN_102e9a9ec);
  if (puStack_88 == (undefined *)0x0) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
    puVar1 = &UNK_1105e2300;
    func_0x000107c613fc(&UNK_1105e2300,0x20,7);
    *(undefined8 *)(puVar1 + 0x10) = param_2;
    *(undefined8 *)(puVar1 + 0x18) = param_3;
    pcStack_68 = FUN_102e9aa20;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    lStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_1105e2318;
    ppuVar2 = &puStack_88;
    puStack_60 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    puVar1 = puStack_60;
    func_0x000101237340(param_2,param_3);
    func_0x000107c61574(puVar1);
    func_0x000107c4e524(uVar3);
    func_0x000107c60bd0(ppuVar2);
  }
  else {
    puVar1 = puStack_88;
    func_0x000107c614f0(puStack_88);
    pcVar4 = *(code **)(lStack_80 + 8);
    func_0x000107c615f0(puStack_88);
    (*pcVar4)(param_1,param_2,param_3,puVar1,lStack_80);
    func_0x000107c615ec(puStack_88,2);
  }
  return;
}



/* Entry: 102e9a9ec; end: 102e9aa1f;  */

void FUN_102e9a9ec(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20 + 0x18;
  func_0x000107c61618();
  lVar2 = *(long *)(unaff_x20 + 0x20);
  *param_1 = lVar1;
  param_1[1] = lVar2;
  return;
}



/* Entry: 102e9aa20; end: 102e9aa4b;  */

void FUN_102e9aa20(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))(0);
  }
  return;
}



/* Entry: 102e9aa4c; end: 102e9aa67;  */

void FUN_102e9aa4c(long param_1,long param_2)

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



/* Entry: 102e9aa68; end: 102e9aa8b;  */

undefined8 FUN_102e9aa68(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102e9aa8c; end: 102e9aabf;  */

void FUN_102e9aa8c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_102e9aa68(unaff_x20 + 0x18);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e9aac0; end: 102e9ab0f;  */

undefined1 FUN_102e9aac0(void)

{
  undefined1 uStack_31;
  
  func_0x000100087bd4(&uStack_31,0x102e9ac1c);
  return uStack_31;
}



/* Entry: 102e9ab10; end: 102e9ab27;  */

void FUN_102e9ab10(void)

{
  long unaff_x20;
  undefined1 auStack_60 [16];
  
  func_0x000100087bd4(*(undefined8 *)(unaff_x20 + 0x10),0x102e9ac08,auStack_60,
                      PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 102e9ab28; end: 102e9ab7b;  */

void FUN_102e9ab28(void)

{
  undefined8 in_x4;
  long unaff_x20;
  undefined1 auStack_60 [16];
  
  func_0x000100087bd4(*(undefined8 *)(unaff_x20 + 0x10),in_x4,auStack_60,PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 102e9ab7c; end: 102e9ab7f;  */

void FUN_102e9ab7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  code *pcVar4;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  
  func_0x0001000285a8(0x112f25600,&UNK_10db60438);
  func_0x000100087bd4(&puStack_88,FUN_102e9a9ec);
  if (puStack_88 == (undefined *)0x0) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
    puVar1 = &UNK_1105e2300;
    func_0x000107c613fc(&UNK_1105e2300,0x20,7);
    *(undefined8 *)(puVar1 + 0x10) = param_2;
    *(undefined8 *)(puVar1 + 0x18) = param_3;
    pcStack_68 = FUN_102e9aa20;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    lStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_1105e2318;
    ppuVar2 = &puStack_88;
    puStack_60 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    puVar1 = puStack_60;
    func_0x000101237340(param_2,param_3);
    func_0x000107c61574(puVar1);
    func_0x000107c4e524(uVar3);
    func_0x000107c60bd0(ppuVar2);
  }
  else {
    puVar1 = puStack_88;
    func_0x000107c614f0(puStack_88);
    pcVar4 = *(code **)(lStack_80 + 8);
    func_0x000107c615f0(puStack_88);
    (*pcVar4)(param_1,param_2,param_3,puVar1,lStack_80);
    func_0x000107c615ec(puStack_88,2);
  }
  return;
}



/* Entry: 102e9ab80; end: 102e9aba3;  */

void FUN_102e9ab80(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61604(lVar1 + 0x18,uVar2);
  return;
}



/* Entry: 102e9aba4; end: 102e9abf3;  */

void FUN_102e9aba4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20 + 0x18;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c615e8(lVar1);
  }
  *(bool *)param_1 = lVar1 != 0;
  return;
}



/* Entry: 102e9abf4; end: 102e9ac2f;  */

void FUN_102e9abf4(void)

{
  FUN_102e9a87c();
  return;
}



/* Entry: 102e9ac30; end: 102e9aca7;  */

long FUN_102e9ac30(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long unaff_x20;
  undefined *puStack_28;
  
  func_0x000107c613fc();
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x00010075466c();
  puStack_28 = puVar1;
  func_0x0001000285a8(0x112f25508,&UNK_10db60470);
  func_0x000107c613fc();
  ppuVar2 = &puStack_28;
  func_0x00010006c248();
  *(undefined ***)(unaff_x20 + 0x10) = ppuVar2;
  return unaff_x20;
}



/* Entry: 102e9aca8; end: 102e9af7b;  */

undefined * FUN_102e9aca8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  code *pcVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong *puVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  undefined1 auStack_a8 [72];
  
  puVar7 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puVar17 = (ulong *)(param_1 + 0x40);
  uVar20 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar19 = 0xffffffffffffffff;
  if (-uVar20 < 0x40) {
    uVar19 = ~(-1L << (-uVar20 & 0x3f));
  }
  uVar19 = uVar19 & *puVar17;
  func_0x000107c61434();
  lVar12 = 0;
  lVar6 = lVar12;
  while( true ) {
    while (uVar19 != 0) {
      uVar13 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar19 = uVar19 - 1 & uVar19;
      uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | lVar12 << 6;
      lVar18 = *(long *)(*(long *)(param_1 + 0x38) + uVar13 * 8);
      lVar6 = lVar12;
      if (*(long *)(lVar18 + 0x10) != 0) {
        puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar13 * 0x10);
        uVar3 = *puVar1;
        uVar5 = puVar1[1];
        lVar2 = lVar18 + *(long *)(lVar18 + 0x10) * 0x10;
        uVar4 = *(undefined8 *)(lVar2 + 0x10);
        lVar2 = *(long *)(lVar2 + 0x18);
        uVar10 = uVar4;
        func_0x000107c614f0();
        pcVar8 = *(code **)(lVar2 + 0x10);
        func_0x000107c61434(uVar5);
        func_0x000107c61434(lVar18);
        func_0x000107c615f0(uVar4);
        (*pcVar8)(uVar10,lVar2);
        func_0x000107c615e8(uVar4);
        uVar13 = *(ulong *)(puVar7 + 0x10);
        if (uVar13 < *(ulong *)(puVar7 + 0x18)) {
          func_0x000107c61434(uVar5);
          func_0x000107c61434(lVar18);
        }
        else {
          func_0x000107c61434(uVar5);
          func_0x000107c61434(lVar18);
          func_0x00010113678c(uVar13 + 1,1);
        }
        func_0x000107c6068c(auStack_a8,*(undefined8 *)(puVar7 + 0x28));
        puVar11 = auStack_a8;
        func_0x000107c5fb58(puVar11,uVar3,uVar5);
        func_0x000107c606a8();
        uVar16 = -1L << ((ulong)(byte)puVar7[0x20] & 0x3f);
        uVar15 = (ulong)puVar11 & (uVar16 ^ 0xffffffffffffffff);
        uVar14 = uVar15 >> 6;
        uVar13 = -1L << (uVar15 & 0x3f) &
                 (*(ulong *)(puVar7 + uVar14 * 8 + 0x40) ^ 0xffffffffffffffff);
        if (uVar13 == 0) {
          bVar9 = false;
          uVar13 = 0x3f - uVar16 >> 6;
          do {
            uVar15 = uVar14 + 1;
            if ((uVar15 == uVar13) && (bVar9)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x102e9af7c);
              (*pcVar8)();
            }
            uVar14 = 0;
            if (uVar15 != uVar13) {
              uVar14 = uVar15;
            }
            bVar9 = (bool)(uVar15 == uVar13 | bVar9);
          } while (*(ulong *)(puVar7 + uVar14 * 8 + 0x40) == 0xffffffffffffffff);
          uVar13 = ~*(ulong *)(puVar7 + uVar14 * 8 + 0x40);
          uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
          uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
          uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
          uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
          uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | uVar14 << 6;
        }
        else {
          uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
          uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
          uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
          uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
          uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | uVar15 & 0x7fffffffffffffc0;
        }
        uVar14 = uVar13 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar7 + uVar14 + 0x40) =
             1L << (uVar13 & 0x3f) | *(ulong *)(puVar7 + uVar14 + 0x40);
        puVar1 = (undefined8 *)(*(long *)(puVar7 + 0x30) + uVar13 * 0x10);
        *puVar1 = uVar3;
        puVar1[1] = uVar5;
        *(undefined8 *)(*(long *)(puVar7 + 0x38) + uVar13 * 8) = uVar10;
        *(long *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + 1;
        func_0x000107c6142c(uVar5);
        func_0x000107c61430(lVar18,2);
      }
    }
    bVar9 = SCARRY8(lVar12,1);
    lVar12 = lVar12 + 1;
    if (bVar9) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x102e9af78);
      (*pcVar8)();
    }
    if ((long)(0x3f - uVar20 >> 6) <= lVar12) break;
    uVar19 = puVar17[lVar12];
  }
  FUN_102e9c120(param_1,puVar17,~uVar20,lVar6,0);
  return puVar7;
}



/* Entry: 102e9af7c; end: 102e9b22b;  */

void FUN_102e9af7c(undefined8 *param_1,ulong *param_2,ulong *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong *puVar8;
  ulong *puVar9;
  code *pcVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auStack_80 [32];
  
  puVar3 = param_2;
  func_0x000107c614f0();
  pcVar10 = (code *)param_3[1];
  puVar4 = puVar3;
  puVar8 = param_3;
  (*pcVar10)();
  pcVar2 = (code *)auStack_80;
  FUN_102e9b22c(pcVar2,puVar4,puVar8);
  uVar17 = *puVar4;
  if (uVar17 != 0) {
    uVar5 = *(ulong *)(uVar17 + 0x10);
    if (uVar5 != 0) {
      lVar11 = 0x20;
      uVar15 = 0;
LAB_102e9b014:
      uVar13 = uVar15 + 1;
      uVar12 = uVar5;
      if (*(ulong **)(uVar17 + lVar11) != param_2) goto code_r0x000102e9b024;
      if (uVar5 - 1 != uVar15) {
        do {
          lVar11 = lVar11 + 0x10;
          if (uVar5 <= uVar13) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102e9b220);
            (*pcVar2)();
          }
          uVar7 = ((undefined8 *)(uVar17 + lVar11))[1];
          puVar14 = *(ulong **)(uVar17 + lVar11);
          if (puVar14 != param_2) {
            if (uVar13 != uVar15) {
              if (uVar5 <= uVar15) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x102e9b224);
                (*pcVar2)();
              }
              puVar1 = (undefined8 *)(uVar17 + 0x20 + uVar15 * 0x10);
              uVar19 = puVar1[1];
              uVar18 = *puVar1;
              func_0x000107c615f0(uVar18);
              func_0x000107c615f0(puVar14);
              uVar5 = uVar17;
              func_0x000107c61558();
              *puVar4 = uVar17;
              if ((uVar5 & 1) == 0) {
                func_0x000102e9bb58();
                *puVar4 = uVar17;
              }
              lVar16 = uVar17 + uVar15 * 0x10;
              uVar6 = *(undefined8 *)(lVar16 + 0x20);
              *(undefined8 *)(lVar16 + 0x28) = uVar7;
              *(ulong **)(lVar16 + 0x20) = puVar14;
              func_0x000107c615e8(uVar6);
              *puVar4 = uVar17;
              if (*(ulong *)(uVar17 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x102e9b228);
                (*pcVar2)();
              }
              uVar7 = *(undefined8 *)(uVar17 + lVar11);
              ((undefined8 *)(uVar17 + lVar11))[1] = uVar19;
              *(undefined8 *)(uVar17 + lVar11) = uVar18;
              func_0x000107c615e8(uVar7);
              *puVar4 = uVar17;
            }
            uVar15 = uVar15 + 1;
          }
          uVar13 = uVar13 + 1;
          uVar5 = *(ulong *)(uVar17 + 0x10);
          uVar12 = uVar13;
        } while (uVar13 != uVar5);
      }
      uVar5 = uVar15;
      if ((long)uVar12 < (long)uVar5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102e9b22c);
        (*pcVar2)();
      }
      goto LAB_102e9b068;
    }
    uVar12 = 0;
LAB_102e9b068:
    func_0x000102e9c064(uVar5,uVar12);
  }
  (*pcVar2)(auStack_80,0);
  func_0x000107c6142c(puVar8);
  puVar4 = puVar3;
  puVar8 = param_3;
  (*pcVar10)();
  puVar14 = (ulong *)*param_1;
  if (puVar14[2] != 0) {
    func_0x000107c61434(puVar14);
    puVar9 = puVar8;
    func_0x000100029284();
    if (((ulong)puVar9 & 1) != 0) {
      lVar16 = *(long *)(puVar14[7] + (long)puVar4 * 8);
      func_0x000107c61434(lVar16);
      func_0x000107c6142c(puVar8);
      func_0x000107c6142c(puVar14);
      lVar11 = *(long *)(lVar16 + 0x10);
      func_0x000107c6142c(lVar16);
      if (lVar11 != 0) {
        return;
      }
      (*pcVar10)(puVar3,param_3);
      FUN_102e9b89c();
      puVar8 = param_3;
      puVar14 = puVar3;
    }
    func_0x000107c6142c(puVar8);
    puVar8 = puVar14;
  }
  func_0x000107c6142c(puVar8);
  return;
code_r0x000102e9b024:
  lVar11 = lVar11 + 0x10;
  uVar15 = uVar13;
  if (uVar5 == uVar13) goto LAB_102e9b068;
  goto LAB_102e9b014;
}



/* Entry: 102e9b22c; end: 102e9b29f;  */

code * FUN_102e9b22c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x28,0x2b19);
  }
  *param_1 = lVar1;
  lVar2 = lVar1;
  FUN_102e9b7c8();
  *(long *)(lVar1 + 0x20) = lVar2;
  return FUN_102e9b2a0;
}



/* Entry: 102e9b2a0; end: 102e9b2cf;  */

void FUN_102e9b2a0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x20))(lVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 102e9b2d0; end: 102e9b3c3;  */

void FUN_102e9b2d0(undefined8 param_1,ulong *param_2,long param_3,ulong param_4)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar2 = param_3;
  func_0x000107c614f0();
  (**(code **)(param_4 + 8))();
  uVar3 = *param_2;
  uVar4 = param_4;
  if (*(long *)(uVar3 + 0x10) != 0) {
    func_0x000107c61434(uVar3);
    func_0x000100029284();
    if ((uVar4 & 1) == 0) {
      func_0x000107c6142c(param_4);
      uVar4 = uVar3;
    }
    else {
      uVar4 = *(ulong *)(*(long *)(uVar3 + 0x38) + lVar2 * 8);
      func_0x000107c61434(uVar4);
      func_0x000107c6142c(param_4);
      func_0x000107c6142c(uVar3);
      lVar2 = *(long *)(uVar4 + 0x10);
      if (lVar2 != 0) {
        lVar2 = ((long *)(uVar4 + 0x10))[lVar2 * 2];
        func_0x000107c6142c(uVar4);
        bVar1 = lVar2 == param_3;
        goto LAB_102e9b3a8;
      }
    }
  }
  func_0x000107c6142c(uVar4);
  bVar1 = false;
LAB_102e9b3a8:
  *(bool *)param_1 = bVar1;
  return;
}



/* Entry: 102e9b3c4; end: 102e9b523;  */

void FUN_102e9b3c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7,undefined8 param_8)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  code *pcVar6;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  ulong uStack_70;
  long lStack_68;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_90 = param_1;
  uStack_88 = param_2;
  func_0x000107c6157c(uVar5);
  uVar1 = 0x112f256b8;
  func_0x0001000285a8(0x112f256b8,&UNK_10db60478);
  func_0x000100075034(&uStack_70,0x102e9bf38,auStack_a0,uVar1);
  func_0x000107c61574(uVar5);
  if (uStack_70 == 0) {
LAB_102e9b4dc:
    auStack_a0[0] = 1;
    uStack_80 = 1;
    (*param_7)(auStack_a0);
    func_0x000107c615e8(uStack_70);
    FUN_102e9bf50(auStack_a0);
  }
  else {
    uVar2 = uStack_70;
    func_0x000107c614f0();
    pcVar6 = *(code **)(lStack_68 + 0x18);
    func_0x000107c615f0(uStack_70);
    uVar3 = uVar2;
    lVar4 = lStack_68;
    (*pcVar6)();
    if (lVar4 != 0) {
      func_0x0001043492ac();
      func_0x000107c6142c(lVar4);
      if ((uVar3 & 1) == 0) {
        func_0x000107c615e8(uStack_70);
        goto LAB_102e9b4dc;
      }
    }
    (**(code **)(lStack_68 + 0x20))(param_3,param_4,param_5,param_6,param_7,param_8,uVar2,lStack_68)
    ;
    func_0x000107c615ec(uStack_70,2);
  }
  return;
}



/* Entry: 102e9b524; end: 102e9b5e3;  */

void FUN_102e9b524(long *param_1,long *param_2,long param_3,ulong param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_2;
  if (*(long *)(lVar3 + 0x10) != 0) {
    func_0x000107c61434(lVar3);
    func_0x000100029284();
    if ((param_4 & 1) != 0) {
      lVar2 = *(long *)(*(long *)(lVar3 + 0x38) + param_3 * 8);
      func_0x000107c61434(lVar2);
      func_0x000107c6142c(lVar3);
      lVar3 = *(long *)(lVar2 + 0x10);
      if (lVar3 == 0) {
        lVar3 = 0;
        lVar4 = 0;
      }
      else {
        plVar1 = (long *)(lVar2 + 0x10) + lVar3 * 2;
        lVar3 = *plVar1;
        lVar4 = plVar1[1];
        func_0x000107c615f0(lVar3);
      }
      func_0x000107c6142c(lVar2);
      *param_1 = lVar3;
      param_1[1] = lVar4;
      return;
    }
    func_0x000107c6142c(lVar3);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 102e9b5e4; end: 102e9b607;  */

void FUN_102e9b5e4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e9b608; end: 102e9b75f;  */

undefined8 FUN_102e9b608(void)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c(uVar1);
  func_0x0001000c74f0(&uStack_38);
  func_0x000107c61574(uVar1);
  uVar1 = uStack_38;
  FUN_102e9aca8(uStack_38);
  func_0x000107c6142c(uStack_38);
  return uVar1;
}



/* Entry: 102e9b760; end: 102e9b763;  */

void FUN_102e9b760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7,undefined8 param_8)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  code *pcVar6;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  ulong uStack_70;
  long lStack_68;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_90 = param_1;
  uStack_88 = param_2;
  func_0x000107c6157c(uVar5);
  uVar1 = 0x112f256b8;
  func_0x0001000285a8(0x112f256b8,&UNK_10db60478);
  func_0x000100075034(&uStack_70,0x102e9bf38,auStack_a0,uVar1);
  func_0x000107c61574(uVar5);
  if (uStack_70 == 0) {
LAB_102e9b4dc:
    auStack_a0[0] = 1;
    uStack_80 = 1;
    (*param_7)(auStack_a0);
    func_0x000107c615e8(uStack_70);
    FUN_102e9bf50(auStack_a0);
  }
  else {
    uVar2 = uStack_70;
    func_0x000107c614f0();
    pcVar6 = *(code **)(lStack_68 + 0x18);
    func_0x000107c615f0(uStack_70);
    uVar3 = uVar2;
    lVar4 = lStack_68;
    (*pcVar6)();
    if (lVar4 != 0) {
      func_0x0001043492ac();
      func_0x000107c6142c(lVar4);
      if ((uVar3 & 1) == 0) {
        func_0x000107c615e8(uStack_70);
        goto LAB_102e9b4dc;
      }
    }
    (**(code **)(lStack_68 + 0x20))(param_3,param_4,param_5,param_6,param_7,param_8,uVar2,lStack_68)
    ;
    func_0x000107c615ec(uStack_70,2);
  }
  return;
}



/* Entry: 102e9b764; end: 102e9b7c7;  */

undefined1 FUN_102e9b764(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_31;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_50 = param_1;
  uStack_48 = param_2;
  func_0x000107c6157c(uVar1);
  func_0x000100075034(&uStack_31,FUN_102e9c128,auStack_60,PTR___sSbN_11034dd40);
  func_0x000107c61574(uVar1);
  return uStack_31;
}



/* Entry: 102e9b7c8; end: 102e9b85f;  */

code * FUN_102e9b7c8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *unaff_x20;
  
  lVar1 = 0x50;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x50,0x23fb);
  }
  *param_1 = lVar1;
  uVar2 = *unaff_x20;
  func_0x000107c61558(uVar2);
  lVar3 = lVar1;
  FUN_102e9bb34();
  *(long *)(lVar1 + 0x40) = lVar3;
  lVar3 = lVar1 + 0x20;
  FUN_102e9b958(lVar3,param_2,param_3,uVar2);
  *(long *)(lVar1 + 0x48) = lVar3;
  return FUN_102e9b860;
}



/* Entry: 102e9b860; end: 102e9b89b;  */

void FUN_102e9b860(long *param_1)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *param_1;
  pcVar1 = *(code **)(lVar2 + 0x40);
  (**(code **)(lVar2 + 0x48))(lVar2 + 0x20,0);
  (*pcVar1)(lVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar2);
  return;
}



/* Entry: 102e9b89c; end: 102e9b957;  */

undefined8 FUN_102e9b89c(long param_1,ulong param_2)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *unaff_x20;
  func_0x000107c61434(lVar2);
  func_0x000100029284();
  func_0x000107c6142c(lVar2);
  if ((param_2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_102e9cd80();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_1 * 0x10 + 8));
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + param_1 * 8);
    FUN_102e9d4e8(param_1,lVar2);
    *unaff_x20 = lVar2;
  }
  return uVar3;
}



/* Entry: 102e9b958; end: 102e9ba93;  */

undefined1  [16] FUN_102e9b958(long *param_1,long param_2,ulong param_3,uint param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  undefined1 auVar10 [16];
  
  puVar3 = (undefined8 *)0x30;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x30,0x8ecb);
  }
  *param_1 = (long)puVar3;
  puVar3[2] = param_3;
  puVar3[3] = unaff_x20;
  puVar3[1] = param_2;
  lVar9 = *unaff_x20;
  lVar4 = param_2;
  uVar5 = param_3;
  func_0x000100029284();
  *(byte *)(puVar3 + 5) = (byte)uVar5 & 1;
  lVar6 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar5 & 1;
  lVar1 = lVar6 + uVar8;
  if (SCARRY8(lVar6,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102e9ba50);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar1) {
    func_0x000100943cc0(lVar1,param_4 & 1);
    func_0x000100029284();
    lVar4 = param_2;
    if (((uint)uVar5 & 1) != ((uint)param_3 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102e9ba30);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_102e9cd80();
    puVar3[4] = lVar4;
    goto joined_r0x000102e9ba64;
  }
  puVar3[4] = lVar4;
joined_r0x000102e9ba64:
  if ((uVar5 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(*(long *)(*unaff_x20 + 0x38) + lVar4 * 8);
  }
  *puVar3 = uVar7;
  auVar10._8_8_ = puVar3;
  auVar10._0_8_ = FUN_102e9ba94;
  return auVar10;
}



/* Entry: 102e9ba94; end: 102e9bb33;  */

void FUN_102e9ba94(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = (long *)*param_1;
  lVar1 = *param_1;
  if (lVar1 == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      lVar2 = param_1[4];
      lVar3 = *(long *)param_1[3];
      func_0x000100bcb1dc(*(long *)(lVar3 + 0x30) + lVar2 * 0x10);
      FUN_102e9d4e8(lVar2,lVar3);
    }
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    lVar2 = param_1[2];
    func_0x000100943f5c(param_1[4],param_1[1],lVar2,lVar1);
    func_0x000107c61434(lVar2);
  }
  else {
    *(long *)(*(long *)(*(long *)param_1[3] + 0x38) + param_1[4] * 8) = lVar1;
  }
  lVar2 = *param_1;
  func_0x000107c61434(lVar1);
  func_0x000107c6142c(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 102e9bb34; end: 102e9bb6b;  */

undefined1  [16] FUN_102e9bb34(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined1 auVar1 [16];
  
  *param_1 = *unaff_x20;
  param_1[1] = unaff_x20;
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = 0x102e9bb4c;
  return auVar1;
}



/* Entry: 102e9bb6c; end: 102e9be97;  */

undefined * FUN_102e9bb6c(long param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  bool bVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong *puVar17;
  code *pcVar18;
  ulong uVar19;
  undefined1 auStack_a8 [72];
  
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puVar17 = (ulong *)(param_1 + 0x40);
  lVar14 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar10 = -lVar14;
  uVar19 = 0xffffffffffffffff;
  if (uVar10 < 0x40) {
    uVar19 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar19 = uVar19 & *puVar17;
  func_0x000107c61434();
  lVar9 = 0;
  do {
    while( true ) {
      do {
        while (uVar19 == 0) {
          bVar6 = SCARRY8(lVar9,1);
          lVar9 = lVar9 + 1;
          if (bVar6) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x102e9be94);
            (*pcVar18)();
          }
          if ((long)(0x3fU - lVar14 >> 6) <= lVar9) {
            FUN_102e9c120();
            return puVar5;
          }
          uVar19 = puVar17[lVar9];
        }
        uVar10 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar19 = uVar19 - 1 & uVar19;
        uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | lVar9 << 6;
        lVar16 = *(long *)(*(long *)(param_1 + 0x38) + uVar10 * 8);
        lVar12 = *(long *)(lVar16 + 0x10);
      } while (lVar12 == 0);
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar10 * 0x10);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar2 = (ulong *)((long *)(lVar16 + 0x10) + lVar12 * 2);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      uVar7 = uVar10;
      func_0x000107c614f0();
      pcVar18 = *(code **)(uVar11 + 0x18);
      func_0x000107c61434(uVar4);
      func_0x000107c61434(lVar16);
      func_0x000107c615f0(uVar10);
      uVar13 = uVar7;
      uVar15 = uVar11;
      (*pcVar18)();
      if (uVar15 != 0) break;
LAB_102e9bcd8:
      (**(code **)(uVar11 + 0x10))(uVar7,uVar11);
      func_0x000107c615e8(uVar10);
      uVar10 = *(ulong *)(puVar5 + 0x10);
      if (uVar10 < *(ulong *)(puVar5 + 0x18)) {
        func_0x000107c61434(uVar4);
        func_0x000107c61434(lVar16);
      }
      else {
        func_0x000107c61434(uVar4);
        func_0x000107c61434(lVar16);
        func_0x00010113678c(uVar10 + 1,1);
      }
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(puVar5 + 0x28));
      puVar8 = auStack_a8;
      func_0x000107c5fb58(puVar8,uVar3,uVar4);
      func_0x000107c606a8();
      uVar15 = -1L << ((ulong)(byte)puVar5[0x20] & 0x3f);
      uVar13 = (ulong)puVar8 & (uVar15 ^ 0xffffffffffffffff);
      uVar11 = uVar13 >> 6;
      uVar10 = -1L << (uVar13 & 0x3f) &
               (*(ulong *)(puVar5 + uVar11 * 8 + 0x40) ^ 0xffffffffffffffff);
      if (uVar10 == 0) {
        bVar6 = false;
        uVar10 = 0x3f - uVar15 >> 6;
        do {
          uVar13 = uVar11 + 1;
          if ((uVar13 == uVar10) && (bVar6)) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x102e9be98);
            (*pcVar18)();
          }
          uVar11 = 0;
          if (uVar13 != uVar10) {
            uVar11 = uVar13;
          }
          bVar6 = (bool)(uVar13 == uVar10 | bVar6);
        } while (*(ulong *)(puVar5 + uVar11 * 8 + 0x40) == 0xffffffffffffffff);
        uVar10 = ~*(ulong *)(puVar5 + uVar11 * 8 + 0x40);
        uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar11 << 6;
      }
      else {
        uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar13 & 0x7fffffffffffffc0;
      }
      uVar11 = uVar10 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar11 + 0x40) =
           1L << (uVar10 & 0x3f) | *(ulong *)(puVar5 + uVar11 + 0x40);
      puVar1 = (undefined8 *)(*(long *)(puVar5 + 0x30) + uVar10 * 0x10);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      *(ulong *)(*(long *)(puVar5 + 0x38) + uVar10 * 8) = uVar7;
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      func_0x000107c6142c(uVar4);
      func_0x000107c61430(lVar16,2);
    }
    func_0x0001043492ac();
    func_0x000107c6142c(uVar15);
    if ((uVar13 & 1) != 0) goto LAB_102e9bcd8;
    func_0x000107c6142c(lVar16);
    func_0x000107c6142c(uVar4);
    func_0x000107c615e8(uVar10);
  } while( true );
}



/* Entry: 102e9be98; end: 102e9bf07;  */

undefined8 FUN_102e9be98(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_104349fc0)(param_2,param_1);
  return param_2;
}



/* Entry: 102e9bf08; end: 102e9bf4f;  */

void FUN_102e9bf08(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102e9af7c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102e9bf50; end: 102e9bf97;  */

undefined8 FUN_102e9bf50(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112ee4d20;
  func_0x0001000285a8(0x112ee4d20,&UNK_10db0ff90);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 102e9bf98; end: 102e9c11f;  */

void FUN_102e9bf98(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar4 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x102e9c054);
    (*pcVar6)();
  }
  lVar8 = *unaff_x20;
  lVar1 = lVar8 + 0x20 + param_1 * 0x10;
  uVar7 = 0x112f25760;
  func_0x0001000285a8(0x112f25760,&UNK_10db604c8);
  func_0x000107c61408(lVar1,lVar4,uVar7);
  lVar5 = param_3 - lVar4;
  if (SBORROW8(param_3,lVar4)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x102e9c058);
    (*pcVar6)();
  }
  if (lVar5 != 0) {
    lVar4 = *(long *)(lVar8 + 0x10) - param_2;
    if (SBORROW8(*(long *)(lVar8 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x102e9c05c);
      (*pcVar6)();
    }
    uVar2 = lVar1 + param_3 * 0x10;
    uVar3 = lVar8 + 0x20 + param_2 * 0x10;
    if (uVar2 != uVar3 || uVar3 + lVar4 * 0x10 <= uVar2) {
      func_0x000107c610b8(uVar2,uVar3,lVar4 * 0x10);
    }
    if (SCARRY8(*(long *)(lVar8 + 0x10),lVar5)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x102e9c060);
      (*pcVar6)();
    }
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + lVar5;
  }
  if (param_3 < 1) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x102e9c064);
  (*pcVar6)();
}



/* Entry: 102e9c120; end: 102e9c127;  */

void FUN_102e9c120(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 102e9c128; end: 102e9c14f;  */

void FUN_102e9c128(void)

{
  func_0x000102e9bf20();
  return;
}



/* Entry: 102e9c150; end: 102e9c24f;  */

long FUN_102e9c150(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long unaff_x20;
  undefined *puVar3;
  code *pcVar4;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  func_0x000107c613fc();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001007547a8();
  puStack_50 = puVar3;
  uStack_48 = 0;
  puStack_58 = puVar1;
  func_0x0001000285a8(0x112f25510,&UNK_10db603b0);
  func_0x000107c613fc();
  ppuVar2 = &puStack_58;
  func_0x00010006c248();
  *(undefined ***)(unaff_x20 + 0x10) = ppuVar2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  if (param_3 == 0) {
    puVar3 = (undefined *)0x0;
    pcVar4 = FUN_102e9c350;
  }
  else {
    puVar3 = &UNK_1105e23e8;
    func_0x000107c613fc(&UNK_1105e23e8,0x20,7);
    *(long *)(puVar3 + 0x10) = param_3;
    *(undefined8 *)(puVar3 + 0x18) = param_4;
    pcVar4 = (code *)0x102e9d85c;
  }
  puVar1 = &UNK_1105e23c0;
  func_0x000107c613fc(&UNK_1105e23c0,0x20,7);
  *(code **)(puVar1 + 0x10) = pcVar4;
  *(undefined **)(puVar1 + 0x18) = puVar3;
  *(code **)(unaff_x20 + 0x28) = FUN_102e9d854;
  *(undefined **)(unaff_x20 + 0x30) = puVar1;
  return unaff_x20;
}



/* Entry: 102e9c250; end: 102e9c34f;  */

undefined8 FUN_102e9c250(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  func_0x000107c5eea0(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee54();
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  return param_1;
}



/* Entry: 102e9c350; end: 102e9c4b3;  */

void FUN_102e9c350(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  long extraout_x8;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)&puStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar9 = *param_1;
  puVar2 = &UNK_1105e2528;
  func_0x000107c613fc(&UNK_1105e2528,0x20,7);
  uVar5 = param_2[1];
  uVar8 = *param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_2[1];
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  func_0x0001010415e8(0);
  (**(code **)(lVar7 + 0x68))
            (lVar6,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,lVar1)
  ;
  func_0x000107c6157c(uVar5);
  lVar3 = lVar6;
  func_0x000104188018(lVar6,0,0);
  (**(code **)(lVar7 + 8))(lVar6,lVar1);
  pcStack_60 = FUN_102e9e06c;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_1105e2540;
  ppuVar4 = &puStack_80;
  puStack_58 = puVar2;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61574(puStack_58);
  func_0x000107c4e528(uVar9,lVar3);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 102e9c4b4; end: 102e9c537;  */

void FUN_102e9c4b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined *puVar1;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = &UNK_1105e2500;
  uStack_48 = param_1;
  func_0x000107c613fc(&UNK_1105e2500,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  uStack_58 = 0x102e9de10;
  puStack_50 = puVar1;
  func_0x000107c6157c(param_3);
  (*param_4)(&uStack_48,&uStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102e9c538; end: 102e9c557;  */

void FUN_102e9c538(code *param_1)

{
  (*param_1)();
  return;
}



/* Entry: 102e9c558; end: 102e9c72b;  */

undefined1  [16]
FUN_102e9c558(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_d0 = *unaff_x20;
  lVar5 = 0;
  puVar7 = param_3;
  uStack_c8 = param_4;
  uStack_c0 = param_5;
  func_0x000107c5eec8();
  lVar12 = *(long *)(lVar5 + -8);
  lVar6 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar10 = (long)&uStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5eec4(lVar10);
  func_0x000107c5eeac();
  (**(code **)(lVar12 + 8))(lVar10,lVar5);
  puVar9 = puVar7;
  func_0x000107c5fb1c(lVar6,puVar7);
  func_0x000107c6142c();
  func_0x00010434a540();
  uStack_b0 = *puVar7;
  uStack_a8 = puVar7[1];
  func_0x000107c61434();
  func_0x000107c5fb78(lVar6,puVar9);
  func_0x000107c6142c(puVar9);
  func_0x000107c5fb78(0x2e,0xe100000000000000);
  func_0x000107c5fb78(param_6,param_7);
  uVar4 = uStack_a8;
  uVar3 = uStack_b0;
  auVar2._8_8_ = uStack_a8;
  auVar2._0_8_ = uStack_b0;
  (*(code *)unaff_x20[3])();
  uVar11 = unaff_x20[2];
  uStack_98 = uVar3;
  uStack_90 = uVar4;
  uStack_78 = uStack_c8;
  uStack_70 = uStack_c0;
  uStack_68 = uStack_d0;
  uStack_a0 = param_1;
  uStack_88 = param_2;
  puStack_80 = param_3;
  func_0x000107c6157c(uVar11);
  func_0x000100075034(FUN_102e9d864,&uStack_b0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar11);
  pcVar1 = (code *)unaff_x20[5];
  puVar8 = &UNK_1105e2410;
  func_0x000107c613fc(&UNK_1105e2410,0x18,7);
  func_0x000107c61644(puVar8 + 0x10);
  func_0x000107c6157c(puVar8);
  (*pcVar1)(0x4072d00000000000,FUN_102e9d88c,puVar8);
  func_0x000107c61578(puVar8,2);
  return auVar2;
}



/* Entry: 102e9c72c; end: 102e9cabf;  */

void FUN_102e9c72c(double param_1,long *param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  ulong param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  double dStack_68;
  
  FUN_102e9da48();
  dStack_68 = param_1 + 300.0;
  lStack_88 = param_5;
  uStack_80 = param_6;
  uStack_78 = param_7;
  uStack_70 = param_8;
  func_0x000107c61434(param_4);
  func_0x000107c61434(param_8);
  func_0x00010006c00c(param_5,param_6);
  lVar4 = *param_2;
  func_0x000107c61558(lVar4);
  lVar9 = *param_2;
  FUN_102e9d384(&lStack_88,param_3,param_4,lVar4);
  func_0x000107c6142c(param_4);
  *param_2 = lVar9;
  uVar13 = param_2[1];
  func_0x000107c61434(param_4);
  uVar10 = uVar13;
  func_0x000107c61558();
  uVar6 = uVar13;
  if ((uVar10 & 1) == 0) {
    uVar6 = 0;
    func_0x0001000d182c(0,*(long *)(uVar13 + 0x10) + 1,1,uVar13);
  }
  uVar10 = *(ulong *)(uVar6 + 0x10);
  uVar13 = uVar6;
  if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar10) {
    uVar13 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
    func_0x0001000d182c(uVar13,uVar10 + 1,1,uVar6);
  }
  *(ulong *)(uVar13 + 0x10) = uVar10 + 1;
  lVar4 = uVar13 + uVar10 * 0x10;
  *(undefined8 *)(lVar4 + 0x20) = param_3;
  *(undefined8 *)(lVar4 + 0x28) = param_4;
  param_2[1] = uVar13;
  uVar1 = (uint)(param_6 >> 0x20);
  uVar7 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar7 == 0) {
      uVar10 = param_6 >> 0x30 & 0xff;
    }
    else {
      iVar8 = (int)((ulong)param_5 >> 0x20);
      if (SBORROW4(iVar8,(int)param_5)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102e9cac0);
        (*pcVar2)();
      }
      uVar10 = (ulong)(iVar8 - (int)param_5);
    }
  }
  else if (uVar7 == 2) {
    uVar10 = *(long *)(param_5 + 0x18) - *(long *)(param_5 + 0x10);
    if (SBORROW8(*(long *)(param_5 + 0x18),*(long *)(param_5 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102e9c854);
      (*pcVar2)();
    }
  }
  else {
    uVar10 = 0;
  }
  lVar4 = param_2[2] + uVar10;
  if (SCARRY8(param_2[2],uVar10)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102e9cabc);
    (*pcVar2)();
  }
  param_2[2] = lVar4;
  do {
    if ((lVar4 < 0x1800001) || (lVar12 = *(long *)(uVar13 + 0x10), lVar12 == 0)) {
      param_2[2] = lVar4;
      return;
    }
    lVar5 = *(long *)(uVar13 + 0x20);
    uVar10 = *(ulong *)(uVar13 + 0x28);
    uVar14 = *(ulong *)(uVar13 + 0x18);
    func_0x000107c61434(uVar10);
    uVar6 = uVar13;
    if (uVar14 >> 1 < lVar12 - 1U) {
      uVar6 = 1;
      func_0x0001000d182c(1,lVar12,1,uVar13);
    }
    func_0x000100bcb1dc(uVar6 + 0x20);
    lVar12 = *(long *)(uVar6 + 0x10);
    func_0x000107c610b8(uVar6 + 0x20,uVar6 + 0x30,lVar12 * 0x10 + -0x10);
    *(long *)(uVar6 + 0x10) = lVar12 + -1;
    param_2[1] = uVar6;
    func_0x000107c61434(lVar9);
    uVar13 = uVar10;
    func_0x000100029284();
    func_0x000107c6142c(lVar9);
    if ((uVar13 & 1) == 0) {
      func_0x000107c6142c(uVar10);
LAB_102e9c890:
      uVar10 = 0;
    }
    else {
      iVar8 = (int)*param_2;
      func_0x000107c61558();
      lVar9 = *param_2;
      if (iVar8 == 0) {
        FUN_102e9cef0();
      }
      func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar9 + 0x30) + lVar5 * 0x10 + 8));
      plVar11 = (long *)(*(long *)(lVar9 + 0x38) + lVar5 * 0x28);
      lVar12 = *plVar11;
      uVar13 = plVar11[1];
      lVar15 = plVar11[3];
      func_0x000102e9d698(lVar5,lVar9);
      func_0x000107c6142c(uVar10);
      *param_2 = lVar9;
      func_0x00010006c00c(lVar12,uVar13);
      func_0x00010006c090(lVar12,uVar13);
      func_0x000107c6142c(lVar15);
      uVar1 = (uint)(uVar13 >> 0x20);
      uVar7 = uVar1 >> 0x1e;
      if (uVar1 >> 0x1e < 2) {
        if (uVar7 == 0) {
          func_0x00010006c090(lVar12,uVar13);
          uVar10 = uVar13 >> 0x30 & 0xff;
        }
        else {
          func_0x00010006c090(lVar12,uVar13);
          iVar8 = (int)((ulong)lVar12 >> 0x20);
          if (SBORROW4(iVar8,(int)lVar12)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102e9ca74);
            (*pcVar2)();
          }
          uVar10 = (ulong)(iVar8 - (int)lVar12);
        }
      }
      else {
        if (uVar7 != 2) {
          func_0x00010006c090(lVar12,uVar13);
          goto LAB_102e9c890;
        }
        lVar5 = *(long *)(lVar12 + 0x10);
        lVar15 = *(long *)(lVar12 + 0x18);
        func_0x00010006c090(lVar12,uVar13);
        uVar10 = lVar15 - lVar5;
        if (SBORROW8(lVar15,lVar5)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102e9ca78);
          (*pcVar2)();
        }
      }
    }
    bVar3 = SBORROW8(lVar4,uVar10);
    lVar4 = lVar4 - uVar10;
    uVar13 = uVar6;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102e9ca70);
      (*pcVar2)();
    }
  } while( true );
}



/* Entry: 102e9cac0; end: 102e9cbdf;  */

void FUN_102e9cac0(undefined8 *param_1,long *param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  FUN_102e9da48();
  lVar6 = *param_2;
  if (*(long *)(lVar6 + 0x10) != 0) {
    func_0x000107c61434(lVar6);
    func_0x000100029284();
    if ((param_4 & 1) != 0) {
      puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x38) + param_3 * 0x28);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      lVar1 = puVar2[3];
      uVar7 = puVar2[4];
      func_0x00010006c00c(uVar3,uVar4);
      func_0x000107c61434(lVar1);
      func_0x000107c6142c(lVar6);
      if (lVar1 != 0) {
        func_0x00010006c00c(uVar3,uVar4);
        func_0x000107c61434(lVar1);
        FUN_102e9dd68(uVar3,uVar4,uVar5,lVar1,uVar7);
        *param_1 = uVar3;
        param_1[1] = uVar4;
        param_1[2] = uVar5;
        param_1[3] = lVar1;
        return;
      }
      goto LAB_102e9cba0;
    }
    func_0x000107c6142c(lVar6);
  }
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar7 = 0;
LAB_102e9cba0:
  FUN_102e9dd68(uVar3,uVar4,uVar5,0,uVar7);
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 102e9cbe0; end: 102e9cc53;  */

void FUN_102e9cbe0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = *unaff_x20;
  (*(code *)unaff_x20[3])();
  uVar1 = unaff_x20[2];
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000100075034(FUN_102e9dd94,auStack_50,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 102e9cc54; end: 102e9cc87;  */

void FUN_102e9cc54(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e9cc88; end: 102e9cc8b;  */

undefined1  [16]
FUN_102e9cc88(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long extraout_x8;
  long lVar10;
  undefined8 uVar11;
  undefined8 *unaff_x20;
  long lVar12;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_d0 = *unaff_x20;
  lVar5 = 0;
  puVar7 = param_3;
  uStack_c8 = param_4;
  uStack_c0 = param_5;
  func_0x000107c5eec8();
  lVar12 = *(long *)(lVar5 + -8);
  lVar6 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar10 = (long)&uStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5eec4(lVar10);
  func_0x000107c5eeac();
  (**(code **)(lVar12 + 8))(lVar10,lVar5);
  puVar9 = puVar7;
  func_0x000107c5fb1c(lVar6,puVar7);
  func_0x000107c6142c();
  func_0x00010434a540();
  uStack_b0 = *puVar7;
  uStack_a8 = puVar7[1];
  func_0x000107c61434();
  func_0x000107c5fb78(lVar6,puVar9);
  func_0x000107c6142c(puVar9);
  func_0x000107c5fb78(0x2e,0xe100000000000000);
  func_0x000107c5fb78(param_6,param_7);
  uVar4 = uStack_a8;
  uVar3 = uStack_b0;
  auVar2._8_8_ = uStack_a8;
  auVar2._0_8_ = uStack_b0;
  (*(code *)unaff_x20[3])();
  uVar11 = unaff_x20[2];
  uStack_98 = uVar3;
  uStack_90 = uVar4;
  uStack_78 = uStack_c8;
  uStack_70 = uStack_c0;
  uStack_68 = uStack_d0;
  uStack_a0 = param_1;
  uStack_88 = param_2;
  puStack_80 = param_3;
  func_0x000107c6157c(uVar11);
  func_0x000100075034(FUN_102e9d864,&uStack_b0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar11);
  pcVar1 = (code *)unaff_x20[5];
  puVar8 = &UNK_1105e2410;
  func_0x000107c613fc(&UNK_1105e2410,0x18,7);
  func_0x000107c61644(puVar8 + 0x10);
  func_0x000107c6157c(puVar8);
  (*pcVar1)(0x4072d00000000000,FUN_102e9d88c,puVar8);
  func_0x000107c61578(puVar8,2);
  return auVar2;
}



/* Entry: 102e9cc8c; end: 102e9cd2b;  */

undefined8 FUN_102e9cc8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 auStack_60 [4];
  
  uVar2 = *unaff_x20;
  (*(code *)unaff_x20[3])();
  uVar1 = unaff_x20[2];
  uStack_80 = param_1;
  uStack_78 = param_2;
  uStack_70 = param_3;
  uStack_68 = uVar2;
  func_0x000107c6157c(uVar1);
  uVar2 = 0x112f25768;
  func_0x0001000285a8(0x112f25768,&UNK_10db604d8);
  func_0x000100075034(auStack_60,FUN_102e9e058,auStack_90,uVar2);
  func_0x000107c61574(uVar1);
  return auStack_60[0];
}



/* Entry: 102e9cd2c; end: 102e9cd7f;  */

void FUN_102e9cd2c(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_102e9cbe0();
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 102e9cd80; end: 102e9ceef;  */

void FUN_102e9cd80(void)

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
  
  func_0x0001000285a8(0x112f255f8,&UNK_10db60410);
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
    if (uVar8 == 0) goto LAB_102e9ce5c;
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
        func_0x000107c61434(uVar12);
        if (uVar8 != 0) break;
LAB_102e9ce5c:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x102e9cef0);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_102e9cec8;
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
LAB_102e9cec8:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 102e9cef0; end: 102e9d09b;  */

void FUN_102e9cef0(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *unaff_x20;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  func_0x0001000285a8(0x112f255f0,&UNK_10db60408);
  lVar15 = *unaff_x20;
  lVar9 = lVar15;
  func_0x000107c6048c();
  if (*(long *)(lVar15 + 0x10) != 0) {
    lVar1 = lVar15 + 0x40;
    uVar10 = (1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar9 != lVar15 || lVar1 + uVar10 * 8 <= lVar9 + 0x40U) {
      func_0x000107c610b8(lVar9 + 0x40U,lVar1,uVar10 << 3);
    }
    lVar17 = 0;
    *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar15 + 0x10);
    uVar11 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
    uVar10 = 0xffffffffffffffff;
    if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
      uVar10 = ~(-1L << (uVar11 & 0x3f));
    }
    uVar10 = uVar10 & *(ulong *)(lVar15 + 0x40);
    if (uVar10 == 0) goto LAB_102e9cfd0;
    do {
      uVar12 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar10 = uVar10 - 1 & uVar10;
      while( true ) {
        uVar12 = LZCOUNT(uVar12) | lVar17 << 6;
        lVar14 = uVar12 * 0x10;
        puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x30) + lVar14);
        uVar6 = puVar2[1];
        lVar13 = uVar12 * 0x28;
        puVar3 = (undefined8 *)(*(long *)(lVar15 + 0x38) + lVar13);
        uVar5 = *puVar3;
        uVar7 = puVar3[1];
        uVar16 = puVar3[3];
        uVar18 = puVar3[4];
        puVar4 = (undefined8 *)(*(long *)(lVar9 + 0x30) + lVar14);
        uVar20 = puVar3[2];
        uVar19 = puVar3[1];
        *puVar4 = *puVar2;
        puVar4[1] = uVar6;
        puVar2 = (undefined8 *)(*(long *)(lVar9 + 0x38) + lVar13);
        *puVar2 = uVar5;
        puVar2[2] = uVar20;
        puVar2[1] = uVar19;
        puVar2[3] = uVar16;
        puVar2[4] = uVar18;
        func_0x000107c61434();
        func_0x00010006c00c(uVar5,uVar7);
        func_0x000107c61434(uVar16);
        if (uVar10 != 0) break;
LAB_102e9cfd0:
        do {
          lVar13 = lVar17 + 1;
          if (SCARRY8(lVar17,1)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x102e9d09c);
            (*pcVar8)();
          }
          if ((long)(uVar11 + 0x3f >> 6) <= lVar13) goto LAB_102e9d070;
          uVar10 = *(ulong *)(lVar1 + lVar13 * 8);
          lVar17 = lVar17 + 1;
        } while (uVar10 == 0);
        uVar12 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
        uVar10 = uVar10 - 1 & uVar10;
        lVar17 = lVar13;
      }
    } while( true );
  }
LAB_102e9d070:
  func_0x000107c61574(lVar15);
  *unaff_x20 = lVar9;
  return;
}



/* Entry: 102e9d09c; end: 102e9d383;  */

void FUN_102e9d09c(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  code *pcVar9;
  long lVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long *unaff_x20;
  long lVar19;
  ulong *puVar20;
  long lVar21;
  undefined8 uVar22;
  ulong uStack_d0;
  undefined1 auStack_b8 [72];
  
  lVar21 = *unaff_x20;
  lVar1 = *(long *)(lVar21 + 0x18);
  if (*(long *)(lVar21 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001000285a8(0x112f255f0,&UNK_10db60408);
  lVar10 = lVar21;
  func_0x000107c60490(lVar21,lVar1,param_2);
  if (*(long *)(lVar21 + 0x10) == 0) {
LAB_102e9d34c:
    func_0x000107c61574(lVar21);
    *unaff_x20 = lVar10;
    return;
  }
  puVar20 = (ulong *)(lVar21 + 0x40);
  uVar16 = 1L << ((ulong)*(byte *)(lVar21 + 0x20) & 0x3f);
  uStack_d0 = 0xffffffffffffffff;
  if ((*(byte *)(lVar21 + 0x20) & 0x3f) < 6) {
    uStack_d0 = ~(-1L << (uVar16 & 0x3f));
  }
  uStack_d0 = uStack_d0 & *puVar20;
  lVar1 = lVar10 + 0x40;
  lVar13 = 0;
  do {
    if (uStack_d0 == 0) {
      do {
        lVar19 = lVar13 + 1;
        if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x102e9d380);
          (*pcVar9)();
        }
        if ((long)(uVar16 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar16 = 1L << ((ulong)*(byte *)(lVar21 + 0x20) & 0x3f);
            if ((*(byte *)(lVar21 + 0x20) & 0x3f) < 6) {
              *puVar20 = -1L << (uVar16 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar20,uVar16 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar21 + 0x10) = 0;
          }
          goto LAB_102e9d34c;
        }
        uStack_d0 = puVar20[lVar19];
        lVar13 = lVar13 + 1;
      } while (uStack_d0 == 0);
      uVar12 = (uStack_d0 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_d0 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uStack_d0 = uStack_d0 - 1 & uStack_d0;
    }
    else {
      uVar12 = (uStack_d0 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_d0 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uStack_d0 = uStack_d0 - 1 & uStack_d0;
      lVar19 = lVar13;
    }
    uVar12 = LZCOUNT(uVar12) | lVar19 << 6;
    puVar14 = (undefined8 *)(*(long *)(lVar21 + 0x30) + uVar12 * 0x10);
    uVar2 = *puVar14;
    uVar5 = puVar14[1];
    puVar14 = (undefined8 *)(*(long *)(lVar21 + 0x38) + uVar12 * 0x28);
    uVar3 = *puVar14;
    uVar6 = puVar14[1];
    uVar4 = puVar14[2];
    uVar7 = puVar14[3];
    uVar22 = puVar14[4];
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar5);
      func_0x00010006c00c(uVar3,uVar6);
      func_0x000107c61434(uVar7);
    }
    func_0x000107c6068c(auStack_b8,*(undefined8 *)(lVar10 + 0x28));
    puVar11 = auStack_b8;
    func_0x000107c5fb58(puVar11,uVar2,uVar5);
    func_0x000107c606a8();
    uVar18 = -1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
    uVar17 = (ulong)puVar11 & (uVar18 ^ 0xffffffffffffffff);
    uVar15 = uVar17 >> 6;
    uVar12 = -1L << (uVar17 & 0x3f) & (*(ulong *)(lVar1 + uVar15 * 8) ^ 0xffffffffffffffff);
    if (uVar12 == 0) {
      bVar8 = false;
      uVar12 = 0x3f - uVar18 >> 6;
      do {
        uVar17 = uVar15 + 1;
        if ((uVar17 == uVar12) && (bVar8)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x102e9d384);
          (*pcVar9)();
        }
        uVar15 = 0;
        if (uVar17 != uVar12) {
          uVar15 = uVar17;
        }
        bVar8 = (bool)(uVar17 == uVar12 | bVar8);
        uVar17 = *(ulong *)(lVar1 + uVar15 * 8);
      } while (uVar17 == 0xffffffffffffffff);
      uVar17 = ~uVar17;
      uVar12 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar15 << 6;
    }
    else {
      uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar17 & 0x7fffffffffffffc0;
    }
    uVar15 = uVar12 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar15) = 1L << (uVar12 & 0x3f) | *(ulong *)(lVar1 + uVar15);
    puVar14 = (undefined8 *)(*(long *)(lVar10 + 0x30) + uVar12 * 0x10);
    *puVar14 = uVar2;
    puVar14[1] = uVar5;
    puVar14 = (undefined8 *)(*(long *)(lVar10 + 0x38) + uVar12 * 0x28);
    *puVar14 = uVar3;
    puVar14[1] = uVar6;
    puVar14[2] = uVar4;
    puVar14[3] = uVar7;
    puVar14[4] = uVar22;
    *(long *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + 1;
    lVar13 = lVar19;
  } while( true );
}



/* Entry: 102e9d384; end: 102e9d4e7;  */

ulong FUN_102e9d384(undefined8 *param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *unaff_x20;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar9 = *unaff_x20;
  uVar4 = param_2;
  uVar3 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar6 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102e9d45c);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_102e9d09c(lVar6,param_4 & 1);
    uVar4 = param_2;
    uVar7 = param_3;
    func_0x000100029284();
    if (((uint)uVar3 & 1) != ((uint)uVar7 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102e9d424);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_102e9cef0();
    lVar6 = *unaff_x20;
    goto joined_r0x000102e9d470;
  }
  lVar6 = *unaff_x20;
joined_r0x000102e9d470:
  if ((uVar3 & 1) != 0) {
    uVar4 = *(long *)(lVar6 + 0x38) + uVar4 * 0x28;
    FUN_102e9df68(uVar4,param_1,&UNK_1105e25d0);
    return uVar4;
  }
  lVar5 = lVar6 + (uVar4 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar4 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar4 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar8 = (undefined8 *)(*(long *)(lVar6 + 0x38) + uVar4 * 0x28);
  uVar11 = param_1[1];
  uVar10 = *param_1;
  uVar13 = param_1[3];
  uVar12 = param_1[2];
  puVar8[4] = param_1[4];
  puVar8[1] = uVar11;
  *puVar8 = uVar10;
  puVar8[3] = uVar13;
  puVar8[2] = uVar12;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102e9d4e8);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return param_3;
}



/* Entry: 102e9d4e8; end: 102e9d853;  */

void FUN_102e9d4e8(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auStack_a8 [72];
  
  lVar1 = param_2 + 0x40;
  uVar7 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar9 = param_1 + 1 & (uVar7 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0) {
    uVar7 = ~uVar7;
    uVar10 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar7);
    uVar10 = uVar10 + 1 & uVar7;
    do {
      puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 0x10);
      uVar11 = *puVar2;
      uVar4 = puVar2[1];
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_2 + 0x28));
      func_0x000107c61434(uVar4);
      puVar6 = auStack_a8;
      func_0x000107c5fb58(puVar6,uVar11,uVar4);
      func_0x000107c606a8();
      func_0x000107c6142c(uVar4);
      uVar8 = (ulong)puVar6 & uVar7;
      if ((long)param_1 < (long)uVar10) {
        if (uVar8 < uVar10) {
LAB_102e9d5dc:
          if ((long)param_1 < (long)uVar8) goto LAB_102e9d564;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1 * 0x10);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 0x10);
        if (((long)param_1 < (long)uVar9) || (puVar3 + 2 <= puVar2 || param_1 != uVar9)) {
          uVar11 = *puVar3;
          puVar2[1] = puVar3[1];
          *puVar2 = uVar11;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 8);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar9 * 8);
        if ((((long)param_1 < (long)uVar9) || (puVar3 + 1 <= puVar2)) || (param_1 != uVar9)) {
          *puVar2 = *puVar3;
          param_1 = uVar9;
        }
      }
      else if (uVar10 <= uVar8) goto LAB_102e9d5dc;
LAB_102e9d564:
      uVar9 = uVar9 + 1 & uVar7;
    } while ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0);
  }
  uVar7 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar7) = *(ulong *)(lVar1 + uVar7) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x102e9d698);
  (*pcVar5)();
}



/* Entry: 102e9d854; end: 102e9d863;  */

void FUN_102e9d854(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  puVar2 = &UNK_1105e2500;
  uStack_48 = param_1;
  func_0x000107c613fc(&UNK_1105e2500,0x20,7,*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  uStack_58 = 0x102e9de10;
  puStack_50 = puVar2;
  func_0x000107c6157c(param_3);
  (*pcVar1)(&uStack_48,&uStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 102e9d864; end: 102e9d88b;  */

void FUN_102e9d864(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102e9c72c(*(undefined8 *)(unaff_x20 + 0x10),param_1,*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 102e9d88c; end: 102e9d893;  */

void FUN_102e9d88c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_102e9cbe0();
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 102e9d894; end: 102e9d8b3;  */

void FUN_102e9d894(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102e9cac0(*(undefined8 *)(unaff_x20 + 0x10),param_1,*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 102e9d8b4; end: 102e9d917;  */

/* WARNING: Possible PIC construction at 0x000102e9d8c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e9d8cc) */

void FUN_102e9d8b4(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 102e9d918; end: 102e9d97b;  */

undefined8 * FUN_102e9d918(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 102e9d97c; end: 102e9d9bf;  */

undefined8 * FUN_102e9d97c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 102e9d9c0; end: 102e9da47;  */

int FUN_102e9d9c0(ulong *param_1,int param_2)

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



/* Entry: 102e9da48; end: 102e9dd67;  */

/* WARNING: Possible PIC construction at 0x000102e9dae4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e9db88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e9dbb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e9dbd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e9dbe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e9dc0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e9dc3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e9dc50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e9dd18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e9dc54) */
/* WARNING: Removing unreachable block (ram,0x000102e9dc40) */
/* WARNING: Removing unreachable block (ram,0x000102e9dc10) */
/* WARNING: Removing unreachable block (ram,0x000102e9dc7c) */
/* WARNING: Removing unreachable block (ram,0x000102e9dcc8) */
/* WARNING: Removing unreachable block (ram,0x000102e9dc84) */
/* WARNING: Removing unreachable block (ram,0x000102e9dca0) */
/* WARNING: Removing unreachable block (ram,0x000102e9dd60) */
/* WARNING: Removing unreachable block (ram,0x000102e9dc1c) */
/* WARNING: Removing unreachable block (ram,0x000102e9dca4) */
/* WARNING: Removing unreachable block (ram,0x000102e9dd64) */
/* WARNING: Removing unreachable block (ram,0x000102e9dcc0) */
/* WARNING: Removing unreachable block (ram,0x000102e9dc20) */
/* WARNING: Removing unreachable block (ram,0x000102e9dc58) */
/* WARNING: Removing unreachable block (ram,0x000102e9dd5c) */
/* WARNING: Removing unreachable block (ram,0x000102e9dc64) */
/* WARNING: Removing unreachable block (ram,0x000102e9dc78) */
/* WARNING: Removing unreachable block (ram,0x000102e9dbec) */
/* WARNING: Removing unreachable block (ram,0x000102e9dbd8) */
/* WARNING: Removing unreachable block (ram,0x000102e9dbb4) */
/* WARNING: Removing unreachable block (ram,0x000102e9db8c) */
/* WARNING: Removing unreachable block (ram,0x000102e9dc38) */
/* WARNING: Removing unreachable block (ram,0x000102e9db90) */
/* WARNING: Removing unreachable block (ram,0x000102e9dce0) */
/* WARNING: Removing unreachable block (ram,0x000102e9dba4) */
/* WARNING: Removing unreachable block (ram,0x000102e9dae8) */
/* WARNING: Removing unreachable block (ram,0x000102e9daf0) */
/* WARNING: Removing unreachable block (ram,0x000102e9daf4) */
/* WARNING: Removing unreachable block (ram,0x000102e9dd20) */
/* WARNING: Removing unreachable block (ram,0x000102e9daf8) */
/* WARNING: Removing unreachable block (ram,0x000102e9dd58) */
/* WARNING: Removing unreachable block (ram,0x000102e9db00) */
/* WARNING: Removing unreachable block (ram,0x000102e9db18) */
/* WARNING: Removing unreachable block (ram,0x000102e9db28) */
/* WARNING: Removing unreachable block (ram,0x000102e9db3c) */
/* WARNING: Removing unreachable block (ram,0x000102e9dd1c) */
/* WARNING: Removing unreachable block (ram,0x000102e9dd30) */

void FUN_102e9da48(long *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = param_1[1];
  if ((*(long *)(lVar6 + 0x10) != 0) && (lVar4 = *param_1, *(long *)(lVar4 + 0x10) != 0)) {
    lVar1 = *(long *)(lVar6 + 0x20);
    uVar2 = *(ulong *)(lVar6 + 0x28);
    func_0x000107c61434(uVar2);
    func_0x000107c61434(lVar4);
    func_0x000100029284();
    if ((uVar2 & 1) != 0) {
      puVar3 = (undefined8 *)(*(long *)(lVar4 + 0x38) + lVar1 * 0x28);
      uVar5 = puVar3[3];
      func_0x00010006c00c(*puVar3,puVar3[1]);
      func_0x000107c61434(uVar5);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar4);
    return;
  }
  return;
}



/* Entry: 102e9dd68; end: 102e9dd93;  */

void FUN_102e9dd68(void)

{
  long in_x3;
  
  if (in_x3 != 0) {
    func_0x00010006c090();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(in_x3);
    return;
  }
  return;
}



/* Entry: 102e9dd94; end: 102e9ddbb;  */

void FUN_102e9dd94(void)

{
  long unaff_x20;
  
  FUN_102e9da48(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102e9ddbc; end: 102e9de2f;  */

undefined8 FUN_102e9ddbc(undefined8 param_1,undefined8 param_2)

{
  FUN_102e9df68(param_2,param_1,&UNK_1105e25d0);
  return param_2;
}



/* Entry: 102e9de30; end: 102e9de4b;  */

void FUN_102e9de30(long param_1,long param_2)

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



/* Entry: 102e9de4c; end: 102e9dea3;  */

long FUN_102e9de4c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102e9dea4; end: 102e9df67;  */

undefined8 * FUN_102e9dea4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  param_1[4] = param_2[4];
  func_0x000107c61434();
  return param_1;
}



/* Entry: 102e9df68; end: 102e9dfb7;  */

undefined8 * FUN_102e9df68(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[4] = param_2[4];
  return param_1;
}



/* Entry: 102e9dfb8; end: 102e9e057;  */

int FUN_102e9dfb8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102e9e058; end: 102e9e06b;  */

void FUN_102e9e058(void)

{
  FUN_102e9d894();
  return;
}



/* Entry: 102e9e06c; end: 102e9e077;  */

void FUN_102e9e06c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102e9e078; end: 102e9e10b;  */

void FUN_102e9e078(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  func_0x000107c614f0();
  FUN_102e9f9cc(param_1,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}



/* Entry: 102e9e10c; end: 102e9e2bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e9e10c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long extraout_x8;
  undefined8 *puVar6;
  undefined *apuStack_70 [4];
  code *pcStack_50;
  undefined *puStack_48;
  
  lVar2 = 0;
  FUN_102e9fb84();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar6 = (undefined8 *)((long)apuStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  if (param_2 != 0) {
    func_0x000107c61174();
    func_0x0001000d224c(apuStack_70);
    puVar1 = apuStack_70[0];
    if (apuStack_70[0] != (undefined *)0x0) {
      func_0x000107c4edf8(apuStack_70[0]);
      puVar3 = &UNK_1105e2600;
      func_0x000107c613fc(&UNK_1105e2600,0x18,7);
      func_0x000107c61614(puVar3 + 0x10);
      puVar4 = &UNK_1105e2628;
      func_0x000107c613fc(&UNK_1105e2628,0x28,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      *(undefined8 *)(puVar4 + 0x18) = param_1;
      *(long *)(puVar4 + 0x20) = param_2;
      pcStack_50 = FUN_102e9fbd4;
      apuStack_70[0] = PTR___NSConcreteStackBlock_11034bd00;
      apuStack_70[1] = (undefined *)0x42000000;
      apuStack_70[2] = &UNK_1000f6b44;
      apuStack_70[3] = &UNK_1105e2640;
      ppuVar5 = apuStack_70;
      puStack_48 = puVar4;
      func_0x000107c60bc4(ppuVar5);
      puVar3 = puStack_48;
      func_0x000107c61174(param_2);
      func_0x000107c61174(param_1);
      func_0x000107c61574(puVar3);
      func_0x000107c4d888(puVar1);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61170(param_2);
      func_0x000107c615e8(puVar1);
      return;
    }
    func_0x000107c61170(param_2);
  }
  *puVar6 = param_1;
  func_0x000107c6159c(puVar6,lVar2,0);
  func_0x000107c61174(param_1);
  FUN_102e9e2c0(puVar6,0);
  FUN_102e9fb98(puVar6);
  return;
}



/* Entry: 102e9e2c0; end: 102e9e7bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e9e2c0(long param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar10;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar11;
  long lVar12;
  undefined8 uVar13;
  long unaff_x20;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined1 auStack_e0 [8];
  long lStack_d8;
  undefined1 *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = 0x112d36580;
  puVar7 = &UNK_10d9016d0;
  lStack_b0 = param_2;
  lStack_80 = param_1;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  puStack_d0 = auStack_e0 + -extraout_x8;
  FUN_102e9fb84();
  lStack_98 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar15 = (long)(auStack_e0 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = 0;
  lStack_c8 = lVar15 - extraout_x12;
  func_0x000107c5ede0();
  lStack_a8 = *(long *)(lVar4 + -8);
  lStack_a0 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a8 + 0x40));
  lVar10 = (lVar15 - extraout_x12) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_c0 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12_00;
  lVar4 = 0;
  lStack_d8 = lVar10;
  func_0x000107c5eea4();
  lStack_90 = *(long *)(lVar4 + -8);
  lStack_88 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_90 + 0x40));
  lVar10 = lVar10 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar5 = (undefined *)0x0;
  func_0x000107c5eec8();
  lVar4 = *(long *)(puVar5 + -8);
  puVar6 = puVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  lVar14 = lVar10 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5eec4(lVar14);
  func_0x000107c5eeac();
  pcVar11 = *(code **)(lVar4 + 8);
  lVar17 = lVar14;
  puVar9 = puVar5;
  puStack_b8 = puVar6;
  (*pcVar11)(lVar14,puVar5);
  func_0x000107c5eec4(lVar14);
  func_0x000107c5eeac();
  (*pcVar11)(lVar14,puVar5);
  func_0x000107c5eea0(lVar10);
  lVar4 = unaff_x20 + _DAT_112f25828;
  lVar14 = lVar4;
  func_0x000107c61618();
  if (lVar14 == 0) {
LAB_102e9e584:
    func_0x000107c6142c(puVar7);
    func_0x000107c6142c(puVar9);
  }
  else {
    lVar12 = *(long *)(lVar4 + 8);
    lVar4 = lVar14;
    func_0x000107c614f0();
    (**(code **)(lVar12 + 8))();
    if (lVar4 == 0) {
      func_0x000107c615e8(lVar14);
      goto LAB_102e9e584;
    }
    lVar12 = lStack_80;
    FUN_102e9e894(lStack_80,lStack_b0,puStack_b8,puVar7,lVar17,puVar9,lVar10);
    func_0x000107c6142c(puVar7);
    func_0x000107c6142c(puVar9);
    if (lVar12 != 0) {
      puVar7 = PTR_PTR_1126c4f00;
      func_0x000107c610f8();
      lStack_b0 = lVar4;
      func_0x000107c48f0c();
      func_0x000107c5770c();
      uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112f25848);
      lVar4 = *(long *)(unaff_x20 + _DAT_112f25840);
      lVar17 = ((long *)(unaff_x20 + _DAT_112f25840))[1];
      func_0x000107c614f0();
      (**(code **)(lVar17 + 0x10))();
      if (lVar4 != 0) {
        func_0x000107c61170();
      }
      func_0x000107c3ed8c(uVar16);
      func_0x000107c61180();
      lVar17 = *(long *)(unaff_x20 + _DAT_112f25830);
      lVar4 = lVar17;
      func_0x000107c5194c();
      func_0x000107c61180();
      if (lVar4 != 0) {
        func_0x000107c61170();
        FUN_102e9f000();
      }
      uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f25868);
      *(undefined **)(unaff_x20 + _DAT_112f25868) = puVar7;
      func_0x000107c61174();
      puStack_b8 = puVar7;
      func_0x000107c61170(uVar13);
      lVar15 = lStack_c8;
      func_0x000102ea02f4(lStack_80,lStack_c8);
      lVar8 = lVar15;
      func_0x000107c614c4(lVar15,lStack_98);
      lVar3 = lStack_a0;
      lVar2 = lStack_a8;
      lVar4 = lStack_d8;
      if ((int)lVar8 == 1) {
        pcVar11 = *(code **)(lStack_a8 + 0x20);
        (*pcVar11)(lStack_d8,lVar15,lStack_a0);
        puVar1 = puStack_d0;
        lStack_80 = lVar12;
        (*pcVar11)(puStack_d0,lVar4,lVar3);
        (**(code **)(lVar2 + 0x38))(puVar1,0,1,lVar3);
        lVar4 = _DAT_112f25870;
        func_0x000107c61428(unaff_x20 + _DAT_112f25870,auStack_78,0x21,0);
        lVar12 = lStack_80;
        func_0x0001014522e4(puVar1,unaff_x20 + lVar4);
        func_0x000107c614a8(auStack_78);
      }
      else {
        FUN_102e9fb98(lVar15);
      }
      lVar4 = lStack_b0;
      func_0x000107c42c1c(lVar17);
      func_0x000107c61170(puStack_b8);
      func_0x000107c615e8(lVar14);
      func_0x000107c61170(lVar12);
      func_0x000107c61170(uVar16);
      func_0x000107c615e8(lVar4);
      goto LAB_102e9e790;
    }
    func_0x000107c615e8(lVar14);
    func_0x000107c615e8(lVar4);
  }
  func_0x000102ea02f4(lStack_80,lVar15);
  lVar12 = lVar15;
  func_0x000107c614c4(lVar15,lStack_98);
  lVar14 = lStack_a0;
  lVar17 = lStack_a8;
  lVar4 = lStack_c0;
  if ((int)lVar12 != 1) {
    (**(code **)(lStack_90 + 8))(lVar10,lStack_88);
    FUN_102e9fb98(lVar15);
    return;
  }
  (**(code **)(lStack_a8 + 0x20))(lStack_c0,lVar15,lStack_a0);
  FUN_102e9a4cc(lVar4);
  (**(code **)(lVar17 + 8))(lVar4,lVar14);
LAB_102e9e790:
  (**(code **)(lStack_90 + 8))(lVar10,lStack_88);
  return;
}



/* Entry: 102e9e7c0; end: 102e9e893;  */

void FUN_102e9e7c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  undefined8 *puVar2;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = 0;
  FUN_102e9fb84();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = (undefined8 *)((long)&uStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    *puVar2 = param_2;
    func_0x000107c6159c(puVar2,lVar1,0);
    func_0x000107c61174(param_2);
    FUN_102e9e2c0(puVar2,param_3);
    func_0x000107c61170(param_1);
    FUN_102e9fb98(puVar2);
  }
  return;
}



/* Entry: 102e9e894; end: 102e9efff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_102e9e894(double param_1,double param_2,long param_3,long param_4,undefined8 param_5,
             long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  double dVar16;
  undefined8 auStack_f0 [4];
  long alStack_d0 [4];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar2 = 0;
  alStack_d0[3] = param_7;
  uStack_b0 = param_8;
  uStack_a8 = param_9;
  lStack_a0 = param_4;
  uStack_90 = param_5;
  func_0x000107c5ede0();
  lStack_98 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_98 + 0x40));
  lVar12 = (long)alStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  alStack_d0[1] = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - extraout_x12;
  lVar3 = 0;
  FUN_102e9fb84();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar15 = (undefined8 *)(lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar14 = (undefined8 *)((long)puVar15 - extraout_x12_00);
  puVar4 = PTR_PTR_1126afee0;
  func_0x000107c610f8();
  uVar5 = 0x736e656c5f626577;
  func_0x000107c5fadc(0x736e656c5f626577,0xe800000000000000);
  func_0x000107c46120();
  func_0x000107c61170(uVar5);
  if (puVar4 == (undefined *)0x0) {
    return (undefined *)0x0;
  }
  func_0x000102ea02f4(param_3,puVar14);
  puVar6 = puVar14;
  func_0x000107c614c4(puVar14,lVar3);
  alStack_d0[2] = param_6;
  alStack_d0[0] = param_3;
  if ((int)puVar6 != 1) {
    uVar5 = *puVar14;
    func_0x000107c5b078(uVar5);
    dVar16 = param_1;
    func_0x000107c51820(uVar5);
    param_1 = param_1 * dVar16;
    func_0x000107c5b078(uVar5);
    func_0x000107c51820(uVar5);
    func_0x000107c56498(puVar4);
    puVar8 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    func_0x000107c451b0();
    func_0x000107c61180();
    func_0x000107c54d1c(puVar4);
    func_0x000107c61170(puVar8);
    func_0x000107c56484(param_1,param_2 * dVar16,puVar4);
    func_0x000107c563f0(param_1 / (param_2 * dVar16),puVar4);
    func_0x000107c61170(uVar5);
    goto LAB_102e9ec60;
  }
  (**(code **)(lStack_98 + 0x20))(lVar12,puVar14,lVar2);
  puVar8 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  func_0x000107c610f8();
  puVar7 = puVar8;
  func_0x000107c5ed90();
  func_0x000107c48fd4();
  func_0x000107c61170(puVar7);
  puVar7 = puVar8;
  func_0x000107c5ce80();
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  uVar5 = 0;
  func_0x000102ea0338(0,0x112d4f340,&PTR__OBJC_CLASS___AVAssetTrack_1126a60e0);
  puVar8 = puVar7;
  func_0x000107c5fc54(puVar7,uVar5);
  func_0x000107c61170(puVar7);
  if ((ulong)puVar8 >> 0x3e == 0) {
    if (*(long *)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10) == 0) goto LAB_102e9eba4;
LAB_102e9eab0:
    if (((ulong)puVar8 & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102e9f000);
        (*pcVar1)();
      }
      uVar5 = *(undefined8 *)(puVar8 + 0x20);
      func_0x000107c61174(uVar5);
    }
    else {
      uVar5 = 0;
      func_0x000100f95fe8(0,puVar8);
    }
    func_0x000107c6142c(puVar8);
    func_0x000107c4d49c(uVar5);
  }
  else {
    puVar7 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar8) {
      puVar7 = puVar8;
    }
    func_0x000107c60480();
    if (puVar7 != (undefined *)0x0) goto LAB_102e9eab0;
LAB_102e9eba4:
    func_0x000107c6142c(puVar8);
    uVar5 = 0;
    param_1 = 0.0;
    param_2 = 0.0;
  }
  puVar8 = puVar4;
  func_0x000107c56498(puVar4);
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f25858);
  func_0x000107c5ed90();
  func_0x000107c5dde4(uVar13);
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  func_0x000107c5a534(puVar4);
  func_0x000107c615e8(uVar13);
  func_0x000107c56484(param_1,param_2,puVar4);
  if (0.0 < param_2) {
    func_0x000107c563f0(param_1 / param_2,puVar4);
  }
  func_0x000107c529fc(puVar4);
  func_0x000107c61170(uVar5);
  (**(code **)(lStack_98 + 8))(lVar12,lVar2);
  param_6 = alStack_d0[2];
LAB_102e9ec60:
  uVar5 = uStack_90;
  func_0x000107c5fadc(uStack_90,param_6);
  func_0x000107c59474(puVar4);
  func_0x000107c61170(uVar5);
  lVar12 = alStack_d0[3];
  func_0x000107c5fadc(alStack_d0[3],uStack_b0);
  func_0x000107c531fc(puVar4);
  func_0x000107c61170(lVar12);
  func_0x000107c558f0(puVar4);
  func_0x000107c5947c(puVar4);
  func_0x000107c59428(puVar4);
  func_0x000107c58bf0(puVar4);
  func_0x000107c58bf4(puVar4);
  puVar8 = *(undefined **)(unaff_x20 + _DAT_112f25840);
  lVar12 = ((undefined8 *)(unaff_x20 + _DAT_112f25840))[1];
  func_0x000107c614f0();
  puVar7 = puVar8;
  lVar11 = lVar12;
  (**(code **)(lVar12 + 8))();
  if (((uint)lVar11 & 0xff) != 1) {
    puVar7 = puVar4;
    func_0x000107c5312c(puVar4);
  }
  func_0x000107c5ee70();
  func_0x000107c53ac4(puVar4);
  func_0x000107c61170(puVar7);
  func_0x000107c5919c(puVar4);
  puVar7 = puVar8;
  (**(code **)(lVar12 + 0x10))(puVar8,lVar12);
  if (puVar7 != (undefined *)0x0) {
    func_0x000107c57d64(puVar4);
    func_0x000107c61170(puVar7);
  }
  (**(code **)(lVar12 + 0x18))(puVar8,lVar12);
  if (puVar8 != (undefined *)0x0) {
    func_0x000102e9f204(puVar4,puVar8);
    func_0x000107c61170(puVar8);
  }
  func_0x000107c3fe58(puVar4);
  func_0x000102ea02f4(alStack_d0[0],puVar15);
  puVar6 = puVar15;
  func_0x000107c614c4(puVar15,lVar3);
  lVar12 = lStack_98;
  lVar3 = alStack_d0[1];
  if ((int)puVar6 == 1) {
    (**(code **)(lStack_98 + 0x20))(alStack_d0[1],puVar15,lVar2);
    puVar8 = PTR_PTR_1126affc0;
    func_0x000107c61168(PTR_PTR_1126affc0);
    puVar7 = puVar8;
    func_0x000107c5ed90();
    func_0x000107c5dda4(puVar8);
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    (**(code **)(lVar12 + 8))(lVar3,lVar2);
  }
  else {
    uVar5 = *puVar15;
    puVar8 = PTR_PTR_1126affc0;
    func_0x000107c61168(PTR_PTR_1126affc0);
    lStack_88 = *(long *)PTR__kCMTimeZero_110348670;
    uStack_78 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    uStack_80 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    func_0x000107c5d19c();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
  }
  lVar2 = lStack_a0;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f25850);
  func_0x000107c42424(uVar5);
  func_0x000107c61180();
  func_0x000107c54514();
  if (lVar2 != 0) {
    func_0x000107c61174(lVar2);
    func_0x0001000d224c(&lStack_88);
    lVar3 = lStack_88;
    if (lStack_88 != 0) {
      func_0x000107c3d730(lStack_88);
      func_0x000107c615e8(lVar3);
    }
    func_0x000107c61170(lVar2);
  }
  puVar7 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar13 = uStack_90;
  func_0x000107c5fadc(uStack_90,alStack_d0[2]);
  func_0x000107c4d664(puVar7);
  func_0x000107c61170(uVar13);
  puVar9 = PTR_PTR_1126c8220;
  func_0x000107c610f8(PTR_PTR_1126c8220);
  puVar14[-4] = 0;
  puVar14[-3] = 0;
  puVar14[-2] = puVar7;
  func_0x000107c480ac();
  puVar10 = PTR_PTR_1126c8228;
  func_0x000107c61168(PTR_PTR_1126c8228);
  func_0x000107c4f0c4();
  func_0x000107c61180();
  func_0x000107c615e8(uVar5);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar4);
  return puVar10;
}



/* Entry: 102e9f000; end: 102e9f44b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e9f000(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar5 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)puVar5 - extraout_x12;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar1 = _DAT_112f25868;
  lVar7 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (*(long *)(unaff_x20 + _DAT_112f25868) == 0) {
    lVar4 = *(long *)(unaff_x20 + _DAT_112f25830);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar4 == 0) {
      return;
    }
    func_0x000107c61170();
    if (*(long *)(unaff_x20 + lVar1) == 0) {
      uVar3 = 0;
      goto LAB_102e9f0cc;
    }
  }
  func_0x000107c4fd64();
  uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
LAB_102e9f0cc:
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  func_0x000107c61170(uVar3);
  func_0x000107c4ffe8(*(undefined8 *)(unaff_x20 + _DAT_112f25830));
  func_0x000107c61180();
  func_0x000107c615e8();
  lVar1 = _DAT_112f25870;
  func_0x000107c61428(unaff_x20 + _DAT_112f25870,auStack_68,0,0);
  func_0x000100029394(unaff_x20 + lVar1,lVar6);
  lVar4 = lVar6;
  (**(code **)(lVar8 + 0x30))(lVar6,1,lVar2);
  if ((int)lVar4 == 1) {
    func_0x0001000293e4(lVar6);
  }
  else {
    (**(code **)(lVar8 + 0x20))(lVar7,lVar6,lVar2);
    FUN_102e9a4cc(*(undefined8 *)(unaff_x20 + _DAT_112f25860),lVar7);
    (**(code **)(lVar8 + 8))(lVar7,lVar2);
    (**(code **)(lVar8 + 0x38))(puVar5,1,1,lVar2);
    func_0x000107c61428(unaff_x20 + lVar1,auStack_80,0x21,0);
    func_0x0001014522e4(puVar5,unaff_x20 + lVar1);
    func_0x000107c614a8(auStack_80);
  }
  return;
}



/* Entry: 102e9f44c; end: 102e9f4ab; -[_TtC21WebLensesServicesImpl22WebLensSendFlowHandler init] */

void FUN_102e9f44c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("WebLensesServicesImpl.WebLensSendFlowHandler",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e9f478);
  (*pcVar1)();
}



/* Entry: 102e9f4ac; end: 102e9f573; -[_TtC21WebLensesServicesImpl22WebLensSendFlowHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102e9f4ac(long param_1)

{
  long lVar1;
  
  func_0x000102ea02d0(param_1 + _DAT_112f25828);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f25840));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f25830));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f25848));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f25850));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f25838));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f25858));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f25820));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f25860));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f25868));
  param_1 = param_1 + _DAT_112f25870;
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 102e9f574; end: 102e9f593;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e9f574(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112f25828;
  *(undefined8 *)(lVar1 + 8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(lVar1,param_1);
  return;
}



/* Entry: 102e9f594; end: 102e9f637;  */

void FUN_102e9f594(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  undefined1 *puVar3;
  
  lVar1 = 0;
  FUN_102e9fb84();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(puVar3,param_1,lVar2);
  func_0x000107c6159c(puVar3,lVar1,1);
  FUN_102e9e2c0(puVar3,0);
  FUN_102e9fb98(puVar3);
  return;
}


