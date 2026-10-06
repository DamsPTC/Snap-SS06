/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1012b0abc; end: 1012b0b03;  */

void FUN_1012b0abc(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x290);
  (**(code **)(unaff_x22 + 600))(PTR___swiftEmptyArrayStorage_11034f1c8);
  func_0x000107c614ac(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001012b0b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1012b0b04; end: 1012b0b53;  */

void FUN_1012b0b04(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x298));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x2f0);
  (**(code **)(unaff_x22 + 600))(PTR___swiftEmptyArrayStorage_11034f1c8);
  func_0x000107c614ac(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001012b0b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1012b0b54; end: 1012b0bff;  */

void FUN_1012b0b54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_6;
  *(undefined8 *)(unaff_x22 + 0x78) = param_7;
  *(undefined8 *)(unaff_x22 + 0x60) = param_4;
  *(undefined8 *)(unaff_x22 + 0x68) = param_5;
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = param_3;
  lVar3 = 0x112d6f778;
  func_0x0001000285a8(0x112d6f778,&UNK_10d931118);
  *(long *)(unaff_x22 + 0x80) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x88) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x90) = uVar1;
  lVar3 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar1 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x98) = uVar2;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa0) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012b0c00,0,0);
  return;
}



/* Entry: 1012b0c00; end: 1012b0eef;  */

void FUN_1012b0c00(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long unaff_x22;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  
  lVar15 = *(long *)(unaff_x22 + 0x58);
  lVar13 = *(long *)(lVar15 + 0x10);
  if (lVar13 != 0) {
    uVar9 = **(undefined8 **)(unaff_x22 + 0x50);
    lVar5 = 0;
    func_0x000107c5fd0c();
    puVar18 = (undefined8 *)(lVar15 + 0x38);
    lVar15 = *(long *)(lVar5 + -8);
    pcVar10 = *(code **)(lVar15 + 0x38);
    do {
      uVar14 = *(undefined8 *)(unaff_x22 + 0x98);
      uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar16 = puVar18[-3];
      uVar3 = puVar18[-2];
      uVar1 = puVar18[-1];
      uVar4 = *puVar18;
      uVar22 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar19 = *(ulong *)(unaff_x22 + 0x60);
      (*pcVar10)(uVar2,1,1,lVar5);
      puVar6 = &UNK_11039d188;
      func_0x000107c613fc(&UNK_11039d188,0x58,7);
      *(undefined8 *)(puVar6 + 0x18) = 0;
      *(long *)(puVar6 + 0x10) = 0;
      *(undefined8 *)(puVar6 + 0x28) = uVar22;
      *(ulong *)(puVar6 + 0x20) = uVar19;
      *(undefined8 *)(puVar6 + 0x30) = uVar16;
      *(undefined8 *)(puVar6 + 0x38) = uVar3;
      *(undefined8 *)(puVar6 + 0x40) = uVar1;
      *(undefined8 *)(puVar6 + 0x48) = uVar4;
      *(undefined8 *)(puVar6 + 0x50) = uVar12;
      func_0x0001000abe04(uVar2,uVar14);
      (**(code **)(lVar15 + 0x30))(uVar14,1,lVar5);
      func_0x000107c61434(uVar3);
      func_0x000107c615f0(uVar19);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x98);
      if ((int)uVar14 == 1) {
        func_0x0001012b681c(uVar16,0x112d453c8,&UNK_10d90ac60);
        uVar19 = 0x3100;
      }
      else {
        func_0x000107c5fd08();
        (**(code **)(lVar15 + 8))(uVar16,lVar5);
        uVar19 = uVar19 & 0xff | 0x3100;
      }
      lVar17 = *(long *)(puVar6 + 0x10);
      if (lVar17 == 0) {
        lVar21 = 0;
        lVar20 = 0;
      }
      else {
        lVar20 = *(long *)(puVar6 + 0x18);
        lVar21 = lVar17;
        func_0x000107c614f0();
        func_0x000107c615f0(lVar17);
        func_0x000107c5fca8();
        func_0x000107c615e8(lVar17);
      }
      puVar7 = &UNK_11039d1b0;
      func_0x000107c613fc(&UNK_11039d1b0,0x20,7);
      *(undefined **)(puVar7 + 0x10) = &UNK_10d931138;
      *(undefined **)(puVar7 + 0x18) = puVar6;
      func_0x000107c6157c(puVar6);
      uVar14 = 0x112d6f768;
      func_0x0001000285a8(0x112d6f768,&UNK_10d931108);
      puVar11 = (undefined8 *)0x0;
      if (lVar20 != 0 || lVar21 != 0) {
        *(undefined8 *)(unaff_x22 + 0x10) = 0;
        *(undefined8 *)(unaff_x22 + 0x18) = 0;
        *(long *)(unaff_x22 + 0x20) = lVar21;
        *(long *)(unaff_x22 + 0x28) = lVar20;
        puVar11 = (undefined8 *)(unaff_x22 + 0x10);
      }
      puVar18 = puVar18 + 4;
      uVar16 = *(undefined8 *)(unaff_x22 + 0xa0);
      *(undefined8 *)(unaff_x22 + 0x30) = 1;
      *(undefined8 **)(unaff_x22 + 0x38) = puVar11;
      *(undefined8 *)(unaff_x22 + 0x40) = uVar9;
      func_0x000107c615bc(uVar19,unaff_x22 + 0x30,uVar14,&UNK_10d931140,puVar7);
      func_0x000107c61574(puVar6);
      func_0x000107c61574(uVar19);
      func_0x0001012b681c(uVar16,0x112d453c8,&UNK_10d90ac60);
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  uVar16 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar14 = **(undefined8 **)(unaff_x22 + 0x50);
  uVar9 = 0x112d6f768;
  func_0x0001000285a8(0x112d6f768,&UNK_10d931108);
  func_0x000107c5fcc4(uVar16,uVar14,uVar9);
  plVar8 = (long *)(ulong)*(uint *)(PTR___sScG8IteratorV4nextxSgyYaFTu_11034fc08 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa8) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_1012b0ef0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScG8IteratorV4nextxSgyYaF_11034fc00)
            (plVar8,unaff_x22 + 0x48,*(undefined8 *)(unaff_x22 + 0x80));
  return;
}



/* Entry: 1012b0ef0; end: 1012b0f37;  */

void FUN_1012b0ef0(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012b0f38,0,0);
  return;
}



/* Entry: 1012b0f38; end: 1012b10cb;  */

void FUN_1012b0f38(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong *puVar9;
  long unaff_x22;
  ulong uVar10;
  
  lVar8 = *(long *)(unaff_x22 + 0x48);
  if (lVar8 != 1) {
    if (lVar8 != 0) {
      puVar9 = *(ulong **)(unaff_x22 + 0x70);
      uVar10 = *puVar9;
      lVar4 = lVar8;
      func_0x000107c61174();
      uVar6 = uVar10;
      func_0x000107c61550();
      *puVar9 = uVar10;
      if ((((int)uVar6 == 0) || ((long)uVar10 < 0)) || (uVar6 = uVar10, (uVar10 >> 0x3e & 1) != 0))
      {
        if (uVar10 >> 0x3e == 0) {
          uVar5 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar5 = uVar10 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar10) {
            uVar5 = uVar10;
          }
          func_0x000107c60480(uVar5);
        }
        puVar9 = *(ulong **)(unaff_x22 + 0x70);
        uVar6 = 0;
        FUN_1012bf74c(0,uVar5 + 1,1,uVar10);
        *puVar9 = uVar6;
      }
      uVar5 = uVar6 & 0xffffffffffffff8;
      uVar10 = *(ulong *)(uVar5 + 0x10);
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar10) {
        puVar9 = *(ulong **)(unaff_x22 + 0x70);
        uVar5 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
        FUN_1012bf74c(uVar5,uVar10 + 1,1,uVar6);
        *puVar9 = uVar5;
        uVar5 = uVar5 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar5 + 0x10) = uVar10 + 1;
      *(long *)(uVar5 + uVar10 * 8 + 0x20) = lVar4;
      FUN_1012b6000(lVar8);
    }
    plVar7 = (long *)(ulong)*(uint *)(PTR___sScG8IteratorV4nextxSgyYaFTu_11034fc08 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xa8) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_1012b0ef0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScG8IteratorV4nextxSgyYaF_11034fc00)
              (plVar7,(long *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x80));
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  (**(code **)(*(long *)(unaff_x22 + 0x88) + 8))(uVar3,*(undefined8 *)(unaff_x22 + 0x80));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001012b108c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1012b10cc; end: 1012b116f;  */

void FUN_1012b10cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xe8) = param_1;
  func_0x000107c614f0(param_4);
  piVar3 = *(int **)(param_5 + 0x38);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xf0) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1012b1170;
                    /* WARNING: Could not recover jumptable at 0x0001012b116c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(plVar2,unaff_x22 + 0x10,param_6,param_7,0,param_4,param_5)
  ;
  return;
}



/* Entry: 1012b1170; end: 1012b11cb;  */

void FUN_1012b1170(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xf8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xf0));
  if (unaff_x20 == 0) {
    uVar1 = 0x1012b6e20;
  }
  else {
    uVar1 = 0x1012b6e14;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 1012b11cc; end: 1012b1207;  */

void FUN_1012b11cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x288) = param_9;
  *(undefined8 *)(unaff_x22 + 0x280) = param_8;
  *(undefined8 *)(unaff_x22 + 0x278) = param_7;
  *(undefined8 *)(unaff_x22 + 0x270) = param_6;
  *(undefined8 *)(unaff_x22 + 0x268) = param_5;
  *(undefined8 *)(unaff_x22 + 0x260) = param_4;
  *(undefined8 *)(unaff_x22 + 600) = param_3;
  *(undefined8 *)(unaff_x22 + 0x250) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012b1208,0,0);
  return;
}



/* Entry: 1012b1208; end: 1012b1573;  */

void FUN_1012b1208(void)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  code *pcVar17;
  int *piVar18;
  undefined8 uVar19;
  long lVar20;
  code *pcVar21;
  long unaff_x22;
  
  uVar19 = *(undefined8 *)(unaff_x22 + 0x268);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x260);
  lVar15 = *(long *)(unaff_x22 + 600);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x250);
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x22 + 0x290) = puVar2;
  uVar3 = 0x2d4d4d2d79797979;
  func_0x000107c5fadc(0x2d4d4d2d79797979,0xea00000000006464);
  func_0x000107c53e28(puVar2);
  func_0x000107c61170(uVar3);
  lVar4 = 0;
  func_0x000107c5efa8();
  lVar20 = *(long *)(lVar4 + -8);
  uVar11 = *(long *)(lVar20 + 0x40) + 0xf;
  uVar5 = uVar11 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar5);
  uVar10 = uVar5;
  func_0x000107c5efa4(uVar5);
  func_0x000107c5ef9c();
  pcVar17 = *(code **)(lVar20 + 8);
  (*pcVar17)(uVar5,lVar4);
  func_0x000107c615c0(uVar5);
  func_0x000107c59d94(puVar2);
  func_0x000107c61170(uVar10);
  lVar6 = 0;
  func_0x000107c5eea4();
  lVar20 = *(long *)(lVar6 + -8);
  uVar10 = *(long *)(lVar20 + 0x40) + 0xf;
  uVar5 = uVar10 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar5);
  uVar7 = uVar10 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar7);
  func_0x000107c5eea0(uVar7);
  func_0x000107c5ee6c(uVar5,0xc12a5e0000000000);
  pcVar21 = *(code **)(lVar20 + 8);
  (*pcVar21)(uVar7,lVar6);
  func_0x000107c615c0(uVar7);
  func_0x000107c5ee70();
  lVar20 = lVar6;
  (*pcVar21)(uVar5);
  func_0x000107c615c0(uVar5);
  puVar8 = puVar2;
  func_0x000107c5c1b8();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  puVar9 = puVar8;
  func_0x000107c5faec();
  func_0x000107c61170(puVar8);
  *(undefined **)(unaff_x22 + 0x298) = puVar9;
  *(long *)(unaff_x22 + 0x2a0) = lVar20;
  uVar5 = uVar10 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar5);
  uVar10 = uVar10 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar10);
  func_0x000107c5eea0(uVar10);
  func_0x000107c5ee6c(uVar5,0x415da9c000000000);
  (*pcVar21)(uVar10,lVar6);
  func_0x000107c615c0(uVar10);
  func_0x000107c5ee70();
  (*pcVar21)(uVar5);
  func_0x000107c615c0(uVar5);
  func_0x000107c5c1b8();
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  puVar8 = puVar2;
  func_0x000107c5faec();
  lVar13 = lVar6;
  func_0x000107c61170(puVar2);
  *(undefined **)(unaff_x22 + 0x2a8) = puVar8;
  *(long *)(unaff_x22 + 0x2b0) = lVar6;
  uVar11 = uVar11 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  uVar10 = uVar11;
  func_0x000107c5efa4(uVar11);
  func_0x000107c5ef94();
  *(ulong *)(unaff_x22 + 0x2b8) = uVar10;
  *(long *)(unaff_x22 + 0x2c0) = lVar13;
  (*pcVar17)(uVar11,lVar4);
  func_0x000107c615c0(uVar11);
  func_0x000107c614f0(uVar16);
  *(undefined8 *)(unaff_x22 + 0x148) = 0x6573752d70616e73;
  *(undefined8 *)(unaff_x22 + 0x150) = 0xe900000000000072;
  *(undefined8 *)(unaff_x22 + 0x158) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x160) = uVar19;
  *(undefined **)(unaff_x22 + 0x168) = puVar9;
  *(long *)(unaff_x22 + 0x170) = lVar20;
  *(undefined **)(unaff_x22 + 0x178) = puVar8;
  *(long *)(unaff_x22 + 0x180) = lVar6;
  *(ulong *)(unaff_x22 + 0x188) = uVar10;
  *(long *)(unaff_x22 + 400) = lVar13;
  *(undefined8 *)(unaff_x22 + 0x198) = 0;
  *(undefined8 *)(unaff_x22 + 0x1a0) = 0;
  piVar18 = *(int **)(lVar15 + 0x78);
  iVar1 = *piVar18;
  plVar12 = (long *)(ulong)(uint)piVar18[1];
  func_0x000107c61434();
  func_0x000107c61434(lVar20);
  func_0x000107c61434(lVar6);
  func_0x000107c61434(lVar13);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x2c8) = plVar12;
  *plVar12 = unaff_x22;
  plVar12[1] = (long)FUN_1012b1574;
                    /* WARNING: Could not recover jumptable at 0x0001012b1570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar18))
            (plVar12,unaff_x22 + 0x148,uVar16,*(undefined8 *)(unaff_x22 + 600));
  return;
}



/* Entry: 1012b1574; end: 1012b1607;  */

void FUN_1012b1574(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x2d0) = param_1;
  *(undefined8 *)(lVar2 + 0x2d8) = param_2;
  *(undefined8 *)(lVar2 + 0x2e0) = param_3;
  *(long *)(lVar2 + 0x2e8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x2c8));
  FUN_1012b6980(lVar2 + 0x148);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1012b1608;
  }
  else {
    uVar4 = *(undefined8 *)(lVar2 + 0x2b0);
    uVar3 = *(undefined8 *)(lVar2 + 0x2a0);
    func_0x000107c6142c(*(undefined8 *)(lVar2 + 0x2c0));
    func_0x000107c6142c(uVar4);
    func_0x000107c6142c(uVar3);
    pcVar1 = FUN_1012b1d08;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1012b1608; end: 1012b1b4f;  */

void FUN_1012b1608(void)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long unaff_x22;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  lVar14 = *(long *)(unaff_x22 + 0x270);
  func_0x000107c61428(lVar14 + 0x10,unaff_x22 + 0x1a8,0,0);
  lVar14 = lVar14 + 0x10;
  func_0x000107c61648();
  uVar5 = *(undefined8 *)(unaff_x22 + 0x2a0);
  uVar15 = uVar5;
  if (lVar14 != 0) {
    uVar15 = *(undefined8 *)(lVar14 + 0x68);
    *(undefined8 *)(lVar14 + 0x60) = *(undefined8 *)(unaff_x22 + 0x298);
    *(undefined8 *)(lVar14 + 0x68) = uVar5;
    func_0x000107c61574(lVar14);
  }
  lVar14 = *(long *)(unaff_x22 + 0x270);
  func_0x000107c6142c(uVar15);
  func_0x000107c61428(lVar14 + 0x10,unaff_x22 + 0x1c0,0,0);
  lVar14 = lVar14 + 0x10;
  func_0x000107c61648();
  uVar5 = *(undefined8 *)(unaff_x22 + 0x2b0);
  uVar15 = uVar5;
  if (lVar14 != 0) {
    uVar15 = *(undefined8 *)(lVar14 + 0x78);
    *(undefined8 *)(lVar14 + 0x70) = *(undefined8 *)(unaff_x22 + 0x2a8);
    *(undefined8 *)(lVar14 + 0x78) = uVar5;
    func_0x000107c61574(lVar14);
  }
  lVar14 = *(long *)(unaff_x22 + 0x270);
  func_0x000107c6142c(uVar15);
  func_0x000107c61428(lVar14 + 0x10,unaff_x22 + 0x1d8,0,0);
  lVar14 = lVar14 + 0x10;
  func_0x000107c61648();
  uVar5 = *(undefined8 *)(unaff_x22 + 0x2c0);
  uVar15 = uVar5;
  if (lVar14 != 0) {
    uVar15 = *(undefined8 *)(lVar14 + 0x88);
    *(undefined8 *)(lVar14 + 0x80) = *(undefined8 *)(unaff_x22 + 0x2b8);
    *(undefined8 *)(lVar14 + 0x88) = uVar5;
    func_0x000107c61574(lVar14);
  }
  lVar14 = *(long *)(unaff_x22 + 0x270);
  func_0x000107c6142c(uVar15);
  func_0x000107c61428(lVar14 + 0x10,unaff_x22 + 0x1f0,0,0);
  lVar14 = lVar14 + 0x10;
  func_0x000107c61648();
  if (lVar14 != 0) {
    *(undefined1 *)(lVar14 + 0x90) = 0;
    func_0x000107c61574();
  }
  lVar14 = *(long *)(unaff_x22 + 0x270);
  func_0x000107c61428(lVar14 + 0x10,unaff_x22 + 0x208,0,0);
  lVar14 = lVar14 + 0x10;
  func_0x000107c61648();
  if (lVar14 != 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x268);
    uVar15 = *(undefined8 *)(lVar14 + 0xa0);
    *(undefined8 *)(lVar14 + 0x98) = *(undefined8 *)(unaff_x22 + 0x260);
    *(undefined8 *)(lVar14 + 0xa0) = uVar5;
    func_0x000107c6142c(uVar15);
    func_0x000107c61434(uVar5);
    func_0x000107c61574(lVar14);
  }
  lVar14 = *(long *)(unaff_x22 + 0x270);
  func_0x000107c61428(lVar14 + 0x10,unaff_x22 + 0x220,0,0);
  lVar14 = lVar14 + 0x10;
  func_0x000107c61648();
  if (lVar14 != 0) {
    uVar15 = *(undefined8 *)(unaff_x22 + 0x2e0);
    uVar5 = *(undefined8 *)(lVar14 + 0x48);
    *(undefined8 *)(lVar14 + 0x40) = *(undefined8 *)(unaff_x22 + 0x2d8);
    *(undefined8 *)(lVar14 + 0x48) = uVar15;
    func_0x000107c61434(uVar15);
    func_0x000107c6142c(uVar5);
    func_0x000107c61574(lVar14);
  }
  uVar12 = 0;
  lVar14 = *(long *)(unaff_x22 + 0x2d0);
  uVar18 = *(ulong *)(lVar14 + 0x10);
  puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    puVar17 = (undefined8 *)(lVar14 + uVar12 * 0x20);
    do {
      puVar11 = puVar17;
      if (uVar18 == uVar12) {
        uVar15 = *(undefined8 *)(unaff_x22 + 0x2e0);
        func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x2d0));
        func_0x000107c6142c(uVar15);
        *(undefined **)(unaff_x22 + 0x238) = PTR___swiftEmptySetSingleton_11034f1d8;
        puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
        lVar14 = *(long *)(puVar16 + 0x10);
        if (lVar14 == 0) goto LAB_1012b19e8;
        lVar13 = 0;
        goto LAB_1012b18e8;
      }
      if (*(ulong *)(lVar14 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1012b1b4c);
        (*pcVar3)();
      }
      uVar12 = uVar12 + 1;
      puVar17 = puVar11 + 4;
    } while (puVar11[7] != 0);
    uVar15 = puVar11[4];
    uVar5 = puVar11[5];
    uVar19 = puVar11[6];
    func_0x000107c61434(uVar5);
    puVar6 = puVar16;
    func_0x000107c61558();
    puStack_78 = puVar16;
    if (((ulong)puVar6 & 1) == 0) {
      func_0x0001012b58b0(0,*(long *)(puVar16 + 0x10) + 1,1);
    }
    uVar1 = *(ulong *)(puStack_78 + 0x10);
    if (*(ulong *)(puStack_78 + 0x18) >> 1 <= uVar1) {
      func_0x0001012b58b0(1 < *(ulong *)(puStack_78 + 0x18),uVar1 + 1,1);
    }
    *(ulong *)(puStack_78 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puStack_78 + uVar1 * 0x20 + 0x20) = uVar15;
    *(undefined8 *)(puStack_78 + uVar1 * 0x20 + 0x28) = uVar5;
    *(undefined8 *)(puStack_78 + uVar1 * 0x20 + 0x30) = uVar19;
    *(undefined8 *)(puStack_78 + uVar1 * 0x20 + 0x38) = 0;
    puVar16 = puStack_78;
  } while( true );
LAB_1012b18e8:
  do {
    puVar17 = (undefined8 *)(puVar16 + lVar13 * 0x20 + 0x38);
    lVar13 = lVar13 + 1;
    while( true ) {
      if (*(ulong *)(puVar16 + 0x10) <= lVar13 - 1U) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1012b1b50);
        (*pcVar3)();
      }
      uVar15 = puVar17[-3];
      uVar19 = puVar17[-2];
      uVar5 = puVar17[-1];
      uVar2 = *puVar17;
      func_0x000107c61438(uVar19,2);
      ppuVar7 = &puStack_78;
      func_0x000100403b00(ppuVar7,uVar15,uVar19);
      func_0x000107c6142c(uStack_70);
      if (((ulong)ppuVar7 & 1) != 0) break;
      func_0x000107c6142c(uVar19);
      lVar13 = lVar13 + 1;
      puVar17 = puVar17 + 4;
      if (lVar13 - lVar14 == 1) goto LAB_1012b19e8;
    }
    puVar8 = puVar6;
    func_0x000107c61558();
    if (((ulong)puVar8 & 1) == 0) {
      func_0x0001012b58b0(0,*(long *)(puVar6 + 0x10) + 1,1);
    }
    uVar12 = *(ulong *)(puVar6 + 0x10);
    if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar12) {
      func_0x0001012b58b0(1 < *(ulong *)(puVar6 + 0x18),uVar12 + 1,1);
    }
    *(ulong *)(puVar6 + 0x10) = uVar12 + 1;
    *(undefined8 *)(puVar6 + uVar12 * 0x20 + 0x20) = uVar15;
    *(undefined8 *)(puVar6 + uVar12 * 0x20 + 0x28) = uVar19;
    *(undefined8 *)(puVar6 + uVar12 * 0x20 + 0x30) = uVar5;
    *(undefined8 *)(puVar6 + uVar12 * 0x20 + 0x38) = uVar2;
  } while (lVar13 != lVar14);
LAB_1012b19e8:
  *(undefined **)(unaff_x22 + 0x2f0) = puVar6;
  uVar15 = *(undefined8 *)(unaff_x22 + 0x288);
  uVar19 = *(undefined8 *)(unaff_x22 + 600);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x250);
  func_0x000107c61574(puVar16);
  *(undefined **)(unaff_x22 + 0x240) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x22 + 0x120) = puVar6;
  *(undefined8 *)(unaff_x22 + 0x130) = uVar19;
  *(undefined8 *)(unaff_x22 + 0x128) = uVar5;
  *(long *)(unaff_x22 + 0x138) = unaff_x22 + 0x240;
  *(undefined8 *)(unaff_x22 + 0x140) = uVar15;
  iVar4 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar4 == 0) {
    uVar15 = 0x112d6f768;
    func_0x0001000285a8(0x112d6f768,&UNK_10d931108);
    func_0x000107c615ac(unaff_x22 + 0x10,uVar15);
    *(long *)(unaff_x22 + 0x248) = unaff_x22 + 0x10;
    plVar9 = (long *)0xb0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x300) = plVar9;
    *plVar9 = unaff_x22;
    plVar9[1] = (long)FUN_1012b1ba4;
    lVar10 = *(long *)(unaff_x22 + 0x288);
    lVar13 = *(long *)(unaff_x22 + 600);
    lVar14 = *(long *)(unaff_x22 + 0x250);
    plVar9[0xe] = unaff_x22 + 0x240;
    plVar9[0xf] = lVar10;
    plVar9[0xc] = lVar14;
    plVar9[0xd] = lVar13;
    plVar9[10] = unaff_x22 + 0x248;
    plVar9[0xb] = (long)puVar6;
    lVar14 = 0x112d6f778;
    func_0x0001000285a8(0x112d6f778,&UNK_10d931118);
    plVar9[0x10] = lVar14;
    lVar14 = *(long *)(lVar14 + -8);
    plVar9[0x11] = lVar14;
    uVar12 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar9[0x12] = uVar12;
    lVar14 = 0x112d453c8;
    func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
    uVar12 = *(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xf;
    uVar18 = uVar12 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar9[0x13] = uVar18;
    uVar12 = uVar12 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar9[0x14] = uVar12;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1012b1e0c,0,0);
    return;
  }
  func_0x0001000285a8(0x112d6f768,&UNK_10d931108);
  plVar9 = (long *)(ulong)*(uint *)(
                                   PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lFTu_11034ff68
                                   + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x2f8) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_1012b1b50;
                    /* WARNING: Could not recover jumptable at 0x00010bdb929c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lF_11034ff60
  )();
  return;
}



/* Entry: 1012b1b50; end: 1012b1ba3;  */

void FUN_1012b1b50(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x2f0);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x2f8));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012b1ca8,0,0);
  return;
}



/* Entry: 1012b1ba4; end: 1012b1c17;  */

void FUN_1012b1ba4(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x300));
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScG22awaitAllRemainingTasksyyYaFTu_11034fbe0 + 4);
  func_0x000107c615b8();
  *(long **)(lVar3 + 0x308) = plVar1;
  func_0x0001000285a8(0x112d6f770,&UNK_10d931110);
  *plVar1 = lVar2;
  plVar1[1] = (long)FUN_1012b1c18;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScG22awaitAllRemainingTasksyyYaF_11034fbd8)();
  return;
}



/* Entry: 1012b1c18; end: 1012b1ca7;  */

void FUN_1012b1c18(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x308));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1012b1c60,0,0);
  return;
}



/* Entry: 1012b1ca8; end: 1012b1d07;  */

void FUN_1012b1ca8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x290);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x240);
  (**(code **)(unaff_x22 + 0x278))(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x238));
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001012b1d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1012b1d08; end: 1012b1d5f;  */

void FUN_1012b1d08(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x2e8);
  pcVar2 = *(code **)(unaff_x22 + 0x278);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x290));
  (*pcVar2)(PTR___swiftEmptyArrayStorage_11034f1c8);
  func_0x000107c614ac(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001012b1d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1012b1d60; end: 1012b1e0b;  */

void FUN_1012b1d60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_6;
  *(undefined8 *)(unaff_x22 + 0x78) = param_7;
  *(undefined8 *)(unaff_x22 + 0x60) = param_4;
  *(undefined8 *)(unaff_x22 + 0x68) = param_5;
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = param_3;
  lVar3 = 0x112d6f778;
  func_0x0001000285a8(0x112d6f778,&UNK_10d931118);
  *(long *)(unaff_x22 + 0x80) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x88) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x90) = uVar1;
  lVar3 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar1 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x98) = uVar2;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa0) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012b1e0c,0,0);
  return;
}



/* Entry: 1012b1e0c; end: 1012b20fb;  */

void FUN_1012b1e0c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long unaff_x22;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  
  lVar15 = *(long *)(unaff_x22 + 0x58);
  lVar13 = *(long *)(lVar15 + 0x10);
  if (lVar13 != 0) {
    uVar9 = **(undefined8 **)(unaff_x22 + 0x50);
    lVar5 = 0;
    func_0x000107c5fd0c();
    puVar18 = (undefined8 *)(lVar15 + 0x38);
    lVar15 = *(long *)(lVar5 + -8);
    pcVar10 = *(code **)(lVar15 + 0x38);
    do {
      uVar14 = *(undefined8 *)(unaff_x22 + 0x98);
      uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar16 = puVar18[-3];
      uVar3 = puVar18[-2];
      uVar1 = puVar18[-1];
      uVar4 = *puVar18;
      uVar22 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar19 = *(ulong *)(unaff_x22 + 0x60);
      (*pcVar10)(uVar2,1,1,lVar5);
      puVar6 = &UNK_11039d250;
      func_0x000107c613fc(&UNK_11039d250,0x58,7);
      *(undefined8 *)(puVar6 + 0x18) = 0;
      *(long *)(puVar6 + 0x10) = 0;
      *(undefined8 *)(puVar6 + 0x28) = uVar22;
      *(ulong *)(puVar6 + 0x20) = uVar19;
      *(undefined8 *)(puVar6 + 0x30) = uVar16;
      *(undefined8 *)(puVar6 + 0x38) = uVar3;
      *(undefined8 *)(puVar6 + 0x40) = uVar1;
      *(undefined8 *)(puVar6 + 0x48) = uVar4;
      *(undefined8 *)(puVar6 + 0x50) = uVar12;
      func_0x0001000abe04(uVar2,uVar14);
      (**(code **)(lVar15 + 0x30))(uVar14,1,lVar5);
      func_0x000107c61434(uVar3);
      func_0x000107c615f0(uVar19);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x98);
      if ((int)uVar14 == 1) {
        func_0x0001012b681c(uVar16,0x112d453c8,&UNK_10d90ac60);
        uVar19 = 0x3100;
      }
      else {
        func_0x000107c5fd08();
        (**(code **)(lVar15 + 8))(uVar16,lVar5);
        uVar19 = uVar19 & 0xff | 0x3100;
      }
      lVar17 = *(long *)(puVar6 + 0x10);
      if (lVar17 == 0) {
        lVar21 = 0;
        lVar20 = 0;
      }
      else {
        lVar20 = *(long *)(puVar6 + 0x18);
        lVar21 = lVar17;
        func_0x000107c614f0();
        func_0x000107c615f0(lVar17);
        func_0x000107c5fca8();
        func_0x000107c615e8(lVar17);
      }
      puVar7 = &UNK_11039d278;
      func_0x000107c613fc(&UNK_11039d278,0x20,7);
      *(undefined **)(puVar7 + 0x10) = &UNK_10d931170;
      *(undefined **)(puVar7 + 0x18) = puVar6;
      func_0x000107c6157c(puVar6);
      uVar14 = 0x112d6f768;
      func_0x0001000285a8(0x112d6f768,&UNK_10d931108);
      puVar11 = (undefined8 *)0x0;
      if (lVar20 != 0 || lVar21 != 0) {
        *(undefined8 *)(unaff_x22 + 0x10) = 0;
        *(undefined8 *)(unaff_x22 + 0x18) = 0;
        *(long *)(unaff_x22 + 0x20) = lVar21;
        *(long *)(unaff_x22 + 0x28) = lVar20;
        puVar11 = (undefined8 *)(unaff_x22 + 0x10);
      }
      puVar18 = puVar18 + 4;
      uVar16 = *(undefined8 *)(unaff_x22 + 0xa0);
      *(undefined8 *)(unaff_x22 + 0x30) = 1;
      *(undefined8 **)(unaff_x22 + 0x38) = puVar11;
      *(undefined8 *)(unaff_x22 + 0x40) = uVar9;
      func_0x000107c615bc(uVar19,unaff_x22 + 0x30,uVar14,&UNK_10d931178,puVar7);
      func_0x000107c61574(puVar6);
      func_0x000107c61574(uVar19);
      func_0x0001012b681c(uVar16,0x112d453c8,&UNK_10d90ac60);
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  uVar16 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar14 = **(undefined8 **)(unaff_x22 + 0x50);
  uVar9 = 0x112d6f768;
  func_0x0001000285a8(0x112d6f768,&UNK_10d931108);
  func_0x000107c5fcc4(uVar16,uVar14,uVar9);
  plVar8 = (long *)(ulong)*(uint *)(PTR___sScG8IteratorV4nextxSgyYaFTu_11034fc08 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa8) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_1012b20fc;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScG8IteratorV4nextxSgyYaF_11034fc00)
            (plVar8,unaff_x22 + 0x48,*(undefined8 *)(unaff_x22 + 0x80));
  return;
}



/* Entry: 1012b20fc; end: 1012b2143;  */

void FUN_1012b20fc(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012b2144,0,0);
  return;
}



/* Entry: 1012b2144; end: 1012b22d7;  */

void FUN_1012b2144(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong *puVar9;
  long unaff_x22;
  ulong uVar10;
  
  lVar8 = *(long *)(unaff_x22 + 0x48);
  if (lVar8 != 1) {
    if (lVar8 != 0) {
      puVar9 = *(ulong **)(unaff_x22 + 0x70);
      uVar10 = *puVar9;
      lVar4 = lVar8;
      func_0x000107c61174();
      uVar6 = uVar10;
      func_0x000107c61550();
      *puVar9 = uVar10;
      if ((((int)uVar6 == 0) || ((long)uVar10 < 0)) || (uVar6 = uVar10, (uVar10 >> 0x3e & 1) != 0))
      {
        if (uVar10 >> 0x3e == 0) {
          uVar5 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar5 = uVar10 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar10) {
            uVar5 = uVar10;
          }
          func_0x000107c60480(uVar5);
        }
        puVar9 = *(ulong **)(unaff_x22 + 0x70);
        uVar6 = 0;
        FUN_1012bf74c(0,uVar5 + 1,1,uVar10);
        *puVar9 = uVar6;
      }
      uVar5 = uVar6 & 0xffffffffffffff8;
      uVar10 = *(ulong *)(uVar5 + 0x10);
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar10) {
        puVar9 = *(ulong **)(unaff_x22 + 0x70);
        uVar5 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
        FUN_1012bf74c(uVar5,uVar10 + 1,1,uVar6);
        *puVar9 = uVar5;
        uVar5 = uVar5 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar5 + 0x10) = uVar10 + 1;
      *(long *)(uVar5 + uVar10 * 8 + 0x20) = lVar4;
      FUN_1012b6000(lVar8);
    }
    plVar7 = (long *)(ulong)*(uint *)(PTR___sScG8IteratorV4nextxSgyYaFTu_11034fc08 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xa8) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_1012b20fc;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScG8IteratorV4nextxSgyYaF_11034fc00)
              (plVar7,(long *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x80));
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  (**(code **)(*(long *)(unaff_x22 + 0x88) + 8))(uVar3,*(undefined8 *)(unaff_x22 + 0x80));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001012b2298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1012b22d8; end: 1012b237b;  */

void FUN_1012b22d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xe8) = param_1;
  func_0x000107c614f0(param_4);
  piVar3 = *(int **)(param_5 + 0x38);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xf0) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1012b237c;
                    /* WARNING: Could not recover jumptable at 0x0001012b2378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(plVar2,unaff_x22 + 0x10,param_6,param_7,0,param_4,param_5)
  ;
  return;
}



/* Entry: 1012b237c; end: 1012b2453;  */

void FUN_1012b237c(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xf8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xf0));
  if (unaff_x20 == 0) {
    uVar1 = 0x1012b23d8;
  }
  else {
    uVar1 = 0x1012b241c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 1012b2454; end: 1012b25db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012b2454(code *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_50;
  undefined8 uStack_48;
  
  uVar4 = unaff_x20[9];
  if (uVar4 != 0) {
    uVar1 = unaff_x20[8] & 0xffffffffffff;
    if ((uVar4 & 0x2000000000000000) != 0) {
      uVar1 = uVar4 >> 0x38 & 0xf;
    }
    if (((uVar1 != 0) && ((*(byte *)((long)unaff_x20 + 0x39) & 1) == 0)) && (unaff_x20[3] != 0)) {
      uVar6 = *unaff_x20;
      uVar5 = *(undefined8 *)(unaff_x20[3] + _DAT_112ff5e38);
      func_0x000107c6157c(uVar5);
      func_0x0001000d224c(&lStack_50);
      func_0x000107c61574(uVar5);
      if (lStack_50 != 0) {
        *(undefined1 *)((long)unaff_x20 + 0x39) = 1;
        puVar2 = &UNK_11039d048;
        func_0x000107c613fc(&UNK_11039d048,0x18,7);
        func_0x000107c61644(puVar2 + 0x10);
        puVar3 = &UNK_11039d2a0;
        func_0x000107c613fc(&UNK_11039d2a0,0x40,7);
        *(undefined **)(puVar3 + 0x10) = puVar2;
        *(code **)(puVar3 + 0x18) = param_1;
        *(undefined8 *)(puVar3 + 0x20) = param_2;
        *(undefined8 *)(puVar3 + 0x30) = uStack_48;
        *(long *)(puVar3 + 0x28) = lStack_50;
        *(undefined8 *)(puVar3 + 0x38) = uVar6;
        func_0x000107c6157c(param_2);
        func_0x000107c615f0(lStack_50);
        uVar5 = 3;
        func_0x0001001ca524(3,0,0x90,4,0,0,&UNK_10d931188,puVar3,PTR___sytN_11034f1b0 + 8);
        func_0x000107c615e8(lStack_50);
        func_0x000107c61574(puVar3);
        func_0x000107c61574(uVar5);
        return;
      }
    }
  }
  (*param_1)(PTR___swiftEmptyArrayStorage_11034f1c8);
  return;
}



/* Entry: 1012b25dc; end: 1012b2607;  */

void FUN_1012b25dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x250) = param_7;
  *(undefined8 *)(unaff_x22 + 0x248) = param_6;
  *(undefined8 *)(unaff_x22 + 0x240) = param_5;
  *(undefined8 *)(unaff_x22 + 0x238) = param_4;
  *(undefined8 *)(unaff_x22 + 0x230) = param_3;
  *(undefined8 *)(unaff_x22 + 0x228) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012b2608,0,0);
  return;
}



/* Entry: 1012b2608; end: 1012b28f7;  */

void FUN_1012b2608(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long unaff_x22;
  long lVar14;
  long lVar15;
  long lVar16;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar12 = *(long *)(unaff_x22 + 0x228);
  func_0x000107c61428(lVar12 + 0x10,unaff_x22 + 0x1f8,0,0);
  lVar12 = lVar12 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 600) = lVar12;
  if (lVar12 == 0) {
    func_0x000107c5fcec();
    lVar11 = lVar12;
    func_0x000107c5fce8();
    *(long *)(unaff_x22 + 0x260) = lVar11;
    func_0x000100eea164();
    func_0x000107c5fca8(lVar12,lVar11);
    pcVar2 = FUN_1012b28f8;
LAB_1012b28d4:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(pcVar2,lVar12,lVar11);
    return;
  }
  uVar4 = *(undefined8 *)(lVar12 + 0x40);
  uVar1 = *(undefined8 *)(lVar12 + 0x48);
  if ((*(byte *)(lVar12 + 0x90) & 1) == 0) {
    lVar11 = *(long *)(lVar12 + 0xa0);
    if ((((lVar11 == 0) || (lVar13 = *(long *)(lVar12 + 0x68), lVar13 == 0)) ||
        (lVar14 = *(long *)(lVar12 + 0x78), lVar14 == 0)) ||
       (lVar15 = *(long *)(lVar12 + 0x88), lVar15 == 0)) {
      lVar12 = 0;
      func_0x000107c5fcec();
      lVar11 = lVar12;
      func_0x000107c5fce8();
      *(long *)(unaff_x22 + 0x2d0) = lVar11;
      func_0x000100eea164();
      func_0x000107c5fca8(lVar12,lVar11);
      pcVar2 = FUN_1012b33a4;
      goto LAB_1012b28d4;
    }
    uVar7 = *(undefined8 *)(lVar12 + 0x98);
    uVar8 = *(undefined8 *)(lVar12 + 0x60);
    uVar9 = *(undefined8 *)(lVar12 + 0x70);
    lVar16 = *(long *)(unaff_x22 + 0x248);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x240);
    uVar10 = *(undefined8 *)(lVar12 + 0x80);
    *(undefined8 *)(unaff_x22 + 0x148) = 0x6573752d70616e73;
    *(undefined8 *)(unaff_x22 + 0x150) = 0xe900000000000072;
    *(undefined8 *)(unaff_x22 + 0x158) = uVar7;
    *(long *)(unaff_x22 + 0x160) = lVar11;
    *(undefined8 *)(unaff_x22 + 0x168) = uVar8;
    *(long *)(unaff_x22 + 0x170) = lVar13;
    *(undefined8 *)(unaff_x22 + 0x178) = uVar9;
    *(long *)(unaff_x22 + 0x180) = lVar14;
    *(undefined8 *)(unaff_x22 + 0x188) = uVar10;
    *(long *)(unaff_x22 + 400) = lVar15;
    *(undefined8 *)(unaff_x22 + 0x198) = uVar4;
    *(undefined8 *)(unaff_x22 + 0x1a0) = uVar1;
    func_0x000107c614f0(uVar5);
    piVar6 = *(int **)(lVar16 + 0x78);
    plVar3 = (long *)(ulong)(uint)piVar6[1];
    UNRECOVERED_JUMPTABLE = (code *)((long)*piVar6 + (long)piVar6);
    func_0x000107c61434(uVar1);
    func_0x000107c61434(lVar11);
    func_0x000107c61434(lVar13);
    func_0x000107c61434(lVar14);
    func_0x000107c61434(lVar15);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x2a0) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_1012b2ea0;
    uVar4 = *(undefined8 *)(unaff_x22 + 0x248);
    lVar12 = unaff_x22 + 0x148;
  }
  else {
    lVar11 = *(long *)(lVar12 + 0x58);
    if (((lVar11 == 0) || (lVar13 = *(long *)(lVar12 + 0x68), lVar13 == 0)) ||
       ((lVar14 = *(long *)(lVar12 + 0x78), lVar14 == 0 ||
        (lVar15 = *(long *)(lVar12 + 0x88), lVar15 == 0)))) {
      lVar12 = 0;
      func_0x000107c5fcec();
      lVar11 = lVar12;
      func_0x000107c5fce8();
      *(long *)(unaff_x22 + 0x298) = lVar11;
      func_0x000100eea164();
      func_0x000107c5fca8(lVar12,lVar11);
      pcVar2 = FUN_1012b2e40;
      goto LAB_1012b28d4;
    }
    uVar7 = *(undefined8 *)(lVar12 + 0x60);
    uVar8 = *(undefined8 *)(lVar12 + 0x70);
    lVar16 = *(long *)(unaff_x22 + 0x248);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x240);
    uVar9 = *(undefined8 *)(lVar12 + 0x80);
    *(undefined8 *)(unaff_x22 + 0x1a8) = *(undefined8 *)(lVar12 + 0x50);
    *(long *)(unaff_x22 + 0x1b0) = lVar11;
    *(undefined8 *)(unaff_x22 + 0x1b8) = uVar7;
    *(long *)(unaff_x22 + 0x1c0) = lVar13;
    *(undefined8 *)(unaff_x22 + 0x1c8) = uVar8;
    *(long *)(unaff_x22 + 0x1d0) = lVar14;
    *(undefined8 *)(unaff_x22 + 0x1d8) = uVar9;
    *(long *)(unaff_x22 + 0x1e0) = lVar15;
    *(undefined8 *)(unaff_x22 + 0x1e8) = uVar4;
    *(undefined8 *)(unaff_x22 + 0x1f0) = uVar1;
    func_0x000107c614f0(uVar5);
    piVar6 = *(int **)(lVar16 + 0x40);
    plVar3 = (long *)(ulong)(uint)piVar6[1];
    UNRECOVERED_JUMPTABLE = (code *)((long)*piVar6 + (long)piVar6);
    func_0x000107c61434(uVar1);
    func_0x000107c61434(lVar11);
    func_0x000107c61434(lVar13);
    func_0x000107c61434(lVar14);
    func_0x000107c61434(lVar15);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x268) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_1012b293c;
    uVar4 = *(undefined8 *)(unaff_x22 + 0x248);
    lVar12 = unaff_x22 + 0x1a8;
  }
                    /* WARNING: Could not recover jumptable at 0x0001012b2854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar3,lVar12,uVar5,uVar4);
  return;
}



/* Entry: 1012b28f8; end: 1012b293b;  */

void FUN_1012b28f8(void)

{
  code *pcVar1;
  long unaff_x22;
  
  pcVar1 = *(code **)(unaff_x22 + 0x230);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x260));
  (*pcVar1)(PTR___swiftEmptyArrayStorage_11034f1c8);
                    /* WARNING: Could not recover jumptable at 0x0001012b2938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1012b293c; end: 1012b29c3;  */

void FUN_1012b293c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x270) = param_1;
  *(undefined8 *)(lVar2 + 0x278) = param_3;
  *(long *)(lVar2 + 0x280) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x268));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x288) = param_2;
    FUN_1012b5aa0(lVar2 + 0x1a8);
    pcVar1 = FUN_1012b29c4;
  }
  else {
    FUN_1012b5aa0(lVar2 + 0x1a8);
    pcVar1 = FUN_1012b3748;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1012b29c4; end: 1012b2a2b;  */

void FUN_1012b29c4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x290) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012b2a2c,uVar1,uVar2);
  return;
}



/* Entry: 1012b2a2c; end: 1012b2a93;  */

void FUN_1012b2a2c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  long lVar4;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x288);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x278);
  lVar4 = *(long *)(unaff_x22 + 600);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x290));
  uVar1 = *(undefined8 *)(lVar4 + 0x48);
  *(undefined8 *)(lVar4 + 0x40) = uVar3;
  *(undefined8 *)(lVar4 + 0x48) = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012b2a94,0,0);
  return;
}



/* Entry: 1012b2a94; end: 1012b2e3f;  */

void FUN_1012b2a94(void)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long unaff_x22;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  uVar11 = 0;
  lVar15 = *(long *)(unaff_x22 + 0x270);
  uVar16 = *(ulong *)(lVar15 + 0x10);
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    puVar14 = (undefined8 *)(lVar15 + uVar11 * 0x20);
    do {
      puVar10 = puVar14;
      if (uVar16 == uVar11) {
        uVar12 = *(undefined8 *)(unaff_x22 + 0x278);
        func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x270));
        func_0x000107c6142c(uVar12);
        *(undefined8 *)(unaff_x22 + 0x2d8) = *(undefined8 *)(unaff_x22 + 0x280);
        *(undefined **)(unaff_x22 + 0x210) = PTR___swiftEmptySetSingleton_11034f1d8;
        puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
        lVar15 = *(long *)(puVar13 + 0x10);
        if (lVar15 == 0) goto LAB_1012b2cd8;
        lVar17 = 0;
        goto LAB_1012b2bd8;
      }
      if (*(ulong *)(lVar15 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1012b2e3c);
        (*pcVar3)();
      }
      uVar11 = uVar11 + 1;
      puVar14 = puVar10 + 4;
    } while (puVar10[7] != 0);
    uVar12 = puVar10[4];
    uVar19 = puVar10[5];
    uVar18 = puVar10[6];
    func_0x000107c61434(uVar19);
    puVar5 = puVar13;
    func_0x000107c61558();
    puStack_78 = puVar13;
    if (((ulong)puVar5 & 1) == 0) {
      func_0x0001012b58b0(0,*(long *)(puVar13 + 0x10) + 1,1);
    }
    uVar1 = *(ulong *)(puStack_78 + 0x10);
    if (*(ulong *)(puStack_78 + 0x18) >> 1 <= uVar1) {
      func_0x0001012b58b0(1 < *(ulong *)(puStack_78 + 0x18),uVar1 + 1,1);
    }
    *(ulong *)(puStack_78 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puStack_78 + uVar1 * 0x20 + 0x20) = uVar12;
    *(undefined8 *)(puStack_78 + uVar1 * 0x20 + 0x28) = uVar19;
    *(undefined8 *)(puStack_78 + uVar1 * 0x20 + 0x30) = uVar18;
    *(undefined8 *)(puStack_78 + uVar1 * 0x20 + 0x38) = 0;
    puVar13 = puStack_78;
  } while( true );
LAB_1012b2bd8:
  do {
    puVar14 = (undefined8 *)(puVar13 + lVar17 * 0x20 + 0x38);
    lVar17 = lVar17 + 1;
    while( true ) {
      if (*(ulong *)(puVar13 + 0x10) <= lVar17 - 1U) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1012b2e40);
        (*pcVar3)();
      }
      uVar12 = puVar14[-3];
      uVar18 = puVar14[-2];
      uVar19 = puVar14[-1];
      uVar2 = *puVar14;
      func_0x000107c61438(uVar18,2);
      ppuVar6 = &puStack_78;
      func_0x000100403b00(ppuVar6,uVar12,uVar18);
      func_0x000107c6142c(uStack_70);
      if (((ulong)ppuVar6 & 1) != 0) break;
      func_0x000107c6142c(uVar18);
      lVar17 = lVar17 + 1;
      puVar14 = puVar14 + 4;
      if (lVar17 - lVar15 == 1) goto LAB_1012b2cd8;
    }
    puVar7 = puVar5;
    func_0x000107c61558();
    if (((ulong)puVar7 & 1) == 0) {
      func_0x0001012b58b0(0,*(long *)(puVar5 + 0x10) + 1,1);
    }
    uVar11 = *(ulong *)(puVar5 + 0x10);
    if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar11) {
      func_0x0001012b58b0(1 < *(ulong *)(puVar5 + 0x18),uVar11 + 1,1);
    }
    *(ulong *)(puVar5 + 0x10) = uVar11 + 1;
    *(undefined8 *)(puVar5 + uVar11 * 0x20 + 0x20) = uVar12;
    *(undefined8 *)(puVar5 + uVar11 * 0x20 + 0x28) = uVar18;
    *(undefined8 *)(puVar5 + uVar11 * 0x20 + 0x30) = uVar19;
    *(undefined8 *)(puVar5 + uVar11 * 0x20 + 0x38) = uVar2;
  } while (lVar17 != lVar15);
LAB_1012b2cd8:
  *(undefined **)(unaff_x22 + 0x2e0) = puVar5;
  uVar12 = *(undefined8 *)(unaff_x22 + 0x250);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x240);
  func_0x000107c6142c(puVar13);
  *(undefined **)(unaff_x22 + 0x218) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x22 + 0x120) = puVar5;
  *(undefined8 *)(unaff_x22 + 0x130) = uVar18;
  *(undefined8 *)(unaff_x22 + 0x128) = uVar19;
  *(long *)(unaff_x22 + 0x138) = unaff_x22 + 0x218;
  *(undefined8 *)(unaff_x22 + 0x140) = uVar12;
  iVar4 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar4 == 0) {
    uVar12 = 0x112d6f768;
    func_0x0001000285a8(0x112d6f768,&UNK_10d931108);
    func_0x000107c615ac(unaff_x22 + 0x10,uVar12);
    *(long *)(unaff_x22 + 0x220) = unaff_x22 + 0x10;
    plVar8 = (long *)0xb0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x2f0) = plVar8;
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_1012b3488;
    lVar9 = *(long *)(unaff_x22 + 0x250);
    lVar17 = *(long *)(unaff_x22 + 0x248);
    lVar15 = *(long *)(unaff_x22 + 0x240);
    plVar8[0xe] = unaff_x22 + 0x218;
    plVar8[0xf] = lVar9;
    plVar8[0xc] = lVar15;
    plVar8[0xd] = lVar17;
    plVar8[10] = unaff_x22 + 0x220;
    plVar8[0xb] = (long)puVar5;
    lVar15 = 0x112d6f778;
    func_0x0001000285a8(0x112d6f778,&UNK_10d931118);
    plVar8[0x10] = lVar15;
    lVar15 = *(long *)(lVar15 + -8);
    plVar8[0x11] = lVar15;
    uVar11 = *(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar8[0x12] = uVar11;
    lVar15 = 0x112d453c8;
    func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
    uVar11 = *(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xf;
    uVar16 = uVar11 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar8[0x13] = uVar16;
    uVar11 = uVar11 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar8[0x14] = uVar11;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1012b38d4,0,0);
    return;
  }
  func_0x0001000285a8(0x112d6f768,&UNK_10d931108);
  plVar8 = (long *)(ulong)*(uint *)(
                                   PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lFTu_11034ff68
                                   + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x2e8) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = 0x1012b3434;
                    /* WARNING: Could not recover jumptable at 0x00010bdb929c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lF_11034ff60
  )();
  return;
}



/* Entry: 1012b2e40; end: 1012b2e9f;  */

void FUN_1012b2e40(void)

{
  long lVar1;
  code *pcVar2;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 600);
  pcVar2 = *(code **)(unaff_x22 + 0x230);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x298));
  *(undefined1 *)(lVar1 + 0x39) = 0;
  (*pcVar2)(PTR___swiftEmptyArrayStorage_11034f1c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1012b6e08,0,0);
  return;
}



/* Entry: 1012b2ea0; end: 1012b2f27;  */

void FUN_1012b2ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x2a8) = param_1;
  *(undefined8 *)(lVar2 + 0x2b0) = param_3;
  *(long *)(lVar2 + 0x2b8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x2a0));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x2c0) = param_2;
    FUN_1012b6980(lVar2 + 0x148);
    pcVar1 = FUN_1012b2f28;
  }
  else {
    FUN_1012b6980(lVar2 + 0x148);
    pcVar1 = FUN_1012b37b8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1012b2f28; end: 1012b2f8f;  */

void FUN_1012b2f28(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x2c8) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012b2f90,uVar1,uVar2);
  return;
}



/* Entry: 1012b2f90; end: 1012b2ff7;  */

void FUN_1012b2f90(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  long lVar4;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x2c0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x2b0);
  lVar4 = *(long *)(unaff_x22 + 600);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x2c8));
  uVar1 = *(undefined8 *)(lVar4 + 0x48);
  *(undefined8 *)(lVar4 + 0x40) = uVar3;
  *(undefined8 *)(lVar4 + 0x48) = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012b2ff8,0,0);
  return;
}



/* Entry: 1012b2ff8; end: 1012b33a3;  */

void FUN_1012b2ff8(void)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long unaff_x22;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  uVar11 = 0;
  lVar15 = *(long *)(unaff_x22 + 0x2a8);
  uVar16 = *(ulong *)(lVar15 + 0x10);
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    puVar14 = (undefined8 *)(lVar15 + uVar11 * 0x20);
    do {
      puVar10 = puVar14;
      if (uVar16 == uVar11) {
        uVar12 = *(undefined8 *)(unaff_x22 + 0x2b0);
        func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x2a8));
        func_0x000107c6142c(uVar12);
        *(undefined8 *)(unaff_x22 + 0x2d8) = *(undefined8 *)(unaff_x22 + 0x2b8);
        *(undefined **)(unaff_x22 + 0x210) = PTR___swiftEmptySetSingleton_11034f1d8;
        puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
        lVar15 = *(long *)(puVar13 + 0x10);
        if (lVar15 == 0) goto LAB_1012b323c;
        lVar17 = 0;
        goto LAB_1012b313c;
      }
      if (*(ulong *)(lVar15 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1012b33a0);
        (*pcVar3)();
      }
      uVar11 = uVar11 + 1;
      puVar14 = puVar10 + 4;
    } while (puVar10[7] != 0);
    uVar12 = puVar10[4];
    uVar19 = puVar10[5];
    uVar18 = puVar10[6];
    func_0x000107c61434(uVar19);
    puVar5 = puVar13;
    func_0x000107c61558();
    puStack_78 = puVar13;
    if (((ulong)puVar5 & 1) == 0) {
      func_0x0001012b58b0(0,*(long *)(puVar13 + 0x10) + 1,1);
    }
    uVar1 = *(ulong *)(puStack_78 + 0x10);
    if (*(ulong *)(puStack_78 + 0x18) >> 1 <= uVar1) {
      func_0x0001012b58b0(1 < *(ulong *)(puStack_78 + 0x18),uVar1 + 1,1);
    }
    *(ulong *)(puStack_78 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puStack_78 + uVar1 * 0x20 + 0x20) = uVar12;
    *(undefined8 *)(puStack_78 + uVar1 * 0x20 + 0x28) = uVar19;
    *(undefined8 *)(puStack_78 + uVar1 * 0x20 + 0x30) = uVar18;
    *(undefined8 *)(puStack_78 + uVar1 * 0x20 + 0x38) = 0;
    puVar13 = puStack_78;
  } while( true );
LAB_1012b313c:
  do {
    puVar14 = (undefined8 *)(puVar13 + lVar17 * 0x20 + 0x38);
    lVar17 = lVar17 + 1;
    while( true ) {
      if (*(ulong *)(puVar13 + 0x10) <= lVar17 - 1U) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1012b33a4);
        (*pcVar3)();
      }
      uVar12 = puVar14[-3];
      uVar18 = puVar14[-2];
      uVar19 = puVar14[-1];
      uVar2 = *puVar14;
      func_0x000107c61438(uVar18,2);
      ppuVar6 = &puStack_78;
      func_0x000100403b00(ppuVar6,uVar12,uVar18);
      func_0x000107c6142c(uStack_70);
      if (((ulong)ppuVar6 & 1) != 0) break;
      func_0x000107c6142c(uVar18);
      lVar17 = lVar17 + 1;
      puVar14 = puVar14 + 4;
      if (lVar17 - lVar15 == 1) goto LAB_1012b323c;
    }
    puVar7 = puVar5;
    func_0x000107c61558();
    if (((ulong)puVar7 & 1) == 0) {
      func_0x0001012b58b0(0,*(long *)(puVar5 + 0x10) + 1,1);
    }
    uVar11 = *(ulong *)(puVar5 + 0x10);
    if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar11) {
      func_0x0001012b58b0(1 < *(ulong *)(puVar5 + 0x18),uVar11 + 1,1);
    }
    *(ulong *)(puVar5 + 0x10) = uVar11 + 1;
    *(undefined8 *)(puVar5 + uVar11 * 0x20 + 0x20) = uVar12;
    *(undefined8 *)(puVar5 + uVar11 * 0x20 + 0x28) = uVar18;
    *(undefined8 *)(puVar5 + uVar11 * 0x20 + 0x30) = uVar19;
    *(undefined8 *)(puVar5 + uVar11 * 0x20 + 0x38) = uVar2;
  } while (lVar17 != lVar15);
LAB_1012b323c:
  *(undefined **)(unaff_x22 + 0x2e0) = puVar5;
  uVar12 = *(undefined8 *)(unaff_x22 + 0x250);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x240);
  func_0x000107c6142c(puVar13);
  *(undefined **)(unaff_x22 + 0x218) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x22 + 0x120) = puVar5;
  *(undefined8 *)(unaff_x22 + 0x130) = uVar18;
  *(undefined8 *)(unaff_x22 + 0x128) = uVar19;
  *(long *)(unaff_x22 + 0x138) = unaff_x22 + 0x218;
  *(undefined8 *)(unaff_x22 + 0x140) = uVar12;
  iVar4 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar4 == 0) {
    uVar12 = 0x112d6f768;
    func_0x0001000285a8(0x112d6f768,&UNK_10d931108);
    func_0x000107c615ac(unaff_x22 + 0x10,uVar12);
    *(long *)(unaff_x22 + 0x220) = unaff_x22 + 0x10;
    plVar8 = (long *)0xb0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x2f0) = plVar8;
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_1012b3488;
    lVar9 = *(long *)(unaff_x22 + 0x250);
    lVar17 = *(long *)(unaff_x22 + 0x248);
    lVar15 = *(long *)(unaff_x22 + 0x240);
    plVar8[0xe] = unaff_x22 + 0x218;
    plVar8[0xf] = lVar9;
    plVar8[0xc] = lVar15;
    plVar8[0xd] = lVar17;
    plVar8[10] = unaff_x22 + 0x220;
    plVar8[0xb] = (long)puVar5;
    lVar15 = 0x112d6f778;
    func_0x0001000285a8(0x112d6f778,&UNK_10d931118);
    plVar8[0x10] = lVar15;
    lVar15 = *(long *)(lVar15 + -8);
    plVar8[0x11] = lVar15;
    uVar11 = *(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar8[0x12] = uVar11;
    lVar15 = 0x112d453c8;
    func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
    uVar11 = *(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xf;
    uVar16 = uVar11 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar8[0x13] = uVar16;
    uVar11 = uVar11 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar8[0x14] = uVar11;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1012b38d4,0,0);
    return;
  }
  func_0x0001000285a8(0x112d6f768,&UNK_10d931108);
  plVar8 = (long *)(ulong)*(uint *)(
                                   PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lFTu_11034ff68
                                   + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x2e8) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = 0x1012b3434;
                    /* WARNING: Could not recover jumptable at 0x00010bdb929c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lF_11034ff60
  )();
  return;
}



/* Entry: 1012b33a4; end: 1012b3403;  */

void FUN_1012b33a4(void)

{
  long lVar1;
  code *pcVar2;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 600);
  pcVar2 = *(code **)(unaff_x22 + 0x230);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x2d0));
  *(undefined1 *)(lVar1 + 0x39) = 0;
  (*pcVar2)(PTR___swiftEmptyArrayStorage_11034f1c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012b3404,0,0);
  return;
}



/* Entry: 1012b3404; end: 1012b3487;  */

void FUN_1012b3404(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 600));
                    /* WARNING: Could not recover jumptable at 0x0001012b3430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1012b3488; end: 1012b34fb;  */

void FUN_1012b3488(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x2f0));
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScG22awaitAllRemainingTasksyyYaFTu_11034fbe0 + 4);
  func_0x000107c615b8();
  *(long **)(lVar3 + 0x2f8) = plVar1;
  func_0x0001000285a8(0x112d6f770,&UNK_10d931110);
  *plVar1 = lVar2;
  plVar1[1] = (long)FUN_1012b34fc;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScG22awaitAllRemainingTasksyyYaF_11034fbd8)();
  return;
}



/* Entry: 1012b34fc; end: 1012b358b;  */

void FUN_1012b34fc(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x2f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1012b3544,0,0);
  return;
}



/* Entry: 1012b358c; end: 1012b3607;  */

void FUN_1012b358c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  FUN_1012af830(unaff_x22 + 0x218);
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x300) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012b3608,uVar1,uVar2);
  return;
}



/* Entry: 1012b3608; end: 1012b3667;  */

void FUN_1012b3608(void)

{
  long lVar1;
  code *pcVar2;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 600);
  pcVar2 = *(code **)(unaff_x22 + 0x230);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x300));
  *(undefined1 *)(lVar1 + 0x39) = 0;
  *(undefined8 *)(unaff_x22 + 0x308) = *(undefined8 *)(unaff_x22 + 0x218);
  (*pcVar2)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012b3668,0,0);
  return;
}



/* Entry: 1012b3668; end: 1012b36ab;  */

void FUN_1012b3668(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x308);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 600));
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x210));
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001012b36a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1012b36ac; end: 1012b370b;  */

void FUN_1012b36ac(void)

{
  long lVar1;
  code *pcVar2;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 600);
  pcVar2 = *(code **)(unaff_x22 + 0x230);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x318));
  *(undefined1 *)(lVar1 + 0x39) = 0;
  (*pcVar2)(PTR___swiftEmptyArrayStorage_11034f1c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012b370c,0,0);
  return;
}



/* Entry: 1012b370c; end: 1012b3747;  */

void FUN_1012b370c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 600);
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x310));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001012b3744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1012b3748; end: 1012b37b7;  */

void FUN_1012b3748(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x310) = *(undefined8 *)(unaff_x22 + 0x280);
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x318) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012b36ac,uVar1,uVar2);
  return;
}



/* Entry: 1012b37b8; end: 1012b3827;  */

void FUN_1012b37b8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x310) = *(undefined8 *)(unaff_x22 + 0x2b8);
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x318) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012b36ac,uVar1,uVar2);
  return;
}



/* Entry: 1012b3828; end: 1012b38d3;  */

void FUN_1012b3828(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_6;
  *(undefined8 *)(unaff_x22 + 0x78) = param_7;
  *(undefined8 *)(unaff_x22 + 0x60) = param_4;
  *(undefined8 *)(unaff_x22 + 0x68) = param_5;
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = param_3;
  lVar3 = 0x112d6f778;
  func_0x0001000285a8(0x112d6f778,&UNK_10d931118);
  *(long *)(unaff_x22 + 0x80) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x88) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x90) = uVar1;
  lVar3 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar1 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x98) = uVar2;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa0) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012b38d4,0,0);
  return;
}



/* Entry: 1012b38d4; end: 1012b3bc3;  */

void FUN_1012b38d4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long unaff_x22;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  
  lVar15 = *(long *)(unaff_x22 + 0x58);
  lVar13 = *(long *)(lVar15 + 0x10);
  if (lVar13 != 0) {
    uVar9 = **(undefined8 **)(unaff_x22 + 0x50);
    lVar5 = 0;
    func_0x000107c5fd0c();
    puVar18 = (undefined8 *)(lVar15 + 0x38);
    lVar15 = *(long *)(lVar5 + -8);
    pcVar10 = *(code **)(lVar15 + 0x38);
    do {
      uVar14 = *(undefined8 *)(unaff_x22 + 0x98);
      uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar16 = puVar18[-3];
      uVar3 = puVar18[-2];
      uVar1 = puVar18[-1];
      uVar4 = *puVar18;
      uVar22 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar19 = *(ulong *)(unaff_x22 + 0x60);
      (*pcVar10)(uVar2,1,1,lVar5);
      puVar6 = &UNK_11039d2c8;
      func_0x000107c613fc(&UNK_11039d2c8,0x58,7);
      *(undefined8 *)(puVar6 + 0x18) = 0;
      *(long *)(puVar6 + 0x10) = 0;
      *(undefined8 *)(puVar6 + 0x28) = uVar22;
      *(ulong *)(puVar6 + 0x20) = uVar19;
      *(undefined8 *)(puVar6 + 0x30) = uVar16;
      *(undefined8 *)(puVar6 + 0x38) = uVar3;
      *(undefined8 *)(puVar6 + 0x40) = uVar1;
      *(undefined8 *)(puVar6 + 0x48) = uVar4;
      *(undefined8 *)(puVar6 + 0x50) = uVar12;
      func_0x0001000abe04(uVar2,uVar14);
      (**(code **)(lVar15 + 0x30))(uVar14,1,lVar5);
      func_0x000107c61434(uVar3);
      func_0x000107c615f0(uVar19);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x98);
      if ((int)uVar14 == 1) {
        func_0x0001012b681c(uVar16,0x112d453c8,&UNK_10d90ac60);
        uVar19 = 0x3100;
      }
      else {
        func_0x000107c5fd08();
        (**(code **)(lVar15 + 8))(uVar16,lVar5);
        uVar19 = uVar19 & 0xff | 0x3100;
      }
      lVar17 = *(long *)(puVar6 + 0x10);
      if (lVar17 == 0) {
        lVar21 = 0;
        lVar20 = 0;
      }
      else {
        lVar20 = *(long *)(puVar6 + 0x18);
        lVar21 = lVar17;
        func_0x000107c614f0();
        func_0x000107c615f0(lVar17);
        func_0x000107c5fca8();
        func_0x000107c615e8(lVar17);
      }
      puVar7 = &UNK_11039d2f0;
      func_0x000107c613fc(&UNK_11039d2f0,0x20,7);
      *(undefined **)(puVar7 + 0x10) = &UNK_10d9311a8;
      *(undefined **)(puVar7 + 0x18) = puVar6;
      func_0x000107c6157c(puVar6);
      uVar14 = 0x112d6f768;
      func_0x0001000285a8(0x112d6f768,&UNK_10d931108);
      puVar11 = (undefined8 *)0x0;
      if (lVar20 != 0 || lVar21 != 0) {
        *(undefined8 *)(unaff_x22 + 0x10) = 0;
        *(undefined8 *)(unaff_x22 + 0x18) = 0;
        *(long *)(unaff_x22 + 0x20) = lVar21;
        *(long *)(unaff_x22 + 0x28) = lVar20;
        puVar11 = (undefined8 *)(unaff_x22 + 0x10);
      }
      puVar18 = puVar18 + 4;
      uVar16 = *(undefined8 *)(unaff_x22 + 0xa0);
      *(undefined8 *)(unaff_x22 + 0x30) = 1;
      *(undefined8 **)(unaff_x22 + 0x38) = puVar11;
      *(undefined8 *)(unaff_x22 + 0x40) = uVar9;
      func_0x000107c615bc(uVar19,unaff_x22 + 0x30,uVar14,&UNK_10d9311b0,puVar7);
      func_0x000107c61574(puVar6);
      func_0x000107c61574(uVar19);
      func_0x0001012b681c(uVar16,0x112d453c8,&UNK_10d90ac60);
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  uVar16 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar14 = **(undefined8 **)(unaff_x22 + 0x50);
  uVar9 = 0x112d6f768;
  func_0x0001000285a8(0x112d6f768,&UNK_10d931108);
  func_0x000107c5fcc4(uVar16,uVar14,uVar9);
  plVar8 = (long *)(ulong)*(uint *)(PTR___sScG8IteratorV4nextxSgyYaFTu_11034fc08 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa8) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_1012b3bc4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScG8IteratorV4nextxSgyYaF_11034fc00)
            (plVar8,unaff_x22 + 0x48,*(undefined8 *)(unaff_x22 + 0x80));
  return;
}



/* Entry: 1012b3bc4; end: 1012b3c0b;  */

void FUN_1012b3bc4(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012b3c0c,0,0);
  return;
}



/* Entry: 1012b3c0c; end: 1012b3d9f;  */

void FUN_1012b3c0c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong *puVar9;
  long unaff_x22;
  ulong uVar10;
  
  lVar8 = *(long *)(unaff_x22 + 0x48);
  if (lVar8 != 1) {
    if (lVar8 != 0) {
      puVar9 = *(ulong **)(unaff_x22 + 0x70);
      uVar10 = *puVar9;
      lVar4 = lVar8;
      func_0x000107c61174();
      uVar6 = uVar10;
      func_0x000107c61550();
      *puVar9 = uVar10;
      if ((((int)uVar6 == 0) || ((long)uVar10 < 0)) || (uVar6 = uVar10, (uVar10 >> 0x3e & 1) != 0))
      {
        if (uVar10 >> 0x3e == 0) {
          uVar5 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar5 = uVar10 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar10) {
            uVar5 = uVar10;
          }
          func_0x000107c60480(uVar5);
        }
        puVar9 = *(ulong **)(unaff_x22 + 0x70);
        uVar6 = 0;
        FUN_1012bf74c(0,uVar5 + 1,1,uVar10);
        *puVar9 = uVar6;
      }
      uVar5 = uVar6 & 0xffffffffffffff8;
      uVar10 = *(ulong *)(uVar5 + 0x10);
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar10) {
        puVar9 = *(ulong **)(unaff_x22 + 0x70);
        uVar5 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
        FUN_1012bf74c(uVar5,uVar10 + 1,1,uVar6);
        *puVar9 = uVar5;
        uVar5 = uVar5 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar5 + 0x10) = uVar10 + 1;
      *(long *)(uVar5 + uVar10 * 8 + 0x20) = lVar4;
      FUN_1012b6000(lVar8);
    }
    plVar7 = (long *)(ulong)*(uint *)(PTR___sScG8IteratorV4nextxSgyYaFTu_11034fc08 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xa8) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_1012b3bc4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScG8IteratorV4nextxSgyYaF_11034fc00)
              (plVar7,(long *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x80));
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  (**(code **)(*(long *)(unaff_x22 + 0x88) + 8))(uVar3,*(undefined8 *)(unaff_x22 + 0x80));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001012b3d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1012b3da0; end: 1012b3e43;  */

void FUN_1012b3da0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xe8) = param_1;
  func_0x000107c614f0(param_4);
  piVar3 = *(int **)(param_5 + 0x38);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xf0) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1012b3e44;
                    /* WARNING: Could not recover jumptable at 0x0001012b3e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(plVar2,unaff_x22 + 0x10,param_6,param_7,0,param_4,param_5)
  ;
  return;
}



/* Entry: 1012b3e44; end: 1012b3f43;  */

void FUN_1012b3e44(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xf8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xf0));
  if (unaff_x20 == 0) {
    uVar1 = 0x1012b6e24;
  }
  else {
    uVar1 = 0x1012b6e18;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 1012b3f44; end: 1012b3f6f;  */

long FUN_1012b3f44(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1012b3f70; end: 1012b3fdb;  */

/* WARNING: Possible PIC construction at 0x0001012b3f9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012b3fac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012b3fa0) */
/* WARNING: Removing unreachable block (ram,0x0001012b3fb0) */

void FUN_1012b3f70(void)

{
  long in_stack_00000008;
  undefined8 in_stack_00000018;
  
  if (-1 < in_stack_00000008) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(in_stack_00000018);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1012b3fdc; end: 1012b401b;  */

void FUN_1012b3fdc(undefined8 *param_1)

{
  FUN_1012aeb24(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],param_1[8],param_1[9],param_1[10],param_1[0xb],param_1[0xc],param_1[0xd])
  ;
  return;
}



/* Entry: 1012b401c; end: 1012b41d3;  */

undefined8 * FUN_1012b401c(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uVar14;
  
  uVar1 = *param_2;
  uVar8 = param_2[1];
  uVar2 = param_2[2];
  uVar9 = param_2[3];
  uVar3 = param_2[4];
  uVar10 = param_2[5];
  uVar4 = param_2[6];
  uVar11 = param_2[7];
  uVar5 = param_2[8];
  uVar12 = param_2[9];
  uVar6 = param_2[10];
  uVar13 = param_2[0xb];
  uVar7 = param_2[0xc];
  uVar14 = param_2[0xd];
  FUN_1012b3f70(uVar1,uVar8,uVar2,uVar9,uVar3,uVar10,uVar4,uVar11,uVar5,uVar12,uVar6,uVar13,uVar7,
                uVar14);
  *param_1 = uVar1;
  param_1[1] = uVar8;
  param_1[2] = uVar2;
  param_1[3] = uVar9;
  param_1[4] = uVar3;
  param_1[5] = uVar10;
  param_1[6] = uVar4;
  param_1[7] = uVar11;
  param_1[8] = uVar5;
  param_1[9] = uVar12;
  param_1[10] = uVar6;
  param_1[0xb] = uVar13;
  param_1[0xc] = uVar7;
  param_1[0xd] = uVar14;
  return param_1;
}



/* Entry: 1012b41d4; end: 1012b41f7;  */

void FUN_1012b41d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  uVar4 = param_2[9];
  uVar3 = param_2[8];
  uVar5 = param_2[10];
  uVar7 = param_2[0xd];
  uVar6 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar5;
  param_1[0xd] = uVar7;
  param_1[0xc] = uVar6;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  return;
}



/* Entry: 1012b41f8; end: 1012b426b;  */

undefined8 * FUN_1012b41f8(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar9 = *param_1;
  uVar1 = param_1[1];
  uVar5 = param_1[2];
  uVar2 = param_1[3];
  uVar6 = param_1[4];
  uVar3 = param_1[5];
  uVar7 = param_1[6];
  uVar10 = param_1[7];
  uVar12 = param_1[9];
  uVar11 = param_1[8];
  uVar14 = param_1[0xb];
  uVar13 = param_1[10];
  uVar4 = param_1[0xc];
  uVar8 = param_1[0xd];
  uVar15 = *param_2;
  uVar17 = param_2[3];
  uVar16 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar15;
  param_1[3] = uVar17;
  param_1[2] = uVar16;
  uVar15 = param_2[4];
  uVar17 = param_2[7];
  uVar16 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar15;
  param_1[7] = uVar17;
  param_1[6] = uVar16;
  uVar15 = param_2[8];
  uVar17 = param_2[0xb];
  uVar16 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar15;
  param_1[0xb] = uVar17;
  param_1[10] = uVar16;
  uVar15 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar15;
  FUN_1012aeb24(uVar9,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar10,uVar11,uVar12,uVar13,uVar14,uVar4,
                uVar8);
  return param_1;
}



/* Entry: 1012b426c; end: 1012b4387;  */

int FUN_1012b426c(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1c] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = (uint)(*(ulong *)(param_1 + 0x12) >> 1);
  uVar2 = 0xffffffff;
  if (0x80000000 < uVar1) {
    uVar2 = ~uVar1;
  }
  return uVar2 + 1;
}



/* Entry: 1012b4388; end: 1012b43cb;  */

void FUN_1012b4388(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1012b43cc; end: 1012b43e7;  */

void FUN_1012b43cc(long param_1,long param_2)

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



/* Entry: 1012b43e8; end: 1012b43ff;  */

void FUN_1012b43e8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1012af938(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18))
  ;
  return;
}



/* Entry: 1012b4400; end: 1012b446f;  */

void FUN_1012b4400(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  func_0x000107c61550();
  *unaff_x20 = uVar3;
  if ((((int)uVar1 == 0) || ((long)uVar3 < 0)) || ((uVar3 >> 0x3e & 1) != 0)) {
    if (uVar3 >> 0x3e == 0) {
      uVar1 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar1 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar1 = uVar3;
      }
      func_0x000107c60480(uVar1);
    }
    uVar2 = 0;
    FUN_1012bf74c(0,uVar1 + 1,1,uVar3);
    *unaff_x20 = uVar2;
  }
  return;
}



/* Entry: 1012b4470; end: 1012b4c53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012b4470(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  long unaff_x21;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar8 = param_3[1];
  if (0 < lVar8) {
    lVar7 = 0;
    do {
      lVar17 = lVar7 + 1;
      lVar14 = lVar17;
      if (lVar17 < lVar8) {
        lVar12 = *param_3;
        uVar3 = *(ulong *)(lVar12 + lVar17 * 8);
        uVar15 = *(undefined8 *)(lVar12 + lVar7 * 8);
        func_0x000107c61174();
        func_0x000107c61174(uVar15);
        uVar13 = uVar3;
        FUN_1012b6010(uVar3,uVar15);
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar15);
        lVar14 = lVar7 + 2;
        if (lVar14 < lVar8) {
          plVar16 = (long *)(lVar12 + lVar7 * 8 + 0x10);
          lVar17 = lVar14;
          do {
            lVar14 = plVar16[-1];
            lVar12 = *plVar16;
            plVar18 = (long *)(lVar12 + _DAT_112d6f630);
            lStack_c8 = plVar18[3];
            lStack_d0 = plVar18[2];
            lStack_b8 = plVar18[5];
            lVar10 = plVar18[4];
            lVar19 = plVar18[1];
            lVar24 = *plVar18;
            lVar20 = plVar18[0xb];
            lStack_90 = plVar18[10];
            lVar22 = plVar18[0xd];
            lStack_80 = plVar18[0xc];
            lStack_158 = plVar18[7];
            lVar21 = plVar18[6];
            lStack_98 = plVar18[9];
            lStack_a0 = plVar18[8];
            lStack_e0 = lVar24;
            lStack_d8 = lVar19;
            lStack_c0 = lVar10;
            lStack_b0 = lVar21;
            lStack_a8 = lStack_158;
            lStack_88 = lVar20;
            lStack_78 = lVar22;
            if (lStack_98 < 0) {
              func_0x000107c61174(lVar12);
              func_0x000107c61174(lVar14);
              FUN_1012ac38c(&lStack_e0,&lStack_150);
              func_0x000107c40834();
              func_0x000107c61180();
              if (lVar24 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1012b4c48);
                (*pcVar2)();
              }
              lVar10 = lVar24;
              func_0x000107c5bbf4();
              func_0x000107c61180();
              func_0x000107c61170(lVar24);
              if (lVar10 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1012b4c44);
                (*pcVar2)();
              }
              lStack_158 = lVar10;
              func_0x000107c51b2c();
              FUN_1012a9dfc(&lStack_e0);
              func_0x000107c61170(lVar10);
            }
            else {
              func_0x000107c61174(lVar12);
              func_0x000107c61174(lVar14);
              FUN_1012ac38c(&lStack_e0,&lStack_150);
              func_0x000107c6142c(lVar19);
              func_0x000107c6142c(lVar10);
              func_0x000107c6142c(lVar21);
              func_0x000107c6142c(lVar22);
              func_0x000107c6142c(lVar20);
            }
            plVar18 = (long *)(lVar14 + _DAT_112d6f630);
            lVar20 = plVar18[0xb];
            lStack_100 = plVar18[10];
            lStack_e8 = plVar18[0xd];
            lStack_f0 = plVar18[0xc];
            lVar24 = plVar18[7];
            lStack_120 = plVar18[6];
            lStack_108 = plVar18[9];
            lStack_110 = plVar18[8];
            lStack_138 = plVar18[3];
            lStack_140 = plVar18[2];
            lStack_128 = plVar18[5];
            lStack_130 = plVar18[4];
            lStack_148 = plVar18[1];
            lVar10 = *plVar18;
            lStack_150 = lVar10;
            lStack_118 = lVar24;
            lStack_f8 = lVar20;
            if (lStack_108 < 0) {
              func_0x000107c61174();
              func_0x000107c40834();
              func_0x000107c61180();
              if (lVar10 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1012b4c40);
                (*pcVar2)();
              }
              lVar20 = lVar10;
              func_0x000107c5bbf4();
              func_0x000107c61180();
              func_0x000107c61170(lVar10);
              if (lVar20 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1012b4c3c);
                (*pcVar2)();
              }
              lVar24 = lVar20;
              func_0x000107c51b2c();
              FUN_1012a9dfc(&lStack_150);
              func_0x000107c61170(lVar12);
              func_0x000107c61170(lVar14);
              func_0x000107c61170(lVar20);
            }
            else {
              func_0x000107c61434(lVar20);
              func_0x000107c61170(lVar12);
              func_0x000107c61170(lVar14);
              func_0x000107c6142c(lVar20);
            }
            lVar14 = lVar17;
            if ((((uint)uVar13 ^ (uint)(lVar24 <= lStack_158)) & 1) == 0) break;
            plVar16 = plVar16 + 1;
            lVar17 = lVar17 + 1;
            lVar14 = lVar8;
          } while (lVar8 != lVar17);
          lVar17 = lVar17 + -1;
        }
        if ((uVar13 & 1) != 0) {
          if (lVar14 < lVar7) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012b4c08);
            (*pcVar2)();
          }
          if (lVar7 <= lVar17) {
            lVar12 = *param_3;
            puVar9 = (undefined8 *)(lVar12 + lVar14 * 8);
            puVar11 = (undefined8 *)(lVar12 + lVar7 * 8);
            lVar17 = lVar14;
            lVar8 = lVar7;
            do {
              puVar9 = puVar9 + -1;
              lVar17 = lVar17 + -1;
              if (lVar8 != lVar17) {
                if (lVar12 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1012b4c38);
                  (*pcVar2)();
                }
                uVar15 = *puVar11;
                *puVar11 = *puVar9;
                *puVar9 = uVar15;
              }
              lVar8 = lVar8 + 1;
              puVar11 = puVar11 + 1;
            } while (lVar8 < lVar17);
          }
        }
      }
      lVar8 = param_3[1];
      lVar17 = lVar14;
      if (lVar14 < lVar8) {
        if (SBORROW8(lVar14,lVar7)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1012b4c04);
          (*pcVar2)();
        }
        if (lVar14 - lVar7 < param_4) {
          if (SCARRY8(lVar7,param_4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012b4c0c);
            (*pcVar2)();
          }
          lVar12 = lVar7 + param_4;
          if (lVar8 <= lVar7 + param_4) {
            lVar12 = lVar8;
          }
          if (lVar12 < lVar7) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012b4c10);
            (*pcVar2)();
          }
          if (lVar14 != lVar12) {
            lVar10 = *param_3;
            plVar16 = (long *)(lVar10 + lVar14 * 8);
            lVar8 = (lVar7 - lVar14) + 1;
            plVar18 = plVar16;
            lVar24 = lVar8;
LAB_1012b47ec:
            do {
              lVar17 = plVar16[-1];
              lVar20 = *plVar16;
              plVar1 = (long *)(lVar20 + _DAT_112d6f630);
              lStack_c8 = plVar1[3];
              lStack_d0 = plVar1[2];
              lStack_b8 = plVar1[5];
              lVar19 = plVar1[4];
              lVar25 = plVar1[1];
              lVar22 = *plVar1;
              lVar21 = plVar1[0xb];
              lStack_90 = plVar1[10];
              lVar23 = plVar1[0xd];
              lStack_80 = plVar1[0xc];
              lStack_158 = plVar1[7];
              lVar26 = plVar1[6];
              lStack_98 = plVar1[9];
              lStack_a0 = plVar1[8];
              lStack_e0 = lVar22;
              lStack_d8 = lVar25;
              lStack_c0 = lVar19;
              lStack_b0 = lVar26;
              lStack_a8 = lStack_158;
              lStack_88 = lVar21;
              lStack_78 = lVar23;
              if (lStack_98 < 0) {
                func_0x000107c61174(lVar20);
                func_0x000107c61174(lVar17);
                FUN_1012ac38c(&lStack_e0,&lStack_150);
                func_0x000107c40834();
                func_0x000107c61180();
                if (lVar22 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1012b4c2c);
                  (*pcVar2)();
                }
                lVar19 = lVar22;
                func_0x000107c5bbf4();
                func_0x000107c61180();
                func_0x000107c61170(lVar22);
                if (lVar19 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1012b4c28);
                  (*pcVar2)();
                }
                lStack_158 = lVar19;
                func_0x000107c51b2c();
                FUN_1012a9dfc(&lStack_e0);
                func_0x000107c61170(lVar19);
              }
              else {
                func_0x000107c61174(lVar20);
                func_0x000107c61174(lVar17);
                FUN_1012ac38c(&lStack_e0,&lStack_150);
                func_0x000107c6142c(lVar25);
                func_0x000107c6142c(lVar19);
                func_0x000107c6142c(lVar26);
                func_0x000107c6142c(lVar23);
                func_0x000107c6142c(lVar21);
              }
              plVar1 = (long *)(lVar17 + _DAT_112d6f630);
              lVar21 = plVar1[0xb];
              lStack_100 = plVar1[10];
              lStack_e8 = plVar1[0xd];
              lStack_f0 = plVar1[0xc];
              lVar22 = plVar1[7];
              lStack_120 = plVar1[6];
              lStack_108 = plVar1[9];
              lStack_110 = plVar1[8];
              lStack_138 = plVar1[3];
              lStack_140 = plVar1[2];
              lStack_128 = plVar1[5];
              lStack_130 = plVar1[4];
              lStack_148 = plVar1[1];
              lVar19 = *plVar1;
              lStack_150 = lVar19;
              lStack_118 = lVar22;
              lStack_f8 = lVar21;
              if (lStack_108 < 0) {
                func_0x000107c61174();
                func_0x000107c40834();
                func_0x000107c61180();
                if (lVar19 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1012b4c34);
                  (*pcVar2)();
                }
                lVar21 = lVar19;
                func_0x000107c5bbf4();
                func_0x000107c61180();
                func_0x000107c61170(lVar19);
                if (lVar21 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1012b4c30);
                  (*pcVar2)();
                }
                lVar22 = lVar21;
                func_0x000107c51b2c();
                FUN_1012a9dfc(&lStack_150);
                func_0x000107c61170(lVar20);
                func_0x000107c61170(lVar17);
                func_0x000107c61170(lVar21);
              }
              else {
                func_0x000107c61434(lVar21);
                func_0x000107c61170(lVar20);
                func_0x000107c61170(lVar17);
                func_0x000107c6142c(lVar21);
              }
              if (lStack_158 < lVar22) {
                if (lVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1012b4c14);
                  (*pcVar2)();
                }
                lVar17 = plVar16[-1];
                plVar16[-1] = *plVar16;
                *plVar16 = lVar17;
                if (lVar8 != 0) {
                  lVar8 = lVar8 + 1;
                  plVar16 = plVar16 + -1;
                  goto LAB_1012b47ec;
                }
              }
              lVar14 = lVar14 + 1;
              plVar16 = plVar18 + 1;
              lVar8 = lVar24 + -1;
              lVar17 = lVar12;
              plVar18 = plVar16;
              lVar24 = lVar8;
            } while (lVar14 != lVar12);
          }
        }
      }
      puVar6 = puStack_58;
      if (lVar17 < lVar7) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1012b4bf8);
        (*pcVar2)();
      }
      puVar4 = puStack_58;
      func_0x000107c61558();
      puVar5 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar13 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar13) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        func_0x0001000a91e0(puVar6,uVar13 + 1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar13 + 1;
      *(long *)(puVar6 + uVar13 * 0x10 + 0x20) = lVar7;
      *(long *)(puVar6 + uVar13 * 0x10 + 0x28) = lVar17;
      puStack_58 = puVar6;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1012b4c4c);
        (*pcVar2)();
      }
      FUN_1012b4f10(&puStack_58,*param_1,param_3);
      puVar6 = puStack_58;
      if (unaff_x21 != 0) goto LAB_1012b4bc8;
      lVar8 = param_3[1];
      lVar7 = lVar17;
    } while (lVar17 < lVar8);
  }
  puVar6 = puStack_58;
  lVar8 = *param_1;
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1012b4c54);
    (*pcVar2)();
  }
  puVar4 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar4 & 1) == 0) {
    FUN_100e06d54();
  }
  uVar13 = *(ulong *)(puVar6 + 0x10);
  while (puStack_58 = puVar6, 1 < uVar13) {
    lVar7 = *param_3;
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1012b4c50);
      (*pcVar2)();
    }
    lVar12 = uVar13 - 1;
    lVar14 = *(long *)(puVar6 + uVar13 * 0x10);
    lVar17 = *(long *)(puVar6 + lVar12 * 0x10 + 0x28);
    FUN_1012b5178(lVar7 + lVar14 * 8,lVar7 + *(long *)(puVar6 + lVar12 * 0x10 + 0x20) * 8,
                  lVar7 + lVar17 * 8,lVar8);
    if (unaff_x21 != 0) break;
    if (lVar17 < lVar14) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1012b4bfc);
      (*pcVar2)();
    }
    puVar4 = puVar6;
    func_0x000107c61558();
    if (((ulong)puVar4 & 1) == 0) {
      FUN_100e06d54();
    }
    if (*(ulong *)(puVar6 + 0x10) <= uVar13 - 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1012b4c00);
      (*pcVar2)();
    }
    *(long *)(puVar6 + uVar13 * 0x10) = lVar14;
    *(long *)((long)(puVar6 + uVar13 * 0x10) + 8) = lVar17;
    puStack_58 = puVar6;
    func_0x0001000a97cc(lVar12);
    puVar6 = puStack_58;
    uVar13 = *(ulong *)(puStack_58 + 0x10);
  }
LAB_1012b4bc8:
  func_0x000107c6142c(puVar6);
  return;
}



/* Entry: 1012b4c54; end: 1012b4f0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012b4c54(long param_1,long param_2,long param_3,long *param_4)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_58;
  
  if (param_3 != param_2) {
    lVar3 = *param_4;
    plVar5 = (long *)(lVar3 + param_3 * 8 + -8);
    lVar4 = (param_1 - param_3) + 1;
    do {
      lVar7 = *(long *)(lVar3 + param_3 * 8);
      plVar6 = plVar5;
      lVar9 = lVar4;
      while( true ) {
        lVar8 = *plVar6;
        plVar1 = (long *)(lVar7 + _DAT_112d6f630);
        lVar10 = plVar1[0xb];
        lStack_90 = plVar1[10];
        lVar11 = plVar1[0xd];
        lStack_80 = plVar1[0xc];
        lStack_58 = plVar1[7];
        lVar12 = plVar1[6];
        lStack_98 = plVar1[9];
        lStack_a0 = plVar1[8];
        lStack_c8 = plVar1[3];
        lStack_d0 = plVar1[2];
        lStack_b8 = plVar1[5];
        lVar14 = plVar1[4];
        lVar15 = plVar1[1];
        lVar13 = *plVar1;
        lStack_e0 = lVar13;
        lStack_d8 = lVar15;
        lStack_c0 = lVar14;
        lStack_b0 = lVar12;
        lStack_a8 = lStack_58;
        lStack_88 = lVar10;
        lStack_78 = lVar11;
        if (lStack_98 < 0) {
          func_0x000107c61174(lVar7);
          func_0x000107c61174(lVar8);
          FUN_1012ac38c(&lStack_e0,&lStack_150);
          func_0x000107c40834();
          func_0x000107c61180();
          if (lVar13 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012b4f08);
            (*pcVar2)();
          }
          lVar10 = lVar13;
          func_0x000107c5bbf4();
          func_0x000107c61180();
          func_0x000107c61170(lVar13);
          if (lVar10 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012b4f04);
            (*pcVar2)();
          }
          lStack_58 = lVar10;
          func_0x000107c51b2c();
          FUN_1012a9dfc(&lStack_e0);
          func_0x000107c61170(lVar10);
        }
        else {
          func_0x000107c61174(lVar7);
          func_0x000107c61174(lVar8);
          FUN_1012ac38c(&lStack_e0,&lStack_150);
          func_0x000107c6142c(lVar15);
          func_0x000107c6142c(lVar14);
          func_0x000107c6142c(lVar12);
          func_0x000107c6142c(lVar11);
          func_0x000107c6142c(lVar10);
        }
        plVar1 = (long *)(lVar8 + _DAT_112d6f630);
        lVar11 = plVar1[0xb];
        lStack_100 = plVar1[10];
        lStack_e8 = plVar1[0xd];
        lStack_f0 = plVar1[0xc];
        lVar13 = plVar1[7];
        lStack_120 = plVar1[6];
        lStack_108 = plVar1[9];
        lStack_110 = plVar1[8];
        lStack_138 = plVar1[3];
        lStack_140 = plVar1[2];
        lStack_128 = plVar1[5];
        lStack_130 = plVar1[4];
        lStack_148 = plVar1[1];
        lVar10 = *plVar1;
        lStack_150 = lVar10;
        lStack_118 = lVar13;
        lStack_f8 = lVar11;
        if (lStack_108 < 0) {
          func_0x000107c61174();
          func_0x000107c40834();
          func_0x000107c61180();
          if (lVar10 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012b4f10);
            (*pcVar2)();
          }
          lVar11 = lVar10;
          func_0x000107c5bbf4();
          func_0x000107c61180();
          func_0x000107c61170(lVar10);
          if (lVar11 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012b4f0c);
            (*pcVar2)();
          }
          lVar13 = lVar11;
          func_0x000107c51b2c();
          FUN_1012a9dfc(&lStack_150);
          func_0x000107c61170(lVar7);
          func_0x000107c61170(lVar8);
          func_0x000107c61170(lVar11);
        }
        else {
          func_0x000107c61434(lVar11);
          func_0x000107c61170(lVar7);
          func_0x000107c61170(lVar8);
          func_0x000107c6142c(lVar11);
        }
        if (lVar13 <= lStack_58) break;
        if (lVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1012b4f00);
          (*pcVar2)();
        }
        lVar13 = *plVar6;
        lVar7 = plVar6[1];
        *plVar6 = lVar7;
        plVar6[1] = lVar13;
        if (lVar9 == 0) break;
        lVar9 = lVar9 + 1;
        plVar6 = plVar6 + -1;
      }
      param_3 = param_3 + 1;
      plVar5 = plVar5 + 1;
      lVar4 = lVar4 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 1012b4f10; end: 1012b5177;  */

undefined8 FUN_1012b4f10(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    func_0x000107c61558();
    if ((uVar6 & 1) == 0) {
      FUN_100e06d54();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_1012b4fe4;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1012b5160);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_1012b5048:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1012b5150);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1012b5158);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1012b5138);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1012b513c);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1012b5144);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1012b514c);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_1012b4fe4:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1012b5140);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1012b5148);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1012b5154);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1012b515c);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_1012b5048;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1012b5164);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1012b512c);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1012b5178);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_1012b5178(lVar9 + lVar12 * 8,lVar9 + *plVar1 * 8,lVar9 + lVar7 * 8,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1012b5130);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        FUN_100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1012b5134);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      func_0x0001000a97cc(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Entry: 1012b5178; end: 1012b580f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1012b5178(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lStack_160;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  lVar9 = (long)param_2 - (long)param_1;
  lVar3 = lVar9 + 7;
  if (-1 < lVar9) {
    lVar3 = lVar9;
  }
  lVar3 = lVar3 >> 3;
  lVar10 = (long)param_3 - (long)param_2;
  lVar6 = lVar10 + 7;
  if (-1 < lVar10) {
    lVar6 = lVar10;
  }
  lVar6 = lVar6 >> 3;
  if (lVar3 < lVar6) {
    if (((param_4 < param_1) || (param_1 + lVar3 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar3 << 3);
    }
    plVar4 = param_4 + lVar3;
    plVar11 = param_1;
    if (7 < lVar9) {
      do {
        plVar11 = param_1;
        if (param_3 <= param_2) break;
        lVar6 = *param_2;
        lVar9 = *param_4;
        plVar11 = (long *)(lVar6 + _DAT_112d6f630);
        lStack_c8 = plVar11[3];
        lStack_d0 = plVar11[2];
        lStack_b8 = plVar11[5];
        lVar10 = plVar11[4];
        lVar15 = plVar11[1];
        lVar3 = *plVar11;
        lVar13 = plVar11[0xb];
        lStack_90 = plVar11[10];
        lVar14 = plVar11[0xd];
        lStack_80 = plVar11[0xc];
        lStack_160 = plVar11[7];
        lVar16 = plVar11[6];
        lStack_98 = plVar11[9];
        lStack_a0 = plVar11[8];
        lStack_e0 = lVar3;
        lStack_d8 = lVar15;
        lStack_c0 = lVar10;
        lStack_b0 = lVar16;
        lStack_a8 = lStack_160;
        lStack_88 = lVar13;
        lStack_78 = lVar14;
        if (lStack_98 < 0) {
          func_0x000107c61174(lVar6);
          func_0x000107c61174(lVar9);
          FUN_1012ac38c(&lStack_e0,&lStack_150);
          func_0x000107c40834();
          func_0x000107c61180();
          if (lVar3 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012b580c);
            (*pcVar2)();
          }
          lVar10 = lVar3;
          func_0x000107c5bbf4();
          func_0x000107c61180();
          func_0x000107c61170(lVar3);
          if (lVar10 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012b5804);
            (*pcVar2)();
          }
          lStack_160 = lVar10;
          func_0x000107c51b2c();
          FUN_1012a9dfc(&lStack_e0);
          func_0x000107c61170(lVar10);
        }
        else {
          func_0x000107c61174(lVar6);
          func_0x000107c61174(lVar9);
          FUN_1012ac38c(&lStack_e0,&lStack_150);
          func_0x000107c6142c(lVar15);
          func_0x000107c6142c(lVar10);
          func_0x000107c6142c(lVar16);
          func_0x000107c6142c(lVar14);
          func_0x000107c6142c(lVar13);
        }
        plVar11 = (long *)(lVar9 + _DAT_112d6f630);
        lVar10 = plVar11[0xb];
        lStack_100 = plVar11[10];
        lStack_e8 = plVar11[0xd];
        lStack_f0 = plVar11[0xc];
        lVar13 = plVar11[7];
        lStack_120 = plVar11[6];
        lStack_108 = plVar11[9];
        lStack_110 = plVar11[8];
        lStack_138 = plVar11[3];
        lStack_140 = plVar11[2];
        lStack_128 = plVar11[5];
        lStack_130 = plVar11[4];
        lStack_148 = plVar11[1];
        lVar3 = *plVar11;
        lStack_150 = lVar3;
        lStack_118 = lVar13;
        lStack_f8 = lVar10;
        if (lStack_108 < 0) {
          func_0x000107c61174();
          func_0x000107c40834();
          func_0x000107c61180();
          if (lVar3 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012b57fc);
            (*pcVar2)();
          }
          lVar10 = lVar3;
          func_0x000107c5bbf4();
          func_0x000107c61180();
          func_0x000107c61170(lVar3);
          if (lVar10 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012b5810);
            (*pcVar2)();
          }
          lVar3 = lVar10;
          func_0x000107c51b2c();
          FUN_1012a9dfc(&lStack_150);
          func_0x000107c61170(lVar6);
          func_0x000107c61170(lVar9);
          func_0x000107c61170(lVar10);
          if (lVar3 <= lStack_160) goto LAB_1012b547c;
LAB_1012b53f0:
          plVar12 = param_2 + 1;
          plVar11 = param_4;
        }
        else {
          func_0x000107c61434(lVar10);
          func_0x000107c61170(lVar6);
          func_0x000107c61170(lVar9);
          func_0x000107c6142c(lVar10);
          if (lStack_160 < lVar13) goto LAB_1012b53f0;
LAB_1012b547c:
          plVar12 = param_2;
          plVar11 = param_4 + 1;
          param_2 = param_4;
        }
        param_4 = plVar11;
        if (param_1 != param_2) {
          *param_1 = *param_2;
        }
        param_1 = param_1 + 1;
        plVar11 = param_1;
        param_2 = plVar12;
      } while (param_4 < plVar4);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar6 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar6 << 3);
    }
    plVar4 = param_4 + lVar6;
    plVar11 = param_2;
    if ((param_1 < param_2) && (7 < lVar10)) {
      do {
        plVar7 = param_2 + -1;
        plVar12 = param_3;
        while( true ) {
          param_3 = plVar12 + -1;
          plVar8 = plVar4 + -1;
          lVar6 = *plVar8;
          lVar9 = *plVar7;
          plVar11 = (long *)(lVar6 + _DAT_112d6f630);
          lStack_c8 = plVar11[3];
          lStack_d0 = plVar11[2];
          lStack_b8 = plVar11[5];
          lVar10 = plVar11[4];
          lVar15 = plVar11[1];
          lVar3 = *plVar11;
          lVar13 = plVar11[0xb];
          lStack_90 = plVar11[10];
          lVar14 = plVar11[0xd];
          lStack_80 = plVar11[0xc];
          lStack_160 = plVar11[7];
          lVar16 = plVar11[6];
          lStack_98 = plVar11[9];
          lStack_a0 = plVar11[8];
          lStack_e0 = lVar3;
          lStack_d8 = lVar15;
          lStack_c0 = lVar10;
          lStack_b0 = lVar16;
          lStack_a8 = lStack_160;
          lStack_88 = lVar13;
          lStack_78 = lVar14;
          if (lStack_98 < 0) {
            func_0x000107c61174(lVar6);
            func_0x000107c61174(lVar9);
            FUN_1012ac38c(&lStack_e0,&lStack_150);
            func_0x000107c40834();
            func_0x000107c61180();
            if (lVar3 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1012b57f4);
              (*pcVar2)();
            }
            lVar10 = lVar3;
            func_0x000107c5bbf4();
            func_0x000107c61180();
            func_0x000107c61170(lVar3);
            if (lVar10 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1012b5808);
              (*pcVar2)();
            }
            lStack_160 = lVar10;
            func_0x000107c51b2c();
            FUN_1012a9dfc(&lStack_e0);
            func_0x000107c61170(lVar10);
          }
          else {
            func_0x000107c61174(lVar6);
            func_0x000107c61174(lVar9);
            FUN_1012ac38c(&lStack_e0,&lStack_150);
            func_0x000107c6142c(lVar15);
            func_0x000107c6142c(lVar10);
            func_0x000107c6142c(lVar16);
            func_0x000107c6142c(lVar14);
            func_0x000107c6142c(lVar13);
          }
          plVar11 = (long *)(lVar9 + _DAT_112d6f630);
          lVar13 = plVar11[0xb];
          lStack_100 = plVar11[10];
          lStack_e8 = plVar11[0xd];
          lStack_f0 = plVar11[0xc];
          lVar3 = plVar11[7];
          lStack_120 = plVar11[6];
          lStack_108 = plVar11[9];
          lStack_110 = plVar11[8];
          lStack_138 = plVar11[3];
          lStack_140 = plVar11[2];
          lStack_128 = plVar11[5];
          lStack_130 = plVar11[4];
          lStack_148 = plVar11[1];
          lVar10 = *plVar11;
          lStack_150 = lVar10;
          lStack_118 = lVar3;
          lStack_f8 = lVar13;
          if (lStack_108 < 0) {
            func_0x000107c61174();
            func_0x000107c40834();
            func_0x000107c61180();
            if (lVar10 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1012b5800);
              (*pcVar2)();
            }
            lVar13 = lVar10;
            func_0x000107c5bbf4();
            func_0x000107c61180();
            func_0x000107c61170(lVar10);
            if (lVar13 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1012b57f8);
              (*pcVar2)();
            }
            lVar3 = lVar13;
            func_0x000107c51b2c();
            FUN_1012a9dfc(&lStack_150);
            func_0x000107c61170(lVar6);
            func_0x000107c61170(lVar9);
            func_0x000107c61170(lVar13);
          }
          else {
            func_0x000107c61434(lVar13);
            func_0x000107c61170(lVar6);
            func_0x000107c61170(lVar9);
            func_0x000107c6142c(lVar13);
          }
          if (lStack_160 < lVar3) break;
          if (plVar12 != plVar4) {
            *param_3 = *plVar8;
          }
          plVar4 = plVar8;
          plVar11 = param_2;
          plVar12 = param_3;
          if (plVar8 <= param_4) goto LAB_1012b5780;
        }
        if (plVar12 != param_2) {
          *param_3 = *plVar7;
        }
        plVar11 = plVar7;
      } while ((param_1 < plVar7) && (param_2 = plVar7, param_4 < plVar4));
    }
  }
LAB_1012b5780:
  uVar5 = (long)plVar4 - (long)param_4;
  uVar1 = uVar5 + 7;
  if (-1 < (long)uVar5) {
    uVar1 = uVar5;
  }
  if ((plVar11 != param_4) || ((long *)((long)param_4 + (uVar1 & 0xfffffffffffffff8)) <= plVar11)) {
    func_0x000107c610b8(plVar11,param_4,((long)uVar1 >> 3) << 3);
  }
  return 1;
}



/* Entry: 1012b5810; end: 1012b58cb;  */

void FUN_1012b5810(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1012b58cc();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1012b58cc; end: 1012b59ff;  */

undefined *
FUN_1012b58cc(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5,
             undefined8 param_6,code *param_7)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1012b5a00);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = param_1;
    (*param_5)();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    (*param_7)(param_6);
    func_0x000107c6140c(puVar1,puVar4,uVar6,param_6);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1012b5a00; end: 1012b5a9f;  */

void FUN_1012b5a00(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  int *piVar12;
  long unaff_x20;
  long unaff_x22;
  
  lVar9 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar7 = *(long *)(unaff_x20 + 0x38);
  lVar4 = *(long *)(unaff_x20 + 0x40);
  lVar8 = *(long *)(unaff_x20 + 0x48);
  plVar11 = (long *)0x320;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar11;
  *plVar11 = unaff_x22;
  plVar11[1] = 0x1012b6e44;
  plVar11[0x4d] = lVar8;
  plVar11[0x4c] = lVar4;
  plVar11[0x4b] = lVar7;
  plVar11[0x4a] = lVar3;
  plVar11[0x49] = lVar5;
  plVar11[0x48] = lVar9;
  func_0x000107c614f0();
  plVar11[0x4e] = lVar9;
  piVar12 = *(int **)(lVar5 + 0x30);
  iVar1 = *piVar12;
  plVar10 = (long *)(ulong)(uint)piVar12[1];
  func_0x000107c615b8();
  plVar11[0x4f] = (long)plVar10;
  *plVar10 = (long)plVar11;
  plVar10[1] = (long)FUN_1012aff74;
                    /* WARNING: Could not recover jumptable at 0x0001012aff70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar12))(uVar2,uVar6,lVar9,lVar5);
  return;
}



/* Entry: 1012b5aa0; end: 1012b5ad3;  */

undefined8 FUN_1012b5aa0(undefined8 param_1)

{
  (*(code *)&DAT_103bead40)();
  return param_1;
}



/* Entry: 1012b5ad4; end: 1012b5bdb;  */

undefined * FUN_1012b5ad4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1012b5bdc);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112d6f780;
    func_0x0001000285a8(0x112d6f780,&UNK_10dc63a20);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,&UNK_1106e6610);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1012b5bdc; end: 1012b5c6b;  */

void FUN_1012b5bdc(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar8 = *(long *)(unaff_x20 + 0x30);
  plVar6 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x1012b6e3c;
  plVar6[0xe] = lVar3;
  plVar6[0xf] = lVar8;
  plVar6[0xc] = lVar2;
  plVar6[0xd] = lVar1;
  plVar6[10] = param_2;
  plVar6[0xb] = lVar7;
  lVar7 = 0x112d6f778;
  func_0x0001000285a8(0x112d6f778,&UNK_10d931118);
  plVar6[0x10] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  plVar6[0x11] = lVar7;
  uVar4 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x12] = uVar4;
  lVar7 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar4 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xf;
  uVar5 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x13] = uVar5;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x14] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012b0c00,0,0);
  return;
}



/* Entry: 1012b5c6c; end: 1012b5dbf;  */

undefined8 * FUN_1012b5c6c(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  
  if ((ulong)param_3 >> 0x3e == 0) {
    puVar5 = (undefined8 *)((undefined8 *)((ulong)param_3 & 0xffffffffffffff8))[2];
    puVar7 = param_1;
  }
  else {
    puVar5 = (undefined8 *)((ulong)param_3 & 0xffffffffffffff8);
    if (((ulong)param_3 & 0x8000000000000000) != 0) {
      puVar5 = param_3;
    }
    func_0x000107c60480();
    puVar7 = puVar5;
  }
  if (puVar5 != (undefined8 *)0x0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1012b5dc0);
      (*pcVar1)();
    }
    if ((ulong)param_3 >> 0x3e == 0) {
      lVar6 = *(long *)(((ulong)param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1012b5db4);
        (*pcVar1)();
      }
      FUN_1012aeb90();
      func_0x000107c6140c(param_1,((ulong)param_3 & 0xffffffffffffff8) + 0x20,lVar6,puVar7);
    }
    else {
      puVar7 = (undefined8 *)((ulong)param_3 & 0xffffffffffffff8);
      if (((ulong)param_3 & 0x8000000000000000) != 0) {
        puVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)puVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1012b5db8);
        (*pcVar1)();
      }
      if ((long)puVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1012b5dbc);
        (*pcVar1)();
      }
      if (((ulong)param_3 & 0xc000000000000001) == 0) {
        uVar3 = param_3[4];
        *param_1 = uVar3;
        lVar6 = (long)puVar5 + -1;
        if (lVar6 != 0) {
          uVar4 = uVar3;
          puVar5 = param_3 + 5;
          do {
            param_1 = param_1 + 1;
            uVar3 = *puVar5;
            *param_1 = uVar3;
            func_0x000107c61174(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar3;
            puVar5 = puVar5 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c61174(uVar3);
      }
      else {
        puVar7 = (undefined8 *)0x0;
        do {
          puVar2 = puVar7;
          FUN_1012bfd08(puVar7,param_3);
          param_1[(long)puVar7] = puVar2;
          puVar7 = (undefined8 *)((long)puVar7 + 1);
        } while (puVar5 != puVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 1012b5dc0; end: 1012b5df3;  */

void FUN_1012b5dc0(long param_1)

{
  undefined8 in_x5;
  
  FUN_1012b58cc(0,*(undefined8 *)(param_1 + 0x10),0,param_1,FUN_1012c5b30,in_x5,FUN_1012aeb90);
  return;
}



/* Entry: 1012b5df4; end: 1012b5e43;  */

/* WARNING: Removing unreachable block (ram,0x0001012bf7a0) */
/* WARNING: Removing unreachable block (ram,0x0001012bf7c4) */
/* WARNING: Removing unreachable block (ram,0x0001012bf7a8) */
/* WARNING: Removing unreachable block (ram,0x0001012bf898) */
/* WARNING: Removing unreachable block (ram,0x0001012bf7b4) */
/* WARNING: Removing unreachable block (ram,0x0001012bf7bc) */
/* WARNING: Removing unreachable block (ram,0x0001012bf804) */
/* WARNING: Removing unreachable block (ram,0x0001012bf818) */
/* WARNING: Removing unreachable block (ram,0x0001012bf824) */
/* WARNING: Removing unreachable block (ram,0x0001012bf82c) */

ulong FUN_1012b5df4(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar3 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar3 = param_1;
    }
    func_0x000107c60480();
  }
  if (param_1 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar4 = param_1;
    }
    func_0x000107c60480(uVar4,uVar3);
  }
  uVar2 = uVar4;
  FUN_1012bf8a8(uVar4,uVar3,FUN_1012c5b30);
  if (-1 < (long)uVar4) {
    FUN_1012bf928(0,uVar4,uVar2 + 0x20,param_1);
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012bf898);
  (*pcVar1)();
}



/* Entry: 1012b5e44; end: 1012b5ea7;  */

void FUN_1012b5e44(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1012b5ea8;
                    /* WARNING: Could not recover jumptable at 0x0001012b5ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar2,param_1);
  return;
}



/* Entry: 1012b5ea8; end: 1012b5ee7;  */

void FUN_1012b5ea8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001012b5ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1012b5ee8; end: 1012b5f8f;  */

void FUN_1012b5ee8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  int *piVar10;
  long unaff_x20;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar9 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = 0x1012b6e40;
  plVar9[0x1d] = param_1;
  func_0x000107c614f0(uVar7,uVar2,uVar4);
  piVar10 = *(int **)(lVar5 + 0x38);
  iVar1 = *piVar10;
  plVar8 = (long *)(ulong)(uint)piVar10[1];
  func_0x000107c615b8();
  plVar9[0x1e] = (long)plVar8;
  *plVar8 = (long)plVar9;
  plVar8[1] = (long)FUN_1012b1170;
                    /* WARNING: Could not recover jumptable at 0x0001012b116c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar10))(plVar8,plVar9 + 2,uVar3,uVar6,0,uVar7,lVar5);
  return;
}



/* Entry: 1012b5f90; end: 1012b5fff;  */

void FUN_1012b5f90(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x1012b6e34;
  iVar1 = *piVar2;
  plVar4 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar5[2] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_1012b5ea8;
                    /* WARNING: Could not recover jumptable at 0x0001012b5ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar4,param_1);
  return;
}



/* Entry: 1012b6000; end: 1012b600f;  */

void FUN_1012b6000(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1012b6010; end: 1012b618f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1012b6010(long param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  plVar1 = (long *)(param_1 + _DAT_112d6f630);
  lStack_68 = plVar1[9];
  lStack_70 = plVar1[8];
  lStack_58 = plVar1[0xb];
  lStack_60 = plVar1[10];
  lStack_48 = plVar1[0xd];
  lStack_50 = plVar1[0xc];
  lStack_a8 = plVar1[1];
  lVar4 = *plVar1;
  lStack_98 = plVar1[3];
  lStack_a0 = plVar1[2];
  lStack_88 = plVar1[5];
  lStack_90 = plVar1[4];
  lVar6 = plVar1[7];
  lStack_80 = plVar1[6];
  lStack_b0 = lVar4;
  lStack_78 = lVar6;
  if (lStack_68 < 0) {
    func_0x000107c61174();
    func_0x000107c40834();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1012b6184);
      (*pcVar2)();
    }
    lVar5 = lVar4;
    func_0x000107c5bbf4();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1012b618c);
      (*pcVar2)();
    }
    lVar6 = lVar5;
    func_0x000107c51b2c(lVar5);
    FUN_1012a9dfc(&lStack_b0);
    func_0x000107c61170(lVar5);
  }
  else {
    func_0x000107c61434(lStack_58);
    func_0x000107c6142c();
  }
  plVar1 = (long *)(param_2 + _DAT_112d6f630);
  lStack_d8 = plVar1[9];
  lStack_e0 = plVar1[8];
  lStack_c8 = plVar1[0xb];
  lStack_d0 = plVar1[10];
  lStack_b8 = plVar1[0xd];
  lStack_c0 = plVar1[0xc];
  lStack_118 = plVar1[1];
  lVar5 = *plVar1;
  lStack_108 = plVar1[3];
  lStack_110 = plVar1[2];
  lStack_f8 = plVar1[5];
  lStack_100 = plVar1[4];
  lVar4 = plVar1[7];
  lStack_f0 = plVar1[6];
  lStack_120 = lVar5;
  lStack_e8 = lVar4;
  if (lStack_d8 < 0) {
    func_0x000107c61174();
    func_0x000107c40834();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1012b6188);
      (*pcVar2)();
    }
    lVar3 = lVar5;
    func_0x000107c5bbf4();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1012b6190);
      (*pcVar2)();
    }
    lVar4 = lVar3;
    func_0x000107c51b2c(lVar3);
    FUN_1012a9dfc(&lStack_120);
    func_0x000107c61170(lVar3);
  }
  else {
    func_0x000107c61434(lStack_c8);
    func_0x000107c6142c();
  }
  return lVar6 < lVar4;
}



/* Entry: 1012b6190; end: 1012b6797;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_1012b6190(double param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  undefined1 *puVar18;
  int iVar19;
  undefined **ppuVar20;
  undefined1 auStack_e0 [8];
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  lVar7 = 0;
  func_0x000107c5eea4();
  lStack_88 = *(long *)(lVar7 + -8);
  lStack_90 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_88 + 0x40));
  puVar18 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = (long)(puVar18 + -extraout_x12) - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar11 = (undefined *)(lVar15 - extraout_x12_01);
  lVar7 = 0x112d48c78;
  func_0x0001000285a8(0x112d48c78,&UNK_10d90f8c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar13 = (long)puVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar13 - extraout_x12_02;
  lVar7 = 0;
  func_0x000107c5efa8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar14 = lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  ppuVar20 = (undefined **)0x0;
  if (param_2[4] == 0) {
    uVar9 = param_2[0x11];
    uVar2 = param_2[0x12];
    lStack_c0 = lVar15;
    puStack_b8 = puVar18 + -extraout_x12;
    puStack_98 = puVar11;
    func_0x000107c61434(uVar2);
    uStack_b0 = uVar9;
    uStack_a8 = uVar2;
    func_0x000107c5ef90(lVar16,uVar9,uVar2);
    func_0x0001012b67cc(lVar16,lVar13);
    pcVar17 = *(code **)(extraout_x12_03 + 0x30);
    lVar15 = lVar13;
    (*pcVar17)(lVar13,1,lVar7);
    lStack_a0 = extraout_x12_03;
    if ((int)lVar15 == 1) {
      func_0x000107c5efa4(lVar14);
      lVar15 = lVar13;
      (*pcVar17)(lVar13,1,lVar7);
      if ((int)lVar15 != 1) {
        func_0x0001012b681c(lVar13,0x112d48c78,&UNK_10d90f8c0);
      }
    }
    else {
      (**(code **)(extraout_x12_03 + 0x20))(lVar14,lVar13,lVar7);
    }
    lVar13 = lStack_88;
    puVar11 = puStack_98;
    bVar5 = *(byte *)(param_2 + 0x16);
    if (bVar5 == 0xff) {
      func_0x000107c6142c(uStack_a8);
      (**(code **)(lStack_a0 + 8))(lVar14,lVar7);
      ppuVar20 = (undefined **)0x0;
    }
    else {
      uStack_c8 = param_2[0x13];
      uStack_d0 = param_2[0x14];
      lVar15 = param_2[0x15];
      puVar8 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
      func_0x000107c610f8();
      func_0x000107c453e4();
      lStack_d8 = lVar14;
      if (bVar5 == 1) {
        uVar9 = 0x2d4d4d2d79797979;
        func_0x000107c5fadc(0x2d4d4d2d79797979,0xea00000000006464);
        func_0x000107c53e28(puVar8);
        func_0x000107c61170(uVar9);
        func_0x000107c5ef9c();
        func_0x000107c59d94(puVar8);
        func_0x000107c61170(uVar9);
        uVar9 = uStack_c8;
        func_0x000107c5fadc(uStack_c8,uStack_d0);
        puVar11 = puVar8;
        func_0x000107c41344();
        func_0x000107c61180();
        func_0x000107c61170(uVar9);
        if (puVar11 == (undefined *)0x0) {
          func_0x000107c61170();
          lVar13 = 0;
        }
        else {
          func_0x000107c5ee94(puVar18,puVar11);
          func_0x000107c61170(puVar11);
          lVar14 = lStack_90;
          puVar11 = puStack_b8;
          (**(code **)(lVar13 + 0x20))(puStack_b8,puVar18,lStack_90);
          func_0x000107c5ee8c();
          func_0x000107c61170(puVar8);
          (**(code **)(lVar13 + 8))(puVar11,lVar14);
          if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x1012b6784);
            (*pcVar17)();
          }
          if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x1012b678c);
            (*pcVar17)();
          }
          if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x1012b6794);
            (*pcVar17)();
          }
          lVar13 = (long)param_1;
          puVar8 = puVar11;
        }
        auVar6 = SEXT816(lVar15);
        lVar15 = lVar15 * 0x15180;
        iVar19 = 1;
        if (SUB168(auVar6 * SEXT816(0x15180),8) != lVar15 >> 0x3f) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x1012b6674);
          (*pcVar17)();
        }
      }
      else {
        puStack_b8 = (undefined *)CONCAT44(puStack_b8._4_4_,(uint)bVar5);
        uVar9 = 0xd000000000000012;
        func_0x000107c5fadc(0xd000000000000012,0x800000010ef33bf0);
        func_0x000107c53e28(puVar8);
        func_0x000107c61170(uVar9);
        func_0x000107c5ef9c();
        func_0x000107c59d94(puVar8);
        func_0x000107c61170(uVar9);
        uVar9 = uStack_c8;
        func_0x000107c5fadc(uStack_c8,uStack_d0);
        puVar10 = puVar8;
        func_0x000107c41344();
        func_0x000107c61180();
        func_0x000107c61170(uVar9);
        lVar14 = lStack_c0;
        if (puVar10 == (undefined *)0x0) {
          func_0x000107c61170();
          lVar13 = 0;
          iVar19 = (int)puStack_b8;
        }
        else {
          func_0x000107c5ee94(lStack_c0,puVar10);
          func_0x000107c61170(puVar10);
          lVar16 = lStack_90;
          (**(code **)(lVar13 + 0x20))(puVar11,lVar14,lStack_90);
          func_0x000107c5ee8c();
          func_0x000107c61170(puVar8);
          (**(code **)(lVar13 + 8))(puVar11,lVar16);
          if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x1012b6788);
            (*pcVar17)();
          }
          if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x1012b6790);
            (*pcVar17)();
          }
          if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x1012b6798);
            (*pcVar17)();
          }
          lVar13 = (long)param_1;
          puVar8 = puVar11;
          iVar19 = (int)puStack_b8;
        }
      }
      lStack_88 = lVar7;
      if (param_2[0x18] == 0) {
        lStack_90 = 0;
        puVar11 = (undefined *)0xe000000000000000;
      }
      else {
        lStack_90 = param_2[0x19];
        puVar11 = (undefined *)param_2[0x1a];
        puVar8 = puVar11;
        func_0x000107c61434();
      }
      uVar9 = *param_2;
      uVar3 = param_2[1];
      uVar2 = param_2[7];
      uVar4 = param_2[8];
      uVar12 = param_2[9];
      FUN_1012aeb90();
      puVar10 = puVar8;
      func_0x000107c610f8();
      puVar1 = (undefined8 *)(puVar10 + _DAT_112d6f630);
      *puVar1 = uVar9;
      puVar1[1] = uVar3;
      puVar1[2] = uVar2;
      puVar1[3] = uVar4;
      puVar1[4] = uVar12;
      puVar1[6] = 0xa400000000000000;
      puVar1[5] = 0x85939ff0;
      puVar1[7] = lVar13;
      puVar1[8] = lVar15;
      puVar1[9] = (ulong)(iVar19 == 1);
      puVar1[10] = uStack_b0;
      puVar1[0xb] = uStack_a8;
      puVar1[0xc] = lStack_90;
      puVar1[0xd] = puVar11;
      puVar11 = PTR_s_init_1125d9248;
      puStack_80 = puVar10;
      puStack_78 = puVar8;
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar12);
      ppuVar20 = &puStack_80;
      func_0x000107c61154(ppuVar20,puVar11);
      (**(code **)(lStack_a0 + 8))(lStack_d8,lStack_88);
    }
  }
  return ppuVar20;
}



/* Entry: 1012b6798; end: 1012b685b;  */

undefined8 FUN_1012b6798(undefined8 param_1)

{
  (*(code *)&DAT_103be97a8)();
  return param_1;
}



/* Entry: 1012b685c; end: 1012b6867;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012b685c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  code *pcVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long unaff_x20;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong unaff_x27;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  ulong auStack_70 [2];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  *(undefined1 *)(lVar1 + 0x38) = 0;
  func_0x000107c61428(lVar3 + 0x10,auStack_88,0,0);
  uVar14 = *(ulong *)(lVar3 + 0x10);
  auStack_70[0] = uVar14;
  func_0x000107c61428(lVar2 + 0x10,auStack_a0,0,0);
  uVar15 = *(ulong *)(lVar2 + 0x10);
  if (uVar15 >> 0x3e == 0) {
    uVar16 = *(ulong *)((uVar15 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar16 = uVar15 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar15) {
      uVar16 = uVar15;
    }
    func_0x000107c60480();
  }
  if (uVar16 == 0) {
    func_0x000107c61434(uVar14);
  }
  else {
    if ((long)uVar16 < 1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1012af830);
      (*pcVar6)();
    }
    func_0x000107c61434(uVar14);
    func_0x000107c61434(uVar15);
    uVar17 = 0;
    do {
      if ((uVar15 & 0xc000000000000001) == 0) {
        uVar7 = *(ulong *)(uVar15 + uVar17 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar7 = uVar17;
        FUN_1012bfea4(uVar17,uVar15);
      }
      uVar10 = uVar7;
      func_0x000107c447f0();
      if ((uVar10 & 1) == 0) {
        func_0x000107c61170(uVar7);
      }
      else {
        unaff_x27 = unaff_x27 & 1 | 0x8000000000000000;
        FUN_1012aeb90();
        uVar9 = uVar10;
        func_0x000107c610f8();
        puVar8 = (ulong *)(uVar9 + _DAT_112d6f630);
        *puVar8 = uVar7;
        puVar8[9] = unaff_x27;
        puVar5 = PTR_s_init_1125d9248;
        uStack_e8 = uVar9;
        uStack_e0 = uVar10;
        func_0x000107c61174(uVar7);
        puVar8 = &uStack_e8;
        func_0x000107c61154(puVar8,puVar5);
        uVar10 = uVar14;
        func_0x000107c61550();
        if ((((int)uVar10 == 0) || ((long)uVar14 < 0)) ||
           (uVar10 = uVar14, (uVar14 >> 0x3e & 1) != 0)) {
          if (uVar14 >> 0x3e == 0) {
            uVar9 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar9 = uVar14 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar14) {
              uVar9 = uVar14;
            }
            func_0x000107c60480(uVar9);
          }
          uVar10 = 0;
          FUN_1012bf74c(0,uVar9 + 1,1,uVar14);
        }
        uVar12 = uVar10 & 0xffffffffffffff8;
        uVar9 = *(ulong *)(uVar12 + 0x10);
        uVar14 = uVar10;
        if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar9) {
          uVar14 = (ulong)(1 < *(ulong *)(uVar12 + 0x18));
          FUN_1012bf74c(uVar14,uVar9 + 1,1,uVar10);
          uVar12 = uVar14 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar12 + 0x10) = uVar9 + 1;
        *(ulong **)(uVar12 + uVar9 * 8 + 0x20) = puVar8;
        func_0x000107c61170(uVar7);
        auStack_70[0] = uVar14;
      }
      uVar17 = uVar17 + 1;
    } while (uVar16 != uVar17);
    func_0x000107c6142c(uVar15);
  }
  FUN_1012af830(auStack_70);
  func_0x000107c61428(lVar2 + 0x10,auStack_c0,0,0);
  uVar14 = *(ulong *)(lVar2 + 0x10);
  if (uVar14 >> 0x3e == 0) {
    uVar15 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar15 = uVar14 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar14) {
      uVar15 = uVar14;
    }
    func_0x000107c60480(uVar15);
  }
  pcVar6 = *(code **)(lVar1 + 0x20);
  func_0x000107c61428(lVar4 + 0x10,auStack_d8,0,0);
  uVar14 = auStack_70[0];
  uVar13 = *(undefined8 *)(lVar4 + 0x10);
  uVar11 = uVar13;
  func_0x000107c61174(uVar13);
  (*pcVar6)(uVar13,uVar14,uVar15 != 0);
  func_0x000107c6142c(uVar14);
  func_0x000107c61170(uVar11);
  return;
}



/* Entry: 1012b6868; end: 1012b68a3;  */

void FUN_1012b6868(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1012b68a4; end: 1012b6943;  */

void FUN_1012b68a4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar7 = *(long *)(unaff_x20 + 0x38);
  lVar4 = *(long *)(unaff_x20 + 0x40);
  lVar8 = *(long *)(unaff_x20 + 0x48);
  plVar9 = (long *)0x310;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_1012b6944;
  plVar9[0x51] = lVar8;
  plVar9[0x50] = lVar4;
  plVar9[0x4f] = lVar7;
  plVar9[0x4e] = lVar3;
  plVar9[0x4d] = lVar6;
  plVar9[0x4c] = lVar2;
  plVar9[0x4b] = lVar5;
  plVar9[0x4a] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012b1208,0,0);
  return;
}



/* Entry: 1012b6944; end: 1012b697f;  */

void FUN_1012b6944(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001012b697c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1012b6980; end: 1012b69b3;  */

undefined8 FUN_1012b6980(undefined8 param_1)

{
  (*(code *)&DAT_103beafe8)();
  return param_1;
}



/* Entry: 1012b69b4; end: 1012b6a43;  */

void FUN_1012b69b4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar8 = *(long *)(unaff_x20 + 0x30);
  plVar6 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x1012b6e48;
  plVar6[0xe] = lVar3;
  plVar6[0xf] = lVar8;
  plVar6[0xc] = lVar2;
  plVar6[0xd] = lVar1;
  plVar6[10] = param_2;
  plVar6[0xb] = lVar7;
  lVar7 = 0x112d6f778;
  func_0x0001000285a8(0x112d6f778,&UNK_10d931118);
  plVar6[0x10] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  plVar6[0x11] = lVar7;
  uVar4 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x12] = uVar4;
  lVar7 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar4 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xf;
  uVar5 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x13] = uVar5;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x14] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012b1e0c,0,0);
  return;
}



/* Entry: 1012b6a44; end: 1012b6aeb;  */

void FUN_1012b6a44(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  int *piVar10;
  long unaff_x20;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar9 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = 0x1012b6e4c;
  plVar9[0x1d] = param_1;
  func_0x000107c614f0(uVar7,uVar2,uVar4);
  piVar10 = *(int **)(lVar5 + 0x38);
  iVar1 = *piVar10;
  plVar8 = (long *)(ulong)(uint)piVar10[1];
  func_0x000107c615b8();
  plVar9[0x1e] = (long)plVar8;
  *plVar8 = (long)plVar9;
  plVar8[1] = (long)FUN_1012b237c;
                    /* WARNING: Could not recover jumptable at 0x0001012b2378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar10))(plVar8,plVar9 + 2,uVar3,uVar6,0,uVar7,lVar5);
  return;
}



/* Entry: 1012b6aec; end: 1012b6b5b;  */

void FUN_1012b6aec(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x1012b6e38;
  iVar1 = *piVar2;
  plVar4 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar5[2] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_1012b5ea8;
                    /* WARNING: Could not recover jumptable at 0x0001012b5ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar4,param_1);
  return;
}



/* Entry: 1012b6b5c; end: 1012b6be7;  */

void FUN_1012b6b5c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  plVar7 = (long *)0x320;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = 0x1012b6e50;
  plVar7[0x4a] = lVar6;
  plVar7[0x49] = lVar3;
  plVar7[0x48] = lVar5;
  plVar7[0x47] = lVar2;
  plVar7[0x46] = lVar4;
  plVar7[0x45] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012b2608,0,0);
  return;
}



/* Entry: 1012b6be8; end: 1012b6c77;  */

void FUN_1012b6be8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar8 = *(long *)(unaff_x20 + 0x30);
  plVar6 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x1012b6e54;
  plVar6[0xe] = lVar3;
  plVar6[0xf] = lVar8;
  plVar6[0xc] = lVar2;
  plVar6[0xd] = lVar1;
  plVar6[10] = param_2;
  plVar6[0xb] = lVar7;
  lVar7 = 0x112d6f778;
  func_0x0001000285a8(0x112d6f778,&UNK_10d931118);
  plVar6[0x10] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  plVar6[0x11] = lVar7;
  uVar4 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x12] = uVar4;
  lVar7 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar4 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xf;
  uVar5 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x13] = uVar5;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x14] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012b38d4,0,0);
  return;
}



/* Entry: 1012b6c78; end: 1012b6cab;  */

void FUN_1012b6c78(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1012b6cac; end: 1012b6d53;  */

void FUN_1012b6cac(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  int *piVar10;
  long unaff_x20;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar9 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = 0x1012b6e58;
  plVar9[0x1d] = param_1;
  func_0x000107c614f0(uVar7,uVar2,uVar4);
  piVar10 = *(int **)(lVar5 + 0x38);
  iVar1 = *piVar10;
  plVar8 = (long *)(ulong)(uint)piVar10[1];
  func_0x000107c615b8();
  plVar9[0x1e] = (long)plVar8;
  *plVar8 = (long)plVar9;
  plVar8[1] = (long)FUN_1012b3e44;
                    /* WARNING: Could not recover jumptable at 0x0001012b3e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar10))(plVar8,plVar9 + 2,uVar3,uVar6,0,uVar7,lVar5);
  return;
}



/* Entry: 1012b6d54; end: 1012b6dc3;  */

void FUN_1012b6d54(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1012b6dc4;
  iVar1 = *piVar2;
  plVar4 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar5[2] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_1012b5ea8;
                    /* WARNING: Could not recover jumptable at 0x0001012b5ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar4,param_1);
  return;
}



/* Entry: 1012b6dc4; end: 1012b6dff;  */

void FUN_1012b6dc4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001012b6dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1012b6e00; end: 1012b6e5b;  */

void FUN_1012b6e00(long param_1,long param_2)

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


