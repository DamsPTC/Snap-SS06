/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10176b948; end: 10176b957;  */

undefined1  [16] FUN_10176b948(void)

{
  return ZEXT816(0x110405b40);
}



/* Entry: 10176b958; end: 10176bda3;  */

void FUN_10176b958(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  char cVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  code *pcVar8;
  bool bVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  undefined8 unaff_x20;
  ulong uVar22;
  ulong uVar23;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  char cStack_98;
  
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  cStack_98 = -1;
  puVar10 = &UNK_110405b60;
  func_0x000107c613fc(&UNK_110405b60,0x30,7);
  *(ulong **)(puVar10 + 0x10) = &uStack_c0;
  *(undefined8 *)(puVar10 + 0x18) = param_2;
  *(undefined8 *)(puVar10 + 0x20) = param_3;
  *(undefined8 *)(puVar10 + 0x28) = param_4;
  puVar11 = &UNK_110405b88;
  func_0x000107c613fc(&UNK_110405b88,0x20,7);
  *(code **)(puVar11 + 0x10) = FUN_10176c16c;
  *(undefined **)(puVar11 + 0x18) = puVar10;
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_d0 = (code *)0x10176c300;
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0x42000000;
  pcStack_e0 = (code *)&UNK_100de6bdc;
  puStack_d8 = &UNK_110405ba0;
  ppuVar12 = &puStack_f0;
  puStack_c8 = puVar11;
  func_0x000107c60bc4();
  puVar13 = puStack_c8;
  func_0x000107c6157c(puVar11);
  func_0x000107c61574(puVar13);
  puVar13 = &UNK_110405bd8;
  func_0x000107c613fc(&UNK_110405bd8,0x30,7);
  *(ulong **)(puVar13 + 0x10) = &uStack_c0;
  *(undefined8 *)(puVar13 + 0x18) = param_2;
  *(undefined8 *)(puVar13 + 0x20) = param_3;
  *(undefined8 *)(puVar13 + 0x28) = param_4;
  puVar14 = &UNK_110405c00;
  func_0x000107c613fc(&UNK_110405c00,0x20,7);
  *(undefined8 *)(puVar14 + 0x10) = 0x10176c198;
  *(undefined **)(puVar14 + 0x18) = puVar13;
  pcStack_d0 = FUN_10176c1a8;
  puStack_f0 = puVar3;
  uStack_e8 = 0x42000000;
  pcStack_e0 = (code *)&UNK_101380a90;
  puStack_d8 = &UNK_110405c18;
  ppuVar15 = &puStack_f0;
  puStack_c8 = puVar14;
  func_0x000107c60bc4();
  puVar16 = puStack_c8;
  func_0x000107c6157c(puVar14);
  func_0x000107c61574(puVar16);
  puVar16 = &UNK_110405c50;
  func_0x000107c613fc(&UNK_110405c50,0x18,7);
  *(ulong **)(puVar16 + 0x10) = &uStack_c0;
  puVar17 = &UNK_110405c78;
  func_0x000107c613fc(&UNK_110405c78,0x20,7);
  *(undefined8 *)(puVar17 + 0x10) = 0x10176c30c;
  *(undefined **)(puVar17 + 0x18) = puVar16;
  pcStack_d0 = (code *)0x10176c308;
  puStack_f0 = puVar3;
  uStack_e8 = 0x42000000;
  pcStack_e0 = FUN_101768ad8;
  puStack_d8 = &UNK_110405c90;
  ppuVar18 = &puStack_f0;
  puStack_c8 = puVar17;
  func_0x000107c60bc4(ppuVar18);
  puVar19 = puStack_c8;
  func_0x000107c6157c(puVar17);
  func_0x000107c61574(puVar19);
  puVar19 = &UNK_110405cc8;
  func_0x000107c613fc(&UNK_110405cc8,0x18,7);
  *(ulong **)(puVar19 + 0x10) = &uStack_c0;
  puVar20 = &UNK_110405cf0;
  func_0x000107c613fc(&UNK_110405cf0,0x20,7);
  *(code **)(puVar20 + 0x10) = FUN_10176c1c8;
  *(undefined **)(puVar20 + 0x18) = puVar19;
  pcStack_d0 = FUN_10176c1e0;
  puStack_f0 = puVar3;
  uStack_e8 = 0x42000000;
  pcStack_e0 = FUN_101768ad8;
  puStack_d8 = &UNK_110405d08;
  ppuVar21 = &puStack_f0;
  puStack_c8 = puVar20;
  func_0x000107c60bc4(ppuVar21);
  puVar3 = puStack_c8;
  func_0x000107c6157c(puVar20);
  func_0x000107c61574(puVar3);
  func_0x000107c4c5ac(unaff_x20);
  func_0x000107c60bd0(ppuVar21);
  func_0x000107c60bd0(ppuVar18);
  func_0x000107c60bd0(ppuVar15);
  func_0x000107c60bd0(ppuVar12);
  cVar2 = cStack_98;
  uVar7 = uStack_a0;
  uVar6 = uStack_a8;
  uVar5 = uStack_b0;
  uVar4 = uStack_b8;
  uVar1 = uStack_c0;
  func_0x000107c61574(puVar10);
  puVar10 = puVar11;
  func_0x000107c61544(puVar11,"",0x6c,0xa9,0x15,1);
  func_0x000107c61574(puVar13);
  func_0x000107c61574(puVar11);
  if (((ulong)puVar10 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10176bd98);
    (*pcVar8)();
  }
  puVar10 = puVar14;
  func_0x000107c61544(puVar14,"",0x6c,0xab,0x1a,1);
  func_0x000107c61574(puVar16);
  func_0x000107c61574(puVar14);
  if (((ulong)puVar10 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10176bd9c);
    (*pcVar8)();
  }
  puVar10 = puVar17;
  func_0x000107c61544(puVar17,"",0x6c,0xad,0x19,1);
  func_0x000107c61574(puVar19);
  func_0x000107c61574(puVar17);
  if (((ulong)puVar10 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10176bda0);
    (*pcVar8)();
  }
  puVar10 = puVar20;
  func_0x000107c61544(puVar20,"",0x6c,0xaf,0x20,1);
  func_0x000107c61574(puVar20);
  if (((ulong)puVar10 & 1) == 0) {
    bVar9 = cVar2 == -1;
    if (bVar9) {
      cVar2 = '\x01';
    }
    uVar22 = -(ulong)((long)((ulong)CONCAT14(bVar9,(uint)bVar9) << 0x3f) < 0);
    uVar23 = -(ulong)((long)((ulong)bVar9 << 0x3f) < 0);
    param_1[1] = uVar4 & ~uVar23;
    *param_1 = (uVar1 ^ 8) & ~uVar22 ^ 8;
    param_1[3] = uVar6 ^ uVar6 & uVar23;
    param_1[2] = uVar5 ^ (uVar5 ^ 2) & uVar22;
    uVar1 = 0;
    if (!bVar9) {
      uVar1 = uVar7;
    }
    param_1[4] = uVar1;
    *(char *)(param_1 + 5) = cVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10176bda4);
  (*pcVar8)();
}



/* Entry: 10176bda4; end: 10176be6b;  */

undefined8
FUN_10176bda4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c61168();
  func_0x000107c5fadc(param_4);
  func_0x000107c3abdc();
  func_0x000107c61180();
  func_0x000107c61170(param_4);
  if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10176be6c);
    (*pcVar5)();
  }
  puVar7 = puVar6;
  func_0x000107c5faec();
  func_0x000107c61170(puVar6);
  uVar1 = *param_6;
  uVar8 = param_6[1];
  uVar2 = param_6[2];
  uVar3 = param_6[3];
  uVar9 = param_6[4];
  *param_6 = puVar7;
  param_6[1] = param_5;
  param_6[2] = param_1;
  param_6[3] = param_2;
  param_6[4] = param_3;
  cVar4 = *(char *)(param_6 + 5);
  *(undefined1 *)(param_6 + 5) = 0;
  if (cVar4 == -1) {
    return uVar1;
  }
  if ((cVar4 == '\x01') && (((uint)uVar2 & 0xff) != 1)) {
    return uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar8,uVar8,uVar2,uVar3,uVar9);
  return uVar8;
}



/* Entry: 10176be6c; end: 10176bf0f;  */

long FUN_10176be6c(long param_1,long param_2,long param_3,long param_4,long param_5,long *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  func_0x000107c5ee20();
  lVar4 = param_4;
  func_0x000107c3abd8();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10176bf10);
    (*pcVar3)();
  }
  lVar5 = lVar4;
  func_0x000107c5faec();
  func_0x000107c61170(param_4);
  func_0x000107c61170(lVar4);
  lVar4 = *param_6;
  lVar6 = param_6[1];
  lVar1 = param_6[2];
  lVar2 = param_6[3];
  lVar7 = param_6[4];
  *param_6 = lVar5;
  param_6[1] = param_5;
  param_6[2] = param_1;
  param_6[3] = param_2;
  param_6[4] = param_3;
  lVar5 = param_6[5];
  *(undefined1 *)(param_6 + 5) = 0;
  if ((char)lVar5 == -1) {
    return lVar4;
  }
  if (((char)lVar5 == '\x01') && (((uint)lVar1 & 0xff) != 1)) {
    return lVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar6,lVar6,lVar1,lVar2,lVar7);
  return lVar6;
}



/* Entry: 10176bf10; end: 10176bf47;  */

undefined8 FUN_10176bf10(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar5 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar6 = param_2[4];
  param_2[1] = 0;
  *param_2 = 8;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[2] = 2;
  cVar4 = *(char *)(param_2 + 5);
  *(undefined1 *)(param_2 + 5) = 1;
  if (cVar4 == -1) {
    return uVar1;
  }
  if ((cVar4 == '\x01') && (((uint)uVar2 & 0xff) != 1)) {
    return uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar5,uVar5,uVar2,uVar3,uVar6);
  return uVar5;
}



/* Entry: 10176bf48; end: 10176c16b;  */

undefined1  [16] FUN_10176bf48(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined1 auVar11 [16];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  ppuVar7 = &puStack_a0;
  ppuVar10 = &puStack_a0;
  uStack_70 = 0;
  lStack_68 = 0;
  puVar5 = &UNK_110405d40;
  func_0x000107c613fc(&UNK_110405d40,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = param_1;
  *(undefined8 **)(puVar5 + 0x18) = &uStack_70;
  puVar6 = &UNK_110405d68;
  func_0x000107c613fc(&UNK_110405d68,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_10176c244;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x10176c288;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_101769670;
  puStack_88 = &UNK_110405d80;
  puStack_78 = puVar6;
  func_0x000107c60bc4(&puStack_a0);
  puVar8 = puStack_78;
  func_0x000107c6157c(puVar6);
  func_0x000107c61574(puVar8);
  puVar8 = &UNK_110405db8;
  func_0x000107c613fc(&UNK_110405db8,0x18,7);
  *(undefined8 **)(puVar8 + 0x10) = &uStack_70;
  puVar9 = &UNK_110405de0;
  func_0x000107c613fc(&UNK_110405de0,0x20,7);
  *(undefined8 *)(puVar9 + 0x10) = 0x10176c2a8;
  *(undefined **)(puVar9 + 0x18) = puVar8;
  uStack_80 = 0x10176c304;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_100de6bdc;
  puStack_88 = &UNK_110405df8;
  puStack_78 = puVar9;
  func_0x000107c60bc4(&puStack_a0);
  puVar1 = puStack_78;
  func_0x000107c6157c(puVar9);
  func_0x000107c61574(puVar1);
  func_0x000107c4c704();
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c60bd0(ppuVar7);
  lVar3 = lStack_68;
  uVar2 = uStack_70;
  if (lStack_68 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10176c16c);
    (*pcVar4)();
  }
  func_0x000107c61574(puVar5);
  puVar5 = puVar6;
  func_0x000107c61544(puVar6,"",0x6c,0xbf,0x1d,1);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(puVar6);
  if (((ulong)puVar5 & 1) == 0) {
    puVar5 = puVar9;
    func_0x000107c61544(puVar9,"",0x6c,0xc5,0x1d,1);
    func_0x000107c61574(puVar9);
    if (((ulong)puVar5 & 1) == 0) {
      auVar11._8_8_ = lVar3;
      auVar11._0_8_ = uVar2;
      return auVar11;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10176c168);
    (*pcVar4)();
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10176c164);
  (*pcVar4)();
}



/* Entry: 10176c16c; end: 10176c1a7;  */

undefined8 FUN_10176c16c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar9 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c61168();
  func_0x000107c5fadc(param_1);
  func_0x000107c3abdc();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10176be6c);
    (*pcVar5)();
  }
  puVar7 = puVar6;
  func_0x000107c5faec();
  func_0x000107c61170(puVar6);
  uVar1 = *puVar9;
  uVar8 = puVar9[1];
  uVar2 = puVar9[2];
  uVar3 = puVar9[3];
  uVar10 = puVar9[4];
  *puVar9 = puVar7;
  puVar9[1] = param_2;
  puVar9[2] = uVar11;
  puVar9[3] = uVar12;
  puVar9[4] = uVar13;
  cVar4 = *(char *)(puVar9 + 5);
  *(undefined1 *)(puVar9 + 5) = 0;
  if (cVar4 == -1) {
    return uVar1;
  }
  if ((cVar4 == '\x01') && (((uint)uVar2 & 0xff) != 1)) {
    return uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar8,uVar8,uVar2,uVar3,uVar10);
  return uVar8;
}



/* Entry: 10176c1a8; end: 10176c1c7;  */

void FUN_10176c1a8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10176c1c8; end: 10176c1df;  */

void FUN_10176c1c8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10176bf10(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10176c1e0; end: 10176c1ff;  */

void FUN_10176c1e0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10176c200; end: 10176c243;  */

void FUN_10176c200(undefined8 param_1,undefined8 param_2,char param_3,undefined8 param_4,
                  undefined8 param_5,char param_6)

{
  if (param_6 == -1) {
    return;
  }
  if ((param_6 == '\x01') && (param_3 != '\x01')) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10176c244; end: 10176c2d7;  */

void FUN_10176c244(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x18);
  uVar2 = puVar1[1];
  if (3.0 <= *(double *)(unaff_x20 + 0x10)) {
    param_1 = param_3;
    param_2 = param_4;
  }
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61434(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 10176c2d8; end: 10176c30f;  */

void FUN_10176c2d8(long param_1,long param_2)

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



/* Entry: 10176c310; end: 10176c343;  */

void FUN_10176c310(long param_1)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long extraout_x12;
  long extraout_x12_00;
  long lVar7;
  long lVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  code *pcStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  long lStack_d0;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  long lStack_88;
  undefined1 auStack_80 [32];
  
  uVar5 = 0;
  func_0x000100211718();
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110405b18;
  lVar7 = *(long *)(*unaff_x20 + 0x50);
  lVar4 = 0;
  func_0x000100082288(0,lVar7);
  lVar9 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar12 = (long)&pcStack_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar12 - extraout_x12;
  lStack_108 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_108 + 0x40));
  lVar6 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_110 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar6 - extraout_x12_00;
  lVar13 = unaff_x20[3];
  func_0x000107c61428(lVar13 + 0x10,auStack_a8,0x21,0);
  iVar3 = 1;
  func_0x000107c60b20(1,lVar13 + 0x10);
  func_0x000107c614a8(auStack_a8);
  if (iVar3 != 0) {
    lVar10 = *(long *)(*unaff_x20 + 0x68);
    func_0x000107c61428((long)unaff_x20 + lVar10,auStack_100,0,0);
    (**(code **)(lVar9 + 0x10))(lVar8,(long)unaff_x20 + lVar10,lVar4);
    lVar10 = lVar8;
    func_0x000107c614c4(lVar8,lVar4);
    if ((int)lVar10 == 1) {
      pcVar11 = *(code **)(lStack_108 + 0x20);
      (*pcVar11)(lVar6,lVar8,lVar7);
      (*pcVar11)(param_1,lVar6,lVar7);
      return;
    }
    (**(code **)(lVar9 + 8))(lVar8,lVar4);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70));
  func_0x000107c61428(puVar1,auStack_80,0,0);
  if (*(char *)((long)puVar1 + 0x11) == '\x01') {
    func_0x000107c6157c(unaff_x20);
  }
  else {
    uStack_120 = *puVar1;
    uVar5 = puVar1[1];
    uVar2 = *(undefined1 *)(puVar1 + 2);
    lStack_118 = param_1;
    func_0x000107c61428(0x1138153c0,auStack_c0,0,0);
    func_0x00010008a8e8(0x1138153c0,auStack_e8);
    if (lStack_d0 != 0) {
      func_0x000104857124(auStack_e8,auStack_a8);
      lStack_128 = lVar9;
      func_0x0001000a8868(auStack_a8,uStack_90);
      pcStack_130 = *(code **)(lStack_88 + 8);
      func_0x000107c61580(unaff_x20,2);
      lVar9 = lStack_128;
      (*pcStack_130)(uStack_120,uVar5,uVar2,&UNK_104857794,unaff_x20,uStack_90,lStack_88);
      func_0x000107c61574(unaff_x20);
      func_0x0001000834e4(auStack_a8);
      param_1 = lStack_118;
      goto code_r0x000100083dec;
    }
    func_0x000107c6157c(unaff_x20);
    func_0x00010008a938(auStack_e8);
    param_1 = lStack_118;
  }
  func_0x000100083ec8(unaff_x20);
code_r0x000100083dec:
  func_0x000107c61428(lVar13 + 0x10,auStack_a8,0x21,0);
  iVar3 = 1;
  func_0x000107c60b20(1,lVar13 + 0x10);
  func_0x000107c614a8(auStack_a8);
  if (iVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x100083eb4);
    (*pcVar11)();
  }
  lVar6 = *(long *)(*unaff_x20 + 0x68);
  func_0x000107c61428((long)unaff_x20 + lVar6,auStack_a8,0,0);
  (**(code **)(lVar9 + 0x10))(lVar12,(long)unaff_x20 + lVar6,lVar4);
  lVar8 = lVar12;
  func_0x000107c614c4(lVar12,lVar4);
  lVar6 = lStack_110;
  if ((int)lVar8 == 1) {
    pcVar11 = *(code **)(lStack_108 + 0x20);
    (*pcVar11)(lStack_110,lVar12,lVar7);
    (*pcVar11)(param_1,lVar6,lVar7);
    func_0x000107c61574(unaff_x20);
    return;
  }
  (**(code **)(lVar9 + 8))(lVar12,lVar4);
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x100083ec8);
  (*pcVar11)();
}



/* Entry: 10176c344; end: 10176c363;  */

undefined1  [16] FUN_10176c344(void)

{
  return ZEXT816(0x110405e38);
}



/* Entry: 10176c364; end: 10176c40b;  */

void FUN_10176c364(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_98 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  dVar4 = (double)unaff_x20[2];
  dVar5 = (double)unaff_x20[3];
  dVar6 = (double)unaff_x20[4];
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fb58(auStack_98,uVar1,uVar2);
  dVar3 = 0.0;
  if (dVar4 != 0.0) {
    dVar3 = dVar4;
  }
  func_0x000107c606a0(dVar3);
  dVar3 = 0.0;
  if (dVar5 != 0.0) {
    dVar3 = dVar5;
  }
  func_0x000107c606a0(dVar3);
  dVar3 = 0.0;
  if (dVar6 != 0.0) {
    dVar3 = dVar6;
  }
  func_0x000107c606a0(dVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 10176c40c; end: 10176c47f;  */

void FUN_10176c40c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = (double)unaff_x20[2];
  dVar3 = (double)unaff_x20[3];
  dVar4 = (double)unaff_x20[4];
  func_0x000107c5fb58(param_1,*unaff_x20,unaff_x20[1]);
  dVar1 = 0.0;
  if (dVar2 != 0.0) {
    dVar1 = dVar2;
  }
  func_0x000107c606a0(dVar1);
  dVar1 = 0.0;
  if (dVar3 != 0.0) {
    dVar1 = dVar3;
  }
  func_0x000107c606a0(dVar1);
  dVar1 = 0.0;
  if (dVar4 != 0.0) {
    dVar1 = dVar4;
  }
  func_0x000107c606a0(dVar1);
  return;
}



/* Entry: 10176c480; end: 10176c523;  */

void FUN_10176c480(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_98 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  dVar4 = (double)unaff_x20[2];
  dVar5 = (double)unaff_x20[3];
  dVar6 = (double)unaff_x20[4];
  func_0x000107c6068c(auStack_98);
  func_0x000107c5fb58(auStack_98,uVar1,uVar2);
  dVar3 = 0.0;
  if (dVar4 != 0.0) {
    dVar3 = dVar4;
  }
  func_0x000107c606a0(dVar3);
  dVar3 = 0.0;
  if (dVar5 != 0.0) {
    dVar3 = dVar5;
  }
  func_0x000107c606a0(dVar3);
  dVar3 = 0.0;
  if (dVar6 != 0.0) {
    dVar3 = dVar6;
  }
  func_0x000107c606a0(dVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 10176c524; end: 10176c5bb;  */

bool FUN_10176c524(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  uVar1 = *param_1;
  dVar6 = (double)param_1[2];
  dVar3 = (double)param_1[3];
  dVar2 = (double)param_1[4];
  dVar7 = (double)param_2[2];
  dVar5 = (double)param_2[3];
  dVar4 = (double)param_2[4];
  if (uVar1 == *param_2 && param_1[1] == param_2[1]) {
    if (dVar6 != dVar7) {
      return false;
    }
  }
  else {
    func_0x000107c605b8();
    if ((uVar1 & 1) == 0) {
      return false;
    }
    if (dVar6 != dVar7) {
      return false;
    }
  }
  return dVar2 == dVar4 && dVar3 == dVar5;
}



/* Entry: 10176c5bc; end: 10176c607;  */

void FUN_10176c5bc(double param_1,double param_2)

{
  double dVar1;
  
  dVar1 = 0.0;
  if (param_1 != 0.0) {
    dVar1 = param_1;
  }
  func_0x000107c606a0(dVar1);
  dVar1 = 0.0;
  if (param_2 != 0.0) {
    dVar1 = param_2;
  }
  func_0x000107c606a0(dVar1);
  return;
}



/* Entry: 10176c608; end: 10176c60b;  */

void FUN_10176c608(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112dc7c98 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000100f6e330(0xff);
  puVar2 = PTR___sSo6CGSizeVSQ12CoreGraphicsMc_110351420;
  func_0x000107c61520(PTR___sSo6CGSizeVSQ12CoreGraphicsMc_110351420,uVar1);
  puRam0000000112dc7c98 = puVar2;
  return;
}



/* Entry: 10176c60c; end: 10176c64f;  */

void FUN_10176c60c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112dc7c98 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000100f6e330(0xff);
  puVar2 = PTR___sSo6CGSizeVSQ12CoreGraphicsMc_110351420;
  func_0x000107c61520(PTR___sSo6CGSizeVSQ12CoreGraphicsMc_110351420,uVar1);
  puRam0000000112dc7c98 = puVar2;
  return;
}



/* Entry: 10176c650; end: 10176c657;  */

void FUN_10176c650(void)

{
  double *unaff_x20;
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_88 [72];
  
  dVar1 = *unaff_x20;
  dVar3 = unaff_x20[1];
  func_0x000107c606ac(auStack_88);
  dVar2 = 0.0;
  if (dVar1 != 0.0) {
    dVar2 = dVar1;
  }
  func_0x000107c606a0(dVar2);
  dVar2 = 0.0;
  if (dVar3 != 0.0) {
    dVar2 = dVar3;
  }
  func_0x000107c606a0(dVar2);
  func_0x000107c606a4();
  return;
}



/* Entry: 10176c658; end: 10176c6cb;  */

void FUN_10176c658(double param_1,double param_2)

{
  double dVar1;
  undefined1 auStack_88 [72];
  
  func_0x000107c606ac(auStack_88);
  dVar1 = 0.0;
  if (param_1 != 0.0) {
    dVar1 = param_1;
  }
  func_0x000107c606a0(dVar1);
  dVar1 = 0.0;
  if (param_2 != 0.0) {
    dVar1 = param_2;
  }
  func_0x000107c606a0(dVar1);
  func_0x000107c606a4();
  return;
}



/* Entry: 10176c6cc; end: 10176c6d3;  */

void FUN_10176c6cc(void)

{
  double *unaff_x20;
  double dVar1;
  double dVar2;
  
  dVar2 = unaff_x20[1];
  dVar1 = 0.0;
  if (*unaff_x20 != 0.0) {
    dVar1 = *unaff_x20;
  }
  func_0x000107c606a0(dVar1);
  dVar1 = 0.0;
  if (dVar2 != 0.0) {
    dVar1 = dVar2;
  }
  func_0x000107c606a0(dVar1);
  return;
}



/* Entry: 10176c6d4; end: 10176c71f;  */

void FUN_10176c6d4(void)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  func_0x000107c6068c(auStack_78);
  FUN_10176c5bc(uVar1,uVar2,auStack_78);
  func_0x000107c606a8();
  return;
}



/* Entry: 10176c720; end: 10176c74b;  */

long FUN_10176c720(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10176c74c; end: 10176c753;  */

void FUN_10176c74c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10176c754; end: 10176c78f;  */

undefined8 * FUN_10176c754(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 10176c790; end: 10176c7f3;  */

undefined8 * FUN_10176c790(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  return param_1;
}



/* Entry: 10176c7f4; end: 10176c837;  */

undefined8 * FUN_10176c7f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  param_1[4] = param_2[4];
  return param_1;
}



/* Entry: 10176c838; end: 10176c8db;  */

int FUN_10176c838(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10176c8dc; end: 10176c91b;  */

void FUN_10176c8dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc7ca0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d98851c;
  func_0x000107c61520(&UNK_10d98851c,&UNK_110405ed0);
  puRam0000000112dc7ca0 = puVar1;
  return;
}



/* Entry: 10176c91c; end: 10176cb4f;  */

/* WARNING: Possible PIC construction at 0x00010176caa8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010176caac) */
/* WARNING: Removing unreachable block (ram,0x00010176cb4c) */
/* WARNING: Removing unreachable block (ram,0x00010176cb24) */

void FUN_10176c91c(double param_1,double param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 unaff_x20;
  double dVar3;
  double dVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  if (((0.0 < param_1) && (0.0 < param_2)) &&
     ((dVar3 = param_1, dVar4 = param_2, func_0x000107c5b078(), param_1 != dVar3 ||
      (func_0x000107c5b078(), param_2 != dVar4)))) {
    puVar1 = PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00);
    func_0x000107c453e4();
    func_0x000107c51820();
    func_0x000107c58bfc(puVar1);
    func_0x000107c5b078();
    func_0x000107c5b078();
    dVar3 = dVar3 / dVar4;
    dVar4 = param_2 * dVar3;
    if (dVar3 <= 1.0) {
      param_2 = param_1 / dVar3;
      dVar4 = param_1;
    }
    func_0x000107c610f8(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
    func_0x000107c486fc(dVar4,param_2);
    puVar1 = &UNK_110405f60;
    func_0x000107c613fc(&UNK_110405f60,0x38,7);
    *(undefined8 *)(puVar1 + 0x18) = 0;
    *(undefined8 *)(puVar1 + 0x20) = 0;
    *(undefined8 *)(puVar1 + 0x10) = unaff_x20;
    *(double *)(puVar1 + 0x28) = dVar4;
    *(double *)(puVar1 + 0x30) = param_2;
    puVar2 = &UNK_110405f88;
    func_0x000107c613fc(&UNK_110405f88,0x20,7);
    *(code **)(puVar2 + 0x10) = FUN_10176ccfc;
    *(undefined **)(puVar2 + 0x18) = puVar1;
    pcStack_80 = FUN_10176cd0c;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_100f9148c;
    puStack_88 = &UNK_110405fa0;
    puStack_78 = puVar2;
    func_0x000107c60bc4(&puStack_a0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10176cb50; end: 10176cbb7;  */

void FUN_10176cb50(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  func_0x000107c3ab2c();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c6097c();
    lVar3 = unaff_x20;
    func_0x000107c60970();
    func_0x000107c61170(unaff_x20);
    if (SUB168(SEXT816(lVar2) * SEXT816(lVar3),8) != lVar2 * lVar3 >> 0x3f) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10176cbb8);
      (*pcVar1)();
    }
  }
  return;
}



/* Entry: 10176cbb8; end: 10176cbbf;  */

void FUN_10176cbb8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _swift_beginAccess(0x11307d628,&uStack_70,0x20,0);
  _objc_getAssociatedObject();
  _objc_retainAutoreleasedReturnValue();
  _swift_endAccess(&uStack_70);
  if (unaff_x20 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_70,unaff_x20);
    _swift_unknownObjectRelease(unaff_x20);
  }
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  lStack_38 = lStack_58;
  uStack_40 = uStack_60;
  if (lStack_58 == 0) {
    func_0x00010447c1ec(&uStack_50,0x112d387f8,&UNK_10d902650);
  }
  else {
    uVar1 = 0x11307d630;
    func_0x0001000285a8(0x11307d630,&UNK_10dd065e8);
    puVar2 = param_1;
    _swift_dynamicCast(param_1,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar1,6);
    if (((ulong)puVar2 & 1) != 0) {
      return;
    }
  }
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 10176cbc0; end: 10176cc3f;  */

undefined1  [16] FUN_10176cbc0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = 0x68;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x68,0x88b5);
  }
  *param_1 = lVar1;
  *(undefined8 *)(lVar1 + 0x58) = param_2;
  *(undefined8 *)(lVar1 + 0x60) = param_3;
  *(undefined8 *)(lVar1 + 0x50) = unaff_x20;
  func_0x00010447bfc8(lVar1,param_2,param_3);
  auVar2._8_8_ = lVar1;
  auVar2._0_8_ = FUN_10176cc40;
  return auVar2;
}



/* Entry: 10176cc40; end: 10176ccab;  */

void FUN_10176cc40(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if ((param_2 & 1) == 0) {
    func_0x00010447c0c4(lVar3,*(undefined8 *)(lVar3 + 0x58),*(undefined8 *)(lVar3 + 0x60));
  }
  else {
    uVar1 = *(undefined8 *)(lVar3 + 0x58);
    uVar2 = *(undefined8 *)(lVar3 + 0x60);
    FUN_10176ccac(lVar3,lVar3 + 0x28);
    func_0x00010447c0c4(lVar3 + 0x28,uVar1,uVar2);
    func_0x000101765980(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar3);
  return;
}



/* Entry: 10176ccac; end: 10176ccfb;  */

undefined8 FUN_10176ccac(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112dc7840;
  func_0x0001000285a8(0x112dc7840,&UNK_10d9885c0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10176ccfc; end: 10176cd0b;  */

void FUN_10176ccfc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
             *(undefined8 *)(unaff_x20 + 0x10),PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 10176cd0c; end: 10176cd2b;  */

void FUN_10176cd0c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10176cd2c; end: 10176cd47;  */

void FUN_10176cd2c(long param_1,long param_2)

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



/* Entry: 10176cd48; end: 10176cd87;  */

void FUN_10176cd48(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c610f8();
  FUN_10176cd88(param_1,param_2);
  return;
}



/* Entry: 10176cd88; end: 10176d013;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10176cd88(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *unaff_x20;
  undefined8 uVar9;
  
  puVar5 = &stack0xffffffffffffff90;
  func_0x000107c614f0();
  lVar4 = _DAT_112dc7cb0;
  uVar7 = *unaff_x20;
  uVar8 = *(ulong *)PTR__swift_isaMask_11034f488;
  uVar9 = 0x112dc7ca8;
  func_0x0001000285a8(0x112dc7ca8,&UNK_10d9885c8);
  uVar1 = *(undefined8 *)((uVar8 & uVar7) + 0x50);
  uVar2 = *(undefined8 *)((uVar8 & uVar7) + 0x58);
  FUN_10176d900(0,uVar1,uVar2);
  FUN_10176de40(0,uVar1,uVar2);
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)((long)unaff_x20 + lVar4) = uVar9;
  uVar9 = 0x112dc7cb8;
  func_0x0001000285a8(0x112dc7cb8,&UNK_10d9885d0);
  func_0x000107c614e8();
  func_0x000107c4c420();
  func_0x000107c61180();
  *(undefined8 *)((long)unaff_x20 + _DAT_112dc7cc0) = uVar9;
  *(undefined8 *)((long)unaff_x20 + _DAT_112dc7cc8) = param_2;
  puVar3 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_2);
  func_0x000107c61154(&stack0xffffffffffffff90,puVar3);
  lVar4 = _DAT_112dc7cb0;
  uVar9 = *(undefined8 *)(puVar5 + _DAT_112dc7cb0);
  puVar6 = puVar5;
  func_0x000107c61174();
  func_0x000107c59f4c(uVar9);
  func_0x000107c53fcc(*(undefined8 *)(puVar5 + lVar4));
  func_0x000107c61170(puVar6);
  func_0x000107c615e8(param_2);
  return puVar6;
}



/* Entry: 10176d014; end: 10176d103;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10176d014(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  long lVar7;
  undefined1 auVar8 [16];
  
  puVar1 = PTR__swift_isaMask_11034f488;
  uVar5 = *unaff_x20;
  uVar6 = *(ulong *)PTR__swift_isaMask_11034f488;
  func_0x000107c3e208(*(undefined8 *)((long)unaff_x20 + _DAT_112dc7cc8));
  uVar2 = 0;
  FUN_10176d900(0,*(undefined8 *)((uVar6 & uVar5) + 0x50),*(undefined8 *)((uVar6 & uVar5) + 0x58));
  FUN_10176d830(param_1,uVar2);
  puVar3 = *(ulong **)((long)unaff_x20 + _DAT_112dc7cb0);
  func_0x000107c4d9c0();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (puVar3 != (ulong *)0x0) {
    lVar7 = *(long *)((long)puVar3 + *(long *)((*(ulong *)puVar1 & *puVar3) + 0x68));
    func_0x000107c615f0(lVar7);
    func_0x000107c61170(puVar3);
    lVar4 = lVar7;
    func_0x000107c614f0();
    func_0x000107c61440();
    if (lVar4 != 0 && lVar7 != 0) goto LAB_10176d0f4;
    func_0x000107c615e8(lVar7);
  }
  lVar7 = 0;
  lVar4 = 0;
LAB_10176d0f4:
  auVar8._8_8_ = lVar4;
  auVar8._0_8_ = lVar7;
  return auVar8;
}



/* Entry: 10176d104; end: 10176d253;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10176d104(code *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *unaff_x20;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar2 = _DAT_112dc7cc0;
  uVar7 = *unaff_x20;
  uVar8 = *(ulong *)PTR__swift_isaMask_11034f488;
  lVar3 = *(long *)((long)unaff_x20 + _DAT_112dc7cc0);
  func_0x000107c4a8cc();
  func_0x000107c61180();
  puVar1 = PTR___sypN_11034f1a8;
  while( true ) {
    lVar6 = lVar3;
    func_0x000107c4d67c();
    func_0x000107c61180();
    if (lVar6 == 0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      func_0x000107c60234(&uStack_a0);
      func_0x000107c615e8(lVar6);
    }
    uStack_78 = uStack_98;
    uStack_80 = uStack_a0;
    lStack_68 = lStack_88;
    uStack_70 = uStack_90;
    if (lStack_88 == 0) break;
    uVar4 = 0;
    FUN_10176d900(0,*(undefined8 *)((uVar8 & uVar7) + 0x50),*(undefined8 *)((uVar8 & uVar7) + 0x58))
    ;
    puVar5 = &uStack_a8;
    func_0x000107c6147c(puVar5,&uStack_80,puVar1 + 8,uVar4,6);
    uVar4 = uStack_a8;
    if (((ulong)puVar5 & 1) == 0) {
      func_0x000107c61170(lVar3);
      return;
    }
    lVar6 = *(long *)((long)unaff_x20 + lVar2);
    func_0x000107c4d9c0();
    func_0x000107c61180();
    if (lVar6 != 0) {
      (*param_1)(uVar4,lVar6);
      func_0x000107c61170(lVar6);
    }
    func_0x000107c61170(uVar4);
  }
  func_0x000107c61170(lVar3);
  func_0x00010006e7f4(&uStack_80);
  return;
}



/* Entry: 10176d254; end: 10176d2af;  */

undefined8 FUN_10176d254(void)

{
  undefined8 uVar1;
  ulong *unaff_x20;
  undefined1 auStack_30 [16];
  undefined8 *puStack_20;
  undefined8 uStack_18;
  
  uVar1 = *(undefined8 *)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x50);
  func_0x000107c5f9cc(uVar1,&UNK_110406380,
                      *(undefined8 *)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x58))
  ;
  puStack_20 = &uStack_18;
  uStack_18 = uVar1;
  FUN_10176d104(FUN_10176d45c,auStack_30);
  return uStack_18;
}



/* Entry: 10176d2b0; end: 10176d3c3;  */

void FUN_10176d2b0(ulong *param_1,ulong *param_2)

{
  undefined *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long extraout_x8;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  puVar1 = PTR__swift_isaMask_11034f488;
  uVar4 = *param_1;
  uVar5 = *(ulong *)PTR__swift_isaMask_11034f488;
  lVar6 = *(long *)((uVar5 & uVar4) + 0x50);
  lVar7 = *(long *)(lVar6 + -8);
  puVar2 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10176dd4c();
  (**(code **)(lVar7 + 0x10))
            ((long)&uStack_70 - extraout_x8,
             (long)param_1 + *(long *)((*(ulong *)puVar1 & *param_1) + 0x60),lVar6);
  uStack_70 = *(undefined8 *)((long)param_2 + *(long *)((*(ulong *)puVar1 & *param_2) + 0x70));
  uStack_68 = ((ulong)puVar2 & 1) != 0;
  uVar3 = 0;
  func_0x000107c5fa34(0,lVar6,&UNK_110406380,*(undefined8 *)((uVar5 & uVar4) + 0x58));
  func_0x000107c5fa44(&uStack_70,(long)&uStack_70 - extraout_x8,uVar3);
  return;
}



/* Entry: 10176d3c4; end: 10176d3df;  */

void FUN_10176d3c4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemoryCache.Cache",0x13,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10176d490);
  (*pcVar1)();
}



/* Entry: 10176d3e0; end: 10176d413;  */

void FUN_10176d3e0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10176d414; end: 10176d45b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10176d414(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dc7cb0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dc7cc0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112dc7cc8));
  return;
}



/* Entry: 10176d45c; end: 10176d463;  */

void FUN_10176d45c(ulong *param_1,ulong *param_2)

{
  undefined *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long extraout_x8;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  puVar1 = PTR__swift_isaMask_11034f488;
  uVar4 = *param_1;
  uVar5 = *(ulong *)PTR__swift_isaMask_11034f488;
  lVar6 = *(long *)((uVar5 & uVar4) + 0x50);
  lVar7 = *(long *)(lVar6 + -8);
  puVar2 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0,param_1,param_2,
             *(undefined8 *)(unaff_x20 + 0x10));
  FUN_10176dd4c();
  (**(code **)(lVar7 + 0x10))
            ((long)&uStack_70 - extraout_x8,
             (long)param_1 + *(long *)((*(ulong *)puVar1 & *param_1) + 0x60),lVar6);
  uStack_70 = *(undefined8 *)((long)param_2 + *(long *)((*(ulong *)puVar1 & *param_2) + 0x70));
  uStack_68 = ((ulong)puVar2 & 1) != 0;
  uVar3 = 0;
  func_0x000107c5fa34(0,lVar6,&UNK_110406380,*(undefined8 *)((uVar5 & uVar4) + 0x58));
  func_0x000107c5fa44(&uStack_70,(long)&uStack_70 - extraout_x8,uVar3);
  return;
}



/* Entry: 10176d464; end: 10176d48f;  */

void FUN_10176d464(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemoryCache.Cache",0x13,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10176d490);
  (*pcVar1)();
}



/* Entry: 10176d490; end: 10176d493;  */

void FUN_10176d490(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 10176d494; end: 10176d4e3;  */

void FUN_10176d494(long param_1)

{
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_28 = PTR___sBOWV_11034d658 + 0x40;
  puStack_18 = &UNK_10d9885f0;
  puStack_20 = puStack_28;
  func_0x000107c61524(param_1,0,3,&puStack_28,param_1 + 0x60);
  return;
}



/* Entry: 10176d4e4; end: 10176d4ef;  */

void FUN_10176d4e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e652374);
  return;
}



/* Entry: 10176d4f0; end: 10176d533;  */

undefined8 FUN_10176d4f0(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = param_1;
  FUN_10176d830();
  (**(code **)(*(long *)(*(long *)(unaff_x20 + 0x50) + -8) + 8))(param_1);
  return uVar1;
}



/* Entry: 10176d534; end: 10176d617;  */

uint FUN_10176d534(undefined8 param_1)

{
  undefined *puVar1;
  ulong *puVar2;
  ulong **ppuVar3;
  long lVar4;
  uint uVar5;
  ulong *unaff_x20;
  ulong uVar6;
  ulong uVar7;
  ulong *puStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  puVar2 = unaff_x20;
  func_0x000107c614f0();
  puVar1 = PTR__swift_isaMask_11034f488;
  uVar6 = *unaff_x20;
  uVar7 = *(ulong *)PTR__swift_isaMask_11034f488;
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    ppuVar3 = &puStack_68;
    func_0x000107c6147c(ppuVar3,auStack_60,PTR___sypN_11034f1a8 + 8,puVar2,6);
    if (((ulong)ppuVar3 & 1) != 0) {
      lVar4 = (long)puStack_68 + *(long *)((*(ulong *)puVar1 & *puStack_68) + 0x60);
      func_0x000107c5fab8(lVar4,(long)unaff_x20 + *(long *)((*unaff_x20 & *(ulong *)puVar1) + 0x60),
                          *(undefined8 *)((uVar7 & uVar6) + 0x50),
                          *(undefined8 *)(*(long *)((uVar7 & uVar6) + 0x58) + 8));
      uVar5 = (uint)lVar4;
      func_0x000107c61170(puStack_68);
      goto LAB_10176d5fc;
    }
  }
  uVar5 = 0;
LAB_10176d5fc:
  return uVar5 & 1;
}



/* Entry: 10176d618; end: 10176d6cb;  */

uint FUN_10176d618(undefined8 param_1,undefined8 param_2,long param_3)

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
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_10176d534(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10176d6cc; end: 10176d737;  */

void FUN_10176d6cc(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  undefined1 auStack_78 [72];
  
  puVar1 = PTR__swift_isaMask_11034f488;
  uVar2 = *unaff_x20;
  uVar3 = *(ulong *)PTR__swift_isaMask_11034f488;
  func_0x000107c606ac(auStack_78);
  func_0x000107c5fa50(*(undefined8 *)((*(ulong *)puVar1 & *unaff_x20) + 0x60),auStack_78,
                      *(undefined8 *)((uVar3 & uVar2) + 0x50),
                      *(undefined8 *)((uVar3 & uVar2) + 0x58));
  func_0x000107c606a4();
  return;
}



/* Entry: 10176d738; end: 10176d753;  */

void FUN_10176d738(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemoryCache.CacheKeyWrapper",0x1d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10176d88c);
  (*pcVar1)();
}



/* Entry: 10176d754; end: 10176d787;  */

void FUN_10176d754(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10176d788; end: 10176d7b3;  */

void FUN_10176d788(ulong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010176d7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_1) + 0x50) + -8)
              + 8))((long)param_1 +
                    *(long *)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_1) + 0x60));
  return;
}



/* Entry: 10176d7b4; end: 10176d82f;  */

void FUN_10176d7b4(undefined8 param_1)

{
  ulong *unaff_x20;
  
  func_0x000107c614f0();
  (**(code **)(*(long *)(*(long *)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x50) +
                        -8) + 0x10))
            ((long)unaff_x20 +
             *(long *)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x60),param_1);
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10176d830; end: 10176d85f;  */

void FUN_10176d830(undefined8 param_1)

{
  func_0x000107c610f8();
  FUN_10176d7b4(param_1);
  return;
}



/* Entry: 10176d860; end: 10176d88b;  */

void FUN_10176d860(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemoryCache.CacheKeyWrapper",0x1d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10176d88c);
  (*pcVar1)();
}



/* Entry: 10176d88c; end: 10176d88f;  */

void FUN_10176d88c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 10176d890; end: 10176d8ff;  */

void FUN_10176d890(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x50);
  lVar1 = 0x13f;
  func_0x000107c6143c();
  if (uVar2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61524(param_1,0,1,&lStack_28,param_1 + 0x60);
  }
  return;
}



/* Entry: 10176d900; end: 10176d90b;  */

void FUN_10176d900(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e6523d0);
  return;
}



/* Entry: 10176d90c; end: 10176d93b;  */

void FUN_10176d90c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 10176d93c; end: 10176d947;  */

void FUN_10176d93c(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 10176d948; end: 10176da4b;  */

void FUN_10176d948(void)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  
  lVar7 = 0;
  lVar8 = 0;
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar9 = -1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f);
  uVar4 = -lVar9;
  uVar5 = 0xffffffffffffffff;
  if (uVar4 < 0x40) {
    uVar5 = ~(-1L << (uVar4 & 0x3f));
  }
  uVar5 = uVar5 & *(ulong *)(lVar3 + 0x40);
  while( true ) {
    for (; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      uVar4 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      lVar6 = *(long *)(*(long *)(lVar3 + 0x38) + LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) * 8 +
                       lVar7 * 0x200);
      bVar2 = SCARRY8(lVar8,lVar6);
      lVar8 = lVar8 + lVar6;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10176da44);
        (*pcVar1)();
      }
    }
    bVar2 = SCARRY8(lVar7,1);
    lVar7 = lVar7 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10176da40);
      (*pcVar1)();
    }
    if ((long)(0x3fU - lVar9 >> 6) <= lVar7) break;
    uVar5 = ((ulong *)(lVar3 + 0x40))[lVar7];
  }
  func_0x000107c61434();
  FUN_10176da4c();
  if (SCARRY8(lVar8,2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10176da48);
    (*pcVar1)();
  }
  FUN_10176db70();
  if (SUB168(SEXT816(lVar8 + 2) * SEXT816(lVar3),8) == (lVar8 + 2) * lVar3 >> 0x3f) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10176da4c);
  (*pcVar1)();
}



/* Entry: 10176da4c; end: 10176da53;  */

void FUN_10176da4c(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 10176da54; end: 10176db0b;  */

long FUN_10176da54(long param_1,uint param_2)

{
  code *pcVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar2 = param_1;
  if (*(long *)(lVar5 + 0x10) != 0) {
    func_0x000107c61434(lVar5);
    func_0x000100df95d0(param_1);
    lVar2 = lVar5;
    uVar3 = param_2;
    func_0x000107c6142c();
    if (((param_2 & 1) != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
      func_0x000107c61434(lVar5);
      func_0x000100df95d0();
      if ((uVar3 & 1) != 0) {
        lVar4 = *(long *)(*(long *)(lVar5 + 0x38) + param_1 * 8);
        func_0x000107c6142c();
        FUN_10176db70();
        lVar2 = lVar4 * lVar5;
        if (SUB168(SEXT816(lVar4) * SEXT816(lVar5),8) == lVar2 >> 0x3f) {
          return lVar2;
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10176dadc);
        (*pcVar1)();
      }
      func_0x000107c6142c();
      lVar2 = lVar5;
    }
  }
  FUN_10176db70();
  if (-1 < lVar2 + 0x4000000000000000) {
    return lVar2 << 1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10176db0c);
  (*pcVar1)();
}



/* Entry: 10176db0c; end: 10176db2f;  */

void FUN_10176db0c(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10176db30; end: 10176db6f;  */

void FUN_10176db30(void)

{
  FUN_10176d948();
  return;
}



/* Entry: 10176db70; end: 10176dc9b;  */

void FUN_10176db70(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  puVar3 = puVar2;
  func_0x000107c4c194();
  func_0x000107c61180();
  func_0x000107c3ec60();
  func_0x000107c61170(puVar3);
  func_0x000107c609cc(param_1,param_2,param_3,param_4);
  dVar4 = param_1;
  func_0x000107c4c194(puVar2);
  func_0x000107c61180();
  func_0x000107c3ec60();
  func_0x000107c61170(puVar2);
  func_0x000107c609b0(dVar4,param_2,param_3,param_4);
  param_1 = param_1 * dVar4;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10176dc90);
    (*pcVar1)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10176dc94);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10176dc98);
    (*pcVar1)();
  }
  if (SUB168(SEXT816((long)param_1) * SEXT816(3),8) == (long)param_1 * 3 >> 0x3f) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10176dc9c);
  (*pcVar1)();
}



/* Entry: 10176dc9c; end: 10176dcbb;  */

void FUN_10176dc9c(void)

{
  func_0x000107c61168(&PTR_PTR_112dc7e10);
  return;
}



/* Entry: 10176dcbc; end: 10176dcbf;  */

void FUN_10176dcbc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 10176dcc0; end: 10176dd4b;  */

void FUN_10176dcc0(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x50);
  lVar1 = 0x13f;
  func_0x000107c6143c();
  if (uVar2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = PTR___sBOWV_11034d658 + 0x40;
    puStack_28 = PTR___sBi64_WV_11034d670 + 0x40;
    func_0x000107c61524(param_1,0,3,&lStack_38,param_1 + 0x60);
  }
  return;
}



/* Entry: 10176dd4c; end: 10176dd7b;  */

void FUN_10176dd4c(void)

{
  ulong *unaff_x20;
  
  func_0x000107c6154c(*(undefined8 *)
                       ((long)unaff_x20 +
                       *(long *)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x68)));
  return;
}



/* Entry: 10176dd7c; end: 10176ddaf;  */

undefined8 FUN_10176dd7c(void)

{
  return 1;
}



/* Entry: 10176ddb0; end: 10176dde3;  */

void FUN_10176ddb0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10176dde4; end: 10176de3f;  */

void FUN_10176dde4(ulong *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__swift_isaMask_11034f488;
  (**(code **)(*(long *)(*(long *)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_1) + 0x50) + -8)
              + 8))((long)param_1 +
                    *(long *)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_1) + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)
            (*(undefined8 *)((long)param_1 + *(long *)((*(ulong *)puVar1 & *param_1) + 0x68)));
  return;
}



/* Entry: 10176de40; end: 10176de4b;  */

void FUN_10176de40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e652490);
  return;
}



/* Entry: 10176de4c; end: 10176df2f;  */

void FUN_10176de4c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong *unaff_x20;
  code *pcVar3;
  
  func_0x000107c614f0();
  puVar1 = PTR__swift_isaMask_11034f488;
  (**(code **)(*(long *)(*(long *)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x50) +
                        -8) + 0x10))
            ((long)unaff_x20 +
             *(long *)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x60),param_1);
  uVar2 = param_2;
  func_0x000107c614f0();
  *(undefined8 *)((long)unaff_x20 + *(long *)((*(ulong *)puVar1 & *unaff_x20) + 0x68)) = param_2;
  pcVar3 = *(code **)(param_3 + 8);
  func_0x000107c615f0(param_2);
  (*pcVar3)(uVar2,param_3);
  *(undefined8 *)((long)unaff_x20 + *(long *)((*(ulong *)puVar1 & *unaff_x20) + 0x70)) = uVar2;
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10176df30; end: 10176df77;  */

void FUN_10176df30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c610f8();
  FUN_10176de4c(param_1,param_2,param_3);
  return;
}



/* Entry: 10176df78; end: 10176dfa3;  */

void FUN_10176df78(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemoryCache.CacheValueWrapper",0x1f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10176dfa4);
  (*pcVar1)();
}



/* Entry: 10176dfa4; end: 10176e053;  */

int FUN_10176dfa4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10176e054; end: 10176e09f;  */

undefined8 FUN_10176e054(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_10176e0a0(param_1,param_2);
  return unaff_x20;
}



/* Entry: 10176e0a0; end: 10176e107;  */

void FUN_10176e0a0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar3 = *unaff_x20;
  lVar2 = *(long *)(lVar3 + 0x50);
  uVar1 = 0;
  FUN_10176d4e4(0,*(undefined8 *)(lVar3 + 0x58),*(undefined8 *)(lVar3 + 0x68));
  func_0x000107c5f9cc(lVar2,uVar1,*(undefined8 *)(lVar3 + 0x60));
  unaff_x20[2] = lVar2;
  unaff_x20[3] = param_2;
  FUN_10176e108(param_1,unaff_x20 + 4);
  return;
}



/* Entry: 10176e108; end: 10176e11f;  */

undefined8 * FUN_10176e108(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10176e120; end: 10176e383;  */

void FUN_10176e120(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long lVar7;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_c0 [8];
  undefined1 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [40];
  undefined1 *puStack_68;
  
  lVar9 = *unaff_x20;
  lVar7 = *(long *)(lVar9 + 0x50);
  lVar10 = *(long *)(lVar7 + -8);
  uStack_a8 = param_2;
  uStack_a0 = param_3;
  uStack_98 = param_4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  func_0x000107c3e208(unaff_x20[3]);
  func_0x000107c61428(unaff_x20 + 2,auStack_90,0x20,0);
  lVar8 = unaff_x20[2];
  uVar4 = 0;
  FUN_10176d4e4(0,*(undefined8 *)(lVar9 + 0x58),*(undefined8 *)(lVar9 + 0x68));
  uVar11 = *(undefined8 *)(lVar9 + 0x60);
  func_0x000107c5fa40(&puStack_68,param_1,lVar8,lVar7,uVar4,uVar11);
  puVar1 = puStack_68;
  func_0x000107c614a8(auStack_90);
  uVar3 = uStack_98;
  uVar2 = uStack_a0;
  uVar6 = uStack_a8;
  if (puVar1 == (undefined1 *)0x0) {
    lVar8 = unaff_x20[7];
    lVar9 = unaff_x20[8];
    func_0x0001000a8868(unaff_x20 + 4,lVar8);
    uStack_b0 = param_5;
    func_0x000107c604c0(auStack_90,param_1,lVar7,uVar11);
    puVar5 = auStack_90;
    puStack_b8 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar9 + 0x10))(puVar5,lVar8,lVar9);
    func_0x0001007bbff0(auStack_90);
    lVar8 = unaff_x20[3];
    func_0x000107c615f0(lVar8);
    FUN_10176cd48(puVar5,lVar8);
    func_0x00010176cef0(uStack_a8,uStack_a0,uStack_98,uStack_b0);
    puVar1 = puStack_b8;
    (**(code **)(lVar10 + 0x10))(puStack_b8,param_1,lVar7);
    puStack_68 = puVar5;
    func_0x000107c61428(unaff_x20 + 2,auStack_90,0x21,0);
    uVar6 = 0;
    func_0x000107c5fa34(0,lVar7,uVar4,uVar11);
    func_0x000107c61174(puVar5);
    func_0x000107c5fa44(&puStack_68,puVar1,uVar6);
    func_0x000107c614a8(auStack_90);
    func_0x000107c61170(puVar5);
  }
  else {
    func_0x000107c61170(puVar1);
    func_0x000107c61428(unaff_x20 + 2,auStack_90,0x20,0);
    func_0x000107c5fa40(&puStack_68,param_1,unaff_x20[2],lVar7,uVar4,uVar11);
    if (puStack_68 == (undefined1 *)0x0) {
      func_0x000107c614a8(auStack_90);
    }
    else {
      func_0x000107c614a8(auStack_90);
      func_0x00010176cef0(uVar6,uVar2,uVar3,param_5);
      func_0x000107c61170(puStack_68);
    }
  }
  return;
}



/* Entry: 10176e384; end: 10176e44f;  */

undefined1  [16] FUN_10176e384(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar4 = *unaff_x20;
  func_0x000107c3e208(unaff_x20[3]);
  func_0x000107c61428(unaff_x20 + 2,auStack_58,0x20,0);
  lVar3 = unaff_x20[2];
  uVar1 = *(undefined8 *)(lVar4 + 0x50);
  uVar2 = 0;
  FUN_10176d4e4(0,*(undefined8 *)(lVar4 + 0x58),*(undefined8 *)(lVar4 + 0x68));
  func_0x000107c5fa40(&lStack_60,param_1,lVar3,uVar1,uVar2,*(undefined8 *)(lVar4 + 0x60));
  if (lStack_60 == 0) {
    func_0x000107c614a8(auStack_58);
    param_2 = 0;
    lVar3 = 0;
  }
  else {
    func_0x000107c614a8(auStack_58);
    FUN_10176d014(param_2);
    func_0x000107c61170(lStack_60);
  }
  auVar5._8_8_ = lVar3;
  auVar5._0_8_ = param_2;
  return auVar5;
}



/* Entry: 10176e450; end: 10176e9b7;  */

long FUN_10176e450(void)

{
  undefined1 *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar12;
  code *pcVar13;
  long lVar14;
  long extraout_x12;
  long extraout_x12_00;
  long lVar15;
  long *unaff_x20;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  undefined1 auStack_170 [8];
  long lStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined1 *puStack_140;
  undefined1 *puStack_138;
  ulong uStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  undefined1 *puStack_e0;
  undefined1 auStack_d8 [24];
  long lStack_c0;
  undefined1 auStack_b8 [40];
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  ulong uStack_70;
  
  lVar18 = *unaff_x20;
  lVar15 = *(long *)(lVar18 + 0x50);
  lStack_f0 = *(long *)(lVar15 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_f0 + 0x40));
  puVar8 = auStack_170 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puStack_138 = puVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar16 = *(undefined8 *)(lVar18 + 0x58);
  uVar17 = *(undefined8 *)(lVar18 + 0x68);
  uVar4 = 0xff;
  puStack_140 = puVar8 + -extraout_x12;
  FUN_10176d4e4(0xff,uVar16,uVar17);
  lVar5 = 0xff;
  func_0x000107c61510(0xff,lVar15,uVar4,"key value ",0);
  lVar6 = 0;
  lStack_100 = lVar5;
  func_0x000107c60188();
  lStack_118 = *(long *)(lVar6 + -8);
  lStack_110 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_118 + 0x40));
  lVar5 = (long)(puVar8 + -extraout_x12) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_108 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_120 = lVar5 - extraout_x12_00;
  func_0x000107c3e208(unaff_x20[3]);
  uVar7 = 0;
  func_0x000107c5fa34(0,uVar16,&UNK_110406380,uVar17);
  uVar16 = *(undefined8 *)(lVar18 + 0x60);
  lVar5 = lVar15;
  uStack_148 = uVar7;
  func_0x000107c5f9cc(lVar15,uVar7,uVar16);
  lStack_c0 = lVar5;
  func_0x000107c61428(unaff_x20 + 2,auStack_d8,0,0);
  puVar8 = (undefined1 *)unaff_x20[2];
  lVar5 = lVar15;
  uStack_160 = uVar4;
  uStack_f8 = uVar16;
  if (((ulong)puVar8 & 0xc000000000000001) == 0) {
    func_0x000107c61434();
    func_0x000107c60410();
    func_0x000107c603f0(auStack_b8);
    puVar8 = auStack_b8;
    func_0x000107c5fa20(&lStack_90,puVar8,lVar15,uVar4,uVar16);
  }
  else {
    puVar1 = (undefined1 *)((ulong)puVar8 & 0xffffffffffffff8);
    if ((undefined1 *)0x7fffffffffffffff < puVar8) {
      puVar1 = puVar8;
    }
    puVar8 = puVar1;
    func_0x000107c60418();
    func_0x000107c615f0(puVar1);
    func_0x000107c5fa1c(&lStack_90,puVar8,lVar15,uVar4,uVar16);
  }
  lStack_168 = lStack_80;
  uStack_158 = lStack_80 + 0x40U >> 6;
  lStack_128 = lStack_90;
  uVar19 = uStack_70;
  lVar18 = lStack_78;
  lVar6 = lStack_78;
  lStack_150 = lVar15;
  if (lStack_90 < 0) goto LAB_10176e7b4;
  do {
    uVar7 = uStack_f8;
    lVar20 = lStack_100;
    lVar10 = lStack_108;
    lVar9 = lStack_128;
    uVar4 = uStack_160;
    uVar12 = uVar19;
    lVar5 = lVar18;
    if (uVar19 == 0) {
      uVar12 = uStack_158;
      if ((long)uStack_158 <= lVar18 + 1) {
        uVar12 = lVar18 + 1;
      }
      lVar6 = uVar12 - 1;
      lVar14 = lVar18;
      do {
        lVar5 = lVar14 + 1;
        if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10176e9b8);
          (*pcVar13)();
        }
        if ((long)uStack_158 <= lVar5) {
          lVar15 = *(long *)(lStack_100 + -8);
          (**(code **)(lVar15 + 0x38))(lStack_108,1,1,lStack_100);
          uStack_e8 = 0;
          goto LAB_10176e870;
        }
        uVar12 = *(ulong *)(lStack_88 + lVar5 * 8);
        lVar14 = lVar14 + 1;
      } while (uVar12 == 0);
    }
    uVar3 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
    uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
    uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
    uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
    uStack_e8 = uVar12 - 1 & uVar12;
    uVar12 = LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) | lVar5 << 6;
    lVar6 = lStack_128;
    uStack_130 = uVar19;
    func_0x000107c603fc(lStack_128,lVar15,uStack_160,uStack_f8);
    lVar10 = lStack_108;
    (**(code **)(lStack_f0 + 0x10))(lStack_108,lVar6 + *(long *)(lStack_f0 + 0x48) * uVar12,lVar15);
    lVar20 = lStack_100;
    uVar19 = uStack_130;
    iVar2 = *(int *)(lStack_100 + 0x30);
    func_0x000107c60404(lVar9,lVar15,uVar4,uVar7);
    uVar4 = *(undefined8 *)(lVar9 + uVar12 * 8);
    *(undefined8 *)(lVar10 + iVar2) = uVar4;
    lVar15 = *(long *)(lVar20 + -8);
    (**(code **)(lVar15 + 0x38))(lVar10,0,1,lVar20);
    func_0x000107c61174(uVar4);
    lVar6 = lVar5;
LAB_10176e870:
    while( true ) {
      lVar5 = lStack_120;
      (**(code **)(lStack_118 + 0x20))(lStack_120,lVar10,lStack_110);
      lVar10 = lVar5;
      (**(code **)(lVar15 + 0x30))(lVar5,1,lVar20);
      lVar9 = lStack_f0;
      puVar8 = puStack_140;
      lVar15 = lStack_150;
      if ((int)lVar10 == 1) {
        FUN_10176ea04(lStack_128,lStack_88,lStack_168,lVar18,uVar19);
        return lStack_c0;
      }
      uVar7 = *(undefined8 *)(lVar5 + *(int *)(lVar20 + 0x30));
      puVar11 = puStack_140;
      (**(code **)(lStack_f0 + 0x20))(puStack_140,lVar5,lStack_150);
      FUN_10176d254();
      puVar1 = puStack_138;
      (**(code **)(lVar9 + 0x10))(puStack_138,puVar8,lVar15);
      uVar4 = 0;
      puStack_e0 = puVar11;
      func_0x000107c5fa34(0,lVar15,uStack_148,uStack_f8);
      func_0x000107c5fa44(&puStack_e0,puVar1,uVar4);
      func_0x000107c61170(uVar7);
      lVar5 = lVar15;
      (**(code **)(lVar9 + 8))(puVar8,lVar15);
      uVar19 = uStack_e8;
      lVar18 = lVar6;
      if (-1 < lStack_128) break;
LAB_10176e7b4:
      func_0x000107c60444();
      lVar10 = lStack_108;
      if (puVar8 == (undefined1 *)0x0) {
        lVar15 = *(long *)(lStack_100 + -8);
        pcVar13 = *(code **)(lVar15 + 0x38);
        lVar20 = lStack_100;
      }
      else {
        func_0x000107c605ac(lStack_108);
        func_0x000107c615e8(puVar8);
        lVar20 = lStack_100;
        func_0x000107c605ac(lVar10 + *(int *)(lStack_100 + 0x30),lVar5,uStack_160,uStack_160);
        func_0x000107c615e8(lVar5);
        lVar15 = *(long *)(lVar20 + -8);
        pcVar13 = *(code **)(lVar15 + 0x38);
      }
      (*pcVar13)(lVar10,puVar8 == (undefined1 *)0x0,1,lVar20);
      lVar18 = lVar6;
      uStack_e8 = uVar19;
    }
  } while( true );
}



/* Entry: 10176e9b8; end: 10176ea03;  */

void FUN_10176e9b8(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x0001000834e4(unaff_x20 + 0x20);
  return;
}



/* Entry: 10176ea04; end: 10176ea0f;  */

void FUN_10176ea04(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 10176ea10; end: 10176ea67;  */

void FUN_10176ea10(long param_1)

{
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_28 = PTR___sBbWV_11034d660 + 0x40;
  puStack_20 = &UNK_10d988710;
  puStack_18 = &UNK_10d988728;
  func_0x000107c61524(param_1,0,3,&puStack_28,param_1 + 0x70);
  return;
}



/* Entry: 10176ea68; end: 10176ea93;  */

void FUN_10176ea68(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&DAT_10e652508);
  return;
}



/* Entry: 10176ea94; end: 10176ec9f;  */

undefined8 FUN_10176ea94(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 unaff_x20;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  if (*(char *)(param_1 + 8) == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ed0();
  }
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c5f9dc(uVar1,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(char *)(param_1 + 0x18) == '\x02') {
    puVar3 = (undefined *)0x0;
    lVar5 = *(long *)(param_1 + 0x28);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    lVar5 = *(long *)(param_1 + 0x28);
  }
  if (lVar5 == 0) {
    uVar4 = 0;
    lVar5 = *(long *)(param_1 + 0x38);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61434(lVar5);
    func_0x000107c5fadc(uVar4,lVar5);
    func_0x000107c6142c(lVar5);
    lVar5 = *(long *)(param_1 + 0x38);
  }
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    func_0x000107c61434(lVar5);
    func_0x000107c5fadc(uVar6,lVar5);
    func_0x000107c6142c(lVar5);
  }
  if (*(char *)(param_1 + 0x48) == '\x01') {
    puVar7 = (undefined *)0x0;
    lVar5 = *(long *)(param_1 + 0x58);
  }
  else {
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ed0();
    lVar5 = *(long *)(param_1 + 0x58);
  }
  if (lVar5 == 0) {
    func_0x000100e19000(param_1);
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + 0x50);
    func_0x000107c61434(lVar5);
    func_0x000107c5fadc(uVar8,lVar5);
    func_0x000100e19000(param_1);
    func_0x000107c6142c(lVar5);
  }
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c48424();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar8);
  return unaff_x20;
}


