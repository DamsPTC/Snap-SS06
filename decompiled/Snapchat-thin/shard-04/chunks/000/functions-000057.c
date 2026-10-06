/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1030599d8; end: 103059a17;  */

void FUN_1030599d8(long *param_1,code *param_2,long param_3)

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



/* Entry: 103059a18; end: 103059a47;  */

void FUN_103059a18(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}



/* Entry: 103059a48; end: 103059bdf;  */

void FUN_103059a48(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112f369f8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f369c0;
  func_0x00010002969c(0x112f369c0,&UNK_10db7f068);
  uVar2 = 0x112f36a00;
  func_0x000103059ad8(0x112f36a00,0x112f36a08,&UNK_10db7f090,
                      PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8);
  puVar3 = PTR___sxSg7SwiftUI4ViewA2bCRzlMc_110349ad0;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sxSg7SwiftUI4ViewA2bCRzlMc_110349ad0,uVar1,&uStack_28);
  puRam0000000112f369f8 = puVar3;
  return;
}



/* Entry: 103059be0; end: 103059be3;  */

void FUN_103059be0(void)

{
  return;
}



/* Entry: 103059be4; end: 103059ceb;  */

void FUN_103059be4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 uStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_30 = *(undefined1 *)(unaff_x20 + 0x40);
  uStack_41 = 0;
  uVar1 = 0x112d4fe10;
  func_0x0001000285a8(0x112d4fe10,&UNK_10d9160e0);
  func_0x000107c5f774(&uStack_41,uVar1);
  return;
}



/* Entry: 103059cec; end: 103059d2b;  */

void FUN_103059cec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f36a28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db802ac;
  func_0x000107c61520(&UNK_10db802ac,&UNK_110603798);
  puRam0000000112f36a28 = puVar1;
  return;
}



/* Entry: 103059d2c; end: 103059daf;  */

void FUN_103059d2c(undefined8 param_1,undefined8 param_2)

{
  FUN_10305c6c8();
  func_0x000107c5f3fc(param_1,&UNK_110604058,&UNK_110604058,param_2);
  return;
}



/* Entry: 103059db0; end: 103059de7;  */

void FUN_103059db0(undefined8 param_1)

{
  if (lRam0000000112f36a88 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e741d4c);
  return;
}



/* Entry: 103059de8; end: 103059e1f;  */

void FUN_103059de8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000107c5eec8();
                    /* WARNING: Could not recover jumptable at 0x000103059e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1);
  return;
}



/* Entry: 103059e20; end: 103059e7f;  */

void FUN_103059e20(undefined8 param_1)

{
  func_0x000107c5f7c8(0x3fd6666666666666,0x3fe999999999999a,0);
  uRam0000000113806b00 = param_1;
  return;
}



/* Entry: 103059e80; end: 103059faf;  */

long * FUN_103059e80(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  undefined1 uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar11 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar11 >> 0x11 & 1) == 0) {
    lVar13 = 0;
    func_0x000107c5eec8();
    (**(code **)(*(long *)(lVar13 + -8) + 0x10))(param_1,param_2,lVar13);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    uVar16 = *puVar2;
    uVar6 = puVar2[1];
    uVar3 = puVar2[2];
    uVar7 = puVar2[3];
    uVar4 = puVar2[4];
    uVar8 = puVar2[5];
    uVar5 = puVar2[6];
    uVar9 = puVar2[7];
    uVar15 = puVar2[8];
    uVar12 = *(undefined1 *)(puVar2 + 9);
    FUN_103059198(uVar16,uVar6,uVar3,uVar7,uVar4,uVar8,uVar5,uVar9,uVar15,uVar12);
    *puVar1 = uVar16;
    puVar1[1] = uVar6;
    puVar1[2] = uVar3;
    puVar1[3] = uVar7;
    puVar1[4] = uVar4;
    puVar1[5] = uVar8;
    puVar1[6] = uVar5;
    puVar1[7] = uVar9;
    puVar1[8] = uVar15;
    *(undefined1 *)(puVar1 + 9) = uVar12;
    iVar10 = *(int *)(param_3 + 0x1c);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    puVar1 = (undefined8 *)((long)param_2 + (long)iVar10);
    lVar13 = puVar1[1];
    uVar16 = *puVar1;
    puVar2 = (undefined8 *)((long)param_1 + (long)iVar10);
    puVar2[1] = puVar1[1];
    *puVar2 = uVar16;
  }
  else {
    lVar13 = *param_2;
    *param_1 = lVar13;
    uVar14 = (ulong)uVar11 & 0xff;
    param_1 = (long *)(lVar13 + (uVar14 + 0x10 & (uVar14 ^ 0xffffffffffffffff)));
  }
  func_0x000107c6157c(lVar13);
  return param_1;
}



/* Entry: 103059fb0; end: 10305a02b;  */

void FUN_103059fb0(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = 0;
  func_0x000107c5eec8();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1,lVar2);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_2 + 0x14));
  FUN_103059268(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4],puVar1[5],puVar1[6],puVar1[7],
                puVar1[8],*(undefined1 *)(puVar1 + 9));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x1c) + 8));
  return;
}



/* Entry: 10305a02c; end: 10305a283;  */

long FUN_10305a02c(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar11 = 0;
  func_0x000107c5eec8();
  (**(code **)(*(long *)(lVar11 + -8) + 0x10))(param_1,param_2,lVar11);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar12 = *puVar2;
  uVar5 = puVar2[1];
  uVar14 = puVar2[2];
  uVar6 = puVar2[3];
  uVar3 = puVar2[4];
  uVar7 = puVar2[5];
  uVar4 = puVar2[6];
  uVar8 = puVar2[7];
  uVar13 = puVar2[8];
  uVar10 = *(undefined1 *)(puVar2 + 9);
  FUN_103059198(uVar12,uVar5,uVar14,uVar6,uVar3,uVar7,uVar4,uVar8,uVar13,uVar10);
  *puVar1 = uVar12;
  puVar1[1] = uVar5;
  puVar1[2] = uVar14;
  puVar1[3] = uVar6;
  puVar1[4] = uVar3;
  puVar1[5] = uVar7;
  puVar1[6] = uVar4;
  puVar1[7] = uVar8;
  puVar1[8] = uVar13;
  *(undefined1 *)(puVar1 + 9) = uVar10;
  iVar9 = *(int *)(param_3 + 0x1c);
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x18)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x18));
  puVar1 = (undefined8 *)(param_2 + iVar9);
  uVar12 = puVar1[1];
  uVar14 = *puVar1;
  puVar2 = (undefined8 *)(param_1 + iVar9);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar14;
  func_0x000107c6157c(uVar12);
  return param_1;
}



/* Entry: 10305a284; end: 10305a3d3;  */

long FUN_10305a284(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar4 = 0;
  func_0x000107c5eec8();
  (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1,param_2,lVar4);
  iVar3 = *(int *)(param_3 + 0x18);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar5 = puVar2[4];
  uVar7 = puVar2[7];
  uVar6 = puVar2[6];
  puVar1[5] = puVar2[5];
  puVar1[4] = uVar5;
  puVar1[7] = uVar7;
  puVar1[6] = uVar6;
  uVar5 = *(undefined8 *)((long)puVar2 + 0x39);
  *(undefined8 *)((long)puVar1 + 0x41) = *(undefined8 *)((long)puVar2 + 0x41);
  *(undefined8 *)((long)puVar1 + 0x39) = uVar5;
  uVar7 = *puVar2;
  uVar6 = puVar2[3];
  uVar5 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar7;
  puVar1[3] = uVar6;
  puVar1[2] = uVar5;
  *(undefined1 *)(param_1 + iVar3) = *(undefined1 *)(param_2 + iVar3);
  puVar1 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  uVar5 = *puVar1;
  puVar2 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x1c));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar5;
  return param_1;
}



/* Entry: 10305a3d4; end: 10305a3eb;  */

void FUN_10305a3d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 10305a3ec; end: 10305a49f;  */

void FUN_10305a3ec(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5eec8();
  if (param_2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = &UNK_10db7f138;
    puStack_28 = PTR___syycWV_11034f1c0 + 0x40;
    puStack_30 = &UNK_10db7f150;
    func_0x000107c6153c(param_1,0x100,4,&lStack_40,param_1 + 0x10);
  }
  return;
}



/* Entry: 10305a4a0; end: 10305a4af;  */

void FUN_10305a4a0(undefined8 param_1,char param_2)

{
  if (param_2 != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 10305a4b0; end: 10305a543;  */

void FUN_10305a4b0(undefined8 *param_1)

{
  FUN_10305a544(*param_1,*(undefined1 *)(param_1 + 1));
  func_0x000107c61574(param_1[2]);
  func_0x000107c61574(param_1[3]);
  FUN_103059268(param_1[5],param_1[6],param_1[7],param_1[8],param_1[9],param_1[10],param_1[0xb],
                param_1[0xc],param_1[0xd],*(undefined1 *)(param_1 + 0xe));
  if (*(char *)(param_1 + 0x18) != -1) {
    FUN_103059268(param_1[0xf],param_1[0x10],param_1[0x11],param_1[0x12],param_1[0x13],param_1[0x14]
                  ,param_1[0x15],param_1[0x16],param_1[0x17],*(char *)(param_1 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[0x19]);
  return;
}



/* Entry: 10305a544; end: 10305a553;  */

void FUN_10305a544(undefined8 param_1,char param_2)

{
  if (param_2 != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)();
  return;
}



/* Entry: 10305a554; end: 10305a9a7;  */

undefined8 * FUN_10305a554(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  char cVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar11 = *param_2;
  uVar8 = *(undefined1 *)(param_2 + 1);
  FUN_10305a4a0(uVar11,uVar8);
  *param_1 = uVar11;
  *(undefined1 *)(param_1 + 1) = uVar8;
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar11 = param_2[5];
  uVar5 = param_2[6];
  uVar1 = param_2[7];
  uVar6 = param_2[8];
  uVar2 = param_2[9];
  uVar7 = param_2[10];
  uVar3 = param_2[0xb];
  uVar10 = param_2[0xc];
  uVar12 = param_2[0xd];
  uVar8 = *(undefined1 *)(param_2 + 0xe);
  func_0x000107c6157c();
  func_0x000107c6157c(uVar4);
  FUN_103059198(uVar11,uVar5,uVar1,uVar6,uVar2,uVar7,uVar3,uVar10,uVar12,uVar8);
  param_1[5] = uVar11;
  param_1[6] = uVar5;
  param_1[7] = uVar1;
  param_1[8] = uVar6;
  param_1[9] = uVar2;
  param_1[10] = uVar7;
  param_1[0xb] = uVar3;
  param_1[0xc] = uVar10;
  param_1[0xd] = uVar12;
  *(undefined1 *)(param_1 + 0xe) = uVar8;
  cVar9 = *(char *)(param_2 + 0x18);
  if (cVar9 == -1) {
    uVar11 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar11;
    uVar11 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar11;
    uVar11 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar11;
    uVar11 = *(undefined8 *)((long)param_2 + 0xb1);
    *(undefined8 *)((long)param_1 + 0xb9) = *(undefined8 *)((long)param_2 + 0xb9);
    *(undefined8 *)((long)param_1 + 0xb1) = uVar11;
    uVar11 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar11;
  }
  else {
    uVar11 = param_2[0xf];
    uVar4 = param_2[0x10];
    uVar1 = param_2[0x11];
    uVar5 = param_2[0x12];
    uVar2 = param_2[0x13];
    uVar6 = param_2[0x14];
    uVar3 = param_2[0x15];
    uVar7 = param_2[0x16];
    uVar10 = param_2[0x17];
    FUN_103059198(uVar11,uVar4,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar10,cVar9);
    param_1[0xf] = uVar11;
    param_1[0x10] = uVar4;
    param_1[0x11] = uVar1;
    param_1[0x12] = uVar5;
    param_1[0x13] = uVar2;
    param_1[0x14] = uVar6;
    param_1[0x15] = uVar3;
    param_1[0x16] = uVar7;
    param_1[0x17] = uVar10;
    *(char *)(param_1 + 0x18) = cVar9;
  }
  param_1[0x19] = param_2[0x19];
  func_0x000107c61434();
  return param_1;
}



/* Entry: 10305a9a8; end: 10305ab13;  */

undefined8 * FUN_10305a9a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  char cVar10;
  char cVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar8 = *(undefined1 *)(param_2 + 1);
  uVar12 = *param_1;
  *param_1 = *param_2;
  uVar9 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar8;
  FUN_10305a544(uVar12,uVar9);
  uVar12 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61574(uVar12);
  uVar12 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61574(uVar12);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar13 = param_2[0xd];
  uVar8 = *(undefined1 *)(param_2 + 0xe);
  uVar12 = param_1[5];
  uVar4 = param_1[6];
  uVar1 = param_1[7];
  uVar5 = param_1[8];
  uVar2 = param_1[9];
  uVar6 = param_1[10];
  uVar3 = param_1[0xb];
  uVar7 = param_1[0xc];
  uVar14 = param_1[0xd];
  uVar9 = *(undefined1 *)(param_1 + 0xe);
  uVar15 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar15;
  uVar15 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar15;
  uVar15 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar15;
  uVar15 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar15;
  param_1[0xd] = uVar13;
  *(undefined1 *)(param_1 + 0xe) = uVar8;
  FUN_103059268(uVar12,uVar4,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar14,uVar9);
  cVar10 = *(char *)(param_1 + 0x18);
  if (cVar10 != -1) {
    cVar11 = *(char *)(param_2 + 0x18);
    if (cVar11 != -1) {
      uVar13 = param_2[0x17];
      uVar12 = param_1[0xf];
      uVar4 = param_1[0x10];
      uVar1 = param_1[0x11];
      uVar5 = param_1[0x12];
      uVar2 = param_1[0x13];
      uVar6 = param_1[0x14];
      uVar3 = param_1[0x15];
      uVar7 = param_1[0x16];
      uVar14 = param_1[0x17];
      uVar15 = param_2[0xf];
      param_1[0x10] = param_2[0x10];
      param_1[0xf] = uVar15;
      uVar15 = param_2[0x11];
      param_1[0x12] = param_2[0x12];
      param_1[0x11] = uVar15;
      uVar15 = param_2[0x13];
      param_1[0x14] = param_2[0x14];
      param_1[0x13] = uVar15;
      uVar15 = param_2[0x15];
      param_1[0x16] = param_2[0x16];
      param_1[0x15] = uVar15;
      param_1[0x17] = uVar13;
      *(char *)(param_1 + 0x18) = cVar11;
      FUN_103059268(uVar12,uVar4,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar14,cVar10);
      goto LAB_10305aaf0;
    }
    FUN_103059634(param_1 + 0xf);
  }
  uVar12 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar12;
  uVar12 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar12;
  uVar12 = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x15] = uVar12;
  uVar12 = *(undefined8 *)((long)param_2 + 0xb1);
  *(undefined8 *)((long)param_1 + 0xb9) = *(undefined8 *)((long)param_2 + 0xb9);
  *(undefined8 *)((long)param_1 + 0xb1) = uVar12;
  uVar12 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar12;
LAB_10305aaf0:
  uVar12 = param_1[0x19];
  param_1[0x19] = param_2[0x19];
  func_0x000107c6142c(uVar12);
  return param_1;
}



/* Entry: 10305ab14; end: 10305abef;  */

int FUN_10305ab14(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x34] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10305abf0; end: 10305ad53;  */

void FUN_10305abf0(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long extraout_x8;
  long *plVar5;
  long lStack_70;
  undefined1 uStack_61;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  
  lVar3 = 0x112f36ae0;
  puVar4 = &UNK_10db7f1f0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar5 = (long *)((long)&lStack_70 + -extraout_x8);
  func_0x000107c5f7ac();
  *plVar5 = lVar3;
  *(undefined **)(&stack0xffffffffffffff98 + -extraout_x8) = puVar4;
  lVar3 = 0x112f36ae8;
  func_0x0001000285a8(0x112f36ae8,&UNK_10db7f1f8);
  FUN_10305ad54((long)plVar5 + (long)*(int *)(lVar3 + 0x2c),param_2);
  if (lRam0000000112f36af0 != -1) {
    func_0x000107c61568(0x112f36af0,FUN_103059e20);
  }
  uVar2 = uRam0000000113806b00;
  uStack_58 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x10);
  uStack_50 = *(undefined1 *)(param_2 + 0x20);
  func_0x0001000285a8(0x112d4fe10,&UNK_10d9160e0);
  func_0x000107c5f770(&uStack_61);
  func_0x00010305c408(plVar5,param_1,0x112f36ae0,&UNK_10db7f1f0);
  lVar3 = 0x112f36af8;
  func_0x0001000285a8(0x112f36af8,&UNK_10db7f208);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x24));
  *puVar1 = uVar2;
  *(undefined1 *)(puVar1 + 1) = uStack_61;
  func_0x000107c6157c(uVar2);
  func_0x00010305c688(plVar5,0x112f36ae0,&UNK_10db7f1f0);
  return;
}



/* Entry: 10305ad54; end: 10305b2c7;  */

void FUN_10305ad54(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_90;
  char cStack_81;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  lVar1 = 0x112f36b00;
  func_0x0001000285a8(0x112f36b00,&UNK_10db7f210);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar4 = (long)&uStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar4 - extraout_x12;
  lVar6 = 0x112f369b8;
  func_0x0001000285a8(0x112f369b8,&UNK_10db7f060);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar6 = lVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar6 - extraout_x12_00;
  uStack_78 = *(undefined8 *)(param_4 + 0x18);
  uVar8 = *(undefined8 *)(param_4 + 0x10);
  uStack_70 = *(undefined1 *)(param_4 + 0x20);
  uVar2 = 0x112d4fe10;
  uStack_80 = uVar8;
  func_0x0001000285a8(0x112d4fe10,&UNK_10d9160e0);
  func_0x000107c5f770(&cStack_81);
  if (cStack_81 == '\x01') {
    func_0x00010305affc(lVar7);
    FUN_10305b2c8(lVar5);
    func_0x000107c5f7e4();
    func_0x000107c5f2e0(0x3ff199999999999a,uVar8,param_3);
    uVar8 = uVar2;
    func_0x000107c5f2e4();
    uVar3 = uVar8;
    func_0x000107c5f2e8();
    func_0x000107c61574(uVar2);
    func_0x000107c61574(uVar8);
    *(undefined8 *)(lVar5 + *(int *)(lVar1 + 0x24)) = uVar3;
    func_0x00010305c408(lVar7,lVar6,0x112f369b8,&UNK_10db7f060);
    func_0x00010305c408(lVar5,lVar4,0x112f36b00,&UNK_10db7f210);
    func_0x00010305c408(lVar6,param_1,0x112f369b8,&UNK_10db7f060);
    lVar1 = 0x112f36b10;
    func_0x0001000285a8(0x112f36b10,&UNK_10db7f228);
    func_0x00010305c408(lVar4,param_1 + *(int *)(lVar1 + 0x30),0x112f36b00,&UNK_10db7f210);
    func_0x00010305c688(lVar5,0x112f36b00,&UNK_10db7f210);
    func_0x00010305c688(lVar7,0x112f369b8,&UNK_10db7f060);
    func_0x00010305c688(lVar4,0x112f36b00,&UNK_10db7f210);
    func_0x00010305c688(lVar6,0x112f369b8,&UNK_10db7f060);
  }
  lVar1 = 0x112f36b08;
  func_0x0001000285a8(0x112f36b08,&UNK_10db7f220);
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,cStack_81 != '\x01',1,lVar1);
  return;
}



/* Entry: 10305b2c8; end: 10305bf0b;  */

void FUN_10305b2c8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined1 uVar6;
  long lVar7;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [8];
  long alStack_1b0 [6];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [24];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  char cStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puVar8;
  
  lVar7 = 0;
  func_0x000107c5f6c4();
  lVar14 = *(long *)(lVar7 + -8);
  lVar10 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar5 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar12 = (undefined8 *)((long)alStack_1b0 + lVar5 + 0x10);
  func_0x000107c5f438();
  *param_1 = lVar10;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  lVar10 = 0x112f36b18;
  func_0x0001000285a8(0x112f36b18,&UNK_10db7f230);
  puVar8 = unaff_x20;
  func_0x00010305b63c((long)param_1 + (long)*(int *)(lVar10 + 0x2c));
  uVar6 = SUB81(puVar8,0);
  func_0x000107c5f568();
  uVar15 = func_0x000107c5f280(0x4040000000000000);
  lVar10 = 0x112f36b20;
  uVar19 = param_3;
  uVar17 = param_4;
  uVar20 = param_5;
  func_0x0001000285a8(0x112f36b20,&UNK_10db7f238);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(lVar10 + 0x24));
  *puVar1 = uVar6;
  *(undefined8 *)(puVar1 + 8) = uVar15;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  func_0x000107c5f584();
  uVar16 = func_0x000107c5f280(0x4038000000000000);
  lVar9 = 0x112f36b28;
  puVar13 = &UNK_10db7f240;
  uVar15 = uVar17;
  uVar21 = uVar20;
  func_0x0001000285a8();
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(lVar9 + 0x24));
  *puVar1 = (char)lVar10;
  *(undefined8 *)(puVar1 + 8) = uVar16;
  *(undefined8 *)(puVar1 + 0x10) = uVar19;
  *(undefined8 *)(puVar1 + 0x18) = uVar17;
  *(undefined8 *)(puVar1 + 0x20) = uVar20;
  puVar1[0x28] = 0;
  func_0x000107c5f7ac();
  *(long *)((long)alStack_1b0 + lVar5) = lVar9;
  *(undefined **)((long)alStack_1b0 + lVar5 + 8) = puVar13;
  auStack_1b8[lVar5] = 1;
  *(undefined8 *)((long)&uStack_1c0 + lVar5) = 0;
  auStack_1c8[lVar5] = 1;
  *(undefined8 *)((long)&uStack_1d0 + lVar5) = 0;
  func_0x000107c5f388(alStack_1b0 + 3,0,1,0,1,0x4073600000000000,0,0,1);
  lVar10 = 0x112f36b30;
  func_0x0001000285a8(0x112f36b30,&UNK_10db7f248);
  puVar8 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x24));
  puVar8[9] = uStack_150;
  puVar8[8] = uStack_158;
  puVar8[0xb] = uStack_140;
  puVar8[10] = uStack_148;
  puVar8[0xd] = uStack_130;
  puVar8[0xc] = uStack_138;
  puVar8[1] = alStack_1b0[4];
  *puVar8 = alStack_1b0[3];
  puVar8[3] = uStack_180;
  puVar8[2] = alStack_1b0[5];
  puVar8[5] = uStack_170;
  puVar8[4] = uStack_178;
  puVar8[7] = uStack_160;
  puVar8[6] = uStack_168;
  lVar10 = 0x112f36b38;
  func_0x0001000285a8(0x112f36b38,&UNK_10db7f250);
  puVar8 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x24));
  lVar10 = 0;
  func_0x000107c5f37c();
  iVar4 = *(int *)(lVar10 + 0x14);
  uVar3 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_110348d50;
  lVar10 = 0;
  func_0x000107c5f41c();
  (**(code **)(*(long *)(lVar10 + -8) + 0x68))((long)puVar8 + (long)iVar4,uVar3,lVar10);
  auVar18 = NEON_fmov(0x4028000000000000,8);
  puVar8[1] = auVar18._8_8_;
  *puVar8 = auVar18._0_8_;
  puVar11 = (undefined8 *)*unaff_x20;
  FUN_10305fc34(puVar11,*(undefined1 *)(unaff_x20 + 1));
  FUN_10307e424(auStack_128);
  if (cStack_c8 == '\x01') {
    func_0x000103080b18();
    uStack_c0 = *puVar11;
    uStack_b8 = puVar11[1];
    uStack_a8 = puVar11[3];
    uStack_b0 = puVar11[2];
    uStack_a0 = puVar11[4];
    uStack_98 = puVar11[5];
    uStack_88 = puVar11[7];
    uVar19 = puVar11[6];
    uStack_90 = uVar19;
    FUN_103080684();
    puVar12 = puVar11;
  }
  else {
    (**(code **)(lVar14 + 0x68))
              (puVar12,*(undefined4 *)PTR___s7SwiftUI5ColorV13RGBColorSpaceO4sRGByA2EmFWC_1103496a8,
               lVar7);
    uVar21 = 0x3ff0000000000000;
    func_0x000107c5f6d8(uStack_110);
    uVar19 = uStack_108;
    uVar15 = uStack_100;
  }
  lVar10 = 0x112d50058;
  puVar13 = &UNK_10d916410;
  func_0x0001000285a8();
  *(undefined8 **)((long)puVar8 + (long)*(int *)(lVar10 + 0x34)) = puVar12;
  *(undefined2 *)((long)puVar8 + (long)*(int *)(lVar10 + 0x38)) = 0x100;
  func_0x000107c5f7ac();
  lVar9 = 0x112eff310;
  func_0x0001000285a8(0x112eff310,&UNK_10db7f070);
  plVar2 = (long *)((long)puVar8 + (long)*(int *)(lVar9 + 0x24));
  *plVar2 = lVar10;
  plVar2[1] = (long)puVar13;
  func_0x000107c5f568();
  uVar17 = func_0x000107c5f280(0x4034000000000000);
  lVar10 = 0x112f36b40;
  func_0x0001000285a8(0x112f36b40,&UNK_10db7f258);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(lVar10 + 0x24));
  *puVar1 = (char)lVar9;
  *(undefined8 *)(puVar1 + 8) = uVar17;
  *(undefined8 *)(puVar1 + 0x10) = uVar19;
  *(undefined8 *)(puVar1 + 0x18) = uVar15;
  *(undefined8 *)(puVar1 + 0x20) = uVar21;
  puVar1[0x28] = 0;
  return;
}



/* Entry: 10305bf0c; end: 10305c14b;  */

void FUN_10305bf0c(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puStack_150;
  undefined1 uStack_148;
  undefined *puStack_140;
  undefined1 uStack_138;
  undefined1 uStack_137;
  undefined1 uStack_136;
  undefined1 auStack_80 [16];
  long lStack_70;
  
  lVar2 = 0;
  FUN_103059db0();
  lVar7 = *(long *)(lVar2 + -8);
  lVar11 = *(long *)(lVar7 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)&puStack_150 - (lVar11 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112e02cd8;
  func_0x0001000285a8(0x112e02cd8,&UNK_10d9d5220);
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x00010305c4d8(param_2,lVar10);
  uVar6 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar8 = uVar6 + 0xe0 & (uVar6 ^ 0xffffffffffffffff);
  puVar4 = &UNK_1106027c0;
  func_0x000107c613fc(&UNK_1106027c0,uVar8 + lVar11,uVar6 | 7);
  uVar12 = param_3[0x14];
  uVar14 = param_3[0x17];
  uVar13 = param_3[0x16];
  *(undefined8 *)(puVar4 + 0xb8) = param_3[0x15];
  *(undefined8 *)(puVar4 + 0xb0) = uVar12;
  *(undefined8 *)(puVar4 + 200) = uVar14;
  *(undefined8 *)(puVar4 + 0xc0) = uVar13;
  uVar12 = param_3[0x18];
  *(undefined8 *)(puVar4 + 0xd8) = param_3[0x19];
  *(undefined8 *)(puVar4 + 0xd0) = uVar12;
  uVar12 = param_3[0xc];
  uVar14 = param_3[0xf];
  uVar13 = param_3[0xe];
  *(undefined8 *)(puVar4 + 0x78) = param_3[0xd];
  *(undefined8 *)(puVar4 + 0x70) = uVar12;
  *(undefined8 *)(puVar4 + 0x88) = uVar14;
  *(undefined8 *)(puVar4 + 0x80) = uVar13;
  uVar14 = param_3[0x10];
  uVar13 = param_3[0x13];
  uVar12 = param_3[0x12];
  *(undefined8 *)(puVar4 + 0x98) = param_3[0x11];
  *(undefined8 *)(puVar4 + 0x90) = uVar14;
  *(undefined8 *)(puVar4 + 0xa8) = uVar13;
  *(undefined8 *)(puVar4 + 0xa0) = uVar12;
  uVar12 = param_3[4];
  uVar14 = param_3[7];
  uVar13 = param_3[6];
  *(undefined8 *)(puVar4 + 0x38) = param_3[5];
  *(undefined8 *)(puVar4 + 0x30) = uVar12;
  *(undefined8 *)(puVar4 + 0x48) = uVar14;
  *(undefined8 *)(puVar4 + 0x40) = uVar13;
  uVar14 = param_3[8];
  uVar13 = param_3[0xb];
  uVar12 = param_3[10];
  *(undefined8 *)(puVar4 + 0x58) = param_3[9];
  *(undefined8 *)(puVar4 + 0x50) = uVar14;
  *(undefined8 *)(puVar4 + 0x68) = uVar13;
  *(undefined8 *)(puVar4 + 0x60) = uVar12;
  uVar14 = *param_3;
  uVar13 = param_3[3];
  uVar12 = param_3[2];
  *(undefined8 *)(puVar4 + 0x18) = param_3[1];
  *(undefined8 *)(puVar4 + 0x10) = uVar14;
  *(undefined8 *)(puVar4 + 0x28) = uVar13;
  *(undefined8 *)(puVar4 + 0x20) = uVar12;
  func_0x00010305c51c(lVar10,puVar4 + uVar8);
  lStack_70 = param_2;
  FUN_10305c354(param_3,&puStack_150);
  func_0x000107c5f738(lVar10 - extraout_x8,FUN_10305c560,puVar4,FUN_10305c590,auStack_80,
                      PTR___s7SwiftUI4TextVN_1103493f8,PTR___s7SwiftUI4TextVAA4ViewAAWP_1103493e8);
  uVar1 = *(undefined1 *)(param_2 + *(int *)(lVar2 + 0x18));
  puVar4 = &UNK_10db7f308;
  func_0x000107c614e0();
  puVar5 = &UNK_10db7f338;
  func_0x000107c614e0();
  uStack_148 = 0;
  uStack_138 = 0;
  uStack_136 = 3;
  uVar12 = 0x112e02cf0;
  puStack_150 = puVar4;
  puStack_140 = puVar5;
  uStack_137 = uVar1;
  func_0x00010305c7c0(0x112e02cf0,0x112e02cd8,&UNK_10d9d5220,
                      PTR___s7SwiftUI6ButtonVyxGAA4ViewAAMc_110349850);
  uVar13 = uVar12;
  FUN_10305c388();
  func_0x000107c5f60c(param_1,&puStack_150,lVar3,&UNK_110602a78,uVar12,uVar13);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar4);
  (**(code **)(lVar9 + 8))(lVar10 - extraout_x8,lVar3);
  return;
}



/* Entry: 10305c14c; end: 10305c253;  */

void FUN_10305c14c(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 uStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  uStack_38 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = *(undefined8 *)(param_1 + 0x10);
  uStack_30 = *(undefined1 *)(param_1 + 0x20);
  uStack_41 = 0;
  uVar1 = 0x112d4fe10;
  func_0x0001000285a8(0x112d4fe10,&UNK_10d9160e0);
  func_0x000107c5f774(&uStack_41,uVar1);
  lVar2 = 0;
  FUN_103059db0();
  (**(code **)(param_2 + *(int *)(lVar2 + 0x1c)))();
  return;
}



/* Entry: 10305c254; end: 10305c25f;  */

void FUN_10305c254(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb5ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI12ViewModifierPAAE05_makeC08modifier6inputs4bodyAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVAiA01_J0V_ANtctFZ_110348800
  )();
  return;
}



/* Entry: 10305c260; end: 10305c34b;  */

void FUN_10305c260(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *unaff_x20;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_68 = unaff_x20[0x15];
  uStack_70 = unaff_x20[0x14];
  uStack_58 = unaff_x20[0x17];
  uStack_60 = unaff_x20[0x16];
  uStack_48 = unaff_x20[0x19];
  uStack_50 = unaff_x20[0x18];
  uStack_a8 = unaff_x20[0xd];
  uStack_b0 = unaff_x20[0xc];
  uStack_98 = unaff_x20[0xf];
  uStack_a0 = unaff_x20[0xe];
  uStack_88 = unaff_x20[0x11];
  uStack_90 = unaff_x20[0x10];
  uStack_78 = unaff_x20[0x13];
  uStack_80 = unaff_x20[0x12];
  uStack_e8 = unaff_x20[5];
  uStack_f0 = unaff_x20[4];
  uStack_d8 = unaff_x20[7];
  uStack_e0 = unaff_x20[6];
  uStack_c8 = unaff_x20[9];
  uStack_d0 = unaff_x20[8];
  uStack_b8 = unaff_x20[0xb];
  uStack_c0 = unaff_x20[10];
  uStack_108 = unaff_x20[1];
  uStack_110 = *unaff_x20;
  uStack_f8 = unaff_x20[3];
  uStack_100 = unaff_x20[2];
  uVar3 = param_2;
  func_0x000107c5f7ac();
  lVar4 = 0x112f36ac8;
  func_0x0001000285a8(0x112f36ac8,&UNK_10db7f1d8);
  lVar1 = param_1 + *(int *)(lVar4 + 0x24);
  FUN_10305abf0(lVar1,&uStack_110);
  lVar4 = 0x112f36ad0;
  func_0x0001000285a8(0x112f36ad0,&UNK_10db7f1e0);
  puVar2 = (undefined8 *)(lVar1 + *(int *)(lVar4 + 0x24));
  *puVar2 = uVar3;
  puVar2[1] = param_3;
  lVar4 = 0x112f36ad8;
  func_0x0001000285a8(0x112f36ad8,&UNK_10db7f1e8);
                    /* WARNING: Could not recover jumptable at 0x00010305c348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
  return;
}



/* Entry: 10305c34c; end: 10305c353;  */

void FUN_10305c34c(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puStack_150;
  undefined1 uStack_148;
  undefined *puStack_140;
  undefined1 uStack_138;
  undefined1 uStack_137;
  undefined1 uStack_136;
  undefined1 auStack_80 [16];
  long lStack_70;
  
  lVar2 = 0;
  FUN_103059db0();
  lVar7 = *(long *)(lVar2 + -8);
  lVar11 = *(long *)(lVar7 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)&puStack_150 - (lVar11 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112e02cd8;
  func_0x0001000285a8(0x112e02cd8,&UNK_10d9d5220);
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x00010305c4d8(param_2,lVar10);
  uVar6 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar8 = uVar6 + 0xe0 & (uVar6 ^ 0xffffffffffffffff);
  puVar4 = &UNK_1106027c0;
  func_0x000107c613fc(&UNK_1106027c0,uVar8 + lVar11,uVar6 | 7);
  uVar12 = *(undefined8 *)(unaff_x20 + 0xb0);
  uVar14 = *(undefined8 *)(unaff_x20 + 200);
  uVar13 = *(undefined8 *)(unaff_x20 + 0xc0);
  *(undefined8 *)(puVar4 + 0xb8) = *(undefined8 *)(unaff_x20 + 0xb8);
  *(undefined8 *)(puVar4 + 0xb0) = uVar12;
  *(undefined8 *)(puVar4 + 200) = uVar14;
  *(undefined8 *)(puVar4 + 0xc0) = uVar13;
  uVar12 = *(undefined8 *)(unaff_x20 + 0xd0);
  *(undefined8 *)(puVar4 + 0xd8) = *(undefined8 *)(unaff_x20 + 0xd8);
  *(undefined8 *)(puVar4 + 0xd0) = uVar12;
  uVar12 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(puVar4 + 0x78) = *(undefined8 *)(unaff_x20 + 0x78);
  *(undefined8 *)(puVar4 + 0x70) = uVar12;
  *(undefined8 *)(puVar4 + 0x88) = uVar14;
  *(undefined8 *)(puVar4 + 0x80) = uVar13;
  uVar14 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar13 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar12 = *(undefined8 *)(unaff_x20 + 0xa0);
  *(undefined8 *)(puVar4 + 0x98) = *(undefined8 *)(unaff_x20 + 0x98);
  *(undefined8 *)(puVar4 + 0x90) = uVar14;
  *(undefined8 *)(puVar4 + 0xa8) = uVar13;
  *(undefined8 *)(puVar4 + 0xa0) = uVar12;
  uVar12 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(puVar4 + 0x38) = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(puVar4 + 0x30) = uVar12;
  *(undefined8 *)(puVar4 + 0x48) = uVar14;
  *(undefined8 *)(puVar4 + 0x40) = uVar13;
  uVar14 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x60);
  *(undefined8 *)(puVar4 + 0x58) = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(puVar4 + 0x50) = uVar14;
  *(undefined8 *)(puVar4 + 0x68) = uVar13;
  *(undefined8 *)(puVar4 + 0x60) = uVar12;
  uVar14 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(puVar4 + 0x18) = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(puVar4 + 0x10) = uVar14;
  *(undefined8 *)(puVar4 + 0x28) = uVar13;
  *(undefined8 *)(puVar4 + 0x20) = uVar12;
  func_0x00010305c51c(lVar10,puVar4 + uVar8);
  lStack_70 = param_2;
  FUN_10305c354((undefined8 *)(unaff_x20 + 0x10),&puStack_150);
  func_0x000107c5f738(lVar10 - extraout_x8,FUN_10305c560,puVar4,FUN_10305c590,auStack_80,
                      PTR___s7SwiftUI4TextVN_1103493f8,PTR___s7SwiftUI4TextVAA4ViewAAWP_1103493e8);
  uVar1 = *(undefined1 *)(param_2 + *(int *)(lVar2 + 0x18));
  puVar4 = &UNK_10db7f308;
  func_0x000107c614e0();
  puVar5 = &UNK_10db7f338;
  func_0x000107c614e0();
  uStack_148 = 0;
  uStack_138 = 0;
  uStack_136 = 3;
  uVar12 = 0x112e02cf0;
  puStack_150 = puVar4;
  puStack_140 = puVar5;
  uStack_137 = uVar1;
  func_0x00010305c7c0(0x112e02cf0,0x112e02cd8,&UNK_10d9d5220,
                      PTR___s7SwiftUI6ButtonVyxGAA4ViewAAMc_110349850);
  uVar13 = uVar12;
  FUN_10305c388();
  func_0x000107c5f60c(param_1,&puStack_150,lVar3,&UNK_110602a78,uVar12,uVar13);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar4);
  (**(code **)(lVar9 + 8))(lVar10 - extraout_x8,lVar3);
  return;
}



/* Entry: 10305c354; end: 10305c387;  */

undefined8 FUN_10305c354(undefined8 param_1,undefined8 param_2)

{
  FUN_10305a554(param_2,param_1,&UNK_110602760);
  return param_2;
}



/* Entry: 10305c388; end: 10305c3c7;  */

void FUN_10305c388(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f36b78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db7f658;
  func_0x000107c61520(&UNK_10db7f658,&UNK_110602a78);
  puRam0000000112f36b78 = puVar1;
  return;
}



/* Entry: 10305c3c8; end: 10305c55f;  */

void FUN_10305c3c8(long *param_1,code *param_2,long param_3)

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



/* Entry: 10305c560; end: 10305c58f;  */

void FUN_10305c560(void)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  undefined1 uStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  lVar2 = 0;
  FUN_103059db0();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_30 = *(undefined1 *)(unaff_x20 + 0x30);
  uStack_41 = 0;
  uVar1 = 0x112d4fe10;
  func_0x0001000285a8(0x112d4fe10,&UNK_10d9160e0);
  func_0x000107c5f774(&uStack_41,uVar1);
  lVar2 = 0;
  FUN_103059db0();
  (**(code **)(unaff_x20 + (uVar3 + 0xe0 & (uVar3 ^ 0xffffffffffffffff)) +
              (long)*(int *)(lVar2 + 0x1c)))();
  return;
}



/* Entry: 10305c590; end: 10305c597;  */

void FUN_10305c590(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar3 = 0;
  FUN_103059db0();
  puVar1 = (undefined8 *)(lVar5 + *(int *)(lVar3 + 0x14));
  uVar2 = *puVar1;
  uVar4 = puVar1[1];
  if (*(char *)(puVar1 + 9) == '\x01') {
    func_0x000107c61434();
    param_3 = uVar4;
    uVar4 = uVar2;
  }
  else {
    FUN_10307ff24();
  }
  *param_1 = uVar4;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = PTR___swiftEmptyArrayStorage_11034f1c8;
  return;
}



/* Entry: 10305c598; end: 10305c62f;  */

void FUN_10305c598(void)

{
  long unaff_x20;
  
  FUN_10305a544(*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  FUN_103059268(*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                *(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
                *(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70),
                *(undefined8 *)(unaff_x20 + 0x78),*(undefined1 *)(unaff_x20 + 0x80));
  if (*(char *)(unaff_x20 + 0xd0) != -1) {
    FUN_103059268(*(undefined8 *)(unaff_x20 + 0x88),*(undefined8 *)(unaff_x20 + 0x90),
                  *(undefined8 *)(unaff_x20 + 0x98),*(undefined8 *)(unaff_x20 + 0xa0),
                  *(undefined8 *)(unaff_x20 + 0xa8),*(undefined8 *)(unaff_x20 + 0xb0),
                  *(undefined8 *)(unaff_x20 + 0xb8),*(undefined8 *)(unaff_x20 + 0xc0),
                  *(undefined8 *)(unaff_x20 + 200),*(char *)(unaff_x20 + 0xd0));
  }
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xd8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10305c630; end: 10305c6c7;  */

void FUN_10305c630(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 uStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_30 = *(undefined1 *)(unaff_x20 + 0x30);
  uStack_41 = 0;
  uVar1 = 0x112d4fe10;
  func_0x0001000285a8(0x112d4fe10,&UNK_10d9160e0);
  func_0x000107c5f774(&uStack_41,uVar1);
  return;
}



/* Entry: 10305c6c8; end: 10305c707;  */

void FUN_10305c6c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f36ba0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db80aec;
  func_0x000107c61520(&UNK_10db80aec,&UNK_110604058);
  puRam0000000112f36ba0 = puVar1;
  return;
}



/* Entry: 10305c708; end: 10305c803;  */

void FUN_10305c708(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112f36ba8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f36ac8;
  func_0x00010002969c(0x112f36ac8,&UNK_10db7f1d8);
  uVar2 = 0x112f36bb0;
  func_0x00010305c7c0(0x112f36bb0,0x112f36ad8,&UNK_10db7f1e8,
                      PTR___s7SwiftUI21_ViewModifier_ContentVyxGAA0C0AAMc_110349008);
  uVar3 = 0x112f36bb8;
  func_0x00010305c7c0(0x112f36bb8,0x112f36ad0,&UNK_10db7f1e0,
                      PTR___s7SwiftUI16_OverlayModifierVyxGAA04ViewD0AAMc_110348bf0);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112f36ba8 = puVar4;
  return;
}



/* Entry: 10305c804; end: 10305c977;  */

void FUN_10305c804(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  undefined8 *unaff_x20;
  undefined1 auStack_e0 [80];
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  lVar1 = 0x112f36bc0;
  puVar3 = &UNK_10db7f368;
  func_0x0001000285a8(0x112f36bc0,&UNK_10db7f368);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = (undefined *)unaff_x20[1];
  if (*(char *)(unaff_x20 + 9) == '\x01') {
    uStack_78 = unaff_x20[3];
    uStack_80 = unaff_x20[2];
    uStack_68 = unaff_x20[5];
    uStack_70 = unaff_x20[4];
    uStack_58 = unaff_x20[7];
    uStack_60 = unaff_x20[6];
    uStack_50 = unaff_x20[8];
    uStack_48 = 1;
    uStack_90 = *unaff_x20;
    puStack_88 = puVar2;
    func_0x000103059b1c(&uStack_90,auStack_e0);
  }
  else if (*(char *)(unaff_x20 + 9) == -1) {
    puVar2 = (undefined *)0x0;
  }
  else {
    uStack_78 = unaff_x20[3];
    uStack_80 = unaff_x20[2];
    uStack_68 = unaff_x20[5];
    uStack_70 = unaff_x20[4];
    uStack_58 = unaff_x20[7];
    uStack_60 = unaff_x20[6];
    uStack_50 = unaff_x20[8];
    uStack_90 = *unaff_x20;
    puStack_88 = puVar2;
    FUN_10307ff24();
    puVar2 = puVar3;
  }
  puVar4 = puVar2;
  FUN_10305c978(auStack_e0 + -extraout_x8);
  func_0x000107c6142c(puVar2);
  FUN_10305cff4();
  puVar3 = puVar2;
  FUN_10305d1cc();
  func_0x000107c5f640(param_1,puVar2,puVar4,0,PTR___swiftEmptyArrayStorage_11034f1c8,lVar1,puVar3);
  func_0x000107c6142c(puVar4);
  func_0x00010305deb0(auStack_e0 + -extraout_x8,0x112f36bc0,&UNK_10db7f368);
  return;
}



/* Entry: 10305c978; end: 10305cff3;  */

void FUN_10305c978(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,byte *param_7,long param_8)

{
  long lVar1;
  long *plVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  long extraout_x8;
  long extraout_x8_00;
  long lVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uStack_7e0;
  undefined1 auStack_7d8 [8];
  undefined8 uStack_7d0;
  undefined1 auStack_7c8 [8];
  long alStack_7c0 [2];
  ulong uStack_7b0;
  ulong *puStack_7a8;
  undefined4 uStack_79c;
  long alStack_798 [37];
  ulong uStack_670;
  undefined2 uStack_668;
  undefined6 uStack_666;
  undefined2 uStack_660;
  undefined6 uStack_65e;
  undefined2 uStack_658;
  undefined6 uStack_656;
  undefined2 uStack_650;
  undefined6 uStack_64e;
  undefined2 uStack_648;
  undefined6 uStack_646;
  undefined2 uStack_640;
  undefined6 uStack_63e;
  undefined2 uStack_638;
  undefined6 uStack_636;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined1 uStack_5e0;
  undefined1 auStack_5d8 [120];
  ulong uStack_560;
  byte *pbStack_558;
  undefined1 uStack_550;
  undefined7 uStack_54f;
  undefined *puStack_548;
  undefined8 *puStack_540;
  ulong uStack_538;
  undefined8 *puStack_530;
  undefined1 uStack_528;
  undefined7 uStack_527;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined1 uStack_500;
  ulong uStack_4f8;
  byte *pbStack_4f0;
  undefined1 uStack_4e8;
  undefined *puStack_4e0;
  undefined8 *puStack_4d8;
  ulong uStack_4d0;
  undefined8 *puStack_4c8;
  undefined1 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined1 uStack_498;
  ulong uStack_490;
  undefined2 uStack_488;
  undefined6 uStack_486;
  undefined2 uStack_480;
  undefined6 uStack_47e;
  undefined2 uStack_478;
  undefined6 uStack_476;
  undefined2 uStack_470;
  undefined6 uStack_46e;
  undefined2 uStack_468;
  undefined6 uStack_466;
  undefined2 uStack_460;
  undefined6 uStack_45e;
  undefined2 uStack_458;
  undefined6 uStack_456;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined1 uStack_428;
  undefined7 uStack_427;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined1 uStack_400;
  undefined6 uStack_3f0;
  undefined2 uStack_3ea;
  undefined6 uStack_3e8;
  undefined2 uStack_3e2;
  undefined6 uStack_3e0;
  undefined2 uStack_3da;
  undefined6 uStack_3d8;
  undefined2 uStack_3d2;
  undefined6 uStack_3d0;
  undefined2 uStack_3ca;
  undefined6 uStack_3c8;
  undefined2 uStack_3c2;
  undefined6 uStack_3c0;
  undefined2 uStack_3ba;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined1 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined1 uStack_360;
  ulong uStack_350;
  undefined2 uStack_348;
  undefined6 uStack_346;
  undefined2 uStack_340;
  undefined6 uStack_33e;
  undefined2 uStack_338;
  undefined6 uStack_336;
  undefined2 uStack_330;
  undefined6 uStack_32e;
  undefined2 uStack_328;
  undefined6 uStack_326;
  undefined2 uStack_320;
  undefined6 uStack_31e;
  undefined2 uStack_318;
  undefined6 uStack_316;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined1 uStack_2f0;
  undefined7 uStack_2ef;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  
  lVar13 = 0x112f36c48;
  func_0x0001000285a8(0x112f36c48,&UNK_10db7f400);
  alStack_798[2] = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = -extraout_x8;
  puVar12 = (ulong *)((long)&uStack_7b0 + lVar13);
  uVar8 = 0x112f36be8;
  puVar18 = &UNK_10db7f378;
  func_0x0001000285a8(0x112f36be8,&UNK_10db7f378);
  alStack_798[3] = uVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(uVar8 - 8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = (long)puVar12 - extraout_x8_00;
  if (param_7 != (byte *)0x0) {
    uVar14 = param_6 & 0xffffffffffff;
    if (((ulong)param_7 & 0x2000000000000000) != 0) {
      uVar14 = (ulong)param_7 >> 0x38 & 0xf;
    }
    if (uVar14 != 0) {
      pbVar7 = param_7;
      alStack_798[0] = lVar19;
      func_0x000107c61434();
      func_0x000103081b50();
      uVar8 = (ulong)*pbVar7;
      FUN_103081288(*(undefined8 *)(pbVar7 + 8),*(undefined8 *)(pbVar7 + 0x18),uVar8,pbVar7[0x10]);
      puVar9 = (undefined8 *)&UNK_10db7f408;
      uStack_7b0 = uVar8;
      func_0x000107c614e0();
      puVar10 = puVar9;
      FUN_103080ad0();
      uStack_e8 = puVar10[1];
      uStack_f0 = *puVar10;
      uStack_d8 = puVar10[3];
      uStack_e0 = puVar10[2];
      uStack_c8 = puVar10[5];
      uStack_d0 = puVar10[4];
      uStack_b8 = puVar10[7];
      uVar23 = puVar10[6];
      uStack_c0 = uVar23;
      FUN_103080684();
      puVar11 = puVar10;
      func_0x000107c5f568();
      uVar21 = 0x4018000000000000;
      uVar6 = uVar20;
      alStack_798[1] = param_1;
      func_0x000107c5f280();
      uVar16 = uVar23;
      uVar17 = param_4;
      uVar24 = param_5;
      func_0x000107c5f584();
      uVar8 = uStack_7b0;
      uStack_550 = 0;
      puStack_548 = PTR___swiftEmptyArrayStorage_11034f1c8;
      uStack_538 = uStack_7b0;
      uVar20 = SUB84(puVar11,0);
      uStack_500 = 0;
      uVar22 = 0x4000000000000000;
      puStack_7a8 = puVar12;
      uStack_79c = uVar6;
      uStack_560 = param_6;
      pbStack_558 = param_7;
      puStack_540 = puVar9;
      puStack_530 = puVar10;
      uStack_528 = (char)puVar11;
      uStack_520 = uVar21;
      uStack_518 = uVar23;
      uStack_510 = param_4;
      uStack_508 = param_5;
      func_0x000107c5f280();
      uStack_308 = uStack_518;
      uStack_310 = uStack_520;
      uStack_2f8 = uStack_508;
      uStack_300 = uStack_510;
      uStack_2f0 = uStack_500;
      uStack_348 = SUB82(pbStack_558,0);
      uStack_346 = (undefined6)((ulong)pbStack_558 >> 0x10);
      uStack_350 = uStack_560;
      uStack_338 = SUB82(puStack_548,0);
      uStack_336 = (undefined6)((ulong)puStack_548 >> 0x10);
      uStack_340 = (undefined2)CONCAT71(uStack_54f,uStack_550);
      uStack_33e = (undefined6)((uint7)uStack_54f >> 8);
      uStack_328 = (undefined2)uStack_538;
      uStack_326 = (undefined6)(uStack_538 >> 0x10);
      uStack_330 = SUB82(puStack_540,0);
      uStack_32e = (undefined6)((ulong)puStack_540 >> 0x10);
      uStack_318 = (undefined2)CONCAT71(uStack_527,uStack_528);
      uStack_316 = (undefined6)((uint7)uStack_527 >> 8);
      uStack_320 = SUB82(puStack_530,0);
      uStack_31e = (undefined6)((ulong)puStack_530 >> 0x10);
      uStack_4e8 = 0;
      puStack_4e0 = PTR___swiftEmptyArrayStorage_11034f1c8;
      uStack_4d0 = uVar8;
      uStack_498 = 0;
      uVar15 = 0x112f36a10;
      uStack_4f8 = param_6;
      pbStack_4f0 = param_7;
      puStack_4d8 = puVar9;
      puStack_4c8 = puVar10;
      uStack_4c0 = (char)puVar11;
      uStack_4b8 = uVar21;
      uStack_4b0 = uVar23;
      uStack_4a8 = param_4;
      uStack_4a0 = param_5;
      FUN_10305de68(&uStack_560,&uStack_240,0x112f36a10,&UNK_10db7f0c8);
      puVar12 = &uStack_4f8;
      func_0x00010305deb0(puVar12,0x112f36a10,&UNK_10db7f0c8);
      func_0x000107c5f7ac();
      uStack_448 = uStack_308;
      uStack_450 = uStack_310;
      uStack_438 = uStack_2f8;
      uStack_440 = uStack_300;
      uStack_430 = CONCAT71(uStack_2ef,uStack_2f0);
      uStack_488 = uStack_348;
      uStack_486 = uStack_346;
      uStack_478 = uStack_338;
      uStack_476 = uStack_336;
      uStack_480 = uStack_340;
      uStack_47e = uStack_33e;
      uStack_490 = uStack_350;
      uStack_468 = uStack_328;
      uStack_466 = uStack_326;
      uStack_470 = uStack_330;
      uStack_46e = uStack_32e;
      uStack_458 = uStack_318;
      uStack_456 = uStack_316;
      uStack_460 = uStack_320;
      uStack_45e = uStack_31e;
      uVar3 = (undefined1)uStack_79c;
      uStack_400 = 0;
      uStack_428 = uVar3;
      uStack_420 = uVar22;
      uStack_418 = uVar16;
      uStack_410 = uVar17;
      uStack_408 = uVar24;
      *(ulong **)(lVar19 + -0x10) = puVar12;
      *(undefined8 *)(lVar19 + -8) = uVar15;
      *(undefined1 *)(lVar19 + -0x18) = 1;
      *(undefined8 *)(lVar19 + -0x20) = 0;
      *(undefined1 *)(lVar19 + -0x28) = 1;
      *(undefined8 *)(lVar19 + -0x30) = 0;
      func_0x000107c5f388(auStack_5d8,0x4032000000000000,0,0,1,0,1,0x4032000000000000,0);
      uStack_608 = CONCAT71(uStack_427,uStack_428);
      uStack_610 = uStack_430;
      uStack_5f8 = uStack_418;
      uStack_600 = uStack_420;
      uStack_5e8 = uStack_408;
      uStack_5f0 = uStack_410;
      uStack_5e0 = uStack_400;
      uStack_648 = uStack_468;
      uStack_646 = uStack_466;
      uStack_650 = uStack_470;
      uStack_64e = uStack_46e;
      uStack_638 = uStack_458;
      uStack_636 = uStack_456;
      uStack_640 = uStack_460;
      uStack_63e = uStack_45e;
      uStack_628 = uStack_448;
      uStack_630 = uStack_450;
      uStack_618 = uStack_438;
      uStack_620 = uStack_440;
      uStack_668 = uStack_488;
      uStack_666 = uStack_486;
      uStack_670 = uStack_490;
      uStack_658 = uStack_478;
      uStack_656 = uStack_476;
      uStack_660 = uStack_480;
      uStack_65e = uStack_47e;
      uStack_3a8 = uStack_308;
      uStack_3b0 = uStack_310;
      uStack_398 = uStack_2f8;
      uStack_3a0 = uStack_300;
      uStack_390 = CONCAT71(uStack_2ef,uStack_2f0);
      uStack_3e8 = (undefined6)CONCAT62(uStack_346,uStack_348);
      uStack_3e2 = (undefined2)((uint6)uStack_346 >> 0x20);
      uStack_3f0 = (undefined6)uStack_350;
      uStack_3ea = (undefined2)(uStack_350 >> 0x30);
      uStack_3d8 = (undefined6)CONCAT62(uStack_336,uStack_338);
      uStack_3d2 = (undefined2)((uint6)uStack_336 >> 0x20);
      uStack_3e0 = (undefined6)CONCAT62(uStack_33e,uStack_340);
      uStack_3da = (undefined2)((uint6)uStack_33e >> 0x20);
      uStack_3b8 = CONCAT62(uStack_316,uStack_318);
      uStack_3c8 = (undefined6)CONCAT62(uStack_326,uStack_328);
      uStack_3c2 = (undefined2)((uint6)uStack_326 >> 0x20);
      uStack_3d0 = (undefined6)CONCAT62(uStack_32e,uStack_330);
      uStack_3ca = (undefined2)((uint6)uStack_32e >> 0x20);
      uStack_3c0 = (undefined6)CONCAT62(uStack_31e,uStack_320);
      uStack_3ba = (undefined2)((uint6)uStack_31e >> 0x20);
      uStack_360 = 0;
      uStack_388 = uVar3;
      uStack_380 = uVar22;
      uStack_378 = uVar16;
      uStack_370 = uVar17;
      uStack_368 = uVar24;
      FUN_10305de68(&uStack_490,&uStack_240,0x112f36c08,&UNK_10db7f388);
      func_0x00010305deb0(&uStack_3f0,0x112f36c08,&UNK_10db7f388);
      lVar5 = alStack_798[3];
      lVar4 = alStack_798[0];
      lVar1 = alStack_798[0] + *(int *)(alStack_798[3] + 0x24);
      uVar6 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_110348d50;
      lVar13 = 0;
      func_0x000107c5f41c();
      lVar19 = lVar1;
      (**(code **)(*(long *)(lVar13 + -8) + 0x68))(lVar1,uVar6,lVar13);
      uStack_128 = *(undefined8 *)(param_8 + 0x58);
      uStack_130 = *(undefined8 *)(param_8 + 0x50);
      uStack_118 = *(undefined8 *)(param_8 + 0x68);
      uStack_120 = *(undefined8 *)(param_8 + 0x60);
      uStack_108 = *(undefined8 *)(param_8 + 0x78);
      uStack_110 = *(undefined8 *)(param_8 + 0x70);
      uStack_f8 = *(undefined8 *)(param_8 + 0x88);
      uStack_100 = *(undefined8 *)(param_8 + 0x80);
      FUN_103080684();
      lVar13 = 0x112e02d80;
      puVar18 = &UNK_10d9dee00;
      func_0x0001000285a8();
      *(long *)(lVar1 + *(int *)(lVar13 + 0x34)) = lVar19;
      *(undefined2 *)(lVar1 + *(int *)(lVar13 + 0x38)) = 0x100;
      func_0x000107c5f7ac();
      func_0x000107c610b4(&uStack_350,&uStack_670,0x108);
      lVar19 = 0x112e02d88;
      func_0x0001000285a8(0x112e02d88,&UNK_10d9d5330);
      plVar2 = (long *)(lVar1 + *(int *)(lVar19 + 0x24));
      *plVar2 = lVar13;
      plVar2[1] = (long)puVar18;
      func_0x000107c610b4(lVar4,&uStack_670,0x108);
      func_0x000107c610b4(&uStack_240,&uStack_670,0x108);
      FUN_10305de68(&uStack_350,alStack_798 + 4,0x112f36bf8,&UNK_10db7f380);
      func_0x00010305deb0(&uStack_240,0x112f36bf8,&UNK_10db7f380);
      puVar12 = puStack_7a8;
      FUN_10305de68(lVar4,puStack_7a8,0x112f36be8,&UNK_10db7f378);
      func_0x000107c6159c(puVar12,alStack_798[2],0);
      uVar15 = 0x112d4f680;
      func_0x0001000285a8(0x112d4f680,&UNK_10d915678);
      uVar17 = uVar15;
      func_0x00010305d2b4();
      uVar16 = uVar17;
      func_0x000100f79884();
      func_0x000107c5f490(alStack_798[1],puVar12,lVar5,uVar15,uVar17,uVar16);
      func_0x00010305deb0(lVar4,0x112f36be8,&UNK_10db7f378);
      return;
    }
  }
  uStack_238 = *(undefined8 *)(param_8 + 0x58);
  uStack_240 = *(undefined8 *)(param_8 + 0x50);
  uStack_228 = *(undefined8 *)(param_8 + 0x68);
  uStack_230 = *(undefined8 *)(param_8 + 0x60);
  uStack_218 = *(undefined8 *)(param_8 + 0x78);
  uStack_220 = *(undefined8 *)(param_8 + 0x70);
  uStack_208 = *(undefined8 *)(param_8 + 0x88);
  uStack_210 = *(undefined8 *)(param_8 + 0x80);
  FUN_103080684();
  uVar14 = uVar8;
  func_0x000107c5f7ac();
  func_0x000107c5f2d4(&uStack_490,0x4024000000000000,0,0x4024000000000000,0,uVar14,puVar18);
  uStack_3e2 = (undefined2)_uStack_488;
  uStack_3e0 = (undefined6)((ulong)_uStack_488 >> 0x10);
  uStack_3ea = (undefined2)uStack_490;
  uStack_3e8 = (undefined6)(uStack_490 >> 0x10);
  uStack_3d2 = (undefined2)_uStack_478;
  uStack_3d0 = (undefined6)((ulong)_uStack_478 >> 0x10);
  uStack_3da = (undefined2)_uStack_480;
  uStack_3d8 = (undefined6)((ulong)_uStack_480 >> 0x10);
  uStack_3c2 = (undefined2)_uStack_468;
  uStack_3c0 = (undefined6)((ulong)_uStack_468 >> 0x10);
  uStack_3ca = (undefined2)_uStack_470;
  uStack_3c8 = (undefined6)((ulong)_uStack_470 >> 0x10);
  uStack_668 = 0x100;
  uStack_65e = uStack_3e8;
  uStack_658 = uStack_3e2;
  uStack_666 = uStack_3f0;
  uStack_660 = uStack_3ea;
  uStack_64e = uStack_3d8;
  uStack_648 = uStack_3d2;
  uStack_656 = uStack_3e0;
  uStack_650 = uStack_3da;
  uStack_63e = uStack_3c8;
  uStack_646 = uStack_3d0;
  uStack_640 = uStack_3ca;
  uStack_348 = 0x100;
  uStack_31e = uStack_3c8;
  uStack_318 = uStack_3c2;
  uStack_326 = uStack_3d0;
  uStack_320 = uStack_3ca;
  uStack_32e = uStack_3d8;
  uStack_328 = uStack_3d2;
  uStack_336 = uStack_3e0;
  uStack_330 = uStack_3da;
  uStack_33e = uStack_3e8;
  uStack_338 = uStack_3e2;
  uStack_340 = uStack_3ea;
  uVar15 = 0x112d4f680;
  uStack_670 = uVar8;
  uStack_638 = uStack_3c2;
  uStack_636 = uStack_3c0;
  uStack_350 = uVar8;
  uStack_316 = uStack_3c0;
  FUN_10305de68(&uStack_670,alStack_798 + 4,0x112d4f680,&UNK_10d915678);
  func_0x00010305deb0(&uStack_350,0x112d4f680,&UNK_10d915678);
  uVar8 = uStack_670;
  uVar17 = CONCAT62(uStack_656,uStack_658);
  uVar16 = CONCAT62(uStack_65e,uStack_660);
  *(ulong *)((long)&puStack_7a8 + lVar13) = CONCAT62(uStack_666,uStack_668);
  *puVar12 = uVar8;
  *(undefined8 *)((long)alStack_798 + lVar13) = uVar17;
  *(undefined8 *)(&stack0xfffffffffffff860 + lVar13) = uVar16;
  uVar16 = CONCAT62(uStack_64e,uStack_650);
  uVar24 = CONCAT62(uStack_636,uStack_638);
  uVar17 = CONCAT62(uStack_63e,uStack_640);
  *(ulong *)((long)alStack_798 + lVar13 + 0x10) = CONCAT62(uStack_646,uStack_648);
  *(undefined8 *)((long)alStack_798 + lVar13 + 8) = uVar16;
  *(undefined8 *)((long)alStack_798 + lVar13 + 0x20) = uVar24;
  *(undefined8 *)((long)alStack_798 + lVar13 + 0x18) = uVar17;
  func_0x000107c6159c(puVar12,alStack_798[2],1);
  func_0x0001000285a8(0x112d4f680,&UNK_10d915678);
  uVar16 = uVar15;
  func_0x00010305d2b4();
  uVar17 = uVar16;
  func_0x000100f79884();
  func_0x000107c5f490(param_1,puVar12,alStack_798[3],uVar15,uVar16,uVar17);
  return;
}



/* Entry: 10305cff4; end: 10305d1cb;  */

undefined1  [16] FUN_10305cff4(undefined8 ***param_1,undefined8 ***param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 *unaff_x20;
  undefined8 ***pppuVar4;
  undefined8 uVar5;
  undefined8 ***pppuVar6;
  undefined1 auVar7 [16];
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined8 **ppuStack_120;
  undefined8 **ppuStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined8 **ppuStack_c8;
  undefined8 **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 **ppuStack_80;
  undefined8 **ppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  pppuVar3 = (undefined8 ***)&puStack_170;
  pppuVar2 = (undefined8 ***)&puStack_170;
  uVar5 = *(undefined8 *)((long)unaff_x20 + 0xd1);
  uStack_40 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0xc9) >> 0x38);
  pppuVar6 = (undefined8 ***)unaff_x20[0x13];
  pppuVar4 = (undefined8 ***)unaff_x20[0x12];
  uStack_68 = unaff_x20[0x15];
  uStack_70 = unaff_x20[0x14];
  uStack_58 = unaff_x20[0x17];
  uStack_60 = unaff_x20[0x16];
  uStack_50 = unaff_x20[0x18];
  uStack_48 = (undefined1)unaff_x20[0x19];
  uStack_47 = (undefined7)((ulong)unaff_x20[0x19] >> 8);
  uStack_3f._7_1_ = (char)((ulong)uVar5 >> 0x38);
  ppuStack_80 = pppuVar4;
  ppuStack_78 = pppuVar6;
  uStack_3f = uVar5;
  if (uStack_3f._7_1_ == '\x01') {
    uStack_f8 = unaff_x20[0x17];
    uStack_100 = unaff_x20[0x16];
    uStack_f0 = unaff_x20[0x18];
    uStack_e8 = (undefined1)unaff_x20[0x19];
    uStack_df = (undefined7)*(undefined8 *)((long)unaff_x20 + 0xd1);
    uStack_d8 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0xd1) >> 0x38);
    uStack_e7 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0xc9);
    uStack_e0 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0xc9) >> 0x38);
    ppuStack_118 = (undefined8 **)unaff_x20[0x13];
    ppuStack_120 = (undefined8 **)unaff_x20[0x12];
    uStack_108 = unaff_x20[0x15];
    uStack_110 = unaff_x20[0x14];
    func_0x000103059b1c(&ppuStack_120,&puStack_170);
    goto LAB_10305d1b0;
  }
  if (uStack_3f._7_1_ != -1) {
    ppuStack_118 = (undefined8 **)unaff_x20[0x13];
    ppuStack_120 = (undefined8 **)unaff_x20[0x12];
    uStack_b0 = unaff_x20[0x15];
    uStack_b8 = unaff_x20[0x14];
    uStack_108 = unaff_x20[0x15];
    uStack_110 = unaff_x20[0x14];
    uStack_a0 = unaff_x20[0x17];
    uStack_a8 = unaff_x20[0x16];
    uStack_f8 = unaff_x20[0x17];
    uStack_100 = unaff_x20[0x16];
    uStack_90 = unaff_x20[0x19];
    uStack_98 = unaff_x20[0x18];
    uStack_f0 = unaff_x20[0x18];
    uStack_e8 = (undefined1)unaff_x20[0x19];
    uStack_df = (undefined7)*(undefined8 *)((long)unaff_x20 + 0xd1);
    uStack_d8 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0xd1) >> 0x38);
    uStack_e7 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0xc9);
    uStack_e0 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0xc9) >> 0x38);
    uStack_88 = unaff_x20[0x1a];
    pppuVar2 = &ppuStack_120;
    ppuStack_c8 = pppuVar4;
    ppuStack_c0 = pppuVar6;
    func_0x000103059b1c(pppuVar2,&puStack_170);
    FUN_10307ff24();
    func_0x00010305deb0(&ppuStack_80,0x112f36930,&UNK_10db7ef80);
    pppuVar6 = pppuVar3;
    pppuVar4 = pppuVar2;
    goto LAB_10305d1b0;
  }
  pppuVar4 = (undefined8 ***)*unaff_x20;
  pppuVar6 = (undefined8 ***)unaff_x20[1];
  if (*(char *)(unaff_x20 + 9) == '\x01') {
    uStack_108 = unaff_x20[3];
    uStack_110 = unaff_x20[2];
    uStack_f8 = unaff_x20[5];
    uStack_100 = unaff_x20[4];
    uStack_f0 = unaff_x20[6];
    uStack_e8 = (undefined1)unaff_x20[7];
    uStack_e7 = (undefined7)((ulong)unaff_x20[7] >> 8);
    uStack_e0 = (undefined1)unaff_x20[8];
    uStack_df = (undefined7)((ulong)unaff_x20[8] >> 8);
    uStack_d8 = 1;
    ppuStack_120 = pppuVar4;
    ppuStack_118 = pppuVar6;
    func_0x000103059b1c(&ppuStack_120,&puStack_170);
LAB_10305d14c:
    param_1 = pppuVar6;
    uVar1 = (ulong)pppuVar4 & 0xffffffffffff;
    if (((ulong)param_1 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)param_1 >> 0x38 & 0xf;
    }
    pppuVar6 = param_1;
    if (uVar1 != 0) goto LAB_10305d1b0;
    func_0x000107c6142c();
  }
  else if (*(char *)(unaff_x20 + 9) != -1) {
    uStack_108 = unaff_x20[3];
    uStack_110 = unaff_x20[2];
    uStack_f8 = unaff_x20[5];
    uStack_100 = unaff_x20[4];
    uStack_f0 = unaff_x20[6];
    uStack_e8 = (undefined1)unaff_x20[7];
    uStack_e7 = (undefined7)((ulong)unaff_x20[7] >> 8);
    uStack_e0 = (undefined1)unaff_x20[8];
    uStack_df = (undefined7)((ulong)unaff_x20[8] >> 8);
    ppuStack_120 = pppuVar4;
    ppuStack_118 = pppuVar6;
    FUN_10307ff24();
    pppuVar6 = param_2;
    pppuVar4 = param_1;
    goto LAB_10305d14c;
  }
  FUN_10307f74c();
  puStack_168 = param_1[1];
  puStack_170 = *param_1;
  puStack_148 = param_1[5];
  puStack_150 = param_1[4];
  puStack_138 = param_1[7];
  puStack_140 = param_1[6];
  puStack_130 = param_1[8];
  puStack_158 = param_1[3];
  puStack_160 = param_1[2];
  pppuVar6 = &ppuStack_c8;
  func_0x000103059c3c(&puStack_170,pppuVar6);
  FUN_10307ff24();
  func_0x000103059c78(&puStack_170);
  pppuVar4 = pppuVar2;
LAB_10305d1b0:
  auVar7._8_8_ = pppuVar6;
  auVar7._0_8_ = pppuVar4;
  return auVar7;
}



/* Entry: 10305d1cc; end: 10305d3e3;  */

void FUN_10305d1cc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112f36bc8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f36bc0;
  func_0x00010002969c(0x112f36bc0,&UNK_10db7f368);
  uVar2 = uVar1;
  func_0x00010305d23c();
  puVar3 = PTR___s7SwiftUI5GroupVyxGAA4ViewA2aERzlMc_110349720;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___s7SwiftUI5GroupVyxGAA4ViewA2aERzlMc_110349720,uVar1,&uStack_28);
  puRam0000000112f36bc8 = puVar3;
  return;
}



/* Entry: 10305d3e4; end: 10305d407;  */

void FUN_10305d3e4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = 0x112f36a10;
  if (puRam0000000112f36c10 == (undefined *)0x0) {
    func_0x00010002969c(0x112f36a10,&UNK_10db7f0c8);
    uVar2 = uVar1;
    FUN_10305d478();
    puStack_38 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_1103489f8;
    puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
    uStack_40 = uVar2;
    func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                        ,uVar1,&uStack_40);
    puRam0000000112f36c10 = puVar3;
  }
  return;
}



/* Entry: 10305d408; end: 10305d477;  */

void FUN_10305d408(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    uVar1 = param_2;
    (*param_4)();
    puStack_38 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_1103489f8;
    puVar2 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
    uStack_40 = uVar1;
    func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                        ,param_2,&uStack_40);
    *param_1 = (long)puVar2;
  }
  return;
}



/* Entry: 10305d478; end: 10305d5eb;  */

void FUN_10305d478(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112f36c18 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f36c20;
  func_0x00010002969c(0x112f36c20,&UNK_10db7f390);
  uVar2 = uVar1;
  func_0x00010305d510();
  uVar3 = 0x112d50260;
  func_0x00010305d5a8(0x112d50260,0x112d50268,&UNK_10d9d5360,
                      PTR___s7SwiftUI24_ForegroundStyleModifierVyxGAA04ViewE0AAMc_110349110);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112f36c18 = puVar4;
  return;
}



/* Entry: 10305d5ec; end: 10305d607;  */

void FUN_10305d5ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e741dd4,1);
  return;
}



/* Entry: 10305d608; end: 10305d717;  */

void FUN_10305d608(void)

{
  FUN_10305c804();
  return;
}



/* Entry: 10305d718; end: 10305dba7;  */

undefined8 * FUN_10305d718(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  cVar6 = *(char *)(param_2 + 9);
  if (cVar6 == -1) {
    uVar8 = param_2[4];
    uVar10 = param_2[7];
    uVar9 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar8;
    param_1[7] = uVar10;
    param_1[6] = uVar9;
    uVar8 = *(undefined8 *)((long)param_2 + 0x39);
    *(undefined8 *)((long)param_1 + 0x41) = *(undefined8 *)((long)param_2 + 0x41);
    *(undefined8 *)((long)param_1 + 0x39) = uVar8;
    uVar10 = *param_2;
    uVar9 = param_2[3];
    uVar8 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar10;
    param_1[3] = uVar9;
    param_1[2] = uVar8;
  }
  else {
    uVar8 = *param_2;
    uVar2 = param_2[1];
    uVar9 = param_2[2];
    uVar3 = param_2[3];
    uVar10 = param_2[4];
    uVar4 = param_2[5];
    uVar1 = param_2[6];
    uVar5 = param_2[7];
    uVar7 = param_2[8];
    FUN_103059198(uVar8,uVar2,uVar9,uVar3,uVar10,uVar4,uVar1,uVar5,uVar7,cVar6);
    *param_1 = uVar8;
    param_1[1] = uVar2;
    param_1[2] = uVar9;
    param_1[3] = uVar3;
    param_1[4] = uVar10;
    param_1[5] = uVar4;
    param_1[6] = uVar1;
    param_1[7] = uVar5;
    param_1[8] = uVar7;
    *(char *)(param_1 + 9) = cVar6;
  }
  uVar8 = param_2[10];
  uVar10 = param_2[0xd];
  uVar9 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar8;
  param_1[0xd] = uVar10;
  param_1[0xc] = uVar9;
  uVar8 = param_2[0xe];
  uVar10 = param_2[0x11];
  uVar9 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar8;
  param_1[0x11] = uVar10;
  param_1[0x10] = uVar9;
  cVar6 = *(char *)(param_2 + 0x1b);
  if (cVar6 == -1) {
    uVar8 = param_2[0x16];
    uVar10 = param_2[0x19];
    uVar9 = param_2[0x18];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar8;
    param_1[0x19] = uVar10;
    param_1[0x18] = uVar9;
    uVar8 = *(undefined8 *)((long)param_2 + 0xc9);
    *(undefined8 *)((long)param_1 + 0xd1) = *(undefined8 *)((long)param_2 + 0xd1);
    *(undefined8 *)((long)param_1 + 0xc9) = uVar8;
    uVar10 = param_2[0x12];
    uVar9 = param_2[0x15];
    uVar8 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar10;
    param_1[0x15] = uVar9;
    param_1[0x14] = uVar8;
  }
  else {
    uVar8 = param_2[0x12];
    uVar2 = param_2[0x13];
    uVar9 = param_2[0x14];
    uVar3 = param_2[0x15];
    uVar10 = param_2[0x16];
    uVar4 = param_2[0x17];
    uVar1 = param_2[0x18];
    uVar5 = param_2[0x19];
    uVar7 = param_2[0x1a];
    FUN_103059198(uVar8,uVar2,uVar9,uVar3,uVar10,uVar4,uVar1,uVar5,uVar7,cVar6);
    param_1[0x12] = uVar8;
    param_1[0x13] = uVar2;
    param_1[0x14] = uVar9;
    param_1[0x15] = uVar3;
    param_1[0x16] = uVar10;
    param_1[0x17] = uVar4;
    param_1[0x18] = uVar1;
    param_1[0x19] = uVar5;
    param_1[0x1a] = uVar7;
    *(char *)(param_1 + 0x1b) = cVar6;
  }
  return param_1;
}



/* Entry: 10305dba8; end: 10305dcd3;  */

undefined8 * FUN_10305dba8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  char cVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  cVar6 = *(char *)(param_1 + 9);
  if (cVar6 != -1) {
    cVar7 = *(char *)(param_2 + 9);
    if (cVar7 != -1) {
      uVar8 = param_2[8];
      uVar11 = *param_1;
      uVar2 = param_1[1];
      uVar12 = param_1[2];
      uVar3 = param_1[3];
      uVar15 = param_1[4];
      uVar4 = param_1[5];
      uVar1 = param_1[6];
      uVar5 = param_1[7];
      uVar9 = param_1[8];
      uVar10 = *param_2;
      uVar14 = param_2[3];
      uVar13 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar10;
      param_1[3] = uVar14;
      param_1[2] = uVar13;
      uVar10 = param_2[4];
      uVar14 = param_2[7];
      uVar13 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = uVar10;
      param_1[7] = uVar14;
      param_1[6] = uVar13;
      param_1[8] = uVar8;
      *(char *)(param_1 + 9) = cVar7;
      FUN_103059268(uVar11,uVar2,uVar12,uVar3,uVar15,uVar4,uVar1,uVar5,uVar9,cVar6);
      goto LAB_10305dc38;
    }
    FUN_103059634(param_1);
  }
  uVar11 = param_2[4];
  uVar15 = param_2[7];
  uVar12 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar11;
  param_1[7] = uVar15;
  param_1[6] = uVar12;
  uVar11 = *(undefined8 *)((long)param_2 + 0x39);
  *(undefined8 *)((long)param_1 + 0x41) = *(undefined8 *)((long)param_2 + 0x41);
  *(undefined8 *)((long)param_1 + 0x39) = uVar11;
  uVar15 = *param_2;
  uVar12 = param_2[3];
  uVar11 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar15;
  param_1[3] = uVar12;
  param_1[2] = uVar11;
LAB_10305dc38:
  uVar11 = param_2[10];
  uVar15 = param_2[0xd];
  uVar12 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar11;
  param_1[0xd] = uVar15;
  param_1[0xc] = uVar12;
  uVar11 = param_2[0xe];
  uVar15 = param_2[0x11];
  uVar12 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar11;
  param_1[0x11] = uVar15;
  param_1[0x10] = uVar12;
  cVar6 = *(char *)(param_1 + 0x1b);
  if (cVar6 != -1) {
    cVar7 = *(char *)(param_2 + 0x1b);
    if (cVar7 != -1) {
      uVar8 = param_2[0x1a];
      uVar11 = param_1[0x12];
      uVar2 = param_1[0x13];
      uVar12 = param_1[0x14];
      uVar3 = param_1[0x15];
      uVar15 = param_1[0x16];
      uVar4 = param_1[0x17];
      uVar1 = param_1[0x18];
      uVar5 = param_1[0x19];
      uVar9 = param_1[0x1a];
      uVar10 = param_2[0x12];
      uVar14 = param_2[0x15];
      uVar13 = param_2[0x14];
      param_1[0x13] = param_2[0x13];
      param_1[0x12] = uVar10;
      param_1[0x15] = uVar14;
      param_1[0x14] = uVar13;
      uVar10 = param_2[0x16];
      uVar14 = param_2[0x19];
      uVar13 = param_2[0x18];
      param_1[0x17] = param_2[0x17];
      param_1[0x16] = uVar10;
      param_1[0x19] = uVar14;
      param_1[0x18] = uVar13;
      param_1[0x1a] = uVar8;
      *(char *)(param_1 + 0x1b) = cVar7;
      FUN_103059268(uVar11,uVar2,uVar12,uVar3,uVar15,uVar4,uVar1,uVar5,uVar9,cVar6);
      return param_1;
    }
    FUN_103059634(param_1 + 0x12);
  }
  uVar11 = param_2[0x16];
  uVar15 = param_2[0x19];
  uVar12 = param_2[0x18];
  param_1[0x17] = param_2[0x17];
  param_1[0x16] = uVar11;
  param_1[0x19] = uVar15;
  param_1[0x18] = uVar12;
  uVar11 = *(undefined8 *)((long)param_2 + 0xc9);
  *(undefined8 *)((long)param_1 + 0xd1) = *(undefined8 *)((long)param_2 + 0xd1);
  *(undefined8 *)((long)param_1 + 0xc9) = uVar11;
  uVar15 = param_2[0x12];
  uVar12 = param_2[0x15];
  uVar11 = param_2[0x14];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar15;
  param_1[0x15] = uVar12;
  param_1[0x14] = uVar11;
  return param_1;
}



/* Entry: 10305dcd4; end: 10305ddab;  */

int FUN_10305dcd4(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0xd9) != '\0')) {
    return *param_1 + 0xfe;
  }
  iVar1 = (*(byte *)(param_1 + 0x12) ^ 0xff) - 1;
  if (*(byte *)(param_1 + 0x12) < 2) {
    iVar1 = -1;
  }
  return iVar1 + 1;
}



/* Entry: 10305ddac; end: 10305de23;  */

void FUN_10305ddac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112f36c38 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f36c40;
  func_0x00010002969c(0x112f36c40,&UNK_10db7f3f8);
  uVar2 = uVar1;
  FUN_10305d1cc();
  uVar3 = uVar2;
  FUN_10305de24();
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112f36c38 = puVar4;
  return;
}



/* Entry: 10305de24; end: 10305de67;  */

void FUN_10305de24(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d500b8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000107c5f544(0xff);
  puVar2 = PTR___s7SwiftUI31AccessibilityAttachmentModifierVAA04ViewE0AAMc_110349208;
  func_0x000107c61520(PTR___s7SwiftUI31AccessibilityAttachmentModifierVAA04ViewE0AAMc_110349208,
                      uVar1);
  puRam0000000112d500b8 = puVar2;
  return;
}



/* Entry: 10305de68; end: 10305deef;  */

undefined8 FUN_10305de68(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10305def0; end: 10305dfff;  */

void FUN_10305def0(undefined8 *param_1,undefined1 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_140 [80];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined6 uStack_b8;
  undefined2 uStack_b2;
  undefined6 uStack_b0;
  undefined8 uStack_aa;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined5 uStack_5c;
  undefined3 uStack_57;
  
  uStack_78 = param_5[5];
  uStack_80 = param_5[4];
  uStack_70 = param_5[6];
  uVar2 = *(undefined8 *)((long)param_5 + 0x39);
  uStack_60._1_3_ = (undefined3)*(undefined8 *)((long)param_5 + 0x41);
  uStack_5c = (undefined5)((ulong)*(undefined8 *)((long)param_5 + 0x41) >> 0x18);
  uStack_68._0_1_ = (undefined1)param_5[7];
  uStack_68._1_3_ = (undefined3)uVar2;
  uStack_64 = (undefined4)((ulong)uVar2 >> 0x18);
  uStack_60._0_1_ = (undefined1)((ulong)uVar2 >> 0x38);
  uStack_98 = param_5[1];
  uStack_a0 = *param_5;
  uStack_88 = param_5[3];
  uStack_90 = param_5[2];
  puVar1 = (undefined8 *)((ulong)&uStack_f0 | 5);
  if (*(char *)(param_6 + 9) == -1) {
    uVar2 = param_5[4];
    uVar4 = param_5[7];
    uVar3 = param_5[6];
    puVar1[5] = param_5[5];
    puVar1[4] = uVar2;
    puVar1[7] = uVar4;
    puVar1[6] = uVar3;
    uVar2 = *(undefined8 *)((long)param_5 + 0x39);
    *(undefined8 *)((long)puVar1 + 0x41) = *(undefined8 *)((long)param_5 + 0x41);
    *(undefined8 *)((long)puVar1 + 0x39) = uVar2;
    uVar4 = *param_5;
    uVar3 = param_5[3];
    uVar2 = param_5[2];
    puVar1[1] = param_5[1];
    *puVar1 = uVar4;
    puVar1[3] = uVar3;
    puVar1[2] = uVar2;
    func_0x000103059b1c(param_5,auStack_140);
  }
  else {
    uVar2 = param_6[4];
    uVar4 = param_6[7];
    uVar3 = param_6[6];
    puVar1[5] = param_6[5];
    puVar1[4] = uVar2;
    puVar1[7] = uVar4;
    puVar1[6] = uVar3;
    uVar2 = *(undefined8 *)((long)param_6 + 0x39);
    *(undefined8 *)((long)puVar1 + 0x41) = *(undefined8 *)((long)param_6 + 0x41);
    *(undefined8 *)((long)puVar1 + 0x39) = uVar2;
    uVar4 = *param_6;
    uVar3 = param_6[3];
    uVar2 = param_6[2];
    puVar1[1] = param_6[1];
    *puVar1 = uVar4;
    puVar1[3] = uVar3;
    puVar1[2] = uVar2;
  }
  param_1[5] = uStack_78;
  param_1[4] = uStack_80;
  param_1[7] = CONCAT44(uStack_64,uStack_68);
  param_1[6] = uStack_70;
  *(ulong *)((long)param_1 + 0x44) = CONCAT35(uStack_57,uStack_5c);
  *(ulong *)((long)param_1 + 0x3c) = CONCAT44(uStack_60,uStack_64);
  param_1[1] = uStack_98;
  *param_1 = uStack_a0;
  param_1[3] = uStack_88;
  param_1[2] = uStack_90;
  *(int *)((long)param_1 + 0x4c) = (int)param_4;
  *(char *)(param_1 + 10) = (char)((ulong)param_4 >> 0x20);
  *(undefined1 *)((long)param_1 + 0x51) = param_2;
  *(undefined1 *)((long)param_1 + 0x52) = param_3;
  *(undefined8 *)((long)param_1 + 0x5b) = uStack_e8;
  *(undefined8 *)((long)param_1 + 0x53) = uStack_f0;
  *(undefined8 *)((long)param_1 + 0x99) = uStack_aa;
  *(ulong *)((long)param_1 + 0x91) = CONCAT62(uStack_b0,uStack_b2);
  *(ulong *)((long)param_1 + 0x8b) = CONCAT26(uStack_b2,uStack_b8);
  *(undefined8 *)((long)param_1 + 0x83) = uStack_c0;
  *(undefined8 *)((long)param_1 + 0x7b) = uStack_c8;
  *(undefined8 *)((long)param_1 + 0x73) = uStack_d0;
  *(undefined8 *)((long)param_1 + 0x6b) = uStack_d8;
  *(undefined8 *)((long)param_1 + 99) = uStack_e0;
  param_1[0x15] = param_7;
  param_1[0x16] = param_8;
  return;
}



/* Entry: 10305e000; end: 10305e28f;  */

void FUN_10305e000(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong *puVar10;
  ulong uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar12;
  long lVar13;
  undefined auStack_f0 [8];
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  ulong uStack_a8;
  
  uVar4 = 0x112f36c50;
  uStack_d8 = param_1;
  func_0x0001000285a8(0x112f36c50,&UNK_10db7f438);
  lVar12 = *(long *)(uVar4 - 8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_f0 + -extraout_x8;
  lVar13 = 0x112f36c58;
  func_0x0001000285a8(0x112f36c58,&UNK_10db7f440);
  lStack_e8 = *(long *)(lVar13 + -8);
  lStack_e0 = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_e8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar13 = (long)puVar9 - extraout_x8_00;
  uVar1 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xb0);
  func_0x000107c6157c(uVar2);
  uVar5 = 0x112f36c60;
  func_0x0001000285a8(0x112f36c60,&UNK_10db7f448);
  uVar6 = 0x112f36c68;
  func_0x00010305e830(0x112f36c68,0x112f36c60,&UNK_10db7f448,
                      PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_110349878);
  func_0x000107c5f738(puVar9,uVar1,uVar2,FUN_10305e504,&puStack_b0,uVar5,uVar6);
  puVar7 = &UNK_10db7f450;
  func_0x000107c614e0();
  puVar8 = &UNK_10db7f480;
  func_0x000107c614e0();
  uStack_a8 = uStack_a8 & 0xffffffffffffff00;
  uVar5 = 0x112f36c70;
  puStack_b0 = puVar7;
  func_0x00010305e830(0x112f36c70,0x112f36c50,&UNK_10db7f438,
                      PTR___s7SwiftUI6ButtonVyxGAA4ViewAAMc_110349850);
  uVar6 = uVar5;
  FUN_10305c388();
  func_0x000107c5f60c(lVar13,&puStack_b0,uVar4,&UNK_110602a78,uVar5,uVar6);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(puVar7);
  uVar11 = uVar4;
  (**(code **)(lVar12 + 8))(puVar9,uVar4);
  puVar7 = *(undefined **)(unaff_x20 + 0x58);
  uVar3 = *(ulong *)(unaff_x20 + 0x60);
  if (*(char *)(unaff_x20 + 0xa0) == '\x01') {
    func_0x000107c61434(uVar3);
    puVar9 = puVar7;
    uVar11 = uVar3;
  }
  else {
    puStack_b0 = puVar7;
    uStack_a8 = uVar3;
    FUN_10307ff24();
  }
  puStack_c8 = &UNK_110602a78;
  puVar10 = &uStack_d0;
  uStack_d0 = uVar4;
  uStack_c0 = uVar5;
  uStack_b8 = uVar6;
  func_0x000107c614f4(puVar10,
                      PTR___s7SwiftUI4ViewPAAE11buttonStyleyQrqd__AA06ButtonE0Rd__lFQOMQ_110349490,1
                     );
  lVar12 = lStack_e0;
  func_0x000107c5f640(uStack_d8,puVar9,uVar11,0,PTR___swiftEmptyArrayStorage_11034f1c8,lStack_e0,
                      puVar10);
  func_0x000107c6142c(uVar11);
  (**(code **)(lStack_e8 + 8))(lVar13,lVar12);
  return;
}



/* Entry: 10305e290; end: 10305e503;  */

void FUN_10305e290(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_520 [216];
  undefined7 uStack_448;
  undefined1 uStack_441;
  undefined7 uStack_440;
  undefined1 uStack_439;
  undefined7 uStack_438;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined1 uStack_370;
  undefined7 uStack_36f;
  undefined1 uStack_368;
  undefined7 uStack_367;
  undefined1 uStack_360;
  undefined7 uStack_35f;
  undefined1 uStack_358;
  undefined7 uStack_357;
  undefined1 uStack_350;
  undefined7 uStack_34f;
  undefined1 uStack_348;
  undefined7 uStack_347;
  undefined1 uStack_340;
  undefined7 uStack_33f;
  undefined1 uStack_338;
  undefined7 uStack_337;
  undefined1 uStack_330;
  undefined7 uStack_32f;
  undefined1 uStack_328;
  undefined7 uStack_327;
  undefined1 uStack_320;
  undefined7 uStack_31f;
  undefined1 uStack_318;
  undefined7 uStack_317;
  undefined1 uStack_310;
  undefined7 uStack_30f;
  undefined1 uStack_308;
  undefined7 uStack_307;
  undefined1 uStack_300;
  undefined7 uStack_2ff;
  undefined1 uStack_2f8;
  undefined7 uStack_2f7;
  undefined1 uStack_2f0;
  undefined7 uStack_2ef;
  undefined1 uStack_2e8;
  undefined7 uStack_2e7;
  undefined1 uStack_2e0;
  undefined7 uStack_2df;
  undefined1 uStack_2d8;
  undefined7 uStack_2d7;
  undefined1 uStack_2d0;
  undefined7 uStack_2cf;
  undefined1 uStack_2c8;
  undefined7 uStack_2c7;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 uStack_1f0;
  undefined7 uStack_1ef;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  undefined1 uStack_1d0;
  undefined7 uStack_1cf;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  undefined1 uStack_1c0;
  undefined7 uStack_1bf;
  undefined1 uStack_1b8;
  undefined7 uStack_1b7;
  undefined1 uStack_1b0;
  undefined7 uStack_1af;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined1 uStack_1a0;
  undefined7 uStack_19f;
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined1 uStack_190;
  undefined7 uStack_18f;
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined1 uStack_180;
  undefined7 uStack_17f;
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined1 uStack_170;
  undefined7 uStack_16f;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  
  uVar1 = param_2;
  func_0x000107c5f410();
  FUN_10305e50c(&uStack_128,param_2);
  uStack_2e8 = uStack_90;
  uStack_2e7 = uStack_8f;
  uStack_2f0 = uStack_98;
  uStack_2ef = uStack_97;
  uStack_2f8 = uStack_a0;
  uStack_2f7 = uStack_9f;
  uStack_300 = uStack_a8;
  uStack_2ff = uStack_a7;
  uStack_2d8 = uStack_80;
  uStack_2d7 = uStack_7f;
  uStack_2e0 = uStack_88;
  uStack_2df = uStack_87;
  uStack_2c8 = uStack_70;
  uStack_2c7 = uStack_6f;
  uStack_2d0 = uStack_78;
  uStack_2cf = uStack_77;
  uStack_328 = uStack_d0;
  uStack_327 = uStack_cf;
  uStack_330 = uStack_d8;
  uStack_32f = uStack_d7;
  uStack_338 = uStack_e0;
  uStack_337 = uStack_df;
  uStack_340 = uStack_e8;
  uStack_33f = uStack_e7;
  uStack_318 = uStack_c0;
  uStack_317 = uStack_bf;
  uStack_320 = uStack_c8;
  uStack_31f = uStack_c7;
  uStack_308 = uStack_b0;
  uStack_307 = uStack_af;
  uStack_310 = uStack_b8;
  uStack_30f = uStack_b7;
  uStack_368 = uStack_110;
  uStack_367 = uStack_10f;
  uStack_370 = uStack_118;
  uStack_36f = uStack_117;
  uStack_378 = uStack_120;
  uStack_380 = uStack_128;
  uStack_358 = uStack_100;
  uStack_357 = uStack_ff;
  uStack_360 = uStack_108;
  uStack_35f = uStack_107;
  uStack_348 = uStack_f0;
  uStack_347 = uStack_ef;
  uStack_350 = uStack_f8;
  uStack_34f = uStack_f7;
  uStack_2b8 = uStack_120;
  uStack_2c0 = uStack_128;
  FUN_10305efe4(&uStack_380,&uStack_200,0x112f36c88,&UNK_10db7f510);
  func_0x00010305f02c(&uStack_2c0,0x112f36c88,&UNK_10db7f510);
  uStack_439 = (undefined1)uStack_378;
  uStack_438 = (undefined7)((ulong)uStack_378 >> 8);
  uStack_441 = (undefined1)uStack_380;
  uStack_440 = (undefined7)((ulong)uStack_380 >> 8);
  uStack_157 = uStack_2ef;
  uStack_150 = uStack_2e8;
  uStack_15f = uStack_2f7;
  uStack_158 = uStack_2f0;
  uStack_147 = uStack_2df;
  uStack_140 = uStack_2d8;
  uStack_14f = uStack_2e7;
  uStack_148 = uStack_2e0;
  uStack_137 = uStack_2cf;
  uStack_13f = uStack_2d7;
  uStack_138 = uStack_2d0;
  uStack_197 = uStack_32f;
  uStack_190 = uStack_328;
  uStack_19f = uStack_337;
  uStack_198 = uStack_330;
  uStack_187 = uStack_31f;
  uStack_180 = uStack_318;
  uStack_18f = uStack_327;
  uStack_188 = uStack_320;
  uStack_177 = uStack_30f;
  uStack_170 = uStack_308;
  uStack_17f = uStack_317;
  uStack_178 = uStack_310;
  uStack_167 = uStack_2ff;
  uStack_160 = uStack_2f8;
  uStack_16f = uStack_307;
  uStack_168 = uStack_300;
  uStack_1d7 = uStack_36f;
  uStack_1d0 = uStack_368;
  uStack_1df = uStack_438;
  uStack_1d8 = uStack_370;
  uStack_1c7 = uStack_35f;
  uStack_1c0 = uStack_358;
  uStack_1cf = uStack_367;
  uStack_1c8 = uStack_360;
  uStack_1b7 = uStack_34f;
  uStack_1b0 = uStack_348;
  uStack_1bf = uStack_357;
  uStack_1b8 = uStack_350;
  uStack_1a7 = uStack_33f;
  uStack_1a0 = uStack_338;
  uStack_1af = uStack_347;
  uStack_1a8 = uStack_340;
  uStack_1e7 = uStack_440;
  uStack_1e0 = uStack_439;
  uStack_1ef = uStack_448;
  uStack_1e8 = uStack_441;
  uStack_107 = uStack_438;
  uStack_1f8 = 0x4010000000000000;
  uStack_1f0 = 0;
  uStack_130 = uStack_2c8;
  uStack_12f = uStack_2c7;
  uStack_120 = 0x4010000000000000;
  uStack_118 = 0;
  uStack_10f = uStack_440;
  uStack_108 = uStack_439;
  uStack_110 = uStack_441;
  uStack_200 = uVar1;
  uStack_128 = uVar1;
  FUN_10305efe4(&uStack_200,auStack_520,0x112f36c60,&UNK_10db7f448);
  func_0x00010305f02c(&uStack_128,0x112f36c60,&UNK_10db7f448);
  param_1[0x15] = CONCAT71(uStack_157,uStack_158);
  param_1[0x14] = CONCAT71(uStack_15f,uStack_160);
  param_1[0x17] = CONCAT71(uStack_147,uStack_148);
  param_1[0x16] = CONCAT71(uStack_14f,uStack_150);
  param_1[0x19] = CONCAT71(uStack_137,uStack_138);
  param_1[0x18] = CONCAT71(uStack_13f,uStack_140);
  param_1[0x1a] = CONCAT71(uStack_12f,uStack_130);
  param_1[0xd] = CONCAT71(uStack_197,uStack_198);
  param_1[0xc] = CONCAT71(uStack_19f,uStack_1a0);
  param_1[0xf] = CONCAT71(uStack_187,uStack_188);
  param_1[0xe] = CONCAT71(uStack_18f,uStack_190);
  param_1[0x11] = CONCAT71(uStack_177,uStack_178);
  param_1[0x10] = CONCAT71(uStack_17f,uStack_180);
  param_1[0x13] = CONCAT71(uStack_167,uStack_168);
  param_1[0x12] = CONCAT71(uStack_16f,uStack_170);
  param_1[5] = CONCAT71(uStack_1d7,uStack_1d8);
  param_1[4] = CONCAT71(uStack_1df,uStack_1e0);
  param_1[7] = CONCAT71(uStack_1c7,uStack_1c8);
  param_1[6] = CONCAT71(uStack_1cf,uStack_1d0);
  param_1[9] = CONCAT71(uStack_1b7,uStack_1b8);
  param_1[8] = CONCAT71(uStack_1bf,uStack_1c0);
  param_1[0xb] = CONCAT71(uStack_1a7,uStack_1a8);
  param_1[10] = CONCAT71(uStack_1af,uStack_1b0);
  param_1[1] = uStack_1f8;
  *param_1 = uStack_200;
  param_1[3] = CONCAT71(uStack_1e7,uStack_1e8);
  param_1[2] = CONCAT71(uStack_1ef,uStack_1f0);
  return;
}



/* Entry: 10305e504; end: 10305e50b;  */

void FUN_10305e504(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_520 [216];
  undefined7 uStack_448;
  undefined1 uStack_441;
  undefined7 uStack_440;
  undefined1 uStack_439;
  undefined7 uStack_438;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined1 uStack_370;
  undefined7 uStack_36f;
  undefined1 uStack_368;
  undefined7 uStack_367;
  undefined1 uStack_360;
  undefined7 uStack_35f;
  undefined1 uStack_358;
  undefined7 uStack_357;
  undefined1 uStack_350;
  undefined7 uStack_34f;
  undefined1 uStack_348;
  undefined7 uStack_347;
  undefined1 uStack_340;
  undefined7 uStack_33f;
  undefined1 uStack_338;
  undefined7 uStack_337;
  undefined1 uStack_330;
  undefined7 uStack_32f;
  undefined1 uStack_328;
  undefined7 uStack_327;
  undefined1 uStack_320;
  undefined7 uStack_31f;
  undefined1 uStack_318;
  undefined7 uStack_317;
  undefined1 uStack_310;
  undefined7 uStack_30f;
  undefined1 uStack_308;
  undefined7 uStack_307;
  undefined1 uStack_300;
  undefined7 uStack_2ff;
  undefined1 uStack_2f8;
  undefined7 uStack_2f7;
  undefined1 uStack_2f0;
  undefined7 uStack_2ef;
  undefined1 uStack_2e8;
  undefined7 uStack_2e7;
  undefined1 uStack_2e0;
  undefined7 uStack_2df;
  undefined1 uStack_2d8;
  undefined7 uStack_2d7;
  undefined1 uStack_2d0;
  undefined7 uStack_2cf;
  undefined1 uStack_2c8;
  undefined7 uStack_2c7;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 uStack_1f0;
  undefined7 uStack_1ef;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  undefined1 uStack_1d0;
  undefined7 uStack_1cf;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  undefined1 uStack_1c0;
  undefined7 uStack_1bf;
  undefined1 uStack_1b8;
  undefined7 uStack_1b7;
  undefined1 uStack_1b0;
  undefined7 uStack_1af;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined1 uStack_1a0;
  undefined7 uStack_19f;
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined1 uStack_190;
  undefined7 uStack_18f;
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined1 uStack_180;
  undefined7 uStack_17f;
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined1 uStack_170;
  undefined7 uStack_16f;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = uVar2;
  func_0x000107c5f410();
  FUN_10305e50c(&uStack_128,uVar2);
  uStack_2e8 = uStack_90;
  uStack_2e7 = uStack_8f;
  uStack_2f0 = uStack_98;
  uStack_2ef = uStack_97;
  uStack_2f8 = uStack_a0;
  uStack_2f7 = uStack_9f;
  uStack_300 = uStack_a8;
  uStack_2ff = uStack_a7;
  uStack_2d8 = uStack_80;
  uStack_2d7 = uStack_7f;
  uStack_2e0 = uStack_88;
  uStack_2df = uStack_87;
  uStack_2c8 = uStack_70;
  uStack_2c7 = uStack_6f;
  uStack_2d0 = uStack_78;
  uStack_2cf = uStack_77;
  uStack_328 = uStack_d0;
  uStack_327 = uStack_cf;
  uStack_330 = uStack_d8;
  uStack_32f = uStack_d7;
  uStack_338 = uStack_e0;
  uStack_337 = uStack_df;
  uStack_340 = uStack_e8;
  uStack_33f = uStack_e7;
  uStack_318 = uStack_c0;
  uStack_317 = uStack_bf;
  uStack_320 = uStack_c8;
  uStack_31f = uStack_c7;
  uStack_308 = uStack_b0;
  uStack_307 = uStack_af;
  uStack_310 = uStack_b8;
  uStack_30f = uStack_b7;
  uStack_368 = uStack_110;
  uStack_367 = uStack_10f;
  uStack_370 = uStack_118;
  uStack_36f = uStack_117;
  uStack_378 = uStack_120;
  uStack_380 = uStack_128;
  uStack_358 = uStack_100;
  uStack_357 = uStack_ff;
  uStack_360 = uStack_108;
  uStack_35f = uStack_107;
  uStack_348 = uStack_f0;
  uStack_347 = uStack_ef;
  uStack_350 = uStack_f8;
  uStack_34f = uStack_f7;
  uStack_2b8 = uStack_120;
  uStack_2c0 = uStack_128;
  FUN_10305efe4(&uStack_380,&uStack_200,0x112f36c88,&UNK_10db7f510);
  func_0x00010305f02c(&uStack_2c0,0x112f36c88,&UNK_10db7f510);
  uStack_439 = (undefined1)uStack_378;
  uStack_438 = (undefined7)((ulong)uStack_378 >> 8);
  uStack_441 = (undefined1)uStack_380;
  uStack_440 = (undefined7)((ulong)uStack_380 >> 8);
  uStack_157 = uStack_2ef;
  uStack_150 = uStack_2e8;
  uStack_15f = uStack_2f7;
  uStack_158 = uStack_2f0;
  uStack_147 = uStack_2df;
  uStack_140 = uStack_2d8;
  uStack_14f = uStack_2e7;
  uStack_148 = uStack_2e0;
  uStack_137 = uStack_2cf;
  uStack_13f = uStack_2d7;
  uStack_138 = uStack_2d0;
  uStack_197 = uStack_32f;
  uStack_190 = uStack_328;
  uStack_19f = uStack_337;
  uStack_198 = uStack_330;
  uStack_187 = uStack_31f;
  uStack_180 = uStack_318;
  uStack_18f = uStack_327;
  uStack_188 = uStack_320;
  uStack_177 = uStack_30f;
  uStack_170 = uStack_308;
  uStack_17f = uStack_317;
  uStack_178 = uStack_310;
  uStack_167 = uStack_2ff;
  uStack_160 = uStack_2f8;
  uStack_16f = uStack_307;
  uStack_168 = uStack_300;
  uStack_1d7 = uStack_36f;
  uStack_1d0 = uStack_368;
  uStack_1df = uStack_438;
  uStack_1d8 = uStack_370;
  uStack_1c7 = uStack_35f;
  uStack_1c0 = uStack_358;
  uStack_1cf = uStack_367;
  uStack_1c8 = uStack_360;
  uStack_1b7 = uStack_34f;
  uStack_1b0 = uStack_348;
  uStack_1bf = uStack_357;
  uStack_1b8 = uStack_350;
  uStack_1a7 = uStack_33f;
  uStack_1a0 = uStack_338;
  uStack_1af = uStack_347;
  uStack_1a8 = uStack_340;
  uStack_1e7 = uStack_440;
  uStack_1e0 = uStack_439;
  uStack_1ef = uStack_448;
  uStack_1e8 = uStack_441;
  uStack_107 = uStack_438;
  uStack_1f8 = 0x4010000000000000;
  uStack_1f0 = 0;
  uStack_130 = uStack_2c8;
  uStack_12f = uStack_2c7;
  uStack_120 = 0x4010000000000000;
  uStack_118 = 0;
  uStack_10f = uStack_440;
  uStack_108 = uStack_439;
  uStack_110 = uStack_441;
  uStack_200 = uVar1;
  uStack_128 = uVar1;
  FUN_10305efe4(&uStack_200,auStack_520,0x112f36c60,&UNK_10db7f448);
  func_0x00010305f02c(&uStack_128,0x112f36c60,&UNK_10db7f448);
  param_1[0x15] = CONCAT71(uStack_157,uStack_158);
  param_1[0x14] = CONCAT71(uStack_15f,uStack_160);
  param_1[0x17] = CONCAT71(uStack_147,uStack_148);
  param_1[0x16] = CONCAT71(uStack_14f,uStack_150);
  param_1[0x19] = CONCAT71(uStack_137,uStack_138);
  param_1[0x18] = CONCAT71(uStack_13f,uStack_140);
  param_1[0x1a] = CONCAT71(uStack_12f,uStack_130);
  param_1[0xd] = CONCAT71(uStack_197,uStack_198);
  param_1[0xc] = CONCAT71(uStack_19f,uStack_1a0);
  param_1[0xf] = CONCAT71(uStack_187,uStack_188);
  param_1[0xe] = CONCAT71(uStack_18f,uStack_190);
  param_1[0x11] = CONCAT71(uStack_177,uStack_178);
  param_1[0x10] = CONCAT71(uStack_17f,uStack_180);
  param_1[0x13] = CONCAT71(uStack_167,uStack_168);
  param_1[0x12] = CONCAT71(uStack_16f,uStack_170);
  param_1[5] = CONCAT71(uStack_1d7,uStack_1d8);
  param_1[4] = CONCAT71(uStack_1df,uStack_1e0);
  param_1[7] = CONCAT71(uStack_1c7,uStack_1c8);
  param_1[6] = CONCAT71(uStack_1cf,uStack_1d0);
  param_1[9] = CONCAT71(uStack_1b7,uStack_1b8);
  param_1[8] = CONCAT71(uStack_1bf,uStack_1c0);
  param_1[0xb] = CONCAT71(uStack_1a7,uStack_1a8);
  param_1[10] = CONCAT71(uStack_1af,uStack_1b0);
  param_1[1] = uStack_1f8;
  *param_1 = uStack_200;
  param_1[3] = CONCAT71(uStack_1e7,uStack_1e8);
  param_1[2] = CONCAT71(uStack_1ef,uStack_1f0);
  return;
}



/* Entry: 10305e50c; end: 10305e7c3;  */

void FUN_10305e50c(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 auStack_370 [160];
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  undefined1 uStack_248;
  undefined7 uStack_247;
  undefined1 uStack_240;
  undefined8 uStack_23f;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  undefined1 uStack_1f8;
  undefined7 uStack_1f7;
  undefined1 uStack_1f0;
  undefined7 uStack_1ef;
  undefined1 uStack_1e8;
  undefined1 uStack_1e7;
  undefined6 uStack_1e6;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined1 uStack_1a0;
  undefined7 uStack_19f;
  undefined1 uStack_198;
  long *plStack_190;
  undefined8 *puStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined8 uStack_14f;
  long *plStack_138;
  undefined8 *puStack_130;
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
  long lStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  if ((char)param_2[10] == '\x01') {
    FUN_10305efbc(&lStack_f0);
  }
  else {
    lStack_230 = CONCAT44(lStack_230._4_4_,*(undefined4 *)((long)param_2 + 0x4c));
    lStack_220 = 0;
    lStack_228 = 0;
    lStack_210 = 0;
    lStack_218 = 0;
    lStack_200 = 0;
    lStack_208 = 0;
    uStack_1f0 = 0;
    uStack_1ef = 0;
    uStack_1f8 = 0;
    uStack_1f7 = 0;
    uStack_1e8 = 1;
    uStack_1e7 = 0;
    lStack_1d8 = 0;
    lStack_1e0 = 0;
    lStack_1c8 = 0;
    lStack_1d0 = 0;
    lStack_1b8 = 0;
    lStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1a7 = 0;
    lStack_1b0 = 0;
    uStack_1a0 = 0;
    uStack_19f = 0;
    uStack_198 = 0xff;
    FUN_10305f06c(&lStack_230);
    lStack_88 = lStack_1c8;
    lStack_90 = lStack_1d0;
    lStack_78 = lStack_1b8;
    lStack_80 = lStack_1c0;
    uStack_68 = uStack_1a8;
    lStack_70 = lStack_1b0;
    uStack_5f = CONCAT17(uStack_198,uStack_19f);
    uStack_67 = uStack_1a7;
    uStack_60 = uStack_1a0;
    lStack_b8 = CONCAT71(uStack_1f7,uStack_1f8);
    lStack_c8 = lStack_208;
    lStack_d0 = lStack_210;
    lStack_c0 = lStack_200;
    lStack_a8 = CONCAT62(uStack_1e6,CONCAT11(uStack_1e7,uStack_1e8));
    lStack_b0 = CONCAT71(uStack_1ef,uStack_1f0);
    lStack_98 = lStack_1d8;
    lStack_a0 = lStack_1e0;
    lStack_e8 = lStack_228;
    lStack_f0 = lStack_230;
    lStack_d8 = lStack_218;
    lStack_e0 = lStack_220;
  }
  uVar5 = *(undefined8 *)((long)param_2 + 0x41);
  uStack_150 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x39) >> 0x38);
  plVar6 = (long *)param_2[1];
  plVar4 = (long *)*param_2;
  lStack_178 = param_2[3];
  lStack_180 = param_2[2];
  lStack_168 = param_2[5];
  lStack_170 = param_2[4];
  lStack_160 = param_2[6];
  uStack_158 = (undefined1)param_2[7];
  uStack_157 = (undefined7)((ulong)param_2[7] >> 8);
  uStack_14f._7_1_ = (char)((ulong)uVar5 >> 0x38);
  plStack_190 = plVar4;
  puStack_188 = plVar6;
  uStack_14f = uVar5;
  if (uStack_14f._7_1_ == '\x01') {
    lStack_208 = param_2[5];
    lStack_210 = param_2[4];
    lStack_200 = param_2[6];
    uStack_1f8 = (undefined1)param_2[7];
    uStack_1ef = (undefined7)*(undefined8 *)((long)param_2 + 0x41);
    uStack_1e8 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x41) >> 0x38);
    uStack_1f7 = (undefined7)*(undefined8 *)((long)param_2 + 0x39);
    uStack_1f0 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x39) >> 0x38);
    lStack_228 = param_2[1];
    lStack_230 = *param_2;
    lStack_218 = param_2[3];
    lStack_220 = param_2[2];
    func_0x000103059b1c(&lStack_230,&lStack_2d0);
  }
  else {
    if (uStack_14f._7_1_ == -1) {
      plVar4 = (long *)0x0;
      plVar6 = (long *)0x0;
      puVar3 = (undefined *)0x0;
      goto LAB_10305e6a0;
    }
    lStack_208 = param_2[5];
    lStack_210 = param_2[4];
    lStack_100 = param_2[7];
    lStack_200 = param_2[6];
    lStack_228 = param_2[1];
    lStack_230 = *param_2;
    lStack_218 = param_2[3];
    lStack_220 = param_2[2];
    lStack_f8 = param_2[8];
    uStack_1f8 = (undefined1)lStack_100;
    uStack_1ef = (undefined7)*(undefined8 *)((long)param_2 + 0x41);
    uStack_1e8 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x41) >> 0x38);
    uStack_1f7 = (undefined7)*(undefined8 *)((long)param_2 + 0x39);
    uStack_1f0 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x39) >> 0x38);
    plVar1 = &lStack_230;
    plVar2 = &lStack_2d0;
    plStack_138 = plVar4;
    puStack_130 = plVar6;
    lStack_128 = lStack_220;
    lStack_120 = lStack_218;
    lStack_118 = lStack_210;
    lStack_110 = lStack_208;
    lStack_108 = lStack_200;
    func_0x000103059b1c();
    FUN_10307ff24();
    func_0x00010305f02c(&plStack_190,0x112f36930,&UNK_10db7ef80);
    plVar4 = plVar1;
    plVar6 = plVar2;
  }
  func_0x000107c61434(plVar6);
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_10305e6a0:
  lStack_268 = lStack_88;
  lStack_270 = lStack_90;
  lStack_258 = lStack_78;
  lStack_260 = lStack_80;
  uStack_248 = uStack_68;
  lStack_250 = lStack_70;
  uStack_23f = uStack_5f;
  uStack_247 = uStack_67;
  uStack_240 = uStack_60;
  lStack_2a8 = lStack_c8;
  lStack_2b0 = lStack_d0;
  lStack_298 = lStack_b8;
  lStack_2a0 = lStack_c0;
  lStack_288 = lStack_a8;
  lStack_290 = lStack_b0;
  lStack_278 = lStack_98;
  lStack_280 = lStack_a0;
  lStack_2c8 = lStack_e8;
  lStack_2d0 = lStack_f0;
  lStack_2b8 = lStack_d8;
  lStack_2c0 = lStack_e0;
  lStack_1c8 = lStack_88;
  lStack_1d0 = lStack_90;
  lStack_1b8 = lStack_78;
  lStack_1c0 = lStack_80;
  uStack_1a8 = uStack_68;
  lStack_1b0 = lStack_70;
  uStack_19f = (undefined7)uStack_5f;
  uStack_198 = (undefined1)((ulong)uStack_5f >> 0x38);
  uStack_1a7 = uStack_67;
  uStack_1a0 = uStack_60;
  lStack_208 = lStack_c8;
  lStack_210 = lStack_d0;
  uStack_1f8 = (undefined1)lStack_b8;
  uStack_1f7 = (undefined7)((ulong)lStack_b8 >> 8);
  lStack_200 = lStack_c0;
  uStack_1e8 = (undefined1)lStack_a8;
  uStack_1e7 = (undefined1)((ulong)lStack_a8 >> 8);
  uStack_1e6 = (undefined6)((ulong)lStack_a8 >> 0x10);
  uStack_1f0 = (undefined1)lStack_b0;
  uStack_1ef = (undefined7)((ulong)lStack_b0 >> 8);
  lStack_1d8 = lStack_98;
  lStack_1e0 = lStack_a0;
  lStack_228 = lStack_e8;
  lStack_230 = lStack_f0;
  lStack_218 = lStack_d8;
  lStack_220 = lStack_e0;
  FUN_10305efe4(&lStack_230,auStack_370,0x112f36c90,&UNK_10db80920);
  func_0x000101c16754(plVar4,plVar6,0,puVar3);
  func_0x000101c16728(plVar4,plVar6,0,puVar3);
  param_1[0xd] = lStack_88;
  param_1[0xc] = lStack_90;
  param_1[0xf] = lStack_78;
  param_1[0xe] = lStack_80;
  param_1[0x11] = CONCAT71(uStack_67,uStack_68);
  param_1[0x10] = lStack_70;
  *(undefined8 *)((long)param_1 + 0x91) = uStack_5f;
  *(ulong *)((long)param_1 + 0x89) = CONCAT17(uStack_60,uStack_67);
  param_1[5] = lStack_c8;
  param_1[4] = lStack_d0;
  param_1[7] = lStack_b8;
  param_1[6] = lStack_c0;
  param_1[9] = lStack_a8;
  param_1[8] = lStack_b0;
  param_1[0xb] = lStack_98;
  param_1[10] = lStack_a0;
  param_1[1] = lStack_e8;
  *param_1 = lStack_f0;
  param_1[3] = lStack_d8;
  param_1[2] = lStack_e0;
  param_1[0x14] = (long)plVar4;
  param_1[0x15] = (long)plVar6;
  param_1[0x16] = 0;
  param_1[0x17] = (long)puVar3;
  func_0x000101c16728(plVar4,plVar6,0,puVar3);
  func_0x00010305f02c(&lStack_2d0,0x112f36c90,&UNK_10db80920);
  return;
}



/* Entry: 10305e7c4; end: 10305e7cf;  */

void FUN_10305e7c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}



/* Entry: 10305e7d0; end: 10305e873;  */

void FUN_10305e7d0(void)

{
  FUN_10305e000();
  return;
}



/* Entry: 10305e874; end: 10305e883;  */

void FUN_10305e874(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e741e18,1);
  return;
}



/* Entry: 10305e884; end: 10305e927;  */

long FUN_10305e884(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10305e928; end: 10305ecf3;  */

undefined8 * FUN_10305e928(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  cVar6 = *(char *)(param_2 + 9);
  if (cVar6 == -1) {
    uVar8 = param_2[4];
    uVar11 = param_2[7];
    uVar10 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar8;
    param_1[7] = uVar11;
    param_1[6] = uVar10;
    uVar8 = *(undefined8 *)((long)param_2 + 0x39);
    *(undefined8 *)((long)param_1 + 0x41) = *(undefined8 *)((long)param_2 + 0x41);
    *(undefined8 *)((long)param_1 + 0x39) = uVar8;
    uVar11 = *param_2;
    uVar10 = param_2[3];
    uVar8 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar11;
    param_1[3] = uVar10;
    param_1[2] = uVar8;
  }
  else {
    uVar8 = *param_2;
    uVar2 = param_2[1];
    uVar10 = param_2[2];
    uVar3 = param_2[3];
    uVar11 = param_2[4];
    uVar4 = param_2[5];
    uVar1 = param_2[6];
    uVar5 = param_2[7];
    uVar9 = param_2[8];
    FUN_103059198(uVar8,uVar2,uVar10,uVar3,uVar11,uVar4,uVar1,uVar5,uVar9,cVar6);
    *param_1 = uVar8;
    param_1[1] = uVar2;
    param_1[2] = uVar10;
    param_1[3] = uVar3;
    param_1[4] = uVar11;
    param_1[5] = uVar4;
    param_1[6] = uVar1;
    param_1[7] = uVar5;
    param_1[8] = uVar9;
    *(char *)(param_1 + 9) = cVar6;
  }
  *(undefined4 *)((long)param_1 + 0x4c) = *(undefined4 *)((long)param_2 + 0x4c);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  *(undefined2 *)((long)param_1 + 0x51) = *(undefined2 *)((long)param_2 + 0x51);
  uVar8 = param_2[0xb];
  uVar2 = param_2[0xc];
  uVar10 = param_2[0xd];
  uVar3 = param_2[0xe];
  uVar11 = param_2[0xf];
  uVar4 = param_2[0x10];
  uVar1 = param_2[0x11];
  uVar5 = param_2[0x12];
  uVar9 = param_2[0x13];
  uVar7 = *(undefined1 *)(param_2 + 0x14);
  FUN_103059198(uVar8,uVar2,uVar10,uVar3,uVar11,uVar4,uVar1,uVar5,uVar9,uVar7);
  param_1[0xb] = uVar8;
  param_1[0xc] = uVar2;
  param_1[0xd] = uVar10;
  param_1[0xe] = uVar3;
  param_1[0xf] = uVar11;
  param_1[0x10] = uVar4;
  param_1[0x11] = uVar1;
  param_1[0x12] = uVar5;
  param_1[0x13] = uVar9;
  *(undefined1 *)(param_1 + 0x14) = uVar7;
  uVar8 = param_2[0x16];
  uVar10 = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x15] = uVar10;
  func_0x000107c6157c(uVar8);
  return param_1;
}



/* Entry: 10305ecf4; end: 10305ee13;  */

undefined8 * FUN_10305ecf4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  char cVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  cVar6 = *(char *)(param_1 + 9);
  if (cVar6 != -1) {
    cVar7 = *(char *)(param_2 + 9);
    if (cVar7 != -1) {
      uVar11 = param_2[8];
      uVar10 = *param_1;
      uVar2 = param_1[1];
      uVar14 = param_1[2];
      uVar3 = param_1[3];
      uVar17 = param_1[4];
      uVar4 = param_1[5];
      uVar1 = param_1[6];
      uVar5 = param_1[7];
      uVar12 = param_1[8];
      uVar13 = *param_2;
      uVar16 = param_2[3];
      uVar15 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar13;
      param_1[3] = uVar16;
      param_1[2] = uVar15;
      uVar13 = param_2[4];
      uVar16 = param_2[7];
      uVar15 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = uVar13;
      param_1[7] = uVar16;
      param_1[6] = uVar15;
      param_1[8] = uVar11;
      *(char *)(param_1 + 9) = cVar7;
      FUN_103059268(uVar10,uVar2,uVar14,uVar3,uVar17,uVar4,uVar1,uVar5,uVar12,cVar6);
      goto LAB_10305ed84;
    }
    FUN_103059634(param_1);
  }
  uVar10 = param_2[4];
  uVar17 = param_2[7];
  uVar14 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar10;
  param_1[7] = uVar17;
  param_1[6] = uVar14;
  uVar10 = *(undefined8 *)((long)param_2 + 0x39);
  *(undefined8 *)((long)param_1 + 0x41) = *(undefined8 *)((long)param_2 + 0x41);
  *(undefined8 *)((long)param_1 + 0x39) = uVar10;
  uVar17 = *param_2;
  uVar14 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar17;
  param_1[3] = uVar14;
  param_1[2] = uVar10;
LAB_10305ed84:
  *(undefined4 *)((long)param_1 + 0x4c) = *(undefined4 *)((long)param_2 + 0x4c);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  *(undefined2 *)((long)param_1 + 0x51) = *(undefined2 *)((long)param_2 + 0x51);
  uVar11 = param_2[0x13];
  uVar8 = *(undefined1 *)(param_2 + 0x14);
  uVar10 = param_1[0xb];
  uVar2 = param_1[0xc];
  uVar14 = param_1[0xd];
  uVar3 = param_1[0xe];
  uVar17 = param_1[0xf];
  uVar4 = param_1[0x10];
  uVar1 = param_1[0x11];
  uVar5 = param_1[0x12];
  uVar12 = param_1[0x13];
  uVar9 = *(undefined1 *)(param_1 + 0x14);
  uVar13 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar13;
  uVar13 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar13;
  uVar13 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar13;
  uVar13 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar13;
  param_1[0x13] = uVar11;
  *(undefined1 *)(param_1 + 0x14) = uVar8;
  FUN_103059268(uVar10,uVar2,uVar14,uVar3,uVar17,uVar4,uVar1,uVar5,uVar12,uVar9);
  uVar10 = param_1[0x16];
  uVar14 = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x15] = uVar14;
  func_0x000107c61574(uVar10);
  return param_1;
}



/* Entry: 10305ee14; end: 10305eed7;  */

int FUN_10305ee14(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x2e] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 0x2a);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10305eed8; end: 10305efbb;  */

void FUN_10305eed8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (puRam0000000112f36c78 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f36c80;
  func_0x00010002969c(0x112f36c80,&UNK_10db7f508);
  uVar2 = 0x112f36c50;
  func_0x00010002969c(0x112f36c50,&UNK_10db7f438);
  uVar3 = 0x112f36c70;
  func_0x00010305e830(0x112f36c70,0x112f36c50,&UNK_10db7f438,
                      PTR___s7SwiftUI6ButtonVyxGAA4ViewAAMc_110349850);
  uVar4 = uVar3;
  FUN_10305c388();
  puStack_48 = &UNK_110602a78;
  puVar5 = &uStack_50;
  uStack_50 = uVar2;
  uStack_40 = uVar3;
  uStack_38 = uVar4;
  func_0x000107c614f4(puVar5,
                      PTR___s7SwiftUI4ViewPAAE11buttonStyleyQrqd__AA06ButtonE0Rd__lFQOMQ_110349490,1
                     );
  puVar6 = puVar5;
  FUN_10305de24();
  puVar7 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  puStack_60 = puVar5;
  puStack_58 = puVar6;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&puStack_60);
  puRam0000000112f36c78 = puVar7;
  return;
}



/* Entry: 10305efbc; end: 10305efe3;  */

void FUN_10305efbc(undefined8 *param_1)

{
  param_1[0x12] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 0x13) = 0xfe;
  return;
}



/* Entry: 10305efe4; end: 10305f06b;  */

undefined8 FUN_10305efe4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10305f06c; end: 10305f06f;  */

void FUN_10305f06c(void)

{
  return;
}



/* Entry: 10305f070; end: 10305f0f3;  */

void FUN_10305f070(void)

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



/* Entry: 10305f0f4; end: 10305f12b;  */

undefined1 FUN_10305f0f4(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_10305f1b0();
  func_0x000107c5f3fc(&uStack_11,&UNK_110602bc8,&UNK_110602bc8,param_1);
  return uStack_11;
}



/* Entry: 10305f12c; end: 10305f1af;  */

void FUN_10305f12c(undefined8 param_1,undefined8 param_2)

{
  FUN_10305f1b0();
  func_0x000107c5f3fc(param_1,&UNK_110602bc8,&UNK_110602bc8,param_2);
  return;
}



/* Entry: 10305f1b0; end: 10305f1ef;  */

void FUN_10305f1b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f36c98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db7f6e8;
  func_0x000107c61520(&UNK_10db7f6e8,&UNK_110602bc8);
  puRam0000000112f36c98 = puVar1;
  return;
}



/* Entry: 10305f1f0; end: 10305f863;  */

void FUN_10305f1f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined **param_7,undefined8 param_8,
                  undefined **param_9,undefined8 param_10)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined4 uVar4;
  uint uVar5;
  bool bVar6;
  long lVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar13;
  undefined8 *puVar14;
  uint uVar15;
  code *pcVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puVar20;
  long alStack_260 [6];
  long lStack_230;
  undefined **ppuStack_228;
  long alStack_220 [3];
  long alStack_208 [2];
  undefined *apuStack_1f8 [10];
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  
  lVar7 = 0;
  alStack_208[1] = param_1;
  func_0x000107c5f434();
  alStack_220[2] = *(long *)(lVar7 + -8);
  alStack_208[0] = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_220[2] + 0x40));
  lVar9 = (long)&lStack_230 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0x112f36ca0;
  func_0x0001000285a8(0x112f36ca0,&UNK_10db7f518);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar14 = (undefined8 *)(lVar9 - extraout_x8_00);
  ppuVar8 = param_7;
  uVar13 = param_8;
  func_0x000101c13094();
  uVar15 = (uint)param_10;
  alStack_220[0] = lVar9;
  alStack_220[1] = lVar7;
  if ((((ulong)ppuVar8 & 1) == 0) &&
     (ppuVar8 = param_9, uVar13 = param_10, func_0x000101c13094(), ((ulong)ppuVar8 & 1) == 0)) {
    func_0x000103080bb4();
    puStack_c8 = ppuVar8[1];
    puStack_d0 = *ppuVar8;
    puStack_b8 = ppuVar8[3];
    puStack_c0 = ppuVar8[2];
    puStack_a8 = ppuVar8[5];
    puStack_b0 = ppuVar8[4];
    puStack_98 = ppuVar8[7];
    puStack_a0 = ppuVar8[6];
    func_0x000103080b48();
  }
  else {
    uVar5 = uVar15 >> 8 & 0xff;
    if (uVar5 < 2) {
      if (uVar5 == 0) {
        func_0x000103080bcc();
        puStack_c8 = ppuVar8[1];
        puStack_d0 = *ppuVar8;
        puStack_b8 = ppuVar8[3];
        puStack_c0 = ppuVar8[2];
        puStack_a8 = ppuVar8[5];
        puStack_b0 = ppuVar8[4];
        puStack_98 = ppuVar8[7];
        puStack_a0 = ppuVar8[6];
        func_0x000103080b60();
      }
      else {
        func_0x000103080bd8();
        puStack_c8 = ppuVar8[1];
        puStack_d0 = *ppuVar8;
        puStack_b8 = ppuVar8[3];
        puStack_c0 = ppuVar8[2];
        puStack_a8 = ppuVar8[5];
        puStack_b0 = ppuVar8[4];
        puStack_98 = ppuVar8[7];
        puStack_a0 = ppuVar8[6];
        func_0x000103080b30();
      }
    }
    else if (uVar5 == 2) {
      func_0x000103080ba8();
      puStack_c8 = ppuVar8[1];
      puStack_d0 = *ppuVar8;
      puStack_b8 = ppuVar8[3];
      puStack_c0 = ppuVar8[2];
      puStack_a8 = ppuVar8[5];
      puStack_b0 = ppuVar8[4];
      puStack_98 = ppuVar8[7];
      puStack_a0 = ppuVar8[6];
      func_0x000103080b54();
    }
    else {
      func_0x000103080bcc();
      puStack_c8 = ppuVar8[1];
      puStack_d0 = *ppuVar8;
      puStack_b8 = ppuVar8[3];
      puStack_c0 = ppuVar8[2];
      puStack_a8 = ppuVar8[5];
      puStack_b0 = ppuVar8[4];
      puStack_98 = ppuVar8[7];
      puStack_a0 = ppuVar8[6];
      func_0x000103080b3c();
    }
  }
  apuStack_1f8[2] = ppuVar8[1];
  apuStack_1f8[1] = *ppuVar8;
  apuStack_1f8[4] = ppuVar8[3];
  apuStack_1f8[3] = ppuVar8[2];
  apuStack_1f8[6] = ppuVar8[5];
  apuStack_1f8[5] = ppuVar8[4];
  apuStack_1f8[8] = ppuVar8[7];
  puVar19 = ppuVar8[6];
  apuStack_1f8[7] = puVar19;
  func_0x000107c5f7ac();
  *puVar14 = ppuVar8;
  puVar14[1] = uVar13;
  lVar7 = 0x112f36ca8;
  func_0x0001000285a8(0x112f36ca8,&UNK_10db7f520);
  FUN_10305f864((long)puVar14 + (long)*(int *)(lVar7 + 0x2c),param_6,param_7,param_8,param_9,
                uVar15 & 0xffffff,&puStack_d0);
  FUN_103080684();
  lVar7 = 0x112f36cb0;
  func_0x0001000285a8(0x112f36cb0,&UNK_10db7f528);
  *(undefined8 *)((long)puVar14 + (long)*(int *)(lVar7 + 0x24)) = param_6;
  func_0x000107c5f568();
  uVar5 = uVar15 >> 0x10 & 0xff;
  uVar17 = *(undefined8 *)(&UNK_10db7f780 + (ulong)uVar5 * 8);
  func_0x000107c5f280();
  lVar9 = 0x112f36cb8;
  puVar20 = puVar19;
  uVar13 = param_4;
  uVar18 = param_5;
  func_0x0001000285a8(0x112f36cb8,&UNK_10db7f530);
  puVar1 = (undefined1 *)((long)puVar14 + (long)*(int *)(lVar9 + 0x24));
  *puVar1 = (char)lVar7;
  *(undefined8 *)(puVar1 + 8) = uVar17;
  *(undefined **)(puVar1 + 0x10) = puVar19;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  func_0x000107c5f584();
  uVar17 = *(undefined8 *)(&UNK_10db7f7c0 + (ulong)uVar5 * 8);
  func_0x000107c5f280();
  lVar7 = 0x112f36cc0;
  puVar19 = &UNK_10db7f538;
  func_0x0001000285a8();
  puVar1 = (undefined1 *)((long)puVar14 + (long)*(int *)(lVar7 + 0x24));
  *puVar1 = (char)lVar9;
  *(undefined8 *)(puVar1 + 8) = uVar17;
  *(undefined **)(puVar1 + 0x10) = puVar20;
  *(undefined8 *)(puVar1 + 0x18) = uVar13;
  *(undefined8 *)(puVar1 + 0x20) = uVar18;
  puVar1[0x28] = 0;
  uVar13 = *(undefined8 *)(&UNK_10db7f7a0 + (ulong)uVar5 * 8);
  func_0x000107c5f7ac();
  puVar14[-2] = lVar7;
  puVar14[-1] = puVar19;
  *(undefined1 *)(puVar14 + -3) = 1;
  puVar14[-4] = 0;
  *(undefined1 *)(puVar14 + -5) = 1;
  puVar14[-6] = 0;
  func_0x000107c5f388(apuStack_1f8 + 9,0,1,0,1,0,1,uVar13,0);
  lVar7 = 0x112f36cc8;
  puVar19 = &UNK_10db7f540;
  func_0x0001000285a8();
  puVar2 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar7 + 0x24));
  puVar2[9] = uStack_168;
  puVar2[8] = uStack_170;
  puVar2[0xb] = uStack_158;
  puVar2[10] = uStack_160;
  puVar2[0xd] = uStack_148;
  puVar2[0xc] = uStack_150;
  puVar2[1] = uStack_1a8;
  *puVar2 = apuStack_1f8[9];
  puVar2[3] = uStack_198;
  puVar2[2] = uStack_1a0;
  puVar2[5] = uStack_188;
  puVar2[4] = uStack_190;
  puVar2[7] = uStack_178;
  puVar2[6] = uStack_180;
  func_0x000107c5f7ac();
  bVar6 = (uVar15 & 0xff0000) != 0x30000;
  uVar13 = 0;
  if (!bVar6) {
    uVar13 = 0x7ff0000000000000;
  }
  puVar14[-2] = lVar7;
  puVar14[-1] = puVar19;
  *(undefined1 *)(puVar14 + -3) = 1;
  puVar14[-4] = 0;
  *(undefined1 *)(puVar14 + -5) = 1;
  puVar14[-6] = 0;
  func_0x000107c5f388(&uStack_140,0,1,0,1,uVar13,bVar6,0,1);
  lVar7 = 0x112f36cd0;
  func_0x0001000285a8(0x112f36cd0,&UNK_10db7f548);
  puVar2 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar7 + 0x24));
  puVar2[9] = uStack_f8;
  puVar2[8] = uStack_100;
  puVar2[0xb] = uStack_e8;
  puVar2[10] = uStack_f0;
  puVar2[0xd] = uStack_d8;
  puVar2[0xc] = uStack_e0;
  puVar2[1] = uStack_138;
  *puVar2 = uStack_140;
  puVar2[3] = uStack_128;
  puVar2[2] = uStack_130;
  puVar2[5] = uStack_118;
  puVar2[4] = uStack_120;
  puVar2[7] = uStack_108;
  puVar2[6] = uStack_110;
  lVar7 = 0x112f36cd8;
  func_0x0001000285a8(0x112f36cd8,&UNK_10db7f550);
  lVar12 = (long)puVar14 + (long)*(int *)(lVar7 + 0x24);
  uVar4 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_110348d50;
  lVar10 = 0;
  func_0x000107c5f41c();
  pcVar16 = *(code **)(*(long *)(lVar10 + -8) + 0x68);
  lVar9 = lVar12;
  ppuStack_228 = param_9;
  (*pcVar16)(lVar12,uVar4,lVar10);
  FUN_103080684();
  lVar7 = 0x112e02d80;
  puVar19 = &UNK_10d9dee00;
  func_0x0001000285a8();
  *(long *)(lVar12 + *(int *)(lVar7 + 0x34)) = lVar9;
  *(undefined2 *)(lVar12 + *(int *)(lVar7 + 0x38)) = 0x100;
  func_0x000107c5f7ac();
  lVar9 = 0x112e02d88;
  func_0x0001000285a8(0x112e02d88,&UNK_10d9d5330);
  plVar3 = (long *)(lVar12 + *(int *)(lVar9 + 0x24));
  *plVar3 = lVar7;
  plVar3[1] = (long)puVar19;
  lVar7 = 0x112f36ce0;
  func_0x0001000285a8(0x112f36ce0,&UNK_10db7f558);
  lVar7 = (long)puVar14 + (long)*(int *)(lVar7 + 0x24);
  (*pcVar16)(lVar7,uVar4,lVar10);
  uVar11 = 0x112e02d98;
  func_0x0001000285a8(0x112e02d98,&UNK_10d9d5340);
  *(undefined1 *)(lVar7 + *(int *)(uVar11 + 0x24)) = 0;
  func_0x000107c5f4f0();
  uVar18 = 0x3feeb851eb851eb8;
  uVar17 = 0x3ff0000000000000;
  uVar13 = uVar18;
  if ((uVar11 & 1) == 0) {
    uVar13 = 0x3ff0000000000000;
  }
  func_0x000107c5f7e4();
  lVar7 = 0x112f36ce8;
  func_0x0001000285a8(0x112f36ce8,&UNK_10db7f568);
  puVar2 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar7 + 0x24));
  *puVar2 = uVar13;
  puVar2[1] = uVar13;
  puVar2[2] = uVar18;
  puVar2[3] = uVar17;
  func_0x000107c5f7c8(0x3fd0000000000000,0x3fe6666666666666,0);
  lVar12 = lVar7;
  func_0x000107c5f4f0();
  lVar9 = alStack_220[1];
  plVar3 = (long *)((long)puVar14 + (long)*(int *)(alStack_220[1] + 0x24));
  *plVar3 = lVar7;
  *(byte *)(plVar3 + 1) = (byte)lVar12 & 1;
  ppuVar8 = ppuStack_228;
  func_0x000101c13094(ppuStack_228,param_10);
  lVar7 = alStack_220[0];
  if (((ulong)ppuVar8 & 1) == 0) {
    apuStack_1f8[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar13 = 0x112f36cf0;
    func_0x00010306078c(0x112f36cf0,PTR___s7SwiftUI19AccessibilityTraitsVMa_110348dd8,
                        PTR___s7SwiftUI19AccessibilityTraitsVs10SetAlgebraAAMc_110348de8);
    uVar18 = 0x112f36cf8;
    func_0x0001000285a8(0x112f36cf8,&UNK_10db7f570);
    uVar17 = 0x112f36d00;
    func_0x0001030607cc(0x112f36d00,0x112f36cf8,&UNK_10db7f570,PTR___sSayxGSTsMc_11034dd08);
    lVar12 = alStack_208[0];
    lVar7 = alStack_220[0];
    ppuVar8 = apuStack_1f8;
    func_0x000107c60264(alStack_220[0],ppuVar8,uVar18,uVar17,alStack_208[0],uVar13);
  }
  else {
    func_0x000107c5f428(alStack_220[0]);
    lVar12 = alStack_208[0];
  }
  FUN_10305fdc8();
  func_0x000107c5f668(alStack_208[1],lVar7,lVar9,ppuVar8);
  (**(code **)(alStack_220[2] + 8))(lVar7,lVar12);
  func_0x000103060a20(puVar14,0x112f36ca0,&UNK_10db7f518);
  return;
}



/* Entry: 10305f864; end: 10305fbef;  */

void FUN_10305f864(long param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  uint uVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined *puVar7;
  long lVar8;
  ulong in_x3;
  undefined8 in_x4;
  ulong *in_x5;
  long extraout_x8;
  ulong uVar9;
  long extraout_x12;
  long lVar10;
  undefined8 uVar11;
  ulong *puStack_340;
  ulong auStack_338 [2];
  undefined1 auStack_328 [168];
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  uVar3 = (uint)in_x4 >> 0x10 & 0xff;
  pbVar5 = (byte *)0x112f36d80;
  puStack_340 = in_x5;
  auStack_338[0] = param_1;
  func_0x0001000285a8(0x112f36d80,&UNK_10db7f728);
  pbVar6 = pbVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(pbVar5 + -8) + 0x40));
  lVar10 = (long)&puStack_340 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  auStack_338[1] = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12;
  func_0x000107c5f4ec(lVar10);
  if (uVar3 < 2) {
    if (uVar3 == 0) {
      func_0x000103081b50();
    }
    else {
      func_0x000103081b20();
    }
  }
  else {
    func_0x000103081b38();
  }
  uVar9 = (ulong)*pbVar6;
  FUN_103081288(*(undefined8 *)(pbVar6 + 8),*(undefined8 *)(pbVar6 + 0x18),uVar9,pbVar6[0x10]);
  puVar7 = &UNK_10db7f730;
  func_0x000107c614e0();
  lVar8 = 0x112e02d48;
  func_0x0001000285a8(0x112e02d48,&UNK_10d9d52f0);
  puVar1 = (undefined8 *)(lVar10 + *(int *)(lVar8 + 0x24));
  *puVar1 = puVar7;
  puVar1[1] = uVar9;
  uVar9 = in_x3;
  func_0x000101c13094(in_x3,in_x4);
  uVar11 = 0;
  if ((uVar9 & 1) == 0) {
    uVar11 = 0x3ff0000000000000;
  }
  *(undefined8 *)(lVar10 + *(int *)(pbVar5 + 0x24)) = uVar11;
  func_0x000101c13094(in_x3,in_x4);
  if ((in_x3 & 1) == 0) {
    FUN_1030609b4(&uStack_120);
  }
  else {
    uStack_1d0 = uStack_1d0 & 0xffffffffffffff00;
    func_0x000107c5f728(&uStack_88,&uStack_1d0,PTR___sSbN_11034dd40);
    uStack_120 = CONCAT71(uStack_120._1_7_,1 < uVar3);
    uStack_1a0 = puStack_340[5];
    uStack_1a8 = puStack_340[4];
    uStack_190 = puStack_340[7];
    uStack_198 = puStack_340[6];
    uStack_1c0 = puStack_340[1];
    uStack_1c8 = *puStack_340;
    uStack_1b0 = puStack_340[3];
    uStack_1b8 = puStack_340[2];
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_98 = 0;
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_d8 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,0xff);
    uStack_130 = uStack_80;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = uStack_88;
    uStack_140 = uStack_90;
    uStack_1d0 = uStack_120;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_188 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_118 = uStack_1c8;
    uStack_110 = uStack_1c0;
    uStack_108 = uStack_1b8;
    uStack_100 = uStack_1b0;
    uStack_f8 = uStack_1a8;
    uStack_f0 = uStack_1a0;
    uStack_e8 = uStack_198;
    uStack_e0 = uStack_190;
    FUN_103060a60(&uStack_1d0);
    uStack_98 = uStack_148;
    uStack_a0 = uStack_150;
    uStack_88 = uStack_138;
    uStack_90 = uStack_140;
    uStack_80 = uStack_130;
    uStack_d8 = uStack_188;
    uStack_e0 = uStack_190;
    uStack_c8 = uStack_178;
    uStack_d0 = uStack_180;
    uStack_b8 = uStack_168;
    uStack_c0 = uStack_170;
    uStack_a8 = uStack_158;
    uStack_b0 = uStack_160;
    uStack_118 = uStack_1c8;
    uStack_120 = uStack_1d0;
    uStack_108 = uStack_1b8;
    uStack_110 = uStack_1c0;
    uStack_f8 = uStack_1a8;
    uStack_100 = uStack_1b0;
    uStack_e8 = uStack_198;
    uStack_f0 = uStack_1a0;
  }
  uVar4 = auStack_338[1];
  FUN_1030609d8(lVar10,auStack_338[1],0x112f36d80,&UNK_10db7f728);
  uVar9 = auStack_338[0];
  uStack_1f8 = uStack_98;
  uStack_200 = uStack_a0;
  uStack_1e8 = uStack_88;
  uStack_1f0 = uStack_90;
  uStack_1e0 = uStack_80;
  uStack_238 = uStack_d8;
  uStack_240 = uStack_e0;
  uStack_228 = uStack_c8;
  uStack_230 = uStack_d0;
  uStack_218 = uStack_b8;
  uStack_220 = uStack_c0;
  uStack_208 = uStack_a8;
  uStack_210 = uStack_b0;
  uStack_278 = uStack_118;
  uStack_280 = uStack_120;
  uStack_268 = uStack_108;
  uStack_270 = uStack_110;
  uStack_258 = uStack_f8;
  uStack_260 = uStack_100;
  uStack_248 = uStack_e8;
  uStack_250 = uStack_f0;
  FUN_1030609d8(uVar4,auStack_338[0],0x112f36d80,&UNK_10db7f728);
  lVar8 = 0x112f36d88;
  func_0x0001000285a8(0x112f36d88,&UNK_10db7f768);
  puVar2 = (ulong *)(uVar9 + (long)*(int *)(lVar8 + 0x30));
  uStack_148 = uStack_98;
  uStack_150 = uStack_a0;
  uStack_138 = uStack_88;
  uStack_140 = uStack_90;
  uStack_188 = uStack_d8;
  uStack_190 = uStack_e0;
  uStack_178 = uStack_c8;
  uStack_180 = uStack_d0;
  uStack_168 = uStack_b8;
  uStack_170 = uStack_c0;
  uStack_158 = uStack_a8;
  uStack_160 = uStack_b0;
  uStack_1c8 = uStack_118;
  uStack_1d0 = uStack_120;
  uStack_1b8 = uStack_108;
  uStack_1c0 = uStack_110;
  uStack_1a8 = uStack_f8;
  uStack_1b0 = uStack_100;
  uStack_198 = uStack_e8;
  uStack_1a0 = uStack_f0;
  puVar2[0x11] = uStack_98;
  puVar2[0x10] = uStack_a0;
  puVar2[0x13] = uStack_88;
  puVar2[0x12] = uStack_90;
  puVar2[9] = uStack_d8;
  puVar2[8] = uStack_e0;
  puVar2[0xb] = uStack_c8;
  puVar2[10] = uStack_d0;
  puVar2[0xd] = uStack_b8;
  puVar2[0xc] = uStack_c0;
  puVar2[0xf] = uStack_a8;
  puVar2[0xe] = uStack_b0;
  puVar2[1] = uStack_118;
  *puVar2 = uStack_120;
  puVar2[3] = uStack_108;
  puVar2[2] = uStack_110;
  uStack_130 = uStack_80;
  puVar2[0x14] = uStack_80;
  puVar2[5] = uStack_f8;
  puVar2[4] = uStack_100;
  puVar2[7] = uStack_e8;
  puVar2[6] = uStack_f0;
  FUN_1030609d8(&uStack_1d0,auStack_328,0x112f36d90,&UNK_10db7f770);
  func_0x000103060a20(lVar10,0x112f36d80,&UNK_10db7f728);
  func_0x000103060a20(&uStack_280,0x112f36d90,&UNK_10db7f770);
  func_0x000103060a20(uVar4,0x112f36d80,&UNK_10db7f728);
  return;
}



/* Entry: 10305fbf0; end: 10305fc13;  */

void FUN_10305fbf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined4 uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint3 uVar8;
  uint3 uVar9;
  bool bVar10;
  long lVar11;
  undefined **ppuVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar19;
  undefined8 *unaff_x20;
  undefined8 *puVar20;
  code *pcVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined *puVar24;
  undefined *puVar25;
  long alStack_260 [6];
  long lStack_230;
  undefined **ppuStack_228;
  long alStack_220 [3];
  long alStack_208 [2];
  undefined *apuStack_1f8 [10];
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  
  ppuVar17 = (undefined **)*unaff_x20;
  ppuVar18 = (undefined **)unaff_x20[2];
  uVar8 = *(uint3 *)(unaff_x20 + 3);
  uVar6 = (uint)uVar8;
  bVar5 = *(byte *)(unaff_x20 + 1);
  lVar11 = 0;
  alStack_208[1] = param_1;
  func_0x000107c5f434();
  alStack_220[2] = *(long *)(lVar11 + -8);
  alStack_208[0] = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_220[2] + 0x40));
  lVar13 = (long)&lStack_230 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar11 = 0x112f36ca0;
  func_0x0001000285a8(0x112f36ca0,&UNK_10db7f518);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar20 = (undefined8 *)(lVar13 - extraout_x8_00);
  ppuVar12 = ppuVar17;
  uVar15 = (ulong)bVar5;
  func_0x000101c13094();
  alStack_220[0] = lVar13;
  alStack_220[1] = lVar11;
  if ((((ulong)ppuVar12 & 1) == 0) &&
     (ppuVar12 = ppuVar18, uVar15 = (ulong)uVar6, func_0x000101c13094(), ((ulong)ppuVar12 & 1) == 0)
     ) {
    func_0x000103080bb4();
    puStack_c8 = ppuVar12[1];
    puStack_d0 = *ppuVar12;
    puStack_b8 = ppuVar12[3];
    puStack_c0 = ppuVar12[2];
    puStack_a8 = ppuVar12[5];
    puStack_b0 = ppuVar12[4];
    puStack_98 = ppuVar12[7];
    puStack_a0 = ppuVar12[6];
    func_0x000103080b48();
  }
  else {
    uVar9 = uVar8 >> 8 & 0xff;
    if (uVar9 < 2) {
      if (uVar9 == 0) {
        func_0x000103080bcc();
        puStack_c8 = ppuVar12[1];
        puStack_d0 = *ppuVar12;
        puStack_b8 = ppuVar12[3];
        puStack_c0 = ppuVar12[2];
        puStack_a8 = ppuVar12[5];
        puStack_b0 = ppuVar12[4];
        puStack_98 = ppuVar12[7];
        puStack_a0 = ppuVar12[6];
        func_0x000103080b60();
      }
      else {
        func_0x000103080bd8();
        puStack_c8 = ppuVar12[1];
        puStack_d0 = *ppuVar12;
        puStack_b8 = ppuVar12[3];
        puStack_c0 = ppuVar12[2];
        puStack_a8 = ppuVar12[5];
        puStack_b0 = ppuVar12[4];
        puStack_98 = ppuVar12[7];
        puStack_a0 = ppuVar12[6];
        func_0x000103080b30();
      }
    }
    else if (uVar9 == 2) {
      func_0x000103080ba8();
      puStack_c8 = ppuVar12[1];
      puStack_d0 = *ppuVar12;
      puStack_b8 = ppuVar12[3];
      puStack_c0 = ppuVar12[2];
      puStack_a8 = ppuVar12[5];
      puStack_b0 = ppuVar12[4];
      puStack_98 = ppuVar12[7];
      puStack_a0 = ppuVar12[6];
      func_0x000103080b54();
    }
    else {
      func_0x000103080bcc();
      puStack_c8 = ppuVar12[1];
      puStack_d0 = *ppuVar12;
      puStack_b8 = ppuVar12[3];
      puStack_c0 = ppuVar12[2];
      puStack_a8 = ppuVar12[5];
      puStack_b0 = ppuVar12[4];
      puStack_98 = ppuVar12[7];
      puStack_a0 = ppuVar12[6];
      func_0x000103080b3c();
    }
  }
  apuStack_1f8[2] = ppuVar12[1];
  apuStack_1f8[1] = *ppuVar12;
  apuStack_1f8[4] = ppuVar12[3];
  apuStack_1f8[3] = ppuVar12[2];
  apuStack_1f8[6] = ppuVar12[5];
  apuStack_1f8[5] = ppuVar12[4];
  apuStack_1f8[8] = ppuVar12[7];
  puVar24 = ppuVar12[6];
  apuStack_1f8[7] = puVar24;
  func_0x000107c5f7ac();
  *puVar20 = ppuVar12;
  puVar20[1] = uVar15;
  lVar11 = 0x112f36ca8;
  func_0x0001000285a8(0x112f36ca8,&UNK_10db7f520);
  FUN_10305f864((long)puVar20 + (long)*(int *)(lVar11 + 0x2c),param_6,ppuVar17,(ulong)bVar5,ppuVar18
                ,uVar6,&puStack_d0);
  FUN_103080684();
  lVar11 = 0x112f36cb0;
  func_0x0001000285a8(0x112f36cb0,&UNK_10db7f528);
  *(undefined8 *)((long)puVar20 + (long)*(int *)(lVar11 + 0x24)) = param_6;
  func_0x000107c5f568();
  uVar7 = (uint)(uVar8 >> 0x10);
  uVar22 = *(undefined8 *)(&UNK_10db7f780 + (ulong)uVar7 * 8);
  func_0x000107c5f280();
  lVar13 = 0x112f36cb8;
  puVar25 = puVar24;
  uVar19 = param_4;
  uVar23 = param_5;
  func_0x0001000285a8(0x112f36cb8,&UNK_10db7f530);
  puVar1 = (undefined1 *)((long)puVar20 + (long)*(int *)(lVar13 + 0x24));
  *puVar1 = (char)lVar11;
  *(undefined8 *)(puVar1 + 8) = uVar22;
  *(undefined **)(puVar1 + 0x10) = puVar24;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  func_0x000107c5f584();
  uVar22 = *(undefined8 *)(&UNK_10db7f7c0 + (ulong)uVar7 * 8);
  func_0x000107c5f280();
  lVar11 = 0x112f36cc0;
  puVar24 = &UNK_10db7f538;
  func_0x0001000285a8();
  puVar1 = (undefined1 *)((long)puVar20 + (long)*(int *)(lVar11 + 0x24));
  *puVar1 = (char)lVar13;
  *(undefined8 *)(puVar1 + 8) = uVar22;
  *(undefined **)(puVar1 + 0x10) = puVar25;
  *(undefined8 *)(puVar1 + 0x18) = uVar19;
  *(undefined8 *)(puVar1 + 0x20) = uVar23;
  puVar1[0x28] = 0;
  uVar19 = *(undefined8 *)(&UNK_10db7f7a0 + (ulong)uVar7 * 8);
  func_0x000107c5f7ac();
  puVar20[-2] = lVar11;
  puVar20[-1] = puVar24;
  *(undefined1 *)(puVar20 + -3) = 1;
  puVar20[-4] = 0;
  *(undefined1 *)(puVar20 + -5) = 1;
  puVar20[-6] = 0;
  func_0x000107c5f388(apuStack_1f8 + 9,0,1,0,1,0,1,uVar19,0);
  lVar11 = 0x112f36cc8;
  puVar24 = &UNK_10db7f540;
  func_0x0001000285a8();
  puVar2 = (undefined8 *)((long)puVar20 + (long)*(int *)(lVar11 + 0x24));
  puVar2[9] = uStack_168;
  puVar2[8] = uStack_170;
  puVar2[0xb] = uStack_158;
  puVar2[10] = uStack_160;
  puVar2[0xd] = uStack_148;
  puVar2[0xc] = uStack_150;
  puVar2[1] = uStack_1a8;
  *puVar2 = apuStack_1f8[9];
  puVar2[3] = uStack_198;
  puVar2[2] = uStack_1a0;
  puVar2[5] = uStack_188;
  puVar2[4] = uStack_190;
  puVar2[7] = uStack_178;
  puVar2[6] = uStack_180;
  func_0x000107c5f7ac();
  bVar10 = (uVar6 & 0xff0000) != 0x30000;
  uVar19 = 0;
  if (!bVar10) {
    uVar19 = 0x7ff0000000000000;
  }
  puVar20[-2] = lVar11;
  puVar20[-1] = puVar24;
  *(undefined1 *)(puVar20 + -3) = 1;
  puVar20[-4] = 0;
  *(undefined1 *)(puVar20 + -5) = 1;
  puVar20[-6] = 0;
  func_0x000107c5f388(&uStack_140,0,1,0,1,uVar19,bVar10,0,1);
  lVar11 = 0x112f36cd0;
  func_0x0001000285a8(0x112f36cd0,&UNK_10db7f548);
  puVar2 = (undefined8 *)((long)puVar20 + (long)*(int *)(lVar11 + 0x24));
  puVar2[9] = uStack_f8;
  puVar2[8] = uStack_100;
  puVar2[0xb] = uStack_e8;
  puVar2[10] = uStack_f0;
  puVar2[0xd] = uStack_d8;
  puVar2[0xc] = uStack_e0;
  puVar2[1] = uStack_138;
  *puVar2 = uStack_140;
  puVar2[3] = uStack_128;
  puVar2[2] = uStack_130;
  puVar2[5] = uStack_118;
  puVar2[4] = uStack_120;
  puVar2[7] = uStack_108;
  puVar2[6] = uStack_110;
  lVar11 = 0x112f36cd8;
  func_0x0001000285a8(0x112f36cd8,&UNK_10db7f550);
  lVar16 = (long)puVar20 + (long)*(int *)(lVar11 + 0x24);
  uVar4 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_110348d50;
  lVar14 = 0;
  func_0x000107c5f41c();
  pcVar21 = *(code **)(*(long *)(lVar14 + -8) + 0x68);
  lVar13 = lVar16;
  ppuStack_228 = ppuVar18;
  (*pcVar21)(lVar16,uVar4,lVar14);
  FUN_103080684();
  lVar11 = 0x112e02d80;
  puVar24 = &UNK_10d9dee00;
  func_0x0001000285a8();
  *(long *)(lVar16 + *(int *)(lVar11 + 0x34)) = lVar13;
  *(undefined2 *)(lVar16 + *(int *)(lVar11 + 0x38)) = 0x100;
  func_0x000107c5f7ac();
  lVar13 = 0x112e02d88;
  func_0x0001000285a8(0x112e02d88,&UNK_10d9d5330);
  plVar3 = (long *)(lVar16 + *(int *)(lVar13 + 0x24));
  *plVar3 = lVar11;
  plVar3[1] = (long)puVar24;
  lVar11 = 0x112f36ce0;
  func_0x0001000285a8(0x112f36ce0,&UNK_10db7f558);
  lVar11 = (long)puVar20 + (long)*(int *)(lVar11 + 0x24);
  (*pcVar21)(lVar11,uVar4,lVar14);
  uVar15 = 0x112e02d98;
  func_0x0001000285a8(0x112e02d98,&UNK_10d9d5340);
  *(undefined1 *)(lVar11 + *(int *)(uVar15 + 0x24)) = 0;
  func_0x000107c5f4f0();
  uVar23 = 0x3feeb851eb851eb8;
  uVar22 = 0x3ff0000000000000;
  uVar19 = uVar23;
  if ((uVar15 & 1) == 0) {
    uVar19 = 0x3ff0000000000000;
  }
  func_0x000107c5f7e4();
  lVar11 = 0x112f36ce8;
  func_0x0001000285a8(0x112f36ce8,&UNK_10db7f568);
  puVar2 = (undefined8 *)((long)puVar20 + (long)*(int *)(lVar11 + 0x24));
  *puVar2 = uVar19;
  puVar2[1] = uVar19;
  puVar2[2] = uVar23;
  puVar2[3] = uVar22;
  func_0x000107c5f7c8(0x3fd0000000000000,0x3fe6666666666666,0);
  lVar16 = lVar11;
  func_0x000107c5f4f0();
  lVar13 = alStack_220[1];
  plVar3 = (long *)((long)puVar20 + (long)*(int *)(alStack_220[1] + 0x24));
  *plVar3 = lVar11;
  *(byte *)(plVar3 + 1) = (byte)lVar16 & 1;
  ppuVar12 = ppuStack_228;
  func_0x000101c13094(ppuStack_228,(ulong)uVar6);
  lVar11 = alStack_220[0];
  if (((ulong)ppuVar12 & 1) == 0) {
    apuStack_1f8[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar19 = 0x112f36cf0;
    func_0x00010306078c(0x112f36cf0,PTR___s7SwiftUI19AccessibilityTraitsVMa_110348dd8,
                        PTR___s7SwiftUI19AccessibilityTraitsVs10SetAlgebraAAMc_110348de8);
    uVar23 = 0x112f36cf8;
    func_0x0001000285a8(0x112f36cf8,&UNK_10db7f570);
    uVar22 = 0x112f36d00;
    func_0x0001030607cc(0x112f36d00,0x112f36cf8,&UNK_10db7f570,PTR___sSayxGSTsMc_11034dd08);
    lVar16 = alStack_208[0];
    lVar11 = alStack_220[0];
    ppuVar12 = apuStack_1f8;
    func_0x000107c60264(alStack_220[0],ppuVar12,uVar23,uVar22,alStack_208[0],uVar19);
  }
  else {
    func_0x000107c5f428(alStack_220[0]);
    lVar16 = alStack_208[0];
  }
  FUN_10305fdc8();
  func_0x000107c5f668(alStack_208[1],lVar11,lVar13,ppuVar12);
  (**(code **)(alStack_220[2] + 8))(lVar11,lVar16);
  func_0x000103060a20(puVar20,0x112f36ca0,&UNK_10db7f518);
  return;
}



/* Entry: 10305fc14; end: 10305fc33;  */

uint FUN_10305fc14(uint param_1)

{
  func_0x000107c5f308();
  return param_1 & 1;
}



/* Entry: 10305fc34; end: 10305fdc7;  */

ulong FUN_10305fc34(ulong param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long lVar8;
  long lVar9;
  undefined8 uStack_70;
  byte bStack_61;
  
  lVar1 = 0;
  func_0x000107c5f3f8();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (((uint)param_2 & 0xff) != 1) {
    uVar2 = param_1;
    func_0x000107c6157c();
    func_0x000107c5ff78();
    uVar3 = uVar2;
    func_0x000107c5f558();
    uVar4 = uVar3;
    func_0x000107c611d4();
    if ((int)uVar4 != 0) {
      puVar5 = (undefined4 *)0xc;
      func_0x000107c6158c(0xc,0xffffffffffffffff);
      uVar6 = 0x20;
      func_0x000107c6158c(0x20,0xffffffffffffffff);
      *puVar5 = 0x8200102;
      uVar7 = 0x6d65685470616e53;
      uStack_70 = uVar6;
      func_0x0001014bfa20(0x6d65685470616e53,0xe900000000000065,&uStack_70);
      *(undefined8 *)(puVar5 + 1) = uVar7;
      func_0x000107c60ea4(0x100000000,uVar3,(uint)uVar2 & 0xff,
                          "Accessing Environment<%s>\'s value outside of being installed on a View. This will always read the default value and will not update."
                          ,puVar5,0xc);
      func_0x000100183ab8(uVar6);
      func_0x000107c61590(uVar6,0xffffffffffffffff,0xffffffffffffffff);
      func_0x000107c61590(puVar5,0xffffffffffffffff,0xffffffffffffffff);
    }
    func_0x000107c61170(uVar3);
    func_0x000107c5f3f4(lVar8);
    func_0x000107c614bc(&bStack_61,lVar8,param_1);
    func_0x000100d31174(param_1,param_2);
    (**(code **)(lVar9 + 8))(lVar8,lVar1);
    param_1 = (ulong)bStack_61;
  }
  return param_1;
}



/* Entry: 10305fdc8; end: 10306029f;  */

void FUN_10305fdc8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112f36d08 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f36ca0;
  func_0x00010002969c(0x112f36ca0,&UNK_10db7f518);
  uVar2 = uVar1;
  func_0x00010305fe60();
  uVar3 = 0x112e02e28;
  func_0x0001030607cc(0x112e02e28,0x112e02e30,&UNK_10da5a740,
                      PTR___s7SwiftUI18_AnimationModifierVyxGAA04ViewD0AAMc_110348d80);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112f36d08 = puVar4;
  return;
}



/* Entry: 1030602a0; end: 1030602a3;  */

void FUN_1030602a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f36d60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db7f588;
  func_0x000107c61520(&UNK_10db7f588,&UNK_110602b18);
  puRam0000000112f36d60 = puVar1;
  return;
}



/* Entry: 1030602a4; end: 1030602e3;  */

void FUN_1030602a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f36d60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db7f588;
  func_0x000107c61520(&UNK_10db7f588,&UNK_110602b18);
  puRam0000000112f36d60 = puVar1;
  return;
}



/* Entry: 1030602e4; end: 1030602e7;  */

void FUN_1030602e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f36d68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db7f5f0;
  func_0x000107c61520(&UNK_10db7f5f0,&UNK_110602ba8);
  puRam0000000112f36d68 = puVar1;
  return;
}



/* Entry: 1030602e8; end: 103060327;  */

void FUN_1030602e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f36d68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db7f5f0;
  func_0x000107c61520(&UNK_10db7f5f0,&UNK_110602ba8);
  puRam0000000112f36d68 = puVar1;
  return;
}



/* Entry: 103060328; end: 103060337;  */

void FUN_103060328(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e741e94,1);
  return;
}



/* Entry: 103060338; end: 103060393;  */

long FUN_103060338(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103060394; end: 10306048b;  */

undefined8 * FUN_103060394(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  func_0x000101c13424(uVar2,uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  uVar2 = param_2[2];
  uVar1 = *(undefined1 *)(param_2 + 3);
  func_0x000101c13424(uVar2,uVar1);
  param_1[2] = uVar2;
  *(undefined1 *)(param_1 + 3) = uVar1;
  *(undefined2 *)((long)param_1 + 0x19) = *(undefined2 *)((long)param_2 + 0x19);
  return param_1;
}



/* Entry: 10306048c; end: 1030604ef;  */

undefined8 * FUN_10306048c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x000100d31174(uVar3,uVar2);
  uVar1 = *(undefined1 *)(param_2 + 3);
  uVar3 = param_1[2];
  param_1[2] = param_2[2];
  uVar2 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar1;
  func_0x000100d31174(uVar3,uVar2);
  *(undefined2 *)((long)param_1 + 0x19) = *(undefined2 *)((long)param_2 + 0x19);
  return param_1;
}



/* Entry: 1030604f0; end: 1030606fb;  */

int FUN_1030604f0(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x1b) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1030606fc; end: 10306080f;  */

void FUN_1030606fc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112f36d70 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f36d78;
  func_0x00010002969c(0x112f36d78,&UNK_10db7f6c0);
  uVar2 = uVar1;
  FUN_10305fdc8();
  uVar3 = 0x112d500b8;
  func_0x00010306078c(0x112d500b8,PTR___s7SwiftUI31AccessibilityAttachmentModifierVMa_110349210,
                      PTR___s7SwiftUI31AccessibilityAttachmentModifierVAA04ViewE0AAMc_110349208);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112f36d70 = puVar4;
  return;
}



/* Entry: 103060810; end: 10306081f;  */

undefined1  [16] FUN_103060810(void)

{
  return ZEXT816(0x110602bc8);
}



/* Entry: 103060820; end: 1030609b3;  */

undefined8 FUN_103060820(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar1 = 0;
  func_0x000107c5f3f8();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar7 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (((uint)param_2 & 0xff) != 1) {
    uVar2 = param_1;
    func_0x000107c6157c();
    func_0x000107c5ff78();
    uVar3 = uVar2;
    func_0x000107c5f558();
    uVar5 = uVar3;
    func_0x000107c611d4();
    if ((int)uVar5 != 0) {
      puVar4 = (undefined4 *)0xc;
      func_0x000107c6158c(0xc,0xffffffffffffffff);
      uVar5 = 0x20;
      func_0x000107c6158c(0x20,0xffffffffffffffff);
      *puVar4 = 0x8200102;
      uVar6 = 0x74616f6c464743;
      uStack_68 = uVar5;
      func_0x0001014bfa20(0x74616f6c464743,0xe700000000000000,&uStack_68);
      *(undefined8 *)(puVar4 + 1) = uVar6;
      func_0x000107c60ea4(0x100000000,uVar3,(uint)uVar2 & 0xff,
                          "Accessing Environment<%s>\'s value outside of being installed on a View. This will always read the default value and will not update."
                          ,puVar4,0xc);
      func_0x000100183ab8(uVar5);
      func_0x000107c61590(uVar5,0xffffffffffffffff,0xffffffffffffffff);
      func_0x000107c61590(puVar4,0xffffffffffffffff,0xffffffffffffffff);
    }
    func_0x000107c61170(uVar3);
    func_0x000107c5f3f4(puVar7);
    func_0x000107c614bc(&uStack_68,puVar7,param_1);
    func_0x000100d31174(param_1,param_2);
    (**(code **)(lVar8 + 8))(puVar7,lVar1);
    param_1 = uStack_68;
  }
  return param_1;
}



/* Entry: 1030609b4; end: 1030609d7;  */

void FUN_1030609b4(undefined8 *param_1)

{
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[0x14] = 1;
  return;
}



/* Entry: 1030609d8; end: 103060a5f;  */

undefined8 FUN_1030609d8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103060a60; end: 103060aa3;  */

void FUN_103060a60(void)

{
  return;
}



/* Entry: 103060aa4; end: 103060b1b;  */

void FUN_103060aa4(undefined8 *param_1,undefined1 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = &UNK_10db7f7e0;
  func_0x000107c614e0();
  *param_1 = puVar1;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((long)param_1 + 9) = param_2;
  lVar2 = 0;
  FUN_103060b1c(0,param_5,param_6);
  (*param_3)((long)param_1 + (long)*(int *)(lVar2 + 0x28));
  return;
}



/* Entry: 103060b1c; end: 103060b27;  */

void FUN_103060b1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e741ee0);
  return;
}



/* Entry: 103060b28; end: 1030611cf;  */

void FUN_103060b28(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long extraout_x8;
  undefined8 *puVar13;
  long extraout_x8_00;
  long lVar14;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x12;
  code *pcVar15;
  long *unaff_x20;
  code *pcVar16;
  long lVar17;
  long lVar18;
  undefined1 auVar19 [16];
  undefined8 uVar20;
  undefined8 uStack_240;
  undefined1 auStack_238 [8];
  undefined8 uStack_230;
  undefined1 auStack_228 [8];
  long alStack_220 [4];
  long alStack_200 [4];
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_118;
  char cStack_e0;
  
  lVar5 = 0;
  uStack_190 = param_1;
  func_0x000107c5f37c();
  lStack_198 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  puVar13 = (undefined8 *)((long)alStack_200 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar5 = 0;
  puStack_1a0 = puVar13;
  func_0x000107c5f6c4();
  alStack_200[0] = *(long *)(lVar5 + -8);
  alStack_200[2] = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_200[0] + 0x40));
  lVar14 = (long)puVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  lVar5 = 0;
  alStack_200[1] = lVar14;
  func_0x000107c5f760(0,uVar1,uVar2);
  alStack_200[3] = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(alStack_200[3] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar14 - extraout_x8_01;
  lVar6 = 0;
  func_0x000107c5f34c(0,lVar5,PTR___s7SwiftUI14_PaddingLayoutVN_110348a08);
  lStack_1e0 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_1e0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = lVar14 - extraout_x8_02;
  lVar7 = 0;
  func_0x000107c5f34c(0,lVar6,PTR___s7SwiftUI16_FlexFrameLayoutVN_110348bd8);
  lStack_1d0 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_1d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = lVar18 - extraout_x8_03;
  uVar20 = 0x112e02c78;
  func_0x00010002969c(0x112e02c78,&UNK_10d9d5190);
  lVar8 = 0;
  func_0x000107c5f34c(0,lVar7,uVar20);
  lStack_1b8 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_1b8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar20 = 0x112d500a8;
  lStack_1c8 = lVar17 - extraout_x8_04;
  func_0x00010002969c(0x112d500a8,&UNK_10d916460);
  lVar9 = 0;
  lStack_1d8 = lVar8;
  func_0x000107c5f34c(0,lVar8,uVar20);
  lStack_1a8 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_1a8 + 0x40));
  lVar8 = (lVar17 - extraout_x8_04) - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  lStack_1c0 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar8 - extraout_x12;
  lStack_1b0 = lVar8;
  func_0x000107c5f43c();
  uStack_130 = uVar1;
  uStack_128 = uVar2;
  func_0x000107c5f75c(lVar14);
  uVar20 = *(undefined8 *)(&UNK_10db7f8a8 + (ulong)*(byte *)((long)unaff_x20 + 9) * 8);
  puVar10 = PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_1103498f0;
  func_0x000107c61520(PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_1103498f0,lVar5);
  func_0x000107c5f69c(lVar18,uVar20,lVar5,puVar10);
  (**(code **)(alStack_200[3] + 8))();
  func_0x000107c5f7b0();
  puStack_148 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_1103489f8;
  puVar11 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  puStack_150 = puVar10;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,lVar6,&puStack_150);
  *(long *)(lVar8 + -0x10) = lVar6;
  *(undefined **)(lVar8 + -8) = puVar11;
  *(long *)(lVar8 + -0x20) = lVar14;
  *(long *)(lVar8 + -0x18) = lVar5;
  *(undefined1 *)(lVar8 + -0x28) = 1;
  *(undefined8 *)(lVar8 + -0x30) = 0;
  *(undefined1 *)(lVar8 + -0x38) = 1;
  *(undefined8 *)(lVar8 + -0x40) = 0;
  func_0x000107c5f684(lVar17,0,1,0,1,0x7ff0000000000000,0,0,1);
  (**(code **)(lStack_1e0 + 8))(lVar18,lVar6);
  lVar6 = *unaff_x20;
  FUN_10305fc34(lVar6,(char)unaff_x20[1]);
  FUN_10307e424(auStack_140);
  uVar20 = uStack_128;
  lVar5 = alStack_200[1];
  if (cStack_e0 == '\x01') {
    func_0x000103080adc();
    FUN_103080684();
    lVar5 = lVar6;
  }
  else {
    (**(code **)(alStack_200[0] + 0x68))
              (alStack_200[1],
               *(undefined4 *)PTR___s7SwiftUI5ColorV13RGBColorSpaceO4sRGByA2EmFWC_1103496a8,
               alStack_200[2]);
    func_0x000107c5f6d8(uVar20,unaff_x20,uStack_118,0x3ff0000000000000);
  }
  lVar8 = lVar5;
  lStack_158 = lVar5;
  func_0x000107c5f56c();
  puVar10 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  puStack_160 = PTR___s7SwiftUI16_FlexFrameLayoutVAA12ViewModifierAAWP_110348bc8;
  puVar12 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  puStack_168 = puVar11;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,lVar7,&puStack_168);
  puVar11 = puVar12;
  FUN_103061290();
  lVar6 = lStack_1c8;
  func_0x000107c5f5f4(lStack_1c8,&lStack_158,lVar8,lVar7,PTR___s7SwiftUI5ColorVN_1103496f0,puVar12,
                      puVar11);
  func_0x000107c61574(lVar5);
  (**(code **)(lStack_1d0 + 8))(lVar17,lVar7);
  lVar8 = lStack_198;
  iVar4 = *(int *)(lStack_198 + 0x14);
  uVar3 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_110348d50;
  lVar5 = 0;
  func_0x000107c5f41c();
  puVar13 = puStack_1a0;
  (**(code **)(*(long *)(lVar5 + -8) + 0x68))((long)puStack_1a0 + (long)iVar4,uVar3,lVar5);
  auVar19 = NEON_fmov(0x4028000000000000,8);
  puVar13[1] = auVar19._8_8_;
  *puVar13 = auVar19._0_8_;
  uVar20 = 0x112e02c70;
  FUN_103061314(0x112e02c70,0x112e02c78,&UNK_10d9d5190,
                PTR___s7SwiftUI24_BackgroundStyleModifierVyxGAA04ViewE0AAMc_110349100);
  lVar5 = lStack_1d8;
  puVar11 = puVar10;
  puStack_178 = puVar12;
  uStack_170 = uVar20;
  func_0x000107c61520(puVar10,lStack_1d8,&puStack_178);
  puVar12 = puVar11;
  func_0x0001030612d0();
  lVar7 = lStack_1c0;
  func_0x000107c5f6b8(lStack_1c0,puVar13,0x100,lVar5,lVar8,puVar11,puVar12);
  func_0x000100f8d598(puVar13);
  (**(code **)(lStack_1b8 + 8))(lVar6,lVar5);
  uVar20 = 0x112e09040;
  FUN_103061314(0x112e09040,0x112d500a8,&UNK_10d916460,
                PTR___s7SwiftUI11_ClipEffectVyxGAA12ViewModifierAAMc_1103487e8);
  puStack_188 = puVar11;
  uStack_180 = uVar20;
  func_0x000107c61520(puVar10,lVar9,&puStack_188);
  lVar6 = lStack_1a8;
  lVar5 = lStack_1b0;
  pcVar15 = *(code **)(lStack_1a8 + 0x10);
  (*pcVar15)(lStack_1b0,lVar7,lVar9);
  pcVar16 = *(code **)(lVar6 + 8);
  (*pcVar16)(lVar7,lVar9);
  (*pcVar15)(uStack_190,lVar5,lVar9);
  (*pcVar16)(lVar5,lVar9);
  return;
}



/* Entry: 1030611d0; end: 103061273;  */

void FUN_1030611d0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  code *pcVar4;
  
  lVar3 = *(long *)(param_3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  FUN_103060b1c();
  pcVar4 = *(code **)(lVar3 + 0x10);
  (*pcVar4)(puVar2,param_2 + *(int *)(lVar1 + 0x28),param_3);
  (*pcVar4)(param_1,puVar2,param_3);
  (**(code **)(lVar3 + 8))(puVar2,param_3);
  return;
}



/* Entry: 103061274; end: 10306128f;  */

void FUN_103061274(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  code *pcVar6;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(undefined8 *)(lVar5 + 0x40),lVar3,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  puVar4 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  FUN_103060b1c();
  pcVar6 = *(code **)(lVar5 + 0x10);
  (*pcVar6)(puVar4,lVar3 + *(int *)(lVar2 + 0x28),lVar1);
  (*pcVar6)(param_1,puVar4,lVar1);
  (**(code **)(lVar5 + 8))(puVar4,lVar1);
  return;
}


