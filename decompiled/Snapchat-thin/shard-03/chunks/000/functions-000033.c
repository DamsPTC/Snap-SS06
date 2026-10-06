/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1023c35fc; end: 1023c36a7;  */

void FUN_1023c35fc(void)

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



/* Entry: 1023c36a8; end: 1023c3703;  */

void FUN_1023c36a8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 1023c3704; end: 1023c3747;  */

void FUN_1023c3704(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 1023c3748; end: 1023c3757;  */

bool FUN_1023c3748(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1023c3758; end: 1023c3d97;  */

long FUN_1023c3758(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = &UNK_1104fe0a8;
  func_0x000107c613fc(&UNK_1104fe0a8,0x68,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  uVar2 = 0x112e930f8;
  func_0x0001000285a8(0x112e930f8,&UNK_10da9ee90);
  func_0x000107c613fc();
  pcVar3 = FUN_1023c3d98;
  func_0x0001000bdd8c(FUN_1023c3d98,puVar1,uVar2);
  *(code **)(unaff_x20 + 0x10) = pcVar3;
  return unaff_x20;
}



/* Entry: 1023c3d98; end: 1023c3d9b;  */

void FUN_1023c3d98(void)

{
  long unaff_x20;
  
  func_0x0001023c3934(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 1023c3d9c; end: 1023c3e4b;  */

void FUN_1023c3d9c(void)

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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1023c3e4c; end: 1023c3eab;  */

void FUN_1023c3e4c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  
  uVar1 = 0x112e93100;
  func_0x0001000285a8(0x112e93100,&UNK_10da9ee98);
  pcVar2 = FUN_1023c3eac;
  func_0x0001000cb480(FUN_1023c3eac,0,uVar1);
  func_0x000103bbc084(0);
  func_0x000107c610f8();
  func_0x000103bbbfc8(pcVar2);
  return;
}



/* Entry: 1023c3eac; end: 1023c3ebf;  */

void FUN_1023c3eac(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1023c3ec0; end: 1023c3f5f;  */

void FUN_1023c3ec0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1023c3f60; end: 1023c3fcb;  */

void FUN_1023c3f60(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  uVar2 = 0x112e93100;
  func_0x0001000285a8(0x112e93100,&UNK_10da9ee98);
  pcVar1 = FUN_1023c3eac;
  func_0x0001000cb480(FUN_1023c3eac,0,uVar2);
  uVar2 = 0;
  func_0x000103bbc084(0);
  func_0x000107c610f8();
  func_0x000103bbbfc8(pcVar1,uVar2);
  *param_1 = pcVar1;
  return;
}



/* Entry: 1023c3fcc; end: 1023c41f7;  */

undefined8 FUN_1023c3fcc(ulong *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long *unaff_x20;
  ulong uVar3;
  long lVar4;
  long alStack_88 [9];
  
  lVar4 = *unaff_x20;
  func_0x000107c6068c(alStack_88,*(undefined8 *)(lVar4 + 0x28));
  uVar3 = param_2;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar2 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
  uVar3 = uVar3 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar4 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0) {
    do {
      if (*(ulong *)(*(long *)(lVar4 + 0x30) + uVar3 * 8) == param_2) {
        uVar1 = 0;
        goto LAB_1023c409c;
      }
      uVar3 = uVar3 + 1 & ~uVar2;
    } while ((*(ulong *)(lVar4 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0);
  }
  lVar4 = *unaff_x20;
  func_0x000107c61558(lVar4);
  alStack_88[0] = *unaff_x20;
  func_0x0001023c40b8(param_2,uVar3,lVar4);
  *unaff_x20 = alStack_88[0];
  uVar1 = 1;
LAB_1023c409c:
  *param_1 = param_2;
  return uVar1;
}



/* Entry: 1023c41f8; end: 1023c4407;  */

void FUN_1023c41f8(long param_1)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auStack_a8 [72];
  
  lVar13 = *unaff_x20;
  lVar1 = *(long *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar4 = 0x112e93200;
  func_0x0001000285a8(0x112e93200,&UNK_10da9ef10);
  lVar5 = lVar13;
  func_0x000107c602e0(lVar13,lVar1,0,uVar4);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_1023c43d0:
    func_0x000107c61574(lVar13);
    *unaff_x20 = lVar5;
    return;
  }
  uVar9 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)(lVar13 + 0x38);
  lVar1 = lVar5 + 0x38;
  lVar7 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar15 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1023c4404);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar15) goto LAB_1023c43d0;
        uVar12 = ((ulong *)(lVar13 + 0x38))[lVar15];
        lVar7 = lVar7 + 1;
      } while (uVar12 == 0);
      uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar15 = lVar7;
    }
    uVar14 = *(ulong *)(*(long *)(lVar13 + 0x30) + (LZCOUNT(uVar6) | lVar15 << 6) * 8);
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar5 + 0x28));
    uVar10 = uVar14;
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar11 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uVar10 = uVar10 & (uVar11 ^ 0xffffffffffffffff);
    uVar8 = uVar10 >> 6;
    uVar6 = -1L << (uVar10 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar11 >> 6;
      do {
        uVar10 = uVar8 + 1;
        if ((uVar10 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1023c4408);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar10 != uVar6) {
          uVar8 = uVar10;
        }
        bVar2 = (bool)(uVar10 == uVar6 | bVar2);
        uVar10 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar10 == 0xffffffffffffffff);
      uVar10 = ~uVar10;
      uVar6 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
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
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar10 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(ulong *)(*(long *)(lVar5 + 0x30) + uVar6 * 8) = uVar14;
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    lVar7 = lVar15;
  } while( true );
}



/* Entry: 1023c4408; end: 1023c4547;  */

void FUN_1023c4408(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  func_0x0001000285a8(0x112e93200,&UNK_10da9ef10);
  lVar9 = *unaff_x20;
  lVar3 = lVar9;
  func_0x000107c602dc();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x38;
    uVar4 = (1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar3 != lVar9 || lVar1 + uVar4 * 8 <= lVar3 + 0x38U) {
      func_0x000107c610b8(lVar3 + 0x38U,lVar1,uVar4 << 3);
    }
    lVar5 = 0;
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(lVar9 + 0x38);
    do {
      lVar7 = lVar5;
      if (uVar4 == 0) {
        do {
          lVar5 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1023c4548);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_1023c4528;
          uVar4 = *(ulong *)(lVar1 + lVar5 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 * 0x40;
      }
      else {
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 << 6;
      }
      *(undefined8 *)(*(long *)(lVar3 + 0x30) + uVar8 * 8) =
           *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar8 * 8);
    } while( true );
  }
LAB_1023c4528:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar3;
  return;
}



/* Entry: 1023c4548; end: 1023c479b;  */

void FUN_1023c4548(long param_1)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  ulong *puVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auStack_a8 [72];
  
  lVar13 = *unaff_x20;
  lVar1 = *(long *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar4 = 0x112e93200;
  func_0x0001000285a8(0x112e93200,&UNK_10da9ef10);
  lVar5 = lVar13;
  func_0x000107c602e0(lVar13,lVar1,1,uVar4);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_1023c4768:
    func_0x000107c61574(lVar13);
    *unaff_x20 = lVar5;
    return;
  }
  puVar14 = (ulong *)(lVar13 + 0x38);
  uVar9 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar12 = uVar12 & *puVar14;
  lVar1 = lVar5 + 0x38;
  lVar7 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar16 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1023c4798);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar16) {
          uVar12 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
          if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
            *puVar14 = -1L << (uVar12 & 0x3f);
          }
          else {
            func_0x000107c60ee4(puVar14,uVar12 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar13 + 0x10) = 0;
          goto LAB_1023c4768;
        }
        uVar12 = puVar14[lVar16];
        lVar7 = lVar7 + 1;
      } while (uVar12 == 0);
      uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar16 = lVar7;
    }
    uVar15 = *(ulong *)(*(long *)(lVar13 + 0x30) + (LZCOUNT(uVar6) | lVar16 << 6) * 8);
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar5 + 0x28));
    uVar10 = uVar15;
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar11 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uVar10 = uVar10 & (uVar11 ^ 0xffffffffffffffff);
    uVar8 = uVar10 >> 6;
    uVar6 = -1L << (uVar10 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar11 >> 6;
      do {
        uVar10 = uVar8 + 1;
        if ((uVar10 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1023c479c);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar10 != uVar6) {
          uVar8 = uVar10;
        }
        bVar2 = (bool)(uVar10 == uVar6 | bVar2);
        uVar10 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar10 == 0xffffffffffffffff);
      uVar10 = ~uVar10;
      uVar6 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
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
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar10 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(ulong *)(*(long *)(lVar5 + 0x30) + uVar6 * 8) = uVar15;
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    lVar7 = lVar16;
  } while( true );
}



/* Entry: 1023c479c; end: 1023c479f;  */

void FUN_1023c479c(void)

{
  long unaff_x20;
  
  func_0x0001023c3934(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 1023c47a0; end: 1023c4867;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1023c47a0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  lVar1 = _DAT_112e93208;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112e93208);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___CALayer_1126b1750;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    puVar4 = puVar2;
    func_0x000107c3ab24();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    func_0x000107c52b50(puVar3,param_2,puVar4);
    func_0x000107c61170(puVar4);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar5);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 1023c4868; end: 1023c48c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1023c4868(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112e93210;
  lVar2 = *(long *)(unaff_x20 + _DAT_112e93210);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_1023c4c1c();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 1023c48c8; end: 1023c49fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1023c48c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  puVar1 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112e93208) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e93210) = 0;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffffa0,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c61174();
  puVar2 = puVar1;
  func_0x000107c4aba4();
  func_0x000107c61180();
  puVar3 = puVar2;
  FUN_1023c47a0();
  func_0x000107c3d894(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  FUN_1023c4868();
  func_0x000107c3d89c(puVar1);
  func_0x000107c61170(puVar3);
  uVar4 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f096480);
  func_0x000107c520f4(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  return puVar1;
}



/* Entry: 1023c49fc; end: 1023c4a1b; -[_TtC35PreviewFeatureVideoPlaybackControls10DoneButton initWithFrame:] */

void FUN_1023c49fc(void)

{
  FUN_1023c48c8();
  return;
}



/* Entry: 1023c4a1c; end: 1023c4b67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023c4a1c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  double dVar3;
  double dVar4;
  double dVar5;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_layoutSubviews_112600e60);
  func_0x000107c3ec60();
  func_0x000107c609cc();
  lVar1 = unaff_x20;
  dVar3 = param_1;
  func_0x000107c3ec60();
  func_0x000107c609b0();
  dVar4 = dVar3;
  if (param_1 <= dVar3) {
    dVar4 = param_1;
  }
  FUN_1023c47a0();
  lVar2 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  func_0x000107c3ec60();
  func_0x000107c61170(lVar2);
  func_0x000107c54b80(dVar3,param_2,param_3,param_4,lVar1);
  func_0x000107c61170(lVar1);
  func_0x000107c539d4(dVar4 * 0.5,*(undefined8 *)(unaff_x20 + _DAT_112e93208));
  dVar3 = 0.4;
  dVar4 = dVar4 * 0.4;
  func_0x000107c3ec60();
  func_0x000107c609cc();
  dVar3 = dVar3 * 0.5;
  dVar5 = dVar3 - dVar4 * 0.5;
  func_0x000107c3ec60();
  func_0x000107c609cc();
  FUN_1023c4868();
  func_0x000107c54b80(dVar5,dVar3 * 0.5 - dVar4 * 0.5,dVar4,dVar4);
  func_0x000107c61170(unaff_x20);
  return;
}



/* Entry: 1023c4b68; end: 1023c4b8f; -[_TtC35PreviewFeatureVideoPlaybackControls10DoneButton layoutSubviews] */

void FUN_1023c4b68(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1023c4a1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1023c4b90; end: 1023c4bc3;  */

void FUN_1023c4b90(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1023c4bc4; end: 1023c4bfb; -[_TtC35PreviewFeatureVideoPlaybackControls10DoneButton .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001023c4be0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023c4be4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023c4bc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e93208));
  return;
}



/* Entry: 1023c4bfc; end: 1023c4c1b;  */

void FUN_1023c4bfc(void)

{
  func_0x000107c61168(&PTR_PTR_11283a4c0);
  return;
}



/* Entry: 1023c4c1c; end: 1023c4ccb;  */

undefined * FUN_1023c4c1c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x000107c453e4();
  func_0x000107c53840();
  uVar2 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f096460);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x000107c450cc();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c55258(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c45034(puVar1);
  func_0x000107c61180();
  func_0x000107c61170();
  return puVar1;
}



/* Entry: 1023c4ccc; end: 1023c4cdf;  */

bool FUN_1023c4ccc(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1023c4ce0; end: 1023c4d8b;  */

void FUN_1023c4ce0(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1023c4d8c; end: 1023c4e5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1023c4d8c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  lVar1 = _DAT_112e93250;
  puVar3 = *(undefined **)(unaff_x20 + _DAT_112e93250);
  puVar4 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar3 = puVar4;
    func_0x000107c53840();
    if (*(char *)(unaff_x20 + _DAT_112e93240) == '\x01') {
      func_0x0001092017d8();
      func_0x000107c61180();
      if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1023c4df8);
        (*pcVar2)();
      }
    }
    else {
      func_0x0001092017cc();
      func_0x000107c61180();
      if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1023c4e5c);
        (*pcVar2)();
      }
    }
    func_0x000107c55258(puVar4,param_2,puVar3);
    func_0x000107c61170(puVar3);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar4;
    func_0x000107c61174(puVar4);
    func_0x000107c61170(uVar5);
    puVar3 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar3);
  return puVar4;
}



/* Entry: 1023c4e5c; end: 1023c4f27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1023c4e5c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  lVar1 = _DAT_112e93248;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112e93248);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___CALayer_1126b1750;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    puVar4 = puVar2;
    func_0x000107c3ab24();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    func_0x000107c52b50(puVar3,param_2,puVar4);
    func_0x000107c61170(puVar4);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar5);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 1023c4f28; end: 1023c502b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1023c4f28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  
  puVar1 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  *(undefined1 *)(unaff_x20 + _DAT_112e93240) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112e93248) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e93250) = 0;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffffa0,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c4aba4();
  func_0x000107c61180();
  puVar3 = puVar2;
  FUN_1023c4e5c();
  func_0x000107c3d894(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  FUN_1023c4d8c();
  func_0x000107c3d89c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar3);
  return puVar1;
}



/* Entry: 1023c502c; end: 1023c504b; -[_TtC35PreviewFeatureVideoPlaybackControls14PlaybackButton initWithFrame:] */

void FUN_1023c502c(void)

{
  FUN_1023c4f28();
  return;
}



/* Entry: 1023c504c; end: 1023c5197;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023c504c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  double dVar3;
  double dVar4;
  double dVar5;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_layoutSubviews_112600e60);
  func_0x000107c3ec60();
  func_0x000107c609cc();
  lVar1 = unaff_x20;
  dVar3 = param_1;
  func_0x000107c3ec60();
  func_0x000107c609b0();
  dVar4 = dVar3;
  if (param_1 <= dVar3) {
    dVar4 = param_1;
  }
  FUN_1023c4e5c();
  lVar2 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  func_0x000107c3ec60();
  func_0x000107c61170(lVar2);
  func_0x000107c54b80(dVar3,param_2,param_3,param_4,lVar1);
  func_0x000107c61170(lVar1);
  func_0x000107c539d4(dVar4 * 0.5,*(undefined8 *)(unaff_x20 + _DAT_112e93248));
  dVar3 = 0.4;
  dVar4 = dVar4 * 0.4;
  func_0x000107c3ec60();
  func_0x000107c609cc();
  dVar3 = dVar3 * 0.5;
  dVar5 = dVar3 - dVar4 * 0.5;
  func_0x000107c3ec60();
  func_0x000107c609cc();
  FUN_1023c4d8c();
  func_0x000107c54b80(dVar5,dVar3 * 0.5 - dVar4 * 0.5,dVar4,dVar4);
  func_0x000107c61170(unaff_x20);
  return;
}



/* Entry: 1023c5198; end: 1023c51bf; -[_TtC35PreviewFeatureVideoPlaybackControls14PlaybackButton layoutSubviews] */

void FUN_1023c5198(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1023c504c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1023c51c0; end: 1023c51f3;  */

void FUN_1023c51c0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1023c51f4; end: 1023c522b; -[_TtC35PreviewFeatureVideoPlaybackControls14PlaybackButton .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001023c5210: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023c5214) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023c51f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e93248));
  return;
}



/* Entry: 1023c522c; end: 1023c524b;  */

void FUN_1023c522c(void)

{
  func_0x000107c61168(&PTR_PTR_11283a580);
  return;
}



/* Entry: 1023c524c; end: 1023c53b3;  */

int FUN_1023c524c(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1023c52c8;
        goto LAB_1023c52ac;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1023c52ac:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1023c52c8:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1023c53b4; end: 1023c53f3;  */

void FUN_1023c53b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e93280 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da9ef8c;
  func_0x000107c61520(&UNK_10da9ef8c,&UNK_1104fe180);
  puRam0000000112e93280 = puVar1;
  return;
}



/* Entry: 1023c53f4; end: 1023c56d7;  */

long FUN_1023c53f4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1023c56d8; end: 1023c570b;  */

void FUN_1023c56d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulong)param_2 >> 0x20);
  uVar2 = (undefined4)param_2;
  uVar1 = 600;
  func_0x000107c600d0(0x3fe0000000000000);
  uRam0000000113804700 = uVar1;
  uRam0000000113804708 = uVar2;
  uRam000000011380470c = uVar3;
  uRam0000000113804710 = param_3;
  return;
}



/* Entry: 1023c570c; end: 1023c5a3f;  */

/* WARNING: Possible PIC construction at 0x0001023c58e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023c5964: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023c5994: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023c59c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023c5a10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023c59cc) */
/* WARNING: Removing unreachable block (ram,0x0001023c5998) */
/* WARNING: Removing unreachable block (ram,0x0001023c5968) */
/* WARNING: Removing unreachable block (ram,0x0001023c58e8) */
/* WARNING: Removing unreachable block (ram,0x0001023c5a14) */

void FUN_1023c570c(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_80;
  
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar2 = PTR___sSds7CVarArgsWP_11034ddc0;
  lVar8 = *(long *)(param_2 + 0x10);
  if (lVar8 != 0) {
    func_0x000100403514(0,lVar8,0);
    puVar7 = (undefined8 *)(param_2 + 0x30);
    uStack_80 = 1;
    do {
      uVar5 = puVar7[-2];
      uVar6 = puVar7[-1];
      uVar10 = *puVar7;
      lVar4 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x18) = 2;
      *(undefined8 *)(lVar4 + 0x10) = 1;
      uVar9 = uStack_80;
      func_0x000107c600d4(uVar5,uVar6,uVar10);
      *(undefined **)(lVar4 + 0x38) = PTR___sSdN_11034dd90;
      *(undefined **)(lVar4 + 0x40) = puVar2;
      *(undefined8 *)(lVar4 + 0x20) = uVar9;
      uVar5 = 0x66322e25;
      uVar6 = 0xe400000000000000;
      func_0x000107c5fb00(0x66322e25,0xe400000000000000,lVar4);
      uVar1 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
        func_0x000100403514(1 < *(ulong *)(puVar3 + 0x18),uVar1 + 1,1);
      }
      puVar7 = puVar7 + 3;
      *(ulong *)(puVar3 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar3 + uVar1 * 0x10 + 0x20) = uVar5;
      *(undefined8 *)(puVar3 + uVar1 * 0x10 + 0x28) = uVar6;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  uVar5 = *param_1;
  uVar6 = param_1[1];
  uVar9 = param_1[2];
  lVar8 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  func_0x000107c613fc();
  uVar10 = 1;
  *(undefined8 *)(lVar8 + 0x18) = 2;
  *(undefined8 *)(lVar8 + 0x10) = 1;
  func_0x000107c600d4(uVar5,uVar6,uVar9);
  *(undefined **)(lVar8 + 0x38) = PTR___sSdN_11034dd90;
  *(undefined **)(lVar8 + 0x40) = puVar2;
  *(undefined8 *)(lVar8 + 0x20) = uVar10;
  uVar5 = 0xe400000000000000;
  func_0x000107c5fb00(0x66322e25,0xe400000000000000,lVar8);
  func_0x000107c5fb78();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar5);
  return;
}



/* Entry: 1023c5a40; end: 1023c5f0f;  */

undefined * FUN_1023c5a40(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if (param_2 < 2) {
    puVar5 = (undefined *)0x112deb0c0;
    func_0x0001000285a8(0x112deb0c0,&UNK_10d9b73d0);
    func_0x000107c613fc();
    uVar10 = param_1[1];
    uVar9 = *param_1;
    *(undefined8 *)(puVar5 + 0x18) = 2;
    *(undefined8 *)(puVar5 + 0x10) = 1;
    *(undefined8 *)(puVar5 + 0x28) = uVar10;
    *(undefined8 *)(puVar5 + 0x20) = uVar9;
    *(undefined8 *)(puVar5 + 0x30) = param_1[2];
  }
  else {
    uStack_88 = param_1[3];
    uStack_78 = param_1[5];
    uStack_80 = param_1[4];
    func_0x000107c60a50(&uStack_a0,1.0 / (double)param_2,&uStack_88);
    uVar2 = uStack_90;
    uVar10 = uStack_98;
    uVar9 = uStack_a0;
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1023c5c04);
      (*pcVar3)();
    }
    func_0x000101a02cf8(0,param_2,0);
    uVar8 = 0;
    do {
      uStack_88 = uVar9;
      uStack_80 = uVar10;
      uStack_78 = uVar2;
      func_0x000107c60a50(&uStack_a0,(double)uVar8,&uStack_88);
      uVar4 = uStack_a0;
      uVar6 = uStack_98;
      uVar7 = uStack_90;
      func_0x000107c600b8();
      uVar1 = *(ulong *)(puVar5 + 0x10);
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
        func_0x000101a02cf8(1 < *(ulong *)(puVar5 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar5 + uVar1 * 0x18 + 0x20) = uVar4;
      *(int *)(puVar5 + uVar1 * 0x18 + 0x28) = (int)uVar6;
      *(int *)(puVar5 + uVar1 * 0x18 + 0x2c) = (int)((ulong)uVar6 >> 0x20);
      *(undefined8 *)(puVar5 + uVar1 * 0x18 + 0x30) = uVar7;
      uVar8 = uVar8 + 1;
    } while (param_2 != uVar8);
    FUN_1023c570c(param_1,puVar5);
  }
  return puVar5;
}



/* Entry: 1023c5f10; end: 1023c5fb3;  */

long FUN_1023c5f10(long *param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  lVar1 = *(long *)(unaff_x20 + lVar4);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    (*param_2)();
    func_0x000107c610f8();
    func_0x000107c469a4(0,0,0,0);
    func_0x000107c5a050();
    func_0x000107c3d8b8(lVar1);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar4);
    *(long *)(unaff_x20 + lVar4) = lVar1;
    func_0x000107c61174(lVar1);
    func_0x000107c61170(uVar3);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar1;
}



/* Entry: 1023c5fb4; end: 1023c6157;  */

long FUN_1023c5fb4(long *param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *param_1;
  lVar1 = *(long *)(unaff_x20 + lVar3);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    (*param_2)();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
    *(long *)(unaff_x20 + lVar3) = lVar1;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar1;
}



/* Entry: 1023c6158; end: 1023c6427;  */

void FUN_1023c6158(void)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  
  puVar10 = &DAT_112e932e0;
  FUN_1023c5fb4(&DAT_112e932e0,0x1023c6010);
  puVar13 = puVar10;
  func_0x000107c5dfd0();
  func_0x000107c61180();
  func_0x000107c61170(puVar10);
  uVar3 = 0;
  FUN_1023c8e40(0,0x112d62a98,&PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
  puVar10 = puVar13;
  func_0x000107c5fc54(puVar13,uVar3);
  func_0x000107c61170(puVar13);
  puVar13 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
  if ((ulong)puVar10 >> 0x3e == 0) {
    puVar11 = *(undefined **)(puVar13 + 0x10);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar11 = puVar13;
    if ((undefined *)0x7fffffffffffffff < puVar10) {
      puVar11 = puVar10;
    }
    func_0x000107c60480();
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar8;
  if (puVar11 != (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)puVar10 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar13 + 0x10) <= puVar7) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1023c632c);
            (*pcVar2)();
          }
          puVar4 = *(undefined **)(puVar10 + (long)puVar7 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar4 = puVar7;
          func_0x00010118dc90(puVar7,puVar10);
        }
        puVar1 = puVar7 + 1;
        if (SCARRY8((long)puVar7,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1023c6328);
          (*pcVar2)();
        }
        puVar5 = PTR_PTR_1126b0d88;
        func_0x000107c61168(PTR_PTR_1126b0d88);
        puVar6 = puVar4;
        func_0x000107c6148c(puVar4,puVar5);
        if (puVar6 != (undefined *)0x0) break;
        func_0x000107c61170(puVar4);
        puVar7 = puVar7 + 1;
        if (puVar1 == puVar11) goto LAB_1023c6348;
      }
      puVar7 = puVar8;
      func_0x000107c61550();
      if ((((int)puVar7 == 0) || ((long)puVar8 < 0)) ||
         (puVar7 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar8 >> 0x3e == 0) {
          puVar4 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar4 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar8) {
            puVar4 = puVar8;
          }
          func_0x000107c60480(puVar4);
        }
        puVar7 = (undefined *)0x0;
        FUN_1023ca040(0,puVar4 + 1,1,puVar8);
      }
      uVar9 = (ulong)puVar7 & 0xffffffffffffff8;
      uVar12 = *(ulong *)(uVar9 + 0x10);
      puVar8 = puVar7;
      if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar12) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar9 + 0x18));
        FUN_1023ca040(puVar8,uVar12 + 1,1,puVar7);
        uVar9 = (ulong)puVar8 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar9 + 0x10) = uVar12 + 1;
      *(undefined **)(uVar9 + uVar12 * 8 + 0x20) = puVar6;
      puVar7 = puVar1;
    } while (puVar1 != puVar11);
  }
LAB_1023c6348:
  func_0x000107c6142c(puVar10);
  if ((ulong)puVar8 >> 0x3e == 0) {
    puVar10 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar10 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar8) {
      puVar10 = puVar8;
    }
    func_0x000107c60480();
  }
  if (puVar10 != (undefined *)0x0) {
    uVar12 = 0;
    do {
      if (((ulong)puVar8 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1023c63e8);
          (*pcVar2)();
        }
        uVar9 = *(ulong *)(puVar8 + uVar12 * 8 + 0x20);
        func_0x000107c61174(uVar9);
      }
      else {
        uVar9 = uVar12;
        FUN_1023cbc78(uVar12,puVar8);
      }
      if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1023c63e4);
        (*pcVar2)();
      }
      puVar13 = (undefined *)(uVar12 + 1);
      func_0x000107c5d5ac();
      func_0x000107c61170(uVar9);
      uVar12 = uVar12 + 1;
    } while (puVar13 != puVar10);
  }
  func_0x000107c6142c(puVar8);
  return;
}



/* Entry: 1023c6428; end: 1023c644f; -[_TtC35PreviewFeatureVideoPlaybackControls30PlaybackControlsViewController initWithCoder:] */

void FUN_1023c6428(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_1023c88fc();
  return;
}



/* Entry: 1023c6450; end: 1023c64af; -[_TtC35PreviewFeatureVideoPlaybackControls30PlaybackControlsViewController initWithNibName:bundle:] */

void FUN_1023c6450(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PreviewFeatureVideoPlaybackControls.PlaybackControlsViewController",0x42,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023c647c);
  (*pcVar1)();
}



/* Entry: 1023c64b0; end: 1023c6567; -[_TtC35PreviewFeatureVideoPlaybackControls30PlaybackControlsViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001023c650c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023c652c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023c654c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023c6530) */
/* WARNING: Removing unreachable block (ram,0x0001023c6510) */
/* WARNING: Removing unreachable block (ram,0x0001023c6550) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023c64b0(long param_1)

{
  func_0x0001023c8e80(param_1 + _DAT_112e93290);
  func_0x0001000834e4(param_1 + _DAT_112e932a0);
  func_0x0001000834e4(param_1 + _DAT_112e932a8);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e932b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e932b8));
  return;
}



/* Entry: 1023c6568; end: 1023c6587;  */

void FUN_1023c6568(void)

{
  func_0x000107c61168(&PTR_PTR_11283a648);
  return;
}



/* Entry: 1023c6588; end: 1023c678b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023c6588(void)

{
  long *plVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  long *plVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_viewDidLoad_112684cd8);
  FUN_1023c678c();
  plVar5 = (long *)(unaff_x20 + _DAT_112e932a8);
  plVar1 = plVar5;
  func_0x0001000a8868(plVar5,plVar5[3]);
  uVar9 = *(undefined8 *)(*plVar1 + _DAT_112e93338);
  puVar6 = &UNK_1104fe268;
  puVar2 = puVar6;
  func_0x000107c613fc(&UNK_1104fe268,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  func_0x000107c6157c(uVar9);
  pcVar3 = FUN_1023c8e30;
  puVar8 = puVar2;
  func_0x0001000b6504(FUN_1023c8e30);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(puVar2);
  pcVar4 = pcVar3;
  func_0x000107c614f0(pcVar3);
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112e932b0);
  (**(code **)(puVar8 + 0x10))(uVar10,pcVar4,puVar8);
  func_0x000107c615e8(pcVar3);
  lVar11 = plVar5[3];
  func_0x0001000a8868(plVar5,lVar11);
  lVar12 = *(long *)(lVar11 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar12 + 0x10))(&stack0xffffffffffffffa0 + -extraout_x8);
  plVar5 = (long *)0x0;
  FUN_1023c9070();
  FUN_1023c9090();
  (**(code **)(lVar12 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar11);
  func_0x000107c613fc(&UNK_1104fe268,0x18,7);
  func_0x000107c61614(puVar6 + 0x10);
  uVar9 = 0x1023c8e38;
  puVar2 = puVar6;
  (**(code **)(*plVar5 + 0x60))(0x1023c8e38);
  func_0x000107c61574(plVar5);
  func_0x000107c61574(puVar6);
  uVar7 = uVar9;
  func_0x000107c614f0(uVar9);
  (**(code **)(puVar2 + 0x10))(uVar10,uVar7,puVar2);
  func_0x000107c615e8(uVar9);
  return;
}



/* Entry: 1023c678c; end: 1023c6eb3;  */

/* WARNING: Possible PIC construction at 0x0001023c67dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023c6810: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023c6854: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023c68a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023c68fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023c694c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023c69f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023c6a44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023c6a88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023c6abc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023c6b10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023c6b68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023c6bac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023c6be0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023c6c34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023c6c88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023c6cc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023c6cf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023c6d48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023c6da0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023c6df4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023c6e34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023c6df8) */
/* WARNING: Removing unreachable block (ram,0x0001023c6da4) */
/* WARNING: Removing unreachable block (ram,0x0001023c6d4c) */
/* WARNING: Removing unreachable block (ram,0x0001023c6cfc) */
/* WARNING: Removing unreachable block (ram,0x0001023c6cc8) */
/* WARNING: Removing unreachable block (ram,0x0001023c6c8c) */
/* WARNING: Removing unreachable block (ram,0x0001023c6c38) */
/* WARNING: Removing unreachable block (ram,0x0001023c6be4) */
/* WARNING: Removing unreachable block (ram,0x0001023c6bb0) */
/* WARNING: Removing unreachable block (ram,0x0001023c6b6c) */
/* WARNING: Removing unreachable block (ram,0x0001023c6b14) */
/* WARNING: Removing unreachable block (ram,0x0001023c6ac0) */
/* WARNING: Removing unreachable block (ram,0x0001023c6a8c) */
/* WARNING: Removing unreachable block (ram,0x0001023c6a48) */
/* WARNING: Removing unreachable block (ram,0x0001023c69f4) */
/* WARNING: Removing unreachable block (ram,0x0001023c6950) */
/* WARNING: Removing unreachable block (ram,0x0001023c6900) */
/* WARNING: Removing unreachable block (ram,0x0001023c6eb0) */
/* WARNING: Removing unreachable block (ram,0x0001023c691c) */
/* WARNING: Removing unreachable block (ram,0x0001023c68ac) */
/* WARNING: Removing unreachable block (ram,0x0001023c6eac) */
/* WARNING: Removing unreachable block (ram,0x0001023c68c8) */
/* WARNING: Removing unreachable block (ram,0x0001023c6858) */
/* WARNING: Removing unreachable block (ram,0x0001023c6ea8) */
/* WARNING: Removing unreachable block (ram,0x0001023c6874) */
/* WARNING: Removing unreachable block (ram,0x0001023c6814) */
/* WARNING: Removing unreachable block (ram,0x0001023c6ea4) */
/* WARNING: Removing unreachable block (ram,0x0001023c6828) */
/* WARNING: Removing unreachable block (ram,0x0001023c67e0) */
/* WARNING: Removing unreachable block (ram,0x0001023c6ea0) */
/* WARNING: Removing unreachable block (ram,0x0001023c67f4) */
/* WARNING: Removing unreachable block (ram,0x0001023c6e38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023c678c(void)

{
  code *pcVar1;
  long unaff_x20;
  
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c3d72c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023c6ea0);
  (*pcVar1)();
}



/* Entry: 1023c6eb4; end: 1023c6f87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023c6eb4(ulong *param_1,long param_2)

{
  ulong *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_68 [24];
  
  uVar6 = *param_1;
  uVar4 = param_1[1];
  uVar2 = *(undefined4 *)((long)param_1 + 0xc);
  uVar3 = param_1[1];
  uVar7 = param_1[2];
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puVar1 = (ulong *)(param_2 + _DAT_112e932e8);
    uVar5 = uVar6;
    func_0x000107c600c4(uVar6,uVar3,uVar7,*puVar1,puVar1[1],puVar1[2]);
    if (((uVar5 & 1) != 0) && (*(char *)(param_2 + _DAT_112e932f0) == '\x01')) {
      *puVar1 = uVar6;
      *(int *)(puVar1 + 1) = (int)uVar4;
      *(undefined4 *)((long)puVar1 + 0xc) = uVar2;
      puVar1[2] = uVar7;
      FUN_1023c6158(uVar6,uVar3,uVar7);
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1023c6f88; end: 1023c711b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023c6f88(char *param_1,long param_2)

{
  char cVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_48 [24];
  
  cVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    return;
  }
  if (cVar1 == '\0') {
    puVar4 = &DAT_112e932d0;
    FUN_1023c5f10(&DAT_112e932d0,FUN_1023c522c,&PTR_s_didTapPlaybackButton_112524cd8);
    lVar2 = _DAT_112e93240;
    cVar1 = puVar4[_DAT_112e93240];
    puVar4[_DAT_112e93240] = 1;
    if (cVar1 != '\x01') {
      puVar5 = puVar4;
      FUN_1023c4d8c();
      puVar6 = puVar5;
      if (puVar4[lVar2] == '\x01') {
        func_0x0001092017d8();
        func_0x000107c61180();
        if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1023c70b0);
          (*pcVar3)();
        }
      }
      else {
        func_0x0001092017cc();
        func_0x000107c61180();
        if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1023c711c);
          (*pcVar3)();
        }
      }
LAB_1023c70d4:
      func_0x000107c55258(puVar5);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar6);
    }
  }
  else {
    if (cVar1 != '\x01') goto LAB_1023c7100;
    puVar4 = &DAT_112e932d0;
    FUN_1023c5f10(&DAT_112e932d0,FUN_1023c522c,&PTR_s_didTapPlaybackButton_112524cd8);
    lVar2 = _DAT_112e93240;
    cVar1 = puVar4[_DAT_112e93240];
    puVar4[_DAT_112e93240] = 0;
    if (cVar1 != '\0') {
      puVar5 = puVar4;
      FUN_1023c4d8c();
      puVar6 = puVar5;
      if (puVar4[lVar2] == '\x01') {
        func_0x0001092017d8();
        func_0x000107c61180();
        if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1023c703c);
          (*pcVar3)();
        }
      }
      else {
        func_0x0001092017cc();
        func_0x000107c61180();
        if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1023c70c4);
          (*pcVar3)();
        }
      }
      goto LAB_1023c70d4;
    }
  }
  func_0x000107c61170(puVar4);
LAB_1023c7100:
  func_0x000107c61170();
  return;
}



/* Entry: 1023c711c; end: 1023c7143; -[_TtC35PreviewFeatureVideoPlaybackControls30PlaybackControlsViewController viewDidLoad] */

void FUN_1023c711c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1023c6588();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1023c7144; end: 1023c7153; -[_TtC35PreviewFeatureVideoPlaybackControls30PlaybackControlsViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023c7144(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewWillAppear__1126853f0;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  *(undefined1 *)(param_1 + _DAT_112e932f0) = 1;
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1023c7154; end: 1023c7163; -[_TtC35PreviewFeatureVideoPlaybackControls30PlaybackControlsViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023c7154(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidDisappear__112684c48;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  *(undefined1 *)(param_1 + _DAT_112e932f0) = 0;
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1023c7164; end: 1023c71d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023c7164(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined1 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  uVar2 = *param_4;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,uVar2,param_3);
  *(undefined1 *)(param_1 + _DAT_112e932f0) = param_5;
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1023c71d8; end: 1023c790f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023c71d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  double *pdVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  double dVar10;
  double dVar11;
  undefined1 auStack_d8 [48];
  undefined1 auStack_a8 [48];
  long lStack_78;
  
  func_0x0001008478a8();
  lVar3 = param_5;
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 5;
  *(undefined8 *)(lVar3 + 0x10) = 2;
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112e932b8);
  uVar8 = uVar9;
  func_0x000107c4ace0();
  func_0x000107c61180();
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1023c763c);
    (*pcVar2)();
  }
  lVar5 = lVar4;
  func_0x000107c4ace0();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  uVar6 = uVar8;
  func_0x000107c40284(0x4028000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(lVar5);
  *(undefined8 *)(lVar3 + 0x20) = uVar6;
  uVar8 = uVar9;
  func_0x000107c50890();
  func_0x000107c61180();
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1023c7640);
    (*pcVar2)();
  }
  lVar5 = lVar4;
  func_0x000107c50890();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  dVar10 = -12.0;
  uVar6 = uVar8;
  func_0x000107c40284();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(lVar5);
  *(undefined8 *)(lVar3 + 0x28) = uVar6;
  lVar4 = unaff_x20;
  lStack_78 = lVar3;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1023c7644);
    (*pcVar2)();
  }
  func_0x000107c3ec60();
  func_0x000107c61170(lVar4);
  func_0x000107c609b8(dVar10,param_2,param_3,param_4);
  pdVar1 = (double *)(unaff_x20 + _DAT_112e93298);
  dVar11 = *pdVar1;
  func_0x000107c609b8(dVar11,pdVar1[1],pdVar1[2],pdVar1[3]);
  if (88.0 <= dVar10 - dVar11) {
    func_0x000107c61534(param_5,auStack_d8);
    *(undefined8 *)(param_5 + 0x18) = 5;
    *(undefined8 *)(param_5 + 0x10) = 2;
    uVar8 = uVar9;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    lVar3 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1023c764c);
      (*pcVar2)();
    }
    lVar4 = lVar3;
    func_0x000107c515ac();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    lVar3 = lVar4;
    func_0x000107c3ec1c(lVar4);
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    uVar6 = uVar8;
    func_0x000107c40284(0xc018000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar8);
    func_0x000107c61170(lVar3);
    *(undefined8 *)(param_5 + 0x20) = uVar6;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1023c7650);
      (*pcVar2)();
    }
    lVar3 = unaff_x20;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(unaff_x20);
    uVar8 = uVar9;
    func_0x000107c40284(6.0 - (dVar10 - dVar11));
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    func_0x000107c61170(lVar3);
    *(undefined8 *)(param_5 + 0x28) = uVar8;
  }
  else {
    func_0x000107c61534(param_5,auStack_a8);
    *(undefined8 *)(param_5 + 0x18) = 5;
    *(undefined8 *)(param_5 + 0x10) = 2;
    uVar8 = uVar9;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1023c7648);
      (*pcVar2)();
    }
    lVar3 = unaff_x20;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(unaff_x20);
    uVar6 = uVar8;
    func_0x000107c40284(0xc018000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar8);
    func_0x000107c61170(lVar3);
    *(undefined8 *)(param_5 + 0x20) = uVar6;
    uVar8 = uVar9;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c3ec1c(uVar9);
    func_0x000107c61180();
    uVar6 = uVar8;
    func_0x000107c40284(0xc053000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    *(undefined8 *)(param_5 + 0x28) = uVar6;
  }
  func_0x0001011d6d7c(param_5);
  puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar3 = lStack_78;
  uVar8 = 0;
  FUN_1023c8e40(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar4 = lVar3;
  func_0x000107c5fc48(lVar3,uVar8);
  func_0x000107c3d048(puVar7);
  func_0x000107c6142c(lVar3);
  func_0x000107c61170(lVar4);
  return;
}



/* Entry: 1023c7910; end: 1023c79cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023c7910(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  undefined1 uStack_39;
  long lStack_38;
  
  plVar1 = (long *)(unaff_x20 + _DAT_112e932a8);
  func_0x0001000a8868(plVar1,plVar1[3]);
  lVar2 = *plVar1;
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    func_0x000107c50740(lStack_38);
    func_0x000107c615e8(lStack_38);
  }
  *(undefined1 *)(lVar2 + _DAT_112e93348) = 0;
  uStack_39 = 0;
  func_0x000100087c34(&uStack_39);
  lVar2 = unaff_x20 + _DAT_112e93290;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_1023cfa70();
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 1023c79cc; end: 1023c79f3; -[_TtC35PreviewFeatureVideoPlaybackControls30PlaybackControlsViewController didTapXButton] */

void FUN_1023c79cc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1023c7910();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1023c79f4; end: 1023c7b37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023c79f4(void)

{
  char cVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  undefined1 uStack_38;
  undefined7 uStack_37;
  
  puVar4 = &DAT_112e932d0;
  FUN_1023c5f10(&DAT_112e932d0,FUN_1023c522c,&PTR_s_didTapPlaybackButton_112524cd8);
  cVar1 = puVar4[_DAT_112e93240];
  func_0x000107c61170();
  plVar5 = (long *)(unaff_x20 + _DAT_112e932a8);
  func_0x0001000a8868(plVar5,plVar5[3]);
  lVar6 = *plVar5;
  if (cVar1 == '\x01') {
    func_0x0001000d224c(&uStack_38);
    lVar2 = CONCAT71(uStack_37,uStack_38);
    if (lVar2 != 0) {
      func_0x000107c4e480(lVar2);
      func_0x000107c615e8(lVar2);
    }
    *(undefined1 *)(lVar6 + _DAT_112e93348) = 1;
    uStack_38 = 1;
  }
  else {
    func_0x0001000d224c(&uStack_38);
    lVar2 = CONCAT71(uStack_37,uStack_38);
    if (lVar2 != 0) {
      func_0x000107c50740(lVar2);
      func_0x000107c615e8(lVar2);
    }
    *(undefined1 *)(lVar6 + _DAT_112e93348) = 0;
    uStack_38 = 0;
  }
  func_0x000100087c34(&uStack_38);
  puVar4 = PTR_PTR_1126affa8;
  func_0x000107c61168();
  func_0x000107c5aa04();
  func_0x000107c61180();
  if (puVar4 != (undefined *)0x0) {
    func_0x000107c4e57c();
    func_0x000107c61170(puVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1023c7b38);
  (*pcVar3)();
}



/* Entry: 1023c7b38; end: 1023c7b5f; -[_TtC35PreviewFeatureVideoPlaybackControls30PlaybackControlsViewController didTapPlaybackButton] */

void FUN_1023c7b38(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1023c79f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1023c7b60; end: 1023c7c4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023c7b60(void)

{
  code *pcVar1;
  long *plVar2;
  undefined *puVar3;
  long unaff_x20;
  long lVar4;
  undefined1 uStack_39;
  long lStack_38;
  
  plVar2 = (long *)(unaff_x20 + _DAT_112e932a8);
  func_0x0001000a8868(plVar2,plVar2[3]);
  lVar4 = *plVar2;
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    func_0x000107c50740(lStack_38);
    func_0x000107c615e8(lStack_38);
  }
  *(undefined1 *)(lVar4 + _DAT_112e93348) = 0;
  uStack_39 = 0;
  func_0x000100087c34(&uStack_39);
  lVar4 = unaff_x20 + _DAT_112e93290;
  func_0x000107c61618();
  if (lVar4 != 0) {
    FUN_1023cfa70();
    func_0x000107c615e8(lVar4);
  }
  puVar3 = PTR_PTR_1126affa8;
  func_0x000107c61168();
  func_0x000107c5aa04();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c4e57c();
    func_0x000107c61170(puVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023c7c50);
  (*pcVar1)();
}



/* Entry: 1023c7c50; end: 1023c7c77; -[_TtC35PreviewFeatureVideoPlaybackControls30PlaybackControlsViewController didTapDoneButton] */

void FUN_1023c7c50(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1023c7b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1023c7c78; end: 1023c7c7f; -[_TtC35PreviewFeatureVideoPlaybackControls30PlaybackControlsViewController snapSegmentExpandedCellShouldHandleTouch:] */

undefined8 FUN_1023c7c78(void)

{
  return 1;
}



/* Entry: 1023c7c80; end: 1023c7c83; -[_TtC35PreviewFeatureVideoPlaybackControls30PlaybackControlsViewController snapSegmentExpandedCell:didChangeStartTime:] */

void FUN_1023c7c80(void)

{
  return;
}



/* Entry: 1023c7c84; end: 1023c7c87; -[_TtC35PreviewFeatureVideoPlaybackControls30PlaybackControlsViewController snapSegmentExpandedCell:didChangeEndTime:] */

void FUN_1023c7c84(void)

{
  return;
}



/* Entry: 1023c7c88; end: 1023c7cf3; -[_TtC35PreviewFeatureVideoPlaybackControls30PlaybackControlsViewController snapSegmentExpandedCell:didSeekToTime:] */

/* WARNING: Possible PIC construction at 0x0001023c7cd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023c7cdc) */

void FUN_1023c7c88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_4;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1023c8a3c(uVar1,uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1023c7cf4; end: 1023c7edb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023c7cf4(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar6 = 0x112d54580;
  func_0x0001000285a8(0x112d54580,&UNK_10d91b480);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  puVar7 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)puVar7 - extraout_x12;
  puVar2 = &DAT_112e932e0;
  FUN_1023c5fb4(&DAT_112e932e0,0x1023c6010);
  if (param_1 != 0) {
    puVar3 = puVar2;
    func_0x000107c4534c();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    if (puVar3 == (undefined *)0x0) {
      lVar4 = 0;
      func_0x000107c5eff8();
    }
    else {
      func_0x000107c5efdc(puVar7,puVar3);
      func_0x000107c61170(puVar3);
      lVar4 = 0;
      func_0x000107c5eff8();
    }
    lVar8 = *(long *)(lVar4 + -8);
    (**(code **)(lVar8 + 0x38))(puVar7,puVar3 == (undefined *)0x0,1,lVar4);
    func_0x00010100ac24(puVar7,lVar6);
    func_0x000107c5eff8(0);
    lVar5 = lVar6;
    (**(code **)(lVar8 + 0x30))(lVar6,1,lVar4);
    if ((int)lVar5 == 1) {
      func_0x0001020f8fb8(lVar6);
    }
    else {
      func_0x000107c5eff4();
      (**(code **)(lVar8 + 8))(lVar6,lVar4);
      lVar6 = _DAT_112e932a0;
      func_0x000107c61428(unaff_x20 + _DAT_112e932a0,auStack_68,0,0);
      func_0x0001023c8dec(unaff_x20 + lVar6,auStack_90);
      func_0x0001000a8868(auStack_90,uStack_78);
      (**(code **)(lStack_70 + 0x30))(lVar5,param_2,uStack_78,lStack_70);
      func_0x0001000834e4(auStack_90);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023c7edc);
  (*pcVar1)();
}



/* Entry: 1023c7edc; end: 1023c7f63; -[_TtC35PreviewFeatureVideoPlaybackControls30PlaybackControlsViewController snapSegmentExpandedCell:didTrimSegmentToRange:] */

/* WARNING: Possible PIC construction at 0x0001023c7f48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023c7f4c) */

void FUN_1023c7edc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_60 = *param_4;
  uStack_38 = param_4[5];
  uStack_58 = param_4[1];
  uStack_48 = param_4[3];
  uStack_50 = param_4[2];
  uStack_40 = param_4[4];
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1023c7cf4(param_3,&uStack_60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1023c7f64; end: 1023c7faf; -[_TtC35PreviewFeatureVideoPlaybackControls30PlaybackControlsViewController snapSegmentExpandedCellFinishedSeeking:] */

/* WARNING: Possible PIC construction at 0x0001023c7f98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023c7f9c) */

void FUN_1023c7f64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1023c8b18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1023c7fb0; end: 1023c7fb3; -[_TtC35PreviewFeatureVideoPlaybackControls30PlaybackControlsViewController snapSegmentExpandedCellDidPressDelete:] */

void FUN_1023c7fb0(void)

{
  return;
}



/* Entry: 1023c7fb4; end: 1023c7fbb; -[_TtC35PreviewFeatureVideoPlaybackControls30PlaybackControlsViewController snapSegmentExpandedCellShouldShowDeleteButton:] */

undefined8 FUN_1023c7fb4(void)

{
  return 0;
}



/* Entry: 1023c7fbc; end: 1023c7fbf; -[_TtC35PreviewFeatureVideoPlaybackControls30PlaybackControlsViewController snapSegmentExpandedCell:didChangeSelectedTimeSlice:] */

void FUN_1023c7fbc(void)

{
  return;
}



/* Entry: 1023c7fc0; end: 1023c7fc3; -[_TtC35PreviewFeatureVideoPlaybackControls30PlaybackControlsViewController snapSegmentExpandedCell:didChangeSelectedTimeRange:] */

void FUN_1023c7fc0(void)

{
  return;
}



/* Entry: 1023c7fc4; end: 1023c80ab; -[_TtC35PreviewFeatureVideoPlaybackControls30PlaybackControlsViewController numberOfSectionsInCollectionView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1023c7fc4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar3 = param_1 + _DAT_112e932a0;
  func_0x000107c61428(lVar3,auStack_58,0,0);
  lVar1 = *(long *)(lVar3 + 0x18);
  lVar2 = *(long *)(lVar3 + 0x20);
  func_0x0001000a8868(lVar3,lVar1);
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar5 + 0x10))(auStack_60 + -extraout_x8);
  pcVar6 = *(code **)(lVar2 + 8);
  func_0x000107c61174(param_1);
  lVar3 = lVar1;
  (*pcVar6)(lVar1,lVar2);
  (**(code **)(lVar5 + 8))(auStack_60 + -extraout_x8,lVar1);
  uVar4 = *(undefined8 *)(lVar3 + 0x10);
  func_0x000107c6142c(lVar3);
  func_0x000107c61170(param_1);
  return uVar4;
}



/* Entry: 1023c80ac; end: 1023c80b3; -[_TtC35PreviewFeatureVideoPlaybackControls30PlaybackControlsViewController collectionView:numberOfItemsInSection:] */

undefined8 FUN_1023c80ac(void)

{
  return 1;
}



/* Entry: 1023c80b4; end: 1023c8587;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1023c80b4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
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
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  code *pcVar17;
  ulong uVar18;
  undefined8 uVar19;
  ulong *puVar20;
  long lVar21;
  undefined1 *puVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong *puVar26;
  long extraout_x8;
  long lVar27;
  long unaff_x20;
  long lVar28;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  ulong uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 auStack_b8 [40];
  
  uVar18 = 0;
  FUN_1023c8e40(0,0x112e93320,&PTR_PTR_1126b0d88);
  uVar19 = 0x112e93328;
  uStack_140 = uVar18;
  func_0x0001000285a8(0x112e93328,&UNK_10da9f000);
  puVar20 = &uStack_140;
  func_0x000107c5fb18(puVar20,uVar19);
  FUN_10257af84(uVar18,puVar20,uVar19,param_2,uVar18);
  func_0x000107c6142c(uVar19);
  lVar1 = unaff_x20 + _DAT_112e932a0;
  func_0x000107c61428(lVar1,auStack_b8,0,0);
  lVar27 = *(long *)(lVar1 + 0x18);
  lVar2 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,lVar27);
  lVar28 = *(long *)(lVar27 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar28 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar22 = &stack0xfffffffffffffe00 + -extraout_x8;
  (**(code **)(lVar28 + 0x10))(puVar22);
  lVar21 = lVar27;
  (**(code **)(lVar2 + 8))(lVar27,lVar2);
  (**(code **)(lVar28 + 8))(puVar22,lVar27);
  func_0x000107c5eff4();
  if (((long)puVar22 < 0) || (*(undefined1 **)(lVar21 + 0x10) <= puVar22)) {
    func_0x000107c6142c(lVar21);
  }
  else {
    lVar27 = lVar21 + (long)puVar22 * 0x88;
    uStack_140 = *(ulong *)(lVar27 + 0x20);
    uStack_138 = (undefined4)*(undefined8 *)(lVar27 + 0x28);
    uStack_134 = (undefined4)((ulong)*(undefined8 *)(lVar27 + 0x28) >> 0x20);
    uStack_108 = (undefined4)*(undefined8 *)(lVar27 + 0x58);
    uStack_104 = (undefined4)((ulong)*(undefined8 *)(lVar27 + 0x58) >> 0x20);
    uStack_110 = (undefined4)*(undefined8 *)(lVar27 + 0x50);
    uStack_10c = (undefined4)((ulong)*(undefined8 *)(lVar27 + 0x50) >> 0x20);
    uStack_f8 = (undefined4)*(undefined8 *)(lVar27 + 0x68);
    uStack_f4 = (undefined4)((ulong)*(undefined8 *)(lVar27 + 0x68) >> 0x20);
    uStack_100 = (undefined4)*(undefined8 *)(lVar27 + 0x60);
    uStack_fc = (undefined4)((ulong)*(undefined8 *)(lVar27 + 0x60) >> 0x20);
    uStack_128 = (undefined4)*(undefined8 *)(lVar27 + 0x38);
    uStack_124 = (undefined4)((ulong)*(undefined8 *)(lVar27 + 0x38) >> 0x20);
    uStack_130 = (undefined4)*(undefined8 *)(lVar27 + 0x30);
    uStack_12c = (undefined4)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20);
    uStack_118 = (undefined4)*(undefined8 *)(lVar27 + 0x48);
    uStack_114 = (undefined4)((ulong)*(undefined8 *)(lVar27 + 0x48) >> 0x20);
    uStack_120 = (undefined4)*(undefined8 *)(lVar27 + 0x40);
    uStack_11c = (undefined4)((ulong)*(undefined8 *)(lVar27 + 0x40) >> 0x20);
    uStack_c0 = *(undefined4 *)(lVar27 + 0xa0);
    uStack_d8 = (undefined4)*(undefined8 *)(lVar27 + 0x88);
    uStack_d4 = (undefined4)((ulong)*(undefined8 *)(lVar27 + 0x88) >> 0x20);
    uStack_e0 = (undefined4)*(undefined8 *)(lVar27 + 0x80);
    uStack_dc = (undefined4)((ulong)*(undefined8 *)(lVar27 + 0x80) >> 0x20);
    uStack_c8 = (undefined4)*(undefined8 *)(lVar27 + 0x98);
    uStack_c4 = (undefined4)((ulong)*(undefined8 *)(lVar27 + 0x98) >> 0x20);
    uStack_d0 = (undefined4)*(undefined8 *)(lVar27 + 0x90);
    uStack_cc = (undefined4)((ulong)*(undefined8 *)(lVar27 + 0x90) >> 0x20);
    uStack_e8 = (undefined4)*(undefined8 *)(lVar27 + 0x78);
    uStack_e4 = (undefined4)((ulong)*(undefined8 *)(lVar27 + 0x78) >> 0x20);
    uStack_f0 = (undefined4)*(undefined8 *)(lVar27 + 0x70);
    uStack_ec = (undefined4)((ulong)*(undefined8 *)(lVar27 + 0x70) >> 0x20);
    FUN_1023c8d7c(&uStack_140,&uStack_1c8);
    func_0x000107c6142c(lVar21);
    uVar24 = uStack_140;
    uVar19 = CONCAT44(uStack_130,uStack_134);
    uVar4 = CONCAT44(uStack_120,uStack_124);
    uVar5 = CONCAT44(uStack_118,uStack_11c);
    uVar7 = CONCAT44(uStack_108,uStack_10c);
    uVar8 = CONCAT44(uStack_100,uStack_104);
    uVar10 = CONCAT44(uStack_f0,uStack_f4);
    uVar11 = CONCAT44(uStack_e8,uStack_ec);
    uVar13 = CONCAT44(uStack_d8,uStack_dc);
    uVar14 = CONCAT44(uStack_d0,uStack_d4);
    uVar16 = CONCAT44(uStack_c0,uStack_c4);
    uVar3 = CONCAT44(uStack_128,uStack_12c);
    uVar6 = CONCAT44(uStack_110,uStack_114);
    uVar9 = CONCAT44(uStack_f8,uStack_fc);
    uVar12 = CONCAT44(uStack_e0,uStack_e4);
    uVar15 = CONCAT44(uStack_c8,uStack_cc);
    func_0x000107c5d690(uVar18);
    uStack_1c8 = uVar19;
    uStack_1c0 = uVar3;
    uStack_1b8 = uVar4;
    uStack_1b0 = uVar5;
    uStack_1a8 = uVar6;
    uStack_1a0 = uVar7;
    func_0x000107c53888(uVar18);
    uStack_1c8 = uVar8;
    uStack_1c0 = uVar9;
    uStack_1b8 = uVar10;
    uStack_1b0 = uVar11;
    uStack_1a8 = uVar12;
    uStack_1a0 = uVar13;
    func_0x000107c5a0a8(uVar18);
    uVar23 = uVar18;
    uStack_1c8 = uVar14;
    uStack_1c0 = uVar15;
    uStack_1b8 = uVar16;
    func_0x000107c56710();
    func_0x000107c5eff4();
    func_0x000107c61428(lVar1,&uStack_1c8,0x20,0);
    uVar25 = *(ulong *)(lVar1 + 0x18);
    lVar27 = *(long *)(lVar1 + 0x20);
    func_0x0001000a8868(lVar1,uVar25);
    (**(code **)(lVar27 + 0x10))();
    func_0x000107c614a8(&uStack_1c8);
    if ((((uint)lVar27 & 0xff) == 1) || (uVar23 != uVar25)) {
      func_0x000107c5357c(uVar18);
      func_0x000107c59fb4(uVar18);
      func_0x000107c54360(uVar18);
      func_0x000107c52e08(uVar18);
      func_0x000107c58dd8(uVar18);
      if (uVar24 >> 0x3e == 0) {
        uVar25 = *(ulong *)((uVar24 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar25 = uVar24 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar24) {
          uVar25 = uVar24;
        }
        func_0x000107c60480();
      }
      if (uVar25 == 0) {
        func_0x0001023c8db8(&uStack_140);
      }
      else {
        if ((uVar24 & 0xc000000000000001) == 0) {
          if (*(long *)((uVar24 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x1023c8588);
            (*pcVar17)();
          }
          uVar25 = *(ulong *)(uVar24 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar25 = 0;
          func_0x00010134bc08(0,uVar24);
        }
        puVar20 = &uStack_140;
        func_0x0001023c8db8();
        FUN_1023d1048();
        func_0x000107c613fc();
        puVar20[3] = 3;
        puVar20[2] = 1;
        puVar20[4] = uVar25;
        func_0x000107c61174(uVar25);
        uVar19 = 0x112d74dc8;
        func_0x0001000285a8(0x112d74dc8,&UNK_10d9355f0);
        puVar26 = puVar20;
        func_0x000107c5fc48(puVar20,uVar19);
        func_0x000107c61574(puVar20);
        func_0x000107c59d04(uVar18);
        func_0x000107c61170(uVar25);
        func_0x000107c61170(puVar26);
      }
    }
    else {
      func_0x000107c5357c(uVar18);
      func_0x000107c558a0(uVar18);
      func_0x000107c59fb4(uVar18);
      func_0x000107c54360(uVar18);
      func_0x000107c52e08(uVar18);
      func_0x000107c58dd8(uVar18);
      uVar19 = 0x112d74dc8;
      func_0x0001000285a8(0x112d74dc8,&UNK_10d9355f0);
      func_0x000107c5fc48(uVar24,uVar19);
      func_0x0001023c8db8(&uStack_140);
      func_0x000107c59d04(uVar18);
      func_0x000107c61170(uVar24);
      func_0x000107c53fcc(uVar18);
    }
  }
  return uVar18;
}



/* Entry: 1023c8588; end: 1023c864f; -[_TtC35PreviewFeatureVideoPlaybackControls30PlaybackControlsViewController collectionView:cellForItemAtIndexPath:] */

void FUN_1023c8588(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5efdc(puVar3,param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  FUN_1023c80b4(param_3,puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1023c8650; end: 1023c870b; -[_TtC35PreviewFeatureVideoPlaybackControls30PlaybackControlsViewController collectionView:didSelectItemAtIndexPath:] */

void FUN_1023c8650(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5efdc(puVar2,param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1023c8c24(puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 1023c870c; end: 1023c8807; -[_TtC35PreviewFeatureVideoPlaybackControls30PlaybackControlsViewController collectionView:didDeselectItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023c870c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long lVar5;
  code *pcVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar4 = 0;
  func_0x000107c5eff8();
  lVar5 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  func_0x000107c5efdc(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_4);
  lVar1 = param_1 + _DAT_112e932a0;
  func_0x000107c61428(lVar1,auStack_68,0x21,0);
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000c6518(lVar1,uVar2);
  pcVar6 = *(code **)(lVar3 + 0x18);
  func_0x000107c61174(param_1);
  (*pcVar6)(0,1,uVar2,lVar3);
  func_0x000107c614a8(auStack_68);
  func_0x000107c61170(param_1);
  (**(code **)(lVar5 + 8))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar4);
  return;
}



/* Entry: 1023c8808; end: 1023c88eb; -[_TtC35PreviewFeatureVideoPlaybackControls30PlaybackControlsViewController collectionView:layout:sizeForItemAtIndexPath:] */

undefined1  [16]
FUN_1023c8808(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  func_0x000107c5efdc(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_9)
  ;
  func_0x000107c61174(param_7);
  func_0x000107c3ec60();
  func_0x000107c61170(param_7);
  FUN_1023c88ec(param_1,param_2,param_3,param_4);
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 1023c88ec; end: 1023c88fb;  */

undefined1  [16] FUN_1023c88ec(undefined8 param_1,undefined8 param_2,double param_3,double param_4)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = param_3 + -16.0;
  auVar1._8_8_ = param_4 + -16.0;
  return auVar1;
}



/* Entry: 1023c88fc; end: 1023c8a3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023c88fc(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112e93290;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  lVar1 = _DAT_112e932b0;
  uVar6 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar6;
  lVar1 = _DAT_112e932b8;
  puVar7 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar7;
  lVar1 = _DAT_112e932c0;
  puVar7 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar7;
  *(undefined8 *)(unaff_x20 + _DAT_112e932c8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e932d0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e932d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e932e0) = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112e932e8);
  uVar3 = *(undefined4 *)(PTR__kCMTimeInvalid_110348648 + 8);
  uVar4 = *(undefined4 *)(PTR__kCMTimeInvalid_110348648 + 0xc);
  uVar6 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 0x10);
  *puVar2 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
  *(undefined4 *)(puVar2 + 1) = uVar3;
  *(undefined4 *)((long)puVar2 + 0xc) = uVar4;
  puVar2[2] = uVar6;
  *(undefined1 *)(unaff_x20 + _DAT_112e932f0) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "PreviewFeatureVideoPlaybackControls/PlaybackControlsViewController.swift",
                      0x48,2,0x4a,0);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1023c8a3c);
  (*pcVar5)();
}



/* Entry: 1023c8a3c; end: 1023c8b17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023c8a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  long alStack_68 [3];
  undefined8 uStack_50;
  
  func_0x0001023c8dec(unaff_x20 + _DAT_112e932a8,alStack_68);
  plVar2 = alStack_68;
  func_0x0001000a8868(plVar2,uStack_50);
  func_0x000107c600d4(param_2,param_3,param_4);
  lVar3 = *plVar2;
  func_0x0001000d224c(&uStack_70);
  lVar1 = CONCAT71(uStack_6f,uStack_70);
  if (lVar1 != 0) {
    func_0x000107c5be60(param_1,lVar1);
    func_0x000107c615e8(lVar1);
  }
  *(undefined1 *)(lVar3 + _DAT_112e93348) = 2;
  uStack_70 = 2;
  func_0x000100087c34(&uStack_70);
  func_0x0001000834e4(alStack_68);
  return;
}



/* Entry: 1023c8b18; end: 1023c8c23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023c8b18(void)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  undefined1 uStack_38;
  undefined7 uStack_37;
  
  puVar3 = &DAT_112e932d0;
  FUN_1023c5f10(&DAT_112e932d0,FUN_1023c522c,&PTR_s_didTapPlaybackButton_112524cd8);
  cVar1 = puVar3[_DAT_112e93240];
  func_0x000107c61170();
  plVar4 = (long *)(unaff_x20 + _DAT_112e932a8);
  func_0x0001000a8868(plVar4,plVar4[3]);
  lVar5 = *plVar4;
  if (cVar1 == '\0') {
    func_0x0001000d224c(&uStack_38);
    lVar2 = CONCAT71(uStack_37,uStack_38);
    if (lVar2 != 0) {
      func_0x000107c4e480(lVar2);
      func_0x000107c615e8(lVar2);
    }
    *(undefined1 *)(lVar5 + _DAT_112e93348) = 1;
    uStack_38 = 1;
  }
  else {
    func_0x0001000d224c(&uStack_38);
    lVar2 = CONCAT71(uStack_37,uStack_38);
    if (lVar2 != 0) {
      func_0x000107c50740(lVar2);
      func_0x000107c615e8(lVar2);
    }
    *(undefined1 *)(lVar5 + _DAT_112e93348) = 0;
    uStack_38 = 0;
  }
  func_0x000100087c34(&uStack_38);
  return;
}



/* Entry: 1023c8c24; end: 1023c8d7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023c8c24(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  byte bVar5;
  long lVar6;
  undefined1 *puVar7;
  long extraout_x8;
  long unaff_x20;
  long lVar8;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar1 = unaff_x20 + _DAT_112e932a0;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lVar2 = *(long *)(lVar1 + 0x18);
  lVar4 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,lVar2);
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_70 + -extraout_x8;
  (**(code **)(lVar8 + 0x10))(puVar7);
  lVar6 = lVar2;
  (**(code **)(lVar4 + 8))(lVar2,lVar4);
  (**(code **)(lVar8 + 8))(puVar7,lVar2);
  func_0x000107c5eff4();
  if (((long)puVar7 < 0) || (*(undefined1 **)(lVar6 + 0x10) <= puVar7)) {
    func_0x000107c6142c(lVar6);
  }
  else {
    bVar5 = *(byte *)(lVar6 + (long)puVar7 * 0x88 + 0x28);
    func_0x000107c6142c(lVar6);
    if ((bVar5 & 1) != 0) {
      func_0x000107c5eff4();
      func_0x000107c61428(lVar1,auStack_70,0x21,0);
      uVar3 = *(undefined8 *)(lVar1 + 0x18);
      lVar2 = *(long *)(lVar1 + 0x20);
      func_0x0001000c6518(lVar1,uVar3);
      (**(code **)(lVar2 + 0x18))(lVar6,0,uVar3,lVar2);
      func_0x000107c614a8(auStack_70);
    }
  }
  return;
}



/* Entry: 1023c8d7c; end: 1023c8e2f;  */

undefined8 FUN_1023c8d7c(undefined8 param_1,undefined8 param_2)

{
  (*(code *)(undefined *)0x1023c5428)(param_2,param_1);
  return param_2;
}



/* Entry: 1023c8e30; end: 1023c8e3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023c8e30(ulong *param_1)

{
  ulong *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  uVar7 = *param_1;
  uVar4 = param_1[1];
  uVar2 = *(undefined4 *)((long)param_1 + 0xc);
  uVar3 = param_1[1];
  uVar8 = param_1[2];
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar5 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    puVar1 = (ulong *)(lVar5 + _DAT_112e932e8);
    uVar6 = uVar7;
    func_0x000107c600c4(uVar7,uVar3,uVar8,*puVar1,puVar1[1],puVar1[2]);
    if (((uVar6 & 1) != 0) && (*(char *)(lVar5 + _DAT_112e932f0) == '\x01')) {
      *puVar1 = uVar7;
      *(int *)(puVar1 + 1) = (int)uVar4;
      *(undefined4 *)((long)puVar1 + 0xc) = uVar2;
      puVar1[2] = uVar8;
      FUN_1023c6158(uVar7,uVar3,uVar8);
    }
    func_0x000107c61170(lVar5);
  }
  return;
}



/* Entry: 1023c8e40; end: 1023c8ea3;  */

void FUN_1023c8e40(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1023c8ea4; end: 1023c8fc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1023c8ea4(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long unaff_x20;
  long lStack_58;
  
  func_0x000107c614f0();
  lVar2 = _DAT_112e93338;
  func_0x0001000285a8(0x112e93380,&UNK_10da9f078);
  func_0x000107c613fc();
  uVar3 = 1;
  func_0x00010008747c();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  lVar2 = _DAT_112e93340;
  func_0x0001000285a8(0x112e93388,&UNK_10da9f080);
  func_0x000107c613fc();
  uVar3 = 1;
  func_0x00010008747c();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112e93330) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_112e93348) = 0;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(param_1);
  puVar4 = &stack0xffffffffffffffb0;
  func_0x000107c61154(puVar4,puVar1);
  func_0x0001000d224c(&lStack_58);
  if (lStack_58 != 0) {
    func_0x000107c3d948(lStack_58);
    func_0x000107c615e8(lStack_58);
  }
  func_0x000107c61574(param_1);
  return puVar4;
}



/* Entry: 1023c8fc8; end: 1023c9027; -[_TtC35PreviewFeatureVideoPlaybackControls39ShortVideoPlaybackControlsPlayerHandler init] */

void FUN_1023c8fc8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PreviewFeatureVideoPlaybackControls.ShortVideoPlaybackControlsPlayerHandler",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023c8ff4);
  (*pcVar1)();
}



/* Entry: 1023c9028; end: 1023c906f; -[_TtC35PreviewFeatureVideoPlaybackControls39ShortVideoPlaybackControlsPlayerHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001023c9044: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023c9048) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023c9028(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e93330));
  return;
}



/* Entry: 1023c9070; end: 1023c908f;  */

void FUN_1023c9070(void)

{
  func_0x000107c61168(&PTR_PTR_11283a768);
  return;
}



/* Entry: 1023c9090; end: 1023c90bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023c9090(void)

{
  FUN_1023c911c();
  func_0x0001000c2068();
  return;
}



/* Entry: 1023c90c0; end: 1023c911b; -[_TtC35PreviewFeatureVideoPlaybackControls39ShortVideoPlaybackControlsPlayerHandler videoPlaybackSession:didRenderFrameAtTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023c90c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = *param_4;
  uStack_28 = param_4[2];
  uStack_30 = param_4[1];
  func_0x000107c61174();
  func_0x000100087c34(&uStack_38);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1023c911c; end: 1023c915b;  */

void FUN_1023c911c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e93378 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da9f0fc;
  func_0x000107c61520(&UNK_10da9f0fc,&UNK_1104fe340);
  puRam0000000112e93378 = puVar1;
  return;
}



/* Entry: 1023c915c; end: 1023c92d7;  */

int FUN_1023c915c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1023c91d8;
        goto LAB_1023c91bc;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1023c91bc:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_1023c91d8:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1023c92d8; end: 1023c9383;  */

void FUN_1023c92d8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}


