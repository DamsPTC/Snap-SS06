/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1020ca970; end: 1020ca997;  */

void FUN_1020ca970(void)

{
  func_0x0001020ca9fc();
  return;
}



/* Entry: 1020ca998; end: 1020ca9a3;  */

void FUN_1020ca998(undefined8 param_1)

{
  func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1020caa88,param_1);
  return;
}



/* Entry: 1020ca9a4; end: 1020caa87;  */

void FUN_1020ca9a4(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 1020caa88; end: 1020caaaf;  */

void FUN_1020caa88(void)

{
  func_0x0001020ca9fc();
  return;
}



/* Entry: 1020caab0; end: 1020cab33;  */

undefined1  [16] FUN_1020caab0(void)

{
  return ZEXT816(0x1104c91b0);
}



/* Entry: 1020cab34; end: 1020cabdf;  */

void FUN_1020cab34(void)

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



/* Entry: 1020cabe0; end: 1020caf7f;  */

void FUN_1020cabe0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,char param_7)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long *plVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  long extraout_x8;
  long lVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar5 = 0;
  func_0x000107c5f4e8();
  lVar11 = *(long *)(lVar5 + -8);
  lVar6 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  func_0x000107c5f4ec(&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_101c13a6c();
  func_0x0001026ffb14(param_1,0x4038000000000000,5,lVar5,lVar6);
  (**(code **)(lVar11 + 8))
            (&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar5);
  if (param_7 == '\x01') {
    uVar7 = 0xc6;
    func_0x0001026ff7d0();
  }
  else {
    uVar7 = 0xc5;
    func_0x0001026ff81c(0xc5,0xc4);
  }
  puVar8 = &UNK_10da5a6b0;
  func_0x000107c614e0();
  lVar6 = 0x112e57230;
  func_0x0001000285a8(0x112e57230,&UNK_10da5a6e0);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar6 + 0x24));
  *puVar1 = puVar8;
  puVar1[1] = uVar7;
  func_0x000107c5f56c();
  uVar7 = 0x4010000000000000;
  func_0x000107c5f280();
  lVar5 = 0x112e57238;
  func_0x0001000285a8(0x112e57238,&UNK_10da5a6e8);
  puVar2 = (undefined1 *)(param_1 + *(int *)(lVar5 + 0x24));
  *puVar2 = (char)lVar6;
  *(undefined8 *)(puVar2 + 8) = uVar7;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  puVar2[0x28] = 0;
  lVar6 = 0x112e57240;
  func_0x0001000285a8(0x112e57240,&UNK_10da5a6f0);
  lVar6 = param_1 + *(int *)(lVar6 + 0x24);
  uVar4 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_110348d50;
  lVar5 = 0;
  func_0x000107c5f41c();
  pcVar12 = *(code **)(*(long *)(lVar5 + -8) + 0x68);
  (*pcVar12)(lVar6,uVar4,lVar5);
  if (param_7 == '\x01') {
    uVar7 = 0x29;
    func_0x0001026ff7d0();
    lVar9 = 0x112e02d80;
    func_0x0001000285a8(0x112e02d80,&UNK_10d9dee00);
    *(undefined8 *)(lVar6 + *(int *)(lVar9 + 0x34)) = uVar7;
    *(undefined2 *)(lVar6 + *(int *)(lVar9 + 0x38)) = 0x100;
    func_0x000107c5f6c8();
    lVar11 = lVar9;
    func_0x000107c5f6d4(0x3fb999999999999a);
    func_0x000107c61574(lVar9);
  }
  else {
    uVar7 = 0x62;
    func_0x0001026ff81c(0x62,0x74);
    lVar11 = 0x112e02d80;
    func_0x0001000285a8(0x112e02d80,&UNK_10d9dee00);
    *(undefined8 *)(lVar6 + *(int *)(lVar11 + 0x34)) = uVar7;
    *(undefined2 *)(lVar6 + *(int *)(lVar11 + 0x38)) = 0x100;
    func_0x000107c5f6cc();
  }
  lVar9 = 0x112e57248;
  puVar8 = &UNK_10da5a700;
  func_0x0001000285a8();
  plVar3 = (long *)(lVar6 + *(int *)(lVar9 + 0x24));
  *plVar3 = lVar11;
  plVar3[2] = 0;
  plVar3[1] = 0x4010000000000000;
  plVar3[3] = 0x4000000000000000;
  func_0x000107c5f7ac();
  lVar11 = 0x112e57250;
  func_0x0001000285a8(0x112e57250,&UNK_10da5a708);
  plVar3 = (long *)(lVar6 + *(int *)(lVar11 + 0x24));
  *plVar3 = lVar9;
  plVar3[1] = (long)puVar8;
  lVar6 = 0x112e57258;
  func_0x0001000285a8(0x112e57258,&UNK_10da5a710);
  lVar6 = param_1 + *(int *)(lVar6 + 0x24);
  (*pcVar12)(lVar6,uVar4,lVar5);
  uVar10 = 0x112e02d98;
  func_0x0001000285a8(0x112e02d98,&UNK_10d9d5340);
  *(undefined1 *)(lVar6 + *(int *)(uVar10 + 0x24)) = 0;
  func_0x000107c5f4f0();
  uVar13 = 0x3feccccccccccccd;
  uVar14 = 0x3ff0000000000000;
  uVar7 = uVar13;
  if ((uVar10 & 1) == 0) {
    uVar7 = 0x3ff0000000000000;
  }
  func_0x000107c5f7e4();
  lVar6 = 0x112e57260;
  func_0x0001000285a8(0x112e57260,&UNK_10da5a720);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar6 + 0x24));
  *puVar1 = uVar7;
  puVar1[1] = uVar7;
  puVar1[2] = uVar13;
  puVar1[3] = uVar14;
  func_0x000107c5f7c8(0x3fd3333333333333,0x3fe3333333333333,0);
  lVar11 = lVar6;
  func_0x000107c5f4f0();
  lVar5 = 0x112e57268;
  func_0x0001000285a8(0x112e57268,&UNK_10da5a728);
  plVar3 = (long *)(param_1 + *(int *)(lVar5 + 0x24));
  *plVar3 = lVar6;
  *(byte *)(plVar3 + 1) = (byte)lVar11 & 1;
  return;
}



/* Entry: 1020caf80; end: 1020caf87;  */

void FUN_1020caf80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long *plVar3;
  undefined4 uVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  long extraout_x8;
  char *unaff_x20;
  long lVar12;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  cVar5 = *unaff_x20;
  lVar6 = 0;
  func_0x000107c5f4e8();
  lVar12 = *(long *)(lVar6 + -8);
  lVar7 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  func_0x000107c5f4ec(&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_101c13a6c();
  func_0x0001026ffb14(param_1,0x4038000000000000,5,lVar6,lVar7);
  (**(code **)(lVar12 + 8))
            (&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar6);
  if (cVar5 == '\x01') {
    uVar8 = 0xc6;
    func_0x0001026ff7d0();
  }
  else {
    uVar8 = 0xc5;
    func_0x0001026ff81c(0xc5,0xc4);
  }
  puVar9 = &UNK_10da5a6b0;
  func_0x000107c614e0();
  lVar7 = 0x112e57230;
  func_0x0001000285a8(0x112e57230,&UNK_10da5a6e0);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar7 + 0x24));
  *puVar1 = puVar9;
  puVar1[1] = uVar8;
  func_0x000107c5f56c();
  uVar8 = 0x4010000000000000;
  func_0x000107c5f280();
  lVar6 = 0x112e57238;
  func_0x0001000285a8(0x112e57238,&UNK_10da5a6e8);
  puVar2 = (undefined1 *)(param_1 + *(int *)(lVar6 + 0x24));
  *puVar2 = (char)lVar7;
  *(undefined8 *)(puVar2 + 8) = uVar8;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  puVar2[0x28] = 0;
  lVar7 = 0x112e57240;
  func_0x0001000285a8(0x112e57240,&UNK_10da5a6f0);
  lVar7 = param_1 + *(int *)(lVar7 + 0x24);
  uVar4 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_110348d50;
  lVar6 = 0;
  func_0x000107c5f41c();
  pcVar13 = *(code **)(*(long *)(lVar6 + -8) + 0x68);
  (*pcVar13)(lVar7,uVar4,lVar6);
  if (cVar5 == '\x01') {
    uVar8 = 0x29;
    func_0x0001026ff7d0();
    lVar10 = 0x112e02d80;
    func_0x0001000285a8(0x112e02d80,&UNK_10d9dee00);
    *(undefined8 *)(lVar7 + *(int *)(lVar10 + 0x34)) = uVar8;
    *(undefined2 *)(lVar7 + *(int *)(lVar10 + 0x38)) = 0x100;
    func_0x000107c5f6c8();
    lVar12 = lVar10;
    func_0x000107c5f6d4(0x3fb999999999999a);
    func_0x000107c61574(lVar10);
  }
  else {
    uVar8 = 0x62;
    func_0x0001026ff81c(0x62,0x74);
    lVar12 = 0x112e02d80;
    func_0x0001000285a8(0x112e02d80,&UNK_10d9dee00);
    *(undefined8 *)(lVar7 + *(int *)(lVar12 + 0x34)) = uVar8;
    *(undefined2 *)(lVar7 + *(int *)(lVar12 + 0x38)) = 0x100;
    func_0x000107c5f6cc();
  }
  lVar10 = 0x112e57248;
  puVar9 = &UNK_10da5a700;
  func_0x0001000285a8();
  plVar3 = (long *)(lVar7 + *(int *)(lVar10 + 0x24));
  *plVar3 = lVar12;
  plVar3[2] = 0;
  plVar3[1] = 0x4010000000000000;
  plVar3[3] = 0x4000000000000000;
  func_0x000107c5f7ac();
  lVar12 = 0x112e57250;
  func_0x0001000285a8(0x112e57250,&UNK_10da5a708);
  plVar3 = (long *)(lVar7 + *(int *)(lVar12 + 0x24));
  *plVar3 = lVar10;
  plVar3[1] = (long)puVar9;
  lVar7 = 0x112e57258;
  func_0x0001000285a8(0x112e57258,&UNK_10da5a710);
  lVar7 = param_1 + *(int *)(lVar7 + 0x24);
  (*pcVar13)(lVar7,uVar4,lVar6);
  uVar11 = 0x112e02d98;
  func_0x0001000285a8(0x112e02d98,&UNK_10d9d5340);
  *(undefined1 *)(lVar7 + *(int *)(uVar11 + 0x24)) = 0;
  func_0x000107c5f4f0();
  uVar14 = 0x3feccccccccccccd;
  uVar15 = 0x3ff0000000000000;
  uVar8 = uVar14;
  if ((uVar11 & 1) == 0) {
    uVar8 = 0x3ff0000000000000;
  }
  func_0x000107c5f7e4();
  lVar7 = 0x112e57260;
  func_0x0001000285a8(0x112e57260,&UNK_10da5a720);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar7 + 0x24));
  *puVar1 = uVar8;
  puVar1[1] = uVar8;
  puVar1[2] = uVar14;
  puVar1[3] = uVar15;
  func_0x000107c5f7c8(0x3fd3333333333333,0x3fe3333333333333,0);
  lVar12 = lVar7;
  func_0x000107c5f4f0();
  lVar6 = 0x112e57268;
  func_0x0001000285a8(0x112e57268,&UNK_10da5a728);
  plVar3 = (long *)(param_1 + *(int *)(lVar6 + 0x24));
  *plVar3 = lVar7;
  *(byte *)(plVar3 + 1) = (byte)lVar12 & 1;
  return;
}



/* Entry: 1020caf88; end: 1020cb01f;  */

void FUN_1020caf88(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x000107c5f4ec();
  uVar2 = 0x112e57210;
  func_0x0001000285a8(0x112e57210,&UNK_10da5a650);
  *(undefined1 *)(param_1 + *(int *)(uVar2 + 0x24)) = 0;
  func_0x000107c5f4f0();
  uVar4 = 0x3feccccccccccccd;
  uVar5 = 0x3ff0000000000000;
  uVar6 = uVar4;
  if ((uVar2 & 1) == 0) {
    uVar6 = 0x3ff0000000000000;
  }
  func_0x000107c5f7e4();
  lVar3 = 0x112e57218;
  func_0x0001000285a8(0x112e57218,&UNK_10da5a658);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x24));
  *puVar1 = uVar6;
  puVar1[1] = uVar6;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  return;
}



/* Entry: 1020cb020; end: 1020cb12f;  */

void FUN_1020cb020(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam0000000112e57220 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e57218;
  func_0x00010002969c(0x112e57218,&UNK_10da5a658);
  uVar2 = uVar1;
  func_0x0001020cb098();
  puStack_28 = PTR___s7SwiftUI12_ScaleEffectVAA12ViewModifierAAWP_110348860;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112e57220 = puVar3;
  return;
}



/* Entry: 1020cb130; end: 1020cb2b3;  */

undefined1  [16] FUN_1020cb130(void)

{
  return ZEXT816(0x1104c92c8);
}



/* Entry: 1020cb2b4; end: 1020cb66b;  */

void FUN_1020cb2b4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112e57270 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e57268;
  func_0x00010002969c(0x112e57268,&UNK_10da5a728);
  uVar2 = uVar1;
  func_0x0001020cb34c();
  uVar3 = 0x112e02e28;
  func_0x0001020cb628(0x112e02e28,0x112e02e30,&UNK_10da5a740,
                      PTR___s7SwiftUI18_AnimationModifierVyxGAA04ViewD0AAMc_110348d80);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112e57270 = puVar4;
  return;
}



/* Entry: 1020cb66c; end: 1020cb66f;  */

void FUN_1020cb66c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e572a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da5a788;
  func_0x000107c61520(&UNK_10da5a788,&UNK_1104c9360);
  puRam0000000112e572a8 = puVar1;
  return;
}



/* Entry: 1020cb670; end: 1020cb6af;  */

void FUN_1020cb670(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e572a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da5a788;
  func_0x000107c61520(&UNK_10da5a788,&UNK_1104c9360);
  puRam0000000112e572a8 = puVar1;
  return;
}



/* Entry: 1020cb6b0; end: 1020cb6bf;  */

void FUN_1020cb6b0(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 2;
  if (0xfffeff < param_3 + 1) {
    uVar3 = 4;
  }
  if (param_3 + 1 >> 8 < 0xff) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (0xfe < param_3) {
    uVar2 = uVar3;
  }
  if (param_2 < 0xff) {
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        param_1[1] = '\0';
        if (param_2 == 0) {
          return;
        }
        goto code_r0x0001020cb260;
      }
    }
    else if (uVar2 == 2) {
      param_1[1] = '\0';
      param_1[2] = '\0';
    }
    else {
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
    }
    if (param_2 != 0) {
code_r0x0001020cb260:
      *param_1 = (char)param_2 + '\x01';
      return;
    }
  }
  else {
    iVar1 = (param_2 - 0xff >> 8) + 1;
    *param_1 = (char)(param_2 - 0xff);
    if (1 < uVar2) {
      if (uVar2 != 2) {
        *(int *)(param_1 + 1) = iVar1;
        return;
      }
      *(short *)(param_1 + 1) = (short)iVar1;
      return;
    }
    if (uVar2 != 0) {
      param_1[1] = (char)iVar1;
      return;
    }
  }
  return;
}



/* Entry: 1020cb6c0; end: 1020cb7e7;  */

void FUN_1020cb6c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104c93e8;
  func_0x000107c613fc(&UNK_1104c93e8,0x68,7);
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
  func_0x0001000285a8(0x112e572b0,&UNK_10da5a7b0);
  func_0x000107c613fc();
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
  func_0x0001002acf1c(FUN_1020cbc80,puVar1);
  return;
}



/* Entry: 1020cb7e8; end: 1020cbc7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020cb7e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long *plVar16;
  undefined *puVar17;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  code *pcVar23;
  long lVar24;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined *puStack_88;
  long alStack_80 [2];
  
  uStack_a8 = param_12;
  uStack_a0 = param_13;
  uStack_e8 = param_11;
  lVar10 = 0;
  uStack_f8 = param_4;
  uStack_f0 = param_5;
  uStack_e0 = param_6;
  uStack_d8 = param_7;
  uStack_d0 = param_8;
  uStack_c8 = param_9;
  puStack_b8 = param_1;
  uStack_b0 = param_10;
  func_0x000107c5eea4();
  lStack_108 = *(long *)(lVar10 + -8);
  lStack_100 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_108 + 0x40));
  lVar24 = (long)&lStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0x112e573a8;
  func_0x0001000285a8(0x112e573a8,&UNK_10da5a8b0);
  lVar21 = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = lVar24 - extraout_x8_00;
  lVar11 = 0x112d4ffc8;
  func_0x0001000285a8(0x112d4ffc8,&UNK_10d9de530);
  lVar22 = *(long *)(lVar11 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar22 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = lVar19 - extraout_x8_01;
  func_0x000100083b20(alStack_80);
  lStack_110 = alStack_80[0];
  lVar12 = 0;
  func_0x0001020d05f8();
  lStack_c0 = lVar12;
  func_0x000107c610f8();
  lVar2 = _DAT_112e57320;
  puStack_88 = (undefined *)((ulong)puStack_88 & 0xffffffffffffff00);
  func_0x000107c5f1fc(lVar20,&puStack_88,PTR___sSbN_11034dd40);
  pcVar23 = *(code **)(lVar22 + 0x20);
  (*pcVar23)(lVar12 + lVar2,lVar20,lVar11);
  lVar2 = _DAT_112e57328;
  puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_88 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar14 = 0x112e572b8;
  func_0x0001000285a8(0x112e572b8,&UNK_10da5bc30);
  func_0x000107c5f1fc(lVar19,&puStack_88,uVar14);
  (**(code **)(lVar21 + 0x20))(lVar12 + lVar2,lVar19,lVar10);
  lVar10 = _DAT_112e57330;
  puStack_88 = (undefined *)((ulong)puStack_88 & 0xffffffffffffff00);
  func_0x000107c5f1fc(lVar20,&puStack_88,PTR___sSbN_11034dd40);
  (*pcVar23)(lVar12 + lVar10,lVar20,lVar11);
  puVar1 = (undefined8 *)(lVar12 + _DAT_112e57338);
  puVar13 = puVar15;
  func_0x0001020bff60();
  uVar14 = 0;
  FUN_1020d11c4(0,0x112d5ecd8,&PTR_PTR_1126bf130);
  puVar17 = PTR___sSSN_11034da80;
  FUN_1020f91bc(puVar13,PTR___sSSN_11034da80,uVar14,PTR___sSSSHsWP_11034da90);
  *puVar1 = puVar13;
  puVar1[1] = puVar17;
  lVar10 = _DAT_112e57340;
  FUN_1020c020c();
  *(undefined **)(lVar12 + lVar10) = puVar15;
  *(undefined **)(lVar12 + _DAT_112e57348) = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined8 *)(lVar12 + _DAT_112e57350) = 0;
  lVar10 = _DAT_112e57358;
  func_0x000107c5eea0(lVar24);
  func_0x000107c5ee8c();
  (**(code **)(lStack_108 + 8))(lVar24,lStack_100);
  *(undefined8 *)(lVar12 + lVar10) = param_2;
  lVar10 = _DAT_112e57360;
  uVar14 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  uVar9 = uStack_c8;
  uVar8 = uStack_d0;
  uVar7 = uStack_d8;
  uVar6 = uStack_e0;
  uVar5 = uStack_e8;
  uVar4 = uStack_f0;
  uVar3 = uStack_f8;
  lVar11 = lStack_110;
  *(undefined8 *)(lVar12 + lVar10) = uVar14;
  uVar18 = *(undefined8 *)(lStack_110 + _DAT_112e58428);
  *(undefined8 *)(lVar12 + _DAT_112e572c0) = uVar18;
  *(undefined8 *)(lVar12 + _DAT_112e57310) = uStack_f8;
  *(undefined8 *)(lVar12 + _DAT_112e572d0) = uStack_f0;
  *(undefined8 *)(lVar12 + _DAT_112e572e0) = uStack_e0;
  *(undefined8 *)(lVar12 + _DAT_112e572e8) = uStack_e8;
  *(undefined8 *)(lVar12 + _DAT_112e572f0) = uStack_d8;
  *(undefined8 *)(lVar12 + _DAT_112e572f8) = uStack_d0;
  *(undefined8 *)(lVar12 + _DAT_112e57300) = uStack_c8;
  *(undefined8 *)(lVar12 + _DAT_112e57308) = uStack_b0;
  *(undefined8 *)(lVar12 + _DAT_112e572d8) = uStack_a8;
  *(undefined8 *)(lVar12 + _DAT_112e57318) = uStack_a0;
  uVar14 = 0x112d53860;
  func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
  lStack_108 = *(undefined8 *)(lVar11 + _DAT_112e58430);
  lStack_100 = uVar14;
  func_0x000107c61174(uVar18);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uStack_b0);
  func_0x000107c6157c(uStack_a8);
  func_0x000107c6157c(uStack_a0);
  lVar10 = lStack_108;
  func_0x000107c61174();
  uVar14 = lVar10;
  func_0x0001000b637c();
  func_0x000107c61170(lVar10);
  pcVar23 = FUN_1020cbdbc;
  func_0x0001000bfde0(FUN_1020cbdbc,0,PTR___sSbN_11034dd40);
  func_0x000107c61574(uVar14);
  *(code **)(lVar12 + _DAT_112e572c8) = pcVar23;
  lStack_90 = lStack_c0;
  plVar16 = &lStack_98;
  lStack_98 = lVar12;
  func_0x000107c61154(plVar16,PTR_s_init_1125d9248);
  func_0x000107c61180();
  FUN_1020cbde4();
  func_0x000107c61170(plVar16);
  func_0x000107c61170(lVar11);
  *puStack_b8 = plVar16;
  return;
}



/* Entry: 1020cbc80; end: 1020cbcbb;  */

void FUN_1020cbc80(void)

{
  long unaff_x20;
  
  FUN_1020cb7e8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 1020cbcbc; end: 1020cbccf;  */

undefined1 FUN_1020cbcbc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uStack_31;
  
  puVar1 = &UNK_10da5a860;
  puVar2 = &UNK_10da5a888;
  func_0x000107c614e0(&UNK_10da5a860);
  func_0x000107c614e0(&UNK_10da5a888);
  func_0x000107c5f20c(&uStack_31);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  return uStack_31;
}



/* Entry: 1020cbcd0; end: 1020cbd3f;  */

undefined8 FUN_1020cbcd0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  
  puVar1 = &UNK_10da5a988;
  func_0x000107c614e0(&UNK_10da5a988);
  puVar2 = &UNK_10da5a9b0;
  func_0x000107c614e0(&UNK_10da5a9b0);
  func_0x000107c5f20c(&uStack_38);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  return uStack_38;
}



/* Entry: 1020cbd40; end: 1020cbd53;  */

undefined1 FUN_1020cbd40(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uStack_31;
  
  puVar1 = &UNK_10da5a910;
  puVar2 = &UNK_10da5a938;
  func_0x000107c614e0(&UNK_10da5a910);
  func_0x000107c614e0(&UNK_10da5a938);
  func_0x000107c5f20c(&uStack_31);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  return uStack_31;
}



/* Entry: 1020cbd54; end: 1020cbdbb;  */

undefined1 FUN_1020cbd54(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_31;
  
  func_0x000107c614e0();
  func_0x000107c614e0(param_2);
  func_0x000107c5f20c(&uStack_31);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  return uStack_31;
}



/* Entry: 1020cbdbc; end: 1020cbde3;  */

void FUN_1020cbdbc(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  func_0x000107c3ebcc();
  *param_1 = uVar1;
  return;
}



/* Entry: 1020cbde4; end: 1020cbf3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020cbde4(void)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 unaff_x20;
  char cStack_5a;
  undefined1 uStack_59;
  long lStack_58;
  
  func_0x000100083b20(&lStack_58);
  lVar1 = lStack_58;
  func_0x000107c5d9dc();
  func_0x000107c61180();
  func_0x000107c61170(lStack_58);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110f72698;
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110f72698);
    lVar1 = lVar2;
    func_0x000107c49ff8();
    func_0x000107c61170(ppuVar3);
    puVar6 = &UNK_10da5a860;
    puVar4 = puVar6;
    func_0x000107c614e0(&UNK_10da5a860);
    puVar7 = &UNK_10da5a888;
    puVar5 = puVar7;
    func_0x000107c614e0(&UNK_10da5a888);
    uStack_59 = (undefined1)lVar1;
    func_0x000107c61174();
    func_0x000107c5f210(&uStack_59,unaff_x20,puVar4,puVar5);
    func_0x000107c614e0(&UNK_10da5a860);
    func_0x000107c614e0(&UNK_10da5a888);
    func_0x000107c5f20c(&cStack_5a,unaff_x20,puVar6,puVar7);
    func_0x000107c61574(puVar6);
    func_0x000107c61574(puVar7);
    if (cStack_5a == '\x01') {
      FUN_1020cc124();
    }
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 1020cbf40; end: 1020cc123;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020cbf40(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  func_0x000100083b20(&puStack_60);
  puVar1 = puStack_60;
  func_0x000107c5d9dc();
  func_0x000107c61180();
  func_0x000107c61170(puStack_60);
  puVar2 = puVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  if (puVar2 != (undefined *)0x0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110f72698;
    puVar1 = &UNK_1104c9430;
    func_0x000107c613fc(&UNK_1104c9430,0x18,7);
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110f72698);
    func_0x000107c61614(puVar1 + 0x10);
    pcStack_40 = FUN_1020d1ec4;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1013b7310;
    puStack_48 = &UNK_1104c9678;
    puStack_38 = puVar1;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    func_0x000107c5032c(puVar2);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(puVar2);
    func_0x000107c61170(ppuVar4);
  }
  return;
}



/* Entry: 1020cc124; end: 1020cc2ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020cc124(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  code *pcVar8;
  code *pcVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  long unaff_x20;
  long *plVar13;
  long *unaff_x25;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1020c030c();
  puVar7 = &UNK_1104c9430;
  puVar4 = puVar7;
  func_0x000107c613fc(&UNK_1104c9430,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar5 = &UNK_1104c9458;
  func_0x000107c613fc(&UNK_1104c9458,0x30,7);
  puVar2 = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined **)(puVar5 + 0x18) = puVar2;
  *(undefined **)(puVar5 + 0x20) = puVar3;
  *(undefined **)(puVar5 + 0x28) = puVar1;
  func_0x000107c61434(puVar3);
  uVar6 = 0x62;
  func_0x0001001ca524(0x62,0,0x3c,4,0,0,&UNK_10da5a8c8,puVar5,PTR___sytN_11034f1b0 + 8);
  func_0x000107c6142c(puVar3);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar6);
  plVar13 = *(long **)(unaff_x20 + _DAT_112e572c8);
  func_0x000107c613fc(&UNK_1104c9430,0x18,7);
  func_0x000107c61614(puVar7 + 0x10);
  pcVar8 = FUN_1020d10f0;
  puVar5 = puVar7;
  (**(code **)(*plVar13 + 0x60))(FUN_1020d10f0);
  func_0x000107c61574(puVar7);
  pcVar9 = pcVar8;
  func_0x000107c614f0(pcVar8);
  (**(code **)(puVar5 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112e57360),pcVar9,puVar5);
  func_0x000107c615e8(pcVar8);
  FUN_1020cc2ac();
  func_0x0001020cc3fc();
  func_0x000100083b20(&stack0xffffffffffffffb8);
  plVar13 = unaff_x25;
  func_0x000107c43a80();
  func_0x000107c61180();
  func_0x000107c61170(unaff_x25);
  plVar10 = plVar13;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(plVar13);
  if (plVar10 != (long *)0x0) {
    func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
    plVar13 = plVar10;
    func_0x000107c402d0();
    func_0x000107c61180();
    plVar11 = plVar13;
    func_0x0001000b637c();
    func_0x000107c61170(plVar13);
    puVar7 = &UNK_1104c9430;
    func_0x000107c613fc(&UNK_1104c9430,0x18,7);
    func_0x000107c61614(puVar7 + 0x10,unaff_x20);
    uVar6 = 0x1020d10f8;
    puVar5 = puVar7;
    (**(code **)(*plVar11 + 0x60))(0x1020d10f8);
    func_0x000107c61574(plVar11);
    func_0x000107c61574(puVar7);
    uVar12 = uVar6;
    func_0x000107c614f0(uVar6);
    (**(code **)(puVar5 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112e57360),uVar12,puVar5);
    func_0x000107c615e8(plVar10);
    func_0x000107c615e8(uVar6);
  }
  return;
}



/* Entry: 1020cc2ac; end: 1020cc69f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020cc2ac(void)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  code *pcVar5;
  code *pcVar6;
  undefined *puVar7;
  long unaff_x20;
  long *plStack_48;
  
  func_0x000100083b20(&plStack_48);
  plVar1 = plStack_48;
  func_0x000107c4ec94();
  func_0x000107c61180();
  func_0x000107c61170(plStack_48);
  plVar2 = plVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(plVar1);
  if (plVar2 != (long *)0x0) {
    func_0x0001000285a8(0x112e573b0,&UNK_10dacc510);
    plVar1 = plVar2;
    func_0x000107c4ec88();
    func_0x000107c61180();
    plVar3 = plVar1;
    func_0x0001000b637c();
    func_0x000107c61170(plVar1);
    puVar4 = &UNK_1104c9430;
    func_0x000107c613fc(&UNK_1104c9430,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    pcVar5 = FUN_1020d127c;
    puVar7 = puVar4;
    (**(code **)(*plVar3 + 0x60))(FUN_1020d127c);
    func_0x000107c61574(plVar3);
    func_0x000107c61574(puVar4);
    pcVar6 = pcVar5;
    func_0x000107c614f0(pcVar5);
    (**(code **)(puVar7 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112e57360),pcVar6,puVar7);
    func_0x000107c615e8(plVar2);
    func_0x000107c615e8(pcVar5);
  }
  return;
}



/* Entry: 1020cc6a0; end: 1020cc767;  */

/* WARNING: Possible PIC construction at 0x0001020cc74c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020cc750) */

void FUN_1020cc6a0(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_1;
  puVar1 = &UNK_1104c94d0;
  func_0x000107c613fc(&UNK_1104c94d0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  puVar2 = &UNK_1104c94f8;
  func_0x000107c613fc(&UNK_1104c94f8,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10da5a8f8;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(uVar3);
  func_0x000107c6157c(param_2);
  func_0x0001001ca524(0x62,0,0x3c,4,0,0,&UNK_10da5a908,puVar2,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 1020cc768; end: 1020cc7f7;  */

void FUN_1020cc768(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar3;
  uVar3 = 0x112d45220;
  FUN_1020d1408(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020cc7f8,uVar2,uVar3);
  return;
}



/* Entry: 1020cc7f8; end: 1020cc893;  */

void FUN_1020cc7f8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x22;
  
  uVar3 = *(ulong *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
  func_0x000107c443c8();
  if ((uVar3 & 1) == 0) {
    lVar4 = *(long *)(unaff_x22 + 0x30);
    func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x10,0,0);
    lVar4 = lVar4 + 0x10;
    func_0x000107c61618();
    if (lVar4 != 0) {
      puVar1 = &UNK_10da5a910;
      func_0x000107c614e0(&UNK_10da5a910);
      puVar2 = &UNK_10da5a938;
      func_0x000107c614e0(&UNK_10da5a938);
      *(undefined1 *)(unaff_x22 + 0x40) = 0;
      func_0x000107c5f210(unaff_x22 + 0x40,lVar4,puVar1,puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001020cc890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1020cc894; end: 1020cc8cf;  */

void FUN_1020cc894(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001020cc8cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1020cc8d0; end: 1020ccf7f;  */

void FUN_1020cc8d0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  long extraout_x8;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long alStack_d0 [2];
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar6 = 0;
  func_0x0001020d1180();
  lStack_a0 = *(long *)(lVar6 + -8);
  lStack_98 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar6 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_88 = (long)&lStack_c0 + lVar6;
  uVar16 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lStack_80 = 0;
    uVar7 = 0;
    FUN_1020d11c4(0,0x112d5ecc8,&PTR_PTR_1126cd678);
    func_0x000107c5f9e4(uVar16,&lStack_80,PTR___sSSN_11034da80,uVar7,PTR___sSSSHsWP_11034da90);
    lVar4 = lStack_80;
    if (lStack_80 != 0) {
      puVar12 = &UNK_10da59ff8;
      lStack_c0 = param_2;
      func_0x0001000285a8(0x112e56c10,&UNK_10da59ff8);
      lVar8 = lVar4;
      func_0x000107c6048c();
      lVar18 = 0;
      uVar15 = 1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
      uVar19 = 0xffffffffffffffff;
      if ((*(byte *)(lVar4 + 0x20) & 0x3f) < 6) {
        uVar19 = ~(-1L << (uVar15 & 0x3f));
      }
      uVar19 = uVar19 & *(ulong *)(lVar4 + 0x40);
      lStack_b0 = lVar8 + 0x40;
      lStack_b8 = lVar4;
      lStack_a8 = lVar8;
      if (uVar19 == 0) goto LAB_1020cca28;
      do {
        uVar13 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
        uVar19 = uVar19 - 1 & uVar19;
        while( true ) {
          uVar13 = LZCOUNT(uVar13);
          uVar17 = uVar13 | lVar18 << 6;
          puVar1 = (undefined8 *)(*(long *)(lStack_b8 + 0x30) + uVar17 * 0x10);
          lVar9 = *(long *)(*(long *)(lStack_b8 + 0x38) + uVar17 * 8);
          uStack_90 = *puVar1;
          uVar16 = puVar1[1];
          func_0x000107c61174();
          func_0x000107c61434(uVar16);
          lVar8 = lVar9;
          func_0x000107c4399c();
          func_0x000107c61180();
          if (lVar8 == 0) {
            func_0x000107c5ede0();
            lVar11 = 1;
            (**(code **)(*(long *)(lVar8 + -8) + 0x38))(lStack_88,1,1,lVar8);
          }
          else {
            lVar11 = lVar8;
            func_0x000107c5faec();
            func_0x000107c61170(lVar8);
            func_0x000107c61434(puVar12);
            func_0x000107c5edd0(lStack_88,lVar11,puVar12);
            lVar11 = 2;
            func_0x000107c61430(puVar12);
          }
          lVar8 = lVar9;
          func_0x000107c3d004();
          func_0x000107c61180();
          if (lVar8 == 0) {
            func_0x000107c61170(lVar9);
            lVar20 = 0;
            lVar11 = 0;
          }
          else {
            lVar20 = lVar8;
            func_0x000107c5faec();
            func_0x000107c61170(lVar9);
            func_0x000107c61170(lVar8);
          }
          lVar8 = lStack_a8;
          plVar2 = (long *)(lStack_88 + *(int *)(lStack_98 + 0x14));
          *plVar2 = lVar20;
          plVar2[1] = lVar11;
          uVar14 = (uVar13 & 0xffffffffffffffc0 | lVar18 << 6) >> 3;
          *(ulong *)(lStack_b0 + uVar14) = *(ulong *)(lStack_b0 + uVar14) | 1L << (uVar13 & 0x3f);
          puVar1 = (undefined8 *)(*(long *)(lStack_a8 + 0x30) + uVar17 * 0x10);
          *puVar1 = uStack_90;
          puVar1[1] = uVar16;
          puVar12 = (undefined *)
                    (*(long *)(lStack_a8 + 0x38) + *(long *)(lStack_a0 + 0x48) * uVar17);
          func_0x0001020d1760(lStack_88,puVar12,0x1020d1180);
          if (SCARRY8(*(long *)(lVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1020cccb0);
            (*pcVar5)();
          }
          *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
          if (uVar19 != 0) break;
LAB_1020cca28:
          do {
            lVar9 = lVar18 + 1;
            if (SCARRY8(lVar18,1)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1020cccac);
              (*pcVar5)();
            }
            if ((long)(uVar15 + 0x3f >> 6) <= lVar9) {
              func_0x000107c6142c(lStack_b8);
              puVar12 = &UNK_1104c9430;
              func_0x000107c613fc(&UNK_1104c9430,0x18,7);
              lVar4 = lStack_c0;
              func_0x000107c61614(puVar12 + 0x10,lStack_c0);
              puVar10 = &UNK_1104c94a8;
              func_0x000107c613fc(&UNK_1104c94a8,0x30,7);
              puVar3 = PTR___swiftEmptySetSingleton_11034f1d8;
              *(undefined **)(puVar10 + 0x10) = puVar12;
              *(undefined **)(puVar10 + 0x18) = puVar3;
              puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
              *(long *)(puVar10 + 0x20) = lVar8;
              *(undefined **)(puVar10 + 0x28) = puVar12;
              func_0x000107c6157c(lVar8);
              *(undefined **)((long)alStack_d0 + lVar6) = PTR___sytN_11034f1b0 + 8;
              uVar16 = 0x62;
              func_0x0001001ca524(0x62,0,0x3c,4,0,0,&UNK_10da5a8e0,puVar10);
              func_0x000107c61170(lVar4);
              func_0x000107c61574(lVar8);
              func_0x000107c61574(puVar10);
              func_0x000107c61574(uVar16);
              return;
            }
            uVar19 = ((ulong *)(lVar4 + 0x40))[lVar9];
            lVar18 = lVar18 + 1;
          } while (uVar19 == 0);
          uVar13 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
          uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
          uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
          uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
          uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
          uVar19 = uVar19 - 1 & uVar19;
          lVar18 = lVar9;
        }
      } while( true );
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1020ccf80; end: 1020cd077;  */

void FUN_1020ccf80(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puVar2 = &UNK_1104c9520;
    func_0x000107c613fc(&UNK_1104c9520,0x20,7);
    puVar2[0x10] = uVar1;
    *(long *)(puVar2 + 0x18) = param_2;
    puVar3 = &UNK_1104c9548;
    func_0x000107c613fc(&UNK_1104c9548,0x20,7);
    *(undefined **)(puVar3 + 0x10) = &UNK_10da5a960;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    func_0x000107c61174(param_2);
    uVar4 = 0x62;
    func_0x0001001ca524(0x62,0,0x3c,4,0,0,&UNK_10da5a968,puVar3,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(param_2);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(uVar4);
  }
  return;
}



/* Entry: 1020cd078; end: 1020cd10b;  */

void FUN_1020cd078(undefined1 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(undefined1 *)(unaff_x22 + 0x21) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar3;
  uVar3 = 0x112d45220;
  FUN_1020d1408(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020cd10c,uVar2,uVar3);
  return;
}



/* Entry: 1020cd10c; end: 1020cd1a3;  */

void FUN_1020cd10c(void)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  cVar1 = *(char *)(unaff_x22 + 0x21);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  if (cVar1 == '\x01') {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x10);
    puVar2 = &UNK_10da5a910;
    func_0x000107c614e0(&UNK_10da5a910);
    puVar3 = &UNK_10da5a938;
    func_0x000107c614e0(&UNK_10da5a938);
    *(undefined1 *)(unaff_x22 + 0x20) = 0;
    func_0x000107c61174(uVar4);
    func_0x000107c5f210((undefined1 *)(unaff_x22 + 0x20),uVar4,puVar2,puVar3);
  }
  else {
    FUN_1020cd1a4();
  }
                    /* WARNING: Could not recover jumptable at 0x0001020cd1a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1020cd1a4; end: 1020cd717;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020cd1a4(double param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar9;
  undefined8 unaff_x20;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lStack_90;
  undefined1 uStack_78;
  undefined7 uStack_77;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar11 = (long)&lStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0x112d373d0;
  lStack_90 = lVar11;
  func_0x0001000285a8(0x112d373d0,&UNK_10d90f8f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar11 - extraout_x8_00;
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  uVar12 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = uVar12 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar14 - extraout_x12_00;
  func_0x000100083b20(&uStack_78);
  lVar2 = CONCAT71(uStack_77,uStack_78);
  lVar3 = lVar2;
  func_0x000107c4ec94();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar2 == 0) {
    return;
  }
  lVar3 = lVar2;
  func_0x000107c4ec80();
  func_0x000107c61180();
  func_0x000107c615e8(lVar2);
  if (lVar3 == 0) {
    return;
  }
  lVar2 = lVar3;
  func_0x000107c443c8();
  func_0x000107c61170(lVar3);
  if ((int)lVar2 == 0) {
    return;
  }
  func_0x000100083b20(&uStack_78);
  lVar2 = CONCAT71(uStack_77,uStack_78);
  lVar3 = lVar2;
  func_0x000107c4ec94();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar2 == 0) {
LAB_1020cd3f4:
    uVar7 = 1;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c4ec80();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    if (lVar3 == 0) goto LAB_1020cd3f4;
    lVar2 = lVar3;
    func_0x000107c443d0();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar2 == 0) goto LAB_1020cd3f4;
    func_0x000107c5ee94(lVar13,lVar2);
    func_0x000107c61170(lVar2);
    uVar7 = 0;
  }
  pcVar9 = *(code **)(lVar8 + 0x38);
  (*pcVar9)(lVar13,uVar7,1,lVar1);
  (*pcVar9)(lVar14,1,1,lVar1);
  lVar10 = (long)*(int *)(lVar10 + 0x30);
  func_0x0001020d17a4(lVar13,lVar11,0x112d373d8,&UNK_10d9014c0);
  func_0x0001020d17a4(lVar14,lVar11 + lVar10,0x112d373d8,&UNK_10d9014c0);
  pcVar9 = *(code **)(lVar8 + 0x30);
  lVar2 = lVar11;
  (*pcVar9)(lVar11,1,lVar1);
  if ((int)lVar2 == 1) {
    func_0x0001020d1720(lVar14,0x112d373d8,&UNK_10d9014c0);
    func_0x0001020d1720(lVar13,0x112d373d8,&UNK_10d9014c0);
    lVar10 = lVar11 + lVar10;
    (*pcVar9)(lVar10,1,lVar1);
    if ((int)lVar10 != 1) {
LAB_1020cd538:
      func_0x0001020d1720(lVar11,0x112d373d0,&UNK_10d90f8f0);
      return;
    }
    func_0x0001020d1720(lVar11,0x112d373d8,&UNK_10d9014c0);
  }
  else {
    func_0x0001020d17a4(lVar11,uVar12,0x112d373d8,&UNK_10d9014c0);
    lVar2 = lVar11 + lVar10;
    (*pcVar9)(lVar2,1,lVar1);
    lVar3 = lStack_90;
    if ((int)lVar2 == 1) {
      func_0x0001020d1720(lVar14,0x112d373d8,&UNK_10d9014c0);
      func_0x0001020d1720(lVar13,0x112d373d8,&UNK_10d9014c0);
      (**(code **)(lVar8 + 8))(uVar12,lVar1);
      goto LAB_1020cd538;
    }
    (**(code **)(lVar8 + 0x20))(lStack_90,lVar11 + lVar10,lVar1);
    uVar7 = 0x112d373e0;
    FUN_1020d1408(0x112d373e0,PTR___s10Foundation4DateVMa_110350bb8,
                  PTR___s10Foundation4DateVSQAAMc_110350be0);
    uVar4 = uVar12;
    func_0x000107c5fab8(uVar12,lVar3,lVar1,uVar7);
    pcVar9 = *(code **)(lVar8 + 8);
    (*pcVar9)(lVar3,lVar1);
    func_0x0001020d1720(lVar14,0x112d373d8,&UNK_10d9014c0);
    func_0x0001020d1720(lVar13,0x112d373d8,&UNK_10d9014c0);
    (*pcVar9)(uVar12,lVar1);
    func_0x0001020d1720(lVar11,0x112d373d8,&UNK_10d9014c0);
    if ((uVar4 & 1) == 0) {
      return;
    }
  }
  func_0x000100083b20(&uStack_78);
  uVar12 = CONCAT71(uStack_77,uStack_78);
  uVar4 = uVar12;
  func_0x000107c4a648();
  func_0x000107c615e8(uVar12);
  if ((uVar4 & 1) == 0) {
    func_0x000100083b20(&uStack_78);
    lVar2 = CONCAT71(uStack_77,uStack_78);
    func_0x000107c4c340();
    func_0x000107c61170(CONCAT71(uStack_77,uStack_78));
    lVar10 = lStack_90;
    func_0x000107c5eea0(lStack_90);
    func_0x000107c5ee8c();
    (**(code **)(lVar8 + 8))(lVar10,lVar1);
    if (7776000.0 < param_1 - (double)lVar2) {
      puVar5 = &UNK_10da5a910;
      func_0x000107c614e0(&UNK_10da5a910);
      puVar6 = &UNK_10da5a938;
      func_0x000107c614e0(&UNK_10da5a938);
      uStack_78 = 1;
      func_0x000107c61174(unaff_x20);
      func_0x000107c5f210(&uStack_78,unaff_x20,puVar5,puVar6);
    }
  }
  return;
}



/* Entry: 1020cd718; end: 1020cd7e7;  */

/* WARNING: Possible PIC construction at 0x0001020cd768: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020cd7c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020cd7cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020cd718(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  
  puVar1 = PTR___sytN_11034f1b0;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112e57350);
  if (puVar2 == (undefined *)0x0) {
    puVar2 = &UNK_1104c9430;
    func_0x000107c613fc(&UNK_1104c9430,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    func_0x0001001ca524(0x62,0,0x3c,4,0,0,&UNK_10da5aa30,puVar2,puVar1 + 8);
  }
  else {
    func_0x000107c6157c(puVar2);
    func_0x000107c5fd50();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 1020cd7e8; end: 1020cd853;  */

void FUN_1020cd7e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar1;
  plVar2 = (long *)(ulong)*(uint *)(
                                   PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                   + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1020cd854;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)(80000000);
  return;
}



/* Entry: 1020cd854; end: 1020cd923;  */

void FUN_1020cd854(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x40));
  uVar2 = *(undefined8 *)(lVar4 + 0x30);
  if (unaff_x20 == 0) {
    uVar1 = 0x112d45220;
    FUN_1020d1408(0x112d45220,PTR___sScMMa_11034fc70,PTR___sScMScAsMc_11034fc78);
    func_0x000107c5fca8(uVar2,uVar1);
    pcVar3 = FUN_1020cd924;
  }
  else {
    func_0x000107c614ac();
    uVar1 = 0x112d45220;
    FUN_1020d1408(0x112d45220,PTR___sScMMa_11034fc70,PTR___sScMScAsMc_11034fc78);
    func_0x000107c5fca8(uVar2,uVar1);
    pcVar3 = FUN_1020d2088;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,uVar2,uVar1);
  return;
}



/* Entry: 1020cd924; end: 1020cd9b7;  */

void FUN_1020cd924(ulong param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  func_0x000107c5fd5c();
  if ((param_1 & 1) == 0) {
    lVar5 = *(long *)(unaff_x22 + 0x28);
    func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x10,0,0);
    lVar5 = lVar5 + 0x10;
    func_0x000107c61618();
    *(long *)(unaff_x22 + 0x48) = lVar5;
    if (lVar5 != 0) {
      plVar2 = (long *)0x40;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x50) = plVar2;
      *plVar2 = unaff_x22;
      plVar2[1] = (long)FUN_1020cd9b8;
      plVar2[6] = lVar5;
      lVar3 = 0;
      func_0x000107c5fcec();
      puVar1 = PTR___sScMMa_11034fc70;
      lVar5 = lVar3;
      func_0x000107c5fce8();
      plVar2[7] = lVar5;
      uVar4 = 0x112d45220;
      FUN_1020d1408(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
      func_0x000107c5fca8(lVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_1020cdb04,lVar3,uVar4);
      return;
    }
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x0001020cd9b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1020cd9b8; end: 1020cda43;  */

void FUN_1020cd9b8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x48);
  uVar2 = *(undefined8 *)(lVar3 + 0x30);
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x50));
  func_0x000107c61170(uVar1);
  uVar1 = 0x112d45220;
  FUN_1020d1408(0x112d45220,PTR___sScMMa_11034fc70,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020cda44,uVar2,uVar1);
  return;
}



/* Entry: 1020cda44; end: 1020cda73;  */

void FUN_1020cda44(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x0001020cda70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1020cda74; end: 1020cdb03;  */

void FUN_1020cda74(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar3;
  uVar3 = 0x112d45220;
  FUN_1020d1408(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020cdb04,uVar2,uVar3);
  return;
}



/* Entry: 1020cdb04; end: 1020cdc1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020cdb04(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
  lVar1 = _DAT_112e57348;
  func_0x000107c61428(lVar3 + _DAT_112e57348,unaff_x22 + 0x10,1,0);
  lVar2 = *(long *)(lVar3 + lVar1);
  *(undefined **)(lVar3 + lVar1) = PTR___swiftEmptySetSingleton_11034f1d8;
  if (*(long *)(lVar2 + 0x10) != 0) {
    func_0x000100083b20(unaff_x22 + 0x28);
    lVar3 = *(long *)(unaff_x22 + 0x28);
    lVar1 = *(long *)(lVar3 + _DAT_112e59480);
    func_0x000107c61174();
    func_0x000107c61170(lVar3);
    lVar3 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar3 != 0) {
      lVar1 = lVar2;
      func_0x000107c5fe08(lVar2,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
      func_0x000107c6142c(lVar2);
      func_0x000107c503b8(lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c615e8(lVar3);
      goto LAB_1020cdc04;
    }
  }
  func_0x000107c6142c(lVar2);
LAB_1020cdc04:
                    /* WARNING: Could not recover jumptable at 0x0001020cdc18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1020cdc1c; end: 1020cdcd7;  */

void FUN_1020cdc1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_4;
  *(undefined8 *)(unaff_x22 + 0x70) = param_5;
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  *(undefined8 *)(unaff_x22 + 0x60) = param_3;
  lVar2 = 0;
  func_0x0001020d1180();
  *(long *)(unaff_x22 + 0x78) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x80) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x88) = uVar3;
  uVar4 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar5 = uVar4;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x90) = uVar5;
  uVar5 = 0x112d45220;
  FUN_1020d1408(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x98) = uVar4;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020cdcd8,uVar4,uVar5);
  return;
}



/* Entry: 1020cdcd8; end: 1020ce41b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020cdcd8(void)

{
  ulong *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  code *pcVar7;
  bool bVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  ulong uVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  undefined *puVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  undefined8 uVar27;
  long lVar28;
  long unaff_x22;
  undefined8 uVar29;
  ulong uVar30;
  undefined *puVar31;
  ulong uVar32;
  ulong uStack_c0;
  undefined1 auStack_a0 [72];
  
  lVar24 = *(long *)(unaff_x22 + 0x58);
  func_0x000107c61428(lVar24 + 0x10,unaff_x22 + 0x30,0,0);
  lVar24 = lVar24 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0xa8) = lVar24;
  lVar23 = _DAT_112e57340;
  if (lVar24 == 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x90));
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x0001020cdfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(long *)(unaff_x22 + 0xb0) = _DAT_112e57340;
  lVar3 = _DAT_112e57338;
  uVar29 = *(undefined8 *)(lVar24 + lVar23);
  *(long *)(unaff_x22 + 0xb8) = _DAT_112e57338;
  uVar30 = *(ulong *)(lVar24 + lVar3);
  uVar32 = ((ulong *)(lVar24 + lVar3))[1];
  uVar9 = 0;
  FUN_1020d11c4(0,0x112d5ecd8,&PTR_PTR_1126bf130);
  func_0x000107c61434(uVar29);
  func_0x000107c61434(uVar30);
  func_0x000107c61434(uVar32);
  uVar22 = uVar30;
  uVar26 = uVar32;
  FUN_1020fa224(uVar30,uVar32,PTR___sSSN_11034da80,uVar9,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(uVar30);
  func_0x000107c6142c(uVar32);
  if (uVar22 >> 0x3e == 0) {
    uVar30 = *(ulong *)((uVar22 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar30 = uVar22 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar22) {
      uVar30 = uVar22;
    }
    func_0x000107c60480();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar30 != 0) {
    uVar32 = 0;
    lVar23 = *(long *)(unaff_x22 + 0x60);
    do {
      if ((uVar22 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar22 & 0xffffffffffffff8) + 0x10) <= uVar32) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1020ce3fc);
          (*pcVar7)();
        }
        uVar10 = *(ulong *)(uVar22 + 0x20 + uVar32 * 8);
        func_0x000107c61174();
      }
      else {
        uVar10 = uVar32;
        uVar26 = uVar22;
        func_0x0001020d0d0c(uVar32,uVar22,&PTR_PTR_1126bf130,0x112d5ecd8);
      }
      bVar8 = SCARRY8(uVar32,1);
      uVar32 = uVar32 + 1;
      if (bVar8) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1020ce3f8);
        (*pcVar7)();
      }
      uVar21 = uVar10;
      func_0x000107c5d984();
      func_0x000107c61180();
      uVar11 = uVar21;
      func_0x000107c5faec();
      uVar18 = uVar26;
      func_0x000107c61170(uVar21);
      if (*(long *)(lVar23 + 0x10) != 0) {
        func_0x000107c6068c(auStack_a0,*(undefined8 *)(lVar23 + 0x28));
        puVar12 = auStack_a0;
        uVar18 = uVar11;
        func_0x000107c5fb58(puVar12,uVar11,uVar26);
        func_0x000107c606a8();
        uVar21 = -1L << ((ulong)*(byte *)(lVar23 + 0x20) & 0x3f);
        uVar25 = (ulong)puVar12 & (uVar21 ^ 0xffffffffffffffff);
        if ((*(ulong *)(lVar23 + 0x38 + (uVar25 >> 6) * 8) >> (uVar25 & 0x3f) & 1) != 0) {
          do {
            puVar1 = (ulong *)(*(long *)(lVar23 + 0x30) + uVar25 * 0x10);
            uVar13 = *puVar1;
            uVar18 = puVar1[1];
            if ((uVar13 == uVar11 && uVar18 == uVar26) ||
               (func_0x000107c605b8(uVar13,uVar18,uVar11,uVar26,0), (uVar13 & 1) != 0)) {
              func_0x000107c6142c(uVar26);
              func_0x000107c61170(uVar10);
              uVar26 = uVar18;
              goto joined_r0x0001020cde14;
            }
            uVar25 = uVar25 + 1 & ~uVar21;
          } while ((*(ulong *)(lVar23 + 0x38 + (uVar25 >> 6) * 8) >> (uVar25 & 0x3f) & 1) != 0);
        }
      }
      func_0x000107c6142c(uVar26);
      puVar20 = puVar6;
      func_0x000107c61558();
      if (((ulong)puVar20 & 1) == 0) {
        uVar18 = *(long *)(puVar6 + 0x10) + 1;
        func_0x000101162338(0,uVar18,1);
      }
      uVar21 = *(ulong *)(puVar6 + 0x10);
      uVar26 = uVar21 + 1;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar21) {
        uVar18 = uVar26;
        func_0x000101162338(1 < *(ulong *)(puVar6 + 0x18),uVar26,1);
      }
      *(ulong *)(puVar6 + 0x10) = uVar26;
      *(ulong *)(puVar6 + uVar21 * 8 + 0x20) = uVar10;
      uVar26 = uVar18;
joined_r0x0001020cde14:
    } while (uVar32 != uVar30);
  }
  lVar23 = *(long *)(unaff_x22 + 0x68);
  func_0x000107c6142c(uVar22);
  if (*(long *)(lVar23 + 0x10) == 0) {
    func_0x000100083b20(unaff_x22 + 0x50);
    lVar23 = *(long *)(unaff_x22 + 0x50);
    puVar31 = *(undefined **)(lVar23 + _DAT_112e59480);
    func_0x000107c61174();
    func_0x000107c61170(lVar23);
    puVar20 = puVar31;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(puVar31);
    if (puVar20 != (undefined *)0x0) {
      lVar3 = *(long *)(unaff_x22 + 0x78);
      lVar4 = *(long *)(unaff_x22 + 0x80);
      puVar31 = puVar20;
      func_0x000107c44124();
      func_0x000107c61180();
      func_0x000107c615e8(puVar20);
      uVar9 = 0;
      FUN_1020d11c4(0,0x112d5ecc8,&PTR_PTR_1126cd678);
      puVar14 = puVar31;
      func_0x000107c5f9e8(puVar31,PTR___sSSN_11034da80,uVar9,PTR___sSSSHsWP_11034da90);
      func_0x000107c61170(puVar31);
      puVar20 = &UNK_10da59ff8;
      func_0x0001000285a8(0x112e56c10,&UNK_10da59ff8);
      puVar31 = puVar14;
      func_0x000107c6048c();
      lVar23 = 0;
      uVar30 = 1L << ((ulong)(byte)puVar14[0x20] & 0x3f);
      uStack_c0 = 0xffffffffffffffff;
      if ((puVar14[0x20] & 0x3f) < 6) {
        uStack_c0 = ~(-1L << (uVar30 & 0x3f));
      }
      uStack_c0 = uStack_c0 & *(ulong *)(puVar14 + 0x40);
      if (uStack_c0 == 0) goto LAB_1020ce14c;
      do {
        uVar32 = (uStack_c0 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_c0 & 0x5555555555555555) << 1;
        uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
        uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
        uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10;
        uVar32 = uVar32 >> 0x20 | uVar32 << 0x20;
        uStack_c0 = uStack_c0 - 1 & uStack_c0;
        while( true ) {
          uVar32 = LZCOUNT(uVar32);
          uVar26 = uVar32 | lVar23 << 6;
          puVar2 = (undefined8 *)(*(long *)(puVar14 + 0x30) + uVar26 * 0x10);
          lVar15 = *(long *)(*(long *)(puVar14 + 0x38) + uVar26 * 8);
          uVar9 = *puVar2;
          uVar5 = puVar2[1];
          func_0x000107c61174();
          func_0x000107c61434(uVar5);
          lVar16 = lVar15;
          func_0x000107c4399c();
          func_0x000107c61180();
          uVar27 = *(undefined8 *)(unaff_x22 + 0x88);
          if (lVar16 == 0) {
            func_0x000107c5ede0();
            lVar19 = 1;
            (**(code **)(*(long *)(lVar16 + -8) + 0x38))(uVar27,1,1,lVar16);
          }
          else {
            lVar19 = lVar16;
            func_0x000107c5faec();
            func_0x000107c61170(lVar16);
            func_0x000107c61434(puVar20);
            func_0x000107c5edd0(uVar27,lVar19,puVar20);
            lVar19 = 2;
            func_0x000107c61430(puVar20);
          }
          lVar16 = lVar15;
          func_0x000107c3d004();
          func_0x000107c61180();
          if (lVar16 == 0) {
            func_0x000107c61170(lVar15);
            lVar28 = 0;
            lVar19 = 0;
          }
          else {
            lVar28 = lVar16;
            func_0x000107c5faec();
            func_0x000107c61170(lVar16);
            func_0x000107c61170(lVar15);
          }
          lVar16 = *(long *)(unaff_x22 + 0x88);
          plVar17 = (long *)(lVar16 + *(int *)(lVar3 + 0x14));
          *plVar17 = lVar28;
          plVar17[1] = lVar19;
          uVar22 = (uVar32 & 0xffffffffffffffc0 | lVar23 << 6) >> 3;
          *(ulong *)(puVar31 + uVar22 + 0x40) =
               *(ulong *)(puVar31 + uVar22 + 0x40) | 1L << (uVar32 & 0x3f);
          puVar2 = (undefined8 *)(*(long *)(puVar31 + 0x30) + uVar26 * 0x10);
          *puVar2 = uVar9;
          puVar2[1] = uVar5;
          puVar20 = (undefined *)(*(long *)(puVar31 + 0x38) + *(long *)(lVar4 + 0x48) * uVar26);
          func_0x0001020d1760(lVar16,puVar20,0x1020d1180);
          if (SCARRY8(*(long *)(puVar31 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1020ce41c);
            (*pcVar7)();
          }
          *(long *)(puVar31 + 0x10) = *(long *)(puVar31 + 0x10) + 1;
          if (uStack_c0 != 0) break;
LAB_1020ce14c:
          do {
            lVar16 = lVar23 + 1;
            if (SCARRY8(lVar23,1)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x1020ce400);
              (*pcVar7)();
            }
            if ((long)(uVar30 + 0x3f >> 6) <= lVar16) {
              func_0x000107c6142c(puVar14);
              goto LAB_1020ce2f8;
            }
            uStack_c0 = *(ulong *)((long)(puVar14 + 0x40) + lVar16 * 8);
            lVar23 = lVar23 + 1;
          } while (uStack_c0 == 0);
          uVar32 = (uStack_c0 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_c0 & 0x5555555555555555) << 1;
          uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
          uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
          uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10;
          uVar32 = uVar32 >> 0x20 | uVar32 << 0x20;
          uStack_c0 = uStack_c0 - 1 & uStack_c0;
          lVar23 = lVar16;
        }
      } while( true );
    }
    puVar31 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_1020c030c();
  }
  else {
    puVar31 = *(undefined **)(unaff_x22 + 0x68);
    func_0x000107c61434(puVar31);
  }
LAB_1020ce2f8:
  uVar9 = *(undefined8 *)(unaff_x22 + 0x70);
  puVar20 = &UNK_1104c9570;
  func_0x000107c613fc(&UNK_1104c9570,0x38,7);
  *(long *)(puVar20 + 0x10) = lVar24;
  *(undefined8 *)(puVar20 + 0x18) = uVar9;
  *(undefined8 *)(puVar20 + 0x20) = uVar29;
  *(undefined **)(puVar20 + 0x28) = puVar6;
  *(undefined **)(puVar20 + 0x30) = puVar31;
  func_0x000107c61434(uVar9);
  func_0x000107c61174(lVar24);
  uVar9 = 0x112e573b8;
  func_0x0001000285a8(0x112e573b8,&UNK_10da5a980);
  uVar29 = 0x62;
  func_0x0001009548b0(0x62,0,0x3c,3,0,0,&UNK_10da5a978,puVar20,uVar9);
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar29;
  func_0x000107c61574(puVar20);
  plVar17 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 200) = plVar17;
  *plVar17 = unaff_x22;
  plVar17[1] = (long)FUN_1020ce41c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)(plVar17,unaff_x22 + 0x10,uVar29,uVar9);
  return;
}



/* Entry: 1020ce41c; end: 1020ce467;  */

void FUN_1020ce41c(void)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0xc0);
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 200));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_1020ce468,*(undefined8 *)(lVar2 + 0x98),*(undefined8 *)(lVar2 + 0xa0));
  return;
}



/* Entry: 1020ce468; end: 1020ce55b;  */

void FUN_1020ce468(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x90));
  lVar8 = *(long *)(unaff_x22 + 0x10);
  if (lVar8 == 0) {
    lVar8 = *(long *)(unaff_x22 + 0xa8);
  }
  else {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar2 = *(long *)(unaff_x22 + 0xb0);
    lVar7 = *(long *)(unaff_x22 + 0xa8);
    puVar1 = (undefined8 *)(lVar7 + *(long *)(unaff_x22 + 0xb8));
    puVar4 = &UNK_10da5a988;
    func_0x000107c614e0(&UNK_10da5a988);
    puVar5 = &UNK_10da5a9b0;
    func_0x000107c614e0(&UNK_10da5a9b0);
    *(long *)(unaff_x22 + 0x48) = lVar8;
    lVar8 = lVar7;
    func_0x000107c61174(lVar7);
    func_0x000107c5f210((long *)(unaff_x22 + 0x48),lVar8,puVar4,puVar5);
    uVar6 = *puVar1;
    uVar3 = puVar1[1];
    puVar1[1] = uVar11;
    *puVar1 = uVar10;
    func_0x000107c6142c(uVar6);
    func_0x000107c6142c(uVar3);
    uVar6 = *(undefined8 *)(lVar7 + lVar2);
    *(undefined8 *)(lVar7 + lVar2) = uVar9;
    func_0x000107c6142c(uVar6);
  }
  func_0x000107c61170(lVar8);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x0001020ce558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1020ce55c; end: 1020ce5db;  */

void FUN_1020ce55c(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0x110;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1020ce5dc;
  plVar1[10] = param_6;
  plVar1[0xb] = param_2;
  plVar1[8] = param_4;
  plVar1[9] = param_5;
  plVar1[7] = param_3;
  lVar2 = 0;
  func_0x000107c5eea4();
  plVar1[0xc] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[0xd] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0xe] = uVar3;
  lVar2 = 0;
  func_0x0001020c2460();
  plVar1[0xf] = lVar2;
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x10] = uVar3;
  lVar2 = 0x112e573c0;
  func_0x0001000285a8(0x112e573c0,&UNK_10da5a9d8);
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xf;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x11] = uVar4;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x12] = uVar4;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x13] = uVar3;
  lVar2 = 0x112e573c8;
  func_0x0001000285a8(0x112e573c8,&UNK_10da5a9e0);
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x14] = uVar3;
  lVar2 = 0;
  func_0x0001020c31a0();
  plVar1[0x15] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[0x16] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x17] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020ce768,0,0);
  return;
}



/* Entry: 1020ce5dc; end: 1020ce62f;  */

void FUN_1020ce5dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  *(undefined8 *)(lVar1 + 0x30) = param_3;
  *(undefined8 *)(lVar1 + 0x38) = param_4;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020ce630,0,0);
  return;
}



/* Entry: 1020ce630; end: 1020ce643;  */

void FUN_1020ce630(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
  puVar1[1] = *(undefined8 *)(unaff_x22 + 0x28);
  *puVar1 = uVar2;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0001020ce640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1020ce644; end: 1020ce767;  */

void FUN_1020ce644(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  lVar1 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0x60) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x68) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x70) = uVar2;
  lVar1 = 0;
  func_0x0001020c2460();
  *(long *)(unaff_x22 + 0x78) = lVar1;
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x80) = uVar2;
  lVar1 = 0x112e573c0;
  func_0x0001000285a8(0x112e573c0,&UNK_10da5a9d8);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x88) = uVar3;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x90) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x98) = uVar2;
  lVar1 = 0x112e573c8;
  func_0x0001000285a8(0x112e573c8,&UNK_10da5a9e0);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa0) = uVar2;
  lVar1 = 0;
  func_0x0001020c31a0();
  *(long *)(unaff_x22 + 0xa8) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xb0) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xb8) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020ce768,0,0);
  return;
}



/* Entry: 1020ce768; end: 1020ce7fb;  */

void FUN_1020ce768(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar2;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 200) = uVar3;
  uVar3 = 0x112d45220;
  FUN_1020d1408(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar3;
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020ce7fc,uVar2,uVar3);
  return;
}



/* Entry: 1020ce7fc; end: 1020ce88b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020ce7fc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 200));
  func_0x000100083b20(unaff_x22 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar1 = uVar2;
  func_0x000107c43a80();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar2;
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020ce88c,0,0);
  return;
}



/* Entry: 1020ce88c; end: 1020ce977;  */

void FUN_1020ce88c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(long *)(unaff_x22 + 0xd8) != 0) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xc0);
    func_0x000107c5fce8();
    *(undefined8 *)(unaff_x22 + 0xe0) = param_1;
    func_0x000107c5fca8(uVar4,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1020ce978,uVar4,uVar3);
    return;
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001020ce974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,0,0,0);
  return;
}



/* Entry: 1020ce978; end: 1020cea1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020ce978(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe0));
  func_0x000100083b20(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x28);
  lVar1 = lVar3;
  func_0x000107c4c3ac();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xe8) = lVar3;
  func_0x000107c61170(lVar1);
  if (lVar3 == 0) {
    pcVar2 = FUN_1020cec00;
  }
  else {
    pcVar2 = FUN_1020cea1c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 1020cea1c; end: 1020cea83;  */

void FUN_1020cea1c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xf0) = param_1;
  func_0x000107c5fca8(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020cea84,uVar2,uVar1);
  return;
}



/* Entry: 1020cea84; end: 1020ceb17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020cea84(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xf0));
  func_0x000100083b20(unaff_x22 + 0x30);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  uVar1 = *(undefined8 *)(lVar3 + _DAT_112fcd5d8);
  func_0x000107c61174();
  func_0x000107c61170(lVar3);
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar2;
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020ceb18,0,0);
  return;
}



/* Entry: 1020ceb18; end: 1020cebff;  */

void FUN_1020ceb18(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (*(long *)(unaff_x22 + 0xf8) != 0) {
    plVar5 = (long *)0xb0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x100) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_1020cec98;
    plVar5[0xb] = *(long *)(unaff_x22 + 0x58);
    lVar6 = 0;
    func_0x000107c5fcec();
    puVar4 = PTR___sScMMa_11034fc70;
    plVar5[0xc] = lVar6;
    lVar7 = lVar6;
    func_0x000107c5fce8();
    plVar5[0xd] = lVar7;
    lVar7 = 0x112d45220;
    FUN_1020d1408(0x112d45220,puVar4,PTR___sScMScAsMc_11034fc78);
    plVar5[0xe] = lVar7;
    func_0x000107c5fca8();
    plVar5[0xf] = lVar6;
    plVar5[0x10] = lVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1020cfc5c,lVar6,lVar7);
    return;
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xe8));
  func_0x000107c615e8(uVar8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar9);
  func_0x000107c615c0(uVar10);
                    /* WARNING: Could not recover jumptable at 0x0001020cebfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,0,0,0);
  return;
}



/* Entry: 1020cec00; end: 1020cec97;  */

void FUN_1020cec00(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xd8));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001020cec94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,0,0,0);
  return;
}



/* Entry: 1020cec98; end: 1020cece7;  */

void FUN_1020cec98(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x108) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x100));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020cece8,0,0);
  return;
}



/* Entry: 1020cece8; end: 1020cfbc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020cece8(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  ulong *puVar2;
  long *plVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  byte bVar27;
  long lVar28;
  long lVar29;
  undefined *puVar30;
  code *pcVar31;
  undefined8 *puVar32;
  ulong uVar33;
  long lVar34;
  ulong uVar35;
  undefined *puVar36;
  undefined1 uVar37;
  long lVar38;
  long lVar39;
  ulong uVar40;
  undefined *puVar41;
  long unaff_x22;
  ulong uVar42;
  undefined8 uVar43;
  ulong uVar44;
  long lVar45;
  undefined8 uVar46;
  ulong uVar47;
  undefined *puVar48;
  long lVar49;
  undefined *puVar50;
  long lVar51;
  undefined8 uVar52;
  undefined *puVar53;
  long lVar54;
  undefined8 uVar55;
  undefined8 uStack_110;
  ulong uStack_f0;
  long lStack_e8;
  undefined *puStack_d8;
  undefined *apuStack_80 [3];
  
  lVar28 = *(long *)(unaff_x22 + 0x108);
  if (lVar28 == 0) {
    uVar43 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar18 = *(undefined8 *)(unaff_x22 + 0xd8);
    func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xf8));
    func_0x000107c615e8(uVar43);
    func_0x000107c615e8(uVar18);
    puStack_d8 = (undefined *)0x0;
    puVar53 = (undefined *)0x0;
    puVar36 = (undefined *)0x0;
    puVar50 = (undefined *)0x0;
    goto LAB_1020cfb00;
  }
  uVar44 = *(ulong *)(unaff_x22 + 0x38);
  if (uVar44 >> 0x3e == 0) {
    if (*(long *)((uVar44 & 0xffffffffffffff8) + 0x10) == 0) goto LAB_1020ced8c;
LAB_1020ced34:
    uVar47 = *(ulong *)(unaff_x22 + 0x38);
    func_0x000107c61434(uVar47);
  }
  else {
    uVar47 = uVar44 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar44) {
      uVar47 = uVar44;
    }
    func_0x000107c60480();
    if (uVar47 != 0) goto LAB_1020ced34;
LAB_1020ced8c:
    uVar47 = *(ulong *)(unaff_x22 + 0xd8);
    func_0x000107c43aa4();
    func_0x000107c61180();
    param_4 = 0;
    FUN_1020d11c4(0,0x112d61f70,&PTR_PTR_1126b14e0);
    uVar44 = uVar47;
    func_0x000107c5fc54();
    func_0x000107c61170(uVar47);
    uVar47 = uVar44;
  }
  puVar50 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1020c020c();
  if (uVar47 >> 0x3e == 0) {
    uVar35 = *(ulong *)((uVar44 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar35 = uVar44 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar47) {
      uVar35 = uVar47;
    }
    func_0x000107c60480();
  }
  if (uVar35 != 0) {
    uVar42 = 0;
    do {
      if ((uVar44 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar44 & 0xffffffffffffff8) + 0x10) <= uVar42) {
                    /* WARNING: Does not return */
          pcVar31 = (code *)SoftwareBreakpoint(1,0x1020cefe8);
          (*pcVar31)();
        }
        uVar14 = *(ulong *)(uVar47 + uVar42 * 8 + 0x20);
        func_0x000107c61174();
        uVar19 = param_4;
      }
      else {
        uVar14 = uVar42;
        uVar19 = uVar47;
        func_0x0001020d0d0c(uVar42,uVar47,&PTR_PTR_1126b14e0,0x112d61f70);
      }
      if (SCARRY8(uVar42,1)) {
                    /* WARNING: Does not return */
        pcVar31 = (code *)SoftwareBreakpoint(1,0x1020cefe4);
        (*pcVar31)();
      }
      uVar40 = uVar42 + 1;
      uVar15 = uVar14;
      func_0x000107c42f24();
      func_0x000107c61180();
      uVar16 = uVar15;
      func_0x000107c5faec();
      func_0x000107c61170(uVar15);
      func_0x000107c61174();
      puVar36 = puVar50;
      func_0x000107c61558();
      uVar15 = uVar16;
      param_4 = uVar19;
      apuStack_80[0] = puVar50;
      func_0x000100029284();
      uVar33 = (ulong)~(uint)param_4 & 1;
      lVar1 = *(long *)(puVar50 + 0x10) + uVar33;
      if (SCARRY8(*(long *)(puVar50 + 0x10),uVar33)) {
                    /* WARNING: Does not return */
        pcVar31 = (code *)SoftwareBreakpoint(1,0x1020cefec);
        (*pcVar31)();
      }
      if (*(long *)(puVar50 + 0x18) < lVar1) {
        FUN_1020c67a0(lVar1,puVar36);
        puVar50 = apuStack_80[0];
        uVar15 = uVar16;
        uVar33 = uVar19;
        func_0x000100029284();
        if (((uint)param_4 & 1) != ((uint)uVar33 & 1)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF_11034edd0)
                    (PTR___sSSN_11034da80);
          return;
        }
joined_r0x0001020cefac:
        uVar12 = param_4 & 1;
        param_4 = uVar33;
        if (uVar12 == 0) goto LAB_1020cef2c;
LAB_1020cee10:
        uVar18 = *(undefined8 *)(*(long *)(puVar50 + 0x38) + uVar15 * 8);
        *(ulong *)(*(long *)(puVar50 + 0x38) + uVar15 * 8) = uVar14;
        func_0x000107c61170(uVar18);
        func_0x000107c6142c(uVar19);
        func_0x000107c61170(uVar14);
      }
      else {
        uVar33 = param_4;
        if (((ulong)puVar36 & 1) == 0) {
          FUN_1020c662c();
          puVar50 = apuStack_80[0];
          goto joined_r0x0001020cefac;
        }
        if ((param_4 & 1) != 0) goto LAB_1020cee10;
LAB_1020cef2c:
        *(ulong *)(puVar50 + (uVar15 >> 6) * 8 + 0x40) =
             *(ulong *)(puVar50 + (uVar15 >> 6) * 8 + 0x40) | 1L << (uVar15 & 0x3f);
        puVar2 = (ulong *)(*(long *)(puVar50 + 0x30) + uVar15 * 0x10);
        *puVar2 = uVar16;
        puVar2[1] = uVar19;
        *(ulong *)(*(long *)(puVar50 + 0x38) + uVar15 * 8) = uVar14;
        func_0x000107c61170(uVar14);
        if (SCARRY8(*(long *)(puVar50 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar31 = (code *)SoftwareBreakpoint(1,0x1020ceff0);
          (*pcVar31)();
        }
        *(long *)(puVar50 + 0x10) = *(long *)(puVar50 + 0x10) + 1;
        param_4 = uVar33;
      }
      uVar42 = uVar42 + 1;
    } while (uVar40 != uVar35);
  }
  puVar36 = *(undefined **)(unaff_x22 + 0x40);
  uVar44 = *(ulong *)(unaff_x22 + 0x48);
  func_0x000107c6142c(uVar47);
  puVar53 = puVar36;
  func_0x000107c61434(puVar36);
  func_0x000107c61558();
  apuStack_80[0] = puVar36;
  FUN_1020d14c8(puVar50,FUN_1020d1044,0,puVar53,apuStack_80);
  func_0x000107c6142c(puVar50);
  puVar50 = apuStack_80[0];
  if (uVar44 >> 0x3e == 0) {
    uVar44 = *(ulong *)((uVar44 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar44 = uVar44 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < *(ulong *)(unaff_x22 + 0x48)) {
      uVar44 = *(ulong *)(unaff_x22 + 0x48);
    }
    func_0x000107c60480();
  }
  func_0x000107c6157c(puVar50);
  if (uVar44 == 0) {
    puVar36 = *(undefined **)(unaff_x22 + 0xe8);
    func_0x000107c4077c(lVar28);
    func_0x000107c5b5d8();
    func_0x000107c61180();
    puVar48 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar36 != (undefined *)0x0) {
      uVar18 = 0;
      FUN_1020d11c4(0,0x112d5ecd8,&PTR_PTR_1126bf130);
      puVar48 = puVar36;
      func_0x000107c5fc54(puVar36,uVar18);
      func_0x000107c61170(puVar36);
    }
  }
  else {
    puVar48 = *(undefined **)(unaff_x22 + 0x48);
    func_0x000107c61434(puVar48);
  }
  if ((ulong)puVar48 >> 0x3e == 0) {
    puVar36 = *(undefined **)((undefined *)((ulong)puVar48 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar36 = (undefined *)((ulong)puVar48 & 0xffffffffffffff8);
    if (((ulong)puVar48 & 0x8000000000000000) != 0) {
      puVar36 = puVar48;
    }
    func_0x000107c60480();
  }
  puVar53 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar36 != (undefined *)0x0) {
    apuStack_80[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar25 = (undefined *)((ulong)puVar36 & ((long)puVar36 >> 0x3f ^ 0xffffffffffffffffU));
    FUN_1020c00ac(0,puVar25,0);
    if ((long)puVar36 < 0) {
                    /* WARNING: Does not return */
      pcVar31 = (code *)SoftwareBreakpoint(1,0x1020cfbc4);
      (*pcVar31)();
    }
    puVar41 = (undefined *)0x0;
    do {
      puVar53 = apuStack_80[0];
      if (((ulong)puVar48 & 0xc000000000000001) == 0) {
        if ((long)puVar41 < 0) {
                    /* WARNING: Does not return */
          pcVar31 = (code *)SoftwareBreakpoint(1,0x1020cfb8c);
          (*pcVar31)();
        }
        if (*(undefined **)(((ulong)puVar48 & 0xffffffffffffff8) + 0x10) <= puVar41) {
                    /* WARNING: Does not return */
          pcVar31 = (code *)SoftwareBreakpoint(1,0x1020cfb90);
          (*pcVar31)();
        }
        puVar30 = *(undefined **)(puVar48 + (long)puVar41 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar30 = puVar41;
        puVar25 = puVar48;
        func_0x0001020d0d0c(puVar41,puVar48,&PTR_PTR_1126bf130,0x112d5ecd8);
      }
      puVar24 = puVar30;
      func_0x000107c5d984();
      func_0x000107c61180();
      puVar17 = puVar24;
      func_0x000107c5faec();
      puVar26 = puVar25;
      func_0x000107c61170(puVar24);
      uVar44 = *(ulong *)(puVar53 + 0x10);
      puVar24 = (undefined *)(uVar44 + 1);
      apuStack_80[0] = puVar53;
      if (*(ulong *)(puVar53 + 0x18) >> 1 <= uVar44) {
        puVar26 = puVar24;
        FUN_1020c00ac(1 < *(ulong *)(puVar53 + 0x18),puVar24,1);
      }
      puVar41 = puVar41 + 1;
      *(undefined **)(apuStack_80[0] + 0x10) = puVar24;
      *(undefined **)(apuStack_80[0] + uVar44 * 0x18 + 0x20) = puVar17;
      *(undefined **)(apuStack_80[0] + uVar44 * 0x18 + 0x28) = puVar25;
      *(undefined **)(apuStack_80[0] + uVar44 * 0x18 + 0x30) = puVar30;
      puVar25 = puVar26;
      puVar53 = apuStack_80[0];
    } while (puVar36 != puVar41);
  }
  uVar18 = 0;
  FUN_1020d11c4(0,0x112d5ecd8,&PTR_PTR_1126bf130);
  puVar36 = PTR___sSSN_11034da80;
  FUN_1020f91bc(puVar53,PTR___sSSN_11034da80,uVar18,PTR___sSSSHsWP_11034da90);
  puVar25 = puVar36;
  if ((ulong)puVar48 >> 0x3e == 0) {
    puVar41 = *(undefined **)((undefined *)((ulong)puVar48 & 0xffffffffffffff8) + 0x10);
    puStack_d8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar1 = _DAT_112e57358;
  }
  else {
    puVar41 = (undefined *)((ulong)puVar48 & 0xffffffffffffff8);
    if (((ulong)puVar48 & 0x8000000000000000) != 0) {
      puVar41 = puVar48;
    }
    func_0x000107c60480();
    puStack_d8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar1 = _DAT_112e57358;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puStack_d8;
  _DAT_112e57358 = lVar1;
  if (puVar41 != (undefined *)0x0) {
    uVar44 = 0;
    lVar5 = *(long *)(unaff_x22 + 0xa8);
    lVar9 = *(long *)(unaff_x22 + 0xb0);
    lVar29 = *(long *)(unaff_x22 + 0xa0);
    lVar6 = *(long *)(unaff_x22 + 0x78);
    lVar10 = *(long *)(unaff_x22 + 0x80);
    lVar34 = *(long *)(unaff_x22 + 0x68);
    lVar7 = *(long *)(unaff_x22 + 0x50);
    lVar11 = *(long *)(unaff_x22 + 0x58);
    do {
      if (((ulong)puVar48 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar48 & 0xffffffffffffff8) + 0x10) <= uVar44) {
                    /* WARNING: Does not return */
          pcVar31 = (code *)SoftwareBreakpoint(1,0x1020cfb88);
          (*pcVar31)();
        }
        uVar47 = *(ulong *)(puVar48 + uVar44 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar47 = uVar44;
        puVar25 = puVar48;
        func_0x0001020d0d0c(uVar44,puVar48,&PTR_PTR_1126bf130,0x112d5ecd8);
      }
      if (SCARRY8(uVar44,1)) {
                    /* WARNING: Does not return */
        pcVar31 = (code *)SoftwareBreakpoint(1,0x1020cfb84);
        (*pcVar31)();
      }
      puVar30 = (undefined *)(uVar44 + 1);
      uVar35 = uVar47;
      func_0x000107c5d984();
      func_0x000107c61180();
      uVar42 = uVar35;
      uVar14 = uVar35;
      if (uVar35 == 0) {
        func_0x000107c5faec();
        puVar24 = puVar25;
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar25);
        uVar42 = 0;
        func_0x000107c5faec(0);
        puVar25 = puVar24;
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar24);
      }
      lVar51 = *(long *)(unaff_x22 + 0xf8);
      uVar19 = uVar35;
      func_0x000107c5faec();
      func_0x000107c61174(uVar35);
      func_0x000107c4c39c();
      func_0x000107c61180();
      func_0x000107c61170(uVar14);
      if (lVar51 == 0) {
        func_0x000107c61170(uVar42);
        func_0x000107c6142c(puVar25);
LAB_1020cf2bc:
        uVar18 = *(undefined8 *)(unaff_x22 + 0xa0);
        uVar43 = *(undefined8 *)(unaff_x22 + 0xa8);
        func_0x000107c61170(uVar47);
        (**(code **)(lVar9 + 0x38))(uVar18,1,1,uVar43);
        puVar25 = (undefined *)0x112e573c8;
        func_0x0001020d1720(uVar18,0x112e573c8,&UNK_10da5a9e0);
      }
      else {
        iVar13 = (int)*(undefined8 *)(unaff_x22 + 0xf8);
        func_0x000107c43a00();
        func_0x000107c61170(uVar42);
        if (iVar13 != 1) {
          func_0x000107c6142c(puVar25);
          func_0x000107c61170(lVar51);
          goto LAB_1020cf2bc;
        }
        if (*(long *)(puVar50 + 0x10) == 0) {
          lVar45 = 0;
        }
        else {
          func_0x000107c61434(puVar50);
          uVar35 = uVar19;
          puVar24 = puVar25;
          func_0x000100029284();
          if (((ulong)puVar24 & 1) == 0) {
            lVar45 = 0;
          }
          else {
            lVar45 = *(long *)(*(long *)(puVar50 + 0x38) + uVar35 * 8);
            func_0x000107c61174(lVar45);
          }
          func_0x000107c61574(puVar50);
        }
        if (*(long *)(lVar7 + 0x10) == 0) {
          uVar18 = *(undefined8 *)(unaff_x22 + 0x98);
          lVar20 = 0;
          func_0x0001020d1180();
          uStack_f0 = 1;
          (**(code **)(*(long *)(lVar20 + -8) + 0x38))(uVar18,1,1,lVar20);
        }
        else {
          func_0x000107c61434(*(undefined8 *)(unaff_x22 + 0x50));
          puVar24 = puVar25;
          func_0x000100029284(uVar19);
          uVar18 = *(undefined8 *)(unaff_x22 + 0x98);
          uVar43 = *(undefined8 *)(unaff_x22 + 0x50);
          bVar4 = ((ulong)puVar24 & 1) == 0;
          if (bVar4) {
            func_0x000107c6142c(uVar43);
            lVar20 = 0;
            func_0x0001020d1180();
            pcVar31 = *(code **)(*(long *)(lVar20 + -8) + 0x38);
          }
          else {
            lVar49 = *(long *)(lVar7 + 0x38);
            lVar20 = 0;
            func_0x0001020d1180();
            lVar54 = *(long *)(lVar20 + -8);
            func_0x0001020d1828(lVar49 + *(long *)(lVar54 + 0x48) * uVar19,uVar18);
            func_0x000107c6142c(uVar43);
            pcVar31 = *(code **)(lVar54 + 0x38);
          }
          uStack_f0 = (ulong)bVar4;
          (*pcVar31)(uVar18,uStack_f0,1,lVar20);
        }
        func_0x000107c6142c(puVar25);
        lVar20 = *(long *)(lVar51 + _DAT_112fcd610);
        uVar35 = ((long *)(lVar51 + _DAT_112fcd610))[1];
        if (lVar45 == 0) {
          func_0x000107c61434(uVar35);
LAB_1020cf5cc:
          func_0x000107c61434(uVar35);
          uStack_f0 = uVar35;
          lStack_e8 = lVar20;
        }
        else {
          func_0x000107c61434(uVar35);
          lVar49 = lVar45;
          func_0x000107c3d15c();
          func_0x000107c61180();
          if (lVar49 == 0) goto LAB_1020cf5cc;
          lVar54 = lVar49;
          func_0x000107c40674();
          func_0x000107c61180();
          func_0x000107c61170(lVar49);
          lStack_e8 = lVar54;
          func_0x000107c5faec();
          func_0x000107c61170(lVar54);
        }
        uVar18 = *(undefined8 *)(unaff_x22 + 0x90);
        uVar43 = *(undefined8 *)(lVar51 + _DAT_112fcd628);
        uVar52 = ((undefined8 *)(lVar51 + _DAT_112fcd628))[1];
        func_0x0001020d17a4(*(undefined8 *)(unaff_x22 + 0x98),uVar18,0x112e573c0,&UNK_10da5a9d8);
        lVar49 = 0;
        func_0x0001020d1180();
        pcVar31 = *(code **)(*(long *)(lVar49 + -8) + 0x30);
        (*pcVar31)(uVar18,1,lVar49);
        lVar54 = *(long *)(unaff_x22 + 0x90);
        if ((int)uVar18 == 1) {
          func_0x000107c61434(uVar52);
          func_0x0001020d1720(lVar54,0x112e573c0,&UNK_10da5a9d8);
LAB_1020cf690:
          uStack_110 = *(undefined8 *)(lVar51 + _DAT_112fcd630);
          lVar23 = ((undefined8 *)(lVar51 + _DAT_112fcd630))[1];
          func_0x000107c61434(lVar23);
        }
        else {
          puVar32 = (undefined8 *)(lVar54 + *(int *)(lVar49 + 0x14));
          uStack_110 = *puVar32;
          lVar23 = puVar32[1];
          func_0x000107c61434(lVar23);
          func_0x000107c61434(uVar52);
          func_0x0001020d17ec(lVar54);
          if (lVar23 == 0) goto LAB_1020cf690;
        }
        uVar46 = *(undefined8 *)(unaff_x22 + 0x98);
        lVar54 = *(long *)(unaff_x22 + 0x80);
        uVar18 = *(undefined8 *)(unaff_x22 + 0x88);
        *(undefined8 *)(unaff_x22 + 0x10) = 0;
        *(undefined8 *)(unaff_x22 + 0x18) = 0xe000000000000000;
        uVar55 = *(undefined8 *)(lVar11 + lVar1);
        func_0x000107c5fddc(uVar55,unaff_x22 + 0x10,PTR___ss26DefaultStringInterpolationVN_11034ec00
                            ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
        func_0x000107c5fb78(0x5f,0xe100000000000000);
        func_0x000107c5fb78(lVar20,uVar35);
        uVar21 = *(undefined8 *)(unaff_x22 + 0x18);
        FUN_1020c8d64(lVar54 + *(int *)(lVar6 + 0x18),*(undefined8 *)(unaff_x22 + 0x10),uVar21);
        func_0x000107c6142c(uVar21);
        func_0x0001020d17a4(uVar46,uVar18,0x112e573c0,&UNK_10da5a9d8);
        lVar38 = (long)*(int *)(lVar6 + 0x1c);
        (*pcVar31)(uVar18,1,lVar49);
        uVar21 = *(undefined8 *)(unaff_x22 + 0x88);
        if ((int)uVar18 == 1) {
          func_0x0001020d1720(uVar21,0x112e573c0,&UNK_10da5a9d8);
          lVar22 = 0;
          func_0x000107c5ede0();
          lVar49 = 1;
          bVar27 = 1;
          (**(code **)(*(long *)(lVar22 + -8) + 0x38))(lVar54 + lVar38,1,1,lVar22);
        }
        else {
          lVar49 = lVar54 + lVar38;
          bVar27 = 0;
          func_0x0001020d17a4();
          func_0x0001020d17ec(uVar21);
        }
        lVar39 = *(long *)(unaff_x22 + 0x70);
        uVar21 = *(undefined8 *)(unaff_x22 + 0x60);
        **(undefined8 **)(unaff_x22 + 0x80) = uVar43;
        *(undefined8 *)(lVar10 + 8) = uVar52;
        *(undefined8 *)(lVar10 + 0x10) = uStack_110;
        *(long *)(lVar10 + 0x18) = lVar23;
        func_0x000107c4077c(uVar47);
        lVar54 = lVar28;
        uVar18 = uVar55;
        uVar43 = param_2;
        func_0x000107c4077c();
        func_0x000108d312a8(uVar55,param_2,uVar18,uVar43);
        FUN_1020c6f80();
        uVar42 = uVar47;
        lVar38 = lVar49;
        func_0x000107c4b848();
        func_0x000107c61180();
        uVar14 = uVar42;
        func_0x000107c5faec();
        lVar22 = lVar38;
        func_0x000107c61170(uVar42);
        uVar42 = uVar47;
        func_0x000107c41324(uVar47);
        func_0x000107c61180();
        func_0x000107c5ee94(lVar39);
        func_0x000107c61170(uVar42);
        lVar23 = lVar39;
        FUN_1020ca5d4();
        (**(code **)(lVar34 + 8))(lVar39,uVar21);
        uVar37 = (undefined1)lVar39;
        if (lVar45 == 0) {
          uVar37 = 0;
        }
        else {
          FUN_1020c8f24();
          func_0x000107c61170(lVar45);
        }
        uVar18 = *(undefined8 *)(unaff_x22 + 0x98);
        lVar45 = *(long *)(unaff_x22 + 0xa0);
        uVar43 = *(undefined8 *)(unaff_x22 + 0x80);
        func_0x000107c61170(uVar47);
        func_0x0001020d1720(uVar18,0x112e573c0,&UNK_10da5a9d8);
        func_0x0001020d1760(uVar43,lVar45 + *(int *)(lVar5 + 0x18),0x1020c2460);
        puVar32 = (undefined8 *)(lVar51 + _DAT_112fcd620);
        lVar45 = puVar32[1];
        if (lVar45 == 0) {
          puVar32 = (undefined8 *)(lVar51 + _DAT_112fcd618);
          lVar45 = puVar32[1];
        }
        uVar43 = *(undefined8 *)(unaff_x22 + 0xb8);
        plVar8 = *(long **)(unaff_x22 + 0xa0);
        uVar18 = *(undefined8 *)(unaff_x22 + 0xa8);
        uVar52 = *puVar32;
        func_0x000107c61434(lVar45);
        func_0x000107c61170(lVar51);
        *plVar8 = lVar20;
        *(ulong *)(lVar29 + 8) = uVar35;
        *(long *)(lVar29 + 0x10) = lStack_e8;
        *(ulong *)(lVar29 + 0x18) = uStack_f0;
        puVar32 = (undefined8 *)((long)plVar8 + (long)*(int *)(lVar5 + 0x1c));
        *puVar32 = uVar52;
        puVar32[1] = lVar45;
        *(undefined1 *)((long)plVar8 + (long)*(int *)(lVar5 + 0x20)) = uVar37;
        plVar3 = (long *)((long)plVar8 + (long)*(int *)(lVar5 + 0x24));
        *plVar3 = lVar54;
        plVar3[1] = lVar49;
        plVar3[2] = uVar14;
        plVar3[3] = lVar38;
        plVar3[4] = lVar23;
        plVar3[5] = lVar22;
        *(byte *)(plVar3 + 6) = bVar27 & 1;
        (**(code **)(lVar9 + 0x38))(plVar8,0,1,uVar18);
        func_0x0001020d1760(plVar8,uVar43,0x1020c31a0);
        puVar25 = puStack_d8;
        func_0x000107c61558();
        puVar24 = puStack_d8;
        if (((ulong)puVar25 & 1) == 0) {
          puVar24 = (undefined *)0x0;
          FUN_1020d0ec8(0,*(long *)(puStack_d8 + 0x10) + 1,1,puStack_d8);
        }
        uVar47 = *(ulong *)(puVar24 + 0x10);
        puStack_d8 = puVar24;
        if (*(ulong *)(puVar24 + 0x18) >> 1 <= uVar47) {
          puStack_d8 = (undefined *)(ulong)(1 < *(ulong *)(puVar24 + 0x18));
          FUN_1020d0ec8(puStack_d8,uVar47 + 1,1,puVar24);
        }
        uVar18 = *(undefined8 *)(unaff_x22 + 0xb8);
        *(ulong *)(puStack_d8 + 0x10) = uVar47 + 1;
        puVar25 = puStack_d8 +
                  *(long *)(lVar9 + 0x48) * uVar47 +
                  ((ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
                  ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff));
        func_0x0001020d1760(uVar18,puVar25,0x1020c31a0);
      }
      uVar44 = uVar44 + 1;
    } while (puVar30 != puVar41);
  }
  uVar43 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xf8));
  func_0x000107c6142c(puVar48);
  func_0x000107c61170(lVar28);
  func_0x000107c615e8(uVar43);
  func_0x000107c615e8(uVar18);
  func_0x000107c61574(puVar50);
LAB_1020cfb00:
  uVar18 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar52 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar43 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar46 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar55 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c615c0(uVar52);
  func_0x000107c615c0(uVar18);
  func_0x000107c615c0(uVar21);
  func_0x000107c615c0(uVar43);
  func_0x000107c615c0(uVar46);
  func_0x000107c615c0(uVar55);
                    /* WARNING: Could not recover jumptable at 0x0001020cfb7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puStack_d8,puVar53,puVar36,puVar50);
  return;
}



/* Entry: 1020cfbc4; end: 1020cfc5b;  */

void FUN_1020cfbc4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar2;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x68) = uVar3;
  uVar3 = 0x112d45220;
  FUN_1020d1408(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  *(undefined8 *)(unaff_x22 + 0x70) = uVar3;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x78) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020cfc5c,uVar2,uVar3);
  return;
}



/* Entry: 1020cfc5c; end: 1020cfd83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020cfc5c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x50);
  lVar3 = *(long *)(unaff_x22 + 0x50);
  lVar1 = lVar3;
  func_0x000107c4b8d8();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x88) = lVar3;
  func_0x000107c61170(lVar1);
  if (lVar3 == 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
    lVar1 = 0;
  }
  else {
    lVar1 = lVar3;
    func_0x000107c4b88c();
    func_0x000107c61180();
    if (lVar1 == 0) {
      func_0x000107c5fce8();
      *(long *)(unaff_x22 + 0x90) = lVar1;
      if (lVar1 == 0) {
        lVar1 = 0;
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
        func_0x000107c614f0();
        func_0x000107c5fca8();
      }
      *(long *)(unaff_x22 + 0x98) = lVar1;
      *(undefined8 *)(unaff_x22 + 0xa0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_1020cfd84,lVar1);
      return;
    }
    uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
    func_0x000107c615e8(lVar3);
    func_0x000107c61574(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x0001020cfd24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar1);
  return;
}



/* Entry: 1020cfd84; end: 1020cfe8b;  */

void FUN_1020cfd84(void)

{
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x1020cfdd8;
  func_0x000107c61448(unaff_x22 + 0x10,0);
  FUN_1020cfe8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 1020cfe8c; end: 1020d00cf;  */

void FUN_1020cfe8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar6 = &puStack_a0;
  ppuVar7 = &puStack_a0;
  puVar2 = &UNK_1104c9598;
  func_0x000107c613fc(&UNK_1104c9598,0x11,7);
  puVar2[0x10] = 0;
  puVar3 = &UNK_1104c95c0;
  func_0x000107c613fc(&UNK_1104c95c0,0x18,7);
  puVar8 = (undefined8 *)(puVar3 + 0x10);
  *puVar8 = 0;
  uVar4 = param_2;
  func_0x000107c4b930();
  func_0x000107c61180();
  puVar5 = &UNK_1104c95e8;
  func_0x000107c613fc(&UNK_1104c95e8,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = param_2;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_1020d186c;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_1020d0110;
  puStack_88 = &UNK_1104c9600;
  puStack_78 = puVar5;
  func_0x000107c60bc4(&puStack_a0);
  puVar5 = puStack_78;
  func_0x000107c615f0(param_2);
  func_0x000107c61574(puVar5);
  uVar9 = uVar4;
  func_0x000107c43494();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(uVar4);
  uVar4 = uVar9;
  func_0x000107c435e4();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  uVar9 = uVar4;
  func_0x000107c5ca44(0x4014000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  puVar5 = &UNK_1104c9638;
  func_0x000107c613fc(&UNK_1104c9638,0x30,7);
  *(undefined **)(puVar5 + 0x10) = puVar2;
  *(undefined **)(puVar5 + 0x18) = puVar3;
  *(undefined8 *)(puVar5 + 0x20) = param_1;
  *(undefined8 *)(puVar5 + 0x28) = param_2;
  pcStack_80 = (code *)0x1020d1890;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_1000f6b44;
  puStack_88 = &UNK_1104c9650;
  puStack_78 = puVar5;
  func_0x000107c60bc4(&puStack_a0);
  puVar5 = puStack_78;
  func_0x000107c615f0(param_2);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(puVar5);
  uVar4 = uVar9;
  func_0x000107c5c318();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c61428(puVar8,&puStack_a0,1,0);
  uVar9 = *puVar8;
  *puVar8 = uVar4;
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61170(uVar9);
  return;
}



/* Entry: 1020d00d0; end: 1020d010f;  */

bool FUN_1020d00d0(undefined8 param_1,long param_2)

{
  func_0x000107c4b88c();
  func_0x000107c61180();
  if (param_2 != 0) {
    func_0x000107c61170(param_2);
  }
  return param_2 != 0;
}



/* Entry: 1020d0110; end: 1020d0167;  */

uint FUN_1020d0110(long param_1,undefined8 param_2)

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
  return (uint)uVar3 & 1;
}



/* Entry: 1020d0168; end: 1020d0223;  */

void FUN_1020d0168(long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    func_0x000107c61428(param_1 + 0x10,auStack_70,1,0);
    *(undefined1 *)(param_1 + 0x10) = 1;
    func_0x000107c61428(param_2 + 0x10,auStack_88,0,0);
    if (*(long *)(param_2 + 0x10) != 0) {
      func_0x000107c4218c();
    }
    func_0x000107c4b88c();
    func_0x000107c61180();
    **(undefined8 **)(*(long *)(param_3 + 0x40) + 0x28) = param_4;
    func_0x000107c6144c(param_3);
  }
  return;
}



/* Entry: 1020d0224; end: 1020d036b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020d0224(double param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  undefined8 unaff_x20;
  long lVar5;
  long lVar6;
  undefined8 uStack_60;
  undefined1 uStack_51;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)&uStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &UNK_10da5a910;
  func_0x000107c614e0(&UNK_10da5a910);
  puVar4 = &UNK_10da5a938;
  func_0x000107c614e0(&UNK_10da5a938);
  uStack_51 = 0;
  func_0x000107c61174();
  func_0x000107c5f210(&uStack_51,unaff_x20,puVar3,puVar4);
  func_0x000100083b20(&uStack_60);
  func_0x000107c5eea0(lVar5);
  func_0x000107c5ee8c();
  (**(code **)(lVar6 + 8))(lVar5,lVar2);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1020d0364);
    (*pcVar1)();
  }
  if (-9.223372036854778e+18 < param_1) {
    if (param_1 < 9.223372036854776e+18) {
      func_0x000107c56230(uStack_60);
      func_0x000107c61170(uStack_60);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1020d036c);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020d0368);
  (*pcVar1)();
}



/* Entry: 1020d036c; end: 1020d03cb; -[_TtC20NearMeImplementation15NearMeViewModel init] */

void FUN_1020d036c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("NearMeImplementation.NearMeViewModel",0x24,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020d0398);
  (*pcVar1)();
}



/* Entry: 1020d03cc; end: 1020d05bb; -[_TtC20NearMeImplementation15NearMeViewModel .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001020d03fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020d041c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020d043c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020d045c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020d047c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020d049c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020d0560: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020d04a0) */
/* WARNING: Removing unreachable block (ram,0x0001020d0480) */
/* WARNING: Removing unreachable block (ram,0x0001020d0460) */
/* WARNING: Removing unreachable block (ram,0x0001020d0440) */
/* WARNING: Removing unreachable block (ram,0x0001020d0420) */
/* WARNING: Removing unreachable block (ram,0x0001020d0400) */
/* WARNING: Removing unreachable block (ram,0x0001020d0564) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020d03cc(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e572c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e572c8));
  return;
}



/* Entry: 1020d05bc; end: 1020d060b; -[_TtC20NearMeImplementation15NearMeViewModel permissionsManagerWantsToPresentPermissionsPrompt:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020d05bc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10edb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112e572c0),
             PTR_s_presentViewController_animated_c_112621588,param_3,1,0);
  return;
}



/* Entry: 1020d060c; end: 1020d06ff;  */

void FUN_1020d060c(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR___sBoWV_11034d678;
  puStack_d8 = PTR___sBOWV_11034d658 + 0x40;
  puStack_d0 = PTR___sBoWV_11034d678 + 0x40;
  lVar2 = 0x13f;
  puStack_c8 = puStack_d0;
  puStack_c0 = puStack_d0;
  puStack_b8 = puStack_d0;
  puStack_b0 = puStack_d0;
  puStack_a8 = puStack_d0;
  puStack_a0 = puStack_d0;
  puStack_98 = puStack_d0;
  puStack_90 = puStack_d0;
  puStack_88 = puStack_d0;
  puStack_80 = puStack_d0;
  func_0x000100f8b92c();
  if (param_2 < 0x40) {
    lVar2 = *(long *)(lVar2 + -8) + 0x40;
    lVar3 = 0x13f;
    lStack_78 = lVar2;
    FUN_1020d0700();
    if (param_2 < 0x40) {
      lStack_70 = *(long *)(lVar3 + -8) + 0x40;
      puStack_58 = PTR___sBbWV_11034d660 + 0x40;
      puStack_60 = &UNK_10da5a830;
      puStack_48 = &UNK_10da5a848;
      puStack_40 = PTR___sBi64_WV_11034d670 + 0x40;
      puStack_38 = puVar1 + 0x40;
      lStack_68 = lVar2;
      puStack_50 = puStack_58;
      func_0x000107c61630(param_1,0x100,0x15,&puStack_d8,param_1 + 0x50);
    }
  }
  return;
}



/* Entry: 1020d0700; end: 1020d075f;  */

void FUN_1020d0700(long param_1)

{
  long lVar1;
  
  if (lRam0000000112e573a0 == 0) {
    lVar1 = 0x112e572b8;
    func_0x00010002969c(0x112e572b8,&UNK_10da5bc30);
    func_0x000107c5f214();
    if (lVar1 == 0) {
      lRam0000000112e573a0 = param_1;
    }
  }
  return;
}



/* Entry: 1020d0760; end: 1020d078f; -[_TtC20NearMeImplementation15NearMeViewModel permissionsPromptSource] */

void FUN_1020d0760(void)

{
  func_0x000107c5fadc(0x5f53444e45495246,0xec00000044454546);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1020d0790; end: 1020d08ab;  */

void FUN_1020d0790(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 != 0) {
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_1020c030c();
    puVar4 = &UNK_1104c9430;
    func_0x000107c613fc(&UNK_1104c9430,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,param_1);
    puVar5 = &UNK_1104c96d8;
    func_0x000107c613fc(&UNK_1104c96d8,0x30,7);
    puVar2 = PTR___swiftEmptySetSingleton_11034f1d8;
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(undefined **)(puVar5 + 0x18) = puVar2;
    *(undefined **)(puVar5 + 0x20) = puVar3;
    *(undefined **)(puVar5 + 0x28) = puVar1;
    func_0x000107c61434(puVar3);
    uVar6 = 0x62;
    func_0x0001001ca524(0x62,0,0x3c,4,0,0,&UNK_10da5aa40,puVar5,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(param_1);
    func_0x000107c6142c(puVar3);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(uVar6);
  }
  return;
}



/* Entry: 1020d08ac; end: 1020d0a27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020d08ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000100083b20(&uStack_38);
  puVar2 = &UNK_1104c96b0;
  func_0x000107c613fc(&UNK_1104c96b0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,uVar1);
  func_0x000107c6157c(puVar2);
  FUN_1020c0c48(param_1,0x1020d1ecc,puVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uStack_38);
  func_0x000107c61578(puVar2,2);
  return;
}



/* Entry: 1020d0a28; end: 1020d0abb;  */

void FUN_1020d0a28(undefined1 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined1 *)(unaff_x22 + 0x39) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar3;
  uVar3 = 0x112d45220;
  FUN_1020d1408(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020d0abc,uVar2,uVar3);
  return;
}



/* Entry: 1020d0abc; end: 1020d0b53;  */

void FUN_1020d0abc(void)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x22;
  
  cVar1 = *(char *)(unaff_x22 + 0x39);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  if (cVar1 == '\x01') {
    lVar4 = *(long *)(unaff_x22 + 0x28);
    func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x10,0,0);
    lVar4 = lVar4 + 0x10;
    func_0x000107c61618();
    if (lVar4 != 0) {
      puVar2 = &UNK_10da5a910;
      func_0x000107c614e0(&UNK_10da5a910);
      puVar3 = &UNK_10da5a938;
      func_0x000107c614e0(&UNK_10da5a938);
      *(undefined1 *)(unaff_x22 + 0x38) = 0;
      func_0x000107c5f210(unaff_x22 + 0x38,lVar4,puVar2,puVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001020d0b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1020d0b54; end: 1020d0ec7;  */

/* WARNING: Possible PIC construction at 0x0001020d0ba4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020d0ba8) */

void FUN_1020d0b54(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &UNK_10da5a910;
  func_0x000107c614e0(&UNK_10da5a910);
  puVar2 = &UNK_10da5a938;
  func_0x000107c614e0(&UNK_10da5a938);
  func_0x000107c5f20c(param_1,uVar3,puVar1,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1020d0ec8; end: 1020d1043;  */

undefined * FUN_1020d0ec8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1020d1044);
        (*pcVar3)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    puVar4 = (undefined *)0x112e573d0;
    func_0x0001000285a8(0x112e573d0,&UNK_10da5a9f8);
    lVar5 = 0;
    func_0x0001020c31a0();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    func_0x000107c613fc(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    func_0x000107c610a4();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1020d103c);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1020d1040);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar10 != 0) {
      lVar2 = lVar5 / lVar10;
    }
    *(ulong *)(puVar4 + 0x10) = uVar9;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
  }
  lVar5 = 0;
  func_0x0001020c31a0();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar6,puVar1,uVar9,lVar5);
  }
  else {
    if ((puVar4 < param_4) || (puVar1 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar6))
    {
      func_0x000107c61414(puVar6,puVar1,uVar9);
    }
    else if (puVar4 != param_4) {
      func_0x000107c61410(puVar6,puVar1,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar4;
}



/* Entry: 1020d1044; end: 1020d1077;  */

void FUN_1020d1044(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  func_0x000107c61434(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar2);
  return;
}



/* Entry: 1020d1078; end: 1020d10ef;  */

void FUN_1020d1078(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar7 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = 0x1020d209c;
  plVar7[0xd] = lVar6;
  plVar7[0xe] = lVar2;
  plVar7[0xb] = lVar4;
  plVar7[0xc] = lVar1;
  lVar4 = 0;
  func_0x0001020d1180();
  plVar7[0xf] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar7[0x10] = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[0x11] = uVar5;
  lVar6 = 0;
  func_0x000107c5fcec();
  puVar3 = PTR___sScMMa_11034fc70;
  lVar4 = lVar6;
  func_0x000107c5fce8();
  plVar7[0x12] = lVar4;
  lVar4 = 0x112d45220;
  FUN_1020d1408(0x112d45220,puVar3,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar7[0x13] = lVar6;
  plVar7[0x14] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020cdcd8,lVar6,lVar4);
  return;
}



/* Entry: 1020d10f0; end: 1020d10ff;  */

void FUN_1020d10f0(undefined1 *param_1)

{
  undefined1 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    puVar3 = &UNK_1104c9520;
    func_0x000107c613fc(&UNK_1104c9520,0x20,7);
    puVar3[0x10] = uVar1;
    *(long *)(puVar3 + 0x18) = lVar2;
    puVar4 = &UNK_1104c9548;
    func_0x000107c613fc(&UNK_1104c9548,0x20,7);
    *(undefined **)(puVar4 + 0x10) = &UNK_10da5a960;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    func_0x000107c61174(lVar2);
    uVar5 = 0x62;
    func_0x0001001ca524(0x62,0,0x3c,4,0,0,&UNK_10da5a968,puVar4,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(lVar2);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(uVar5);
  }
  return;
}



/* Entry: 1020d1100; end: 1020d1177;  */

void FUN_1020d1100(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar7 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = 0x1020d20b4;
  plVar7[0xd] = lVar6;
  plVar7[0xe] = lVar2;
  plVar7[0xb] = lVar4;
  plVar7[0xc] = lVar1;
  lVar4 = 0;
  func_0x0001020d1180();
  plVar7[0xf] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar7[0x10] = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[0x11] = uVar5;
  lVar6 = 0;
  func_0x000107c5fcec();
  puVar3 = PTR___sScMMa_11034fc70;
  lVar4 = lVar6;
  func_0x000107c5fce8();
  plVar7[0x12] = lVar4;
  lVar4 = 0x112d45220;
  FUN_1020d1408(0x112d45220,puVar3,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar7[0x13] = lVar6;
  plVar7[0x14] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020cdcd8,lVar6,lVar4);
  return;
}



/* Entry: 1020d1178; end: 1020d1193;  */

void FUN_1020d1178(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  long extraout_x8;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  long unaff_x20;
  ulong uVar19;
  long lVar20;
  long alStack_d0 [2];
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar7 = 0;
  func_0x0001020d1180();
  lStack_a0 = *(long *)(lVar7 + -8);
  lStack_98 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_88 = (long)&lStack_c0 + lVar3;
  uVar17 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar7 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar7 != 0) {
    lStack_80 = 0;
    uVar8 = 0;
    FUN_1020d11c4(0,0x112d5ecc8,&PTR_PTR_1126cd678);
    func_0x000107c5f9e4(uVar17,&lStack_80,PTR___sSSN_11034da80,uVar8,PTR___sSSSHsWP_11034da90);
    lVar5 = lStack_80;
    if (lStack_80 != 0) {
      puVar13 = &UNK_10da59ff8;
      lStack_c0 = lVar7;
      func_0x0001000285a8(0x112e56c10,&UNK_10da59ff8);
      lVar9 = lVar5;
      func_0x000107c6048c();
      lVar7 = 0;
      uVar16 = 1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
      uVar19 = 0xffffffffffffffff;
      if ((*(byte *)(lVar5 + 0x20) & 0x3f) < 6) {
        uVar19 = ~(-1L << (uVar16 & 0x3f));
      }
      uVar19 = uVar19 & *(ulong *)(lVar5 + 0x40);
      lStack_b0 = lVar9 + 0x40;
      lStack_b8 = lVar5;
      lStack_a8 = lVar9;
      if (uVar19 == 0) goto LAB_1020cca28;
      do {
        uVar14 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
        uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
        uVar19 = uVar19 - 1 & uVar19;
        while( true ) {
          uVar14 = LZCOUNT(uVar14);
          uVar18 = uVar14 | lVar7 << 6;
          puVar1 = (undefined8 *)(*(long *)(lStack_b8 + 0x30) + uVar18 * 0x10);
          lVar10 = *(long *)(*(long *)(lStack_b8 + 0x38) + uVar18 * 8);
          uStack_90 = *puVar1;
          uVar17 = puVar1[1];
          func_0x000107c61174();
          func_0x000107c61434(uVar17);
          lVar9 = lVar10;
          func_0x000107c4399c();
          func_0x000107c61180();
          if (lVar9 == 0) {
            func_0x000107c5ede0();
            lVar12 = 1;
            (**(code **)(*(long *)(lVar9 + -8) + 0x38))(lStack_88,1,1,lVar9);
          }
          else {
            lVar12 = lVar9;
            func_0x000107c5faec();
            func_0x000107c61170(lVar9);
            func_0x000107c61434(puVar13);
            func_0x000107c5edd0(lStack_88,lVar12,puVar13);
            lVar12 = 2;
            func_0x000107c61430(puVar13);
          }
          lVar9 = lVar10;
          func_0x000107c3d004();
          func_0x000107c61180();
          if (lVar9 == 0) {
            func_0x000107c61170(lVar10);
            lVar20 = 0;
            lVar12 = 0;
          }
          else {
            lVar20 = lVar9;
            func_0x000107c5faec();
            func_0x000107c61170(lVar10);
            func_0x000107c61170(lVar9);
          }
          lVar9 = lStack_a8;
          plVar2 = (long *)(lStack_88 + *(int *)(lStack_98 + 0x14));
          *plVar2 = lVar20;
          plVar2[1] = lVar12;
          uVar15 = (uVar14 & 0xffffffffffffffc0 | lVar7 << 6) >> 3;
          *(ulong *)(lStack_b0 + uVar15) = *(ulong *)(lStack_b0 + uVar15) | 1L << (uVar14 & 0x3f);
          puVar1 = (undefined8 *)(*(long *)(lStack_a8 + 0x30) + uVar18 * 0x10);
          *puVar1 = uStack_90;
          puVar1[1] = uVar17;
          puVar13 = (undefined *)
                    (*(long *)(lStack_a8 + 0x38) + *(long *)(lStack_a0 + 0x48) * uVar18);
          func_0x0001020d1760(lStack_88,puVar13,0x1020d1180);
          if (SCARRY8(*(long *)(lVar9 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1020cccb0);
            (*pcVar6)();
          }
          *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 1;
          if (uVar19 != 0) break;
LAB_1020cca28:
          do {
            lVar10 = lVar7 + 1;
            if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x1020cccac);
              (*pcVar6)();
            }
            if ((long)(uVar16 + 0x3f >> 6) <= lVar10) {
              func_0x000107c6142c(lStack_b8);
              puVar13 = &UNK_1104c9430;
              func_0x000107c613fc(&UNK_1104c9430,0x18,7);
              lVar7 = lStack_c0;
              func_0x000107c61614(puVar13 + 0x10,lStack_c0);
              puVar11 = &UNK_1104c94a8;
              func_0x000107c613fc(&UNK_1104c94a8,0x30,7);
              puVar4 = PTR___swiftEmptySetSingleton_11034f1d8;
              *(undefined **)(puVar11 + 0x10) = puVar13;
              *(undefined **)(puVar11 + 0x18) = puVar4;
              puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
              *(long *)(puVar11 + 0x20) = lVar9;
              *(undefined **)(puVar11 + 0x28) = puVar13;
              func_0x000107c6157c(lVar9);
              *(undefined **)((long)alStack_d0 + lVar3) = PTR___sytN_11034f1b0 + 8;
              uVar17 = 0x62;
              func_0x0001001ca524(0x62,0,0x3c,4,0,0,&UNK_10da5a8e0,puVar11);
              func_0x000107c61170(lVar7);
              func_0x000107c61574(lVar9);
              func_0x000107c61574(puVar11);
              func_0x000107c61574(uVar17);
              return;
            }
            uVar19 = ((ulong *)(lVar5 + 0x40))[lVar10];
            lVar7 = lVar7 + 1;
          } while (uVar19 == 0);
          uVar14 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
          uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
          uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
          uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
          uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
          uVar19 = uVar19 - 1 & uVar19;
          lVar7 = lVar10;
        }
      } while( true );
    }
    func_0x000107c61170(lVar7);
  }
  return;
}



/* Entry: 1020d1194; end: 1020d11c3;  */

void FUN_1020d1194(undefined8 param_1,long *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,param_3);
  return;
}



/* Entry: 1020d11c4; end: 1020d1203;  */

void FUN_1020d11c4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1020d1204; end: 1020d127b;  */

void FUN_1020d1204(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar7 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = 0x1020d20a0;
  plVar7[0xd] = lVar6;
  plVar7[0xe] = lVar2;
  plVar7[0xb] = lVar4;
  plVar7[0xc] = lVar1;
  lVar4 = 0;
  func_0x0001020d1180();
  plVar7[0xf] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar7[0x10] = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[0x11] = uVar5;
  lVar6 = 0;
  func_0x000107c5fcec();
  puVar3 = PTR___sScMMa_11034fc70;
  lVar4 = lVar6;
  func_0x000107c5fce8();
  plVar7[0x12] = lVar4;
  lVar4 = 0x112d45220;
  FUN_1020d1408(0x112d45220,puVar3,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar7[0x13] = lVar6;
  plVar7[0x14] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020cdcd8,lVar6,lVar4);
  return;
}



/* Entry: 1020d127c; end: 1020d1283;  */

/* WARNING: Possible PIC construction at 0x0001020cc74c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020cc750) */

void FUN_1020d127c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  
  uVar3 = *param_1;
  puVar1 = &UNK_1104c94d0;
  func_0x000107c613fc(&UNK_1104c94d0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  *(undefined8 *)(puVar1 + 0x18) = unaff_x20;
  puVar2 = &UNK_1104c94f8;
  func_0x000107c613fc(&UNK_1104c94f8,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10da5a8f8;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(uVar3);
  func_0x000107c6157c();
  func_0x0001001ca524(0x62,0,0x3c,4,0,0,&UNK_10da5a908,puVar2,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 1020d1284; end: 1020d12d3;  */

void FUN_1020d1284(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x1020d20a4;
  plVar5[5] = lVar3;
  plVar5[6] = lVar2;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar5[7] = lVar3;
  uVar4 = 0x112d45220;
  FUN_1020d1408(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar2,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020cc7f8,lVar2,uVar4);
  return;
}



/* Entry: 1020d12d4; end: 1020d1343;  */

void FUN_1020d12d4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1020d20a8;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1020d1344; end: 1020d1397;  */

void FUN_1020d1344(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  uVar1 = *(undefined1 *)(unaff_x20 + 0x10);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x1020d20ac;
  plVar5[2] = lVar6;
  *(undefined1 *)((long)plVar5 + 0x21) = uVar1;
  lVar3 = 0;
  func_0x000107c5fcec();
  puVar2 = PTR___sScMMa_11034fc70;
  lVar6 = lVar3;
  func_0x000107c5fce8();
  plVar5[3] = lVar6;
  uVar4 = 0x112d45220;
  FUN_1020d1408(0x112d45220,puVar2,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020cd10c,lVar3,uVar4);
  return;
}



/* Entry: 1020d1398; end: 1020d1407;  */

void FUN_1020d1398(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1020d20b0;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1020d1408; end: 1020d1447;  */

void FUN_1020d1408(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 1020d1448; end: 1020d14c7;  */

void FUN_1020d1448(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long unaff_x20;
  long lVar9;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar9 = *(long *)(unaff_x20 + 0x30);
  plVar8 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = 0x1020d20c0;
  plVar8[2] = param_1;
  plVar4 = (long *)0x110;
  func_0x000107c615b8();
  plVar8[3] = (long)plVar4;
  *plVar4 = (long)plVar8;
  plVar4[1] = (long)FUN_1020ce5dc;
  plVar4[10] = lVar9;
  plVar4[0xb] = lVar5;
  plVar4[8] = lVar1;
  plVar4[9] = lVar3;
  plVar4[7] = lVar2;
  lVar5 = 0;
  func_0x000107c5eea4();
  plVar4[0xc] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar4[0xd] = lVar5;
  uVar6 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0xe] = uVar6;
  lVar5 = 0;
  func_0x0001020c2460();
  plVar4[0xf] = lVar5;
  uVar6 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x10] = uVar6;
  lVar5 = 0x112e573c0;
  func_0x0001000285a8(0x112e573c0,&UNK_10da5a9d8);
  uVar6 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xf;
  uVar7 = uVar6 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x11] = uVar7;
  uVar7 = uVar6 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x12] = uVar7;
  uVar6 = uVar6 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x13] = uVar6;
  lVar5 = 0x112e573c8;
  func_0x0001000285a8(0x112e573c8,&UNK_10da5a9e0);
  uVar6 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x14] = uVar6;
  lVar5 = 0;
  func_0x0001020c31a0();
  plVar4[0x15] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar4[0x16] = lVar5;
  uVar6 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x17] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020ce768,0,0);
  return;
}



/* Entry: 1020d14c8; end: 1020d171f;  */

void FUN_1020d14c8(long param_1,code *param_2,undefined8 param_3,uint param_4,long *param_5)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar11 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar17 = uVar17 & *(ulong *)(param_1 + 0x40);
  func_0x000107c61434();
  func_0x000107c6157c(param_3);
  lVar16 = 0;
  while( true ) {
    while (uVar17 != 0) {
      uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar16 << 6;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar9 * 0x10);
      uStack_78 = *puVar1;
      uVar3 = puVar1[1];
      uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar9 * 8);
      uStack_70 = uVar3;
      uStack_68 = uVar15;
      func_0x000107c61434(uVar3);
      func_0x000107c61174(uVar15);
      (*param_2)(&uStack_90,&uStack_78);
      func_0x000107c61170(uVar15);
      func_0x000107c6142c(uVar3);
      uVar3 = uStack_80;
      uVar4 = uStack_88;
      uVar9 = uStack_90;
      lVar13 = *param_5;
      uVar7 = uStack_90;
      uVar8 = uStack_88;
      func_0x000100029284();
      lVar10 = *(long *)(lVar13 + 0x10);
      uVar12 = (ulong)~(uint)uVar8 & 1;
      lVar14 = lVar10 + uVar12;
      if (SCARRY8(lVar10,uVar12)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1020d170c);
        (*pcVar5)();
      }
      if (*(long *)(lVar13 + 0x18) < lVar14) {
        FUN_1020c67a0(lVar14,param_4 & 1);
        uVar7 = uVar9;
        uVar12 = uVar4;
        func_0x000100029284();
        if (((uint)uVar8 & 1) != ((uint)uVar12 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1020d1720);
          (*pcVar5)();
        }
      }
      else if ((param_4 & 1) == 0) {
        FUN_1020c662c();
      }
      uVar17 = uVar17 - 1 & uVar17;
      lVar14 = *param_5;
      if ((uVar8 & 1) == 0) {
        lVar10 = lVar14 + (uVar7 >> 6) * 8;
        *(ulong *)(lVar10 + 0x40) = *(ulong *)(lVar10 + 0x40) | 1L << (uVar7 & 0x3f);
        puVar2 = (ulong *)(*(long *)(lVar14 + 0x30) + uVar7 * 0x10);
        *puVar2 = uVar9;
        puVar2[1] = uVar4;
        *(undefined8 *)(*(long *)(lVar14 + 0x38) + uVar7 * 8) = uVar3;
        if (SCARRY8(*(long *)(lVar14 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1020d1710);
          (*pcVar5)();
        }
        *(long *)(lVar14 + 0x10) = *(long *)(lVar14 + 0x10) + 1;
      }
      else {
        func_0x000107c6142c(uVar4);
        uVar15 = *(undefined8 *)(*(long *)(lVar14 + 0x38) + uVar7 * 8);
        *(undefined8 *)(*(long *)(lVar14 + 0x38) + uVar7 * 8) = uVar3;
        func_0x000107c61170(uVar15);
      }
      param_4 = 1;
    }
    bVar6 = SCARRY8(lVar16,1);
    lVar16 = lVar16 + 1;
    if (bVar6) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1020d1708);
      (*pcVar5)();
    }
    if ((long)(uVar11 + 0x3f >> 6) <= lVar16) break;
    uVar17 = ((ulong *)(param_1 + 0x40))[lVar16];
  }
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 1020d1720; end: 1020d186b;  */

undefined8 FUN_1020d1720(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1020d186c; end: 1020d189b;  */

bool FUN_1020d186c(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4b88c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170(lVar1);
  }
  return lVar1 != 0;
}


