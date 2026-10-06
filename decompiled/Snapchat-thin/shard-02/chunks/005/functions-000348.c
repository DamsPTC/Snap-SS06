/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101e26bbc; end: 101e26bf7;  */

void FUN_101e26bbc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101e26bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101e26bf8; end: 101e26ccf;  */

uint FUN_101e26bf8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  if (param_1 == 0) {
    return 1;
  }
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = param_1;
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c5faec(lVar2);
      func_0x000107c61170(lVar2);
      goto LAB_101e26c78;
    }
  }
  lVar3 = 0;
  param_2 = 0;
LAB_101e26c78:
  func_0x000107c61174(lVar1);
  FUN_101e2697c(lVar3,param_2,param_1);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar1);
  func_0x000107c6142c(param_2);
  return (uint)lVar3 & 1;
}



/* Entry: 101e26cd0; end: 101e26cd3;  */

void FUN_101e26cd0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 101e26cd4; end: 101e26d1f;  */

void FUN_101e26cd4(long param_1)

{
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR___sBbWV_11034d660 + 0x40;
  puStack_20 = &UNK_10da1a518;
  func_0x000107c61524(param_1,0,2,&puStack_20,param_1 + 0x68);
  return;
}



/* Entry: 101e26d20; end: 101e26d2b;  */

void FUN_101e26d20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e6930c0);
  return;
}



/* Entry: 101e26d2c; end: 101e26d4b;  */

void FUN_101e26d2c(void)

{
  func_0x000107c61168(&PTR_PTR_112e31218);
  return;
}



/* Entry: 101e26d4c; end: 101e26d53;  */

bool FUN_101e26d4c(double param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x20;
  undefined8 *puVar4;
  
  lVar3 = 0x112de84a8;
  func_0x0001000285a8(0x112de84a8,&UNK_10da1a5d0,*(undefined8 *)(unaff_x20 + 0x10));
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = (undefined8 *)(&stack0xffffffffffffffa0 + -extraout_x8);
  uVar1 = param_2[1];
  *puVar4 = *param_2;
  *(undefined8 *)(&stack0xffffffffffffffa8 + -extraout_x8) = uVar1;
  iVar2 = *(int *)(lVar3 + 0x30);
  lVar3 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar3 + -8) + 0x10))((long)puVar4 + (long)iVar2,param_3,lVar3);
  func_0x000107c61434(uVar1);
  func_0x000107c5ee68((long)puVar4 + (long)iVar2);
  func_0x000101e272a0(puVar4,0x112de84a8,&UNK_10da1a5d0);
  return param_1 < 1.0;
}



/* Entry: 101e26d54; end: 101e2700f;  */

void FUN_101e26d54(long param_1,long param_2,long param_3,code *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long extraout_x8;
  undefined8 *puVar9;
  long lVar10;
  long extraout_x8_00;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long extraout_x12;
  code *pcVar17;
  long lVar18;
  long lStack_e0;
  long lStack_c8;
  ulong uStack_68;
  
  lVar7 = 0x112de84a8;
  lStack_e0 = param_2;
  func_0x0001000285a8(0x112de84a8,&UNK_10da1a5d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar5 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar15 = (long)&lStack_e0 + lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar9 = (undefined8 *)(uVar15 - extraout_x12);
  lVar8 = 0;
  func_0x000107c5eea4();
  lVar10 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar11 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar16 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uStack_68 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uStack_68 = ~(-1L << (uVar16 & 0x3f));
  }
  uStack_68 = uStack_68 & *(ulong *)(param_3 + 0x40);
  lStack_c8 = 0;
  lVar14 = 0;
  do {
    if (uStack_68 == 0) {
      do {
        lVar18 = lVar14 + 1;
        if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x101e27010);
          (*pcVar17)();
        }
        if ((long)(uVar16 + 0x3f >> 6) <= lVar18) {
          FUN_101e262ec(param_1,lStack_e0,lStack_c8,param_3);
          return;
        }
        uStack_68 = ((ulong *)(param_3 + 0x40))[lVar18];
        lVar14 = lVar14 + 1;
      } while (uStack_68 == 0);
      uVar12 = (uStack_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_68 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uStack_68 = uStack_68 - 1 & uStack_68;
    }
    else {
      uVar12 = (uStack_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_68 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uStack_68 = uStack_68 - 1 & uStack_68;
      lVar18 = lVar14;
    }
    uVar13 = LZCOUNT(uVar12);
    uVar12 = uVar13 | lVar18 << 6;
    puVar1 = (undefined8 *)(*(long *)(param_3 + 0x30) + uVar12 * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    pcVar17 = *(code **)(lVar10 + 0x10);
    (*pcVar17)(lVar11,*(long *)(param_3 + 0x38) + *(long *)(lVar10 + 0x48) * uVar12,lVar8);
    *puVar9 = uVar2;
    puVar9[1] = uVar3;
    (*pcVar17)((long)puVar9 + (long)*(int *)(lVar7 + 0x30),lVar11,lVar8);
    FUN_101e27250(puVar9,uVar15);
    iVar4 = *(int *)(lVar7 + 0x30);
    func_0x000107c61438(uVar3,2);
    uVar12 = uVar15;
    (*param_4)(uVar15,uVar15 + (long)iVar4);
    func_0x000101e272a0(puVar9,0x112de84a8,&UNK_10da1a5d0);
    pcVar17 = *(code **)(lVar10 + 8);
    (*pcVar17)(uVar15 + (long)iVar4,lVar8);
    func_0x000107c6142c(*(undefined8 *)(&stack0xffffffffffffff28 + lVar5));
    (*pcVar17)(lVar11,lVar8);
    func_0x000107c6142c(uVar3);
    lVar14 = lVar18;
    if ((uVar12 & 1) == 0) {
      uVar12 = (uVar13 & 0xffffffffffffffc0 | lVar18 << 6) >> 3;
      *(ulong *)(param_1 + uVar12) = *(ulong *)(param_1 + uVar12) | 1L << (uVar13 & 0x3f);
      bVar6 = SCARRY8(lStack_c8,1);
      lStack_c8 = lStack_c8 + 1;
      if (bVar6) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x101e26fd8);
        (*pcVar17)();
      }
    }
  } while( true );
}



/* Entry: 101e27010; end: 101e27233;  */

undefined1 * FUN_101e27010(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 *unaff_x21;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_a0 [8];
  undefined1 *puStack_98;
  undefined1 *apuStack_90 [2];
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = (1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)) + 0x3fU >> 6;
  uVar8 = uVar7 * 8;
  uStack_70 = param_2;
  uStack_68 = param_3;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 0xe) {
    func_0x000107c6157c(param_1);
  }
  else {
    iVar2 = 2;
    func_0x000100029b9c(2,0xf,4,0);
    func_0x000107c6157c(param_1);
    if ((iVar2 == 0) || (uVar6 = uVar8, func_0x000107c61594(uVar8,8), (uVar6 & 1) == 0)) {
      func_0x000107c6158c(uVar8,0xffffffffffffffff);
      func_0x000107c6157c(param_1);
      FUN_101e266e0(apuStack_90,uVar8,uVar7,param_1,FUN_101e27234,auStack_80,&puStack_98);
      puVar4 = apuStack_90[0];
      if (unaff_x21 != (undefined1 *)0x0) {
        puVar4 = puStack_98;
      }
      func_0x000107c61590(uVar8,0xffffffffffffffff,0xffffffffffffffff);
      puVar1 = puVar4;
      goto joined_r0x000101e271e8;
    }
  }
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar4 = auStack_a0 + -(uVar8 + 0xf & 0x3ffffffffffffff0);
  func_0x000107c60ee4(puVar4,uVar8);
  FUN_101e26d54(puVar4,uVar7,param_1,param_2,param_3);
  puVar1 = unaff_x21;
joined_r0x000101e271e8:
  if (unaff_x21 == (undefined1 *)0x0) {
    func_0x000107c61574(param_1);
    uVar3 = (uint)param_1;
  }
  else {
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      uVar5 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(&puStack_98,uVar5,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(param_1);
    uVar3 = (uint)param_1;
    puVar4 = puVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    func_0x000107c60e78();
    FUN_101e26594();
    return (undefined1 *)(ulong)(uVar3 & 1);
  }
  return puVar4;
}



/* Entry: 101e27234; end: 101e2724f;  */

uint FUN_101e27234(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_101e26594(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18))
  ;
  return (uint)param_1 & 1;
}



/* Entry: 101e27250; end: 101e272df;  */

undefined8 FUN_101e27250(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112de84a8;
  func_0x0001000285a8(0x112de84a8,&UNK_10da1a5d0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101e272e0; end: 101e2731f;  */

void FUN_101e272e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 101e27320; end: 101e273e3;  */

/* WARNING: Possible PIC construction at 0x000101e273c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e273c4) */

void FUN_101e27320(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [24];
  
  lVar2 = 0;
  FUN_101e26d2c();
  func_0x000107c613fc();
  lVar3 = 0x112e31150;
  func_0x0001000285a8(0x112e31150,&UNK_10da1a4b0);
  func_0x000107c613fc();
  func_0x000107c61474();
  puVar1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puVar4 = (undefined8 *)(lVar3 + 0x70);
  *puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  func_0x000107c61428(puVar4,auStack_68,1,0);
  *puVar4 = puVar1;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  *(long *)(lVar2 + 0x20) = lVar3;
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_2);
  return;
}



/* Entry: 101e273e4; end: 101e273eb;  */

/* WARNING: Possible PIC construction at 0x000101e273c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e273c4) */

void FUN_101e273e4(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 *puVar6;
  undefined1 auStack_68 [24];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = 0;
  FUN_101e26d2c();
  func_0x000107c613fc();
  lVar5 = 0x112e31150;
  func_0x0001000285a8(0x112e31150,&UNK_10da1a4b0);
  func_0x000107c613fc();
  func_0x000107c61474();
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puVar6 = (undefined8 *)(lVar5 + 0x70);
  *puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  func_0x000107c61428(puVar6,auStack_68,1,0);
  *puVar6 = puVar3;
  *(undefined8 *)(lVar4 + 0x18) = uVar2;
  *(long *)(lVar4 + 0x20) = lVar5;
  *(undefined8 *)(lVar4 + 0x10) = uVar1;
  *param_1 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar1);
  return;
}



/* Entry: 101e273ec; end: 101e27407;  */

/* WARNING: Possible PIC construction at 0x000101e273f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e273fc) */

void FUN_101e273ec(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101e27408; end: 101e27453;  */

void FUN_101e27408(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e27454; end: 101e2754b;  */

void FUN_101e27454(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c40870();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c4d1f8();
  func_0x000107c61180();
  puVar3 = &UNK_11048bbe8;
  func_0x000107c613fc(&UNK_11048bbe8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x0001000285a8(0x112e31288,&UNK_10da1a5e0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  pcVar4 = FUN_101e2754c;
  func_0x0001000bdd8c(FUN_101e2754c,puVar3);
  uVar5 = 0;
  func_0x00010028f490(0);
  func_0x000107c610f8();
  func_0x0001006ed59c(pcVar4,uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 101e2754c; end: 101e27567;  */

/* WARNING: Possible PIC construction at 0x000101e273c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e273c4) */

void FUN_101e2754c(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 *puVar6;
  undefined1 auStack_68 [24];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = 0;
  FUN_101e26d2c();
  func_0x000107c613fc();
  lVar5 = 0x112e31150;
  func_0x0001000285a8(0x112e31150,&UNK_10da1a4b0);
  func_0x000107c613fc();
  func_0x000107c61474();
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puVar6 = (undefined8 *)(lVar5 + 0x70);
  *puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  func_0x000107c61428(puVar6,auStack_68,1,0);
  *puVar6 = puVar3;
  *(undefined8 *)(lVar4 + 0x18) = uVar2;
  *(long *)(lVar4 + 0x20) = lVar5;
  *(undefined8 *)(lVar4 + 0x10) = uVar1;
  *param_1 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar1);
  return;
}



/* Entry: 101e27568; end: 101e275a7;  */

void FUN_101e27568(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e31368 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da1a630;
  func_0x000107c61520(&UNK_10da1a630,&UNK_11048bca8);
  puRam0000000112e31368 = puVar1;
  return;
}



/* Entry: 101e275a8; end: 101e27653;  */

void FUN_101e275a8(void)

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



/* Entry: 101e27654; end: 101e2768b;  */

void FUN_101e27654(ulong *param_1,ulong *param_2)

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



/* Entry: 101e2768c; end: 101e276d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e2768c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e31378) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101e276d8; end: 101e2771f; -[_TtC24MusicGrapheneServicesAPI37MusicTrackLoadGrapheneLoggingServices trackLoadLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e276d8(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000107c61174();
  func_0x000100083b20(&uStack_28);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_28);
  return;
}



/* Entry: 101e27720; end: 101e2777f; -[_TtC24MusicGrapheneServicesAPI37MusicTrackLoadGrapheneLoggingServices init] */

void FUN_101e27720(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MusicGrapheneServicesAPI.MusicTrackLoadGrapheneLoggingServices",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e2774c);
  (*pcVar1)();
}



/* Entry: 101e27780; end: 101e277cf; -[_TtC24MusicGrapheneServicesAPI37MusicTrackLoadGrapheneLoggingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e27780(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e31378));
  return;
}



/* Entry: 101e277d0; end: 101e2781f;  */

void FUN_101e277d0(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112e313a8 != 0) {
    return;
  }
  puVar1 = &UNK_11048bde8;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112e313a8 = param_1;
  return;
}



/* Entry: 101e27820; end: 101e278b7;  */

void FUN_101e27820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  *(undefined8 *)(unaff_x20 + 0x40) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_10;
  *(undefined8 *)(unaff_x20 + 0x48) = param_9;
  *(undefined8 *)(unaff_x20 + 0x58) = param_11;
  return;
}



/* Entry: 101e278b8; end: 101e27967;  */

/* WARNING: Possible PIC construction at 0x000101e27940: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e27944) */

void FUN_101e278b8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined1 auStack_68 [40];
  
  func_0x0001006f7bf0();
  func_0x000107c61180();
  func_0x0001000d224c(auStack_68);
  lVar1 = 0;
  func_0x000101e2eb5c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x60) = 0;
  *(undefined8 *)(lVar1 + 0x58) = 0;
  *(undefined8 *)(lVar1 + 0x70) = 0;
  *(undefined8 *)(lVar1 + 0x68) = 0;
  *(undefined8 *)(lVar1 + 0x10) = param_2;
  *(undefined8 *)(lVar1 + 0x18) = param_4;
  *(undefined8 *)(lVar1 + 0x20) = param_5;
  FUN_101e27b54(auStack_68,lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x50) = param_7;
  *param_1 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_4);
  return;
}



/* Entry: 101e27968; end: 101e27973;  */

/* WARNING: Possible PIC construction at 0x000101e27940: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e27944) */

void FUN_101e27968(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_68 [40];
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x0001006f7bf0(uVar4,*(undefined8 *)(unaff_x20 + 0x18),uVar1,uVar2,
                      *(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61180();
  func_0x0001000d224c(auStack_68);
  lVar5 = 0;
  func_0x000101e2eb5c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x60) = 0;
  *(undefined8 *)(lVar5 + 0x58) = 0;
  *(undefined8 *)(lVar5 + 0x70) = 0;
  *(undefined8 *)(lVar5 + 0x68) = 0;
  *(undefined8 *)(lVar5 + 0x10) = uVar4;
  *(undefined8 *)(lVar5 + 0x18) = uVar1;
  *(undefined8 *)(lVar5 + 0x20) = uVar2;
  FUN_101e27b54(auStack_68,lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x50) = uVar3;
  *param_1 = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar1);
  return;
}



/* Entry: 101e27974; end: 101e27a2f;  */

void FUN_101e27974(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  
  func_0x000107c5c800();
  func_0x000107c61180();
  func_0x000107c5b12c();
  func_0x000107c61180();
  lVar1 = 0;
  func_0x000101e29318();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x48) = 0x14;
  *(undefined8 *)(lVar1 + 0x40) = 4;
  *(undefined8 *)(lVar1 + 0x10) = param_2;
  *(undefined8 *)(lVar1 + 0x18) = param_3;
  *(undefined8 *)(lVar1 + 0x20) = param_4;
  *(undefined8 *)(lVar1 + 0x28) = param_5;
  *(undefined8 *)(lVar1 + 0x30) = param_6;
  *(undefined8 *)(lVar1 + 0x38) = param_7;
  *param_1 = lVar1;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_7);
  return;
}



/* Entry: 101e27a30; end: 101e27a4f;  */

void FUN_101e27a30(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c5c800();
  func_0x000107c61180();
  func_0x000107c5b12c();
  func_0x000107c61180();
  lVar7 = 0;
  func_0x000101e29318();
  func_0x000107c613fc();
  *(undefined8 *)(lVar7 + 0x48) = 0x14;
  *(undefined8 *)(lVar7 + 0x40) = 4;
  *(undefined8 *)(lVar7 + 0x10) = uVar1;
  *(undefined8 *)(lVar7 + 0x18) = uVar3;
  *(undefined8 *)(lVar7 + 0x20) = uVar5;
  *(undefined8 *)(lVar7 + 0x28) = uVar6;
  *(undefined8 *)(lVar7 + 0x30) = uVar2;
  *(undefined8 *)(lVar7 + 0x38) = uVar4;
  *param_1 = lVar7;
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar4);
  return;
}



/* Entry: 101e27a50; end: 101e27b2f;  */

/* WARNING: Possible PIC construction at 0x000101e27a5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e27a6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e27a7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e27a8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e27a9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e27a90) */
/* WARNING: Removing unreachable block (ram,0x000101e27a80) */
/* WARNING: Removing unreachable block (ram,0x000101e27a70) */
/* WARNING: Removing unreachable block (ram,0x000101e27a60) */
/* WARNING: Removing unreachable block (ram,0x000101e27aa0) */

void FUN_101e27a50(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101e27b30; end: 101e27b53;  */

void FUN_101e27b30(undefined8 *param_1,undefined8 param_2)

{
  func_0x000100794fbc();
  *param_1 = param_2;
  return;
}



/* Entry: 101e27b54; end: 101e27b6b;  */

undefined8 * FUN_101e27b54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 101e27b6c; end: 101e27db7;  */

undefined8 FUN_101e27b6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = &UNK_11048c080;
  func_0x000107c613fc(&UNK_11048c080,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = unaff_x20;
  pcStack_40 = FUN_101e2ac54;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  uStack_50 = 0x101e2b1f8;
  puStack_48 = &UNK_11048c098;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c615f0(param_2);
  func_0x000107c61574(puVar1);
  func_0x000107c436a8(param_1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  return param_1;
}



/* Entry: 101e27db8; end: 101e2811b; -[_TtC23SCMusicSyncServicesImpl23MusicSyncSnapDocFactory createSoundSyncSnapDocWithAssets:performer:] */

void FUN_101e27db8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_101e2b178(0,0x112d5dfc0,&PTR__OBJC_CLASS___PHAsset_1126bd898);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c615f0(param_4);
  func_0x000107c6157c(param_1);
  uVar1 = param_3;
  FUN_101e296a8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61574(param_1);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101e2811c; end: 101e28317;  */

undefined * FUN_101e2811c(undefined *param_1,undefined *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar2 = PTR_PTR_1126b3080;
  func_0x000107c61168(PTR_PTR_1126b3080);
  func_0x000107c43480();
  func_0x000107c61180();
  func_0x000107c5c52c(param_2);
  func_0x000107c61180();
  func_0x0001080694d8();
  func_0x000107c61180();
  if (param_1 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    uVar4 = 0x636973756d;
    func_0x000107c5fadc(0x636973756d,0xe500000000000000);
    uVar5 = 0xd000000000000042;
    func_0x000107c5fadc(0xd000000000000042,0x800000010f013570);
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    puVar7 = puVar6;
    func_0x000107c5ed2c(puVar6);
    func_0x000107c61170(puVar6);
    func_0x000107c451ac(puVar3);
    func_0x000107c61180();
  }
  else {
    func_0x000107c56420();
    puVar7 = PTR_PTR_1126b25d0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c563e8();
    puVar3 = puVar7;
    func_0x000107c4f4ec();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e28314);
      (*pcVar1)();
    }
    puVar6 = puVar3;
    func_0x000107c498f0();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e28318);
      (*pcVar1)();
    }
    func_0x000107c4c978(param_1);
    func_0x000107c5a494(puVar6);
    func_0x000107c61170(puVar6);
    puVar3 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    func_0x000107c451b0();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    puVar2 = param_2;
    param_2 = param_1;
  }
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(puVar7);
  return puVar3;
}



/* Entry: 101e28318; end: 101e2871b;  */

undefined * FUN_101e28318(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long alStack_70 [3];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  lVar10 = param_2;
  func_0x00010011df08();
  func_0x000107c61180();
  lVar11 = lVar10;
  if (lVar2 == 0) {
    func_0x000107c5faec();
    lVar11 = lVar10;
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar10);
  }
  alStack_70[0] = 0;
  func_0x000107c5e908();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = alStack_70[0];
  if (param_2 == 0) {
    param_2 = 0;
    func_0x000107c5faec(0);
    func_0x000107c61174(lVar2);
    func_0x000107c61174();
    func_0x000107c5fadc(param_2,lVar11);
    func_0x000107c6142c(lVar11);
    if (lVar2 == 0) goto LAB_101e28504;
LAB_101e283c4:
    func_0x000107c61170(lVar2);
    func_0x000107c61170(param_2);
LAB_101e283d4:
    puVar6 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    uVar3 = 0x636973756d;
    func_0x000107c5fadc(0x636973756d,0xe500000000000000);
    uVar7 = 0xd000000000000044;
    func_0x000107c5fadc(0xd000000000000044,0x800000010f0135c0);
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar7);
    puVar9 = puVar4;
    func_0x000107c5ed2c(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c451ac(puVar6);
    func_0x000107c61180();
    param_3 = lVar2;
  }
  else {
    func_0x000107c61174(alStack_70[0]);
    func_0x000107c61174();
    if (lVar2 != 0) goto LAB_101e283c4;
LAB_101e28504:
    puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x000107c610f8();
    func_0x000107c48af4();
    func_0x000107c61170(param_2);
    if (puVar4 == (undefined *)0x0) goto LAB_101e283d4;
    puVar5 = PTR_PTR_1126b3080;
    func_0x000107c61168(PTR_PTR_1126b3080);
    func_0x000107c43480();
    func_0x000107c61180();
    func_0x000107c5c52c(param_3);
    func_0x000107c61180();
    func_0x000107c60a44(alStack_70,0x4008000000000000,600);
    func_0x00010806926c(param_1,alStack_70);
    func_0x000107c61180();
    if (param_1 == 0) {
      puVar6 = PTR_PTR_1126ae558;
      func_0x000107c61168(PTR_PTR_1126ae558);
      uVar7 = 0x636973756d;
      func_0x000107c5fadc(0x636973756d,0xe500000000000000);
      uVar3 = 0xd000000000000042;
      func_0x000107c5fadc(0xd000000000000042,0x800000010f013610);
      puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
      func_0x000107c42a5c();
      func_0x000107c61180();
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar3);
      puVar9 = puVar8;
      func_0x000107c5ed2c(puVar8);
      func_0x000107c61170(puVar8);
      func_0x000107c451ac(puVar6);
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar5);
    }
    else {
      func_0x000107c56420();
      puVar9 = PTR_PTR_1126b25d0;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c563e8();
      puVar6 = puVar9;
      func_0x000107c4f4ec();
      func_0x000107c61180();
      if (puVar6 == (undefined *)0x0) goto LAB_101e28714;
      puVar8 = puVar6;
      func_0x000107c498f0();
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e2871c);
        (*pcVar1)();
      }
      func_0x000107c5a494(puVar8);
      func_0x000107c61170(puVar8);
      puVar6 = PTR_PTR_1126ae558;
      func_0x000107c61168(PTR_PTR_1126ae558);
      func_0x000107c451b0();
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(param_3);
      param_3 = param_1;
    }
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar6;
  }
  func_0x000107c60e78();
LAB_101e28714:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e28718);
  (*pcVar1)();
}



/* Entry: 101e2871c; end: 101e288df;  */

void FUN_101e2871c(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uStack_68;
  
  uStack_68 = 0;
  uVar4 = 0;
  FUN_101e2b178(0,0x112d55598,&PTR_PTR_1126b25d0);
  func_0x000107c5fc4c(param_2,&uStack_68,uVar4);
  uVar2 = uStack_68;
  if (uStack_68 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101e288e0);
    (*pcVar3)();
  }
  uVar11 = uStack_68 & 0xffffffffffffff8;
  if (uStack_68 >> 0x3e == 0) {
    uVar9 = *(ulong *)(uVar11 + 0x10);
  }
  else {
    uVar9 = uStack_68;
    if (-1 < (long)uStack_68) {
      uVar9 = uVar11;
    }
    func_0x000107c60480();
  }
  if (uVar9 != 0) {
    uVar10 = 0;
    do {
      if ((uVar2 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar11 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101e28868);
          (*pcVar3)();
        }
        uVar5 = *(ulong *)(uVar2 + uVar10 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar5 = uVar10;
        FUN_101e294ec(uVar10,uVar2,&PTR_PTR_1126b25d0,0x112d55598);
      }
      uVar1 = uVar10 + 1;
      if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101e28864);
        (*pcVar3)();
      }
      uVar6 = uVar5;
      func_0x000107c4abb4();
      uVar8 = uVar5;
      if ((int)uVar6 == 1) {
        puVar7 = PTR_PTR_1126affe8;
        func_0x000107c61168(PTR_PTR_1126affe8);
        func_0x000107c4b838();
        func_0x000107c61180();
        uVar8 = param_3;
        func_0x000107c3d7f4(param_3);
        func_0x000107c61180();
        func_0x000107c61170(uVar5);
        func_0x000107c61170(puVar7);
      }
      func_0x000107c61170(uVar8);
      uVar10 = uVar10 + 1;
    } while (uVar1 != uVar9);
  }
  func_0x000107c6142c(uVar2);
  puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar4 = 0;
  FUN_101e2b178(0,0x112d4b600,&PTR__OBJC_CLASS___NSNull_1126aef28);
  param_1[3] = uVar4;
  *param_1 = puVar7;
  return;
}



/* Entry: 101e288e0; end: 101e29273;  */

/* WARNING: Removing unreachable block (ram,0x000101e28acc) */

undefined * FUN_101e288e0(double param_1,undefined *param_2,undefined1 *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long extraout_x8;
  long lVar13;
  undefined1 *puVar14;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined1 *puStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lVar1 = 0;
  puVar7 = param_3;
  func_0x000107c5fb10();
  lVar13 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar14 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = PTR_PTR_1126b3098;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = param_2;
  func_0x000107c5cd58(param_2);
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c5cd58();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar3 = puVar4;
  func_0x000107c5cda4(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c2bb50(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c59fd0(puVar2);
  puVar3 = param_2;
  func_0x000107c5cd58(param_2);
  func_0x000107c61180();
  func_0x000107c5bb48();
  func_0x000107c61170(puVar3);
  func_0x000107c60a44(&uStack_88,param_1 / 1000.0,600);
  func_0x000107c60a3c(&uStack_88);
  func_0x000107c597bc(puVar2);
  puVar3 = param_2;
  func_0x000107c5cd58();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c5cd58();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar3 = puVar4;
  func_0x000107c4276c();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  if (puVar3 != (undefined *)0x0) {
    puVar4 = puVar3;
    func_0x000107c5ee30(puVar3);
    func_0x000107c61170(puVar3);
    func_0x000107c610f8(PTR_PTR_1126b25f8);
    func_0x00010006c00c(puVar4,puVar7);
    puVar3 = puVar4;
    func_0x000100feee8c(puVar4,puVar7);
    func_0x00010006c090(puVar4,puVar7);
    func_0x000107c5386c(puVar2);
    func_0x000107c61170(puVar3);
    func_0x00010006c090(puVar4);
  }
  puVar3 = param_2;
  func_0x000107c5cd58();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c5cd58();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar3 = puVar4;
  func_0x000107c3e3d4();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  puVar4 = puVar3;
  func_0x000107c4a18c();
  func_0x000107c61170(puVar3);
  if ((int)puVar4 == 0) {
    puVar3 = param_2;
    func_0x000107c5cd58(param_2);
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c3e3b4();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    puVar3 = puVar4;
    func_0x000107c5ee30(puVar4);
    func_0x000107c61170(puVar4);
    puVar4 = puVar3;
    func_0x000107c5ee20(puVar3,puVar7);
    func_0x00010006c090(puVar3);
    func_0x000107c529f0(puVar2);
  }
  else {
    puVar4 = PTR_PTR_1126b30a0;
    func_0x000107c610f8(PTR_PTR_1126b30a0);
    func_0x000107c453e4();
    puVar3 = param_2;
    func_0x000107c5cd58();
    func_0x000107c61180();
    puVar5 = puVar3;
    func_0x000107c5cd58();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    puVar3 = puVar5;
    func_0x000107c3e3d4();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    puVar5 = puVar3;
    func_0x000107c5d7e8();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    if (puVar5 == (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
      func_0x000107c5faec(0);
      puVar11 = puVar7;
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar7);
      puVar7 = puVar11;
    }
    puStack_98 = puVar14;
    func_0x000107c5a120(puVar4);
    func_0x000107c61170(puVar5);
    puVar3 = param_2;
    func_0x000107c5cd58();
    func_0x000107c61180();
    puVar5 = puVar3;
    func_0x000107c5cd58();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    puVar3 = puVar5;
    func_0x000107c3e3d4();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    puVar5 = puVar3;
    func_0x000107c427c0();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    if (puVar5 != (undefined *)0x0) {
      puVar3 = puVar5;
      func_0x000107c4a8c4(puVar5);
      func_0x000107c61180();
      func_0x000107c61170(puVar5);
      puVar6 = puVar3;
      func_0x000107c5ee30(puVar3);
      func_0x000107c61170(puVar3);
      puVar5 = puVar6;
      func_0x000107c5ee20(puVar6,puVar7);
      func_0x00010006c090(puVar6);
    }
    func_0x000107c54580(puVar4);
    func_0x000107c61170(puVar5);
    puVar3 = param_2;
    func_0x000107c5cd58();
    func_0x000107c61180();
    puVar5 = puVar3;
    func_0x000107c5cd58();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    puVar3 = puVar5;
    func_0x000107c3e3d4();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    puVar5 = puVar3;
    func_0x000107c427c0();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    if (puVar5 != (undefined *)0x0) {
      puVar3 = puVar5;
      func_0x000107c4a804();
      func_0x000107c61180();
      func_0x000107c61170(puVar5);
      if (puVar3 == (undefined *)0x0) {
        puVar5 = (undefined *)0x0;
      }
      else {
        puVar6 = puVar3;
        func_0x000107c5ee30(puVar3);
        func_0x000107c61170(puVar3);
        puVar5 = puVar6;
        func_0x000107c5ee20(puVar6,puVar7);
        func_0x00010006c090(puVar6);
      }
    }
    func_0x000107c5457c(puVar4);
    func_0x000107c61170(puVar5);
    func_0x000107c57cd0(puVar2);
    puVar14 = puStack_98;
  }
  func_0x000107c61170(puVar4);
  puVar3 = puVar2;
  func_0x000107c41214();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    uVar8 = 0x636973756d;
    func_0x000107c5fadc(0x636973756d,0xe500000000000000);
    uVar9 = 0xd000000000000031;
    func_0x000107c5fadc(0xd000000000000031,0x800000010f0137a0);
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    puVar5 = puVar4;
    func_0x000107c5ed2c(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c451ac(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
  }
  else {
    puVar4 = puVar3;
    puStack_a0 = puVar2;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar3);
    puVar2 = PTR_PTR_1126b3080;
    func_0x000107c61168();
    puStack_b0 = puVar7;
    puStack_a8 = puVar4;
    func_0x000107c5ee20(puVar4,puVar7);
    func_0x000107c412fc();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    puVar7 = param_3;
    puStack_b8 = puVar2;
    func_0x000107c5c52c();
    func_0x000107c61180();
    puVar2 = PTR_PTR_1126b25c8;
    func_0x000107c610f8(PTR_PTR_1126b25c8);
    func_0x000107c453e4();
    puStack_c0 = puVar7;
    func_0x000107c56420();
    func_0x000107c5293c(puVar2);
    puVar4 = PTR_PTR_1126b25d0;
    func_0x000107c610f8(PTR_PTR_1126b25d0);
    func_0x000107c453e4();
    func_0x000107c563e8();
    puVar3 = PTR_PTR_1126affe8;
    func_0x000107c61168(PTR_PTR_1126affe8);
    puVar5 = puVar3;
    func_0x000107c44410();
    func_0x000107c61180();
    puVar7 = param_3;
    func_0x000107c3d7f4(param_3);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar7);
    FUN_101e2ac5c();
    puVar5 = puVar3;
    func_0x000107c44410(puVar3);
    func_0x000107c61180();
    puStack_c8 = param_2;
    puStack_98 = param_3;
    func_0x000107c3d7f4(param_3);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(param_3);
    puVar5 = PTR_PTR_1126b37e0;
    func_0x000107c610f8(PTR_PTR_1126b37e0);
    func_0x000107c453e4();
    uStack_88 = 0x7d7b;
    uStack_80 = 0xe200000000000000;
    puVar6 = puVar5;
    func_0x000107c5fb04(puVar14);
    func_0x000100e8b654();
    uVar12 = 0;
    puVar7 = puVar14;
    func_0x000107c60214(puVar14,0,PTR___sSSN_11034da80,puVar6);
    (**(code **)(lVar13 + 8))(puVar14,lVar1);
    if (uVar12 >> 0x3c < 0xf) {
      puVar14 = puVar7;
      func_0x000107c5ee20(puVar7,uVar12);
      func_0x0001000b44c0(puVar7,uVar12);
    }
    else {
      puVar14 = (undefined1 *)0x0;
    }
    func_0x000107c55b9c(puVar5);
    func_0x000107c61170(puVar14);
    puVar6 = PTR_PTR_1126b0cc0;
    func_0x000107c610f8(PTR_PTR_1126b0cc0);
    func_0x000107c453e4();
    func_0x000107c5667c();
    puVar10 = PTR_PTR_1126b25d0;
    func_0x000107c610f8(PTR_PTR_1126b25d0);
    func_0x000107c453e4();
    func_0x000107c53b78();
    func_0x000107c44410(puVar3);
    func_0x000107c61180();
    puVar7 = puStack_98;
    func_0x000107c3d7f4(puStack_98);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar7);
    puVar3 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    func_0x000107c451b0();
    func_0x000107c61180();
    func_0x000107c61170(puStack_b8);
    func_0x000107c61170(puStack_c0);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puStack_c8);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar10);
    func_0x00010006c090(puStack_a8,puStack_b0);
    puVar5 = puStack_a0;
  }
  func_0x000107c61170(puVar5);
  return puVar3;
}



/* Entry: 101e29274; end: 101e292cb;  */

void FUN_101e29274(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  uVar3 = param_2;
  (*pcVar1)();
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101e292cc; end: 101e29353;  */

void FUN_101e292cc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e29354; end: 101e29483;  */

undefined * FUN_101e29354(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101e29484);
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
    FUN_101e29484();
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
    uVar5 = 0x112d74dc8;
    func_0x0001000285a8(0x112d74dc8,&UNK_10d9355f0);
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



/* Entry: 101e29484; end: 101e294eb;  */

/* WARNING: Possible PIC construction at 0x000101e294b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e294b8) */
/* WARNING: Removing unreachable block (ram,0x000101e294bc) */

void FUN_101e29484(void)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar2 == 0) {
    puVar3 = (ulong *)0x112d76cc8;
    plVar5 = (long *)&UNK_10d936770;
  }
  else {
    puVar3 = (ulong *)0x112d74dc8;
    plVar5 = (long *)&UNK_10d9355f0;
    unaff_x30 = 0x101e294b8;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    puVar4 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = (ulong)puVar4;
  }
  return;
}



/* Entry: 101e294ec; end: 101e296a7;  */

ulong FUN_101e294ec(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101e295d0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101e295d4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_101e2b178(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101e296a8);
  (*pcVar2)();
}



/* Entry: 101e296a8; end: 101e2a5fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101e296a8(undefined *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined8 *unaff_x20;
  undefined8 uVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined8 uStack_108;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *apuStack_80 [2];
  
  uVar19 = *unaff_x20;
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar23 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar23 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar23 = param_1;
    }
    func_0x000107c60480();
  }
  if (puVar23 + -4 < (undefined *)0x11) {
    puVar18 = PTR_PTR_1126b25c0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar8 = puVar18;
    func_0x000107c4e8d8();
    func_0x000107c61180();
    if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101e2a5f8);
      (*pcVar3)();
    }
    puVar4 = puVar8;
    func_0x000107c4e8ec();
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101e2a5fc);
      (*pcVar3)();
    }
    puVar8 = PTR_PTR_1126b25e8;
    func_0x000107c610f8(PTR_PTR_1126b25e8);
    func_0x000107c453e4();
    func_0x000107c55388(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar8);
    puVar22 = (undefined *)unaff_x20[2];
    puVar8 = puVar22;
    func_0x000107c42d48();
    func_0x000107c61180();
    puVar4 = puVar8;
    func_0x000107c42428();
    func_0x000107c61180();
    func_0x000107c615e8(puVar8);
    puVar20 = (undefined *)unaff_x20[3];
    puVar8 = puVar20;
    func_0x000107c5ddc0();
    func_0x000107c61180();
    puVar5 = puVar8;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    if (puVar5 == (undefined *)0x0) {
      puVar23 = PTR_PTR_1126ae558;
      func_0x000107c61168(PTR_PTR_1126ae558);
      uVar19 = 0x636973756d;
      func_0x000107c5fadc(0x636973756d,0xe500000000000000);
      uVar21 = 0xd00000000000002e;
      func_0x000107c5fadc(0xd00000000000002e,0x800000010f0133b0);
      puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
      func_0x000107c42a5c();
      func_0x000107c61180();
      func_0x000107c61170(uVar19);
      func_0x000107c61170(uVar21);
      puVar8 = puVar5;
      func_0x000107c5ed2c(puVar5);
      func_0x000107c61170(puVar5);
      func_0x000107c451ac(puVar23);
      func_0x000107c61180();
      func_0x000107c61170(puVar18);
    }
    else {
      puVar6 = (undefined *)unaff_x20[4];
      func_0x000107c5c734();
      func_0x000107c61180();
      if (puVar6 == (undefined *)0x0) {
        puVar23 = PTR_PTR_1126ae558;
        func_0x000107c61168(PTR_PTR_1126ae558);
        uVar21 = 0x636973756d;
        func_0x000107c5fadc(0x636973756d,0xe500000000000000);
        uVar19 = 0xd000000000000034;
        func_0x000107c5fadc(0xd000000000000034,0x800000010f0133e0);
        puVar20 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
        func_0x000107c42a5c();
        func_0x000107c61180();
        func_0x000107c61170(uVar21);
        func_0x000107c61170(uVar19);
        puVar8 = puVar20;
        func_0x000107c5ed2c(puVar20);
        func_0x000107c61170(puVar20);
        func_0x000107c451ac(puVar23);
        func_0x000107c61180();
        func_0x000107c61170(puVar18);
        func_0x000107c615e8(puVar4);
        puVar4 = puVar5;
      }
      else {
        func_0x000107c450b4();
        func_0x000107c61180();
        puVar7 = puVar20;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(puVar20);
        if (puVar7 == (undefined *)0x0) {
          puVar23 = PTR_PTR_1126ae558;
          func_0x000107c61168(PTR_PTR_1126ae558);
          uVar19 = 0x636973756d;
          func_0x000107c5fadc(0x636973756d,0xe500000000000000);
          uVar21 = 0xd00000000000002e;
          func_0x000107c5fadc(0xd00000000000002e,0x800000010f013420);
          puVar20 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
          func_0x000107c42a5c();
          func_0x000107c61180();
          func_0x000107c61170(uVar19);
          func_0x000107c61170(uVar21);
          puVar8 = puVar20;
          func_0x000107c5ed2c(puVar20);
          func_0x000107c61170(puVar20);
          func_0x000107c451ac(puVar23);
          func_0x000107c61180();
          func_0x000107c61170(puVar18);
          func_0x000107c615e8(puVar4);
          func_0x000107c615e8(puVar5);
          puVar4 = puVar6;
        }
        else {
          puVar8 = *(undefined **)(unaff_x20[6] + _DAT_113081210);
          func_0x000107c41e94();
          func_0x000107c61180();
          puVar20 = puVar8;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(puVar8);
          if (puVar20 == (undefined *)0x0) {
            puVar23 = PTR_PTR_1126ae558;
            func_0x000107c61168(PTR_PTR_1126ae558);
            uVar21 = 0x636973756d;
            func_0x000107c5fadc(0x636973756d,0xe500000000000000);
            uVar19 = 0xd000000000000044;
            func_0x000107c5fadc(0xd000000000000044,0x800000010f013450);
            puVar20 = PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
            func_0x000107c42a5c();
            func_0x000107c61180();
            func_0x000107c61170(uVar21);
            func_0x000107c61170(uVar19);
            puVar8 = puVar20;
            func_0x000107c5ed2c(puVar20);
            func_0x000107c61170(puVar20);
            func_0x000107c451ac(puVar23);
            func_0x000107c61180();
            func_0x000107c61170(puVar18);
            func_0x000107c615e8(puVar4);
            func_0x000107c615e8(puVar5);
            func_0x000107c615e8(puVar6);
            puVar4 = puVar7;
          }
          else {
            lVar9 = unaff_x20[5];
            func_0x000107c5c734();
            func_0x000107c61180();
            if (lVar9 != 0) {
              func_0x0001000d224c(apuStack_80);
              puVar14 = apuStack_80[0];
              func_0x000107c44348();
              func_0x000107c61180();
              puVar8 = &UNK_11048bea0;
              func_0x000107c613fc(&UNK_11048bea0,0x18,7);
              *(undefined **)(puVar8 + 0x10) = apuStack_80[0];
              pcStack_90 = FUN_101e2a5fc;
              puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
              puStack_a8 = (undefined *)0x42000000;
              puStack_a0 = (undefined *)0x101e2b1ec;
              puStack_98 = &UNK_11048beb8;
              ppuVar10 = &puStack_b0;
              puStack_88 = puVar8;
              func_0x000107c60bc4(ppuVar10);
              puVar8 = puStack_88;
              func_0x000107c615f0(apuStack_80[0]);
              func_0x000107c61574(puVar8);
              puVar11 = puVar14;
              func_0x000107c436a8();
              func_0x000107c61180();
              func_0x000107c615e8(apuStack_80[0]);
              func_0x000107c60bd0(ppuVar10);
              func_0x000107c61170(puVar14);
              apuStack_80[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
              puVar14 = puVar23;
              func_0x000101e29338(0,puVar23,0);
              puVar8 = (undefined *)0x0;
              uStack_108 = 0xd00000000000001a;
              do {
                puVar2 = apuStack_80[0];
                if (((ulong)param_1 & 0xc000000000000001) == 0) {
                  if (*(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10) <= puVar8) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x101e2a5b0);
                    (*pcVar3)();
                  }
                  puVar12 = *(undefined **)(param_1 + (long)puVar8 * 8 + 0x20);
                  func_0x000107c61174();
                }
                else {
                  puVar12 = puVar8;
                  puVar14 = param_1;
                  FUN_101d9e5a8();
                }
                uVar21 = 0x636973756d;
                puVar13 = puVar12;
                func_0x000107c4ca5c();
                if (puVar13 == (undefined *)0x1) {
                  uVar21 = uStack_108;
                  func_0x000107c5fadc(0xd00000000000001a,0x800000010f013520);
                  puVar14 = puVar7;
                  func_0x000107c3ab88();
                  func_0x000107c61180();
                  func_0x000107c61170(uVar21);
                  puVar15 = puVar14;
                  func_0x000107c43bf4();
                  func_0x000107c61180();
                  func_0x000107c61170(puVar14);
                  puVar13 = &UNK_11048bfe0;
                  puVar14 = (undefined *)0x20;
                  func_0x000107c613fc(&UNK_11048bfe0,0x20,7);
                  *(undefined **)(puVar13 + 0x10) = puVar6;
                  *(undefined **)(puVar13 + 0x18) = puVar4;
                  pcStack_90 = (code *)0x101e2a658;
                  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
                  puStack_a8 = (undefined *)0x42000000;
                  puStack_a0 = (undefined *)0x101e2b1f4;
                  puStack_98 = &UNK_11048bff8;
                  ppuVar10 = &puStack_b0;
                  puStack_88 = puVar13;
                  func_0x000107c60bc4(ppuVar10);
                  puVar13 = puStack_88;
                  func_0x000107c615f0(puVar4);
                  func_0x000107c615f0(puVar6);
                  func_0x000107c61574(puVar13);
                  puVar13 = puVar15;
                  func_0x000107c436a8();
                  func_0x000107c61180();
                  func_0x000107c60bd0(ppuVar10);
                }
                else if (puVar13 == (undefined *)0x2) {
                  func_0x00010011df08();
                  func_0x000107c61180();
                  puVar15 = puVar13;
                  func_0x000107c5faec();
                  func_0x000107c61170(puVar13);
                  puStack_b0 = puVar15;
                  puStack_a8 = puVar14;
                  func_0x000107c5fb78(0x34706d2e,0xe400000000000000);
                  puVar14 = puStack_a8;
                  puVar13 = puStack_b0;
                  puVar15 = puStack_a8;
                  func_0x000107c5fadc(puStack_b0,puStack_a8);
                  func_0x000107c6142c(puVar14);
                  puVar14 = puVar6;
                  func_0x000107c43440();
                  func_0x000107c61180();
                  func_0x000107c61170(puVar13);
                  if (puVar14 == (undefined *)0x0) {
                    puVar14 = (undefined *)0x0;
                    func_0x000107c5faec(0);
                    func_0x000107c5fadc();
                    func_0x000107c6142c(puVar15);
                  }
                  puVar17 = PTR_PTR_1126b3070;
                  func_0x000107c610f8(PTR_PTR_1126b3070);
                  func_0x000107c494bc();
                  func_0x000107c61170(puVar14);
                  func_0x000107c42544(puVar20);
                  func_0x000107c552fc(puVar17);
                  func_0x000107c61174(puVar17);
                  uVar21 = 0xd000000000000023;
                  func_0x000107c5fadc(0xd000000000000023,0x800000010f013540);
                  puStack_98 = (undefined *)0x0;
                  puStack_a0 = (undefined *)0x0;
                  puStack_88 = (undefined *)0x0;
                  pcStack_90 = (code *)0x0;
                  puStack_a8 = (undefined *)0x0;
                  puStack_b0 = (undefined *)0x0;
                  puVar14 = puVar5;
                  func_0x000107c42c00();
                  func_0x000107c61180();
                  func_0x000107c61170(puVar17);
                  func_0x000107c61170(uVar21);
                  puVar15 = puVar14;
                  func_0x000107c43bf4();
                  func_0x000107c61180();
                  func_0x000107c61170(puVar14);
                  puVar13 = &UNK_11048c030;
                  puVar14 = (undefined *)0x18;
                  func_0x000107c613fc(&UNK_11048c030,0x18,7);
                  *(undefined **)(puVar13 + 0x10) = puVar4;
                  pcStack_90 = (code *)0x101e2a660;
                  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
                  puStack_a8 = (undefined *)0x42000000;
                  puStack_a0 = (undefined *)0x101e2b1f0;
                  puStack_98 = &UNK_11048c048;
                  ppuVar10 = &puStack_b0;
                  puStack_88 = puVar13;
                  func_0x000107c60bc4(ppuVar10);
                  puVar13 = puStack_88;
                  func_0x000107c615f0(puVar4);
                  func_0x000107c61574(puVar13);
                  puVar13 = puVar15;
                  func_0x000107c436a8();
                  func_0x000107c61180();
                  func_0x000107c61170(puVar17);
                  func_0x000107c60bd0(ppuVar10);
                }
                else {
                  puVar13 = PTR_PTR_1126ae558;
                  func_0x000107c61168();
                  func_0x000107c5fadc(0x636973756d,0xe500000000000000);
                  uVar16 = 0xd000000000000030;
                  puVar14 = (undefined *)0x800000010f0134e0;
                  func_0x000107c5fadc(0xd000000000000030);
                  puVar17 = PTR__OBJC_CLASS___NSError_1126ae858;
                  func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
                  func_0x000107c42a5c();
                  func_0x000107c61180();
                  func_0x000107c61170(uVar21);
                  func_0x000107c61170(uVar16);
                  puVar15 = puVar17;
                  func_0x000107c5ed2c(puVar17);
                  func_0x000107c61170(puVar17);
                  func_0x000107c451ac();
                  func_0x000107c61180();
                }
                func_0x000107c61170(puVar12);
                func_0x000107c61170(puVar15);
                uVar1 = *(ulong *)(puVar2 + 0x10);
                puVar12 = (undefined *)(uVar1 + 1);
                apuStack_80[0] = puVar2;
                if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
                  puVar14 = puVar12;
                  func_0x000101e29338(1 < *(ulong *)(puVar2 + 0x18),puVar12,1);
                }
                puVar2 = apuStack_80[0];
                puVar8 = puVar8 + 1;
                *(undefined **)(apuStack_80[0] + 0x10) = puVar12;
                *(undefined **)(apuStack_80[0] + uVar1 * 8 + 0x20) = puVar13;
              } while (puVar23 != puVar8);
              if ((ulong)apuStack_80[0] >> 0x3e == 0) {
                func_0x000107c61434(apuStack_80[0]);
                func_0x000107c605f8();
                puVar23 = puVar2;
              }
              else {
                puVar23 = (undefined *)((ulong)apuStack_80[0] & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < apuStack_80[0]) {
                  puVar23 = apuStack_80[0];
                }
                func_0x000107c61434(apuStack_80[0]);
                uVar21 = 0x112d74dc8;
                func_0x0001000285a8(0x112d74dc8,&UNK_10d9355f0);
                func_0x000107c60458(puVar23,uVar21);
                func_0x000107c6142c(puVar2);
              }
              puVar14 = PTR_PTR_1126ae558;
              func_0x000107c61168(PTR_PTR_1126ae558);
              uVar21 = 0x112d74dc8;
              func_0x0001000285a8(0x112d74dc8,&UNK_10d9355f0);
              puVar8 = puVar23;
              func_0x000107c5fc48(puVar23,uVar21);
              func_0x000107c6142c(puVar23);
              func_0x000107c3db10(puVar14);
              func_0x000107c61180();
              func_0x000107c61170(puVar8);
              puVar23 = &UNK_11048bef0;
              func_0x000107c613fc(&UNK_11048bef0,0x18,7);
              *(undefined **)(puVar23 + 0x10) = puVar4;
              puVar8 = PTR___NSConcreteStackBlock_11034bd00;
              pcStack_90 = (code *)0x101e2a620;
              puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
              puStack_a8 = (undefined *)0x42000000;
              puStack_a0 = &UNK_10117fbac;
              puStack_98 = &UNK_11048bf08;
              ppuVar10 = &puStack_b0;
              puStack_88 = puVar23;
              func_0x000107c60bc4(ppuVar10);
              puVar23 = puStack_88;
              func_0x000107c615f0(puVar4);
              func_0x000107c61574(puVar23);
              puVar12 = puVar14;
              func_0x000107c4c280(puVar14);
              func_0x000107c61180();
              func_0x000107c6142c(puVar2);
              func_0x000107c60bd0(ppuVar10);
              func_0x000107c61170(puVar14);
              puVar23 = &UNK_11048bf40;
              func_0x000107c613fc(&UNK_11048bf40,0x28,7);
              *(undefined **)(puVar23 + 0x10) = puVar11;
              *(undefined **)(puVar23 + 0x18) = puVar4;
              *(undefined8 *)(puVar23 + 0x20) = uVar19;
              pcStack_90 = FUN_101e2a628;
              puStack_b0 = puVar8;
              puStack_a8 = (undefined *)0x42000000;
              puStack_a0 = (undefined *)0x101e2b1e8;
              puStack_98 = &UNK_11048bf58;
              ppuVar10 = &puStack_b0;
              puStack_88 = puVar23;
              func_0x000107c60bc4(ppuVar10);
              puVar23 = puStack_88;
              func_0x000107c615f0(puVar4);
              func_0x000107c61174(puVar11);
              func_0x000107c61574(puVar23);
              puVar14 = puVar12;
              func_0x000107c436a8(puVar12);
              func_0x000107c61180();
              func_0x000107c60bd0(ppuVar10);
              func_0x000107c61170(puVar12);
              puVar23 = &UNK_11048bf90;
              func_0x000107c613fc(&UNK_11048bf90,0x30,7);
              *(undefined **)(puVar23 + 0x10) = puVar4;
              *(long *)(puVar23 + 0x18) = lVar9;
              *(undefined **)(puVar23 + 0x20) = puVar22;
              *(undefined8 *)(puVar23 + 0x28) = uVar19;
              pcStack_90 = FUN_101e2a64c;
              puStack_b0 = puVar8;
              puStack_a8 = (undefined *)0x42000000;
              puStack_a0 = (undefined *)0x101e27d64;
              puStack_98 = &UNK_11048bfa8;
              ppuVar10 = &puStack_b0;
              puStack_88 = puVar23;
              func_0x000107c60bc4(ppuVar10);
              puVar23 = puStack_88;
              func_0x000107c615f0(puVar4);
              func_0x000107c615f0(lVar9);
              func_0x000107c61174(puVar22);
              func_0x000107c61574(puVar23);
              puVar23 = puVar14;
              func_0x000107c436a8(puVar14);
              func_0x000107c61180();
              func_0x000107c61170(puVar18);
              func_0x000107c615e8(lVar9);
              func_0x000107c61170(puVar11);
              func_0x000107c615e8(puVar4);
              func_0x000107c615e8(puVar20);
              func_0x000107c615e8(puVar6);
              func_0x000107c615e8(puVar7);
              func_0x000107c615e8(puVar5);
              func_0x000107c60bd0(ppuVar10);
              func_0x000107c61170(puVar14);
              return puVar23;
            }
            puVar23 = PTR_PTR_1126ae558;
            func_0x000107c61168(PTR_PTR_1126ae558);
            uVar21 = 0x636973756d;
            func_0x000107c5fadc(0x636973756d,0xe500000000000000);
            uVar19 = 0xd000000000000035;
            func_0x000107c5fadc(0xd000000000000035,0x800000010f0134a0);
            puVar22 = PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
            func_0x000107c42a5c();
            func_0x000107c61180();
            func_0x000107c61170(uVar21);
            func_0x000107c61170(uVar19);
            puVar8 = puVar22;
            func_0x000107c5ed2c(puVar22);
            func_0x000107c61170(puVar22);
            func_0x000107c451ac(puVar23);
            func_0x000107c61180();
            func_0x000107c61170(puVar18);
            func_0x000107c615e8(puVar4);
            func_0x000107c615e8(puVar5);
            func_0x000107c615e8(puVar6);
            func_0x000107c615e8(puVar7);
            puVar4 = puVar20;
          }
        }
      }
    }
    func_0x000107c615e8(puVar4);
  }
  else {
    puVar23 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    uVar21 = 0x636973756d;
    func_0x000107c5fadc(0x636973756d,0xe500000000000000);
    uVar19 = 0xd00000000000003c;
    func_0x000107c5fadc(0xd00000000000003c,0x800000010f013370);
    puVar18 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(uVar21);
    func_0x000107c61170(uVar19);
    puVar8 = puVar18;
    func_0x000107c5ed2c(puVar18);
    func_0x000107c61170(puVar18);
    func_0x000107c451ac(puVar23);
    func_0x000107c61180();
  }
  func_0x000107c61170(puVar8);
  return puVar23;
}



/* Entry: 101e2a5fc; end: 101e2a627;  */

undefined * FUN_101e2a5fc(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined *puStack_58;
  undefined1 auStack_50 [32];
  
  puVar9 = *(undefined **)(unaff_x20 + 0x10);
  lVar2 = param_1;
  func_0x000107c5cdc4();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e28110);
    (*pcVar1)();
  }
  lVar3 = lVar2;
  func_0x000107c5ce7c();
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) {
    puVar9 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    uVar4 = 0x636973756d;
    func_0x000107c5fadc(0x636973756d,0xe500000000000000);
    uVar8 = 0xd000000000000039;
    func_0x000107c5fadc(0xd000000000000039,0x800000010f0137e0);
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar8);
    puVar7 = puVar6;
    func_0x000107c5ed2c(puVar6);
    func_0x000107c61170(puVar6);
    func_0x000107c451ac(puVar9);
  }
  else {
    lVar2 = param_1;
    func_0x000107c5cdc4();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e28114);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    func_0x000107c5ce7c();
    func_0x000107c61170(lVar2);
    if (lVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e28108);
      (*pcVar1)();
    }
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e2810c);
      (*pcVar1)();
    }
    FUN_1016e7c78(lVar3);
    func_0x000107c5cdc4();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e28118);
      (*pcVar1)();
    }
    lVar2 = param_1;
    func_0x000107c5ce78();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e2811c);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    func_0x000107c4d9a4(lVar2);
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000107c60234(auStack_50,lVar3);
    func_0x000107c615e8(lVar3);
    uVar4 = 0;
    FUN_101e2b178(0,0x112d52668,&PTR_PTR_1126bfa50);
    ppuVar5 = &puStack_58;
    func_0x000107c6147c(ppuVar5,auStack_50,PTR___sypN_11034f1a8 + 8,uVar4,6);
    if (((ulong)ppuVar5 & 1) == 0) {
      puVar9 = PTR_PTR_1126ae558;
      func_0x000107c61168(PTR_PTR_1126ae558);
      uVar4 = 0x636973756d;
      func_0x000107c5fadc(0x636973756d,0xe500000000000000);
      uVar8 = 0xd000000000000038;
      func_0x000107c5fadc(0xd000000000000038,0x800000010f013820);
      puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
      func_0x000107c42a5c();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar8);
      puVar7 = puVar6;
      func_0x000107c5ed2c(puVar6);
      func_0x000107c61170(puVar6);
      func_0x000107c451ac(puVar9);
    }
    else {
      func_0x000107c5cda4(puStack_58);
      func_0x000107c44154(puVar9);
      puVar7 = puStack_58;
    }
  }
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  return puVar9;
}



/* Entry: 101e2a628; end: 101e2a64b;  */

void FUN_101e2a628(void)

{
  long unaff_x20;
  
  FUN_101e27b6c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101e2a64c; end: 101e2a667;  */

undefined * FUN_101e2a64c(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  func_0x000107c615f0();
  puVar1 = PTR_PTR_1126a6138;
  func_0x000107c61168(PTR_PTR_1126a6138);
  puVar2 = param_1;
  func_0x000107c6148c(param_1,puVar1);
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c615e8(param_1);
    puVar2 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    uVar3 = 0x636973756d;
    func_0x000107c5fadc(0x636973756d,0xe500000000000000);
    uVar4 = 0xd00000000000005a;
    func_0x000107c5fadc(0xd00000000000005a,0x800000010f013660);
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    puVar5 = puVar1;
    func_0x000107c5ed2c(puVar1);
    func_0x000107c61170(puVar1);
    func_0x000107c451ac(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
  }
  else {
    FUN_101e2a668();
    func_0x000107c615e8(param_1);
  }
  return puVar2;
}



/* Entry: 101e2a668; end: 101e2ac53;  */

/* WARNING: Removing unreachable block (ram,0x000101e28acc) */

undefined *
FUN_101e2a668(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
             undefined *param_5)

{
  undefined1 auVar1 [16];
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  long extraout_x8;
  long extraout_x8_00;
  long lVar18;
  undefined1 *puVar19;
  long lVar20;
  undefined *unaff_d8;
  undefined8 unaff_d9;
  undefined1 auStack_160 [8];
  undefined8 auStack_158 [8];
  long alStack_118 [17];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = (undefined *)0x0;
  func_0x000107c5eea4();
  lVar18 = *(long *)(puVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar2 = -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar8 = PTR_PTR_1126b3088;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c3e734(param_2);
  func_0x000107c61180();
  func_0x000107c56880(puVar8);
  func_0x000107c61170(param_2);
  puVar4 = PTR_PTR_1126b3090;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c57444();
  puStack_88 = puVar8;
  func_0x000107c52c34(puVar4);
  puStack_80 = (undefined *)0x0;
  puVar12 = param_4;
  func_0x000107c4b698();
  func_0x000107c61180();
  puVar11 = puStack_80;
  uVar9 = 0;
  FUN_101e2b178(0,0x112e315b0,&PTR_PTR_1126bc468);
  puVar10 = puVar12;
  func_0x000107c5fc54(puVar12,uVar9);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61170(puVar12);
  puVar8 = param_5;
  if (puVar11 == (undefined *)0x0) {
    if ((ulong)puVar10 >> 0x3e == 0) {
      puVar12 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar12 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar10) {
        puVar12 = puVar10;
      }
      func_0x000107c60480();
    }
    if (puVar12 == (undefined *)0x1) {
      if (((ulong)puVar10 & 0xc000000000000001) == 0) {
        if (*(long *)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101e2ac40);
          (*pcVar3)();
        }
        uVar9 = *(undefined8 *)(puVar10 + 0x20);
        func_0x000107c61174(uVar9);
        puVar11 = param_1;
      }
      else {
        uVar9 = 0;
        FUN_101e294ec(0,puVar10,&PTR_PTR_1126bc468,0x112e315b0);
        puVar11 = param_1;
      }
      func_0x000107c6142c(puVar10);
      uVar6 = param_3;
      func_0x000107c5b198(param_3);
      func_0x000107c61180();
      puStack_80 = (undefined *)0x0;
      func_0x000107c3e044();
      func_0x000107c61180();
      func_0x000107c61170(uVar9);
      func_0x000107c61170(uVar6);
      puVar13 = puStack_80;
      if (puStack_80 == (undefined *)0x0) {
        puVar8 = PTR_PTR_1126bcf30;
        func_0x000107c610f8();
        func_0x000107c453e4();
        func_0x000107c5eea0(auStack_90 + lVar2);
        func_0x000107c5ee8c();
        (**(code **)(lVar18 + 8))(auStack_90 + lVar2,puVar7);
        if (0x7fefffffffffffff < ((ulong)puVar11 & 0x7fffffffffffffff)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101e2ac44);
          (*pcVar3)();
        }
        if ((double)puVar11 <= -1.0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101e2ac48);
          (*pcVar3)();
        }
        param_1 = (undefined *)0x43f0000000000000;
        if (1.8446744073709552e+19 <= (double)puVar11) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101e2ac4c);
          (*pcVar3)();
        }
        auVar1._8_8_ = 0;
        auVar1._0_8_ = (long)(double)puVar11;
        if (SUB168(auVar1 * ZEXT816(1000),8) != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101e2ac50);
          (*pcVar3)();
        }
        func_0x000107c59340(puVar8);
        func_0x000107c59df8(param_4);
        puVar12 = param_5;
        func_0x000107c42d48();
        func_0x000107c61180();
        puVar13 = puVar12;
        func_0x000107c42428();
        func_0x000107c61180();
        func_0x000107c615e8(puVar12);
        puVar14 = PTR_PTR_1126ae558;
        func_0x000107c61168();
        func_0x000107c615f0(puVar13);
        func_0x000107c451b0();
        func_0x000107c61180();
        func_0x000107c61170(param_4);
        func_0x000107c61170(puVar8);
        func_0x000107c615ec(puVar13,2);
        unaff_d8 = puVar11;
        goto LAB_101e2abcc;
      }
      puVar14 = PTR_PTR_1126ae558;
      func_0x000107c61168();
      func_0x000107c61174();
      uVar9 = 0x636973756d;
      func_0x000107c5fadc(0x636973756d,0xe500000000000000);
      puVar8 = (undefined *)0xd00000000000003c;
      param_1 = puVar11;
      func_0x000107c5fadc(0xd00000000000003c,0x800000010f013720);
      puVar11 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x000107c61168();
      func_0x000107c42a5c();
      func_0x000107c61180();
      func_0x000107c61170(uVar9);
      func_0x000107c61170(puVar8);
      puVar15 = puVar11;
      func_0x000107c5ed2c();
      func_0x000107c61170(puVar11);
      func_0x000107c451ac();
      func_0x000107c61180();
      func_0x000107c61170(puVar13);
      func_0x000107c61170(param_4);
      puVar7 = puVar15;
    }
    else {
      func_0x000107c6142c(puVar10);
      puVar14 = PTR_PTR_1126ae558;
      func_0x000107c61168();
      uVar9 = 0x636973756d;
      func_0x000107c5fadc(0x636973756d,0xe500000000000000);
      puVar7 = (undefined *)0xd000000000000053;
      func_0x000107c5fadc(0xd000000000000053,0x800000010f0136c0);
      param_4 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x000107c61168();
      func_0x000107c42a5c();
      func_0x000107c61180();
      func_0x000107c61170(uVar9);
      func_0x000107c61170(puVar7);
      puVar15 = param_4;
      func_0x000107c5ed2c();
      func_0x000107c61170(param_4);
      func_0x000107c451ac();
      func_0x000107c61180();
      puVar13 = puVar15;
    }
  }
  else {
    func_0x000107c61170(puVar11);
    func_0x000107c6142c(puVar10);
    puVar14 = PTR_PTR_1126ae558;
    func_0x000107c61168();
    uVar9 = 0x636973756d;
    func_0x000107c5fadc(0x636973756d,0xe500000000000000);
    puVar7 = (undefined *)0xd000000000000036;
    func_0x000107c5fadc(0xd000000000000036,0x800000010f013760);
    param_4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168();
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    func_0x000107c61170(puVar7);
    puVar15 = param_4;
    func_0x000107c5ed2c();
    func_0x000107c61170(param_4);
    func_0x000107c451ac();
    func_0x000107c61180();
    func_0x000107c61170(puVar11);
    puVar13 = puVar15;
    param_5 = puVar12;
  }
  func_0x000107c61170(puVar15);
LAB_101e2abcc:
  func_0x000107c61170(puVar4);
  puVar12 = puStack_88;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar14;
  }
  func_0x000107c60e78();
  uVar9 = *(undefined8 *)(puVar14 + 0x10);
  uVar6 = *(undefined8 *)(puVar14 + 0x18);
  *(undefined8 *)((long)alStack_118 + lVar2 + 0x18) = unaff_d9;
  *(undefined **)((long)alStack_118 + lVar2 + 0x20) = unaff_d8;
  *(undefined **)((long)alStack_118 + lVar2 + 0x28) = param_5;
  *(undefined **)((long)alStack_118 + lVar2 + 0x30) = puVar10;
  *(undefined **)((long)alStack_118 + lVar2 + 0x38) = puVar11;
  *(undefined **)((long)alStack_118 + lVar2 + 0x40) = puVar8;
  *(undefined **)((long)alStack_118 + lVar2 + 0x48) = param_4;
  *(undefined **)((long)alStack_118 + lVar2 + 0x50) = puVar7;
  *(undefined **)((long)alStack_118 + lVar2 + 0x58) = puVar13;
  *(undefined **)((long)alStack_118 + lVar2 + 0x60) = puVar4;
  *(undefined **)((long)alStack_118 + lVar2 + 0x68) = puVar14;
  *(undefined8 *)((long)alStack_118 + lVar2 + 0x70) = param_3;
  *(undefined1 **)((long)alStack_118 + lVar2 + 0x78) = &stack0xfffffffffffffff0;
  *(code **)((long)alStack_118 + lVar2 + 0x80) = FUN_101e2ac54;
  lVar18 = 0;
  uVar16 = uVar9;
  func_0x000107c5fb10(0,uVar9,uVar6);
  lVar20 = *(long *)(lVar18 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar20 + 0x40));
  puVar19 = auStack_160 + (lVar2 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar8 = PTR_PTR_1126b3098;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar7 = puVar12;
  func_0x000107c5cd58(puVar12);
  func_0x000107c61180();
  puVar11 = puVar7;
  func_0x000107c5cd58();
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  puVar7 = puVar11;
  func_0x000107c5cda4(puVar11);
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  func_0x000107c2bb50(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c59fd0(puVar8);
  puVar7 = puVar12;
  func_0x000107c5cd58(puVar12);
  func_0x000107c61180();
  func_0x000107c5bb48();
  func_0x000107c61170(puVar7);
  func_0x000107c60a44((long)alStack_118 + lVar2,(double)param_1 / 1000.0,600);
  *(undefined8 *)((long)alStack_118 + lVar2) = *(undefined8 *)((long)alStack_118 + lVar2);
  *(undefined8 *)((long)alStack_118 + lVar2 + 8) = *(undefined8 *)((long)alStack_118 + lVar2 + 8);
  *(undefined8 *)((long)alStack_118 + lVar2 + 0x10) =
       *(undefined8 *)((long)alStack_118 + lVar2 + 0x10);
  func_0x000107c60a3c((long)alStack_118 + lVar2);
  func_0x000107c597bc(puVar8);
  puVar7 = puVar12;
  func_0x000107c5cd58();
  func_0x000107c61180();
  puVar11 = puVar7;
  func_0x000107c5cd58();
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  puVar7 = puVar11;
  func_0x000107c4276c();
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  if (puVar7 != (undefined *)0x0) {
    puVar11 = puVar7;
    func_0x000107c5ee30(puVar7);
    func_0x000107c61170(puVar7);
    func_0x000107c610f8(PTR_PTR_1126b25f8);
    func_0x00010006c00c(puVar11,uVar16);
    puVar7 = puVar11;
    func_0x000100feee8c(puVar11,uVar16);
    func_0x00010006c090(puVar11,uVar16);
    func_0x000107c5386c(puVar8);
    func_0x000107c61170(puVar7);
    func_0x00010006c090(puVar11);
  }
  puVar7 = puVar12;
  func_0x000107c5cd58();
  func_0x000107c61180();
  puVar11 = puVar7;
  func_0x000107c5cd58();
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  puVar7 = puVar11;
  func_0x000107c3e3d4();
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  puVar11 = puVar7;
  func_0x000107c4a18c();
  func_0x000107c61170(puVar7);
  if ((int)puVar11 == 0) {
    puVar7 = puVar12;
    func_0x000107c5cd58(puVar12);
    func_0x000107c61180();
    puVar11 = puVar7;
    func_0x000107c3e3b4();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    puVar7 = puVar11;
    func_0x000107c5ee30(puVar11);
    func_0x000107c61170(puVar11);
    puVar11 = puVar7;
    func_0x000107c5ee20(puVar7,uVar16);
    func_0x00010006c090(puVar7);
    func_0x000107c529f0(puVar8);
  }
  else {
    puVar11 = PTR_PTR_1126b30a0;
    func_0x000107c610f8(PTR_PTR_1126b30a0);
    func_0x000107c453e4();
    puVar7 = puVar12;
    func_0x000107c5cd58();
    func_0x000107c61180();
    puVar4 = puVar7;
    func_0x000107c5cd58();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    puVar7 = puVar4;
    func_0x000107c3e3d4();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    puVar4 = puVar7;
    func_0x000107c5d7e8();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    if (puVar4 == (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
      func_0x000107c5faec(0);
      uVar6 = uVar16;
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar16);
      uVar16 = uVar6;
    }
    *(undefined1 **)((long)auStack_158 + lVar2 + 0x30) = puVar19;
    func_0x000107c5a120(puVar11);
    func_0x000107c61170(puVar4);
    puVar7 = puVar12;
    func_0x000107c5cd58();
    func_0x000107c61180();
    puVar4 = puVar7;
    func_0x000107c5cd58();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    puVar7 = puVar4;
    func_0x000107c3e3d4();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    puVar4 = puVar7;
    func_0x000107c427c0();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    if (puVar4 != (undefined *)0x0) {
      puVar7 = puVar4;
      func_0x000107c4a8c4(puVar4);
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      puVar10 = puVar7;
      func_0x000107c5ee30(puVar7);
      func_0x000107c61170(puVar7);
      puVar4 = puVar10;
      func_0x000107c5ee20(puVar10,uVar16);
      func_0x00010006c090(puVar10);
    }
    func_0x000107c54580(puVar11);
    func_0x000107c61170(puVar4);
    puVar7 = puVar12;
    func_0x000107c5cd58();
    func_0x000107c61180();
    puVar4 = puVar7;
    func_0x000107c5cd58();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    puVar7 = puVar4;
    func_0x000107c3e3d4();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    puVar4 = puVar7;
    func_0x000107c427c0();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    if (puVar4 != (undefined *)0x0) {
      puVar7 = puVar4;
      func_0x000107c4a804();
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      if (puVar7 == (undefined *)0x0) {
        puVar4 = (undefined *)0x0;
      }
      else {
        puVar10 = puVar7;
        func_0x000107c5ee30(puVar7);
        func_0x000107c61170(puVar7);
        puVar4 = puVar10;
        func_0x000107c5ee20(puVar10,uVar16);
        func_0x00010006c090(puVar10);
      }
    }
    func_0x000107c5457c(puVar11);
    func_0x000107c61170(puVar4);
    func_0x000107c57cd0(puVar8);
    puVar19 = *(undefined1 **)((long)auStack_158 + lVar2 + 0x30);
  }
  func_0x000107c61170(puVar11);
  puVar7 = puVar8;
  func_0x000107c41214();
  func_0x000107c61180();
  if (puVar7 == (undefined *)0x0) {
    puVar7 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    uVar9 = 0x636973756d;
    func_0x000107c5fadc(0x636973756d,0xe500000000000000);
    uVar6 = 0xd000000000000031;
    func_0x000107c5fadc(0xd000000000000031,0x800000010f0137a0);
    puVar11 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar6);
    puVar4 = puVar11;
    func_0x000107c5ed2c(puVar11);
    func_0x000107c61170(puVar11);
    func_0x000107c451ac(puVar7);
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
  }
  else {
    *(undefined **)((long)auStack_158 + lVar2 + 0x28) = puVar8;
    puVar8 = puVar7;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar7);
    puVar7 = PTR_PTR_1126b3080;
    func_0x000107c61168();
    *(undefined8 *)((long)auStack_158 + lVar2 + 0x18) = uVar16;
    *(undefined **)((long)auStack_158 + lVar2 + 0x20) = puVar8;
    func_0x000107c5ee20(puVar8,uVar16);
    func_0x000107c412fc();
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    *(undefined **)((long)auStack_158 + lVar2 + 0x10) = puVar7;
    uVar6 = uVar9;
    func_0x000107c5c52c();
    func_0x000107c61180();
    puVar8 = PTR_PTR_1126b25c8;
    func_0x000107c610f8(PTR_PTR_1126b25c8);
    func_0x000107c453e4();
    *(undefined8 *)((long)auStack_158 + lVar2 + 8) = uVar6;
    func_0x000107c56420();
    func_0x000107c5293c(puVar8);
    puVar11 = PTR_PTR_1126b25d0;
    func_0x000107c610f8(PTR_PTR_1126b25d0);
    func_0x000107c453e4();
    func_0x000107c563e8();
    puVar7 = PTR_PTR_1126affe8;
    func_0x000107c61168(PTR_PTR_1126affe8);
    puVar4 = puVar7;
    func_0x000107c44410();
    func_0x000107c61180();
    uVar6 = uVar9;
    func_0x000107c3d7f4(uVar9);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar6);
    FUN_101e2ac5c();
    puVar4 = puVar7;
    func_0x000107c44410(puVar7);
    func_0x000107c61180();
    *(undefined8 *)((long)auStack_158 + lVar2 + 0x30) = uVar9;
    *(undefined **)((long)auStack_158 + lVar2) = puVar12;
    func_0x000107c3d7f4(uVar9);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar9);
    puVar4 = PTR_PTR_1126b37e0;
    func_0x000107c610f8(PTR_PTR_1126b37e0);
    func_0x000107c453e4();
    *(undefined8 *)((long)alStack_118 + lVar2) = 0x7d7b;
    *(undefined8 *)((long)alStack_118 + lVar2 + 8) = 0xe200000000000000;
    puVar12 = puVar4;
    func_0x000107c5fb04(puVar19);
    func_0x000100e8b654();
    uVar17 = 0;
    puVar5 = puVar19;
    func_0x000107c60214(puVar19,0,PTR___sSSN_11034da80,puVar12);
    (**(code **)(lVar20 + 8))(puVar19,lVar18);
    if (uVar17 >> 0x3c < 0xf) {
      puVar19 = puVar5;
      func_0x000107c5ee20(puVar5,uVar17);
      func_0x0001000b44c0(puVar5,uVar17);
    }
    else {
      puVar19 = (undefined1 *)0x0;
    }
    func_0x000107c55b9c(puVar4);
    func_0x000107c61170(puVar19);
    puVar12 = PTR_PTR_1126b0cc0;
    func_0x000107c610f8(PTR_PTR_1126b0cc0);
    func_0x000107c453e4();
    func_0x000107c5667c();
    puVar10 = PTR_PTR_1126b25d0;
    func_0x000107c610f8(PTR_PTR_1126b25d0);
    func_0x000107c453e4();
    func_0x000107c53b78();
    func_0x000107c44410(puVar7);
    func_0x000107c61180();
    uVar9 = *(undefined8 *)((long)auStack_158 + lVar2 + 0x30);
    func_0x000107c3d7f4(uVar9);
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    func_0x000107c61170(uVar9);
    puVar7 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    func_0x000107c451b0();
    func_0x000107c61180();
    func_0x000107c61170(*(undefined8 *)((long)auStack_158 + lVar2 + 0x10));
    func_0x000107c61170(*(undefined8 *)((long)auStack_158 + lVar2 + 8));
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(*(undefined8 *)((long)auStack_158 + lVar2));
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar12);
    func_0x000107c61170(puVar10);
    func_0x00010006c090(*(undefined8 *)((long)auStack_158 + lVar2 + 0x20),
                        *(undefined8 *)((long)auStack_158 + lVar2 + 0x18));
    puVar4 = *(undefined **)((long)auStack_158 + lVar2 + 0x28);
  }
  func_0x000107c61170(puVar4);
  return puVar7;
}



/* Entry: 101e2ac54; end: 101e2ac5b;  */

/* WARNING: Removing unreachable block (ram,0x000101e28acc) */

undefined * FUN_101e2ac54(double param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined1 *puStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  puVar7 = *(undefined1 **)(unaff_x20 + 0x10);
  lVar1 = 0;
  puVar15 = puVar7;
  func_0x000107c5fb10(0,puVar7,*(undefined8 *)(unaff_x20 + 0x18));
  lVar14 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  puVar13 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = PTR_PTR_1126b3098;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = param_2;
  func_0x000107c5cd58(param_2);
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c5cd58();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar3 = puVar4;
  func_0x000107c5cda4(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c2bb50(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c59fd0(puVar2);
  puVar3 = param_2;
  func_0x000107c5cd58(param_2);
  func_0x000107c61180();
  func_0x000107c5bb48();
  func_0x000107c61170(puVar3);
  func_0x000107c60a44(&uStack_88,param_1 / 1000.0,600);
  func_0x000107c60a3c(&uStack_88);
  func_0x000107c597bc(puVar2);
  puVar3 = param_2;
  func_0x000107c5cd58();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c5cd58();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar3 = puVar4;
  func_0x000107c4276c();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  if (puVar3 != (undefined *)0x0) {
    puVar4 = puVar3;
    func_0x000107c5ee30(puVar3);
    func_0x000107c61170(puVar3);
    func_0x000107c610f8(PTR_PTR_1126b25f8);
    func_0x00010006c00c(puVar4,puVar15);
    puVar3 = puVar4;
    func_0x000100feee8c(puVar4,puVar15);
    func_0x00010006c090(puVar4,puVar15);
    func_0x000107c5386c(puVar2);
    func_0x000107c61170(puVar3);
    func_0x00010006c090(puVar4);
  }
  puVar3 = param_2;
  func_0x000107c5cd58();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c5cd58();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar3 = puVar4;
  func_0x000107c3e3d4();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  puVar4 = puVar3;
  func_0x000107c4a18c();
  func_0x000107c61170(puVar3);
  if ((int)puVar4 == 0) {
    puVar3 = param_2;
    func_0x000107c5cd58(param_2);
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c3e3b4();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    puVar3 = puVar4;
    func_0x000107c5ee30(puVar4);
    func_0x000107c61170(puVar4);
    puVar4 = puVar3;
    func_0x000107c5ee20(puVar3,puVar15);
    func_0x00010006c090(puVar3);
    func_0x000107c529f0(puVar2);
  }
  else {
    puVar4 = PTR_PTR_1126b30a0;
    func_0x000107c610f8(PTR_PTR_1126b30a0);
    func_0x000107c453e4();
    puVar3 = param_2;
    func_0x000107c5cd58();
    func_0x000107c61180();
    puVar5 = puVar3;
    func_0x000107c5cd58();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    puVar3 = puVar5;
    func_0x000107c3e3d4();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    puVar5 = puVar3;
    func_0x000107c5d7e8();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    if (puVar5 == (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
      func_0x000107c5faec(0);
      puVar11 = puVar15;
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar15);
      puVar15 = puVar11;
    }
    puStack_98 = puVar13;
    func_0x000107c5a120(puVar4);
    func_0x000107c61170(puVar5);
    puVar3 = param_2;
    func_0x000107c5cd58();
    func_0x000107c61180();
    puVar5 = puVar3;
    func_0x000107c5cd58();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    puVar3 = puVar5;
    func_0x000107c3e3d4();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    puVar5 = puVar3;
    func_0x000107c427c0();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    if (puVar5 != (undefined *)0x0) {
      puVar3 = puVar5;
      func_0x000107c4a8c4(puVar5);
      func_0x000107c61180();
      func_0x000107c61170(puVar5);
      puVar6 = puVar3;
      func_0x000107c5ee30(puVar3);
      func_0x000107c61170(puVar3);
      puVar5 = puVar6;
      func_0x000107c5ee20(puVar6,puVar15);
      func_0x00010006c090(puVar6);
    }
    func_0x000107c54580(puVar4);
    func_0x000107c61170(puVar5);
    puVar3 = param_2;
    func_0x000107c5cd58();
    func_0x000107c61180();
    puVar5 = puVar3;
    func_0x000107c5cd58();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    puVar3 = puVar5;
    func_0x000107c3e3d4();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    puVar5 = puVar3;
    func_0x000107c427c0();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    if (puVar5 != (undefined *)0x0) {
      puVar3 = puVar5;
      func_0x000107c4a804();
      func_0x000107c61180();
      func_0x000107c61170(puVar5);
      if (puVar3 == (undefined *)0x0) {
        puVar5 = (undefined *)0x0;
      }
      else {
        puVar6 = puVar3;
        func_0x000107c5ee30(puVar3);
        func_0x000107c61170(puVar3);
        puVar5 = puVar6;
        func_0x000107c5ee20(puVar6,puVar15);
        func_0x00010006c090(puVar6);
      }
    }
    func_0x000107c5457c(puVar4);
    func_0x000107c61170(puVar5);
    func_0x000107c57cd0(puVar2);
    puVar13 = puStack_98;
  }
  func_0x000107c61170(puVar4);
  puVar3 = puVar2;
  func_0x000107c41214();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    uVar8 = 0x636973756d;
    func_0x000107c5fadc(0x636973756d,0xe500000000000000);
    uVar9 = 0xd000000000000031;
    func_0x000107c5fadc(0xd000000000000031,0x800000010f0137a0);
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    puVar5 = puVar4;
    func_0x000107c5ed2c(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c451ac(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
  }
  else {
    puVar4 = puVar3;
    puStack_a0 = puVar2;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar3);
    puVar2 = PTR_PTR_1126b3080;
    func_0x000107c61168();
    puStack_b0 = puVar15;
    puStack_a8 = puVar4;
    func_0x000107c5ee20(puVar4,puVar15);
    func_0x000107c412fc();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    puVar15 = puVar7;
    puStack_b8 = puVar2;
    func_0x000107c5c52c();
    func_0x000107c61180();
    puVar2 = PTR_PTR_1126b25c8;
    func_0x000107c610f8(PTR_PTR_1126b25c8);
    func_0x000107c453e4();
    puStack_c0 = puVar15;
    func_0x000107c56420();
    func_0x000107c5293c(puVar2);
    puVar4 = PTR_PTR_1126b25d0;
    func_0x000107c610f8(PTR_PTR_1126b25d0);
    func_0x000107c453e4();
    func_0x000107c563e8();
    puVar3 = PTR_PTR_1126affe8;
    func_0x000107c61168(PTR_PTR_1126affe8);
    puVar5 = puVar3;
    func_0x000107c44410();
    func_0x000107c61180();
    puVar15 = puVar7;
    func_0x000107c3d7f4(puVar7);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar15);
    FUN_101e2ac5c();
    puVar5 = puVar3;
    func_0x000107c44410(puVar3);
    func_0x000107c61180();
    puStack_c8 = param_2;
    puStack_98 = puVar7;
    func_0x000107c3d7f4(puVar7);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar7);
    puVar5 = PTR_PTR_1126b37e0;
    func_0x000107c610f8(PTR_PTR_1126b37e0);
    func_0x000107c453e4();
    uStack_88 = 0x7d7b;
    uStack_80 = 0xe200000000000000;
    puVar6 = puVar5;
    func_0x000107c5fb04(puVar13);
    func_0x000100e8b654();
    uVar12 = 0;
    puVar7 = puVar13;
    func_0x000107c60214(puVar13,0,PTR___sSSN_11034da80,puVar6);
    (**(code **)(lVar14 + 8))(puVar13,lVar1);
    if (uVar12 >> 0x3c < 0xf) {
      puVar15 = puVar7;
      func_0x000107c5ee20(puVar7,uVar12);
      func_0x0001000b44c0(puVar7,uVar12);
    }
    else {
      puVar15 = (undefined1 *)0x0;
    }
    func_0x000107c55b9c(puVar5);
    func_0x000107c61170(puVar15);
    puVar6 = PTR_PTR_1126b0cc0;
    func_0x000107c610f8(PTR_PTR_1126b0cc0);
    func_0x000107c453e4();
    func_0x000107c5667c();
    puVar10 = PTR_PTR_1126b25d0;
    func_0x000107c610f8(PTR_PTR_1126b25d0);
    func_0x000107c453e4();
    func_0x000107c53b78();
    func_0x000107c44410(puVar3);
    func_0x000107c61180();
    puVar7 = puStack_98;
    func_0x000107c3d7f4(puStack_98);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar7);
    puVar3 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    func_0x000107c451b0();
    func_0x000107c61180();
    func_0x000107c61170(puStack_b8);
    func_0x000107c61170(puStack_c0);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puStack_c8);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar10);
    func_0x00010006c090(puStack_a8,puStack_b0);
    puVar5 = puStack_a0;
  }
  func_0x000107c61170(puVar5);
  return puVar3;
}



/* Entry: 101e2ac5c; end: 101e2b177;  */

undefined * FUN_101e2ac5c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar2 = PTR_PTR_1126bc980;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar3 = param_1;
  func_0x000107c5cd58(param_1);
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5cd58();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar4;
  func_0x000107c5cda4(lVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  func_0x000107c2bb50(lVar3);
  func_0x000107c61170(lVar3);
  func_0x000107c59fd0(puVar2);
  lVar3 = param_1;
  func_0x000107c5cd58();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5cd58();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar4;
  func_0x000107c5cab0();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  uVar13 = param_2;
  if (lVar3 == 0) {
    lVar3 = 0;
    func_0x000107c5faec(0);
    uVar13 = param_2;
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x000107c59e18(puVar2);
  func_0x000107c61170(lVar3);
  func_0x000107c5cd58();
  func_0x000107c61180();
  lVar3 = param_1;
  func_0x000107c5cd58();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  lVar4 = lVar3;
  func_0x000107c3e1a4();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  uVar14 = uVar13;
  if (lVar4 == 0) {
    lVar4 = 0;
    func_0x000107c5faec(0);
    uVar14 = uVar13;
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar13);
  }
  func_0x000107c52900(puVar2);
  func_0x000107c61170(lVar4);
  puVar5 = PTR_PTR_1126bc988;
  func_0x000107c610f8(PTR_PTR_1126bc988);
  func_0x000107c453e4();
  func_0x000107c56878();
  puVar6 = PTR_PTR_1126ba8f8;
  func_0x000107c610f8(PTR_PTR_1126ba8f8);
  func_0x000107c453e4();
  func_0x000107c5a0f8();
  puVar7 = PTR_PTR_1126b0cb8;
  func_0x000107c610f8(PTR_PTR_1126b0cb8);
  func_0x000107c453e4();
  puVar8 = PTR_PTR_1126b0cc0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar9 = PTR_PTR_1126b37c0;
  func_0x000107c610f8(PTR_PTR_1126b37c0);
  func_0x000107c453e4();
  func_0x000107c553a0();
  func_0x000107c545cc(puVar7);
  func_0x000107c55900(puVar8);
  puVar10 = puVar8;
  func_0x000107c4ce20();
  func_0x000107c61180();
  if (puVar10 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e2b170);
    (*pcVar1)();
  }
  func_0x000107c553a4();
  func_0x000107c61170(puVar10);
  puVar10 = puVar2;
  func_0x000107c5cab0();
  func_0x000107c61180();
  if (puVar10 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e2b174);
    (*pcVar1)();
  }
  puVar11 = puVar10;
  func_0x000107c5faec();
  func_0x000107c61170(puVar10);
  uVar13 = uVar14;
  func_0x000107c5fb5c(puVar11,uVar14);
  func_0x000107c6142c(uVar14);
  lVar3 = (long)puVar11 * 6;
  if (SUB168(SEXT816((long)puVar11) * SEXT816(6),8) != lVar3 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e2b158);
    (*pcVar1)();
  }
  puVar10 = puVar2;
  func_0x000107c3e1a4();
  func_0x000107c61180();
  if (puVar10 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e2b178);
    (*pcVar1)();
  }
  puVar11 = puVar10;
  func_0x000107c5faec();
  func_0x000107c61170(puVar10);
  func_0x000107c5fb5c(puVar11,uVar13);
  func_0x000107c6142c(uVar13);
  lVar4 = (long)puVar11 * 5;
  if (SUB168(SEXT816((long)puVar11) * SEXT816(5),8) != lVar4 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e2b15c);
    (*pcVar1)();
  }
  if (lVar4 <= lVar3) {
    lVar4 = lVar3;
  }
  if (lVar4 < -0x80000000) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e2b160);
    (*pcVar1)();
  }
  if (0x7fffffff < lVar4) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e2b164);
    (*pcVar1)();
  }
  if (!SCARRY4((int)lVar4,0x47)) {
    puVar10 = PTR_PTR_1126dd688;
    func_0x000107c610f8(PTR_PTR_1126dd688);
    func_0x000107c453e4();
    puVar11 = PTR_PTR_1126b7828;
    func_0x000107c61168(PTR_PTR_1126b7828);
    puVar12 = puVar11;
    func_0x000107c3e180();
    func_0x000107c61180();
    func_0x000107c58c04(puVar10);
    func_0x000107c61170(puVar12);
    puVar12 = puVar11;
    func_0x000107c3e180(puVar11);
    func_0x000107c61180();
    func_0x000107c5a7f4(puVar10);
    func_0x000107c61170(puVar12);
    puVar12 = puVar11;
    func_0x000107c3e180(puVar11);
    func_0x000107c61180();
    func_0x000107c5a808(puVar10);
    func_0x000107c61170(puVar12);
    func_0x000107c3e180(puVar11);
    func_0x000107c61180();
    func_0x000107c57f24(puVar10);
    func_0x000107c61170(puVar11);
    puVar11 = PTR_PTR_1126beb00;
    func_0x000107c61168(PTR_PTR_1126beb00);
    func_0x000107c3e180();
    func_0x000107c61180();
    func_0x000107c59df0(puVar10);
    func_0x000107c61170(puVar11);
    puVar11 = PTR_PTR_1126c7b90;
    func_0x000107c610f8(PTR_PTR_1126c7b90);
    func_0x000107c453e4();
    if (-1 < (int)lVar4 + 0x47) {
      func_0x000107c5a724();
      func_0x000107c550b8(puVar11);
      func_0x000107c5a040(puVar11);
      puVar12 = PTR_PTR_1126b25d0;
      func_0x000107c610f8(PTR_PTR_1126b25d0);
      func_0x000107c453e4();
      func_0x000107c53b78();
      func_0x000107c5799c(puVar12);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar8);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar11);
      return puVar12;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e2b16c);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e2b168);
  (*pcVar1)();
}



/* Entry: 101e2b178; end: 101e2b1b7;  */

void FUN_101e2b178(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101e2b1b8; end: 101e2b1fb;  */

void FUN_101e2b1b8(long param_1,long param_2)

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



/* Entry: 101e2b1fc; end: 101e2b3ff;  */

/* WARNING: Possible PIC construction at 0x000101e2b3d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e2b3d8) */

void FUN_101e2b1fc(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  uVar1 = param_1;
  func_0x0001058e90a8();
  if ((((uVar1 & 1) == 0) && (*(long *)(unaff_x20 + 0x68) != 0)) &&
     (*(ulong *)(unaff_x20 + 0x70) == param_1)) {
    func_0x000107c61168(PTR_PTR_1126ae558);
    func_0x000107c451b0();
  }
  else {
    puVar2 = PTR_PTR_1126ae560;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar1 = param_1;
    FUN_101e2beac(param_1);
    puVar6 = &UNK_11048c178;
    puVar3 = puVar6;
    func_0x000107c613fc(&UNK_11048c178,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    puVar4 = &UNK_11048c3a8;
    func_0x000107c613fc(&UNK_11048c3a8,0x20,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(ulong *)(puVar4 + 0x18) = param_1;
    uVar5 = 0;
    func_0x000104889f74(0,1,FUN_101e2efac,puVar4);
    func_0x000107c61574(uVar1);
    func_0x000107c61574(puVar4);
    func_0x000107c613fc(&UNK_11048c178,0x18,7);
    func_0x000107c61644(puVar6 + 0x10);
    puVar4 = &UNK_11048c3d0;
    func_0x000107c613fc(&UNK_11048c3d0,0x28,7);
    *(undefined **)(puVar4 + 0x10) = puVar6;
    *(ulong *)(puVar4 + 0x18) = param_1;
    *(undefined **)(puVar4 + 0x20) = puVar2;
    func_0x000107c61174();
    uVar7 = 0;
    func_0x00010488a220(0,1,0x101e2efcc,puVar4);
    func_0x000107c61574(uVar5);
    func_0x000107c61574(puVar4);
    puVar6 = &UNK_11048c3f8;
    func_0x000107c613fc(&UNK_11048c3f8,0x18,7);
    *(undefined **)(puVar6 + 0x10) = puVar2;
    func_0x000107c61174(puVar2);
    func_0x000104888fc0(0,1,FUN_101e2efe8,puVar6);
    func_0x000107c61574(uVar7);
    func_0x000107c61574(puVar6);
    func_0x000107c43bf4(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 101e2b400; end: 101e2b497;  */

void FUN_101e2b400(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_2 + 0x68) = uVar1;
    *(undefined8 *)(param_2 + 0x70) = param_3;
    func_0x000107c61174(uVar1);
    func_0x000107c61574(param_2);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c3fefc(param_4);
  return;
}



/* Entry: 101e2b498; end: 101e2b4a3; -[_TtC23SCMusicSyncServicesImpl20MusicSyncTrackLoader getTracksSectionForSectionType:] */

void FUN_101e2b498(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c6157c();
  FUN_101e2b1fc(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101e2b4a4; end: 101e2b71f;  */

undefined * FUN_101e2b4a4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puVar6;
  
  puVar6 = *(undefined **)(unaff_x20 + 0x60);
  if (puVar6 != (undefined *)0x0) {
    func_0x000101e2ef6c(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c61174();
    puVar1 = puVar6;
    func_0x000107c5cd58();
    func_0x000107c61180();
    puVar2 = puVar1;
    func_0x000107c5cd58();
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    puVar1 = puVar2;
    func_0x000107c5cda4();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    uVar5 = param_1;
    func_0x000107c2bb54(param_1);
    func_0x000107c61180();
    puVar2 = puVar1;
    func_0x000107c60118(puVar1,uVar5);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(uVar5);
    if (((ulong)puVar2 & 1) != 0) {
      puVar1 = PTR_PTR_1126ae558;
      func_0x000107c61168(PTR_PTR_1126ae558);
      func_0x000107c451b0();
      goto LAB_101e2b6f4;
    }
    func_0x000107c61170(puVar6);
  }
  puVar6 = PTR_PTR_1126ae560;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar5 = param_1;
  FUN_101e2d948(param_1);
  puVar1 = &UNK_11048c178;
  puVar3 = puVar1;
  func_0x000107c613fc(&UNK_11048c178,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puVar2 = &UNK_11048c330;
  func_0x000107c613fc(&UNK_11048c330,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar3;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  uVar4 = 0;
  func_0x000104889f74(0,1,FUN_101e2ef00,puVar2);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(puVar2);
  func_0x000107c613fc(&UNK_11048c178,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_11048c358;
  func_0x000107c613fc(&UNK_11048c358,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined **)(puVar2 + 0x18) = puVar6;
  func_0x000107c61174();
  uVar5 = 0;
  func_0x00010488a220(0,1,0x101e2ef20,puVar2);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(puVar2);
  puVar1 = &UNK_11048c380;
  func_0x000107c613fc(&UNK_11048c380,0x18,7);
  *(undefined **)(puVar1 + 0x10) = puVar6;
  func_0x000107c61174(puVar6);
  func_0x000104888fc0(0,1,0x101e2ef38,puVar1);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(puVar1);
  puVar1 = puVar6;
  func_0x000107c43bf4(puVar6);
LAB_101e2b6f4:
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  return puVar1;
}



/* Entry: 101e2b720; end: 101e2b7a3;  */

undefined8 FUN_101e2b720(undefined8 param_1,long param_2,undefined8 param_3,code *param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    param_3 = 0;
  }
  else {
    (*param_4)(param_3);
    func_0x000107c61574(param_2);
  }
  return param_3;
}



/* Entry: 101e2b7a4; end: 101e2b837;  */

void FUN_101e2b7a4(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_2 + 0x60) = uVar1;
    func_0x000107c61174(uVar1);
    func_0x000107c61574(param_2);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c3fefc(param_3);
  return;
}



/* Entry: 101e2b838; end: 101e2b843; -[_TtC23SCMusicSyncServicesImpl20MusicSyncTrackLoader getMusicSyncTrack:] */

void FUN_101e2b838(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c6157c();
  FUN_101e2b4a4(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101e2b844; end: 101e2b88f;  */

void FUN_101e2b844(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  func_0x000107c6157c();
  (*param_4)(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101e2b890; end: 101e2bb93;  */

undefined * FUN_101e2b890(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined *puVar12;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x0001000285a8(0x112e31770,&UNK_10da1a9a0);
  lVar9 = 0x18;
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x00010095c380();
  puVar2 = PTR_PTR_1126bfdf0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar5 = param_1;
  FUN_101e2e9e4(param_1);
  if (lVar9 == 0) {
    uVar5 = 0;
  }
  else {
    lVar10 = lVar9;
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar9);
    lVar9 = lVar10;
  }
  func_0x000107c58d7c(puVar2);
  func_0x000107c61170(uVar5);
  puVar3 = puVar2;
  func_0x000107c41214();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
    func_0x0001000285a8(0x112e31768,&UNK_10da1a998);
    uVar11 = 0x636973756d;
    func_0x000107c5fadc(0x636973756d,0xe500000000000000);
    uVar5 = 0xd000000000000052;
    func_0x000107c5fadc(0xd000000000000052,0x800000010f013db0);
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar5);
    puVar12 = puVar3;
    func_0x00010488904c(puVar3);
    func_0x000107c61574(lVar1);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar3);
  }
  else {
    puVar4 = puVar3;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar3);
    uVar11 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar5 = 0xd00000000000001b;
    func_0x000107c5fadc(0xd00000000000001b,0x800000010f013e10);
    puVar6 = puVar4;
    func_0x000107c5ee20(puVar4,lVar9);
    puVar7 = puVar6;
    func_0x0001058e9178();
    func_0x000107c61180();
    puVar3 = &UNK_11048c178;
    func_0x000107c613fc(&UNK_11048c178,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    puVar12 = &UNK_11048c2e0;
    func_0x000107c613fc(&UNK_11048c2e0,0x28,7);
    *(long *)(puVar12 + 0x10) = lVar1;
    *(undefined **)(puVar12 + 0x18) = puVar3;
    *(undefined8 *)(puVar12 + 0x20) = param_1;
    uStack_70 = 0x101e2eef4;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_101376680;
    puStack_78 = &UNK_11048c2f8;
    ppuVar8 = &puStack_90;
    puStack_68 = puVar12;
    func_0x000107c60bc4(ppuVar8);
    puVar3 = puStack_68;
    func_0x000107c6157c(lVar1);
    func_0x000107c61574(puVar3);
    func_0x000107c5d1d8(uVar11);
    func_0x000107c61180();
    func_0x00010006c090(puVar4,lVar9);
    func_0x000107c615e8(uVar11);
    func_0x000107c61170(puVar2);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar7);
    puVar12 = *(undefined **)(lVar1 + 0x10);
    func_0x000107c6157c(puVar12);
    func_0x000107c61574(lVar1);
  }
  return puVar12;
}



/* Entry: 101e2bb94; end: 101e2beab;  */

/* WARNING: Possible PIC construction at 0x000101e2bc2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e2bd0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e2bd2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e2bdb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e2bdcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e2bddc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e2be60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e2be7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e2be80) */
/* WARNING: Removing unreachable block (ram,0x000101e2be64) */
/* WARNING: Removing unreachable block (ram,0x000101e2bde0) */
/* WARNING: Removing unreachable block (ram,0x000101e2bdd0) */
/* WARNING: Removing unreachable block (ram,0x000101e2bd30) */
/* WARNING: Removing unreachable block (ram,0x000107c614ac) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0194) */
/* WARNING: Removing unreachable block (ram,0x000101e2bd10) */
/* WARNING: Removing unreachable block (ram,0x000101e2bc30) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Removing unreachable block (ram,0x000101e2bca4) */

void FUN_101e2bb94(ulong param_1,ulong param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uStack_78;
  undefined1 auStack_70 [32];
  
  if (param_2 >> 0x3c < 0xf && param_3 == 0) {
    func_0x000107c610f8(PTR_PTR_1126a9640);
    func_0x000100de78a0(param_1,param_2);
    uVar2 = param_1;
    FUN_101e2edac(param_1,param_2);
    uVar3 = uVar2;
    func_0x000107c44acc();
    if ((uVar3 & 1) != 0) {
      func_0x000107c51b48();
      func_0x000107c61180();
      if (uVar2 != 0) {
        func_0x000107c61428(param_5 + 0x10,auStack_70,0,0);
        uVar3 = param_5 + 0x10;
        func_0x000107c61648();
        if (uVar3 == 0) {
          uStack_78 = uVar2;
          func_0x000100b60084(&uStack_78);
          if (0xe < param_2 >> 0x3c) {
            return;
          }
          uVar4 = (uint)(param_2 >> 0x3e);
          if (uVar4 == 1) {
            param_1 = param_2 & 0x3fffffffffffffff;
          }
          else if (uVar4 != 2) {
            return;
          }
        }
        else {
          FUN_101e2c4bc(uVar2,param_6);
          param_1 = uVar3;
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_release_11034f4c0)(param_1);
        return;
      }
    }
    uVar1 = 0x636973756d;
    func_0x000107c5fadc(0x636973756d,0xe500000000000000);
    func_0x000107c5fadc(0xd000000000000037,0x800000010f013ed0);
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
  }
  else {
    uVar1 = 0x636973756d;
    func_0x000107c5fadc(0x636973756d,0xe500000000000000);
    func_0x000107c5fadc(0xd000000000000045,0x800000010f013e30);
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101e2beac; end: 101e2c4bb;  */

undefined * FUN_101e2beac(ulong param_1)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long unaff_x20;
  long lVar9;
  undefined *puVar10;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  ulong uStack_48;
  
  uVar2 = param_1;
  func_0x0001058e90a8();
  if ((uVar2 & 1) != 0) {
    func_0x0001000285a8(0x112e31768,&UNK_10da1a998);
    uVar3 = 0x636973756d;
    func_0x000107c5fadc(0x636973756d,0xe500000000000000);
    uVar4 = 0xd000000000000046;
    func_0x000107c5fadc(0xd000000000000046,0x800000010f013930);
    puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
LAB_101e2bff0:
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    puVar8 = puVar10;
    func_0x00010488904c(puVar10);
    func_0x000107c61170(puVar10);
    return puVar8;
  }
  lVar5 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 == 0) {
    func_0x0001000285a8(0x112e31768,&UNK_10da1a998);
    uVar3 = 0x636973756d;
    func_0x000107c5fadc(0x636973756d,0xe500000000000000);
    uVar4 = 0xd00000000000002e;
    func_0x000107c5fadc(0xd00000000000002e,0x800000010f013900);
    puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    goto LAB_101e2bff0;
  }
  if (param_1 == 0) {
    pcVar1 = "com.snapchat.music.musicsynctracks";
    lVar9 = -0x24;
  }
  else {
    if (param_1 != 1) goto LAB_101e2c1bc;
    pcVar1 = "com.snapchat.music.soundsynclenstemplatestracks";
    lVar9 = -0x17;
  }
  lVar9 = lVar9 + -0x2fffffffffffffba;
  puVar10 = PTR_PTR_1126b08b8;
  func_0x000107c610f8();
  func_0x000107c5fadc(lVar9,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c6142c((ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c4766c();
  func_0x000107c61170(lVar9);
  if (puVar10 != (undefined *)0x0) {
    func_0x0001000285a8(0x112e31770,&UNK_10da1a9a0);
    func_0x000107c613fc();
    lVar6 = 0;
    func_0x00010095c380();
    uVar3 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
    puVar8 = PTR_PTR_1126b1060;
    func_0x000107c610f8(PTR_PTR_1126b1060);
    func_0x000107c5fc48(uVar3,PTR___sSSN_11034da80);
    func_0x000107c47d08(puVar8);
    func_0x000107c61170(uVar3);
    uStack_58 = 0x101e2eeec;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    uStack_68 = 0x101699d18;
    puStack_60 = &UNK_11048c2a8;
    ppuVar7 = &puStack_78;
    lStack_50 = lVar6;
    func_0x000107c60bc4(ppuVar7);
    lVar9 = lStack_50;
    func_0x000107c6157c(lVar6);
    func_0x000107c61574(lVar9);
    func_0x000107c50778(lVar5);
    func_0x000107c61180();
    func_0x000107c615e8();
    func_0x000107c615e8(lVar5);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar8);
    func_0x000107c60bd0(ppuVar7);
    puVar10 = *(undefined **)(lVar6 + 0x10);
    func_0x000107c6157c(puVar10);
    func_0x000107c61574(lVar6);
    return puVar10;
  }
LAB_101e2c1bc:
  func_0x0001000285a8(0x112e31768,&UNK_10da1a998);
  puStack_78 = (undefined *)0x0;
  uStack_70 = 0xe000000000000000;
  func_0x000107c602fc(0x48);
  func_0x000107c5fb78(0xd000000000000046,0x800000010f013cd0);
  uVar3 = 0;
  uStack_48 = param_1;
  FUN_101e277d0(0);
  func_0x000107c603d0(&uStack_48,&puStack_78,uVar3,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar3 = uStack_70;
  puVar10 = puStack_78;
  uVar4 = 0x636973756d;
  func_0x000107c5fadc(0x636973756d,0xe500000000000000);
  func_0x000107c5fadc(puVar10,uVar3);
  puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x000107c42a5c();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar10);
  func_0x000107c6142c(uVar3);
  puVar10 = puVar8;
  func_0x00010488904c(puVar8);
  func_0x000107c615e8(lVar5);
  func_0x000107c61170(puVar8);
  return puVar10;
}



/* Entry: 101e2c4bc; end: 101e2c727;  */

/* WARNING: Possible PIC construction at 0x000101e2c54c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e2c5bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e2c684: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e2c6a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e2c700: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e2c6a8) */
/* WARNING: Removing unreachable block (ram,0x000101e2c688) */
/* WARNING: Removing unreachable block (ram,0x000101e2c5c0) */
/* WARNING: Removing unreachable block (ram,0x000101e2c5c4) */
/* WARNING: Removing unreachable block (ram,0x000101e2c6f8) */
/* WARNING: Removing unreachable block (ram,0x000101e2c5d8) */
/* WARNING: Removing unreachable block (ram,0x000101e2c550) */
/* WARNING: Removing unreachable block (ram,0x000101e2c570) */
/* WARNING: Removing unreachable block (ram,0x000101e2c554) */
/* WARNING: Removing unreachable block (ram,0x000101e2c6d0) */
/* WARNING: Removing unreachable block (ram,0x00010006c090) */
/* WARNING: Removing unreachable block (ram,0x00010006c09c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0cc) */
/* WARNING: Removing unreachable block (ram,0x00010006c0a4) */
/* WARNING: Removing unreachable block (ram,0x00010006c0c4) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000101e2c55c) */
/* WARNING: Removing unreachable block (ram,0x000101e2c57c) */
/* WARNING: Removing unreachable block (ram,0x000101e2c704) */

void FUN_101e2c4bc(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  func_0x000107c41214();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c5ee30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 101e2c728; end: 101e2c72b;  */

void FUN_101e2c728(void)

{
  return;
}



/* Entry: 101e2c72c; end: 101e2d947;  */

undefined * FUN_101e2c72c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined8 *unaff_x20;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  uVar14 = *unaff_x20;
  puVar1 = PTR_PTR_1126bfda8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c59fd0();
  puVar2 = PTR_PTR_1126bfdb0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126a9638;
  func_0x000107c610f8(PTR_PTR_1126a9638);
  func_0x000107c453e4();
  func_0x000107c56818(puVar2);
  func_0x000107c61170(puVar3);
  puVar3 = PTR_PTR_1126bfdb0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar12 = PTR_PTR_1126bfdb8;
  func_0x000107c610f8(PTR_PTR_1126bfdb8);
  func_0x000107c453e4();
  func_0x000107c56890(puVar3);
  func_0x000107c61170(puVar12);
  lVar6 = 0x112d38dc0;
  func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x18) = 4;
  *(undefined8 *)(lVar6 + 0x10) = 2;
  uVar4 = 0;
  func_0x000101e2ef6c(0,0x112dc2b68,&PTR_PTR_1126bfdb0);
  *(undefined **)(lVar6 + 0x20) = puVar2;
  *(undefined8 *)(lVar6 + 0x58) = uVar4;
  *(undefined8 *)(lVar6 + 0x38) = uVar4;
  *(undefined **)(lVar6 + 0x40) = puVar3;
  uVar4 = 0x112d538a8;
  func_0x000101e2ef6c(0,0x112d538a8,&PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c600f0(lVar6);
  func_0x000107c57df0(puVar1);
  func_0x000107c61170(lVar6);
  puVar12 = puVar1;
  func_0x000107c41214();
  func_0x000107c61180();
  if (puVar12 == (undefined *)0x0) {
    func_0x0001000285a8(0x112d5a900,&UNK_10d921528);
    puStack_98 = (undefined *)0x0;
    uStack_90 = 0xe000000000000000;
    func_0x000107c602fc(0x56);
    func_0x000107c5fb78(0xd000000000000054,0x800000010f013af0);
    puVar12 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
    uStack_68 = param_1;
    func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                        PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar12);
    uVar4 = uStack_90;
    puVar12 = puStack_98;
    uVar14 = 0x636973756d;
    func_0x000107c5fadc(0x636973756d,0xe500000000000000);
    func_0x000107c5fadc(puVar12,uVar4);
    puVar11 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(uVar14);
    func_0x000107c61170(puVar12);
    func_0x000107c6142c(uVar4);
    puVar12 = puVar11;
    func_0x00010488904c(puVar11);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar11);
  }
  else {
    puVar5 = puVar12;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar12);
    func_0x0001000285a8(0x112e31728,&UNK_10da1a990);
    func_0x000107c613fc();
    lVar6 = 0;
    func_0x00010095c380();
    uVar13 = unaff_x20[2];
    uVar7 = 0x6973754d7465472f;
    func_0x000107c5fadc(0x6973754d7465472f,0xee006b6361725463);
    puVar8 = puVar5;
    func_0x000107c5ee20(puVar5,uVar4);
    puVar9 = puVar8;
    func_0x0001058e9178();
    func_0x000107c61180();
    puVar12 = &UNK_11048c178;
    func_0x000107c613fc(&UNK_11048c178,0x18,7);
    func_0x000107c61644(puVar12 + 0x10);
    puVar11 = &UNK_11048c218;
    func_0x000107c613fc(&UNK_11048c218,0x30,7);
    *(undefined8 *)(puVar11 + 0x10) = param_1;
    *(long *)(puVar11 + 0x18) = lVar6;
    *(undefined **)(puVar11 + 0x20) = puVar12;
    *(undefined8 *)(puVar11 + 0x28) = uVar14;
    pcStack_78 = FUN_101e2eed0;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_101376680;
    puStack_80 = &UNK_11048c230;
    ppuVar10 = &puStack_98;
    puStack_70 = puVar11;
    func_0x000107c60bc4(ppuVar10);
    puVar12 = puStack_70;
    func_0x000107c6157c(lVar6);
    func_0x000107c61574(puVar12);
    func_0x000107c5d1d8(uVar13);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
    func_0x00010006c090(puVar5,uVar4);
    func_0x000107c615e8(uVar13);
    func_0x000107c61170(puVar1);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar9);
    puVar12 = *(undefined **)(lVar6 + 0x10);
    func_0x000107c6157c(puVar12);
    func_0x000107c61574(lVar6);
  }
  return puVar12;
}



/* Entry: 101e2d948; end: 101e2dc53;  */

undefined * FUN_101e2d948(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 *unaff_x20;
  undefined8 uVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar7 = &puStack_80;
  uVar9 = *unaff_x20;
  uVar1 = param_1;
  func_0x0001058e90a8();
  if ((uVar1 & 1) == 0) {
    lVar3 = unaff_x20[3];
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      uVar2 = 0x112e31728;
      func_0x0001000285a8(0x112e31728,&UNK_10da1a990);
      func_0x000107c613fc();
      lVar4 = 0;
      func_0x00010095c380(0,uVar2);
      uVar2 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c61538();
      puVar5 = PTR_PTR_1126b1060;
      func_0x000107c610f8(PTR_PTR_1126b1060);
      func_0x000107c5fc48(uVar2,PTR___sSSN_11034da80);
      func_0x000107c47d08(puVar5);
      func_0x000107c61170(uVar2);
      uVar1 = param_1;
      FUN_101e2eca4(param_1);
      puVar8 = &UNK_11048c178;
      func_0x000107c613fc(&UNK_11048c178,0x18,7);
      func_0x000107c61644(puVar8 + 0x10);
      puVar6 = &UNK_11048c1a0;
      func_0x000107c613fc(&UNK_11048c1a0,0x30,7);
      *(long *)(puVar6 + 0x10) = lVar4;
      *(ulong *)(puVar6 + 0x18) = param_1;
      *(undefined **)(puVar6 + 0x20) = puVar8;
      *(undefined8 *)(puVar6 + 0x28) = uVar9;
      uStack_60 = 0x101e2eda0;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      uStack_70 = 0x101699d18;
      puStack_68 = &UNK_11048c1b8;
      puStack_58 = puVar6;
      func_0x000107c60bc4(&puStack_80);
      puVar8 = puStack_58;
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(puVar8);
      func_0x000107c50778(lVar3);
      func_0x000107c61180();
      func_0x000107c615e8();
      func_0x000107c615e8(lVar3);
      func_0x000107c61170(puVar5);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61170(uVar1);
      puVar8 = *(undefined **)(lVar4 + 0x10);
      func_0x000107c6157c(puVar8);
      func_0x000107c61574(lVar4);
      return puVar8;
    }
    func_0x0001000285a8(0x112d5a900,&UNK_10d921528);
    uVar2 = 0x636973756d;
    func_0x000107c5fadc(0x636973756d,0xe500000000000000);
    uVar9 = 0xd00000000000002e;
    func_0x000107c5fadc(0xd00000000000002e,0x800000010f013900);
    puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
  }
  else {
    func_0x0001000285a8(0x112d5a900,&UNK_10d921528);
    uVar2 = 0x636973756d;
    func_0x000107c5fadc(0x636973756d,0xe500000000000000);
    uVar9 = 0xd000000000000046;
    func_0x000107c5fadc(0xd000000000000046,0x800000010f013930);
    puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
  }
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar9);
  puVar6 = puVar8;
  func_0x00010488904c(puVar8);
  func_0x000107c61170(puVar8);
  return puVar6;
}



/* Entry: 101e2dc54; end: 101e2e9e3;  */

/* WARNING: Removing unreachable block (ram,0x000101e2dd48) */

void FUN_101e2dc54(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  long alStack_120 [2];
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 auStack_88 [5];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar14 = auStack_110 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar12 = (long)puVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if ((param_4 & 1) == 0) {
    uStack_b8 = 0;
    uStack_b0 = 0xe000000000000000;
    func_0x000107c602fc(0x43);
    func_0x000107c5fb78(0xd000000000000041,0x800000010f013980);
    puVar4 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
    auStack_88[0] = param_6;
    func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                        PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar4);
    uVar9 = uStack_b0;
    uVar3 = uStack_b8;
    uVar7 = 0x636973756d;
    func_0x000107c5fadc(0x636973756d,0xe500000000000000);
    func_0x000107c5fadc(uVar3,uVar9);
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar3);
    func_0x000107c6142c(uVar9);
    func_0x00010488ade0(puVar4);
  }
  else {
    uStack_c8 = param_8;
    lStack_c0 = lVar1;
    func_0x000107c610f8(PTR_PTR_1126bfda0);
    func_0x00010006c00c(param_1,param_2);
    uVar2 = param_1;
    FUN_101e2edac(param_1,param_2);
    func_0x00010006c090(param_1,param_2);
    puVar8 = auStack_88;
    func_0x000107c61428(param_7 + 0x10,puVar8,0,0);
    param_7 = param_7 + 0x10;
    func_0x000107c61648();
    if (param_7 != 0) {
      uVar5 = uVar2;
      func_0x000107c449b0();
      if (((uVar5 & 1) == 0) || (uVar5 = uVar2, func_0x000107c449a8(), (int)uVar5 == 0)) {
        func_0x000107c61574(param_7);
      }
      else {
        uStack_d0 = uVar2;
        func_0x000107c4d2ac();
        func_0x000107c61180();
        if (uVar2 == 0) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x101e2e34c);
          (*pcVar11)();
        }
        uVar5 = uVar2;
        func_0x000107c42794();
        func_0x000107c61180();
        func_0x000107c61170(uVar2);
        if (uVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x101e2e350);
          (*pcVar11)();
        }
        uVar2 = uVar5;
        func_0x000107c40500();
        func_0x000107c61180();
        func_0x000107c61170(uVar5);
        if (uVar2 == 0) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x101e2e354);
          (*pcVar11)();
        }
        uVar5 = uVar2;
        func_0x000107c5faec(uVar2);
        func_0x000107c61170(uVar2);
        func_0x000107c5edd0(puVar14,uVar5,puVar8);
        func_0x000107c6142c(puVar8);
        puVar6 = puVar14;
        (**(code **)(lVar13 + 0x30))(puVar14,1,lStack_c0);
        if ((int)puVar6 != 1) {
          (**(code **)(lVar13 + 0x20))(lVar12,puVar14,lStack_c0);
          func_0x0001000d224c(&uStack_b8);
          puVar8 = &uStack_b8;
          uVar3 = uStack_a0;
          func_0x0001000a8868();
          uVar2 = uStack_d0;
          func_0x000107c4d2ac();
          func_0x000107c61180();
          if (uVar2 == 0) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x101e2e358);
            (*pcVar11)();
          }
          lStack_e0 = lStack_98;
          uVar5 = uVar2;
          func_0x000107c42794();
          func_0x000107c61180();
          func_0x000107c61170(uVar2);
          if (uVar5 != 0) {
            uVar2 = uVar5;
            func_0x000107c4271c();
            func_0x000107c61180();
            func_0x000107c61170(uVar5);
            if (uVar2 == 0) {
              uStack_e8 = 0;
              uStack_d8 = 0xf000000000000000;
            }
            else {
              uVar5 = uVar2;
              func_0x000107c5ee30();
              uStack_e8 = uVar5;
              uStack_d8 = uVar3;
              func_0x000107c61170(uVar2);
            }
            uVar2 = uStack_d0;
            func_0x000107c4d2ac();
            func_0x000107c61180();
            if (uVar2 != 0) {
              uVar5 = uVar2;
              func_0x000107c42794();
              func_0x000107c61180();
              func_0x000107c61170(uVar2);
              if (uVar5 != 0) {
                uVar2 = uVar5;
                puStack_f0 = puVar8;
                func_0x000107c42718();
                func_0x000107c61180();
                func_0x000107c61170(uVar5);
                uStack_f8 = uStack_a0;
                if (uVar2 == 0) {
                  uStack_108 = 0xf000000000000000;
                  uStack_100 = 0;
                }
                else {
                  uVar5 = uVar2;
                  func_0x000107c5ee30();
                  uStack_108 = uVar3;
                  uStack_100 = uVar5;
                  func_0x000107c61170(uVar2);
                }
                uStack_90 = uStack_c8;
                uVar9 = uStack_c8;
                func_0x000107c614e4();
                puVar8 = &uStack_90;
                func_0x000107c5fb18(puVar8,uVar9);
                pcVar11 = *(code **)(lStack_e0 + 0x10);
                *(long *)(lVar12 + -0x10) = lStack_e0;
                uVar5 = uStack_e8;
                uVar2 = uStack_100;
                uVar3 = uStack_108;
                lVar1 = lVar12;
                (*pcVar11)(lVar12,uStack_e8,uStack_d8,uStack_100,uStack_108,puVar8,uVar9,uStack_f8);
                func_0x000107c6142c(uVar9);
                func_0x0001000b44c0(uVar2,uVar3);
                func_0x0001000b44c0(uVar5,uStack_d8);
                puVar4 = &UNK_11048c178;
                func_0x000107c613fc(&UNK_11048c178,0x18,7);
                func_0x000107c61644(puVar4 + 0x10,param_7);
                puVar10 = &UNK_11048c1f0;
                func_0x000107c613fc(&UNK_11048c1f0,0x30,7);
                uVar2 = uStack_d0;
                *(undefined **)(puVar10 + 0x10) = puVar4;
                *(undefined8 *)(puVar10 + 0x18) = param_6;
                *(undefined8 *)(puVar10 + 0x20) = param_5;
                *(ulong *)(puVar10 + 0x28) = uStack_d0;
                func_0x000107c6157c(param_5);
                func_0x000107c61174(uVar2);
                func_0x00010075a04c(0,1,FUN_101e2ee6c,puVar10);
                func_0x000107c61170(uVar2);
                func_0x000107c61574(param_7);
                func_0x000107c61574(lVar1);
                func_0x000107c61574(puVar10);
                (**(code **)(lVar13 + 8))(lVar12,lStack_c0);
                func_0x0001000834e4(&uStack_b8);
                return;
              }
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x101e2e364);
              (*pcVar11)();
            }
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x101e2e360);
            (*pcVar11)();
          }
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x101e2e35c);
          (*pcVar11)();
        }
        func_0x000107c61574(param_7);
        func_0x0001000293e4(puVar14);
        uVar2 = uStack_d0;
      }
    }
    uStack_b8 = 0;
    uStack_b0 = 0xe000000000000000;
    func_0x000107c602fc(0x40);
    func_0x000107c5fb78(0xd00000000000003e,0x800000010f013a20);
    puVar4 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
    uStack_90 = param_6;
    func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                        PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar4);
    uVar9 = uStack_b0;
    uVar3 = uStack_b8;
    uVar7 = 0x636973756d;
    func_0x000107c5fadc(0x636973756d,0xe500000000000000);
    func_0x000107c5fadc(uVar3,uVar9);
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar3);
    func_0x000107c6142c(uVar9);
    func_0x00010488ade0(puVar4);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 101e2e9e4; end: 101e2eae7;  */

undefined1  [16] FUN_101e2e9e4(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auVar7 [16];
  
  if (param_1 == 1) {
    lVar2 = *(long *)(unaff_x20 + 0x50);
    func_0x000107c3fa04();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e2eae8);
      (*pcVar1)();
    }
    uVar3 = 0xd00000000000002a;
    func_0x000107c5fadc(0xd00000000000002a,0x800000010f013860);
    uVar4 = 0xd000000000000012;
    uVar6 = 0x800000010f013890;
    func_0x000107c5fadc(0xd000000000000012,0x800000010f013890);
    lVar5 = lVar2;
    func_0x000107c5c1dc(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
  }
  else {
    lVar2 = 0;
    if (param_1 == 0) {
      lVar2 = -0x2ffffffffffffff0;
    }
    uVar6 = 0;
    if (param_1 == 0) {
      uVar6 = 0x800000010f0138b0;
    }
  }
  auVar7._8_8_ = uVar6;
  auVar7._0_8_ = lVar2;
  return auVar7;
}



/* Entry: 101e2eae8; end: 101e2eb7b;  */

void FUN_101e2eae8(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001000834e4(unaff_x20 + 0x28);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 101e2eb7c; end: 101e2eb83;  */

void FUN_101e2eb7c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 101e2eb84; end: 101e2ebcf;  */

undefined8 * FUN_101e2eb84(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  param_1[1] = param_2[1];
  return param_1;
}



/* Entry: 101e2ebd0; end: 101e2ec0b;  */

undefined8 * FUN_101e2ebd0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61170(uVar1);
  param_1[1] = param_2[1];
  return param_1;
}



/* Entry: 101e2ec0c; end: 101e2eca3;  */

int FUN_101e2ec0c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101e2eca4; end: 101e2ed83;  */

undefined * FUN_101e2eca4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c602fc(0x24);
  func_0x000107c6142c(0xe000000000000000);
  puVar1 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
  func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                      PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar1);
  uVar2 = 0xd000000000000022;
  puVar1 = PTR_PTR_1126b08b8;
  func_0x000107c610f8(PTR_PTR_1126b08b8);
  func_0x000107c5fadc(0xd000000000000022,0x800000010f0138d0);
  func_0x000107c6142c(0x800000010f0138d0);
  func_0x000107c4766c(puVar1);
  func_0x000107c61170(uVar2);
  return puVar1;
}



/* Entry: 101e2ed84; end: 101e2edab;  */

void FUN_101e2ed84(long param_1,long param_2)

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



/* Entry: 101e2edac; end: 101e2ee6b;  */

undefined * FUN_101e2edac(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  char cVar4;
  code *pcVar5;
  int iVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined *unaff_x20;
  undefined *puVar14;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [24];
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  puVar12 = (undefined8 *)0x0;
  if (unaff_x20 == (undefined *)0x0) {
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170();
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  lVar13 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar11 = *(undefined **)(unaff_x20 + 0x28);
  puVar1 = (undefined *)*puVar12;
  uVar2 = puVar12[1];
  cVar4 = *(char *)(puVar12 + 2);
  func_0x000107c61428(lVar13 + 0x10,auStack_b8,0,0);
  puVar7 = (undefined *)(lVar13 + 0x10);
  func_0x000107c61648();
  if (puVar7 != (undefined *)0x0) {
    if (cVar4 == '\x01') {
      iVar6 = 2;
      puStack_e8 = puVar1;
      func_0x000100029b9c(2,0x12,0,0);
      if (iVar6 == 0) goto LAB_101e2e43c;
      func_0x000107c614b0(puVar1);
      uVar8 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(&puStack_e8,uVar8,PTR___ss5ErrorWS_11034ee10);
      func_0x000107c61574(puVar7);
      func_0x000101e2ee78(puVar1,uVar2,1);
    }
    else {
      if (uVar2 >> 0x3c < 0xf) {
        func_0x000100de78a0(puVar1,uVar2);
        puVar9 = puVar11;
        func_0x000107c3e1b0();
        if (puVar9 == (undefined *)0x0) {
LAB_101e2e5c0:
          puVar14 = (undefined *)0x0;
        }
        else {
          puVar9 = puVar11;
          func_0x000107c3e1ac();
          func_0x000107c61180();
          if (puVar9 == (undefined *)0x0) goto LAB_101e2e5c0;
          puStack_e8 = (undefined *)0x0;
          uVar8 = 0;
          func_0x000101e2ef6c(0,0x112dc2f28,&PTR_PTR_1126a79f0);
          func_0x000107c5fc50(puVar9,&puStack_e8,uVar8);
          func_0x000107c61170(puVar9);
          puVar14 = puStack_e8;
        }
        FUN_101e2ee8c(puVar7 + 0x28,&puStack_e8);
        func_0x0001000a8868(&puStack_e8,uStack_d0);
        puVar10 = puVar11;
        func_0x000107c4d2ac();
        func_0x000107c61180();
        if (puVar10 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101e2e7d8);
          (*pcVar5)();
        }
        puVar9 = puVar10;
        (**(code **)(lStack_c8 + 8))();
        func_0x000107c61170(puVar10);
        func_0x000107c6142c(puVar14);
        func_0x0001000834e4(&puStack_e8);
        if (puVar9 == (undefined *)0x0) {
          puStack_e8 = (undefined *)0x0;
          uStack_e0 = 0xe000000000000000;
          func_0x000107c602fc(0x42);
          func_0x000107c5fb78(0xd000000000000040,0x800000010f013aa0);
          puVar11 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
          uStack_c0 = uVar3;
          func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                              PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar11);
          uVar3 = uStack_e0;
          puVar11 = puStack_e8;
          uVar8 = 0x636973756d;
          func_0x000107c5fadc(0x636973756d,0xe500000000000000);
          func_0x000107c5fadc(puVar11,uVar3);
          puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
          func_0x000107c42a5c();
          func_0x000107c61180();
          func_0x000107c61170(uVar8);
          func_0x000107c61170(puVar11);
          func_0x000107c6142c(uVar3);
          func_0x00010488ade0(puVar9);
          func_0x000107c61170(puVar9);
          func_0x000101e2ee78(puVar1,uVar2,cVar4);
          func_0x000107c61574(puVar7);
          return puVar7;
        }
        func_0x000107c4d1f4();
        func_0x000107c61180();
        if (puVar11 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101e2e7dc);
          (*pcVar5)();
        }
        puVar14 = PTR_PTR_1126a6138;
        func_0x000107c610f8();
        func_0x000107c61174(puVar9);
        func_0x000107c48e04();
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar11);
        puStack_e8 = puVar14;
        func_0x000100b60084(&puStack_e8);
        func_0x000101e2ee78(puVar1,uVar2,cVar4);
        func_0x000107c61170(puVar14);
        func_0x000107c61574(puVar7);
        goto LAB_101e2e52c;
      }
LAB_101e2e43c:
      func_0x000107c61574(puVar7);
    }
  }
  puStack_e8 = (undefined *)0x0;
  uStack_e0 = 0xe000000000000000;
  func_0x000107c602fc(0x40);
  func_0x000107c5fb78(0xd00000000000003e,0x800000010f013a60);
  puVar7 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
  uStack_c0 = uVar3;
  func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                      PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar7);
  uVar3 = uStack_e0;
  puVar7 = puStack_e8;
  uVar8 = 0x636973756d;
  func_0x000107c5fadc(0x636973756d,0xe500000000000000);
  func_0x000107c5fadc(puVar7,uVar3);
  puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x000107c42a5c();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c6142c(uVar3);
  func_0x00010488ade0(puVar9);
LAB_101e2e52c:
  func_0x000107c61170(puVar9);
  return puVar9;
}



/* Entry: 101e2ee6c; end: 101e2ee8b;  */

void FUN_101e2ee6c(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  char cVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long unaff_x20;
  undefined *puVar12;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar11 = *(undefined **)(unaff_x20 + 0x28);
  puVar8 = (undefined *)*param_1;
  uVar1 = param_1[1];
  cVar3 = *(char *)(param_1 + 2);
  func_0x000107c61428(lVar6 + 0x10,auStack_78,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61648();
  if (lVar6 != 0) {
    if (cVar3 == '\x01') {
      iVar5 = 2;
      puStack_a8 = puVar8;
      func_0x000100029b9c(2,0x12,0,0);
      if (iVar5 == 0) goto LAB_101e2e43c;
      func_0x000107c614b0(puVar8);
      uVar7 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(&puStack_a8,uVar7,PTR___ss5ErrorWS_11034ee10);
      func_0x000107c61574(lVar6);
      func_0x000101e2ee78(puVar8,uVar1,1);
    }
    else {
      if (uVar1 >> 0x3c < 0xf) {
        func_0x000100de78a0(puVar8,uVar1);
        puVar9 = puVar11;
        func_0x000107c3e1b0();
        if (puVar9 == (undefined *)0x0) {
LAB_101e2e5c0:
          puVar12 = (undefined *)0x0;
        }
        else {
          puVar9 = puVar11;
          func_0x000107c3e1ac();
          func_0x000107c61180();
          if (puVar9 == (undefined *)0x0) goto LAB_101e2e5c0;
          puStack_a8 = (undefined *)0x0;
          uVar7 = 0;
          func_0x000101e2ef6c(0,0x112dc2f28,&PTR_PTR_1126a79f0);
          func_0x000107c5fc50(puVar9,&puStack_a8,uVar7);
          func_0x000107c61170(puVar9);
          puVar12 = puStack_a8;
        }
        FUN_101e2ee8c(lVar6 + 0x28,&puStack_a8);
        func_0x0001000a8868(&puStack_a8,uStack_90);
        puVar10 = puVar11;
        func_0x000107c4d2ac();
        func_0x000107c61180();
        if (puVar10 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101e2e7d8);
          (*pcVar4)();
        }
        puVar9 = puVar10;
        (**(code **)(lStack_88 + 8))();
        func_0x000107c61170(puVar10);
        func_0x000107c6142c(puVar12);
        func_0x0001000834e4(&puStack_a8);
        if (puVar9 == (undefined *)0x0) {
          puStack_a8 = (undefined *)0x0;
          uStack_a0 = 0xe000000000000000;
          func_0x000107c602fc(0x42);
          func_0x000107c5fb78(0xd000000000000040,0x800000010f013aa0);
          puVar11 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
          uStack_80 = uVar2;
          func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                              PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar11);
          uVar2 = uStack_a0;
          puVar11 = puStack_a8;
          uVar7 = 0x636973756d;
          func_0x000107c5fadc(0x636973756d,0xe500000000000000);
          func_0x000107c5fadc(puVar11,uVar2);
          puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
          func_0x000107c42a5c();
          func_0x000107c61180();
          func_0x000107c61170(uVar7);
          func_0x000107c61170(puVar11);
          func_0x000107c6142c(uVar2);
          func_0x00010488ade0(puVar9);
          func_0x000107c61170(puVar9);
          func_0x000101e2ee78(puVar8,uVar1,cVar3);
          func_0x000107c61574(lVar6);
          return;
        }
        func_0x000107c4d1f4();
        func_0x000107c61180();
        if (puVar11 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101e2e7dc);
          (*pcVar4)();
        }
        puVar12 = PTR_PTR_1126a6138;
        func_0x000107c610f8();
        func_0x000107c61174(puVar9);
        func_0x000107c48e04();
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar11);
        puStack_a8 = puVar12;
        func_0x000100b60084(&puStack_a8);
        func_0x000101e2ee78(puVar8,uVar1,cVar3);
        func_0x000107c61170(puVar12);
        func_0x000107c61574(lVar6);
        goto LAB_101e2e52c;
      }
LAB_101e2e43c:
      func_0x000107c61574(lVar6);
    }
  }
  puStack_a8 = (undefined *)0x0;
  uStack_a0 = 0xe000000000000000;
  func_0x000107c602fc(0x40);
  func_0x000107c5fb78(0xd00000000000003e,0x800000010f013a60);
  puVar8 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
  uStack_80 = uVar2;
  func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                      PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar8);
  uVar2 = uStack_a0;
  puVar8 = puStack_a8;
  uVar7 = 0x636973756d;
  func_0x000107c5fadc(0x636973756d,0xe500000000000000);
  func_0x000107c5fadc(puVar8,uVar2);
  puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x000107c42a5c();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar8);
  func_0x000107c6142c(uVar2);
  func_0x00010488ade0(puVar9);
LAB_101e2e52c:
  func_0x000107c61170(puVar9);
  return;
}



/* Entry: 101e2ee8c; end: 101e2eecf;  */

long FUN_101e2ee8c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101e2eed0; end: 101e2eeff;  */

/* WARNING: Removing unreachable block (ram,0x000101e2cca0) */

void FUN_101e2eed0(ulong param_1,ulong param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar11;
  long lVar12;
  long unaff_x20;
  long lVar13;
  long lVar14;
  long alStack_120 [2];
  undefined8 uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  long lStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 auStack_88 [5];
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_c0 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = (long)&uStack_110 - extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar12 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar13 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if ((param_2 >> 0x3c < 0xf) && (param_3 == 0)) {
    lStack_c8 = lVar1;
    func_0x000107c610f8(PTR_PTR_1126bfda0);
    func_0x000100de78a0(param_1,param_2);
    uVar2 = param_1;
    FUN_101e2edac(param_1,param_2);
    uVar5 = uVar2;
    func_0x000107c449b0();
    if ((uVar5 & 1) == 0) {
      uStack_b8 = 0;
      uStack_b0 = 0xe000000000000000;
      func_0x000107c602fc(0x3a);
      func_0x000107c5fb78(0xd000000000000038,0x800000010f013bf0);
      puVar4 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
      auStack_88[0] = uVar3;
      func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                          PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar4);
      uVar9 = uStack_b0;
      uVar3 = uStack_b8;
      uVar7 = 0x636973756d;
      func_0x000107c5fadc(0x636973756d,0xe500000000000000);
      func_0x000107c5fadc(uVar3,uVar9);
      puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
      func_0x000107c42a5c();
    }
    else {
      uVar5 = uVar2;
      func_0x000107c449a8();
      if ((int)uVar5 == 0) {
        uStack_b8 = 0;
        uStack_b0 = 0xe000000000000000;
        func_0x000107c602fc(0x3e);
        func_0x000107c5fb78(0xd00000000000003c,0x800000010f013c30);
        puVar4 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
        auStack_88[0] = uVar3;
        func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                            PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
        func_0x000107c5fb78();
        func_0x000107c6142c(puVar4);
        uVar9 = uStack_b0;
        uVar3 = uStack_b8;
        uVar7 = 0x636973756d;
        func_0x000107c5fadc(0x636973756d,0xe500000000000000);
        func_0x000107c5fadc(uVar3,uVar9);
        puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
        func_0x000107c42a5c();
      }
      else {
        puVar8 = auStack_88;
        func_0x000107c61428(lVar6 + 0x10,puVar8,0,0);
        lVar6 = lVar6 + 0x10;
        func_0x000107c61648();
        if (lVar6 != 0) {
          uStack_d0 = uVar2;
          func_0x000107c4d2ac();
          func_0x000107c61180();
          if (uVar2 == 0) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x101e2d49c);
            (*pcVar11)();
          }
          uVar5 = uVar2;
          func_0x000107c42794();
          func_0x000107c61180();
          func_0x000107c61170(uVar2);
          if (uVar5 == 0) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x101e2d4a0);
            (*pcVar11)();
          }
          uVar2 = uVar5;
          lStack_d8 = lVar6;
          func_0x000107c40500();
          func_0x000107c61180();
          func_0x000107c61170(uVar5);
          if (uVar2 == 0) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x101e2d4a4);
            (*pcVar11)();
          }
          uVar5 = uVar2;
          func_0x000107c5faec(uVar2);
          func_0x000107c61170(uVar2);
          func_0x000107c5edd0(lVar14,uVar5,puVar8);
          func_0x000107c6142c(puVar8);
          lVar1 = lVar14;
          (**(code **)(lVar12 + 0x30))(lVar14,1,lStack_c8);
          if ((int)lVar1 != 1) {
            (**(code **)(lVar12 + 0x20))(lVar13,lVar14,lStack_c8);
            func_0x0001000d224c(&uStack_b8);
            puVar8 = &uStack_b8;
            uVar7 = uStack_a0;
            func_0x0001000a8868();
            uVar2 = uStack_d0;
            puStack_e8 = puVar8;
            func_0x000107c4d2ac();
            func_0x000107c61180();
            if (uVar2 == 0) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x101e2d4a8);
              (*pcVar11)();
            }
            lStack_f0 = lStack_98;
            uVar5 = uVar2;
            func_0x000107c42794();
            func_0x000107c61180();
            func_0x000107c61170(uVar2);
            if (uVar5 != 0) {
              uVar2 = uVar5;
              func_0x000107c4271c();
              func_0x000107c61180();
              func_0x000107c61170(uVar5);
              if (uVar2 == 0) {
                uStack_f8 = 0;
                uStack_e0 = 0xf000000000000000;
              }
              else {
                uVar5 = uVar2;
                func_0x000107c5ee30();
                uStack_f8 = uVar5;
                uStack_e0 = uVar7;
                func_0x000107c61170(uVar2);
              }
              uVar2 = uStack_d0;
              func_0x000107c4d2ac();
              func_0x000107c61180();
              if (uVar2 != 0) {
                uVar5 = uVar2;
                func_0x000107c42794();
                func_0x000107c61180();
                func_0x000107c61170(uVar2);
                if (uVar5 != 0) {
                  uVar2 = uVar5;
                  func_0x000107c42718();
                  func_0x000107c61180();
                  func_0x000107c61170(uVar5);
                  uStack_100 = uStack_a0;
                  if (uVar2 == 0) {
                    uStack_110 = 0xf000000000000000;
                    uStack_108 = 0;
                  }
                  else {
                    uVar5 = uVar2;
                    func_0x000107c5ee30();
                    uStack_110 = uVar7;
                    uStack_108 = uVar5;
                    func_0x000107c61170(uVar2);
                  }
                  uStack_90 = uVar9;
                  func_0x000107c614e4(uVar9);
                  puVar8 = &uStack_90;
                  func_0x000107c5fb18(puVar8,uVar9);
                  pcVar11 = *(code **)(lStack_f0 + 0x10);
                  *(long *)(lVar13 + -0x10) = lStack_f0;
                  uVar5 = uStack_f8;
                  uVar2 = uStack_108;
                  uVar7 = uStack_110;
                  lVar6 = lVar13;
                  (*pcVar11)(lVar13,uStack_f8,uStack_e0,uStack_108,uStack_110,puVar8,uVar9,
                             uStack_100);
                  func_0x000107c6142c(uVar9);
                  func_0x0001000b44c0(uVar2,uVar7);
                  func_0x0001000b44c0(uVar5,uStack_e0);
                  puVar4 = &UNK_11048c178;
                  func_0x000107c613fc(&UNK_11048c178,0x18,7);
                  lVar1 = lStack_d8;
                  func_0x000107c61644(puVar4 + 0x10,lStack_d8);
                  puVar10 = &UNK_11048c268;
                  func_0x000107c613fc(&UNK_11048c268,0x38,7);
                  uVar2 = uStack_d0;
                  *(undefined **)(puVar10 + 0x10) = puVar4;
                  *(undefined8 *)(puVar10 + 0x18) = 0;
                  *(undefined8 *)(puVar10 + 0x20) = uVar3;
                  *(undefined8 *)(puVar10 + 0x28) = uStack_c0;
                  *(ulong *)(puVar10 + 0x30) = uStack_d0;
                  func_0x000107c6157c();
                  func_0x000107c61174(uVar2);
                  func_0x00010075a04c(0,1,0x101e2eedc,puVar10);
                  func_0x000107c61170(uVar2);
                  func_0x000107c61574(lVar1);
                  func_0x000107c61574(lVar6);
                  func_0x000107c61574(puVar10);
                  func_0x0001000b44c0(param_1,param_2);
                  (**(code **)(lVar12 + 8))(lVar13,lStack_c8);
                  func_0x0001000834e4(&uStack_b8);
                  return;
                }
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x101e2d4b4);
                (*pcVar11)();
              }
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x101e2d4b0);
              (*pcVar11)();
            }
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x101e2d4ac);
            (*pcVar11)();
          }
          func_0x000107c61574(lStack_d8);
          func_0x0001000293e4(lVar14);
          uVar2 = uStack_d0;
        }
        uStack_b8 = 0;
        uStack_b0 = 0xe000000000000000;
        func_0x000107c602fc(0x40);
        func_0x000107c5fb78(0xd00000000000003e,0x800000010f013a20);
        puVar4 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
        uStack_90 = uVar3;
        func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                            PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
        func_0x000107c5fb78();
        func_0x000107c6142c(puVar4);
        uVar9 = uStack_b0;
        uVar3 = uStack_b8;
        uVar7 = 0x636973756d;
        func_0x000107c5fadc(0x636973756d,0xe500000000000000);
        func_0x000107c5fadc(uVar3,uVar9);
        puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
        func_0x000107c42a5c();
      }
    }
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar3);
    func_0x000107c6142c(uVar9);
    func_0x00010488ade0(puVar4);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar4);
    func_0x0001000b44c0(param_1,param_2);
  }
  else {
    uStack_b8 = 0;
    uStack_b0 = 0xe000000000000000;
    func_0x000107c602fc(0x49);
    func_0x000107c5fb78(0xd000000000000047,0x800000010f013b50);
    puVar4 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
    auStack_88[0] = uVar3;
    func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                        PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar4);
    uVar9 = uStack_b0;
    uVar3 = uStack_b8;
    uVar7 = 0x636973756d;
    func_0x000107c5fadc(0x636973756d,0xe500000000000000);
    func_0x000107c5fadc(uVar3,uVar9);
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar3);
    func_0x000107c6142c(uVar9);
    func_0x00010488ade0(puVar4);
    func_0x000107c61170(puVar4);
  }
  return;
}



/* Entry: 101e2ef00; end: 101e2ef37;  */

void FUN_101e2ef00(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101e2b720(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                FUN_101e2c72c);
  return;
}



/* Entry: 101e2ef38; end: 101e2efab;  */

void FUN_101e2ef38(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5ed2c();
  func_0x000107c3fef8(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101e2efac; end: 101e2efe7;  */

void FUN_101e2efac(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101e2b720(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                FUN_101e2b890);
  return;
}



/* Entry: 101e2efe8; end: 101e2f01b;  */

void FUN_101e2efe8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5ed2c();
  func_0x000107c3fef8(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101e2f01c; end: 101e2f04f;  */

void FUN_101e2f01c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 101e2f050; end: 101e2f057;  */

void FUN_101e2f050(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101e2f058; end: 101e2f07b;  */

void FUN_101e2f058(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e2f07c; end: 101e2f10f;  */

void FUN_101e2f07c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001000285a8(0x112e317b0,&UNK_10da1a9b0);
  func_0x000107c613fc();
  func_0x000107c6157c();
  uVar1 = 0x101e2f190;
  func_0x0001000bdd8c();
  uVar2 = uVar1;
  func_0x0001003a5b88();
  func_0x000107c61574(uVar1);
  func_0x0001002b1748(0);
  func_0x000107c610f8();
  func_0x0001006f8634();
  *param_1 = uVar2;
  return;
}



/* Entry: 101e2f110; end: 101e2f15f;  */

void FUN_101e2f110(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112e31888 != 0) {
    return;
  }
  puVar1 = &UNK_11048c4b8;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112e31888 = param_1;
  return;
}



/* Entry: 101e2f160; end: 101e2f193;  */

bool FUN_101e2f160(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101e2f194; end: 101e2f1e3;  */

undefined8 FUN_101e2f194(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c610f8();
  uVar1 = param_1;
  FUN_101e30890(param_1,param_2);
  func_0x000107c615e8(param_1);
  return uVar1;
}



/* Entry: 101e2f1e4; end: 101e2f1fb;  */

void FUN_101e2f1e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e2f1fc,0,0);
  return;
}



/* Entry: 101e2f1fc; end: 101e2f357;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e2f1fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x22;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  lVar2 = *(long *)(*(long *)(unaff_x22 + 0x40) + _DAT_112e31898);
  func_0x000107c5d920(lVar2,param_2,*(undefined8 *)(*(long *)(unaff_x22 + 0x40) + _DAT_112e31890),7)
  ;
  func_0x000107c61180();
  if (lVar2 == 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
    lVar4 = -0x2fffffffffffffcd;
    FUN_101e30d40(0xd000000000000033,0x800000010f013fe0);
    lVar2 = lVar4;
    func_0x000107c5ed2c();
    func_0x000107c61170(lVar4);
    func_0x000107c3fef8(uVar6);
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
    puVar3 = &UNK_11048c778;
    func_0x000107c613fc(&UNK_11048c778,0x20,7);
    puVar5 = (undefined8 *)(unaff_x22 + 0x10);
    *puVar5 = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(puVar3 + 0x10) = uVar1;
    *(undefined8 *)(puVar3 + 0x18) = uVar6;
    *(code **)(unaff_x22 + 0x30) = FUN_101e313d4;
    *(undefined **)(unaff_x22 + 0x38) = puVar3;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x20) = &UNK_100bcda3c;
    *(undefined **)(unaff_x22 + 0x28) = &UNK_11048c790;
    func_0x000107c60bc4(puVar5);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
    func_0x000107c61174(uVar1);
    func_0x000107c61174();
    func_0x000107c61574(uVar6);
    func_0x000107c5dc64(lVar2);
    func_0x000107c60bd0(puVar5);
  }
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x000101e2f354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e2f358; end: 101e2f4af;  */

/* WARNING: Possible PIC construction at 0x000101e2f398: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e2f3ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e2f488: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e2f3b0) */
/* WARNING: Removing unreachable block (ram,0x000107c614ac) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0194) */
/* WARNING: Removing unreachable block (ram,0x000101e2f39c) */
/* WARNING: Removing unreachable block (ram,0x000101e2f48c) */

void FUN_101e2f358(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_38;
  
  if (param_2 == 0) {
    if (param_1 != 0) {
      lStack_38 = 0;
      uVar2 = 0;
      FUN_101e313dc(0,0x112d4edd8,&PTR_PTR_1126badc0);
      func_0x000107c5fc50(param_1,&lStack_38,uVar2);
      lVar1 = lStack_38;
      if (lStack_38 != 0) {
        lVar3 = lStack_38;
        FUN_101e30e8c(lStack_38);
        func_0x000107c6142c(lVar1);
        uVar2 = 0;
        FUN_101e313dc(0,0x112d52cf8,&PTR_PTR_1126d95a8);
        param_2 = lVar3;
        func_0x000107c5fc48(lVar3,uVar2);
        func_0x000107c6142c(lVar3);
        func_0x000107c3fefc(param_3);
        goto code_r0x000107c61170;
      }
    }
    param_2 = -0x2fffffffffffffdb;
    FUN_101e30d40(0xd000000000000025,0x800000010f014020);
    func_0x000107c5ed2c();
  }
  else {
    func_0x000107c614b0(param_2);
    func_0x000107c5ed2c(param_2);
    func_0x000107c5ed2c();
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101e2f4b0; end: 101e2f5ab; -[_TtC27SCMusicUserDataServicesImpl20MusicUserDataWrapper fetchItems] */

void FUN_101e2f4b0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ae560;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c453e4();
  puVar2 = &UNK_11048c610;
  func_0x000107c613fc(&UNK_11048c610,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61174(puVar1);
  uVar3 = 3;
  func_0x0001009548b0(3,2,0x50,4,0,0,&UNK_10da1ab18,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  puVar2 = puVar1;
  func_0x000107c43bf4(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 101e2f5ac; end: 101e2f5cb;  */

void FUN_101e2f5ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_5;
  *(undefined8 *)(unaff_x22 + 0x60) = param_6;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e2f5cc,0,0);
  return;
}



/* Entry: 101e2f5cc; end: 101e2f717;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e2f5cc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  lVar5 = *(long *)(unaff_x22 + 0x40);
  uVar4 = *(undefined8 *)(lVar5 + _DAT_112e31898);
  if (*(ulong *)(unaff_x22 + 0x50) >> 0x3c < 0xf) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
    func_0x000107c5ee20(uVar6);
    lVar5 = *(long *)(unaff_x22 + 0x40);
  }
  else {
    uVar6 = 0;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c5d924(uVar4);
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  puVar2 = &UNK_11048c728;
  func_0x000107c613fc(&UNK_11048c728,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(long *)(puVar2 + 0x18) = lVar5;
  *(code **)(unaff_x22 + 0x30) = FUN_101e30d38;
  *(undefined **)(unaff_x22 + 0x38) = puVar2;
  puVar3 = (undefined8 *)(unaff_x22 + 0x10);
  *puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(undefined8 *)(unaff_x22 + 0x20) = 0x101e31448;
  *(undefined **)(unaff_x22 + 0x28) = &UNK_11048c740;
  func_0x000107c60bc4();
  uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c61174(uVar1);
  func_0x000107c61174();
  func_0x000107c61574(uVar6);
  func_0x000107c5dc64(uVar4);
  func_0x000107c60bd0(puVar3);
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000101e2f714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e2f718; end: 101e2f8bf;  */

/* WARNING: Possible PIC construction at 0x000101e2f758: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e2f76c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e2f7d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e2f814: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e2f8a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e2f848: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e2f8a4) */
/* WARNING: Removing unreachable block (ram,0x000101e2f818) */
/* WARNING: Removing unreachable block (ram,0x000101e2f7d8) */
/* WARNING: Removing unreachable block (ram,0x000101e2f860) */
/* WARNING: Removing unreachable block (ram,0x000101e2f868) */
/* WARNING: Removing unreachable block (ram,0x000101e2f800) */
/* WARNING: Removing unreachable block (ram,0x000101e2f770) */
/* WARNING: Removing unreachable block (ram,0x000107c614ac) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0194) */
/* WARNING: Removing unreachable block (ram,0x000101e2f75c) */
/* WARNING: Removing unreachable block (ram,0x000101e2f84c) */
/* WARNING: Removing unreachable block (ram,0x000101e2f8a8) */

void FUN_101e2f718(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    if (param_1 == 0) {
      param_1 = -0x2fffffffffffffe5;
      FUN_101e30d40(0xd00000000000001b,0x800000010f013fa0);
      func_0x000107c5ed2c();
    }
    else {
      func_0x000107c61174();
      func_0x000107c4a7d4();
      func_0x000107c61180();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e2f8c0);
        (*pcVar1)();
      }
      uVar2 = 0;
      FUN_101e313dc(0,0x112d4edd8,&PTR_PTR_1126badc0);
      func_0x000107c5fc54(param_1,uVar2);
    }
  }
  else {
    func_0x000107c614b0(param_2);
    func_0x000107c5ed2c(param_2);
    func_0x000107c5ed2c();
    param_1 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


