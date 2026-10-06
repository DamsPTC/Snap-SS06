/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107409bec; end: 107409bff;  */

void FUN_107409bec(void)

{
  func_0x000107409c0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107409c00; end: 107409c17;  */

undefined8 * FUN_107409c00(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xab0);
  FUN_1073c4394(param_1 + 0xaa0);
  func_0x0001073e7720(param_1 + 0xa80);
  FUN_107408828(param_1 + 0xa68);
  FUN_107408828(param_1 + 0xa60);
  func_0x0001074088e8(param_1 + 0xa58);
  func_0x0001074088e8(param_1 + 0xa50);
  func_0x00010745c128(param_1 + 0x740);
  func_0x00010745c128(param_1 + 0x430);
  FUN_10745d434(param_1 + 0x428);
  func_0x00010745c128(param_1 + 0x118);
  func_0x00010745d4f0(param_1 + 0x100);
  FUN_10745d434(param_1 + 0xf8);
  func_0x00010745d460(param_1 + 0xe0);
  FUN_1073e7820(param_1 + 200);
  func_0x000107261dac(param_1 + 0xa8);
  FUN_1073e7858(param_1 + 0x90);
  func_0x000104c2f714(param_1 + 0x50);
  func_0x0001073e76f8(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x18) = &PTR_DAT_1109ace68;
  func_0x0001073b4ef8(param_1 + 0x20);
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 107409c18; end: 107409c9f;  */

long FUN_107409c18(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107409ca0; end: 107409cab;  */

void FUN_107409ca0(void)

{
  func_0x00010740a430();
  func_0x00010740a43c();
  func_0x00010740aa68();
  func_0x00010740a2a8();
  return;
}



/* Entry: 107409cac; end: 107409d37;  */

void FUN_107409cac(void)

{
  func_0x00010740a43c();
  func_0x00010740aa68();
  func_0x00010740a2a8();
  return;
}



/* Entry: 107409d38; end: 107409d77;  */

long * FUN_107409d38(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x18;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107409d78; end: 107409dc7;  */

void FUN_107409d78(undefined8 param_1,ulong param_2)

{
  long extraout_x9;
  undefined1 auStack_48 [40];
  
  func_0x00010740b0a4();
  if ((ulong)(extraout_x9 >> 4) < param_2) {
    func_0x00010740ae38();
    FUN_107409df8(auStack_48);
    func_0x00010740a820();
    FUN_107409dd4();
    FUN_107409e74(auStack_48);
  }
  return;
}



/* Entry: 107409dc8; end: 107409dd3;  */

void FUN_107409dc8(void)

{
  func_0x00010740a430();
  func_0x00010740a43c();
  func_0x00010740a968();
  func_0x00010740a2a8();
  return;
}



/* Entry: 107409dd4; end: 107409df7;  */

void FUN_107409dd4(void)

{
  func_0x00010740a43c();
  func_0x00010740a968();
  func_0x00010740a2a8();
  return;
}



/* Entry: 107409df8; end: 107409e57;  */

void FUN_107409df8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x00010740a7b4();
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107409e38();
  }
  lVar1 = param_4 + unaff_x20 * 0x10;
  *unaff_x19 = param_4;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = param_4 + param_2 * 0x10;
  return;
}



/* Entry: 107409e58; end: 107409e73;  */

long * FUN_107409e58(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_2 << 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_107409ea0();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107409e74; end: 107409e9f;  */

long * FUN_107409e74(long *param_1)

{
  FUN_107409ea0();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107409ea0; end: 107409ec3;  */

void FUN_107409ea0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x10;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 107409ec4; end: 107409f13;  */

void FUN_107409ec4(undefined8 param_1,ulong param_2)

{
  long extraout_x9;
  undefined1 auStack_48 [40];
  
  func_0x00010740b0a4();
  if ((ulong)(extraout_x9 >> 2) < param_2) {
    func_0x00010740ae38();
    FUN_107409f44(auStack_48);
    func_0x00010740a820();
    FUN_107409f20();
    FUN_107409fc0(auStack_48);
  }
  return;
}



/* Entry: 107409f14; end: 107409f1f;  */

void FUN_107409f14(void)

{
  func_0x00010740a430();
  func_0x00010740a43c();
  func_0x00010740a968();
  func_0x00010740a2a8();
  return;
}



/* Entry: 107409f20; end: 107409f43;  */

void FUN_107409f20(void)

{
  func_0x00010740a43c();
  func_0x00010740a968();
  func_0x00010740a2a8();
  return;
}



/* Entry: 107409f44; end: 107409fa3;  */

void FUN_107409f44(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x00010740a7b4();
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107409f84();
  }
  lVar1 = param_4 + unaff_x20 * 4;
  *unaff_x19 = param_4;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = param_4 + param_2 * 4;
  return;
}



/* Entry: 107409fa4; end: 107409fbf;  */

long * FUN_107409fa4(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3e == 0) {
    plVar1 = (long *)(param_2 << 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_107409fec();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107409fc0; end: 107409feb;  */

long * FUN_107409fc0(long *param_1)

{
  FUN_107409fec();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107409fec; end: 10740a00f;  */

void FUN_107409fec(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -4;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10740a010; end: 10740a10b;  */

long * FUN_10740a010(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  long *plVar3;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 extraout_x10;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  long alStack_48 [2];
  undefined8 *puStack_38;
  
  func_0x00010740a658();
  puVar5 = (undefined8 *)param_1[1];
  if (puVar5 < (undefined8 *)param_1[2]) {
    uVar6 = unaff_x20[1];
    uVar4 = *unaff_x20;
    puVar5[2] = unaff_x20[2];
    puVar5[1] = uVar6;
    *puVar5 = uVar4;
    puVar5 = puVar5 + 3;
  }
  else {
    uVar1 = ((long)puVar5 - *unaff_x19) / 0x18 + 1;
    uVar2 = 0xaaaaaaaaaaaaaa9 < uVar1;
    if (0xaaaaaaaaaaaaaaa < uVar1) {
      FUN_107409ca0();
      func_0x00010740ae48();
      if ((bool)uVar2) {
        plVar3 = unaff_x19;
        FUN_10740a10c();
      }
      else {
        uVar4 = *param_2;
        extraout_x8_00[1] = param_2[1];
        *extraout_x8_00 = uVar4;
        plVar3 = extraout_x8_00 + 2;
      }
      unaff_x19[1] = (long)plVar3;
      return plVar3 + -2;
    }
    func_0x00010740a988();
    func_0x00010740ae68();
    uVar4 = extraout_x10;
    if ((bool)uVar2) {
      uVar4 = extraout_x8;
    }
    func_0x000107409cdc(alStack_48,uVar4);
    uVar4 = unaff_x20[2];
    uVar6 = *unaff_x20;
    puStack_38[1] = unaff_x20[1];
    *puStack_38 = uVar6;
    puStack_38[2] = uVar4;
    puStack_38 = puStack_38 + 3;
    func_0x00010740a820();
    func_0x000107409cac();
    puVar5 = (undefined8 *)unaff_x19[1];
    param_1 = alStack_48;
    FUN_107409d38(param_1);
  }
  unaff_x19[1] = (long)puVar5;
  return param_1;
}



/* Entry: 10740a10c; end: 10740a18b;  */

undefined8 FUN_10740a10c(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  func_0x00010740a658();
  FUN_10740a18c();
  func_0x00010740a7f4();
  FUN_107409df8(auStack_48);
  uVar1 = *unaff_x20;
  puStack_38[1] = unaff_x20[1];
  *puStack_38 = uVar1;
  puStack_38 = puStack_38 + 2;
  func_0x00010740a820();
  FUN_107409dd4();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  FUN_107409e74(auStack_48);
  return uVar1;
}



/* Entry: 10740a18c; end: 10740a1cb;  */

long * FUN_10740a18c(long *param_1,long *param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long alStack_68 [2];
  undefined4 *puStack_58;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 3);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0xfffffffffffffff;
    }
    return plVar1;
  }
  FUN_107409dc8();
  puVar2 = (undefined4 *)param_1[1];
  if (puVar2 < (undefined4 *)param_1[2]) {
    puVar3 = puVar2 + 1;
    *puVar2 = (int)param_2;
    plVar1 = param_1;
  }
  else {
    FUN_10740a268(param_1,((long)puVar2 - *param_1 >> 2) + 1);
    func_0x00010740a7f4();
    FUN_107409f44(alStack_68);
    *puStack_58 = (int)param_2;
    puStack_58 = puStack_58 + 1;
    func_0x00010740a820();
    FUN_107409f20();
    puVar3 = (undefined4 *)param_1[1];
    plVar1 = alStack_68;
    FUN_107409fc0(plVar1);
  }
  param_1[1] = (long)puVar3;
  return plVar1;
}



/* Entry: 10740a1cc; end: 10740a267;  */

void FUN_10740a1cc(long *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [16];
  undefined4 *puStack_48;
  
  puVar1 = (undefined4 *)param_1[1];
  if (puVar1 < (undefined4 *)param_1[2]) {
    puVar2 = puVar1 + 1;
    *puVar1 = param_2;
  }
  else {
    FUN_10740a268(param_1,((long)puVar1 - *param_1 >> 2) + 1);
    func_0x00010740a7f4();
    FUN_107409f44(auStack_58);
    *puStack_48 = param_2;
    puStack_48 = puStack_48 + 1;
    func_0x00010740a820();
    FUN_107409f20();
    puVar2 = (undefined4 *)param_1[1];
    FUN_107409fc0(auStack_58);
  }
  param_1[1] = (long)puVar2;
  return;
}



/* Entry: 10740a268; end: 10740a2a7;  */

long * FUN_10740a268(long *param_1,long *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  if ((ulong)param_2 >> 0x3e == 0) {
    plVar2 = (long *)(param_1[2] - *param_1 >> 1);
    if (plVar2 <= param_2) {
      plVar2 = param_2;
    }
    if (0x7ffffffffffffffb < (ulong)(param_1[2] - *param_1)) {
      plVar2 = (long *)0x3fffffffffffffff;
    }
    return plVar2;
  }
  FUN_107409f14();
  unaff_x19[1] = unaff_x21;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return param_1;
}



/* Entry: 10740a2a8; end: 10740b2c3;  */

void FUN_10740a2a8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  unaff_x19[1] = unaff_x21;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 10740b2c4; end: 10740b377;  */

/* WARNING: Removing unreachable block (ram,0x000107876fb0) */

void FUN_10740b2c4(double *param_1,float param_2,undefined8 param_3,double param_4,double param_5,
                  double *param_6,int param_7,ulong param_8,long param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  
  if (param_7 == 0) {
    dVar1 = (double)NEON_ucvtf((ulong)*(uint *)(param_9 + 0x50));
    func_0x00010740cbcc((double)*(uint *)(param_9 + 0x4c) / 2.0,dVar1 * -0.5,0x3ff0000000000000,
                        0x3ff0000000000000);
    dVar22 = *param_1;
    dVar10 = param_1[1];
    dVar2 = param_1[2];
    dVar1 = param_1[3];
    dVar24 = param_1[4];
    dVar21 = param_1[5];
    dVar17 = param_1[6];
    dVar3 = param_1[7];
    dVar26 = param_1[8];
    dVar23 = param_1[9];
    dVar19 = param_1[10];
    dVar5 = param_1[0xb];
    dVar27 = *param_6;
    dVar28 = param_6[1];
    dVar30 = param_6[2];
    dVar7 = param_6[3];
    dVar31 = param_6[4];
    dVar32 = param_6[5];
    dVar11 = param_6[6];
    dVar8 = param_6[7];
    dVar12 = param_6[8];
    dVar14 = param_6[9];
    dVar29 = param_6[10];
    dVar9 = param_6[0xb];
    dVar15 = param_6[0xc];
    dVar16 = param_6[0xd];
    dVar25 = param_6[0xe];
    dVar13 = param_6[0xf];
    dVar4 = param_1[0xc];
    dVar18 = param_1[0xd];
    dVar6 = param_1[0xe];
    dVar20 = param_1[0xf];
    *param_1 = dVar24 * dVar28 + dVar27 * dVar22 + dVar30 * dVar26 + dVar7 * dVar4;
    param_1[1] = dVar21 * dVar28 + dVar27 * dVar10 + dVar30 * dVar23 + dVar7 * dVar18;
    param_1[2] = dVar17 * dVar28 + dVar27 * dVar2 + dVar30 * dVar19 + dVar7 * dVar6;
    param_1[3] = dVar3 * dVar28 + dVar27 * dVar1 + dVar30 * dVar5 + dVar7 * dVar20;
    param_1[4] = dVar24 * dVar32 + dVar31 * dVar22 + dVar11 * dVar26 + dVar8 * dVar4;
    param_1[5] = dVar21 * dVar32 + dVar31 * dVar10 + dVar11 * dVar23 + dVar8 * dVar18;
    param_1[6] = dVar17 * dVar32 + dVar31 * dVar2 + dVar11 * dVar19 + dVar8 * dVar6;
    param_1[7] = dVar3 * dVar32 + dVar31 * dVar1 + dVar11 * dVar5 + dVar8 * dVar20;
    param_1[8] = dVar24 * dVar14 + dVar12 * dVar22 + dVar29 * dVar26 + dVar9 * dVar4;
    param_1[9] = dVar21 * dVar14 + dVar12 * dVar10 + dVar29 * dVar23 + dVar9 * dVar18;
    param_1[10] = dVar17 * dVar14 + dVar12 * dVar2 + dVar29 * dVar19 + dVar9 * dVar6;
    param_1[0xb] = dVar3 * dVar14 + dVar12 * dVar1 + dVar29 * dVar5 + dVar9 * dVar20;
    param_1[0xc] = dVar24 * dVar16 + dVar15 * dVar22 + dVar25 * dVar26 + dVar13 * dVar4;
    param_1[0xd] = dVar21 * dVar16 + dVar15 * dVar10 + dVar25 * dVar23 + dVar13 * dVar18;
    param_1[0xe] = dVar17 * dVar16 + dVar15 * dVar2 + dVar25 * dVar19 + dVar13 * dVar6;
    param_1[0xf] = dVar3 * dVar16 + dVar15 * dVar1 + dVar25 * dVar5 + dVar13 * dVar20;
    return;
  }
  *param_1 = 1.0 / (double)param_2;
  param_1[2] = 0.0;
  param_1[1] = 0.0;
  param_1[4] = 0.0;
  param_1[3] = 0.0;
  param_1[5] = 1.0 / (double)param_2;
  param_1[7] = 0.0;
  param_1[6] = 0.0;
  param_1[9] = 0.0;
  param_1[8] = 0.0;
  param_1[10] = 1.0;
  param_1[0xc] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xf] = 1.0;
  if ((param_8 & 1) == 0) {
    dVar1 = *(double *)(param_9 + 0x70);
    ___sincos_stret();
    func_0x000107877588();
    *param_1 = param_4;
    param_1[1] = param_5;
    func_0x000107877574();
    param_1[2] = param_4;
    param_1[3] = param_5;
    func_0x000107877560();
    param_1[4] = param_4;
    param_1[5] = param_5;
    func_0x00010787754c();
    param_1[6] = param_4;
    param_1[7] = dVar1;
    return;
  }
  return;
}



/* Entry: 10740b378; end: 10740b447;  */

/* WARNING: Possible PIC construction at 0x00010740b3c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010740b3c4) */
/* WARNING: Removing unreachable block (ram,0x00010740b424) */
/* WARNING: Removing unreachable block (ram,0x000107876f78) */
/* WARNING: Removing unreachable block (ram,0x000107876fb0) */
/* WARNING: Removing unreachable block (ram,0x000107876fd4) */
/* WARNING: Removing unreachable block (ram,0x000107877504) */
/* WARNING: Removing unreachable block (ram,0x00010740b3c8) */

void FUN_10740b378(double *param_1,float param_2,undefined8 param_3,int param_4,undefined8 param_5,
                  long param_6)

{
  double dVar1;
  double dVar2;
  
  if (param_4 == 0) {
    func_0x00010740cbcc(0x3ff0000000000000,0xbff0000000000000,0x3ff0000000000000,0xbff0000000000000)
    ;
    dVar1 = (double)NEON_ucvtf((ulong)*(uint *)(param_6 + 0x4c));
    dVar1 = 2.0 / dVar1;
    dVar2 = (double)NEON_ucvtf((ulong)*(uint *)(param_6 + 0x50));
    dVar2 = 2.0 / dVar2;
  }
  else {
    func_0x00010740cb44(param_1,param_3);
    dVar1 = (double)param_2;
    dVar2 = dVar1;
  }
  param_1[1] = param_1[1] * dVar1;
  *param_1 = *param_1 * dVar1;
  param_1[3] = param_1[3] * dVar1;
  param_1[2] = param_1[2] * dVar1;
  param_1[5] = param_1[5] * dVar2;
  param_1[4] = param_1[4] * dVar2;
  param_1[7] = param_1[7] * dVar2;
  param_1[6] = param_1[6] * dVar2;
  param_1[9] = param_1[9] * 1.0;
  param_1[8] = param_1[8] * 1.0;
  param_1[0xb] = param_1[0xb] * 1.0;
  param_1[10] = param_1[10] * 1.0;
  return;
}



/* Entry: 10740b448; end: 10740b5f7;  */

void FUN_10740b448(long param_1,undefined8 param_2,undefined8 param_3,float param_4,float param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
                  long param_10)

{
  long lVar1;
  undefined1 *puVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  undefined1 auStack_d0 [128];
  
  puVar2 = auStack_d0;
  dVar4 = *(double *)(param_9 + 0x78);
  _log2(dVar4);
  fVar5 = (float)NEON_ucvtf((uint)*(byte *)(param_10 + 4));
  dVar4 = (double)((float)dVar4 - fVar5);
  _exp2(dVar4);
  fVar5 = 0.0;
  func_0x00010740cb44(param_1,param_6);
  func_0x00010740cbbc(param_1 + 0x80,param_6,param_7);
  FUN_10740b378(auStack_d0,(float)(8192.0 / (dVar4 * 512.0)),param_6,param_7,param_8,param_9);
  _bzero(param_1 + 0x180,0x1a8);
  func_0x00010740cb44(param_1 + 0x100,auStack_d0);
  if ((*(byte *)(param_9 + 0xa94) & 1) == 0) {
    *(undefined4 *)(param_1 + 0x304) = 0;
  }
  else {
    fVar3 = *(float *)(param_9 + 0xa90);
    *(float *)(param_1 + 0x304) = fVar3;
    if (0.0 < fVar3) {
      *(char *)(param_1 + 0x300) = (char)param_7;
      *(undefined8 *)(param_1 + 0x280) = 0x3ff0000000000000;
      fVar3 = 0.0;
      *(undefined8 *)(param_1 + 0x290) = 0;
      *(undefined8 *)(param_1 + 0x288) = 0;
      *(undefined8 *)(param_1 + 0x2a0) = 0;
      *(undefined8 *)(param_1 + 0x298) = 0;
      *(undefined8 *)(param_1 + 0x2a8) = 0x3ff0000000000000;
      *(undefined8 *)(param_1 + 0x2b8) = 0;
      *(undefined8 *)(param_1 + 0x2b0) = 0;
      *(undefined8 *)(param_1 + 0x2c8) = 0;
      *(undefined8 *)(param_1 + 0x2c0) = 0;
      *(undefined8 *)(param_1 + 0x2d0) = 0x3ff0000000000000;
      *(undefined8 *)(param_1 + 0x2e0) = 0;
      *(undefined8 *)(param_1 + 0x2d8) = 0;
      *(undefined8 *)(param_1 + 0x2f0) = 0;
      *(undefined8 *)(param_1 + 0x2e8) = 0;
      *(undefined8 *)(param_1 + 0x2f8) = 0x3ff0000000000000;
      if ((int)param_7 == 0) {
        FUN_107416bf8(param_9);
        func_0x00010740cb44(param_1 + 0x180,param_9 + 0xaa0);
        func_0x00010740cbbc(auStack_d0,param_1 + 0x180,0);
        lVar1 = param_1 + 0x200;
      }
      else {
        func_0x0001078769cc(param_1 + 0x280,param_1 + 0x80);
        FUN_107416bf8(param_9);
        lVar1 = param_1 + 0x180;
        puVar2 = (undefined1 *)(param_9 + 0xaa0);
      }
      func_0x00010740cb44(lVar1,puVar2);
      func_0x000107415f50(param_9,param_10,0x2000);
      *(double *)(param_1 + 0x308) = (double)fVar3;
      *(double *)(param_1 + 0x310) = (double)fVar5;
      *(double *)(param_1 + 0x318) = (double)param_4;
      *(double *)(param_1 + 800) = (double)param_5;
    }
  }
  return;
}



/* Entry: 10740b5f8; end: 10740b67b;  */

void FUN_10740b5f8(long param_1,undefined8 param_2,long param_3)

{
  float fVar1;
  
  _bzero(param_1 + 0x80,0x2a8);
  func_0x00010740cb44(param_1,param_2);
  if ((*(char *)(param_3 + 0xa94) == '\x01') &&
     (fVar1 = *(float *)(param_3 + 0xa90), *(float *)(param_1 + 0x304) = fVar1, fVar1 != 0.0)) {
    FUN_107416bf8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(param_1 + 0x180,param_3 + 0xaa0,0x80);
    return;
  }
  return;
}



/* Entry: 10740b67c; end: 10740b84f;  */

void FUN_10740b67c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,int param_6,long param_7)

{
  undefined1 *puVar1;
  ulong *puVar2;
  int extraout_w8;
  ulong extraout_x8;
  float fVar3;
  ulong uVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulong uStack_110;
  double dStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  double in_stack_ffffffffffffff40;
  
  uVar9 = (undefined4)((ulong)param_4 >> 0x20);
  uVar8 = (undefined4)param_4;
  uVar7 = (undefined4)((ulong)param_3 >> 0x20);
  uVar6 = (undefined4)param_3;
  puVar2 = &uStack_110;
  if (*(float *)(param_7 + 0x304) != 0.0) {
    if (param_6 == 2) {
      func_0x00010740cc58();
      FUN_10740b850(param_7 + 0x100);
      func_0x00010740cbdc();
      if (extraout_w8 != 1) {
        return;
      }
      dVar5 = (double)(float)*param_5;
      func_0x000107877358(&stack0xffffffffffffff30,&stack0xffffffffffffff10,param_7 + 0x280);
      uVar4 = (ulong)(uint)(float)in_stack_ffffffffffffff40;
      FUN_10741848c(&stack0xffffffffffffff10,param_7 + 0x308);
      func_0x00010740b8a8(param_7 + 0x180);
      uStack_100 = CONCAT44(uVar7,uVar6);
      uStack_f8 = CONCAT44(uVar9,uVar8);
      fVar3 = *(float *)(param_7 + 0x304);
      puVar1 = &stack0xffffffffffffff10;
      uStack_110 = uVar4;
      dStack_108 = dVar5;
    }
    else {
      if (param_6 == 1) {
        func_0x00010740cc58();
        FUN_10740b850(param_7 + 0x80);
        func_0x00010740cbdc();
        if ((extraout_x8 & 1) != 0) {
          return;
        }
        func_0x00010740cb4c();
        func_0x00010740b8a8(param_7 + 0x200);
      }
      else {
        if (param_6 != 0) {
          return;
        }
        func_0x00010740cc58();
        FUN_10740b850(param_7);
        func_0x00010740cb4c();
        func_0x00010740b8a8(param_7 + 0x180);
      }
      fVar3 = *(float *)(param_7 + 0x304);
      puVar1 = &stack0xffffffffffffff30;
      puVar2 = (ulong *)&stack0xffffffffffffff10;
    }
    func_0x00010740b8e0((double)fVar3,puVar1,puVar2);
    return;
  }
  if (param_6 != 0) {
    if (param_6 == 2) {
      param_7 = param_7 + 0x100;
    }
    else {
      if (param_6 != 1) goto LAB_10740b730;
      param_7 = param_7 + 0x80;
    }
  }
  func_0x00010740cb44(&stack0xffffffffffffff30,param_7);
LAB_10740b730:
  func_0x00010740cc58();
  FUN_10740b850(&stack0xffffffffffffff30);
  return;
}



/* Entry: 10740b850; end: 10740b903;  */

float FUN_10740b850(float param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  func_0x00010740cba8(param_2,param_3,param_2);
  return (float)((double)param_1 / uStack_18);
}



/* Entry: 10740b904; end: 10740b937;  */

float FUN_10740b904(byte *param_1,long param_2)

{
  float fVar1;
  
  if (param_1[1] == 1) {
    return *(float *)(param_1 + 8);
  }
  fVar1 = *(float *)(param_2 + 0x18);
  if ((*param_1 & 1) == 0) {
    fVar1 = fVar1 + (*(float *)(param_2 + 0x1c) - fVar1) * *(float *)(param_1 + 4);
  }
  return fVar1;
}



/* Entry: 10740b938; end: 10740b9bb;  */

void FUN_10740b938(void)

{
  func_0x0001073db054();
  func_0x00010740cb10();
  func_0x00010740cb10();
  func_0x00010740cb10();
  func_0x00010740cb10();
  return;
}



/* Entry: 10740b9bc; end: 10740ba87;  */

void FUN_10740b9bc(float param_1,float param_2,float param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  float fVar1;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined8 uStack_68;
  float fStack_60;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  
  fVar1 = param_1;
  FUN_107409bac();
  fStack_74 = fVar1;
  fStack_70 = param_2;
  fStack_6c = param_3;
  FUN_1073b5d38(&fStack_74);
  uStack_68 = CONCAT44(param_2,fVar1);
  fStack_60 = param_3;
  FUN_10740ba88(param_4,&uStack_68);
  fStack_58 = fVar1;
  fStack_54 = param_2;
  fStack_50 = param_3;
  func_0x00010740cb8c(&fStack_58,param_7);
  fStack_4c = fVar1;
  fStack_48 = param_2;
  fStack_44 = param_3;
  FUN_107409bac(param_6,&fStack_4c);
  fStack_58 = fVar1;
  fStack_54 = param_2;
  fStack_50 = param_3;
  FUN_107409bcc(&fStack_58);
  param_1 = param_1 / fVar1;
  fStack_60 = param_1 * fStack_50;
  uStack_68 = CONCAT44(fStack_54 * param_1,fStack_58 * param_1);
  FUN_10740ba88(param_6,&uStack_68);
  return;
}



/* Entry: 10740ba88; end: 10740baa7;  */

float FUN_10740ba88(float *param_1,float *param_2)

{
  return *param_1 + *param_2;
}



/* Entry: 10740baa8; end: 10740bdbf;  */

void FUN_10740baa8(undefined8 *param_1,float param_2,float param_3,float param_4,uint param_5,
                  undefined8 *param_6,undefined8 *param_7,int param_8,long *param_9,long *param_10,
                  undefined8 param_11,int param_12)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ulong uVar18;
  float fVar19;
  ulong uVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  undefined8 uStack_e8;
  float fStack_e0;
  undefined8 uStack_d8;
  float fStack_d0;
  undefined8 uStack_c8;
  float fStack_c0;
  undefined8 uStack_b8;
  float fStack_b0;
  
  fVar15 = -param_3;
  if (param_5 == 0) {
    fVar15 = param_3;
  }
  param_2 = param_2 + fVar15;
  uVar6 = (ulong)(uint)param_2;
  uVar22 = *(undefined4 *)(param_7 + 1);
  fVar15 = 3.1415927;
  fVar9 = 0.0;
  if (param_5 == 0) {
    fVar15 = 0.0;
  }
  uVar18 = (ulong)(uint)fVar15;
  param_5 = param_5 ^ 0.0 < param_2;
  bVar5 = param_5 == 0;
  iVar3 = -1;
  if (!bVar5) {
    iVar3 = 1;
  }
  uVar20 = (ulong)(uint)(fVar15 + 3.1415927);
  if (bVar5) {
    fVar15 = fVar15 + 3.1415927;
  }
  uVar1 = (param_5 ^ 1) + param_8;
  uStack_c8 = *param_6;
  fStack_c0 = *(float *)(param_6 + 1);
  uStack_d8 = *param_6;
  fStack_d0 = *(float *)(param_6 + 1);
  lVar4 = -1;
  if (!bVar5) {
    lVar4 = 1;
  }
  uVar7 = (ulong)uVar1;
  iVar8 = iVar3;
  fVar10 = 0.0;
  while( true ) {
    fVar24 = fVar9 + fVar10;
    fVar21 = ABS(param_2) - fVar10;
    if (ABS(param_2) < fVar24) {
      fVar9 = fVar21 / fVar9;
      fStack_e0 = fStack_c0 - fStack_d0;
      fVar23 = fStack_d0 + fVar9 * fStack_e0;
      fVar16 = (float)uStack_d8;
      fVar24 = (float)uStack_c8 - fVar16;
      fVar19 = (float)((ulong)uStack_d8 >> 0x20);
      fVar14 = (float)((ulong)uStack_c8 >> 0x20) - fVar19;
      uStack_e8 = CONCAT44(fVar14,fVar24);
      fVar10 = 0.0;
      if (fVar14 == 0.0 && fVar24 == 0.0) {
        fVar10 = 1.0;
      }
      fVar17 = -1.0;
      fStack_b0 = -1.0;
      if (fVar14 == 0.0 && fVar24 == 0.0) {
        fStack_b0 = 0.0;
      }
      uStack_b8 = (ulong)(uint)fVar10 << 0x20;
      fVar13 = fStack_b0;
      func_0x00010740c840(&uStack_e8,&uStack_b8);
      fVar11 = fVar10;
      FUN_107409bcc(&uStack_e8);
      fVar11 = (param_4 * (float)iVar3) / fVar11;
      fVar12 = uStack_c8._4_4_ - uStack_d8._4_4_;
      _atan2f(fVar12,(float)uStack_c8 - (float)uStack_d8);
      if (param_12 == 0) {
        uVar6 = 0;
        uVar22 = 0;
      }
      else {
        if (iVar8 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = (ulong)*(uint *)(*param_10 + (long)(int)(uVar1 - iVar8) * 4);
        }
        uVar6 = uVar6 | (ulong)(uint)fVar21 << 0x20;
        uVar22 = 1;
      }
      *param_1 = CONCAT44(fVar19 + fVar14 * fVar9 + fVar13 * fVar11,
                          fVar16 + fVar24 * fVar9 + fVar10 * fVar11);
      *(float *)(param_1 + 1) = fVar23 + fVar17 * fVar11;
      *(float *)((long)param_1 + 0xc) = fVar15 + fVar12;
      param_1[2] = uVar6;
      *(undefined4 *)(param_1 + 3) = uVar22;
      *(undefined1 *)((long)param_1 + 0x1c) = 1;
      return;
    }
    uVar2 = uVar7 + lVar4;
    if (((long)uVar2 < 0) || ((long)(int)((ulong)(param_9[1] - *param_9) >> 2) <= (long)uVar2))
    break;
    uStack_d8 = uStack_c8;
    fStack_d0 = fStack_c0;
    func_0x00010740cc0c();
    func_0x00010740cafc();
    uStack_b8 = CONCAT44((int)uVar6,fVar9);
    fStack_b0 = (float)uVar22;
    FUN_10740b67c(&uStack_b8,1,param_11);
    if ((float)uVar20 <= 0.0) {
      if (fVar10 == 0.0) {
        uStack_b8 = *param_7;
        fStack_b0 = (float)*(undefined4 *)(param_7 + 1);
      }
      else {
        FUN_1073f0fe0(param_9,uVar7);
        func_0x00010740cafc();
        uStack_b8 = CONCAT44((int)uVar6,fVar9);
        fStack_b0 = (float)uVar22;
      }
      func_0x00010740cc0c();
      func_0x00010740cafc();
      uStack_e8 = CONCAT44((int)uVar6,fVar9);
      fVar9 = fVar21 + 1.0;
      fStack_e0 = (float)uVar22;
      FUN_10740b9bc(&uStack_b8,&uStack_e8,&uStack_d8,1,param_11);
    }
    uStack_c8 = CONCAT44((int)uVar6,fVar9);
    fStack_c0 = (float)uVar18;
    FUN_107409b78(&uStack_d8,&uStack_c8);
    iVar8 = iVar8 - iVar3;
    uVar7 = uVar2;
    fVar10 = fVar24;
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  return;
}



/* Entry: 10740bdc0; end: 10740bf07;  */

void FUN_10740bdc0(undefined8 *param_1,float param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  bool bVar1;
  float fVar2;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  byte bStack_94;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined4 uStack_78;
  byte bStack_74;
  
  if (*(float **)(param_8 + 0x60) != *(float **)(param_8 + 0x68)) {
    fVar2 = (*(float **)(param_8 + 0x68))[-1];
    func_0x00010740cc2c(&uStack_90,param_2 * **(float **)(param_8 + 0x60));
    if ((bStack_74 & 1) != 0) {
      func_0x00010740cc2c(&uStack_b0,param_2 * fVar2,param_3,param_4,param_5,param_6,param_7,
                          *(undefined2 *)(param_8 + 0x10),param_8 + 0x30,param_8 + 0x48);
      bVar1 = (bStack_94 & 1) == 0;
      if (bVar1) {
        *(undefined1 *)param_1 = 0;
      }
      else {
        param_1[2] = uStack_80;
        *(undefined4 *)(param_1 + 3) = uStack_78;
        *(undefined8 *)((long)param_1 + 0x2c) = uStack_a0;
        *(undefined4 *)((long)param_1 + 0x34) = uStack_98;
        *param_1 = uStack_90;
        *(undefined4 *)(param_1 + 1) = uStack_88;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_84;
        *(undefined8 *)((long)param_1 + 0x1c) = uStack_b0;
        *(undefined4 *)((long)param_1 + 0x24) = uStack_a8;
        *(undefined4 *)(param_1 + 5) = uStack_a4;
      }
      *(bool *)(param_1 + 7) = !bVar1;
      return;
    }
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  return;
}



/* Entry: 10740bf08; end: 10740bf5f;  */

ulong FUN_10740bf08(float param_1,float param_2,float param_3,float param_4,float param_5,
                   int param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  
  if (param_6 == 2) {
    if (param_4 <= param_2) {
LAB_10740bf44:
      uVar4 = 0;
      uVar5 = 0;
      goto LAB_10740bf58;
    }
  }
  else {
    fVar6 = ABS(param_4 - param_2);
    param_5 = param_5 * ABS(param_3 - param_1);
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (param_6 == 3) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar6) && !NAN(param_5)) {
        bVar1 = fVar6 < param_5;
        bVar2 = fVar6 == param_5;
        bVar3 = false;
      }
    }
    if (!bVar2 && bVar1 == bVar3) {
      uVar4 = 0x100000000;
      uVar5 = 3;
      goto LAB_10740bf58;
    }
    if (param_1 <= param_3) goto LAB_10740bf44;
  }
  uVar4 = 0x100000000;
  uVar5 = 2;
LAB_10740bf58:
  return uVar5 | uVar4;
}



/* Entry: 10740bf60; end: 10740c33f;  */

ulong FUN_10740bf60(float param_1,ulong param_2,undefined4 param_3,float param_4,long param_5,
                   ulong param_6,int param_7,undefined8 param_8,undefined8 param_9,
                   undefined8 param_10)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 **ppuVar4;
  ulong extraout_x8;
  float *pfVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined1 auStack_148 [28];
  char cStack_12c;
  uint uStack_128;
  uint uStack_124;
  undefined4 uStack_120;
  byte abStack_10c [28];
  byte bStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined8 *puStack_c0;
  
  fVar13 = *(float *)(param_5 + 0x20);
  fVar14 = *(float *)(param_5 + 0x24);
  uVar15 = *(undefined4 *)(param_5 + 8);
  puStack_e8 = (undefined8 *)0x0;
  puStack_e0 = (undefined8 *)0x0;
  puStack_d8 = (undefined8 *)0x0;
  pfVar5 = *(float **)(param_5 + 0x60);
  lVar6 = *(long *)(param_5 + 0x68);
  lVar7 = lVar6 - (long)pfVar5 >> 2;
  uVar9 = lVar7 + 1;
  uVar11 = param_2;
  if (lVar7 != -1) {
    func_0x00010740cc44();
    if (extraout_x8 <= uVar9) {
      FUN_10740c870();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10740c2fc);
      (*pcVar2)();
    }
    FUN_10740c91c(&uStack_128);
    FUN_10740c884(&puStack_e8,&uStack_128);
    FUN_10740c98c(&uStack_128);
    pfVar5 = *(float **)(param_5 + 0x60);
    lVar6 = *(long *)(param_5 + 0x68);
  }
  uVar10 = 0x41c00000;
  param_1 = param_1 / 24.0;
  uVar9 = (ulong)(uint)param_1;
  uVar12 = (ulong)(uint)(param_1 * fVar13);
  if ((ulong)(lVar6 - (long)pfVar5) < 5) {
    puVar8 = puStack_e8;
    puVar1 = puStack_e0;
    if (lVar6 - (long)pfVar5 == 4) {
      if (((param_6 & 1) == 0) && (param_7 != 0)) {
        func_0x00010740cb8c(param_5,0);
        uStack_128 = (uint)uVar10;
        uStack_124 = (uint)uVar11;
        uVar9 = uVar10;
        uVar12 = uVar11;
        uStack_120 = param_3;
        FUN_1073f0fe0(param_5 + 0x30,*(long *)(param_5 + 0x10) + 1);
        func_0x00010740cafc();
        uStack_d0 = (undefined4)uVar9;
        uStack_cc = (undefined4)uVar12;
        uStack_c8 = uVar15;
        func_0x00010740cb8c(&uStack_d0,0);
        if (param_4 <= 0.0) {
          uVar9 = 0x3f800000;
          FUN_10740b9bc(0x3f800000,param_5,&uStack_d0,&uStack_128,0,param_8);
          uVar10 = (ulong)uStack_128;
          uVar11 = (ulong)uStack_124;
        }
        uVar3 = (ulong)*(byte *)(param_5 + 0x28);
        FUN_10740bf08(uVar10,uVar11,uVar9,uVar12,param_2);
        if (uVar3 >> 0x20 != 0) goto LAB_10740c2b0;
        pfVar5 = *(float **)(param_5 + 0x60);
      }
      func_0x00010740cb1c(&uStack_128,param_1 * *pfVar5);
      if ((abStack_10c[0] & 1) == 0) goto LAB_10740c2ac;
      func_0x00010740cbf4();
      puVar8 = puStack_e8;
      puVar1 = puStack_e0;
    }
  }
  else {
    FUN_10740bdc0(&uStack_128,uVar9,uVar12,param_1 * fVar14,param_6,param_10,param_5,param_5,param_8
                  ,0);
    if ((bStack_f0 & 1) == 0) {
LAB_10740c2ac:
      uVar3 = 1;
      goto LAB_10740c2b0;
    }
    func_0x00010740cb8c(&uStack_128,2);
    uVar11 = uVar9;
    uVar10 = uVar12;
    func_0x00010740cb8c(abStack_10c,2);
    if (((param_6 & 1) == 0) && (param_7 != 0)) {
      uVar3 = (ulong)*(byte *)(param_5 + 0x28);
      FUN_10740bf08(uVar9,uVar12,uVar11,uVar10,param_2);
      if (uVar3 >> 0x20 != 0) goto LAB_10740c2b0;
    }
    func_0x00010740cbf4();
    for (uVar9 = 1; uVar9 < (*(long *)(param_5 + 0x68) - *(long *)(param_5 + 0x60) >> 2) - 1U;
        uVar9 = uVar9 + 1) {
      func_0x00010740cb1c(auStack_148,param_1 * *(float *)(*(long *)(param_5 + 0x60) + uVar9 * 4));
      if (cStack_12c == '\x01') {
        FUN_10740c9d0(&puStack_e8,auStack_148);
      }
      else if (puStack_e0 < puStack_d8) {
        *puStack_e0 = 0xff800000ff800000;
        puStack_e0[1] = 0;
        puStack_e0[2] = 0;
        *(undefined4 *)(puStack_e0 + 3) = 0;
        puStack_e0 = (undefined8 *)((long)puStack_e0 + 0x1c);
      }
      else {
        ppuVar4 = &puStack_e8;
        FUN_10740ca9c(ppuVar4,((long)puStack_e0 - (long)puStack_e8) / 0x1c + 1);
        FUN_10740c91c(&uStack_d0,ppuVar4,((long)puStack_e0 - (long)puStack_e8) / 0x1c,&puStack_d8);
        *puStack_c0 = 0xff800000ff800000;
        puStack_c0[1] = 0;
        puStack_c0[2] = 0;
        *(undefined4 *)(puStack_c0 + 3) = 0;
        puStack_c0 = (undefined8 *)((long)puStack_c0 + 0x1c);
        FUN_10740c884(&puStack_e8,&uStack_d0);
        puVar1 = puStack_e0;
        FUN_10740c98c(&uStack_d0);
        puStack_e0 = puVar1;
      }
    }
    FUN_10740c9d0(&puStack_e8,abStack_10c);
    puVar8 = puStack_e8;
    puVar1 = puStack_e0;
  }
  for (; puVar8 != puVar1; puVar8 = (undefined8 *)((long)puVar8 + 0x1c)) {
    FUN_10740b938(*(undefined4 *)((long)puVar8 + 0xc),puVar8,param_9);
  }
  uVar3 = 0;
LAB_10740c2b0:
  FUN_10740c634(&puStack_e8);
  return uVar3;
}



/* Entry: 10740c340; end: 10740c593;  */

void FUN_10740c340(undefined8 *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long *param_8,
                  long param_9)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  undefined8 uVar15;
  float in_s3;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uStack_3d8;
  float fStack_3d0;
  undefined1 auStack_3c8 [808];
  
  dVar10 = *(double *)(param_9 + 0x78);
  puVar7 = param_2;
  _log2(dVar10);
  fVar9 = SUB84(puVar7,0);
  (**(code **)(*param_8 + 0x18))((float)dVar10);
  fVar8 = (float)((ulong)param_8 >> 0x20);
  dVar13 = (double)(ulong)*(uint *)(param_9 + 0x50);
  dVar10 = (double)NEON_ucvtf((ulong)*(uint *)(param_9 + 0x4c));
  uVar15 = 0;
  dVar16 = (256.0 / dVar10) * 2.0 + 1.0;
  dVar11 = (double)NEON_ucvtf(dVar13);
  dVar18 = 256.0 / dVar11;
  dVar17 = dVar18 * 2.0 + 1.0;
  FUN_10740b448(auStack_3c8,param_3,param_4,param_5,param_9,param_7);
  param_1[1] = *param_1;
  puVar6 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)param_2[1];
  dVar18 = -(dVar18 * 2.0) - 1.0;
  do {
    fVar12 = SUB84(dVar13,0);
    fVar14 = SUB84(dVar11,0);
    if (puVar6 == puVar1) {
      return;
    }
    if (((*(byte *)(puVar6 + 0xf) & 1) == 0) && (*(char *)(puVar6 + 5) != '\x02')) {
      FUN_10740b67c(puVar6,0,auStack_3c8);
      if (*(float *)(puVar6 + 1) != 0.0) {
        uStack_3d8 = *puVar6;
        fStack_3d0 = 0.0;
        FUN_10740b67c(&uStack_3d8,0,auStack_3c8);
      }
      dVar11 = (double)fVar14;
      dVar13 = (double)fVar12;
      bVar2 = true;
      bVar4 = false;
      if (-((256.0 / dVar10) * 2.0) - 1.0 <= dVar11) {
        bVar2 = false;
        bVar4 = true;
        if (!NAN(dVar16) && !NAN(dVar11)) {
          bVar2 = dVar16 < dVar11;
          bVar4 = false;
        }
      }
      bVar3 = true;
      bVar5 = false;
      if (bVar2 == bVar4) {
        bVar3 = false;
        bVar5 = true;
        if (!NAN(dVar13) && !NAN(dVar18)) {
          bVar3 = dVar13 < dVar18;
          bVar5 = false;
        }
      }
      bVar2 = true;
      bVar4 = false;
      if (bVar3 == bVar5) {
        bVar2 = false;
        bVar4 = true;
        if (!NAN(dVar17) && !NAN(dVar13)) {
          bVar2 = dVar17 < dVar13;
          bVar4 = false;
        }
      }
      if (bVar2 == bVar4) {
        fVar14 = (float)uVar15;
        if ((((uint)param_8 >> 8 & 1) == 0) &&
           (fVar9 = *(float *)(puVar6 + 3), ((ulong)param_8 & 1) == 0)) {
          fVar9 = fVar9 + (*(float *)((long)puVar6 + 0x1c) - fVar9) * fVar8;
          fVar14 = fVar8;
        }
        fVar8 = (in_s3 / *(float *)(param_9 + 0xa4)) * 0.5 + 0.5;
        FUN_10740b67c(puVar6,1,auStack_3c8);
        uStack_3d8 = CONCAT44(fVar8,fVar9);
        fStack_3d0 = fVar14;
        func_0x00010740cb68();
        func_0x00010740cc00();
                    /* WARNING: Could not recover jumptable at 0x00010740c53c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_10de67fc0)[(ulong)puVar6 & 0xffffffff] * 4 + 0x10740c540))();
        return;
      }
      func_0x00010740cb94();
    }
    else {
      func_0x00010740cb94();
    }
    puVar6 = puVar6 + 0x15;
  } while( true );
}



/* Entry: 10740c594; end: 10740c633;  */

bool FUN_10740c594(long *param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  lVar2 = *param_1;
  lStack_28 = param_1[2];
  lVar3 = param_1[1];
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  lStack_38 = lVar2;
  lStack_30 = lVar3;
  FUN_10740c340();
  if (lVar3 - lVar2 == param_1[1] - *param_1) {
    _memcmp(lVar2);
    bVar1 = (int)lVar2 != 0;
  }
  else {
    bVar1 = true;
  }
  func_0x00010740c664(&lStack_38);
  return bVar1;
}



/* Entry: 10740c634; end: 10740c697;  */

long * FUN_10740c634(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10740c698; end: 10740c6af;  */

void FUN_10740c698(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10740c6b0; end: 10740c72b;  */

void FUN_10740c6b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6,double *param_7)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  double dStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  double dStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_58 = param_5[1];
  uStack_60 = *param_5;
  uStack_48 = param_5[3];
  uStack_50 = param_5[2];
  uVar3 = 0x3ff0000000000000;
  dVar1 = 1.0 - *param_7;
  dStack_68 = dVar1;
  func_0x00010740c758(&uStack_60,&dStack_68);
  uStack_a8 = param_6[1];
  uVar2 = *param_6;
  uStack_98 = param_6[3];
  uVar4 = param_6[2];
  uStack_b0 = uVar2;
  uStack_a0 = uVar4;
  dStack_40 = dVar1;
  uStack_38 = uVar3;
  uStack_30 = param_3;
  uStack_28 = param_4;
  func_0x00010740c758(&uStack_b0,param_7);
  uStack_88 = uVar2;
  uStack_80 = uVar4;
  uStack_78 = param_3;
  uStack_70 = param_4;
  func_0x00010740c72c(&dStack_40,&uStack_88);
  return;
}



/* Entry: 10740c72c; end: 10740c787;  */

undefined8 FUN_10740c72c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puVar1 = &uStack_30;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  uStack_18 = param_1[3];
  uStack_20 = param_1[2];
  FUN_10740c788();
  return *puVar1;
}



/* Entry: 10740c788; end: 10740c7bf;  */

undefined8 *
FUN_10740c788(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = param_6[1];
  uVar1 = *param_6;
  uStack_28 = param_6[3];
  uVar2 = param_6[2];
  uStack_40 = uVar1;
  uStack_30 = uVar2;
  FUN_10740c7c0(param_5,&uStack_40);
  *param_5 = uVar1;
  param_5[1] = uVar2;
  param_5[2] = param_3;
  param_5[3] = param_4;
  return param_5;
}



/* Entry: 10740c7c0; end: 10740c7e3;  */

double FUN_10740c7c0(double *param_1,double *param_2)

{
  return *param_1 + *param_2;
}



/* Entry: 10740c7e4; end: 10740c81b;  */

undefined8 *
FUN_10740c7e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_40 = param_1;
  uStack_38 = param_1;
  uStack_30 = param_1;
  uStack_28 = param_1;
  FUN_10740c81c(param_5,&uStack_40);
  *param_5 = param_1;
  param_5[1] = param_2;
  param_5[2] = param_3;
  param_5[3] = param_4;
  return param_5;
}



/* Entry: 10740c81c; end: 10740c86f;  */

double FUN_10740c81c(double *param_1,double *param_2)

{
  return *param_1 * *param_2;
}



/* Entry: 10740c870; end: 10740c883;  */

void FUN_10740c870(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  puVar4 = (undefined8 *)*plVar2;
  puVar1 = (undefined8 *)plVar2[1];
  puVar5 = (undefined8 *)(param_2[1] + (((long)puVar1 - (long)puVar4) / -0x1c) * 0x1c);
  puVar6 = puVar5;
  for (; puVar4 != puVar1; puVar4 = (undefined8 *)((long)puVar4 + 0x1c)) {
    uVar7 = *puVar4;
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar4 + 1);
    *puVar6 = uVar7;
    *(undefined4 *)((long)puVar6 + 0xc) = *(undefined4 *)((long)puVar4 + 0xc);
    uVar7 = puVar4[2];
    *(undefined4 *)(puVar6 + 3) = *(undefined4 *)(puVar4 + 3);
    puVar6[2] = uVar7;
    puVar6 = (undefined8 *)((long)puVar6 + 0x1c);
  }
  param_2[1] = puVar5;
  lVar3 = *plVar2;
  *plVar2 = (long)puVar5;
  plVar2[1] = lVar3;
  param_2[1] = lVar3;
  lVar3 = plVar2[1];
  plVar2[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = plVar2[2];
  plVar2[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10740c884; end: 10740c91b;  */

void FUN_10740c884(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar3 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)(param_2[1] + (((long)puVar1 - (long)puVar3) / -0x1c) * 0x1c);
  puVar5 = puVar4;
  for (; puVar3 != puVar1; puVar3 = (undefined8 *)((long)puVar3 + 0x1c)) {
    uVar6 = *puVar3;
    *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar3 + 1);
    *puVar5 = uVar6;
    *(undefined4 *)((long)puVar5 + 0xc) = *(undefined4 *)((long)puVar3 + 0xc);
    uVar6 = puVar3[2];
    *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(puVar3 + 3);
    puVar5[2] = uVar6;
    puVar5 = (undefined8 *)((long)puVar5 + 0x1c);
  }
  param_2[1] = puVar4;
  lVar2 = *param_1;
  *param_1 = (long)puVar4;
  param_1[1] = lVar2;
  param_2[1] = lVar2;
  lVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10740c91c; end: 10740c98b;  */

long * FUN_10740c91c(long *param_1,ulong param_2,long param_3,long param_4)

{
  long *plVar1;
  ulong extraout_x8;
  long lVar2;
  long lVar3;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar3 = 0;
  }
  else {
    plVar1 = param_1;
    func_0x00010740cc44();
    if (extraout_x8 <= param_2) {
      func_0x000104bd35f4();
      lVar3 = plVar1[2];
      while (lVar3 != plVar1[1]) {
        lVar3 = lVar3 + -0x1c;
        plVar1[2] = lVar3;
      }
      if (*plVar1 != 0) {
        __ZdlPv();
      }
      return plVar1;
    }
    lVar3 = param_2 * 0x1c;
    __Znwm();
  }
  lVar2 = lVar3 + param_3 * 0x1c;
  *param_1 = lVar3;
  param_1[1] = lVar2;
  param_1[2] = lVar2;
  param_1[3] = lVar3 + param_2 * 0x1c;
  return param_1;
}



/* Entry: 10740c98c; end: 10740c9cf;  */

long * FUN_10740c98c(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x1c;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10740c9d0; end: 10740ca9b;  */

void FUN_10740c9d0(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    uVar5 = param_2[1];
    uVar4 = *param_2;
    uVar6 = *(undefined8 *)((long)param_2 + 0xc);
    *(undefined8 *)((long)puVar2 + 0x14) = *(undefined8 *)((long)param_2 + 0x14);
    *(undefined8 *)((long)puVar2 + 0xc) = uVar6;
    puVar2[1] = uVar5;
    *puVar2 = uVar4;
    lVar3 = (long)puVar2 + 0x1c;
  }
  else {
    plVar1 = param_1;
    FUN_10740ca9c(param_1,((long)puVar2 - *param_1) / 0x1c + 1);
    FUN_10740c91c(auStack_58,plVar1,(param_1[1] - *param_1) / 0x1c,param_1 + 2);
    uVar5 = *(undefined8 *)((long)param_2 + 0x14);
    uVar4 = *(undefined8 *)((long)param_2 + 0xc);
    uVar6 = *param_2;
    puStack_48[1] = param_2[1];
    *puStack_48 = uVar6;
    *(undefined8 *)((long)puStack_48 + 0x14) = uVar5;
    *(undefined8 *)((long)puStack_48 + 0xc) = uVar4;
    puStack_48 = (undefined8 *)((long)puStack_48 + 0x1c);
    FUN_10740c884(param_1,auStack_58);
    lVar3 = param_1[1];
    FUN_10740c98c(auStack_58);
  }
  param_1[1] = lVar3;
  return;
}



/* Entry: 10740ca9c; end: 10740cafb;  */

long * FUN_10740ca9c(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if ((long *)0x924924924924924 < param_2) {
    FUN_10740c870();
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0x1c;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
    plVar2 = param_2;
  }
  if (0x492492492492491 < uVar1) {
    plVar2 = (long *)0x924924924924924;
  }
  return plVar2;
}



/* Entry: 10740cafc; end: 10740cc63;  */

float FUN_10740cafc(short *param_1)

{
  return (float)(int)*param_1;
}



/* Entry: 10740cc64; end: 10740ccb7;  */

long FUN_10740cc64(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 100000;
  if (param_2 != 0) {
    lVar1 = param_2;
  }
  lVar2 = param_1;
  FUN_10740d438(param_1,lVar1);
  __ZNSt3__119__shared_mutex_baseC1Ev(lVar2 + 0x200);
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  return param_1;
}



/* Entry: 10740ccb8; end: 10740d377;  */

void FUN_10740ccb8(long *param_1,ulong *param_2,undefined8 *param_3,long param_4)

{
  long lVar1;
  short *psVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  ulong uVar10;
  int iVar11;
  long *plVar12;
  ulong *puVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong *puVar17;
  int iVar18;
  ulong *puVar19;
  long lVar20;
  ulong *puVar21;
  short *psVar22;
  undefined1 auStack_f8 [24];
  char cStack_e0;
  ulong uStack_d8;
  ulong *puStack_d0;
  ulong *puStack_c8;
  ulong uStack_c0;
  undefined8 *puStack_b8;
  ulong *puStack_b0;
  ulong *puStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 *puStack_90;
  ulong *puStack_88;
  undefined1 uStack_80;
  ulong *puStack_78;
  undefined1 uStack_70;
  
  puVar6 = param_2;
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  puVar19 = (ulong *)0x0;
  lVar20 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar13 = (ulong *)param_3[1];
  for (puVar21 = (ulong *)*param_3; puVar21 != puVar13; puVar21 = puVar21 + 3) {
    if (puVar21[1] != *puVar21) {
      lVar15 = lVar20;
      FUN_10740d3e0();
      puVar19 = (ulong *)((long)puVar19 * 0x1000 + -0x61c8864680b583eb + ((ulong)puVar19 >> 4) +
                          lVar15 ^ (ulong)puVar19);
      psVar2 = (short *)puVar21[1];
      lVar15 = 0;
      for (psVar22 = (short *)*puVar21; psVar22 != psVar2; psVar22 = psVar22 + 2) {
        lVar1 = lVar15 + 1;
        FUN_10740d3e0();
        puVar19 = (ulong *)((long)puVar19 * 0x1000 + -0x61c8864680b583eb + ((ulong)puVar19 >> 4) +
                            lVar15 ^ (ulong)puVar19);
        FUN_10740d3e0((long)*psVar22);
        func_0x00010740de98();
        FUN_10740d3e0((long)psVar22[1]);
        func_0x00010740de98();
        lVar15 = lVar1;
      }
      lVar20 = lVar20 + 1;
    }
  }
  puVar13 = param_2 + 0x2b;
  puStack_a8 = (ulong *)CONCAT71(puStack_a8._1_7_,1);
  puStack_b0 = puVar13;
  __ZNSt3__119__shared_mutex_base11lock_sharedEv(puVar13);
  puVar17 = param_2 + 8;
  puStack_c8 = (ulong *)CONCAT71(puStack_c8._1_7_,1);
  puStack_d0 = puVar17;
  __ZNSt3__119__shared_mutex_base11lock_sharedEv(puVar17);
  puVar9 = param_2 + 3;
  FUN_10740d898(puVar9,puVar19);
  if (puVar9 == (ulong *)0x0) {
    auStack_f8[0] = 0;
    cStack_e0 = '\0';
  }
  else {
    puVar7 = param_2 + 0x23;
    puStack_78 = puVar7;
    __ZNSt3__15mutex8try_lockEv();
    uStack_70 = SUB81(puVar7,0);
    if ((int)puVar7 != 0) {
      uVar10 = puVar9[6];
      lVar20 = *(long *)(uVar10 + 8);
      if (lVar20 != -1) {
        lVar15 = *(long *)(uVar10 + 0x10);
        *(long *)(lVar20 + 0x10) = lVar15;
        *(long *)(lVar15 + 8) = lVar20;
        uVar16 = param_2[0x1f];
        *(ulong **)(uVar10 + 8) = param_2 + 0x1d;
        *(ulong *)(uVar10 + 0x10) = uVar16;
        *(ulong *)(uVar16 + 8) = uVar10;
        param_2[0x1f] = uVar10;
      }
      func_0x00010054bf64(&puStack_78);
    }
    FUN_10740d930(auStack_f8,puVar9 + 3);
    func_0x0001000df5a0(&puStack_78);
  }
  func_0x000100100f40(&puStack_d0);
  func_0x000100100f40(&puStack_b0);
  if (cStack_e0 == '\x01') {
    func_0x00010014b41c(param_1,auStack_f8);
LAB_10740ce74:
    iVar18 = 0;
    bVar4 = false;
  }
  else {
    if (*(long **)(param_4 + 0x18) == (long *)0x0) {
      func_0x000104bfeb48();
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10740d2c4);
      (*pcVar5)();
    }
    (**(code **)(**(long **)(param_4 + 0x18) + 0x30))(&puStack_b0);
    func_0x00010014b41c(param_1,&puStack_b0);
    func_0x00010731e26c(&puStack_b0);
    uStack_70 = 1;
    puStack_78 = puVar13;
    __ZNSt3__119__shared_mutex_base11lock_sharedEv(puVar13);
    puVar8 = (undefined8 *)0x18;
    __Znwm();
    *puVar8 = puVar19;
    puVar8[1] = 0xffffffffffffffff;
    puVar8[2] = 0;
    uStack_80 = 1;
    puStack_88 = puVar17;
    __ZNSt3__119__shared_mutex_base4lockEv(puVar17);
    FUN_10731e2b0(&puStack_d0,param_1);
    uStack_98 = uStack_c0;
    uStack_a0 = (ulong)puStack_c8;
    puStack_a8 = puStack_d0;
    puStack_d0 = (ulong *)0x0;
    puStack_c8 = (ulong *)0x0;
    uStack_c0 = 0;
    puStack_b8 = puVar8;
    puStack_b0 = puVar19;
    puStack_90 = puVar8;
    func_0x00010731e26c(&puStack_d0);
    puVar13 = puStack_b0;
    puVar19 = (ulong *)param_2[4];
    if (puVar19 != (ulong *)0x0) {
      uVar10 = (long)puVar19 - 1;
      if (((ulong)puVar19 & uVar10) == 0) {
        puVar21 = (ulong *)(uVar10 & (ulong)puStack_b0);
      }
      else {
        puVar21 = puStack_b0;
        if (puVar19 <= puStack_b0) {
          uVar16 = 0;
          if (puVar19 != (ulong *)0x0) {
            uVar16 = (ulong)puStack_b0 / (ulong)puVar19;
          }
          puVar21 = (ulong *)((long)puStack_b0 - uVar16 * (long)puVar19);
        }
      }
      plVar12 = *(long **)(param_2[3] + (long)puVar21 * 8);
      if (plVar12 != (long *)0x0) {
        do {
          while( true ) {
            plVar12 = (long *)*plVar12;
            if (plVar12 == (long *)0x0) goto LAB_10740cfb8;
            puVar17 = (ulong *)plVar12[1];
            if (puVar17 != puStack_b0) break;
            if ((ulong *)plVar12[2] == puStack_b0) {
              __ZdlPv(puVar8);
              func_0x00010740de7c();
              func_0x00010740de74();
              func_0x00010740de58();
              goto LAB_10740ce74;
            }
          }
          if (((ulong)puVar19 & uVar10) == 0) {
            puVar17 = (ulong *)((ulong)puVar17 & uVar10);
          }
          else if (puVar19 <= puVar17) {
            uVar16 = 0;
            if (puVar19 != (ulong *)0x0) {
              uVar16 = (ulong)puVar17 / (ulong)puVar19;
            }
            puVar17 = (ulong *)((long)puVar17 - uVar16 * (long)puVar19);
          }
        } while (puVar17 == puVar21);
      }
    }
LAB_10740cfb8:
    puVar9 = (ulong *)0x38;
    __Znwm();
    uVar10 = uStack_98;
    puVar17 = param_2 + 5;
    uStack_c0 = 1;
    *puVar9 = 0;
    puVar9[1] = (ulong)puVar13;
    puVar9[2] = (ulong)puVar13;
    puVar9[4] = uStack_a0;
    puVar9[3] = (ulong)puStack_a8;
    uStack_a0 = 0;
    uStack_98 = 0;
    puStack_a8 = (ulong *)0x0;
    puVar9[5] = uVar10;
    puVar9[6] = (ulong)puStack_90;
    puStack_c8 = puVar17;
    if ((puVar19 == (ulong *)0x0) ||
       (*(float *)(param_2 + 7) * (float)puVar19 < (float)(param_2[6] + 1))) {
      uVar10 = 1;
      if ((ulong *)0x2 < puVar19) {
        uVar10 = (ulong)(((ulong)puVar19 & (long)puVar19 - 1U) != 0);
      }
      uVar10 = uVar10 | (long)puVar19 << 1;
      uVar16 = (ulong)((float)(param_2[6] + 1) / *(float *)(param_2 + 7));
      if (uVar10 <= uVar16) {
        uVar10 = uVar16;
      }
      puStack_d0 = puVar9;
      FUN_10740d530(param_2 + 3,uVar10);
      puVar19 = (ulong *)param_2[4];
      if (((ulong)puVar19 & (long)puVar19 - 1U) == 0) {
        puVar21 = (ulong *)((long)puVar19 - 1U & (ulong)puVar13);
      }
      else {
        puVar21 = puVar13;
        if (puVar19 <= puVar13) {
          uVar10 = 0;
          if (puVar19 != (ulong *)0x0) {
            uVar10 = (ulong)puVar13 / (ulong)puVar19;
          }
          puVar21 = (ulong *)((long)puVar13 - uVar10 * (long)puVar19);
        }
      }
    }
    uVar10 = param_2[3];
    puVar13 = *(ulong **)(uVar10 + (long)puVar21 * 8);
    if (puVar13 == (ulong *)0x0) {
      *puVar9 = *puVar17;
      *puVar17 = (ulong)puVar9;
      *(ulong **)(uVar10 + (long)puVar21 * 8) = puVar17;
      if (*puVar9 != 0) {
        puVar21 = *(ulong **)(*puVar9 + 8);
        if (((ulong)puVar19 & (long)puVar19 - 1U) == 0) {
          puVar21 = (ulong *)((ulong)puVar21 & (long)puVar19 - 1U);
        }
        else if (puVar19 <= puVar21) {
          uVar16 = 0;
          if (puVar19 != (ulong *)0x0) {
            uVar16 = (ulong)puVar21 / (ulong)puVar19;
          }
          puVar21 = (ulong *)((long)puVar21 - uVar16 * (long)puVar19);
        }
        *(ulong **)(uVar10 + (long)puVar21 * 8) = puVar9;
      }
    }
    else {
      *puVar9 = *puVar13;
      *puVar13 = (ulong)puVar9;
    }
    puStack_d0 = (ulong *)0x0;
    param_2[6] = param_2[6] + 1;
    FUN_10740db3c(&puStack_d0);
    func_0x000107276998(&puStack_88);
    puVar21 = param_2 + 1;
    uVar16 = *puVar21;
    uVar10 = *param_2;
    uStack_d8 = uVar16;
    if (uVar10 <= uVar16) {
      FUN_10740d94c(param_2);
    }
    puStack_d0 = param_2 + 0x23;
    puStack_c8 = (ulong *)CONCAT71(puStack_c8._1_7_,1);
    __ZNSt3__15mutex4lockEv();
    uVar14 = param_2[0x1f];
    puVar8[1] = param_2 + 0x1d;
    puVar8[2] = uVar14;
    *(undefined8 **)(uVar14 + 8) = puVar8;
    param_2[0x1f] = (ulong)puVar8;
    func_0x00010054bf64(&puStack_d0);
    if (uVar16 < uVar10) {
      do {
        uVar16 = *puVar21;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar21,0x10);
        if (bVar4) {
          *puVar21 = uVar16 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        uStack_d8 = uVar16;
      } while (cVar3 != '\0');
    }
    if ((*param_2 < uVar16) && (FUN_10740db34(puVar21,&uStack_d8,uVar16 - 1,5), (int)puVar21 != 0))
    {
      FUN_10740d94c(param_2);
    }
    func_0x0001000df5a0(&puStack_d0);
    func_0x00010740de7c();
    func_0x00010740de74();
    func_0x00010740de58();
    lVar20 = *param_1;
    lVar15 = param_1[1];
    FUN_10740d378(puVar6 + 1,0x5e,lVar15 - lVar20 & 0x3fffffffc);
    iVar18 = (int)((ulong)(lVar15 - lVar20) >> 2);
    bVar4 = true;
  }
  puStack_b0 = param_2 + 0x40;
  puStack_a8 = (ulong *)CONCAT71(puStack_a8._1_7_,1);
  func_0x000107279a5c();
  if (bVar4) {
    iVar11 = *(int *)((long)param_2 + 0x2ac) + 1;
    *(int *)((long)param_2 + 0x2ac) = iVar11;
    *(int *)(param_2 + 0x56) = (int)param_2[0x56] + iVar18;
    iVar18 = (int)param_2[0x55];
  }
  else {
    iVar18 = (int)param_2[0x55] + 1;
    *(int *)(param_2 + 0x55) = iVar18;
    iVar11 = *(int *)((long)param_2 + 0x2ac);
  }
  if (999 < (uint)(iVar11 + iVar18)) {
    FUN_10740d3ac(puVar6 + 1,0x5a,iVar18);
    FUN_10740d3ac(puVar6 + 1,0x5b,*(undefined4 *)((long)param_2 + 0x2ac));
    FUN_10740d378(puVar6 + 1,0x5c,(ulong)(uint)param_2[0x56] << 2);
    FUN_10740d378(puVar6 + 1,0x5d,param_2[1]);
    param_2[0x55] = 0;
  }
  func_0x000107279ee0(&puStack_b0);
  FUN_10740d418(auStack_f8);
  return;
}



/* Entry: 10740d378; end: 10740d3ab;  */

void FUN_10740d378(void)

{
  func_0x00010740dde4();
  func_0x00010740de84();
  FUN_10743fa44();
  func_0x00010740de3c();
  return;
}



/* Entry: 10740d3ac; end: 10740d3df;  */

void FUN_10740d3ac(void)

{
  func_0x00010740dde4();
  func_0x00010740de84();
  FUN_10743fa9c();
  func_0x00010740de3c();
  return;
}



/* Entry: 10740d3e0; end: 10740d417;  */

ulong FUN_10740d3e0(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = (param_1 ^ param_1 >> 0x1e) * -0x40a7b892e31b1a47;
  uVar1 = (uVar1 ^ uVar1 >> 0x1b) * -0x6b2fb644ecceee15;
  return uVar1 ^ uVar1 >> 0x1f;
}



/* Entry: 10740d418; end: 10740d437;  */

void FUN_10740d418(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010731e26c();
  }
  return;
}



/* Entry: 10740d438; end: 10740d4ef;  */

undefined8 * FUN_10740d438(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_2;
  puVar1 = param_1;
  __ZNSt3__16thread20hardware_concurrencyEv();
  FUN_10740d4f0(param_1 + 3,(int)puVar1 << 2,&uStack_21,&uStack_22);
  __ZNSt3__119__shared_mutex_baseC1Ev(param_1 + 8);
  param_1[0x1e] = 0xffffffffffffffff;
  param_1[0x1f] = 0;
  param_1[0x21] = 0xffffffffffffffff;
  param_1[0x22] = 0;
  param_1[0x23] = 0x32aaaba7;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2a] = 0;
  __ZNSt3__119__shared_mutex_baseC1Ev(param_1 + 0x2b);
  param_1[0x1e] = 0;
  param_1[0x1f] = param_1 + 0x20;
  param_1[0x21] = param_1 + 0x1d;
  return param_1;
}



/* Entry: 10740d4f0; end: 10740d52f;  */

undefined8 * FUN_10740d4f0(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  FUN_10740d530();
  return param_1;
}



/* Entry: 10740d530; end: 10740d6d7;  */

void FUN_10740d530(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar3 = param_1;
  plVar5 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar7 = (long *)param_1[1];
  if (plVar7 > param_2 || param_2 == plVar7) {
    if (plVar7 <= param_2) {
      return;
    }
    plVar3 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar7 < (long *)0x3) || (((ulong)plVar7 & (long)plVar7 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar3) {
      plVar3 = (long *)(1L << (-LZCOUNT((long)plVar3 - 1) & 0x3fU));
    }
    if (param_2 <= plVar3) {
      param_2 = plVar3;
    }
    if (plVar7 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      FUN_10740d6d8(param_1,0);
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm(lVar2);
    FUN_10740d6d8(param_1,lVar2);
    param_1[1] = (long)param_2;
    lVar2 = *param_1;
    for (plVar3 = (long *)0x0; param_2 != plVar3; plVar3 = (long *)((long)plVar3 + 1)) {
      *(undefined8 *)(lVar2 + (long)plVar3 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      plVar5 = (long *)plVar3[1];
      uVar4 = (long)param_2 - 1;
      uVar1 = 0;
      if (param_2 != (long *)0x0) {
        uVar1 = (ulong)plVar5 / (ulong)param_2;
      }
      plVar7 = plVar5;
      if (param_2 <= plVar5) {
        plVar7 = (long *)((long)plVar5 - uVar1 * (long)param_2);
      }
      if (((ulong)param_2 & uVar4) == 0) {
        plVar7 = (long *)((ulong)plVar5 & uVar4);
      }
      *(long **)(lVar2 + (long)plVar7 * 8) = param_1 + 2;
      while (plVar5 = plVar3, plVar3 = (long *)*plVar5, plVar3 != (long *)0x0) {
        plVar6 = (long *)plVar3[1];
        if (((ulong)param_2 & uVar4) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar4);
        }
        else if (param_2 <= plVar6) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar6 / (ulong)param_2;
          }
          plVar6 = (long *)((long)plVar6 - uVar1 * (long)param_2);
        }
        if (plVar6 != plVar7) {
          if (*(long *)(lVar2 + (long)plVar6 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar6 * 8) = plVar5;
            plVar7 = plVar6;
          }
          else {
            *plVar5 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar2 + (long)plVar6 * 8);
            **(long **)(lVar2 + (long)plVar6 * 8) = (long)plVar3;
            plVar3 = plVar5;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar2 = *plVar3;
  *plVar3 = (long)plVar5;
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10740d6d8; end: 10740d6ef;  */

void FUN_10740d6d8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10740d6f0; end: 10740d76b;  */

void FUN_10740d6f0(void)

{
  func_0x00010740de68();
  FUN_10740d76c();
  return;
}



/* Entry: 10740d76c; end: 10740d783;  */

void FUN_10740d76c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10740d784; end: 10740d7c7;  */

long FUN_10740d784(long param_1)

{
  FUN_10740d7c8();
  func_0x000107276ba4(param_1 + 0x158);
  __ZNSt3__15mutexD1Ev(param_1 + 0x118);
  func_0x000107276ba4(param_1 + 0x40);
  FUN_10740d6f0(param_1 + 0x18);
  return param_1;
}



/* Entry: 10740d7c8; end: 10740d84b;  */

void FUN_10740d7c8(long param_1)

{
  long lVar1;
  long lStack_40;
  undefined1 uStack_38;
  
  lStack_40 = param_1 + 0x158;
  uStack_38 = 1;
  __ZNSt3__119__shared_mutex_base4lockEv();
  FUN_10740d84c(param_1 + 0x18);
  lVar1 = *(long *)(param_1 + 0xf8);
  while (lVar1 != param_1 + 0x100) {
    lVar1 = *(long *)(lVar1 + 0x10);
    __ZdlPv();
  }
  *(long *)(param_1 + 0xf8) = param_1 + 0x100;
  *(long *)(param_1 + 0x108) = param_1 + 0xe8;
  *(undefined8 *)(param_1 + 8) = 0;
  func_0x000104c305a0(&lStack_40);
  return;
}



/* Entry: 10740d84c; end: 10740d897;  */

void FUN_10740d84c(long param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010740de68();
    unaff_x19[2] = 0;
    lVar2 = unaff_x19[1];
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*unaff_x19 + lVar1 * 8) = 0;
    }
    unaff_x19[3] = 0;
  }
  return;
}



/* Entry: 10740d898; end: 10740d92f;  */

long FUN_10740d898(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = uVar3 - 1;
    if ((uVar3 & uVar4) == 0) {
      uVar5 = uVar4 & param_2;
    }
    else {
      uVar5 = param_2;
      if (uVar3 <= param_2) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = param_2 / uVar3;
        }
        uVar5 = param_2 - uVar5 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar6 = plVar2[1];
        if (uVar6 != param_2) break;
        if (plVar2[2] == param_2) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar4) == 0) {
        uVar6 = uVar6 & uVar4;
      }
      else if (uVar3 <= uVar6) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar6 / uVar3;
        }
        uVar6 = uVar6 - uVar1 * uVar3;
      }
    } while (uVar6 == uVar5);
  }
  return 0;
}



/* Entry: 10740d930; end: 10740d94b;  */

void FUN_10740d930(long param_1)

{
  FUN_10731e2b0();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 10740d94c; end: 10740db33;  */

void FUN_10740d94c(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lStack_58;
  undefined1 uStack_50;
  long lStack_48;
  undefined1 uStack_40;
  long *plStack_38;
  long *plStack_30;
  undefined1 uStack_28;
  undefined4 uStack_27;
  undefined3 uStack_23;
  
  lStack_48 = param_1 + 0x118;
  uStack_40 = 1;
  __ZNSt3__15mutex4lockEv();
  puVar13 = *(undefined8 **)(param_1 + 0x108);
  if (puVar13 == (undefined8 *)(param_1 + 0xe8)) goto LAB_10740db08;
  lVar5 = puVar13[1];
  lVar10 = puVar13[2];
  *(long *)(lVar5 + 0x10) = lVar10;
  *(long *)(lVar10 + 8) = lVar5;
  puVar13[1] = 0xffffffffffffffff;
  func_0x00010054bf64(&lStack_48);
  lStack_58 = param_1 + 0x40;
  uStack_50 = 1;
  __ZNSt3__119__shared_mutex_base4lockEv();
  plVar4 = (long *)(param_1 + 0x18);
  FUN_10740d898(plVar4,*puVar13);
  if (plVar4 != (long *)0x0) {
    uVar7 = *(ulong *)(param_1 + 0x20);
    lVar5 = *plVar4;
    uVar6 = plVar4[1];
    uVar9 = uVar7 - 1;
    if ((uVar7 & uVar9) == 0) {
      uVar6 = uVar9 & uVar6;
    }
    else if (uVar7 <= uVar6) {
      uVar11 = 0;
      if (uVar7 != 0) {
        uVar11 = uVar6 / uVar7;
      }
      uVar6 = uVar6 - uVar11 * uVar7;
    }
    lVar10 = *(long *)(param_1 + 0x18);
    plVar3 = *(long **)(lVar10 + uVar6 * 8);
    do {
      plVar8 = plVar3;
      plVar3 = (long *)*plVar8;
    } while ((long *)*plVar8 != plVar4);
    plStack_30 = (long *)(param_1 + 0x28);
    if (plVar8 == plStack_30) {
LAB_10740da40:
      if (lVar5 == 0) {
LAB_10740da74:
        *(undefined8 *)(lVar10 + uVar6 * 8) = 0;
        lVar5 = *plVar4;
        goto LAB_10740da7c;
      }
      uVar11 = *(ulong *)(lVar5 + 8);
      if ((uVar7 & uVar9) == 0) {
        uVar12 = uVar11 & uVar9;
      }
      else {
        uVar12 = uVar11;
        if (uVar7 <= uVar11) {
          uVar12 = 0;
          if (uVar7 != 0) {
            uVar12 = uVar11 / uVar7;
          }
          uVar12 = uVar11 - uVar12 * uVar7;
        }
      }
      if (uVar12 != uVar6) goto LAB_10740da74;
LAB_10740da84:
      if ((uVar7 & uVar9) == 0) {
        uVar11 = uVar11 & uVar9;
      }
      else if (uVar7 <= uVar11) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar11 / uVar7;
        }
        uVar11 = uVar11 - uVar9 * uVar7;
      }
      if (uVar11 != uVar6) {
        *(long **)(lVar10 + uVar11 * 8) = plVar8;
        lVar5 = *plVar4;
      }
    }
    else {
      uVar11 = plVar8[1];
      if ((uVar7 & uVar9) == 0) {
        uVar11 = uVar11 & uVar9;
      }
      else if (uVar7 <= uVar11) {
        uVar12 = 0;
        if (uVar7 != 0) {
          uVar12 = uVar11 / uVar7;
        }
        uVar11 = uVar11 - uVar12 * uVar7;
      }
      if (uVar11 != uVar6) goto LAB_10740da40;
LAB_10740da7c:
      if (lVar5 != 0) {
        uVar11 = *(ulong *)(lVar5 + 8);
        goto LAB_10740da84;
      }
    }
    *plVar8 = lVar5;
    *plVar4 = 0;
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
    uStack_28 = 1;
    uStack_27 = 0;
    uStack_23 = 0;
    plStack_38 = plVar4;
    FUN_10740db3c(&plStack_38);
    __ZdlPv(puVar13);
    plVar4 = (long *)(param_1 + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x000104c305a0(&lStack_58);
LAB_10740db08:
  func_0x0001000df5a0(&lStack_48);
  return;
}



/* Entry: 10740db34; end: 10740db3b;  */

undefined8 FUN_10740db34(long *param_1,long *param_2,long param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  iVar1 = 2;
  if (param_4 != 4) {
    iVar1 = param_4;
  }
  iVar2 = 0;
  if (param_4 != 3) {
    iVar2 = iVar1;
  }
  switch(param_4) {
  case 1:
  case 2:
    if (iVar2 - 1U < 2) {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) {
LAB_10740ddd0:
          ClearExclusiveLocal();
          *param_2 = lVar5;
          return 0;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else if (iVar2 == 5) {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_10740ddd0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_10740ddd0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    break;
  case 3:
    if (iVar2 - 1U < 2) {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_10740ddd0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else if (iVar2 == 5) {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_10740ddd0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_10740ddd0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    break;
  case 4:
    if (iVar2 - 1U < 2) {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_10740ddd0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else if (iVar2 == 5) {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_10740ddd0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_10740ddd0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    break;
  case 5:
    if (iVar2 - 1U < 2) {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_10740ddd0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else if (iVar2 == 5) {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_10740ddd0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_10740ddd0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    break;
  default:
    if (iVar2 - 1U < 2) {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_10740ddd0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else if (iVar2 == 5) {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_10740ddd0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_10740ddd0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  return 1;
}



/* Entry: 10740db3c; end: 10740db7f;  */

long * FUN_10740db3c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010731e26c(lVar1 + 0x18);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10740db80; end: 10740deab;  */

undefined8 FUN_10740db80(long *param_1,long *param_2,long param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  iVar1 = 2;
  if (param_5 != 4) {
    iVar1 = param_5;
  }
  iVar2 = 0;
  if (param_5 != 3) {
    iVar2 = iVar1;
  }
  switch(param_4) {
  case 1:
  case 2:
    if (iVar2 - 1U < 2) {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) {
LAB_10740ddd0:
          ClearExclusiveLocal();
          *param_2 = lVar5;
          return 0;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else if (iVar2 == 5) {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_10740ddd0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_10740ddd0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    break;
  case 3:
    if (iVar2 - 1U < 2) {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_10740ddd0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else if (iVar2 == 5) {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_10740ddd0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_10740ddd0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    break;
  case 4:
    if (iVar2 - 1U < 2) {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_10740ddd0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else if (iVar2 == 5) {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_10740ddd0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_10740ddd0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    break;
  case 5:
    if (iVar2 - 1U < 2) {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_10740ddd0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else if (iVar2 == 5) {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_10740ddd0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_10740ddd0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    break;
  default:
    if (iVar2 - 1U < 2) {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_10740ddd0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else if (iVar2 == 5) {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_10740ddd0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_10740ddd0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  return 1;
}



/* Entry: 10740deac; end: 10740dedf;  */

long FUN_10740deac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10740dee0(param_1,param_2,param_3,param_4);
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}



/* Entry: 10740dee0; end: 10740df3f;  */

void FUN_10740dee0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x1458;
  __Znwm();
  FUN_10740f4e0();
  *param_1 = uVar1;
  return;
}



/* Entry: 10740df40; end: 10740dfab;  */

long FUN_10740df40(long param_1)

{
  FUN_10740f178(param_1 + 8);
  FUN_10740f144(param_1,0);
  return param_1;
}



/* Entry: 10740dfac; end: 10740dfeb;  */

void FUN_10740dfac(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x8;
  __Znwm();
  uVar2 = 1;
  __Znwm();
  *puVar1 = uVar2;
  *param_1 = puVar1;
  return;
}



/* Entry: 10740dfec; end: 10740e017;  */

void FUN_10740dfec(long *param_1,undefined8 param_2)

{
  undefined2 uStack_12;
  
  uStack_12 = 0;
  func_0x00010787c6e8(*param_1 + 0x58,param_2,&uStack_12);
  return;
}



/* Entry: 10740e018; end: 10740e03b;  */

void FUN_10740e018(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  undefined8 *extraout_x8_06;
  undefined8 *extraout_x8_07;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  int extraout_w11_05;
  int extraout_w11_06;
  int extraout_w11_07;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  uint uVar10;
  undefined4 uVar12;
  undefined8 *puStack_10a0;
  undefined8 *puStack_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  undefined **ppuStack_1070;
  undefined8 uStack_1068;
  undefined8 uStack_1060;
  undefined8 uStack_1058;
  undefined4 uStack_1050;
  undefined4 uStack_1048;
  undefined1 uStack_1044;
  undefined8 uStack_1040;
  undefined8 uStack_1038;
  ulong uStack_1030;
  undefined1 uStack_1028;
  undefined1 auStack_220 [24];
  undefined1 uStack_208;
  undefined7 uStack_207;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 uStack_1f0;
  undefined7 uStack_1ef;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  undefined1 auStack_1d8 [136];
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined4 uStack_58;
  double dVar11;
  
  func_0x00010740f42c();
  func_0x00010740f37c();
  FUN_1074133e8();
  func_0x00010740f3a4();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  uStack_1090 = (undefined8 *)CONCAT44(uStack_1090._4_4_,0x76);
  uStack_1078 = (undefined8 *)((ulong)uStack_1078._4_4_ << 0x20);
  uStack_1060 = 0;
  uStack_1058 = 0;
  ppuStack_1070 = &PTR_DAT_110996720;
  uStack_1068 = 0;
  uStack_1050 = 0x76;
  uStack_1048 = 0;
  uStack_1044 = 1;
  uStack_1038 = 0;
  uStack_1030 = 0;
  uStack_1040 = 0;
  puVar5 = &uStack_1090;
  func_0x00010729d56c(puVar5,"reason",param_2);
  uStack_80 = 1;
  uStack_78 = 0;
  puStack_60 = (undefined8 *)**(undefined8 **)(param_1 + 0x48);
  uStack_58 = 3;
  FUN_10743fa9c(uVar8,puVar5,&uStack_80,&puStack_60,7);
  puVar5 = &uStack_1090;
  func_0x000107262330();
  if (*(int *)(param_1 + 0x10d0) == 0) {
    __ZNSt3__16chrono12steady_clock3nowEv();
  }
  else {
    puVar5 = (undefined8 *)0x7fffffffffffffff;
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x10f8) + 8);
  uStack_1080 = *(undefined8 *)(lVar6 + 0x1a0);
  uStack_1088 = *(undefined8 *)(lVar6 + 0x198);
  ppuStack_1070 = *(undefined ***)(lVar6 + 0x1b0);
  uStack_1078 = *(undefined8 **)(lVar6 + 0x1a8);
  uStack_1068 = *(undefined8 *)(lVar6 + 0x1b8);
  uStack_1090 = puVar5;
  puStack_60 = puVar5;
  if (*(long *)(param_1 + 0x1168) != **(long **)(lVar6 + 0x1c8)) {
    func_0x000107410e94(param_1 + 0x1168);
    FUN_1074e31dc(param_1 + 0x1168,&uStack_1090);
  }
  uVar10 = NEON_ucvtf(*(undefined4 *)(param_1 + 0xa4));
  dVar11 = (double)(ulong)uVar10;
  uVar12 = NEON_ucvtf(*(undefined4 *)(param_1 + 0xa8));
  *(uint *)(param_1 + 0x143c) = uVar10;
  *(undefined4 *)(param_1 + 0x1440) = uVar12;
  func_0x000107411798();
  FUN_1074e33b8((float)dVar11,param_1 + 0x1168);
  FUN_1074e3804(&uStack_80,param_1 + 0x1168);
  FUN_107413c78(param_1 + 0x50,&uStack_80);
  FUN_1074137f8(param_1 + 0x50,&puStack_60);
  if (*(char *)(param_1 + 0x1164) == '\x01') {
    uStack_1090 = (undefined8 *)((ulong)uStack_1090 & 0xffffffffffffff00);
    func_0x0001074117a0();
    uStack_1030 = uStack_1030 & 0xffffffffffffff00;
    uStack_1028 = 0;
    FUN_107410058(param_1,&uStack_1090);
  }
  lVar6 = *(long *)(param_1 + 0x10f8);
  uVar4 = (undefined1)*(undefined8 *)(lVar6 + 8);
  func_0x0001077c5a6c();
  uStack_1090 = (undefined8 *)CONCAT71(uStack_1090._1_7_,uVar4);
  uStack_1090 = (undefined8 *)CONCAT44(*(undefined4 *)(param_1 + 0x10d0),(undefined4)uStack_1090);
  uStack_1088 = CONCAT44(*(undefined4 *)(param_1 + 0x10dc),*(undefined4 *)(param_1 + 0x10d4));
  uStack_1080 = CONCAT71(uStack_1080._1_7_,*(undefined1 *)(param_1 + 0x10e0));
  uStack_1078 = puStack_60;
  _memcpy(&ppuStack_1070,param_1 + 0x58,0xe50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (auStack_220,*(long *)(lVar6 + 8) + 0x90);
  lVar6 = *(long *)(*(long *)(param_1 + 0x10f8) + 8);
  uStack_208 = *(undefined1 *)(lVar6 + 0x22);
  uStack_1f8 = *(undefined8 *)(lVar6 + 0x1a0);
  uStack_200 = *(undefined8 *)(lVar6 + 0x198);
  uStack_1e0 = (undefined1)*(undefined8 *)(lVar6 + 0x1b8);
  uStack_1df = (undefined7)((ulong)*(undefined8 *)(lVar6 + 0x1b8) >> 8);
  uStack_1e8 = (undefined1)*(undefined8 *)(lVar6 + 0x1b0);
  uStack_1e7 = (undefined7)((ulong)*(undefined8 *)(lVar6 + 0x1b0) >> 8);
  uStack_1f0 = (undefined1)*(undefined8 *)(lVar6 + 0x1a8);
  uStack_1ef = (undefined7)((ulong)*(undefined8 *)(lVar6 + 0x1a8) >> 8);
  FUN_107411660(auStack_1d8,*(long *)(*(long *)(param_1 + 0x10f8) + 8) + 0x108);
  puVar5 = &uStack_1090;
  uStack_150 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10f8) + 8) + 400);
  lVar6 = *(long *)(*(long *)(param_1 + 0x10f8) + 8);
  puVar7 = *(undefined8 **)(lVar6 + 0x1c0);
  lStack_140 = puVar7[1];
  uStack_148 = *puVar7;
  if (puVar7[1] != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8;
    lVar6 = extraout_x9;
  }
  lStack_130 = *(long *)(lVar6 + 0xb0);
  uStack_138 = *(undefined8 *)(lVar6 + 0xa8);
  if (*(long *)(lVar6 + 0xb0) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_00 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8_00;
    lVar6 = extraout_x9_00;
  }
  lStack_120 = *(long *)(lVar6 + 0xd8);
  uStack_128 = *(undefined8 *)(lVar6 + 0xd0);
  if (*(long *)(lVar6 + 0xd8) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_01 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8_01;
    lVar6 = extraout_x9_01;
  }
  lStack_110 = *(long *)(lVar6 + 0x100);
  uStack_118 = *(undefined8 *)(lVar6 + 0xf8);
  if (*(long *)(lVar6 + 0x100) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_02 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8_02;
    lVar6 = extraout_x9_02;
  }
  uStack_108 = *(undefined8 *)(lVar6 + 0x338);
  lStack_100 = *(long *)(lVar6 + 0x340);
  if (lStack_100 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_03 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8_03;
    lVar6 = extraout_x9_03;
  }
  uStack_f8 = *(undefined8 *)(lVar6 + 0x348);
  lStack_f0 = *(long *)(lVar6 + 0x350);
  if (lStack_f0 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_04 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8_04;
    lVar6 = extraout_x9_04;
  }
  uStack_e8 = *(undefined8 *)(lVar6 + 0x358);
  lStack_e0 = *(long *)(lVar6 + 0x360);
  if (lStack_e0 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_05 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8_05;
    lVar6 = extraout_x9_05;
  }
  uStack_d8 = *(undefined8 *)(lVar6 + 0x368);
  lStack_d0 = *(long *)(lVar6 + 0x370);
  if (lStack_d0 != 0) {
    do {
      func_0x000107411734();
      puVar5 = extraout_x8_06;
    } while (extraout_w11_06 != 0);
  }
  uStack_c8 = *(undefined8 *)(param_1 + 0x10e8);
  lStack_c0 = *(long *)(param_1 + 0x10f0);
  if (lStack_c0 != 0) {
    do {
      func_0x000107411734();
      puVar5 = extraout_x8_07;
    } while (extraout_w11_07 != 0);
  }
  *(undefined1 *)(puVar5 + 0x1fb) = *(undefined1 *)(param_1 + 0x1101);
  *(bool *)((long)puVar5 + 0xfd9) = *(long *)(param_1 + 0x1108) != 0;
  *(undefined1 *)((long)puVar5 + 0xfda) = *(undefined1 *)(param_1 + 0x10d8);
  uStack_ac = uStack_78;
  uStack_a8 = uStack_74;
  uStack_b4 = uStack_80;
  uStack_b0 = uStack_7c;
  uStack_9c = (undefined4)uStack_68;
  uStack_98 = (undefined4)((ulong)uStack_68 >> 0x20);
  uStack_a4 = (undefined4)uStack_70;
  uStack_a0 = (undefined4)((ulong)uStack_70 >> 0x20);
  uStack_88 = *(undefined8 *)(param_1 + 0x1118);
  uStack_90 = *(undefined8 *)(param_1 + 0x1110);
  if (*(long *)(param_1 + 0x1118) != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10 != 0);
  }
  plVar9 = *(long **)(param_1 + 0x38);
  puVar5 = (undefined8 *)0x1028;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_1109adf98;
  _memcpy(puVar5 + 3,&uStack_1090,0xe70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (puVar5 + 0x1d1,auStack_220);
  puVar5[0x1d5] = uStack_200;
  puVar5[0x1d4] = CONCAT71(uStack_207,uStack_208);
  puVar5[0x1d7] = CONCAT71(uStack_1ef,uStack_1f0);
  puVar5[0x1d6] = uStack_1f8;
  *(ulong *)((long)puVar5 + 0xec1) = CONCAT17(uStack_1e0,uStack_1e7);
  *(ulong *)((long)puVar5 + 0xeb9) = CONCAT17(uStack_1e8,uStack_1ef);
  FUN_107411660(puVar5 + 0x1da,auStack_1d8);
  puVar5[0x1eb] = uStack_150;
  puVar5[0x1ed] = lStack_140;
  puVar5[0x1ec] = uStack_148;
  if (lStack_140 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_00 != 0);
  }
  puVar5[0x1ef] = lStack_130;
  puVar5[0x1ee] = uStack_138;
  if (lStack_130 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_01 != 0);
  }
  puVar5[0x1f1] = lStack_120;
  puVar5[0x1f0] = uStack_128;
  if (lStack_120 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_02 != 0);
  }
  puVar5[499] = lStack_110;
  puVar5[0x1f2] = uStack_118;
  if (lStack_110 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_03 != 0);
  }
  puVar5[0x1f5] = lStack_100;
  puVar5[500] = uStack_108;
  if (lStack_100 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_04 != 0);
  }
  puVar5[0x1f7] = lStack_f0;
  puVar5[0x1f6] = uStack_f8;
  if (lStack_f0 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_05 != 0);
  }
  puVar5[0x1f9] = lStack_e0;
  puVar5[0x1f8] = uStack_e8;
  if (lStack_e0 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_06 != 0);
  }
  puVar5[0x1fb] = lStack_d0;
  puVar5[0x1fa] = uStack_d8;
  if (lStack_d0 != 0) {
    plVar1 = (long *)(lStack_d0 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar5[0x1fd] = lStack_c0;
  puVar5[0x1fc] = uStack_c8;
  puVar5[0x1ff] = CONCAT44(uStack_ac,uStack_b0);
  puVar5[0x1fe] = CONCAT44(uStack_b4,uStack_b8);
  uStack_c8 = 0;
  lStack_c0 = 0;
  puVar5[0x201] = CONCAT44(uStack_9c,uStack_a0);
  puVar5[0x200] = CONCAT44(uStack_a4,uStack_a8);
  *(undefined4 *)(puVar5 + 0x202) = uStack_98;
  puVar5[0x204] = uStack_88;
  puVar5[0x203] = uStack_90;
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_10a0 = puVar5 + 3;
  puStack_1098 = puVar5;
  (**(code **)(*plVar9 + 0x20))(plVar9,&puStack_10a0);
  func_0x00010725ab14(&puStack_10a0);
  func_0x000107410df4(&uStack_1090);
  return;
}



/* Entry: 10740e03c; end: 10740e043;  */

void FUN_10740e03c(long *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  undefined8 *extraout_x8_06;
  undefined8 *extraout_x8_07;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  int extraout_w11_05;
  int extraout_w11_06;
  int extraout_w11_07;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  uint uVar11;
  undefined4 uVar13;
  undefined8 *puStack_10a0;
  undefined8 *puStack_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  undefined **ppuStack_1070;
  undefined8 uStack_1068;
  undefined8 uStack_1060;
  undefined8 uStack_1058;
  undefined4 uStack_1050;
  undefined4 uStack_1048;
  undefined1 uStack_1044;
  undefined8 uStack_1040;
  undefined8 uStack_1038;
  ulong uStack_1030;
  undefined1 uStack_1028;
  undefined1 auStack_220 [24];
  undefined1 uStack_208;
  undefined7 uStack_207;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 uStack_1f0;
  undefined7 uStack_1ef;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  undefined1 auStack_1d8 [136];
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined4 uStack_58;
  double dVar12;
  
  lVar5 = *param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar9 = *(undefined8 *)(lVar5 + 0x48);
  uStack_1090 = (undefined8 *)CONCAT44(uStack_1090._4_4_,0x76);
  uStack_1078 = (undefined8 *)((ulong)uStack_1078._4_4_ << 0x20);
  uStack_1060 = 0;
  uStack_1058 = 0;
  ppuStack_1070 = &PTR_DAT_110996720;
  uStack_1068 = 0;
  uStack_1050 = 0x76;
  uStack_1048 = 0;
  uStack_1044 = 1;
  uStack_1038 = 0;
  uStack_1030 = 0;
  uStack_1040 = 0;
  puVar6 = &uStack_1090;
  func_0x00010729d56c(puVar6,"reason",param_2);
  uStack_80 = 1;
  uStack_78 = 0;
  puStack_60 = (undefined8 *)**(undefined8 **)(lVar5 + 0x48);
  uStack_58 = 3;
  FUN_10743fa9c(uVar9,puVar6,&uStack_80,&puStack_60,7);
  puVar6 = &uStack_1090;
  func_0x000107262330();
  if (*(int *)(lVar5 + 0x10d0) == 0) {
    __ZNSt3__16chrono12steady_clock3nowEv();
  }
  else {
    puVar6 = (undefined8 *)0x7fffffffffffffff;
  }
  lVar7 = *(long *)(*(long *)(lVar5 + 0x10f8) + 8);
  uStack_1080 = *(undefined8 *)(lVar7 + 0x1a0);
  uStack_1088 = *(undefined8 *)(lVar7 + 0x198);
  ppuStack_1070 = *(undefined ***)(lVar7 + 0x1b0);
  uStack_1078 = *(undefined8 **)(lVar7 + 0x1a8);
  uStack_1068 = *(undefined8 *)(lVar7 + 0x1b8);
  uStack_1090 = puVar6;
  puStack_60 = puVar6;
  if (*(long *)(lVar5 + 0x1168) != **(long **)(lVar7 + 0x1c8)) {
    func_0x000107410e94(lVar5 + 0x1168);
    FUN_1074e31dc(lVar5 + 0x1168,&uStack_1090);
  }
  uVar11 = NEON_ucvtf(*(undefined4 *)(lVar5 + 0xa4));
  dVar12 = (double)(ulong)uVar11;
  uVar13 = NEON_ucvtf(*(undefined4 *)(lVar5 + 0xa8));
  *(uint *)(lVar5 + 0x143c) = uVar11;
  *(undefined4 *)(lVar5 + 0x1440) = uVar13;
  func_0x000107411798();
  FUN_1074e33b8((float)dVar12,lVar5 + 0x1168);
  FUN_1074e3804(&uStack_80,lVar5 + 0x1168);
  FUN_107413c78(lVar5 + 0x50,&uStack_80);
  FUN_1074137f8(lVar5 + 0x50,&puStack_60);
  if (*(char *)(lVar5 + 0x1164) == '\x01') {
    uStack_1090 = (undefined8 *)((ulong)uStack_1090 & 0xffffffffffffff00);
    func_0x0001074117a0();
    uStack_1030 = uStack_1030 & 0xffffffffffffff00;
    uStack_1028 = 0;
    FUN_107410058(lVar5,&uStack_1090);
  }
  lVar7 = *(long *)(lVar5 + 0x10f8);
  uVar4 = (undefined1)*(undefined8 *)(lVar7 + 8);
  func_0x0001077c5a6c();
  uStack_1090 = (undefined8 *)CONCAT71(uStack_1090._1_7_,uVar4);
  uStack_1090 = (undefined8 *)CONCAT44(*(undefined4 *)(lVar5 + 0x10d0),(undefined4)uStack_1090);
  uStack_1088 = CONCAT44(*(undefined4 *)(lVar5 + 0x10dc),*(undefined4 *)(lVar5 + 0x10d4));
  uStack_1080 = CONCAT71(uStack_1080._1_7_,*(undefined1 *)(lVar5 + 0x10e0));
  uStack_1078 = puStack_60;
  _memcpy(&ppuStack_1070,lVar5 + 0x58,0xe50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (auStack_220,*(long *)(lVar7 + 8) + 0x90);
  lVar7 = *(long *)(*(long *)(lVar5 + 0x10f8) + 8);
  uStack_208 = *(undefined1 *)(lVar7 + 0x22);
  uStack_1f8 = *(undefined8 *)(lVar7 + 0x1a0);
  uStack_200 = *(undefined8 *)(lVar7 + 0x198);
  uStack_1e0 = (undefined1)*(undefined8 *)(lVar7 + 0x1b8);
  uStack_1df = (undefined7)((ulong)*(undefined8 *)(lVar7 + 0x1b8) >> 8);
  uStack_1e8 = (undefined1)*(undefined8 *)(lVar7 + 0x1b0);
  uStack_1e7 = (undefined7)((ulong)*(undefined8 *)(lVar7 + 0x1b0) >> 8);
  uStack_1f0 = (undefined1)*(undefined8 *)(lVar7 + 0x1a8);
  uStack_1ef = (undefined7)((ulong)*(undefined8 *)(lVar7 + 0x1a8) >> 8);
  FUN_107411660(auStack_1d8,*(long *)(*(long *)(lVar5 + 0x10f8) + 8) + 0x108);
  puVar6 = &uStack_1090;
  uStack_150 = *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x10f8) + 8) + 400);
  lVar7 = *(long *)(*(long *)(lVar5 + 0x10f8) + 8);
  puVar8 = *(undefined8 **)(lVar7 + 0x1c0);
  lStack_140 = puVar8[1];
  uStack_148 = *puVar8;
  if (puVar8[1] != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8;
    lVar7 = extraout_x9;
  }
  lStack_130 = *(long *)(lVar7 + 0xb0);
  uStack_138 = *(undefined8 *)(lVar7 + 0xa8);
  if (*(long *)(lVar7 + 0xb0) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_00 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_00;
    lVar7 = extraout_x9_00;
  }
  lStack_120 = *(long *)(lVar7 + 0xd8);
  uStack_128 = *(undefined8 *)(lVar7 + 0xd0);
  if (*(long *)(lVar7 + 0xd8) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_01 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_01;
    lVar7 = extraout_x9_01;
  }
  lStack_110 = *(long *)(lVar7 + 0x100);
  uStack_118 = *(undefined8 *)(lVar7 + 0xf8);
  if (*(long *)(lVar7 + 0x100) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_02 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_02;
    lVar7 = extraout_x9_02;
  }
  uStack_108 = *(undefined8 *)(lVar7 + 0x338);
  lStack_100 = *(long *)(lVar7 + 0x340);
  if (lStack_100 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_03 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_03;
    lVar7 = extraout_x9_03;
  }
  uStack_f8 = *(undefined8 *)(lVar7 + 0x348);
  lStack_f0 = *(long *)(lVar7 + 0x350);
  if (lStack_f0 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_04 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_04;
    lVar7 = extraout_x9_04;
  }
  uStack_e8 = *(undefined8 *)(lVar7 + 0x358);
  lStack_e0 = *(long *)(lVar7 + 0x360);
  if (lStack_e0 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_05 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_05;
    lVar7 = extraout_x9_05;
  }
  uStack_d8 = *(undefined8 *)(lVar7 + 0x368);
  lStack_d0 = *(long *)(lVar7 + 0x370);
  if (lStack_d0 != 0) {
    do {
      func_0x000107411734();
      puVar6 = extraout_x8_06;
    } while (extraout_w11_06 != 0);
  }
  uStack_c8 = *(undefined8 *)(lVar5 + 0x10e8);
  lStack_c0 = *(long *)(lVar5 + 0x10f0);
  if (lStack_c0 != 0) {
    do {
      func_0x000107411734();
      puVar6 = extraout_x8_07;
    } while (extraout_w11_07 != 0);
  }
  *(undefined1 *)(puVar6 + 0x1fb) = *(undefined1 *)(lVar5 + 0x1101);
  *(bool *)((long)puVar6 + 0xfd9) = *(long *)(lVar5 + 0x1108) != 0;
  *(undefined1 *)((long)puVar6 + 0xfda) = *(undefined1 *)(lVar5 + 0x10d8);
  uStack_ac = uStack_78;
  uStack_a8 = uStack_74;
  uStack_b4 = uStack_80;
  uStack_b0 = uStack_7c;
  uStack_9c = (undefined4)uStack_68;
  uStack_98 = (undefined4)((ulong)uStack_68 >> 0x20);
  uStack_a4 = (undefined4)uStack_70;
  uStack_a0 = (undefined4)((ulong)uStack_70 >> 0x20);
  uStack_88 = *(undefined8 *)(lVar5 + 0x1118);
  uStack_90 = *(undefined8 *)(lVar5 + 0x1110);
  if (*(long *)(lVar5 + 0x1118) != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10 != 0);
  }
  plVar10 = *(long **)(lVar5 + 0x38);
  puVar6 = (undefined8 *)0x1028;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_1109adf98;
  _memcpy(puVar6 + 3,&uStack_1090,0xe70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (puVar6 + 0x1d1,auStack_220);
  puVar6[0x1d5] = uStack_200;
  puVar6[0x1d4] = CONCAT71(uStack_207,uStack_208);
  puVar6[0x1d7] = CONCAT71(uStack_1ef,uStack_1f0);
  puVar6[0x1d6] = uStack_1f8;
  *(ulong *)((long)puVar6 + 0xec1) = CONCAT17(uStack_1e0,uStack_1e7);
  *(ulong *)((long)puVar6 + 0xeb9) = CONCAT17(uStack_1e8,uStack_1ef);
  FUN_107411660(puVar6 + 0x1da,auStack_1d8);
  puVar6[0x1eb] = uStack_150;
  puVar6[0x1ed] = lStack_140;
  puVar6[0x1ec] = uStack_148;
  if (lStack_140 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_00 != 0);
  }
  puVar6[0x1ef] = lStack_130;
  puVar6[0x1ee] = uStack_138;
  if (lStack_130 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_01 != 0);
  }
  puVar6[0x1f1] = lStack_120;
  puVar6[0x1f0] = uStack_128;
  if (lStack_120 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_02 != 0);
  }
  puVar6[499] = lStack_110;
  puVar6[0x1f2] = uStack_118;
  if (lStack_110 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_03 != 0);
  }
  puVar6[0x1f5] = lStack_100;
  puVar6[500] = uStack_108;
  if (lStack_100 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_04 != 0);
  }
  puVar6[0x1f7] = lStack_f0;
  puVar6[0x1f6] = uStack_f8;
  if (lStack_f0 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_05 != 0);
  }
  puVar6[0x1f9] = lStack_e0;
  puVar6[0x1f8] = uStack_e8;
  if (lStack_e0 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_06 != 0);
  }
  puVar6[0x1fb] = lStack_d0;
  puVar6[0x1fa] = uStack_d8;
  if (lStack_d0 != 0) {
    plVar1 = (long *)(lStack_d0 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar6[0x1fd] = lStack_c0;
  puVar6[0x1fc] = uStack_c8;
  puVar6[0x1ff] = CONCAT44(uStack_ac,uStack_b0);
  puVar6[0x1fe] = CONCAT44(uStack_b4,uStack_b8);
  uStack_c8 = 0;
  lStack_c0 = 0;
  puVar6[0x201] = CONCAT44(uStack_9c,uStack_a0);
  puVar6[0x200] = CONCAT44(uStack_a4,uStack_a8);
  *(undefined4 *)(puVar6 + 0x202) = uStack_98;
  puVar6[0x204] = uStack_88;
  puVar6[0x203] = uStack_90;
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_10a0 = puVar6 + 3;
  puStack_1098 = puVar6;
  (**(code **)(*plVar10 + 0x20))(plVar10,&puStack_10a0);
  func_0x00010725ab14(&puStack_10a0);
  func_0x000107410df4(&uStack_1090);
  return;
}



/* Entry: 10740e044; end: 10740e067;  */

void FUN_10740e044(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long extraout_x8;
  long lVar7;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  undefined8 *extraout_x8_06;
  undefined8 *extraout_x8_07;
  undefined8 *extraout_x8_08;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  int extraout_w11_05;
  int extraout_w11_06;
  int extraout_w11_07;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  uint uVar11;
  undefined4 uVar13;
  undefined8 *puStack_10a0;
  undefined8 *puStack_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  undefined **ppuStack_1070;
  undefined8 uStack_1068;
  undefined8 uStack_1060;
  undefined8 uStack_1058;
  undefined4 uStack_1050;
  undefined4 uStack_1048;
  undefined1 uStack_1044;
  undefined8 uStack_1040;
  undefined8 uStack_1038;
  ulong uStack_1030;
  undefined1 uStack_1028;
  undefined1 auStack_220 [24];
  undefined1 uStack_208;
  undefined7 uStack_207;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 uStack_1f0;
  undefined7 uStack_1ef;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  undefined1 auStack_1d8 [136];
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined4 uStack_58;
  double dVar12;
  
  func_0x00010740f42c();
  lVar5 = extraout_x8 + 0x50;
  FUN_107412e2c();
  func_0x00010740f3a4();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar9 = *(undefined8 *)(lVar5 + 0x48);
  uStack_1090 = (undefined8 *)CONCAT44(uStack_1090._4_4_,0x76);
  uStack_1078 = (undefined8 *)((ulong)uStack_1078._4_4_ << 0x20);
  uStack_1060 = 0;
  uStack_1058 = 0;
  ppuStack_1070 = &PTR_DAT_110996720;
  uStack_1068 = 0;
  uStack_1050 = 0x76;
  uStack_1048 = 0;
  uStack_1044 = 1;
  uStack_1038 = 0;
  uStack_1030 = 0;
  uStack_1040 = 0;
  puVar6 = &uStack_1090;
  func_0x00010729d56c(puVar6,"reason",param_2);
  uStack_80 = 1;
  uStack_78 = 0;
  puStack_60 = (undefined8 *)**(undefined8 **)(lVar5 + 0x48);
  uStack_58 = 3;
  FUN_10743fa9c(uVar9,puVar6,&uStack_80,&puStack_60,7);
  puVar6 = &uStack_1090;
  func_0x000107262330();
  if (*(int *)(lVar5 + 0x10d0) == 0) {
    __ZNSt3__16chrono12steady_clock3nowEv();
  }
  else {
    puVar6 = (undefined8 *)0x7fffffffffffffff;
  }
  lVar7 = *(long *)(*(long *)(lVar5 + 0x10f8) + 8);
  uStack_1080 = *(undefined8 *)(lVar7 + 0x1a0);
  uStack_1088 = *(undefined8 *)(lVar7 + 0x198);
  ppuStack_1070 = *(undefined ***)(lVar7 + 0x1b0);
  uStack_1078 = *(undefined8 **)(lVar7 + 0x1a8);
  uStack_1068 = *(undefined8 *)(lVar7 + 0x1b8);
  uStack_1090 = puVar6;
  puStack_60 = puVar6;
  if (*(long *)(lVar5 + 0x1168) != **(long **)(lVar7 + 0x1c8)) {
    func_0x000107410e94(lVar5 + 0x1168);
    FUN_1074e31dc(lVar5 + 0x1168,&uStack_1090);
  }
  uVar11 = NEON_ucvtf(*(undefined4 *)(lVar5 + 0xa4));
  dVar12 = (double)(ulong)uVar11;
  uVar13 = NEON_ucvtf(*(undefined4 *)(lVar5 + 0xa8));
  *(uint *)(lVar5 + 0x143c) = uVar11;
  *(undefined4 *)(lVar5 + 0x1440) = uVar13;
  func_0x000107411798();
  FUN_1074e33b8((float)dVar12,lVar5 + 0x1168);
  FUN_1074e3804(&uStack_80,lVar5 + 0x1168);
  FUN_107413c78(lVar5 + 0x50,&uStack_80);
  FUN_1074137f8(lVar5 + 0x50,&puStack_60);
  if (*(char *)(lVar5 + 0x1164) == '\x01') {
    uStack_1090 = (undefined8 *)((ulong)uStack_1090 & 0xffffffffffffff00);
    func_0x0001074117a0();
    uStack_1030 = uStack_1030 & 0xffffffffffffff00;
    uStack_1028 = 0;
    FUN_107410058(lVar5,&uStack_1090);
  }
  lVar7 = *(long *)(lVar5 + 0x10f8);
  uVar4 = (undefined1)*(undefined8 *)(lVar7 + 8);
  func_0x0001077c5a6c();
  uStack_1090 = (undefined8 *)CONCAT71(uStack_1090._1_7_,uVar4);
  uStack_1090 = (undefined8 *)CONCAT44(*(undefined4 *)(lVar5 + 0x10d0),(undefined4)uStack_1090);
  uStack_1088 = CONCAT44(*(undefined4 *)(lVar5 + 0x10dc),*(undefined4 *)(lVar5 + 0x10d4));
  uStack_1080 = CONCAT71(uStack_1080._1_7_,*(undefined1 *)(lVar5 + 0x10e0));
  uStack_1078 = puStack_60;
  _memcpy(&ppuStack_1070,lVar5 + 0x58,0xe50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (auStack_220,*(long *)(lVar7 + 8) + 0x90);
  lVar7 = *(long *)(*(long *)(lVar5 + 0x10f8) + 8);
  uStack_208 = *(undefined1 *)(lVar7 + 0x22);
  uStack_1f8 = *(undefined8 *)(lVar7 + 0x1a0);
  uStack_200 = *(undefined8 *)(lVar7 + 0x198);
  uStack_1e0 = (undefined1)*(undefined8 *)(lVar7 + 0x1b8);
  uStack_1df = (undefined7)((ulong)*(undefined8 *)(lVar7 + 0x1b8) >> 8);
  uStack_1e8 = (undefined1)*(undefined8 *)(lVar7 + 0x1b0);
  uStack_1e7 = (undefined7)((ulong)*(undefined8 *)(lVar7 + 0x1b0) >> 8);
  uStack_1f0 = (undefined1)*(undefined8 *)(lVar7 + 0x1a8);
  uStack_1ef = (undefined7)((ulong)*(undefined8 *)(lVar7 + 0x1a8) >> 8);
  FUN_107411660(auStack_1d8,*(long *)(*(long *)(lVar5 + 0x10f8) + 8) + 0x108);
  puVar6 = &uStack_1090;
  uStack_150 = *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x10f8) + 8) + 400);
  lVar7 = *(long *)(*(long *)(lVar5 + 0x10f8) + 8);
  puVar8 = *(undefined8 **)(lVar7 + 0x1c0);
  lStack_140 = puVar8[1];
  uStack_148 = *puVar8;
  if (puVar8[1] != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_00;
    lVar7 = extraout_x9;
  }
  lStack_130 = *(long *)(lVar7 + 0xb0);
  uStack_138 = *(undefined8 *)(lVar7 + 0xa8);
  if (*(long *)(lVar7 + 0xb0) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_00 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_01;
    lVar7 = extraout_x9_00;
  }
  lStack_120 = *(long *)(lVar7 + 0xd8);
  uStack_128 = *(undefined8 *)(lVar7 + 0xd0);
  if (*(long *)(lVar7 + 0xd8) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_01 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_02;
    lVar7 = extraout_x9_01;
  }
  lStack_110 = *(long *)(lVar7 + 0x100);
  uStack_118 = *(undefined8 *)(lVar7 + 0xf8);
  if (*(long *)(lVar7 + 0x100) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_02 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_03;
    lVar7 = extraout_x9_02;
  }
  uStack_108 = *(undefined8 *)(lVar7 + 0x338);
  lStack_100 = *(long *)(lVar7 + 0x340);
  if (lStack_100 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_03 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_04;
    lVar7 = extraout_x9_03;
  }
  uStack_f8 = *(undefined8 *)(lVar7 + 0x348);
  lStack_f0 = *(long *)(lVar7 + 0x350);
  if (lStack_f0 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_04 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_05;
    lVar7 = extraout_x9_04;
  }
  uStack_e8 = *(undefined8 *)(lVar7 + 0x358);
  lStack_e0 = *(long *)(lVar7 + 0x360);
  if (lStack_e0 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_05 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_06;
    lVar7 = extraout_x9_05;
  }
  uStack_d8 = *(undefined8 *)(lVar7 + 0x368);
  lStack_d0 = *(long *)(lVar7 + 0x370);
  if (lStack_d0 != 0) {
    do {
      func_0x000107411734();
      puVar6 = extraout_x8_07;
    } while (extraout_w11_06 != 0);
  }
  uStack_c8 = *(undefined8 *)(lVar5 + 0x10e8);
  lStack_c0 = *(long *)(lVar5 + 0x10f0);
  if (lStack_c0 != 0) {
    do {
      func_0x000107411734();
      puVar6 = extraout_x8_08;
    } while (extraout_w11_07 != 0);
  }
  *(undefined1 *)(puVar6 + 0x1fb) = *(undefined1 *)(lVar5 + 0x1101);
  *(bool *)((long)puVar6 + 0xfd9) = *(long *)(lVar5 + 0x1108) != 0;
  *(undefined1 *)((long)puVar6 + 0xfda) = *(undefined1 *)(lVar5 + 0x10d8);
  uStack_ac = uStack_78;
  uStack_a8 = uStack_74;
  uStack_b4 = uStack_80;
  uStack_b0 = uStack_7c;
  uStack_9c = (undefined4)uStack_68;
  uStack_98 = (undefined4)((ulong)uStack_68 >> 0x20);
  uStack_a4 = (undefined4)uStack_70;
  uStack_a0 = (undefined4)((ulong)uStack_70 >> 0x20);
  uStack_88 = *(undefined8 *)(lVar5 + 0x1118);
  uStack_90 = *(undefined8 *)(lVar5 + 0x1110);
  if (*(long *)(lVar5 + 0x1118) != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10 != 0);
  }
  plVar10 = *(long **)(lVar5 + 0x38);
  puVar6 = (undefined8 *)0x1028;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_1109adf98;
  _memcpy(puVar6 + 3,&uStack_1090,0xe70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (puVar6 + 0x1d1,auStack_220);
  puVar6[0x1d5] = uStack_200;
  puVar6[0x1d4] = CONCAT71(uStack_207,uStack_208);
  puVar6[0x1d7] = CONCAT71(uStack_1ef,uStack_1f0);
  puVar6[0x1d6] = uStack_1f8;
  *(ulong *)((long)puVar6 + 0xec1) = CONCAT17(uStack_1e0,uStack_1e7);
  *(ulong *)((long)puVar6 + 0xeb9) = CONCAT17(uStack_1e8,uStack_1ef);
  FUN_107411660(puVar6 + 0x1da,auStack_1d8);
  puVar6[0x1eb] = uStack_150;
  puVar6[0x1ed] = lStack_140;
  puVar6[0x1ec] = uStack_148;
  if (lStack_140 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_00 != 0);
  }
  puVar6[0x1ef] = lStack_130;
  puVar6[0x1ee] = uStack_138;
  if (lStack_130 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_01 != 0);
  }
  puVar6[0x1f1] = lStack_120;
  puVar6[0x1f0] = uStack_128;
  if (lStack_120 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_02 != 0);
  }
  puVar6[499] = lStack_110;
  puVar6[0x1f2] = uStack_118;
  if (lStack_110 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_03 != 0);
  }
  puVar6[0x1f5] = lStack_100;
  puVar6[500] = uStack_108;
  if (lStack_100 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_04 != 0);
  }
  puVar6[0x1f7] = lStack_f0;
  puVar6[0x1f6] = uStack_f8;
  if (lStack_f0 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_05 != 0);
  }
  puVar6[0x1f9] = lStack_e0;
  puVar6[0x1f8] = uStack_e8;
  if (lStack_e0 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_06 != 0);
  }
  puVar6[0x1fb] = lStack_d0;
  puVar6[0x1fa] = uStack_d8;
  if (lStack_d0 != 0) {
    plVar1 = (long *)(lStack_d0 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar6[0x1fd] = lStack_c0;
  puVar6[0x1fc] = uStack_c8;
  puVar6[0x1ff] = CONCAT44(uStack_ac,uStack_b0);
  puVar6[0x1fe] = CONCAT44(uStack_b4,uStack_b8);
  uStack_c8 = 0;
  lStack_c0 = 0;
  puVar6[0x201] = CONCAT44(uStack_9c,uStack_a0);
  puVar6[0x200] = CONCAT44(uStack_a4,uStack_a8);
  *(undefined4 *)(puVar6 + 0x202) = uStack_98;
  puVar6[0x204] = uStack_88;
  puVar6[0x203] = uStack_90;
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_10a0 = puVar6 + 3;
  puStack_1098 = puVar6;
  (**(code **)(*plVar10 + 0x20))(plVar10,&puStack_10a0);
  func_0x00010725ab14(&puStack_10a0);
  func_0x000107410df4(&uStack_1090);
  return;
}



/* Entry: 10740e068; end: 10740e087;  */

void FUN_10740e068(long *param_1,undefined1 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  undefined8 *extraout_x8_06;
  undefined8 *extraout_x8_07;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  int extraout_w11_05;
  int extraout_w11_06;
  int extraout_w11_07;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  uint uVar12;
  undefined4 uVar14;
  undefined8 *puStack_10a0;
  undefined8 *puStack_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  undefined **ppuStack_1070;
  undefined8 uStack_1068;
  undefined8 uStack_1060;
  undefined8 uStack_1058;
  undefined4 uStack_1050;
  undefined4 uStack_1048;
  undefined1 uStack_1044;
  undefined8 uStack_1040;
  undefined8 uStack_1038;
  ulong uStack_1030;
  undefined1 uStack_1028;
  undefined1 auStack_220 [24];
  undefined1 uStack_208;
  undefined7 uStack_207;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 uStack_1f0;
  undefined7 uStack_1ef;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  undefined1 auStack_1d8 [136];
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined4 uStack_58;
  double dVar13;
  
  lVar5 = *param_1;
  *(undefined1 *)(lVar5 + 0xb7) = param_2;
  puVar7 = &UNK_10de67fc9;
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar5,&UNK_10de67fc9);
  uVar10 = *(undefined8 *)(lVar5 + 0x48);
  uStack_1090 = (undefined8 *)CONCAT44(uStack_1090._4_4_,0x76);
  uStack_1078 = (undefined8 *)((ulong)uStack_1078._4_4_ << 0x20);
  uStack_1060 = 0;
  uStack_1058 = 0;
  ppuStack_1070 = &PTR_DAT_110996720;
  uStack_1068 = 0;
  uStack_1050 = 0x76;
  uStack_1048 = 0;
  uStack_1044 = 1;
  uStack_1038 = 0;
  uStack_1030 = 0;
  uStack_1040 = 0;
  puVar6 = &uStack_1090;
  func_0x00010729d56c(puVar6,"reason",puVar7);
  uStack_80 = 1;
  uStack_78 = 0;
  puStack_60 = (undefined8 *)**(undefined8 **)(lVar5 + 0x48);
  uStack_58 = 3;
  FUN_10743fa9c(uVar10,puVar6,&uStack_80,&puStack_60,7);
  puVar6 = &uStack_1090;
  func_0x000107262330();
  if (*(int *)(lVar5 + 0x10d0) == 0) {
    __ZNSt3__16chrono12steady_clock3nowEv();
  }
  else {
    puVar6 = (undefined8 *)0x7fffffffffffffff;
  }
  lVar8 = *(long *)(*(long *)(lVar5 + 0x10f8) + 8);
  uStack_1080 = *(undefined8 *)(lVar8 + 0x1a0);
  uStack_1088 = *(undefined8 *)(lVar8 + 0x198);
  ppuStack_1070 = *(undefined ***)(lVar8 + 0x1b0);
  uStack_1078 = *(undefined8 **)(lVar8 + 0x1a8);
  uStack_1068 = *(undefined8 *)(lVar8 + 0x1b8);
  uStack_1090 = puVar6;
  puStack_60 = puVar6;
  if (*(long *)(lVar5 + 0x1168) != **(long **)(lVar8 + 0x1c8)) {
    func_0x000107410e94(lVar5 + 0x1168);
    FUN_1074e31dc(lVar5 + 0x1168,&uStack_1090);
  }
  uVar12 = NEON_ucvtf(*(undefined4 *)(lVar5 + 0xa4));
  dVar13 = (double)(ulong)uVar12;
  uVar14 = NEON_ucvtf(*(undefined4 *)(lVar5 + 0xa8));
  *(uint *)(lVar5 + 0x143c) = uVar12;
  *(undefined4 *)(lVar5 + 0x1440) = uVar14;
  func_0x000107411798();
  FUN_1074e33b8((float)dVar13,lVar5 + 0x1168);
  FUN_1074e3804(&uStack_80,lVar5 + 0x1168);
  FUN_107413c78(lVar5 + 0x50,&uStack_80);
  FUN_1074137f8(lVar5 + 0x50,&puStack_60);
  if (*(char *)(lVar5 + 0x1164) == '\x01') {
    uStack_1090 = (undefined8 *)((ulong)uStack_1090 & 0xffffffffffffff00);
    func_0x0001074117a0();
    uStack_1030 = uStack_1030 & 0xffffffffffffff00;
    uStack_1028 = 0;
    FUN_107410058(lVar5,&uStack_1090);
  }
  lVar8 = *(long *)(lVar5 + 0x10f8);
  uVar4 = (undefined1)*(undefined8 *)(lVar8 + 8);
  func_0x0001077c5a6c();
  uStack_1090 = (undefined8 *)CONCAT71(uStack_1090._1_7_,uVar4);
  uStack_1090 = (undefined8 *)CONCAT44(*(undefined4 *)(lVar5 + 0x10d0),(undefined4)uStack_1090);
  uStack_1088 = CONCAT44(*(undefined4 *)(lVar5 + 0x10dc),*(undefined4 *)(lVar5 + 0x10d4));
  uStack_1080 = CONCAT71(uStack_1080._1_7_,*(undefined1 *)(lVar5 + 0x10e0));
  uStack_1078 = puStack_60;
  _memcpy(&ppuStack_1070,lVar5 + 0x58,0xe50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (auStack_220,*(long *)(lVar8 + 8) + 0x90);
  lVar8 = *(long *)(*(long *)(lVar5 + 0x10f8) + 8);
  uStack_208 = *(undefined1 *)(lVar8 + 0x22);
  uStack_1f8 = *(undefined8 *)(lVar8 + 0x1a0);
  uStack_200 = *(undefined8 *)(lVar8 + 0x198);
  uStack_1e0 = (undefined1)*(undefined8 *)(lVar8 + 0x1b8);
  uStack_1df = (undefined7)((ulong)*(undefined8 *)(lVar8 + 0x1b8) >> 8);
  uStack_1e8 = (undefined1)*(undefined8 *)(lVar8 + 0x1b0);
  uStack_1e7 = (undefined7)((ulong)*(undefined8 *)(lVar8 + 0x1b0) >> 8);
  uStack_1f0 = (undefined1)*(undefined8 *)(lVar8 + 0x1a8);
  uStack_1ef = (undefined7)((ulong)*(undefined8 *)(lVar8 + 0x1a8) >> 8);
  FUN_107411660(auStack_1d8,*(long *)(*(long *)(lVar5 + 0x10f8) + 8) + 0x108);
  puVar6 = &uStack_1090;
  uStack_150 = *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x10f8) + 8) + 400);
  lVar8 = *(long *)(*(long *)(lVar5 + 0x10f8) + 8);
  puVar9 = *(undefined8 **)(lVar8 + 0x1c0);
  lStack_140 = puVar9[1];
  uStack_148 = *puVar9;
  if (puVar9[1] != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8;
    lVar8 = extraout_x9;
  }
  lStack_130 = *(long *)(lVar8 + 0xb0);
  uStack_138 = *(undefined8 *)(lVar8 + 0xa8);
  if (*(long *)(lVar8 + 0xb0) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_00 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_00;
    lVar8 = extraout_x9_00;
  }
  lStack_120 = *(long *)(lVar8 + 0xd8);
  uStack_128 = *(undefined8 *)(lVar8 + 0xd0);
  if (*(long *)(lVar8 + 0xd8) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_01 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_01;
    lVar8 = extraout_x9_01;
  }
  lStack_110 = *(long *)(lVar8 + 0x100);
  uStack_118 = *(undefined8 *)(lVar8 + 0xf8);
  if (*(long *)(lVar8 + 0x100) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_02 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_02;
    lVar8 = extraout_x9_02;
  }
  uStack_108 = *(undefined8 *)(lVar8 + 0x338);
  lStack_100 = *(long *)(lVar8 + 0x340);
  if (lStack_100 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_03 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_03;
    lVar8 = extraout_x9_03;
  }
  uStack_f8 = *(undefined8 *)(lVar8 + 0x348);
  lStack_f0 = *(long *)(lVar8 + 0x350);
  if (lStack_f0 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_04 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_04;
    lVar8 = extraout_x9_04;
  }
  uStack_e8 = *(undefined8 *)(lVar8 + 0x358);
  lStack_e0 = *(long *)(lVar8 + 0x360);
  if (lStack_e0 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_05 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_05;
    lVar8 = extraout_x9_05;
  }
  uStack_d8 = *(undefined8 *)(lVar8 + 0x368);
  lStack_d0 = *(long *)(lVar8 + 0x370);
  if (lStack_d0 != 0) {
    do {
      func_0x000107411734();
      puVar6 = extraout_x8_06;
    } while (extraout_w11_06 != 0);
  }
  uStack_c8 = *(undefined8 *)(lVar5 + 0x10e8);
  lStack_c0 = *(long *)(lVar5 + 0x10f0);
  if (lStack_c0 != 0) {
    do {
      func_0x000107411734();
      puVar6 = extraout_x8_07;
    } while (extraout_w11_07 != 0);
  }
  *(undefined1 *)(puVar6 + 0x1fb) = *(undefined1 *)(lVar5 + 0x1101);
  *(bool *)((long)puVar6 + 0xfd9) = *(long *)(lVar5 + 0x1108) != 0;
  *(undefined1 *)((long)puVar6 + 0xfda) = *(undefined1 *)(lVar5 + 0x10d8);
  uStack_ac = uStack_78;
  uStack_a8 = uStack_74;
  uStack_b4 = uStack_80;
  uStack_b0 = uStack_7c;
  uStack_9c = (undefined4)uStack_68;
  uStack_98 = (undefined4)((ulong)uStack_68 >> 0x20);
  uStack_a4 = (undefined4)uStack_70;
  uStack_a0 = (undefined4)((ulong)uStack_70 >> 0x20);
  uStack_88 = *(undefined8 *)(lVar5 + 0x1118);
  uStack_90 = *(undefined8 *)(lVar5 + 0x1110);
  if (*(long *)(lVar5 + 0x1118) != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10 != 0);
  }
  plVar11 = *(long **)(lVar5 + 0x38);
  puVar6 = (undefined8 *)0x1028;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_1109adf98;
  _memcpy(puVar6 + 3,&uStack_1090,0xe70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (puVar6 + 0x1d1,auStack_220);
  puVar6[0x1d5] = uStack_200;
  puVar6[0x1d4] = CONCAT71(uStack_207,uStack_208);
  puVar6[0x1d7] = CONCAT71(uStack_1ef,uStack_1f0);
  puVar6[0x1d6] = uStack_1f8;
  *(ulong *)((long)puVar6 + 0xec1) = CONCAT17(uStack_1e0,uStack_1e7);
  *(ulong *)((long)puVar6 + 0xeb9) = CONCAT17(uStack_1e8,uStack_1ef);
  FUN_107411660(puVar6 + 0x1da,auStack_1d8);
  puVar6[0x1eb] = uStack_150;
  puVar6[0x1ed] = lStack_140;
  puVar6[0x1ec] = uStack_148;
  if (lStack_140 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_00 != 0);
  }
  puVar6[0x1ef] = lStack_130;
  puVar6[0x1ee] = uStack_138;
  if (lStack_130 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_01 != 0);
  }
  puVar6[0x1f1] = lStack_120;
  puVar6[0x1f0] = uStack_128;
  if (lStack_120 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_02 != 0);
  }
  puVar6[499] = lStack_110;
  puVar6[0x1f2] = uStack_118;
  if (lStack_110 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_03 != 0);
  }
  puVar6[0x1f5] = lStack_100;
  puVar6[500] = uStack_108;
  if (lStack_100 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_04 != 0);
  }
  puVar6[0x1f7] = lStack_f0;
  puVar6[0x1f6] = uStack_f8;
  if (lStack_f0 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_05 != 0);
  }
  puVar6[0x1f9] = lStack_e0;
  puVar6[0x1f8] = uStack_e8;
  if (lStack_e0 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_06 != 0);
  }
  puVar6[0x1fb] = lStack_d0;
  puVar6[0x1fa] = uStack_d8;
  if (lStack_d0 != 0) {
    plVar1 = (long *)(lStack_d0 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar6[0x1fd] = lStack_c0;
  puVar6[0x1fc] = uStack_c8;
  puVar6[0x1ff] = CONCAT44(uStack_ac,uStack_b0);
  puVar6[0x1fe] = CONCAT44(uStack_b4,uStack_b8);
  uStack_c8 = 0;
  lStack_c0 = 0;
  puVar6[0x201] = CONCAT44(uStack_9c,uStack_a0);
  puVar6[0x200] = CONCAT44(uStack_a4,uStack_a8);
  *(undefined4 *)(puVar6 + 0x202) = uStack_98;
  puVar6[0x204] = uStack_88;
  puVar6[0x203] = uStack_90;
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_10a0 = puVar6 + 3;
  puStack_1098 = puVar6;
  (**(code **)(*plVar11 + 0x20))(plVar11,&puStack_10a0);
  func_0x00010725ab14(&puStack_10a0);
  func_0x000107410df4(&uStack_1090);
  return;
}



/* Entry: 10740e088; end: 10740e0ef;  */

void FUN_10740e088(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_e0 [32];
  undefined1 uStack_c0;
  undefined1 auStack_b8 [136];
  
  lVar1 = *param_2;
  uVar2 = *(undefined8 *)(lVar1 + 0xd0);
  _log2();
  *param_1 = uVar2;
  auStack_e0[0] = 0;
  uStack_c0 = 0;
  FUN_1074177d4(auStack_b8,lVar1 + 0x58,auStack_e0);
  FUN_10740e0f0(param_1 + 1,param_2,auStack_b8);
  return;
}



/* Entry: 10740e0f0; end: 10740e217;  */

void FUN_10740e0f0(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  undefined1 *puVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  double *pdVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar10;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  undefined8 *extraout_x8_06;
  undefined8 *extraout_x8_07;
  undefined8 *extraout_x8_08;
  undefined8 *extraout_x8_09;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  int extraout_w11_05;
  int extraout_w11_06;
  int extraout_w11_07;
  undefined8 *puVar11;
  undefined *puVar12;
  long *plVar13;
  undefined *puVar14;
  uint uVar15;
  double dVar16;
  undefined4 uVar17;
  double dVar18;
  undefined8 *puStack_21b0;
  undefined8 *puStack_21a8;
  undefined8 uStack_21a0;
  undefined8 uStack_2198;
  undefined8 uStack_2190;
  undefined8 uStack_2188;
  undefined **ppuStack_2180;
  undefined8 uStack_2178;
  undefined8 uStack_2170;
  undefined8 uStack_2168;
  undefined4 uStack_2160;
  undefined4 uStack_2158;
  undefined1 uStack_2154;
  undefined8 uStack_2150;
  undefined8 uStack_2148;
  ulong uStack_2140;
  undefined1 uStack_2138;
  undefined1 auStack_1330 [24];
  undefined1 uStack_1318;
  undefined7 uStack_1317;
  undefined8 uStack_1310;
  undefined8 uStack_1308;
  undefined1 uStack_1300;
  undefined7 uStack_12ff;
  undefined1 uStack_12f8;
  undefined7 uStack_12f7;
  undefined1 uStack_12f0;
  undefined7 uStack_12ef;
  undefined1 auStack_12e8 [136];
  undefined8 uStack_1260;
  undefined8 uStack_1258;
  long lStack_1250;
  undefined8 uStack_1248;
  long lStack_1240;
  undefined8 uStack_1238;
  long lStack_1230;
  undefined8 uStack_1228;
  long lStack_1220;
  undefined8 uStack_1218;
  long lStack_1210;
  undefined8 uStack_1208;
  long lStack_1200;
  undefined8 uStack_11f8;
  long lStack_11f0;
  undefined8 uStack_11e8;
  long lStack_11e0;
  undefined *puStack_11d8;
  undefined *puStack_11d0;
  undefined4 uStack_11c8;
  undefined4 uStack_11c4;
  undefined4 uStack_11c0;
  undefined4 uStack_11bc;
  undefined4 uStack_11b8;
  undefined4 uStack_11b4;
  undefined4 uStack_11b0;
  undefined4 uStack_11ac;
  undefined4 uStack_11a8;
  undefined *puStack_11a0;
  undefined *puStack_1198;
  undefined4 uStack_1190;
  undefined4 uStack_118c;
  undefined4 uStack_1188;
  undefined4 uStack_1184;
  undefined8 uStack_1180;
  undefined8 uStack_1178;
  undefined8 *puStack_1170;
  undefined4 uStack_1168;
  double dStack_1108;
  double dStack_1100;
  double dStack_10f8;
  double dStack_10f0;
  undefined8 uStack_10e8;
  undefined8 uStack_10e0;
  undefined8 uStack_10d8;
  undefined8 uStack_10d0;
  undefined **ppuStack_10c8;
  undefined1 auStack_10c0 [76];
  uint uStack_1074;
  uint uStack_1070;
  undefined8 uStack_270;
  undefined8 uStack_248;
  undefined8 uStack_228;
  undefined1 *puStack_220;
  undefined1 uStack_218;
  undefined1 uStack_1f8;
  undefined1 uStack_1f0;
  undefined1 uStack_118;
  undefined1 uStack_110;
  undefined1 uStack_50;
  undefined8 uStack_48;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x00010740f448();
  ppuStack_10c8 = &PTR_PTR_1131ad558;
  puVar5 = auStack_10c0;
  uStack_48 = extraout_x8_00;
  func_0x00010740f3bc(puVar5,*param_3 + 0x58);
  uStack_270 = 0;
  uStack_248 = 0;
  uStack_228 = 0;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_218 = 0;
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_50 = 0;
  puStack_220 = puVar5;
  FUN_107411f4c(&ppuStack_10c8,param_4);
  uStack_10e8 = 0;
  uStack_10e0 = 0;
  func_0x00010740f460(&ppuStack_10c8,&uStack_10e8);
  dVar16 = (double)uStack_1074;
  dVar18 = (double)uStack_1070;
  dStack_1108 = dVar16;
  dStack_1100 = dVar18;
  uStack_10d8 = param_1;
  uStack_10d0 = param_2;
  func_0x00010740f460(&ppuStack_10c8,&dStack_1108);
  pdVar9 = &dStack_10f8;
  dStack_10f8 = dVar16;
  dStack_10f0 = dVar18;
  func_0x00010725ac68(extraout_x8,&uStack_10d8,pdVar9);
  FUN_10740ee14();
  func_0x00010740f3cc(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pppuVar6 = &ppuStack_10c8;
    FUN_10740ee14();
    func_0x00010740f3c4();
    func_0x000107875d2c(&UNK_10f410380);
    ppuVar7 = *pppuVar6;
    *(undefined1 *)(ppuVar7 + 0x220) = 1;
    FUN_107411f4c(ppuVar7 + 10,pdVar9);
    puVar14 = &UNK_10de68262;
    (*(code *)PTR____chkstk_darwin_11034bd40)(ppuVar7,&UNK_10de68262);
    puVar12 = ppuVar7[9];
    uStack_21a0 = (undefined8 *)CONCAT44(uStack_21a0._4_4_,0x76);
    uStack_2188 = (undefined8 *)((ulong)uStack_2188._4_4_ << 0x20);
    uStack_2170 = 0;
    uStack_2168 = 0;
    ppuStack_2180 = &PTR_DAT_110996720;
    uStack_2178 = 0;
    uStack_2160 = 0x76;
    uStack_2158 = 0;
    uStack_2154 = 1;
    uStack_2148 = 0;
    uStack_2140 = 0;
    uStack_2150 = 0;
    puVar8 = &uStack_21a0;
    func_0x00010729d56c(puVar8,"reason",puVar14);
    uStack_1190 = 1;
    uStack_1188 = 0;
    puStack_1170 = *(undefined8 **)ppuVar7[9];
    uStack_1168 = 3;
    FUN_10743fa9c(puVar12,puVar8,&uStack_1190,&puStack_1170,7);
    puVar8 = &uStack_21a0;
    func_0x000107262330();
    if (*(int *)(ppuVar7 + 0x21a) == 0) {
      __ZNSt3__16chrono12steady_clock3nowEv();
    }
    else {
      puVar8 = (undefined8 *)0x7fffffffffffffff;
    }
    lVar10 = *(long *)(ppuVar7[0x21f] + 8);
    uStack_2190 = *(undefined8 *)(lVar10 + 0x1a0);
    uStack_2198 = *(undefined8 *)(lVar10 + 0x198);
    ppuStack_2180 = *(undefined ***)(lVar10 + 0x1b0);
    uStack_2188 = *(undefined8 **)(lVar10 + 0x1a8);
    uStack_2178 = *(undefined8 *)(lVar10 + 0x1b8);
    uStack_21a0 = puVar8;
    puStack_1170 = puVar8;
    if (ppuVar7[0x22d] != (undefined *)**(undefined8 **)(lVar10 + 0x1c8)) {
      func_0x000107410e94(ppuVar7 + 0x22d);
      FUN_1074e31dc(ppuVar7 + 0x22d,&uStack_21a0);
    }
    uVar15 = NEON_ucvtf(*(undefined4 *)((long)ppuVar7 + 0xa4));
    dVar16 = (double)(ulong)uVar15;
    uVar17 = NEON_ucvtf(*(undefined4 *)(ppuVar7 + 0x15));
    *(uint *)((long)ppuVar7 + 0x143c) = uVar15;
    *(undefined4 *)(ppuVar7 + 0x288) = uVar17;
    func_0x000107411798();
    FUN_1074e33b8((float)dVar16,ppuVar7 + 0x22d);
    FUN_1074e3804(&uStack_1190,ppuVar7 + 0x22d);
    FUN_107413c78(ppuVar7 + 10,&uStack_1190);
    FUN_1074137f8(ppuVar7 + 10,&puStack_1170);
    if (*(char *)((long)ppuVar7 + 0x1164) == '\x01') {
      uStack_21a0 = (undefined8 *)((ulong)uStack_21a0 & 0xffffffffffffff00);
      func_0x0001074117a0();
      uStack_2140 = uStack_2140 & 0xffffffffffffff00;
      uStack_2138 = 0;
      FUN_107410058(ppuVar7,&uStack_21a0);
    }
    puVar14 = ppuVar7[0x21f];
    uVar4 = (undefined1)*(undefined8 *)(puVar14 + 8);
    func_0x0001077c5a6c();
    uStack_21a0 = (undefined8 *)CONCAT71(uStack_21a0._1_7_,uVar4);
    uStack_21a0 = (undefined8 *)CONCAT44(*(undefined4 *)(ppuVar7 + 0x21a),(undefined4)uStack_21a0);
    uStack_2198 = CONCAT44(*(undefined4 *)((long)ppuVar7 + 0x10dc),
                           *(undefined4 *)((long)ppuVar7 + 0x10d4));
    uStack_2190 = CONCAT71(uStack_2190._1_7_,*(undefined1 *)(ppuVar7 + 0x21c));
    uStack_2188 = puStack_1170;
    _memcpy(&ppuStack_2180,ppuVar7 + 0xb,0xe50);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_1330,*(long *)(puVar14 + 8) + 0x90);
    lVar10 = *(long *)(ppuVar7[0x21f] + 8);
    uStack_1318 = *(undefined1 *)(lVar10 + 0x22);
    uStack_1308 = *(undefined8 *)(lVar10 + 0x1a0);
    uStack_1310 = *(undefined8 *)(lVar10 + 0x198);
    uStack_12f0 = (undefined1)*(undefined8 *)(lVar10 + 0x1b8);
    uStack_12ef = (undefined7)((ulong)*(undefined8 *)(lVar10 + 0x1b8) >> 8);
    uStack_12f8 = (undefined1)*(undefined8 *)(lVar10 + 0x1b0);
    uStack_12f7 = (undefined7)((ulong)*(undefined8 *)(lVar10 + 0x1b0) >> 8);
    uStack_1300 = (undefined1)*(undefined8 *)(lVar10 + 0x1a8);
    uStack_12ff = (undefined7)((ulong)*(undefined8 *)(lVar10 + 0x1a8) >> 8);
    FUN_107411660(auStack_12e8,*(long *)(ppuVar7[0x21f] + 8) + 0x108);
    puVar8 = &uStack_21a0;
    uStack_1260 = *(undefined8 *)(*(long *)(ppuVar7[0x21f] + 8) + 400);
    lVar10 = *(long *)(ppuVar7[0x21f] + 8);
    puVar11 = *(undefined8 **)(lVar10 + 0x1c0);
    lStack_1250 = puVar11[1];
    uStack_1258 = *puVar11;
    if (puVar11[1] != 0) {
      do {
        func_0x000107411734();
      } while (extraout_w11 != 0);
      func_0x0001074117c0();
      puVar8 = extraout_x8_01;
      lVar10 = extraout_x9;
    }
    lStack_1240 = *(long *)(lVar10 + 0xb0);
    uStack_1248 = *(undefined8 *)(lVar10 + 0xa8);
    if (*(long *)(lVar10 + 0xb0) != 0) {
      do {
        func_0x000107411734();
      } while (extraout_w11_00 != 0);
      func_0x0001074117c0();
      puVar8 = extraout_x8_02;
      lVar10 = extraout_x9_00;
    }
    lStack_1230 = *(long *)(lVar10 + 0xd8);
    uStack_1238 = *(undefined8 *)(lVar10 + 0xd0);
    if (*(long *)(lVar10 + 0xd8) != 0) {
      do {
        func_0x000107411734();
      } while (extraout_w11_01 != 0);
      func_0x0001074117c0();
      puVar8 = extraout_x8_03;
      lVar10 = extraout_x9_01;
    }
    lStack_1220 = *(long *)(lVar10 + 0x100);
    uStack_1228 = *(undefined8 *)(lVar10 + 0xf8);
    if (*(long *)(lVar10 + 0x100) != 0) {
      do {
        func_0x000107411734();
      } while (extraout_w11_02 != 0);
      func_0x0001074117c0();
      puVar8 = extraout_x8_04;
      lVar10 = extraout_x9_02;
    }
    uStack_1218 = *(undefined8 *)(lVar10 + 0x338);
    lStack_1210 = *(long *)(lVar10 + 0x340);
    if (lStack_1210 != 0) {
      do {
        func_0x000107411734();
      } while (extraout_w11_03 != 0);
      func_0x0001074117c0();
      puVar8 = extraout_x8_05;
      lVar10 = extraout_x9_03;
    }
    uStack_1208 = *(undefined8 *)(lVar10 + 0x348);
    lStack_1200 = *(long *)(lVar10 + 0x350);
    if (lStack_1200 != 0) {
      do {
        func_0x000107411734();
      } while (extraout_w11_04 != 0);
      func_0x0001074117c0();
      puVar8 = extraout_x8_06;
      lVar10 = extraout_x9_04;
    }
    uStack_11f8 = *(undefined8 *)(lVar10 + 0x358);
    lStack_11f0 = *(long *)(lVar10 + 0x360);
    if (lStack_11f0 != 0) {
      do {
        func_0x000107411734();
      } while (extraout_w11_05 != 0);
      func_0x0001074117c0();
      puVar8 = extraout_x8_07;
      lVar10 = extraout_x9_05;
    }
    uStack_11e8 = *(undefined8 *)(lVar10 + 0x368);
    lStack_11e0 = *(long *)(lVar10 + 0x370);
    if (lStack_11e0 != 0) {
      do {
        func_0x000107411734();
        puVar8 = extraout_x8_08;
      } while (extraout_w11_06 != 0);
    }
    puStack_11d8 = ppuVar7[0x21d];
    puStack_11d0 = ppuVar7[0x21e];
    if (puStack_11d0 != (undefined *)0x0) {
      do {
        func_0x000107411734();
        puVar8 = extraout_x8_09;
      } while (extraout_w11_07 != 0);
    }
    *(undefined1 *)(puVar8 + 0x1fb) = *(undefined1 *)((long)ppuVar7 + 0x1101);
    *(bool *)((long)puVar8 + 0xfd9) = ppuVar7[0x221] != (undefined *)0x0;
    *(undefined1 *)((long)puVar8 + 0xfda) = *(undefined1 *)(ppuVar7 + 0x21b);
    uStack_11bc = uStack_1188;
    uStack_11b8 = uStack_1184;
    uStack_11c4 = uStack_1190;
    uStack_11c0 = uStack_118c;
    uStack_11ac = (undefined4)uStack_1178;
    uStack_11a8 = (undefined4)((ulong)uStack_1178 >> 0x20);
    uStack_11b4 = (undefined4)uStack_1180;
    uStack_11b0 = (undefined4)((ulong)uStack_1180 >> 0x20);
    puStack_1198 = ppuVar7[0x223];
    puStack_11a0 = ppuVar7[0x222];
    if (ppuVar7[0x223] != (undefined *)0x0) {
      do {
        func_0x000107411724();
      } while (extraout_w10 != 0);
    }
    plVar13 = (long *)ppuVar7[7];
    puVar8 = (undefined8 *)0x1028;
    __Znwm();
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = &PTR_FUN_1109adf98;
    _memcpy(puVar8 + 3,&uStack_21a0,0xe70);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (puVar8 + 0x1d1,auStack_1330);
    puVar8[0x1d5] = uStack_1310;
    puVar8[0x1d4] = CONCAT71(uStack_1317,uStack_1318);
    puVar8[0x1d7] = CONCAT71(uStack_12ff,uStack_1300);
    puVar8[0x1d6] = uStack_1308;
    *(ulong *)((long)puVar8 + 0xec1) = CONCAT17(uStack_12f0,uStack_12f7);
    *(ulong *)((long)puVar8 + 0xeb9) = CONCAT17(uStack_12f8,uStack_12ff);
    FUN_107411660(puVar8 + 0x1da,auStack_12e8);
    puVar8[0x1eb] = uStack_1260;
    puVar8[0x1ed] = lStack_1250;
    puVar8[0x1ec] = uStack_1258;
    if (lStack_1250 != 0) {
      do {
        func_0x000107411724();
      } while (extraout_w10_00 != 0);
    }
    puVar8[0x1ef] = lStack_1240;
    puVar8[0x1ee] = uStack_1248;
    if (lStack_1240 != 0) {
      do {
        func_0x000107411724();
      } while (extraout_w10_01 != 0);
    }
    puVar8[0x1f1] = lStack_1230;
    puVar8[0x1f0] = uStack_1238;
    if (lStack_1230 != 0) {
      do {
        func_0x000107411724();
      } while (extraout_w10_02 != 0);
    }
    puVar8[499] = lStack_1220;
    puVar8[0x1f2] = uStack_1228;
    if (lStack_1220 != 0) {
      do {
        func_0x000107411724();
      } while (extraout_w10_03 != 0);
    }
    puVar8[0x1f5] = lStack_1210;
    puVar8[500] = uStack_1218;
    if (lStack_1210 != 0) {
      do {
        func_0x000107411724();
      } while (extraout_w10_04 != 0);
    }
    puVar8[0x1f7] = lStack_1200;
    puVar8[0x1f6] = uStack_1208;
    if (lStack_1200 != 0) {
      do {
        func_0x000107411724();
      } while (extraout_w10_05 != 0);
    }
    puVar8[0x1f9] = lStack_11f0;
    puVar8[0x1f8] = uStack_11f8;
    if (lStack_11f0 != 0) {
      do {
        func_0x000107411724();
      } while (extraout_w10_06 != 0);
    }
    puVar8[0x1fb] = lStack_11e0;
    puVar8[0x1fa] = uStack_11e8;
    if (lStack_11e0 != 0) {
      plVar1 = (long *)(lStack_11e0 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar8[0x1fd] = puStack_11d0;
    puVar8[0x1fc] = puStack_11d8;
    puVar8[0x1ff] = CONCAT44(uStack_11bc,uStack_11c0);
    puVar8[0x1fe] = CONCAT44(uStack_11c4,uStack_11c8);
    puStack_11d8 = (undefined *)0x0;
    puStack_11d0 = (undefined *)0x0;
    puVar8[0x201] = CONCAT44(uStack_11ac,uStack_11b0);
    puVar8[0x200] = CONCAT44(uStack_11b4,uStack_11b8);
    *(undefined4 *)(puVar8 + 0x202) = uStack_11a8;
    puVar8[0x204] = puStack_1198;
    puVar8[0x203] = puStack_11a0;
    puStack_11a0 = (undefined *)0x0;
    puStack_1198 = (undefined *)0x0;
    puStack_21b0 = puVar8 + 3;
    puStack_21a8 = puVar8;
    (**(code **)(*plVar13 + 0x20))(plVar13,&puStack_21b0);
    func_0x00010725ab14(&puStack_21b0);
    func_0x000107410df4(&uStack_21a0);
    return;
  }
  return;
}



/* Entry: 10740e218; end: 10740e24b;  */

void FUN_10740e218(long *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  undefined8 *extraout_x8_06;
  undefined8 *extraout_x8_07;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  int extraout_w11_05;
  int extraout_w11_06;
  int extraout_w11_07;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  uint uVar12;
  undefined4 uVar14;
  undefined8 *puStack_10a0;
  undefined8 *puStack_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  undefined **ppuStack_1070;
  undefined8 uStack_1068;
  undefined8 uStack_1060;
  undefined8 uStack_1058;
  undefined4 uStack_1050;
  undefined4 uStack_1048;
  undefined1 uStack_1044;
  undefined8 uStack_1040;
  undefined8 uStack_1038;
  ulong uStack_1030;
  undefined1 uStack_1028;
  undefined1 auStack_220 [24];
  undefined1 uStack_208;
  undefined7 uStack_207;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 uStack_1f0;
  undefined7 uStack_1ef;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  undefined1 auStack_1d8 [136];
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined4 uStack_58;
  double dVar13;
  
  func_0x000107875d2c(&UNK_10f410380);
  lVar5 = *param_1;
  *(undefined1 *)(lVar5 + 0x1100) = 1;
  FUN_107411f4c(lVar5 + 0x50,param_2);
  puVar7 = &UNK_10de68262;
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar5,&UNK_10de68262);
  uVar10 = *(undefined8 *)(lVar5 + 0x48);
  uStack_1090 = (undefined8 *)CONCAT44(uStack_1090._4_4_,0x76);
  uStack_1078 = (undefined8 *)((ulong)uStack_1078._4_4_ << 0x20);
  uStack_1060 = 0;
  uStack_1058 = 0;
  ppuStack_1070 = &PTR_DAT_110996720;
  uStack_1068 = 0;
  uStack_1050 = 0x76;
  uStack_1048 = 0;
  uStack_1044 = 1;
  uStack_1038 = 0;
  uStack_1030 = 0;
  uStack_1040 = 0;
  puVar6 = &uStack_1090;
  func_0x00010729d56c(puVar6,"reason",puVar7);
  uStack_80 = 1;
  uStack_78 = 0;
  puStack_60 = (undefined8 *)**(undefined8 **)(lVar5 + 0x48);
  uStack_58 = 3;
  FUN_10743fa9c(uVar10,puVar6,&uStack_80,&puStack_60,7);
  puVar6 = &uStack_1090;
  func_0x000107262330();
  if (*(int *)(lVar5 + 0x10d0) == 0) {
    __ZNSt3__16chrono12steady_clock3nowEv();
  }
  else {
    puVar6 = (undefined8 *)0x7fffffffffffffff;
  }
  lVar8 = *(long *)(*(long *)(lVar5 + 0x10f8) + 8);
  uStack_1080 = *(undefined8 *)(lVar8 + 0x1a0);
  uStack_1088 = *(undefined8 *)(lVar8 + 0x198);
  ppuStack_1070 = *(undefined ***)(lVar8 + 0x1b0);
  uStack_1078 = *(undefined8 **)(lVar8 + 0x1a8);
  uStack_1068 = *(undefined8 *)(lVar8 + 0x1b8);
  uStack_1090 = puVar6;
  puStack_60 = puVar6;
  if (*(long *)(lVar5 + 0x1168) != **(long **)(lVar8 + 0x1c8)) {
    func_0x000107410e94(lVar5 + 0x1168);
    FUN_1074e31dc(lVar5 + 0x1168,&uStack_1090);
  }
  uVar12 = NEON_ucvtf(*(undefined4 *)(lVar5 + 0xa4));
  dVar13 = (double)(ulong)uVar12;
  uVar14 = NEON_ucvtf(*(undefined4 *)(lVar5 + 0xa8));
  *(uint *)(lVar5 + 0x143c) = uVar12;
  *(undefined4 *)(lVar5 + 0x1440) = uVar14;
  func_0x000107411798();
  FUN_1074e33b8((float)dVar13,lVar5 + 0x1168);
  FUN_1074e3804(&uStack_80,lVar5 + 0x1168);
  FUN_107413c78(lVar5 + 0x50,&uStack_80);
  FUN_1074137f8(lVar5 + 0x50,&puStack_60);
  if (*(char *)(lVar5 + 0x1164) == '\x01') {
    uStack_1090 = (undefined8 *)((ulong)uStack_1090 & 0xffffffffffffff00);
    func_0x0001074117a0();
    uStack_1030 = uStack_1030 & 0xffffffffffffff00;
    uStack_1028 = 0;
    FUN_107410058(lVar5,&uStack_1090);
  }
  lVar8 = *(long *)(lVar5 + 0x10f8);
  uVar4 = (undefined1)*(undefined8 *)(lVar8 + 8);
  func_0x0001077c5a6c();
  uStack_1090 = (undefined8 *)CONCAT71(uStack_1090._1_7_,uVar4);
  uStack_1090 = (undefined8 *)CONCAT44(*(undefined4 *)(lVar5 + 0x10d0),(undefined4)uStack_1090);
  uStack_1088 = CONCAT44(*(undefined4 *)(lVar5 + 0x10dc),*(undefined4 *)(lVar5 + 0x10d4));
  uStack_1080 = CONCAT71(uStack_1080._1_7_,*(undefined1 *)(lVar5 + 0x10e0));
  uStack_1078 = puStack_60;
  _memcpy(&ppuStack_1070,lVar5 + 0x58,0xe50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (auStack_220,*(long *)(lVar8 + 8) + 0x90);
  lVar8 = *(long *)(*(long *)(lVar5 + 0x10f8) + 8);
  uStack_208 = *(undefined1 *)(lVar8 + 0x22);
  uStack_1f8 = *(undefined8 *)(lVar8 + 0x1a0);
  uStack_200 = *(undefined8 *)(lVar8 + 0x198);
  uStack_1e0 = (undefined1)*(undefined8 *)(lVar8 + 0x1b8);
  uStack_1df = (undefined7)((ulong)*(undefined8 *)(lVar8 + 0x1b8) >> 8);
  uStack_1e8 = (undefined1)*(undefined8 *)(lVar8 + 0x1b0);
  uStack_1e7 = (undefined7)((ulong)*(undefined8 *)(lVar8 + 0x1b0) >> 8);
  uStack_1f0 = (undefined1)*(undefined8 *)(lVar8 + 0x1a8);
  uStack_1ef = (undefined7)((ulong)*(undefined8 *)(lVar8 + 0x1a8) >> 8);
  FUN_107411660(auStack_1d8,*(long *)(*(long *)(lVar5 + 0x10f8) + 8) + 0x108);
  puVar6 = &uStack_1090;
  uStack_150 = *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x10f8) + 8) + 400);
  lVar8 = *(long *)(*(long *)(lVar5 + 0x10f8) + 8);
  puVar9 = *(undefined8 **)(lVar8 + 0x1c0);
  lStack_140 = puVar9[1];
  uStack_148 = *puVar9;
  if (puVar9[1] != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8;
    lVar8 = extraout_x9;
  }
  lStack_130 = *(long *)(lVar8 + 0xb0);
  uStack_138 = *(undefined8 *)(lVar8 + 0xa8);
  if (*(long *)(lVar8 + 0xb0) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_00 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_00;
    lVar8 = extraout_x9_00;
  }
  lStack_120 = *(long *)(lVar8 + 0xd8);
  uStack_128 = *(undefined8 *)(lVar8 + 0xd0);
  if (*(long *)(lVar8 + 0xd8) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_01 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_01;
    lVar8 = extraout_x9_01;
  }
  lStack_110 = *(long *)(lVar8 + 0x100);
  uStack_118 = *(undefined8 *)(lVar8 + 0xf8);
  if (*(long *)(lVar8 + 0x100) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_02 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_02;
    lVar8 = extraout_x9_02;
  }
  uStack_108 = *(undefined8 *)(lVar8 + 0x338);
  lStack_100 = *(long *)(lVar8 + 0x340);
  if (lStack_100 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_03 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_03;
    lVar8 = extraout_x9_03;
  }
  uStack_f8 = *(undefined8 *)(lVar8 + 0x348);
  lStack_f0 = *(long *)(lVar8 + 0x350);
  if (lStack_f0 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_04 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_04;
    lVar8 = extraout_x9_04;
  }
  uStack_e8 = *(undefined8 *)(lVar8 + 0x358);
  lStack_e0 = *(long *)(lVar8 + 0x360);
  if (lStack_e0 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_05 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_05;
    lVar8 = extraout_x9_05;
  }
  uStack_d8 = *(undefined8 *)(lVar8 + 0x368);
  lStack_d0 = *(long *)(lVar8 + 0x370);
  if (lStack_d0 != 0) {
    do {
      func_0x000107411734();
      puVar6 = extraout_x8_06;
    } while (extraout_w11_06 != 0);
  }
  uStack_c8 = *(undefined8 *)(lVar5 + 0x10e8);
  lStack_c0 = *(long *)(lVar5 + 0x10f0);
  if (lStack_c0 != 0) {
    do {
      func_0x000107411734();
      puVar6 = extraout_x8_07;
    } while (extraout_w11_07 != 0);
  }
  *(undefined1 *)(puVar6 + 0x1fb) = *(undefined1 *)(lVar5 + 0x1101);
  *(bool *)((long)puVar6 + 0xfd9) = *(long *)(lVar5 + 0x1108) != 0;
  *(undefined1 *)((long)puVar6 + 0xfda) = *(undefined1 *)(lVar5 + 0x10d8);
  uStack_ac = uStack_78;
  uStack_a8 = uStack_74;
  uStack_b4 = uStack_80;
  uStack_b0 = uStack_7c;
  uStack_9c = (undefined4)uStack_68;
  uStack_98 = (undefined4)((ulong)uStack_68 >> 0x20);
  uStack_a4 = (undefined4)uStack_70;
  uStack_a0 = (undefined4)((ulong)uStack_70 >> 0x20);
  uStack_88 = *(undefined8 *)(lVar5 + 0x1118);
  uStack_90 = *(undefined8 *)(lVar5 + 0x1110);
  if (*(long *)(lVar5 + 0x1118) != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10 != 0);
  }
  plVar11 = *(long **)(lVar5 + 0x38);
  puVar6 = (undefined8 *)0x1028;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_1109adf98;
  _memcpy(puVar6 + 3,&uStack_1090,0xe70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (puVar6 + 0x1d1,auStack_220);
  puVar6[0x1d5] = uStack_200;
  puVar6[0x1d4] = CONCAT71(uStack_207,uStack_208);
  puVar6[0x1d7] = CONCAT71(uStack_1ef,uStack_1f0);
  puVar6[0x1d6] = uStack_1f8;
  *(ulong *)((long)puVar6 + 0xec1) = CONCAT17(uStack_1e0,uStack_1e7);
  *(ulong *)((long)puVar6 + 0xeb9) = CONCAT17(uStack_1e8,uStack_1ef);
  FUN_107411660(puVar6 + 0x1da,auStack_1d8);
  puVar6[0x1eb] = uStack_150;
  puVar6[0x1ed] = lStack_140;
  puVar6[0x1ec] = uStack_148;
  if (lStack_140 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_00 != 0);
  }
  puVar6[0x1ef] = lStack_130;
  puVar6[0x1ee] = uStack_138;
  if (lStack_130 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_01 != 0);
  }
  puVar6[0x1f1] = lStack_120;
  puVar6[0x1f0] = uStack_128;
  if (lStack_120 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_02 != 0);
  }
  puVar6[499] = lStack_110;
  puVar6[0x1f2] = uStack_118;
  if (lStack_110 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_03 != 0);
  }
  puVar6[0x1f5] = lStack_100;
  puVar6[500] = uStack_108;
  if (lStack_100 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_04 != 0);
  }
  puVar6[0x1f7] = lStack_f0;
  puVar6[0x1f6] = uStack_f8;
  if (lStack_f0 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_05 != 0);
  }
  puVar6[0x1f9] = lStack_e0;
  puVar6[0x1f8] = uStack_e8;
  if (lStack_e0 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_06 != 0);
  }
  puVar6[0x1fb] = lStack_d0;
  puVar6[0x1fa] = uStack_d8;
  if (lStack_d0 != 0) {
    plVar1 = (long *)(lStack_d0 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar6[0x1fd] = lStack_c0;
  puVar6[0x1fc] = uStack_c8;
  puVar6[0x1ff] = CONCAT44(uStack_ac,uStack_b0);
  puVar6[0x1fe] = CONCAT44(uStack_b4,uStack_b8);
  uStack_c8 = 0;
  lStack_c0 = 0;
  puVar6[0x201] = CONCAT44(uStack_9c,uStack_a0);
  puVar6[0x200] = CONCAT44(uStack_a4,uStack_a8);
  *(undefined4 *)(puVar6 + 0x202) = uStack_98;
  puVar6[0x204] = uStack_88;
  puVar6[0x203] = uStack_90;
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_10a0 = puVar6 + 3;
  puStack_1098 = puVar6;
  (**(code **)(*plVar11 + 0x20))(plVar11,&puStack_10a0);
  func_0x00010725ab14(&puStack_10a0);
  func_0x000107410df4(&uStack_1090);
  return;
}



/* Entry: 10740e24c; end: 10740e2cf;  */

void FUN_10740e24c(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  undefined8 *extraout_x8_06;
  undefined8 *extraout_x8_07;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  int extraout_w11_05;
  int extraout_w11_06;
  int extraout_w11_07;
  undefined8 *puVar8;
  undefined8 unaff_x20;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *unaff_x21;
  uint uVar11;
  undefined4 uVar13;
  undefined8 *puStack_10a0;
  undefined8 *puStack_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  undefined **ppuStack_1070;
  undefined8 uStack_1068;
  undefined8 uStack_1060;
  undefined8 uStack_1058;
  undefined4 uStack_1050;
  undefined4 uStack_1048;
  undefined1 uStack_1044;
  undefined8 uStack_1040;
  undefined8 uStack_1038;
  ulong uStack_1030;
  undefined1 uStack_1028;
  undefined1 auStack_220 [24];
  undefined1 uStack_208;
  undefined7 uStack_207;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 uStack_1f0;
  undefined7 uStack_1ef;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  undefined1 auStack_1d8 [136];
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined4 uStack_58;
  double dVar12;
  
  func_0x00010740f3e8();
  puVar5 = &UNK_10f41038c;
  func_0x000107875d2c();
  func_0x00010740f37c(*unaff_x21);
  FUN_107411fbc();
  func_0x00010740f438();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar9 = *(undefined8 *)(puVar5 + 0x48);
  uStack_1090 = (undefined8 *)CONCAT44(uStack_1090._4_4_,0x76);
  uStack_1078 = (undefined8 *)((ulong)uStack_1078._4_4_ << 0x20);
  uStack_1060 = 0;
  uStack_1058 = 0;
  ppuStack_1070 = &PTR_DAT_110996720;
  uStack_1068 = 0;
  uStack_1050 = 0x76;
  uStack_1048 = 0;
  uStack_1044 = 1;
  uStack_1038 = 0;
  uStack_1030 = 0;
  uStack_1040 = 0;
  puVar6 = &uStack_1090;
  func_0x00010729d56c(puVar6,"reason",unaff_x20);
  uStack_80 = 1;
  uStack_78 = 0;
  puStack_60 = (undefined8 *)**(undefined8 **)(puVar5 + 0x48);
  uStack_58 = 3;
  FUN_10743fa9c(uVar9,puVar6,&uStack_80,&puStack_60,7);
  puVar6 = &uStack_1090;
  func_0x000107262330();
  if (*(int *)(puVar5 + 0x10d0) == 0) {
    __ZNSt3__16chrono12steady_clock3nowEv();
  }
  else {
    puVar6 = (undefined8 *)0x7fffffffffffffff;
  }
  lVar7 = *(long *)(*(long *)(puVar5 + 0x10f8) + 8);
  uStack_1080 = *(undefined8 *)(lVar7 + 0x1a0);
  uStack_1088 = *(undefined8 *)(lVar7 + 0x198);
  ppuStack_1070 = *(undefined ***)(lVar7 + 0x1b0);
  uStack_1078 = *(undefined8 **)(lVar7 + 0x1a8);
  uStack_1068 = *(undefined8 *)(lVar7 + 0x1b8);
  uStack_1090 = puVar6;
  puStack_60 = puVar6;
  if (*(long *)(puVar5 + 0x1168) != **(long **)(lVar7 + 0x1c8)) {
    func_0x000107410e94(puVar5 + 0x1168);
    FUN_1074e31dc(puVar5 + 0x1168,&uStack_1090);
  }
  uVar11 = NEON_ucvtf(*(undefined4 *)(puVar5 + 0xa4));
  dVar12 = (double)(ulong)uVar11;
  uVar13 = NEON_ucvtf(*(undefined4 *)(puVar5 + 0xa8));
  *(uint *)(puVar5 + 0x143c) = uVar11;
  *(undefined4 *)(puVar5 + 0x1440) = uVar13;
  func_0x000107411798();
  FUN_1074e33b8((float)dVar12,puVar5 + 0x1168);
  FUN_1074e3804(&uStack_80,puVar5 + 0x1168);
  FUN_107413c78(puVar5 + 0x50,&uStack_80);
  FUN_1074137f8(puVar5 + 0x50,&puStack_60);
  if (puVar5[0x1164] == '\x01') {
    uStack_1090 = (undefined8 *)((ulong)uStack_1090 & 0xffffffffffffff00);
    func_0x0001074117a0();
    uStack_1030 = uStack_1030 & 0xffffffffffffff00;
    uStack_1028 = 0;
    FUN_107410058(puVar5,&uStack_1090);
  }
  lVar7 = *(long *)(puVar5 + 0x10f8);
  uVar4 = (undefined1)*(undefined8 *)(lVar7 + 8);
  func_0x0001077c5a6c();
  uStack_1090 = (undefined8 *)CONCAT71(uStack_1090._1_7_,uVar4);
  uStack_1090 = (undefined8 *)CONCAT44(*(undefined4 *)(puVar5 + 0x10d0),(undefined4)uStack_1090);
  uStack_1088 = CONCAT44(*(undefined4 *)(puVar5 + 0x10dc),*(undefined4 *)(puVar5 + 0x10d4));
  uStack_1080 = CONCAT71(uStack_1080._1_7_,puVar5[0x10e0]);
  uStack_1078 = puStack_60;
  _memcpy(&ppuStack_1070,puVar5 + 0x58,0xe50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (auStack_220,*(long *)(lVar7 + 8) + 0x90);
  lVar7 = *(long *)(*(long *)(puVar5 + 0x10f8) + 8);
  uStack_208 = *(undefined1 *)(lVar7 + 0x22);
  uStack_1f8 = *(undefined8 *)(lVar7 + 0x1a0);
  uStack_200 = *(undefined8 *)(lVar7 + 0x198);
  uStack_1e0 = (undefined1)*(undefined8 *)(lVar7 + 0x1b8);
  uStack_1df = (undefined7)((ulong)*(undefined8 *)(lVar7 + 0x1b8) >> 8);
  uStack_1e8 = (undefined1)*(undefined8 *)(lVar7 + 0x1b0);
  uStack_1e7 = (undefined7)((ulong)*(undefined8 *)(lVar7 + 0x1b0) >> 8);
  uStack_1f0 = (undefined1)*(undefined8 *)(lVar7 + 0x1a8);
  uStack_1ef = (undefined7)((ulong)*(undefined8 *)(lVar7 + 0x1a8) >> 8);
  FUN_107411660(auStack_1d8,*(long *)(*(long *)(puVar5 + 0x10f8) + 8) + 0x108);
  puVar6 = &uStack_1090;
  uStack_150 = *(undefined8 *)(*(long *)(*(long *)(puVar5 + 0x10f8) + 8) + 400);
  lVar7 = *(long *)(*(long *)(puVar5 + 0x10f8) + 8);
  puVar8 = *(undefined8 **)(lVar7 + 0x1c0);
  lStack_140 = puVar8[1];
  uStack_148 = *puVar8;
  if (puVar8[1] != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8;
    lVar7 = extraout_x9;
  }
  lStack_130 = *(long *)(lVar7 + 0xb0);
  uStack_138 = *(undefined8 *)(lVar7 + 0xa8);
  if (*(long *)(lVar7 + 0xb0) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_00 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_00;
    lVar7 = extraout_x9_00;
  }
  lStack_120 = *(long *)(lVar7 + 0xd8);
  uStack_128 = *(undefined8 *)(lVar7 + 0xd0);
  if (*(long *)(lVar7 + 0xd8) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_01 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_01;
    lVar7 = extraout_x9_01;
  }
  lStack_110 = *(long *)(lVar7 + 0x100);
  uStack_118 = *(undefined8 *)(lVar7 + 0xf8);
  if (*(long *)(lVar7 + 0x100) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_02 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_02;
    lVar7 = extraout_x9_02;
  }
  uStack_108 = *(undefined8 *)(lVar7 + 0x338);
  lStack_100 = *(long *)(lVar7 + 0x340);
  if (lStack_100 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_03 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_03;
    lVar7 = extraout_x9_03;
  }
  uStack_f8 = *(undefined8 *)(lVar7 + 0x348);
  lStack_f0 = *(long *)(lVar7 + 0x350);
  if (lStack_f0 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_04 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_04;
    lVar7 = extraout_x9_04;
  }
  uStack_e8 = *(undefined8 *)(lVar7 + 0x358);
  lStack_e0 = *(long *)(lVar7 + 0x360);
  if (lStack_e0 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_05 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_05;
    lVar7 = extraout_x9_05;
  }
  uStack_d8 = *(undefined8 *)(lVar7 + 0x368);
  lStack_d0 = *(long *)(lVar7 + 0x370);
  if (lStack_d0 != 0) {
    do {
      func_0x000107411734();
      puVar6 = extraout_x8_06;
    } while (extraout_w11_06 != 0);
  }
  uStack_c8 = *(undefined8 *)(puVar5 + 0x10e8);
  lStack_c0 = *(long *)(puVar5 + 0x10f0);
  if (lStack_c0 != 0) {
    do {
      func_0x000107411734();
      puVar6 = extraout_x8_07;
    } while (extraout_w11_07 != 0);
  }
  *(undefined *)(puVar6 + 0x1fb) = puVar5[0x1101];
  *(bool *)((long)puVar6 + 0xfd9) = *(long *)(puVar5 + 0x1108) != 0;
  *(undefined *)((long)puVar6 + 0xfda) = puVar5[0x10d8];
  uStack_ac = uStack_78;
  uStack_a8 = uStack_74;
  uStack_b4 = uStack_80;
  uStack_b0 = uStack_7c;
  uStack_9c = (undefined4)uStack_68;
  uStack_98 = (undefined4)((ulong)uStack_68 >> 0x20);
  uStack_a4 = (undefined4)uStack_70;
  uStack_a0 = (undefined4)((ulong)uStack_70 >> 0x20);
  uStack_88 = *(undefined8 *)(puVar5 + 0x1118);
  uStack_90 = *(undefined8 *)(puVar5 + 0x1110);
  if (*(long *)(puVar5 + 0x1118) != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10 != 0);
  }
  plVar10 = *(long **)(puVar5 + 0x38);
  puVar6 = (undefined8 *)0x1028;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_1109adf98;
  _memcpy(puVar6 + 3,&uStack_1090,0xe70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (puVar6 + 0x1d1,auStack_220);
  puVar6[0x1d5] = uStack_200;
  puVar6[0x1d4] = CONCAT71(uStack_207,uStack_208);
  puVar6[0x1d7] = CONCAT71(uStack_1ef,uStack_1f0);
  puVar6[0x1d6] = uStack_1f8;
  *(ulong *)((long)puVar6 + 0xec1) = CONCAT17(uStack_1e0,uStack_1e7);
  *(ulong *)((long)puVar6 + 0xeb9) = CONCAT17(uStack_1e8,uStack_1ef);
  FUN_107411660(puVar6 + 0x1da,auStack_1d8);
  puVar6[0x1eb] = uStack_150;
  puVar6[0x1ed] = lStack_140;
  puVar6[0x1ec] = uStack_148;
  if (lStack_140 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_00 != 0);
  }
  puVar6[0x1ef] = lStack_130;
  puVar6[0x1ee] = uStack_138;
  if (lStack_130 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_01 != 0);
  }
  puVar6[0x1f1] = lStack_120;
  puVar6[0x1f0] = uStack_128;
  if (lStack_120 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_02 != 0);
  }
  puVar6[499] = lStack_110;
  puVar6[0x1f2] = uStack_118;
  if (lStack_110 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_03 != 0);
  }
  puVar6[0x1f5] = lStack_100;
  puVar6[500] = uStack_108;
  if (lStack_100 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_04 != 0);
  }
  puVar6[0x1f7] = lStack_f0;
  puVar6[0x1f6] = uStack_f8;
  if (lStack_f0 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_05 != 0);
  }
  puVar6[0x1f9] = lStack_e0;
  puVar6[0x1f8] = uStack_e8;
  if (lStack_e0 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_06 != 0);
  }
  puVar6[0x1fb] = lStack_d0;
  puVar6[0x1fa] = uStack_d8;
  if (lStack_d0 != 0) {
    plVar1 = (long *)(lStack_d0 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar6[0x1fd] = lStack_c0;
  puVar6[0x1fc] = uStack_c8;
  puVar6[0x1ff] = CONCAT44(uStack_ac,uStack_b0);
  puVar6[0x1fe] = CONCAT44(uStack_b4,uStack_b8);
  uStack_c8 = 0;
  lStack_c0 = 0;
  puVar6[0x201] = CONCAT44(uStack_9c,uStack_a0);
  puVar6[0x200] = CONCAT44(uStack_a4,uStack_a8);
  *(undefined4 *)(puVar6 + 0x202) = uStack_98;
  puVar6[0x204] = uStack_88;
  puVar6[0x203] = uStack_90;
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_10a0 = puVar6 + 3;
  puStack_1098 = puVar6;
  (**(code **)(*plVar10 + 0x20))(plVar10,&puStack_10a0);
  func_0x00010725ab14(&puStack_10a0);
  func_0x000107410df4(&uStack_1090);
  return;
}



/* Entry: 10740e2d0; end: 10740e2f3;  */

void FUN_10740e2d0(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  undefined8 *extraout_x8_06;
  undefined8 *extraout_x8_07;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  int extraout_w11_05;
  int extraout_w11_06;
  int extraout_w11_07;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  uint uVar10;
  undefined4 uVar12;
  undefined8 *puStack_10a0;
  undefined8 *puStack_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  undefined **ppuStack_1070;
  undefined8 uStack_1068;
  undefined8 uStack_1060;
  undefined8 uStack_1058;
  undefined4 uStack_1050;
  undefined4 uStack_1048;
  undefined1 uStack_1044;
  undefined8 uStack_1040;
  undefined8 uStack_1038;
  ulong uStack_1030;
  undefined1 uStack_1028;
  undefined1 auStack_220 [24];
  undefined1 uStack_208;
  undefined7 uStack_207;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 uStack_1f0;
  undefined7 uStack_1ef;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  undefined1 auStack_1d8 [136];
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined4 uStack_58;
  double dVar11;
  
  func_0x00010740f42c();
  func_0x00010740f37c();
  FUN_107412a98();
  func_0x00010740f3a4();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  uStack_1090 = (undefined8 *)CONCAT44(uStack_1090._4_4_,0x76);
  uStack_1078 = (undefined8 *)((ulong)uStack_1078._4_4_ << 0x20);
  uStack_1060 = 0;
  uStack_1058 = 0;
  ppuStack_1070 = &PTR_DAT_110996720;
  uStack_1068 = 0;
  uStack_1050 = 0x76;
  uStack_1048 = 0;
  uStack_1044 = 1;
  uStack_1038 = 0;
  uStack_1030 = 0;
  uStack_1040 = 0;
  puVar5 = &uStack_1090;
  func_0x00010729d56c(puVar5,"reason",param_2);
  uStack_80 = 1;
  uStack_78 = 0;
  puStack_60 = (undefined8 *)**(undefined8 **)(param_1 + 0x48);
  uStack_58 = 3;
  FUN_10743fa9c(uVar8,puVar5,&uStack_80,&puStack_60,7);
  puVar5 = &uStack_1090;
  func_0x000107262330();
  if (*(int *)(param_1 + 0x10d0) == 0) {
    __ZNSt3__16chrono12steady_clock3nowEv();
  }
  else {
    puVar5 = (undefined8 *)0x7fffffffffffffff;
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x10f8) + 8);
  uStack_1080 = *(undefined8 *)(lVar6 + 0x1a0);
  uStack_1088 = *(undefined8 *)(lVar6 + 0x198);
  ppuStack_1070 = *(undefined ***)(lVar6 + 0x1b0);
  uStack_1078 = *(undefined8 **)(lVar6 + 0x1a8);
  uStack_1068 = *(undefined8 *)(lVar6 + 0x1b8);
  uStack_1090 = puVar5;
  puStack_60 = puVar5;
  if (*(long *)(param_1 + 0x1168) != **(long **)(lVar6 + 0x1c8)) {
    func_0x000107410e94(param_1 + 0x1168);
    FUN_1074e31dc(param_1 + 0x1168,&uStack_1090);
  }
  uVar10 = NEON_ucvtf(*(undefined4 *)(param_1 + 0xa4));
  dVar11 = (double)(ulong)uVar10;
  uVar12 = NEON_ucvtf(*(undefined4 *)(param_1 + 0xa8));
  *(uint *)(param_1 + 0x143c) = uVar10;
  *(undefined4 *)(param_1 + 0x1440) = uVar12;
  func_0x000107411798();
  FUN_1074e33b8((float)dVar11,param_1 + 0x1168);
  FUN_1074e3804(&uStack_80,param_1 + 0x1168);
  FUN_107413c78(param_1 + 0x50,&uStack_80);
  FUN_1074137f8(param_1 + 0x50,&puStack_60);
  if (*(char *)(param_1 + 0x1164) == '\x01') {
    uStack_1090 = (undefined8 *)((ulong)uStack_1090 & 0xffffffffffffff00);
    func_0x0001074117a0();
    uStack_1030 = uStack_1030 & 0xffffffffffffff00;
    uStack_1028 = 0;
    FUN_107410058(param_1,&uStack_1090);
  }
  lVar6 = *(long *)(param_1 + 0x10f8);
  uVar4 = (undefined1)*(undefined8 *)(lVar6 + 8);
  func_0x0001077c5a6c();
  uStack_1090 = (undefined8 *)CONCAT71(uStack_1090._1_7_,uVar4);
  uStack_1090 = (undefined8 *)CONCAT44(*(undefined4 *)(param_1 + 0x10d0),(undefined4)uStack_1090);
  uStack_1088 = CONCAT44(*(undefined4 *)(param_1 + 0x10dc),*(undefined4 *)(param_1 + 0x10d4));
  uStack_1080 = CONCAT71(uStack_1080._1_7_,*(undefined1 *)(param_1 + 0x10e0));
  uStack_1078 = puStack_60;
  _memcpy(&ppuStack_1070,param_1 + 0x58,0xe50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (auStack_220,*(long *)(lVar6 + 8) + 0x90);
  lVar6 = *(long *)(*(long *)(param_1 + 0x10f8) + 8);
  uStack_208 = *(undefined1 *)(lVar6 + 0x22);
  uStack_1f8 = *(undefined8 *)(lVar6 + 0x1a0);
  uStack_200 = *(undefined8 *)(lVar6 + 0x198);
  uStack_1e0 = (undefined1)*(undefined8 *)(lVar6 + 0x1b8);
  uStack_1df = (undefined7)((ulong)*(undefined8 *)(lVar6 + 0x1b8) >> 8);
  uStack_1e8 = (undefined1)*(undefined8 *)(lVar6 + 0x1b0);
  uStack_1e7 = (undefined7)((ulong)*(undefined8 *)(lVar6 + 0x1b0) >> 8);
  uStack_1f0 = (undefined1)*(undefined8 *)(lVar6 + 0x1a8);
  uStack_1ef = (undefined7)((ulong)*(undefined8 *)(lVar6 + 0x1a8) >> 8);
  FUN_107411660(auStack_1d8,*(long *)(*(long *)(param_1 + 0x10f8) + 8) + 0x108);
  puVar5 = &uStack_1090;
  uStack_150 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10f8) + 8) + 400);
  lVar6 = *(long *)(*(long *)(param_1 + 0x10f8) + 8);
  puVar7 = *(undefined8 **)(lVar6 + 0x1c0);
  lStack_140 = puVar7[1];
  uStack_148 = *puVar7;
  if (puVar7[1] != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8;
    lVar6 = extraout_x9;
  }
  lStack_130 = *(long *)(lVar6 + 0xb0);
  uStack_138 = *(undefined8 *)(lVar6 + 0xa8);
  if (*(long *)(lVar6 + 0xb0) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_00 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8_00;
    lVar6 = extraout_x9_00;
  }
  lStack_120 = *(long *)(lVar6 + 0xd8);
  uStack_128 = *(undefined8 *)(lVar6 + 0xd0);
  if (*(long *)(lVar6 + 0xd8) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_01 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8_01;
    lVar6 = extraout_x9_01;
  }
  lStack_110 = *(long *)(lVar6 + 0x100);
  uStack_118 = *(undefined8 *)(lVar6 + 0xf8);
  if (*(long *)(lVar6 + 0x100) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_02 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8_02;
    lVar6 = extraout_x9_02;
  }
  uStack_108 = *(undefined8 *)(lVar6 + 0x338);
  lStack_100 = *(long *)(lVar6 + 0x340);
  if (lStack_100 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_03 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8_03;
    lVar6 = extraout_x9_03;
  }
  uStack_f8 = *(undefined8 *)(lVar6 + 0x348);
  lStack_f0 = *(long *)(lVar6 + 0x350);
  if (lStack_f0 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_04 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8_04;
    lVar6 = extraout_x9_04;
  }
  uStack_e8 = *(undefined8 *)(lVar6 + 0x358);
  lStack_e0 = *(long *)(lVar6 + 0x360);
  if (lStack_e0 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_05 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8_05;
    lVar6 = extraout_x9_05;
  }
  uStack_d8 = *(undefined8 *)(lVar6 + 0x368);
  lStack_d0 = *(long *)(lVar6 + 0x370);
  if (lStack_d0 != 0) {
    do {
      func_0x000107411734();
      puVar5 = extraout_x8_06;
    } while (extraout_w11_06 != 0);
  }
  uStack_c8 = *(undefined8 *)(param_1 + 0x10e8);
  lStack_c0 = *(long *)(param_1 + 0x10f0);
  if (lStack_c0 != 0) {
    do {
      func_0x000107411734();
      puVar5 = extraout_x8_07;
    } while (extraout_w11_07 != 0);
  }
  *(undefined1 *)(puVar5 + 0x1fb) = *(undefined1 *)(param_1 + 0x1101);
  *(bool *)((long)puVar5 + 0xfd9) = *(long *)(param_1 + 0x1108) != 0;
  *(undefined1 *)((long)puVar5 + 0xfda) = *(undefined1 *)(param_1 + 0x10d8);
  uStack_ac = uStack_78;
  uStack_a8 = uStack_74;
  uStack_b4 = uStack_80;
  uStack_b0 = uStack_7c;
  uStack_9c = (undefined4)uStack_68;
  uStack_98 = (undefined4)((ulong)uStack_68 >> 0x20);
  uStack_a4 = (undefined4)uStack_70;
  uStack_a0 = (undefined4)((ulong)uStack_70 >> 0x20);
  uStack_88 = *(undefined8 *)(param_1 + 0x1118);
  uStack_90 = *(undefined8 *)(param_1 + 0x1110);
  if (*(long *)(param_1 + 0x1118) != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10 != 0);
  }
  plVar9 = *(long **)(param_1 + 0x38);
  puVar5 = (undefined8 *)0x1028;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_1109adf98;
  _memcpy(puVar5 + 3,&uStack_1090,0xe70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (puVar5 + 0x1d1,auStack_220);
  puVar5[0x1d5] = uStack_200;
  puVar5[0x1d4] = CONCAT71(uStack_207,uStack_208);
  puVar5[0x1d7] = CONCAT71(uStack_1ef,uStack_1f0);
  puVar5[0x1d6] = uStack_1f8;
  *(ulong *)((long)puVar5 + 0xec1) = CONCAT17(uStack_1e0,uStack_1e7);
  *(ulong *)((long)puVar5 + 0xeb9) = CONCAT17(uStack_1e8,uStack_1ef);
  FUN_107411660(puVar5 + 0x1da,auStack_1d8);
  puVar5[0x1eb] = uStack_150;
  puVar5[0x1ed] = lStack_140;
  puVar5[0x1ec] = uStack_148;
  if (lStack_140 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_00 != 0);
  }
  puVar5[0x1ef] = lStack_130;
  puVar5[0x1ee] = uStack_138;
  if (lStack_130 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_01 != 0);
  }
  puVar5[0x1f1] = lStack_120;
  puVar5[0x1f0] = uStack_128;
  if (lStack_120 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_02 != 0);
  }
  puVar5[499] = lStack_110;
  puVar5[0x1f2] = uStack_118;
  if (lStack_110 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_03 != 0);
  }
  puVar5[0x1f5] = lStack_100;
  puVar5[500] = uStack_108;
  if (lStack_100 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_04 != 0);
  }
  puVar5[0x1f7] = lStack_f0;
  puVar5[0x1f6] = uStack_f8;
  if (lStack_f0 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_05 != 0);
  }
  puVar5[0x1f9] = lStack_e0;
  puVar5[0x1f8] = uStack_e8;
  if (lStack_e0 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_06 != 0);
  }
  puVar5[0x1fb] = lStack_d0;
  puVar5[0x1fa] = uStack_d8;
  if (lStack_d0 != 0) {
    plVar1 = (long *)(lStack_d0 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar5[0x1fd] = lStack_c0;
  puVar5[0x1fc] = uStack_c8;
  puVar5[0x1ff] = CONCAT44(uStack_ac,uStack_b0);
  puVar5[0x1fe] = CONCAT44(uStack_b4,uStack_b8);
  uStack_c8 = 0;
  lStack_c0 = 0;
  puVar5[0x201] = CONCAT44(uStack_9c,uStack_a0);
  puVar5[0x200] = CONCAT44(uStack_a4,uStack_a8);
  *(undefined4 *)(puVar5 + 0x202) = uStack_98;
  puVar5[0x204] = uStack_88;
  puVar5[0x203] = uStack_90;
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_10a0 = puVar5 + 3;
  puStack_1098 = puVar5;
  (**(code **)(*plVar9 + 0x20))(plVar9,&puStack_10a0);
  func_0x00010725ab14(&puStack_10a0);
  func_0x000107410df4(&uStack_1090);
  return;
}



/* Entry: 10740e2f4; end: 10740e2ff;  */

void FUN_10740e2f4(long *param_1,undefined8 param_2)

{
  long lVar1;
  long extraout_x8;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  lVar1 = *param_1;
  if (*(char *)(lVar1 + 0x1000) == '\x01') {
    uStack_30 = param_2;
    FUN_107414104(lVar1 + 0xf28);
    puStack_28 = (undefined1 *)&uStack_30;
    func_0x000107415834(*(undefined4 *)(lVar1 + 0xff8));
    (*(code *)(&PTR_FUN_1109ae060)[extraout_x8])(&puStack_28,lVar1 + 0xf28);
  }
  return;
}



/* Entry: 10740e300; end: 10740e323;  */

void FUN_10740e300(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  undefined8 *extraout_x8_06;
  undefined8 *extraout_x8_07;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  int extraout_w11_05;
  int extraout_w11_06;
  int extraout_w11_07;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  uint uVar10;
  undefined4 uVar12;
  undefined8 *puStack_10a0;
  undefined8 *puStack_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  undefined **ppuStack_1070;
  undefined8 uStack_1068;
  undefined8 uStack_1060;
  undefined8 uStack_1058;
  undefined4 uStack_1050;
  undefined4 uStack_1048;
  undefined1 uStack_1044;
  undefined8 uStack_1040;
  undefined8 uStack_1038;
  ulong uStack_1030;
  undefined1 uStack_1028;
  undefined1 auStack_220 [24];
  undefined1 uStack_208;
  undefined7 uStack_207;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 uStack_1f0;
  undefined7 uStack_1ef;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  undefined1 auStack_1d8 [136];
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined4 uStack_58;
  double dVar11;
  
  func_0x00010740f42c();
  func_0x00010740f37c();
  FUN_107412fc4();
  func_0x00010740f3a4();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  uStack_1090 = (undefined8 *)CONCAT44(uStack_1090._4_4_,0x76);
  uStack_1078 = (undefined8 *)((ulong)uStack_1078._4_4_ << 0x20);
  uStack_1060 = 0;
  uStack_1058 = 0;
  ppuStack_1070 = &PTR_DAT_110996720;
  uStack_1068 = 0;
  uStack_1050 = 0x76;
  uStack_1048 = 0;
  uStack_1044 = 1;
  uStack_1038 = 0;
  uStack_1030 = 0;
  uStack_1040 = 0;
  puVar5 = &uStack_1090;
  func_0x00010729d56c(puVar5,"reason",param_2);
  uStack_80 = 1;
  uStack_78 = 0;
  puStack_60 = (undefined8 *)**(undefined8 **)(param_1 + 0x48);
  uStack_58 = 3;
  FUN_10743fa9c(uVar8,puVar5,&uStack_80,&puStack_60,7);
  puVar5 = &uStack_1090;
  func_0x000107262330();
  if (*(int *)(param_1 + 0x10d0) == 0) {
    __ZNSt3__16chrono12steady_clock3nowEv();
  }
  else {
    puVar5 = (undefined8 *)0x7fffffffffffffff;
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x10f8) + 8);
  uStack_1080 = *(undefined8 *)(lVar6 + 0x1a0);
  uStack_1088 = *(undefined8 *)(lVar6 + 0x198);
  ppuStack_1070 = *(undefined ***)(lVar6 + 0x1b0);
  uStack_1078 = *(undefined8 **)(lVar6 + 0x1a8);
  uStack_1068 = *(undefined8 *)(lVar6 + 0x1b8);
  uStack_1090 = puVar5;
  puStack_60 = puVar5;
  if (*(long *)(param_1 + 0x1168) != **(long **)(lVar6 + 0x1c8)) {
    func_0x000107410e94(param_1 + 0x1168);
    FUN_1074e31dc(param_1 + 0x1168,&uStack_1090);
  }
  uVar10 = NEON_ucvtf(*(undefined4 *)(param_1 + 0xa4));
  dVar11 = (double)(ulong)uVar10;
  uVar12 = NEON_ucvtf(*(undefined4 *)(param_1 + 0xa8));
  *(uint *)(param_1 + 0x143c) = uVar10;
  *(undefined4 *)(param_1 + 0x1440) = uVar12;
  func_0x000107411798();
  FUN_1074e33b8((float)dVar11,param_1 + 0x1168);
  FUN_1074e3804(&uStack_80,param_1 + 0x1168);
  FUN_107413c78(param_1 + 0x50,&uStack_80);
  FUN_1074137f8(param_1 + 0x50,&puStack_60);
  if (*(char *)(param_1 + 0x1164) == '\x01') {
    uStack_1090 = (undefined8 *)((ulong)uStack_1090 & 0xffffffffffffff00);
    func_0x0001074117a0();
    uStack_1030 = uStack_1030 & 0xffffffffffffff00;
    uStack_1028 = 0;
    FUN_107410058(param_1,&uStack_1090);
  }
  lVar6 = *(long *)(param_1 + 0x10f8);
  uVar4 = (undefined1)*(undefined8 *)(lVar6 + 8);
  func_0x0001077c5a6c();
  uStack_1090 = (undefined8 *)CONCAT71(uStack_1090._1_7_,uVar4);
  uStack_1090 = (undefined8 *)CONCAT44(*(undefined4 *)(param_1 + 0x10d0),(undefined4)uStack_1090);
  uStack_1088 = CONCAT44(*(undefined4 *)(param_1 + 0x10dc),*(undefined4 *)(param_1 + 0x10d4));
  uStack_1080 = CONCAT71(uStack_1080._1_7_,*(undefined1 *)(param_1 + 0x10e0));
  uStack_1078 = puStack_60;
  _memcpy(&ppuStack_1070,param_1 + 0x58,0xe50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (auStack_220,*(long *)(lVar6 + 8) + 0x90);
  lVar6 = *(long *)(*(long *)(param_1 + 0x10f8) + 8);
  uStack_208 = *(undefined1 *)(lVar6 + 0x22);
  uStack_1f8 = *(undefined8 *)(lVar6 + 0x1a0);
  uStack_200 = *(undefined8 *)(lVar6 + 0x198);
  uStack_1e0 = (undefined1)*(undefined8 *)(lVar6 + 0x1b8);
  uStack_1df = (undefined7)((ulong)*(undefined8 *)(lVar6 + 0x1b8) >> 8);
  uStack_1e8 = (undefined1)*(undefined8 *)(lVar6 + 0x1b0);
  uStack_1e7 = (undefined7)((ulong)*(undefined8 *)(lVar6 + 0x1b0) >> 8);
  uStack_1f0 = (undefined1)*(undefined8 *)(lVar6 + 0x1a8);
  uStack_1ef = (undefined7)((ulong)*(undefined8 *)(lVar6 + 0x1a8) >> 8);
  FUN_107411660(auStack_1d8,*(long *)(*(long *)(param_1 + 0x10f8) + 8) + 0x108);
  puVar5 = &uStack_1090;
  uStack_150 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10f8) + 8) + 400);
  lVar6 = *(long *)(*(long *)(param_1 + 0x10f8) + 8);
  puVar7 = *(undefined8 **)(lVar6 + 0x1c0);
  lStack_140 = puVar7[1];
  uStack_148 = *puVar7;
  if (puVar7[1] != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8;
    lVar6 = extraout_x9;
  }
  lStack_130 = *(long *)(lVar6 + 0xb0);
  uStack_138 = *(undefined8 *)(lVar6 + 0xa8);
  if (*(long *)(lVar6 + 0xb0) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_00 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8_00;
    lVar6 = extraout_x9_00;
  }
  lStack_120 = *(long *)(lVar6 + 0xd8);
  uStack_128 = *(undefined8 *)(lVar6 + 0xd0);
  if (*(long *)(lVar6 + 0xd8) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_01 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8_01;
    lVar6 = extraout_x9_01;
  }
  lStack_110 = *(long *)(lVar6 + 0x100);
  uStack_118 = *(undefined8 *)(lVar6 + 0xf8);
  if (*(long *)(lVar6 + 0x100) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_02 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8_02;
    lVar6 = extraout_x9_02;
  }
  uStack_108 = *(undefined8 *)(lVar6 + 0x338);
  lStack_100 = *(long *)(lVar6 + 0x340);
  if (lStack_100 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_03 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8_03;
    lVar6 = extraout_x9_03;
  }
  uStack_f8 = *(undefined8 *)(lVar6 + 0x348);
  lStack_f0 = *(long *)(lVar6 + 0x350);
  if (lStack_f0 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_04 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8_04;
    lVar6 = extraout_x9_04;
  }
  uStack_e8 = *(undefined8 *)(lVar6 + 0x358);
  lStack_e0 = *(long *)(lVar6 + 0x360);
  if (lStack_e0 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_05 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8_05;
    lVar6 = extraout_x9_05;
  }
  uStack_d8 = *(undefined8 *)(lVar6 + 0x368);
  lStack_d0 = *(long *)(lVar6 + 0x370);
  if (lStack_d0 != 0) {
    do {
      func_0x000107411734();
      puVar5 = extraout_x8_06;
    } while (extraout_w11_06 != 0);
  }
  uStack_c8 = *(undefined8 *)(param_1 + 0x10e8);
  lStack_c0 = *(long *)(param_1 + 0x10f0);
  if (lStack_c0 != 0) {
    do {
      func_0x000107411734();
      puVar5 = extraout_x8_07;
    } while (extraout_w11_07 != 0);
  }
  *(undefined1 *)(puVar5 + 0x1fb) = *(undefined1 *)(param_1 + 0x1101);
  *(bool *)((long)puVar5 + 0xfd9) = *(long *)(param_1 + 0x1108) != 0;
  *(undefined1 *)((long)puVar5 + 0xfda) = *(undefined1 *)(param_1 + 0x10d8);
  uStack_ac = uStack_78;
  uStack_a8 = uStack_74;
  uStack_b4 = uStack_80;
  uStack_b0 = uStack_7c;
  uStack_9c = (undefined4)uStack_68;
  uStack_98 = (undefined4)((ulong)uStack_68 >> 0x20);
  uStack_a4 = (undefined4)uStack_70;
  uStack_a0 = (undefined4)((ulong)uStack_70 >> 0x20);
  uStack_88 = *(undefined8 *)(param_1 + 0x1118);
  uStack_90 = *(undefined8 *)(param_1 + 0x1110);
  if (*(long *)(param_1 + 0x1118) != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10 != 0);
  }
  plVar9 = *(long **)(param_1 + 0x38);
  puVar5 = (undefined8 *)0x1028;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_1109adf98;
  _memcpy(puVar5 + 3,&uStack_1090,0xe70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (puVar5 + 0x1d1,auStack_220);
  puVar5[0x1d5] = uStack_200;
  puVar5[0x1d4] = CONCAT71(uStack_207,uStack_208);
  puVar5[0x1d7] = CONCAT71(uStack_1ef,uStack_1f0);
  puVar5[0x1d6] = uStack_1f8;
  *(ulong *)((long)puVar5 + 0xec1) = CONCAT17(uStack_1e0,uStack_1e7);
  *(ulong *)((long)puVar5 + 0xeb9) = CONCAT17(uStack_1e8,uStack_1ef);
  FUN_107411660(puVar5 + 0x1da,auStack_1d8);
  puVar5[0x1eb] = uStack_150;
  puVar5[0x1ed] = lStack_140;
  puVar5[0x1ec] = uStack_148;
  if (lStack_140 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_00 != 0);
  }
  puVar5[0x1ef] = lStack_130;
  puVar5[0x1ee] = uStack_138;
  if (lStack_130 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_01 != 0);
  }
  puVar5[0x1f1] = lStack_120;
  puVar5[0x1f0] = uStack_128;
  if (lStack_120 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_02 != 0);
  }
  puVar5[499] = lStack_110;
  puVar5[0x1f2] = uStack_118;
  if (lStack_110 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_03 != 0);
  }
  puVar5[0x1f5] = lStack_100;
  puVar5[500] = uStack_108;
  if (lStack_100 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_04 != 0);
  }
  puVar5[0x1f7] = lStack_f0;
  puVar5[0x1f6] = uStack_f8;
  if (lStack_f0 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_05 != 0);
  }
  puVar5[0x1f9] = lStack_e0;
  puVar5[0x1f8] = uStack_e8;
  if (lStack_e0 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_06 != 0);
  }
  puVar5[0x1fb] = lStack_d0;
  puVar5[0x1fa] = uStack_d8;
  if (lStack_d0 != 0) {
    plVar1 = (long *)(lStack_d0 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar5[0x1fd] = lStack_c0;
  puVar5[0x1fc] = uStack_c8;
  puVar5[0x1ff] = CONCAT44(uStack_ac,uStack_b0);
  puVar5[0x1fe] = CONCAT44(uStack_b4,uStack_b8);
  uStack_c8 = 0;
  lStack_c0 = 0;
  puVar5[0x201] = CONCAT44(uStack_9c,uStack_a0);
  puVar5[0x200] = CONCAT44(uStack_a4,uStack_a8);
  *(undefined4 *)(puVar5 + 0x202) = uStack_98;
  puVar5[0x204] = uStack_88;
  puVar5[0x203] = uStack_90;
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_10a0 = puVar5 + 3;
  puStack_1098 = puVar5;
  (**(code **)(*plVar9 + 0x20))(plVar9,&puStack_10a0);
  func_0x00010725ab14(&puStack_10a0);
  func_0x000107410df4(&uStack_1090);
  return;
}



/* Entry: 10740e324; end: 10740e363;  */

void FUN_10740e324(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  undefined8 *extraout_x8_06;
  undefined8 *extraout_x8_07;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  int extraout_w11_05;
  int extraout_w11_06;
  int extraout_w11_07;
  undefined8 *puVar8;
  undefined8 unaff_x20;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *unaff_x21;
  uint uVar11;
  undefined4 uVar13;
  undefined8 *puStack_10a0;
  undefined8 *puStack_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  undefined **ppuStack_1070;
  undefined8 uStack_1068;
  undefined8 uStack_1060;
  undefined8 uStack_1058;
  undefined4 uStack_1050;
  undefined4 uStack_1048;
  undefined1 uStack_1044;
  undefined8 uStack_1040;
  undefined8 uStack_1038;
  ulong uStack_1030;
  undefined1 uStack_1028;
  undefined1 auStack_220 [24];
  undefined1 uStack_208;
  undefined7 uStack_207;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 uStack_1f0;
  undefined7 uStack_1ef;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  undefined1 auStack_1d8 [136];
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined4 uStack_58;
  double dVar12;
  
  func_0x00010740f3e8();
  puVar5 = &UNK_10f4103a3;
  func_0x000107875d2c();
  func_0x00010740f37c(*unaff_x21);
  FUN_1074130ac();
  func_0x00010740f438();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar9 = *(undefined8 *)(puVar5 + 0x48);
  uStack_1090 = (undefined8 *)CONCAT44(uStack_1090._4_4_,0x76);
  uStack_1078 = (undefined8 *)((ulong)uStack_1078._4_4_ << 0x20);
  uStack_1060 = 0;
  uStack_1058 = 0;
  ppuStack_1070 = &PTR_DAT_110996720;
  uStack_1068 = 0;
  uStack_1050 = 0x76;
  uStack_1048 = 0;
  uStack_1044 = 1;
  uStack_1038 = 0;
  uStack_1030 = 0;
  uStack_1040 = 0;
  puVar6 = &uStack_1090;
  func_0x00010729d56c(puVar6,"reason",unaff_x20);
  uStack_80 = 1;
  uStack_78 = 0;
  puStack_60 = (undefined8 *)**(undefined8 **)(puVar5 + 0x48);
  uStack_58 = 3;
  FUN_10743fa9c(uVar9,puVar6,&uStack_80,&puStack_60,7);
  puVar6 = &uStack_1090;
  func_0x000107262330();
  if (*(int *)(puVar5 + 0x10d0) == 0) {
    __ZNSt3__16chrono12steady_clock3nowEv();
  }
  else {
    puVar6 = (undefined8 *)0x7fffffffffffffff;
  }
  lVar7 = *(long *)(*(long *)(puVar5 + 0x10f8) + 8);
  uStack_1080 = *(undefined8 *)(lVar7 + 0x1a0);
  uStack_1088 = *(undefined8 *)(lVar7 + 0x198);
  ppuStack_1070 = *(undefined ***)(lVar7 + 0x1b0);
  uStack_1078 = *(undefined8 **)(lVar7 + 0x1a8);
  uStack_1068 = *(undefined8 *)(lVar7 + 0x1b8);
  uStack_1090 = puVar6;
  puStack_60 = puVar6;
  if (*(long *)(puVar5 + 0x1168) != **(long **)(lVar7 + 0x1c8)) {
    func_0x000107410e94(puVar5 + 0x1168);
    FUN_1074e31dc(puVar5 + 0x1168,&uStack_1090);
  }
  uVar11 = NEON_ucvtf(*(undefined4 *)(puVar5 + 0xa4));
  dVar12 = (double)(ulong)uVar11;
  uVar13 = NEON_ucvtf(*(undefined4 *)(puVar5 + 0xa8));
  *(uint *)(puVar5 + 0x143c) = uVar11;
  *(undefined4 *)(puVar5 + 0x1440) = uVar13;
  func_0x000107411798();
  FUN_1074e33b8((float)dVar12,puVar5 + 0x1168);
  FUN_1074e3804(&uStack_80,puVar5 + 0x1168);
  FUN_107413c78(puVar5 + 0x50,&uStack_80);
  FUN_1074137f8(puVar5 + 0x50,&puStack_60);
  if (puVar5[0x1164] == '\x01') {
    uStack_1090 = (undefined8 *)((ulong)uStack_1090 & 0xffffffffffffff00);
    func_0x0001074117a0();
    uStack_1030 = uStack_1030 & 0xffffffffffffff00;
    uStack_1028 = 0;
    FUN_107410058(puVar5,&uStack_1090);
  }
  lVar7 = *(long *)(puVar5 + 0x10f8);
  uVar4 = (undefined1)*(undefined8 *)(lVar7 + 8);
  func_0x0001077c5a6c();
  uStack_1090 = (undefined8 *)CONCAT71(uStack_1090._1_7_,uVar4);
  uStack_1090 = (undefined8 *)CONCAT44(*(undefined4 *)(puVar5 + 0x10d0),(undefined4)uStack_1090);
  uStack_1088 = CONCAT44(*(undefined4 *)(puVar5 + 0x10dc),*(undefined4 *)(puVar5 + 0x10d4));
  uStack_1080 = CONCAT71(uStack_1080._1_7_,puVar5[0x10e0]);
  uStack_1078 = puStack_60;
  _memcpy(&ppuStack_1070,puVar5 + 0x58,0xe50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (auStack_220,*(long *)(lVar7 + 8) + 0x90);
  lVar7 = *(long *)(*(long *)(puVar5 + 0x10f8) + 8);
  uStack_208 = *(undefined1 *)(lVar7 + 0x22);
  uStack_1f8 = *(undefined8 *)(lVar7 + 0x1a0);
  uStack_200 = *(undefined8 *)(lVar7 + 0x198);
  uStack_1e0 = (undefined1)*(undefined8 *)(lVar7 + 0x1b8);
  uStack_1df = (undefined7)((ulong)*(undefined8 *)(lVar7 + 0x1b8) >> 8);
  uStack_1e8 = (undefined1)*(undefined8 *)(lVar7 + 0x1b0);
  uStack_1e7 = (undefined7)((ulong)*(undefined8 *)(lVar7 + 0x1b0) >> 8);
  uStack_1f0 = (undefined1)*(undefined8 *)(lVar7 + 0x1a8);
  uStack_1ef = (undefined7)((ulong)*(undefined8 *)(lVar7 + 0x1a8) >> 8);
  FUN_107411660(auStack_1d8,*(long *)(*(long *)(puVar5 + 0x10f8) + 8) + 0x108);
  puVar6 = &uStack_1090;
  uStack_150 = *(undefined8 *)(*(long *)(*(long *)(puVar5 + 0x10f8) + 8) + 400);
  lVar7 = *(long *)(*(long *)(puVar5 + 0x10f8) + 8);
  puVar8 = *(undefined8 **)(lVar7 + 0x1c0);
  lStack_140 = puVar8[1];
  uStack_148 = *puVar8;
  if (puVar8[1] != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8;
    lVar7 = extraout_x9;
  }
  lStack_130 = *(long *)(lVar7 + 0xb0);
  uStack_138 = *(undefined8 *)(lVar7 + 0xa8);
  if (*(long *)(lVar7 + 0xb0) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_00 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_00;
    lVar7 = extraout_x9_00;
  }
  lStack_120 = *(long *)(lVar7 + 0xd8);
  uStack_128 = *(undefined8 *)(lVar7 + 0xd0);
  if (*(long *)(lVar7 + 0xd8) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_01 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_01;
    lVar7 = extraout_x9_01;
  }
  lStack_110 = *(long *)(lVar7 + 0x100);
  uStack_118 = *(undefined8 *)(lVar7 + 0xf8);
  if (*(long *)(lVar7 + 0x100) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_02 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_02;
    lVar7 = extraout_x9_02;
  }
  uStack_108 = *(undefined8 *)(lVar7 + 0x338);
  lStack_100 = *(long *)(lVar7 + 0x340);
  if (lStack_100 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_03 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_03;
    lVar7 = extraout_x9_03;
  }
  uStack_f8 = *(undefined8 *)(lVar7 + 0x348);
  lStack_f0 = *(long *)(lVar7 + 0x350);
  if (lStack_f0 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_04 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_04;
    lVar7 = extraout_x9_04;
  }
  uStack_e8 = *(undefined8 *)(lVar7 + 0x358);
  lStack_e0 = *(long *)(lVar7 + 0x360);
  if (lStack_e0 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_05 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_05;
    lVar7 = extraout_x9_05;
  }
  uStack_d8 = *(undefined8 *)(lVar7 + 0x368);
  lStack_d0 = *(long *)(lVar7 + 0x370);
  if (lStack_d0 != 0) {
    do {
      func_0x000107411734();
      puVar6 = extraout_x8_06;
    } while (extraout_w11_06 != 0);
  }
  uStack_c8 = *(undefined8 *)(puVar5 + 0x10e8);
  lStack_c0 = *(long *)(puVar5 + 0x10f0);
  if (lStack_c0 != 0) {
    do {
      func_0x000107411734();
      puVar6 = extraout_x8_07;
    } while (extraout_w11_07 != 0);
  }
  *(undefined *)(puVar6 + 0x1fb) = puVar5[0x1101];
  *(bool *)((long)puVar6 + 0xfd9) = *(long *)(puVar5 + 0x1108) != 0;
  *(undefined *)((long)puVar6 + 0xfda) = puVar5[0x10d8];
  uStack_ac = uStack_78;
  uStack_a8 = uStack_74;
  uStack_b4 = uStack_80;
  uStack_b0 = uStack_7c;
  uStack_9c = (undefined4)uStack_68;
  uStack_98 = (undefined4)((ulong)uStack_68 >> 0x20);
  uStack_a4 = (undefined4)uStack_70;
  uStack_a0 = (undefined4)((ulong)uStack_70 >> 0x20);
  uStack_88 = *(undefined8 *)(puVar5 + 0x1118);
  uStack_90 = *(undefined8 *)(puVar5 + 0x1110);
  if (*(long *)(puVar5 + 0x1118) != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10 != 0);
  }
  plVar10 = *(long **)(puVar5 + 0x38);
  puVar6 = (undefined8 *)0x1028;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_1109adf98;
  _memcpy(puVar6 + 3,&uStack_1090,0xe70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (puVar6 + 0x1d1,auStack_220);
  puVar6[0x1d5] = uStack_200;
  puVar6[0x1d4] = CONCAT71(uStack_207,uStack_208);
  puVar6[0x1d7] = CONCAT71(uStack_1ef,uStack_1f0);
  puVar6[0x1d6] = uStack_1f8;
  *(ulong *)((long)puVar6 + 0xec1) = CONCAT17(uStack_1e0,uStack_1e7);
  *(ulong *)((long)puVar6 + 0xeb9) = CONCAT17(uStack_1e8,uStack_1ef);
  FUN_107411660(puVar6 + 0x1da,auStack_1d8);
  puVar6[0x1eb] = uStack_150;
  puVar6[0x1ed] = lStack_140;
  puVar6[0x1ec] = uStack_148;
  if (lStack_140 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_00 != 0);
  }
  puVar6[0x1ef] = lStack_130;
  puVar6[0x1ee] = uStack_138;
  if (lStack_130 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_01 != 0);
  }
  puVar6[0x1f1] = lStack_120;
  puVar6[0x1f0] = uStack_128;
  if (lStack_120 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_02 != 0);
  }
  puVar6[499] = lStack_110;
  puVar6[0x1f2] = uStack_118;
  if (lStack_110 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_03 != 0);
  }
  puVar6[0x1f5] = lStack_100;
  puVar6[500] = uStack_108;
  if (lStack_100 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_04 != 0);
  }
  puVar6[0x1f7] = lStack_f0;
  puVar6[0x1f6] = uStack_f8;
  if (lStack_f0 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_05 != 0);
  }
  puVar6[0x1f9] = lStack_e0;
  puVar6[0x1f8] = uStack_e8;
  if (lStack_e0 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_06 != 0);
  }
  puVar6[0x1fb] = lStack_d0;
  puVar6[0x1fa] = uStack_d8;
  if (lStack_d0 != 0) {
    plVar1 = (long *)(lStack_d0 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar6[0x1fd] = lStack_c0;
  puVar6[0x1fc] = uStack_c8;
  puVar6[0x1ff] = CONCAT44(uStack_ac,uStack_b0);
  puVar6[0x1fe] = CONCAT44(uStack_b4,uStack_b8);
  uStack_c8 = 0;
  lStack_c0 = 0;
  puVar6[0x201] = CONCAT44(uStack_9c,uStack_a0);
  puVar6[0x200] = CONCAT44(uStack_a4,uStack_a8);
  *(undefined4 *)(puVar6 + 0x202) = uStack_98;
  puVar6[0x204] = uStack_88;
  puVar6[0x203] = uStack_90;
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_10a0 = puVar6 + 3;
  puStack_1098 = puVar6;
  (**(code **)(*plVar10 + 0x20))(plVar10,&puStack_10a0);
  func_0x00010725ab14(&puStack_10a0);
  func_0x000107410df4(&uStack_1090);
  return;
}



/* Entry: 10740e364; end: 10740e437;  */

undefined **
FUN_10740e364(undefined8 param_1,undefined8 param_2,double param_3,double param_4,undefined8 param_5
             ,undefined8 param_6,undefined8 *param_7,undefined ***param_8,double *param_9,
             double *param_10)

{
  code *pcVar1;
  bool bVar2;
  undefined1 in_ZR;
  uint uVar3;
  undefined ***pppuVar4;
  long *plVar5;
  long lVar6;
  undefined **ppuVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined ***pppuVar10;
  double *pdVar11;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  long extraout_x8_01;
  uint uVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  double dVar16;
  undefined **ppuVar17;
  double unaff_d9;
  double unaff_d10;
  double dVar18;
  double unaff_d11;
  double dVar19;
  double dVar20;
  double unaff_d12;
  undefined **ppuStack_2110;
  undefined **ppuStack_2108;
  undefined1 auStack_20b0 [16];
  byte bStack_20a0;
  undefined **ppuStack_2058;
  byte bStack_2050;
  undefined **ppuStack_2028;
  double dStack_2020;
  double dStack_2018;
  undefined8 uStack_2010;
  undefined1 auStack_2008 [76];
  uint uStack_1fbc;
  uint uStack_1fb8;
  double dStack_1fa0;
  undefined1 uStack_1f98;
  undefined **ppuStack_1f90;
  undefined1 uStack_1f88;
  undefined **ppuStack_11b8;
  long alStack_11b0 [14];
  double dStack_1140;
  undefined1 uStack_200;
  undefined **ppuStack_180;
  double dStack_178;
  double dStack_170;
  undefined8 uStack_168;
  long *plStack_160;
  undefined ***pppuStack_158;
  undefined ***pppuStack_150;
  undefined1 *puStack_140;
  code *pcStack_138;
  code *pcStack_a8;
  undefined **appuStack_a0 [3];
  undefined8 uStack_88;
  double dStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  double dStack_60;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  pppuVar10 = appuStack_a0;
  pppuVar4 = appuStack_a0;
  puVar9 = param_7;
  func_0x00010740f448();
  uStack_48 = extraout_x8;
  func_0x0001072594c0(puVar9);
  uStack_70 = param_7[1];
  uVar13 = *param_7;
  uStack_88 = param_2;
  dStack_80 = param_3;
  uStack_78 = uVar13;
  func_0x0001072594e0(param_7);
  uStack_50 = param_7[3];
  ppuVar14 = (undefined **)param_7[2];
  uStack_68 = uVar13;
  dStack_60 = param_3;
  ppuStack_58 = ppuVar14;
  FUN_10740eff4(appuStack_a0,&uStack_88,4);
  FUN_10740e438(param_1,param_6);
  func_0x00010725aef4();
  func_0x00010740f3cc(uStack_48);
  if ((bool)in_ZR) {
    return ppuVar14;
  }
  ___stack_chk_fail();
  func_0x00010725aef4();
  func_0x00010740f3c4();
  pcStack_a8 = FUN_10740e438;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar5 = (long *)pppuVar4;
  pdVar11 = param_9;
  func_0x00010740f448();
  pcStack_138 = (code *)extraout_x8_01;
  if ((((ulong)pdVar11[1] & 1) == 0) && (((ulong)param_10[1] & 1) == 0)) {
    func_0x00010785f1f4();
    plVar8 = plVar5 + 0x84;
    func_0x00010724e330();
    if ((((uint)plVar8 ^ 0xffffffff) & 0x101) != 0) {
      ppuVar17 = *pppuVar10;
      ppuVar7 = pppuVar10[1];
      if ((code *)*(long *)PTR____stack_chk_guard_11034bdc0 == pcStack_138) {
        lVar6 = (long)*pppuVar4 + 0x50;
        plVar8 = extraout_x8_00;
        func_0x00010740f4bc();
        plStack_160 = plVar5;
        pppuStack_158 = pppuVar10;
        pppuStack_150 = param_8;
        puStack_140 = &stack0xfffffffffffffff0;
        pcStack_138 = pcStack_a8;
        if (ppuVar17 == ppuVar7) {
          *(undefined1 *)plVar8 = 0;
          *(undefined1 *)(plVar8 + 2) = 0;
          *(undefined1 *)(plVar8 + 3) = 0;
          *(undefined1 *)(plVar8 + 7) = 0;
          *(undefined1 *)(plVar8 + 8) = 0;
          *(undefined1 *)(plVar8 + 10) = 0;
          *(undefined1 *)(plVar8 + 0xb) = 0;
          *(undefined1 *)(plVar8 + 0xc) = 0;
          func_0x00010740f480();
        }
        else {
          FUN_10740e868(ppuVar17,ppuVar7,lVar6);
          ppuStack_180 = ppuVar14;
          dStack_178 = param_3;
          dStack_170 = param_4;
          uStack_168 = param_5;
          func_0x00010740f458(plVar8,&ppuStack_180,lVar6);
        }
        return ppuVar14;
      }
      goto LAB_10740e818;
    }
    alStack_11b0[0] = 0;
    ppuStack_11b8 = (undefined **)0x0;
    ppuVar17 = (undefined **)0x4000000000000000;
    lVar6 = plVar5[0x87];
    if (((lVar6 != 0) &&
        (__ZNSt3__119__shared_weak_count4lockEv(), alStack_11b0[0] = lVar6, lVar6 != 0)) &&
       (ppuStack_11b8 = (undefined **)plVar5[0x86], ppuStack_11b8 != (undefined **)0x0)) {
      FUN_10740f294();
      ppuVar17 = ppuVar14;
    }
    FUN_10740f2d0(&ppuStack_11b8);
    func_0x00010785f1f4();
    alStack_11b0[0] = 0;
    ppuStack_11b8 = (undefined **)0x0;
    lVar6 = plVar5[0x89];
    if (((lVar6 == 0) ||
        (__ZNSt3__119__shared_weak_count4lockEv(), alStack_11b0[0] = lVar6, lVar6 == 0)) ||
       (ppuVar7 = (undefined **)plVar5[0x88], ppuStack_11b8 = ppuVar7, ppuVar7 == (undefined **)0x0)
       ) {
      uVar3 = 10;
    }
    else {
      func_0x00010740f2f8();
      uVar3 = (uint)ppuVar7;
    }
    func_0x00010740f32c(&ppuStack_11b8);
    func_0x00010740f3bc(auStack_2008,(long)*pppuVar4 + 0x58);
    FUN_107415e10(auStack_2008,param_8);
    func_0x00010740f390();
    func_0x00010740f36c();
    func_0x00010740f354();
    uStack_200 = 0;
    puStack_140 = (undefined1 *)((ulong)puStack_140 & 0xffffffffffffff00);
    FUN_10740e868(*pppuVar10,pppuVar10[1],&ppuStack_11b8);
    func_0x00010740f4a8();
    ppuStack_2028 = ppuVar14;
    dStack_2020 = param_3;
    dStack_2018 = param_4;
    uStack_2010 = param_5;
    func_0x00010740f410();
    uVar12 = 0;
    while( true ) {
      ppuVar14 = (undefined **)NEON_ucvtf((ulong)uStack_1fbc);
      param_3 = (double)NEON_ucvtf((ulong)uStack_1fb8);
      bVar2 = false;
      if ((ABS(unaff_d9) < (double)ppuVar17) &&
         (bVar2 = false, !NAN(ABS(unaff_d10 - (double)ppuVar14)) && !NAN((double)ppuVar17))) {
        bVar2 = ABS(unaff_d10 - (double)ppuVar14) < (double)ppuVar17;
      }
      if (bVar2) break;
LAB_10740e6fc:
      dVar16 = ABS(unaff_d11);
      param_3 = ABS(unaff_d12 - param_3);
      bVar2 = false;
      if ((dVar16 < (double)ppuVar17) && (bVar2 = false, !NAN(param_3) && !NAN((double)ppuVar17))) {
        bVar2 = param_3 < (double)ppuVar17;
      }
      if (bVar2) {
        in_ZR = false;
        bVar2 = true;
        if (0.0 <= unaff_d9) {
          in_ZR = false;
          bVar2 = true;
          if (!NAN(unaff_d10) && !NAN((double)ppuVar14)) {
            in_ZR = unaff_d10 == (double)ppuVar14;
            bVar2 = (double)ppuVar14 <= unaff_d10;
          }
        }
        if (!bVar2 || (bool)in_ZR) goto LAB_10740e7a4;
      }
      in_ZR = uVar3 == (uVar12 & 0xff);
      if (uVar3 <= (uVar12 & 0xff)) goto LAB_10740e7a4;
      func_0x00010740f390();
      func_0x00010740f36c();
      func_0x00010740f354();
      uStack_200 = 0;
      puStack_140 = (undefined1 *)((ulong)puStack_140 & 0xffffffffffffff00);
      func_0x00010740f458(auStack_20b0,&ppuStack_2028,&ppuStack_11b8);
      func_0x00010740f410();
      if ((bStack_20a0 & 1) == 0) {
        func_0x000104bdc2c8();
        goto LAB_10740e814;
      }
      if ((bStack_2050 & 1) == 0) {
        func_0x000104bdc2c8();
LAB_10740e814:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10740e818);
        (*pcVar1)();
      }
      ppuVar14 = ppuStack_2058;
      FUN_1074167ac(auStack_2008,auStack_20b0);
      func_0x00010740f390();
      func_0x00010740f36c();
      func_0x00010740f354();
      uStack_200 = 0;
      puStack_140 = (undefined1 *)((ulong)puStack_140 & 0xffffffffffffff00);
      FUN_10740e868(*pppuVar10,pppuVar10[1],&ppuStack_11b8);
      func_0x00010740f4a8();
      uVar12 = uVar12 + 1;
      ppuStack_2028 = ppuVar14;
      dStack_2020 = param_3;
      dStack_2018 = dVar16;
      uStack_2010 = param_5;
      func_0x00010740f410();
    }
    in_ZR = false;
    bVar2 = true;
    if (0.0 <= unaff_d11) {
      in_ZR = false;
      bVar2 = true;
      if (!NAN(unaff_d12) && !NAN(param_3)) {
        in_ZR = unaff_d12 == param_3;
        bVar2 = param_3 <= unaff_d12;
      }
    }
    if (bVar2 && !(bool)in_ZR) goto LAB_10740e6fc;
LAB_10740e7a4:
    ppuStack_11b8 = &PTR_PTR_1131ad558;
    pppuVar10 = &ppuStack_11b8;
    func_0x00010740f3bc(alStack_11b0,auStack_2008);
    func_0x00010740f36c();
    func_0x00010740f354();
    uStack_200 = 0;
    puStack_140 = (undefined1 *)((ulong)puStack_140 & 0xffffffffffffff00);
    plVar8 = extraout_x8_00;
    func_0x00010740f458(extraout_x8_00,&ppuStack_2028,&ppuStack_11b8);
  }
  else {
    ppuStack_11b8 = &PTR_PTR_1131ad558;
    func_0x00010740f3bc(alStack_11b0,(long)*pppuVar4 + 0x58);
    func_0x00010740f36c();
    func_0x00010740f354();
    uStack_200 = 0;
    puStack_140 = (undefined1 *)((ulong)puStack_140 & 0xffffffffffffff00);
    if ((((ulong)param_9[1] & 1) != 0) || (((ulong)param_10[1] & 1) != 0)) {
      _bzero(auStack_2008,0x88);
      dStack_1fa0 = *param_9;
      uStack_1f98 = *(undefined1 *)(param_9 + 1);
      ppuStack_1f90 = (undefined **)*param_10;
      uStack_1f88 = *(undefined1 *)(param_10 + 1);
      FUN_107411f4c(&ppuStack_11b8,auStack_2008);
    }
    FUN_10740eaac(auStack_2008,*pppuVar10,pppuVar10[1],&ppuStack_11b8,param_8);
    dVar16 = dStack_1140 * -57.29577951308232;
    param_8 = (undefined ***)0x1;
    uStack_1f98 = 1;
    dStack_1fa0 = dVar16;
    FUN_1074163dc(alStack_11b0);
    param_3 = 57.29577951308232;
    ppuVar14 = (undefined **)(dVar16 * 57.29577951308232);
    uStack_1f88 = 1;
    plVar8 = extraout_x8_00;
    ppuStack_1f90 = ppuVar14;
    _memcpy(extraout_x8_00,auStack_2008,0x88);
  }
  func_0x00010740f410();
  func_0x00010740f3cc(pcStack_138);
  if ((bool)in_ZR) {
    func_0x00010740f4bc(FUN_10740e438);
    return ppuVar14;
  }
LAB_10740e818:
  ___stack_chk_fail();
  func_0x00010740f32c(&ppuStack_11b8);
  func_0x00010740f3c4();
  func_0x00010740f3e8();
  ppuVar14 = (undefined **)0xfff0000000000000;
  ppuVar17 = (undefined **)0x7ff0000000000000;
  dVar16 = INFINITY;
  dVar19 = -INFINITY;
  while (dVar18 = dVar16, pppuVar10 != param_8) {
    pppuVar4 = pppuVar10 + 2;
    ppuStack_2108 = pppuVar10[1];
    ppuVar15 = *pppuVar10;
    ppuStack_2110 = ppuVar15;
    FUN_107413c70(plVar8,&ppuStack_2110);
    ppuVar7 = ppuVar15;
    if ((double)ppuVar15 <= (double)ppuVar14) {
      ppuVar7 = ppuVar14;
    }
    if ((double)ppuVar17 <= (double)ppuVar15) {
      ppuVar15 = ppuVar17;
    }
    dVar20 = param_3;
    if (param_3 <= dVar19) {
      dVar20 = dVar19;
    }
    pppuVar10 = pppuVar4;
    ppuVar14 = ppuVar7;
    ppuVar17 = ppuVar15;
    dVar16 = param_3;
    dVar19 = dVar20;
    if (dVar18 <= param_3) {
      dVar16 = dVar18;
    }
  }
  return ppuVar17;
}



/* Entry: 10740e438; end: 10740e867;  */

undefined **
FUN_10740e438(undefined **param_1,double param_2,double param_3,undefined8 param_4,long *param_5,
             undefined ***param_6,undefined ***param_7,double *param_8,double *param_9)

{
  code *pcVar1;
  bool bVar2;
  undefined1 in_ZR;
  uint uVar3;
  long *plVar4;
  long lVar5;
  undefined **ppuVar6;
  long *plVar7;
  double *pdVar8;
  long *extraout_x8;
  long extraout_x8_00;
  undefined ***pppuVar9;
  uint uVar10;
  undefined8 unaff_x30;
  undefined **ppuVar11;
  double dVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  double unaff_d9;
  double unaff_d10;
  double dVar15;
  double unaff_d11;
  double dVar16;
  double dVar17;
  double unaff_d12;
  undefined **ppuStack_2070;
  undefined **ppuStack_2068;
  undefined1 auStack_2010 [16];
  byte bStack_2000;
  undefined **ppuStack_1fb8;
  byte bStack_1fb0;
  undefined **ppuStack_1f88;
  double dStack_1f80;
  double dStack_1f78;
  undefined8 uStack_1f70;
  undefined1 auStack_1f68 [76];
  uint uStack_1f1c;
  uint uStack_1f18;
  double dStack_1f00;
  undefined1 uStack_1ef8;
  undefined **ppuStack_1ef0;
  undefined1 uStack_1ee8;
  undefined **ppuStack_1118;
  long alStack_1110 [14];
  double dStack_10a0;
  undefined1 uStack_160;
  undefined **ppuStack_e0;
  double dStack_d8;
  double dStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  undefined ***pppuStack_b8;
  undefined ***pppuStack_b0;
  ulong uStack_a0;
  long lStack_98;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar4 = param_5;
  pdVar8 = param_8;
  func_0x00010740f448();
  lStack_98 = extraout_x8_00;
  if ((((ulong)pdVar8[1] & 1) == 0) && (((ulong)param_9[1] & 1) == 0)) {
    func_0x00010785f1f4();
    plVar7 = plVar4 + 0x84;
    func_0x00010724e330();
    if ((((uint)plVar7 ^ 0xffffffff) & 0x101) != 0) {
      ppuVar6 = *param_6;
      ppuVar13 = param_6[1];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
        lVar5 = *param_5 + 0x50;
        plVar7 = extraout_x8;
        func_0x00010740f4bc();
        plStack_c0 = plVar4;
        pppuStack_b8 = param_6;
        pppuStack_b0 = param_7;
        if (ppuVar6 == ppuVar13) {
          *(undefined1 *)plVar7 = 0;
          *(undefined1 *)(plVar7 + 2) = 0;
          *(undefined1 *)(plVar7 + 3) = 0;
          *(undefined1 *)(plVar7 + 7) = 0;
          *(undefined1 *)(plVar7 + 8) = 0;
          *(undefined1 *)(plVar7 + 10) = 0;
          *(undefined1 *)(plVar7 + 0xb) = 0;
          *(undefined1 *)(plVar7 + 0xc) = 0;
          func_0x00010740f480();
        }
        else {
          FUN_10740e868(ppuVar6,ppuVar13,lVar5);
          ppuStack_e0 = param_1;
          dStack_d8 = param_2;
          dStack_d0 = param_3;
          uStack_c8 = param_4;
          func_0x00010740f458(plVar7,&ppuStack_e0,lVar5);
        }
        return param_1;
      }
      goto LAB_10740e818;
    }
    alStack_1110[0] = 0;
    ppuStack_1118 = (undefined **)0x0;
    ppuVar13 = (undefined **)0x4000000000000000;
    lVar5 = plVar4[0x87];
    if (((lVar5 != 0) &&
        (__ZNSt3__119__shared_weak_count4lockEv(), alStack_1110[0] = lVar5, lVar5 != 0)) &&
       (ppuStack_1118 = (undefined **)plVar4[0x86], ppuStack_1118 != (undefined **)0x0)) {
      FUN_10740f294();
      ppuVar13 = param_1;
    }
    FUN_10740f2d0(&ppuStack_1118);
    func_0x00010785f1f4();
    alStack_1110[0] = 0;
    ppuStack_1118 = (undefined **)0x0;
    lVar5 = plVar4[0x89];
    if (((lVar5 == 0) ||
        (__ZNSt3__119__shared_weak_count4lockEv(), alStack_1110[0] = lVar5, lVar5 == 0)) ||
       (ppuVar6 = (undefined **)plVar4[0x88], ppuStack_1118 = ppuVar6, ppuVar6 == (undefined **)0x0)
       ) {
      uVar3 = 10;
    }
    else {
      func_0x00010740f2f8();
      uVar3 = (uint)ppuVar6;
    }
    func_0x00010740f32c(&ppuStack_1118);
    func_0x00010740f3bc(auStack_1f68,*param_5 + 0x58);
    FUN_107415e10(auStack_1f68,param_7);
    func_0x00010740f390();
    func_0x00010740f36c();
    func_0x00010740f354();
    uStack_160 = 0;
    uStack_a0 = uStack_a0 & 0xffffffffffffff00;
    FUN_10740e868(*param_6,param_6[1],&ppuStack_1118);
    func_0x00010740f4a8();
    ppuStack_1f88 = param_1;
    dStack_1f80 = param_2;
    dStack_1f78 = param_3;
    uStack_1f70 = param_4;
    func_0x00010740f410();
    uVar10 = 0;
    while( true ) {
      ppuVar6 = (undefined **)NEON_ucvtf((ulong)uStack_1f1c);
      param_2 = (double)NEON_ucvtf((ulong)uStack_1f18);
      bVar2 = false;
      if ((ABS(unaff_d9) < (double)ppuVar13) &&
         (bVar2 = false, !NAN(ABS(unaff_d10 - (double)ppuVar6)) && !NAN((double)ppuVar13))) {
        bVar2 = ABS(unaff_d10 - (double)ppuVar6) < (double)ppuVar13;
      }
      if (bVar2) break;
LAB_10740e6fc:
      dVar12 = ABS(unaff_d11);
      param_2 = ABS(unaff_d12 - param_2);
      bVar2 = false;
      if ((dVar12 < (double)ppuVar13) && (bVar2 = false, !NAN(param_2) && !NAN((double)ppuVar13))) {
        bVar2 = param_2 < (double)ppuVar13;
      }
      if (bVar2) {
        in_ZR = false;
        bVar2 = true;
        if (0.0 <= unaff_d9) {
          in_ZR = false;
          bVar2 = true;
          if (!NAN(unaff_d10) && !NAN((double)ppuVar6)) {
            in_ZR = unaff_d10 == (double)ppuVar6;
            bVar2 = (double)ppuVar6 <= unaff_d10;
          }
        }
        if (!bVar2 || (bool)in_ZR) goto LAB_10740e7a4;
      }
      in_ZR = uVar3 == (uVar10 & 0xff);
      if (uVar3 <= (uVar10 & 0xff)) goto LAB_10740e7a4;
      func_0x00010740f390();
      func_0x00010740f36c();
      func_0x00010740f354();
      uStack_160 = 0;
      uStack_a0 = uStack_a0 & 0xffffffffffffff00;
      func_0x00010740f458(auStack_2010,&ppuStack_1f88,&ppuStack_1118);
      func_0x00010740f410();
      if ((bStack_2000 & 1) == 0) {
        func_0x000104bdc2c8();
        goto LAB_10740e814;
      }
      if ((bStack_1fb0 & 1) == 0) {
        func_0x000104bdc2c8();
LAB_10740e814:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10740e818);
        (*pcVar1)();
      }
      ppuVar6 = ppuStack_1fb8;
      FUN_1074167ac(auStack_1f68,auStack_2010);
      func_0x00010740f390();
      func_0x00010740f36c();
      func_0x00010740f354();
      uStack_160 = 0;
      uStack_a0 = uStack_a0 & 0xffffffffffffff00;
      FUN_10740e868(*param_6,param_6[1],&ppuStack_1118);
      func_0x00010740f4a8();
      uVar10 = uVar10 + 1;
      ppuStack_1f88 = ppuVar6;
      dStack_1f80 = param_2;
      dStack_1f78 = dVar12;
      uStack_1f70 = param_4;
      func_0x00010740f410();
    }
    in_ZR = false;
    bVar2 = true;
    if (0.0 <= unaff_d11) {
      in_ZR = false;
      bVar2 = true;
      if (!NAN(unaff_d12) && !NAN(param_2)) {
        in_ZR = unaff_d12 == param_2;
        bVar2 = param_2 <= unaff_d12;
      }
    }
    if (bVar2 && !(bool)in_ZR) goto LAB_10740e6fc;
LAB_10740e7a4:
    ppuStack_1118 = &PTR_PTR_1131ad558;
    param_6 = &ppuStack_1118;
    func_0x00010740f3bc(alStack_1110,auStack_1f68);
    func_0x00010740f36c();
    func_0x00010740f354();
    uStack_160 = 0;
    uStack_a0 = uStack_a0 & 0xffffffffffffff00;
    plVar7 = extraout_x8;
    func_0x00010740f458(extraout_x8,&ppuStack_1f88,&ppuStack_1118);
  }
  else {
    ppuStack_1118 = &PTR_PTR_1131ad558;
    func_0x00010740f3bc(alStack_1110,*param_5 + 0x58);
    func_0x00010740f36c();
    func_0x00010740f354();
    uStack_160 = 0;
    uStack_a0 = uStack_a0 & 0xffffffffffffff00;
    if ((((ulong)param_8[1] & 1) != 0) || (((ulong)param_9[1] & 1) != 0)) {
      _bzero(auStack_1f68,0x88);
      dStack_1f00 = *param_8;
      uStack_1ef8 = *(undefined1 *)(param_8 + 1);
      ppuStack_1ef0 = (undefined **)*param_9;
      uStack_1ee8 = *(undefined1 *)(param_9 + 1);
      FUN_107411f4c(&ppuStack_1118,auStack_1f68);
    }
    FUN_10740eaac(auStack_1f68,*param_6,param_6[1],&ppuStack_1118,param_7);
    dVar12 = dStack_10a0 * -57.29577951308232;
    param_7 = (undefined ***)0x1;
    uStack_1ef8 = 1;
    dStack_1f00 = dVar12;
    FUN_1074163dc(alStack_1110);
    param_2 = 57.29577951308232;
    ppuVar6 = (undefined **)(dVar12 * 57.29577951308232);
    uStack_1ee8 = 1;
    plVar7 = extraout_x8;
    ppuStack_1ef0 = ppuVar6;
    _memcpy(extraout_x8,auStack_1f68,0x88);
  }
  func_0x00010740f410();
  func_0x00010740f3cc(lStack_98);
  if ((bool)in_ZR) {
    func_0x00010740f4bc(unaff_x30);
    return ppuVar6;
  }
LAB_10740e818:
  ___stack_chk_fail();
  func_0x00010740f32c(&ppuStack_1118);
  func_0x00010740f3c4();
  func_0x00010740f3e8();
  ppuVar6 = (undefined **)0xfff0000000000000;
  ppuVar13 = (undefined **)0x7ff0000000000000;
  dVar12 = INFINITY;
  dVar16 = -INFINITY;
  while (dVar15 = dVar12, param_6 != param_7) {
    pppuVar9 = param_6 + 2;
    ppuStack_2068 = param_6[1];
    ppuVar11 = *param_6;
    ppuStack_2070 = ppuVar11;
    FUN_107413c70(plVar7,&ppuStack_2070);
    ppuVar14 = ppuVar11;
    if ((double)ppuVar11 <= (double)ppuVar6) {
      ppuVar14 = ppuVar6;
    }
    if ((double)ppuVar13 <= (double)ppuVar11) {
      ppuVar11 = ppuVar13;
    }
    dVar17 = param_2;
    if (param_2 <= dVar16) {
      dVar17 = dVar16;
    }
    param_6 = pppuVar9;
    ppuVar6 = ppuVar14;
    ppuVar13 = ppuVar11;
    dVar12 = param_2;
    dVar16 = dVar17;
    if (dVar15 <= param_2) {
      dVar12 = dVar15;
    }
  }
  return ppuVar13;
}



/* Entry: 10740e868; end: 10740e90b;  */

double FUN_10740e868(undefined8 param_1,double param_2)

{
  double *unaff_x20;
  double *unaff_x21;
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  func_0x00010740f3e8();
  dVar3 = -INFINITY;
  dVar5 = INFINITY;
  dVar4 = INFINITY;
  dVar7 = -INFINITY;
  while (dVar6 = dVar4, unaff_x21 != unaff_x20) {
    pdVar1 = unaff_x21 + 2;
    dVar2 = *unaff_x21;
    FUN_107413c70();
    dVar4 = dVar2;
    if (dVar2 <= dVar3) {
      dVar4 = dVar3;
    }
    if (dVar5 <= dVar2) {
      dVar2 = dVar5;
    }
    dVar8 = param_2;
    if (param_2 <= dVar7) {
      dVar8 = dVar7;
    }
    unaff_x21 = pdVar1;
    dVar3 = dVar4;
    dVar5 = dVar2;
    dVar4 = param_2;
    dVar7 = dVar8;
    if (dVar6 <= param_2) {
      dVar4 = dVar6;
    }
  }
  return dVar5;
}



/* Entry: 10740e90c; end: 10740eaab;  */

void FUN_10740e90c(double *param_1,double *param_2,long param_3,double *param_4)

{
  undefined1 uVar1;
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dStack_70;
  double dStack_68;
  
  dVar7 = param_2[2];
  dVar8 = param_2[3];
  dVar9 = *param_2;
  dVar10 = param_2[1];
  dVar4 = dVar7 - dVar9;
  dVar2 = dVar8 - dVar10;
  if ((0.0 < dVar4) || (0.0 < dVar2)) {
    dVar6 = (double)NEON_ucvtf((ulong)*(uint *)(param_3 + 0x54));
    dVar5 = (double)NEON_ucvtf((ulong)*(uint *)(param_3 + 0x58));
    dVar2 = (double)NEON_fminnm(dVar6 / dVar4 - (param_4[1] + param_4[3]) / dVar4,
                                dVar5 / dVar2 - (*param_4 + param_4[2]) / dVar2);
  }
  else {
    dVar2 = INFINITY;
  }
  dVar4 = *(double *)(param_3 + 0x80);
  _log2();
  if (0.0 < dVar2) {
    _log2();
    dVar4 = dVar2 + dVar4;
    FUN_1074169e0(param_3 + 8);
    uVar3 = *(undefined8 *)(param_3 + 0x38);
    _log2();
    dVar7 = (double)NEON_fminnm(uVar3,dVar4);
    dVar4 = dVar2;
    if (dVar2 <= dVar7) {
      dVar4 = dVar7;
    }
    dVar7 = param_2[2];
    dVar8 = param_2[3];
    dVar9 = *param_2;
    dVar10 = param_2[1];
  }
  dVar2 = (dVar7 + dVar9) * 0.5;
  dVar7 = (dVar8 + dVar10) * 0.5;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)((long)param_1 + 0x39) = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x41) = 0;
  param_1[9] = 0.0;
  *(undefined4 *)((long)param_1 + 0x51) = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0;
  *(undefined4 *)((long)param_1 + 0x61) = 0;
  *(undefined4 *)((long)param_1 + 100) = 0;
  *(undefined4 *)((long)param_1 + 0x69) = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0;
  *(undefined4 *)((long)param_1 + 0x74) = 0;
  *(undefined4 *)((long)param_1 + 0x71) = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = 0;
  *(undefined4 *)((long)param_1 + 0x79) = 0;
  *(undefined4 *)((long)param_1 + 0x84) = 0;
  *(undefined4 *)((long)param_1 + 0x81) = 0;
  dStack_70 = dVar2;
  dStack_68 = dVar7;
  func_0x00010740f460(param_3,&dStack_70);
  uVar1 = *(undefined1 *)param_4;
  uVar3 = *(undefined8 *)((long)param_4 + 1);
  *(undefined8 *)((long)param_1 + 0x21) = *(undefined8 *)((long)param_4 + 9);
  *(undefined8 *)((long)param_1 + 0x19) = uVar3;
  dVar8 = param_4[2];
  param_1[6] = param_4[3];
  param_1[5] = dVar8;
  *param_1 = dVar2;
  param_1[1] = dVar7;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined1 *)(param_1 + 3) = uVar1;
  *(undefined1 *)(param_1 + 7) = 1;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xb] = dVar4;
  *(undefined1 *)(param_1 + 0xc) = 1;
  func_0x00010740f480();
  return;
}



/* Entry: 10740eaac; end: 10740eb37;  */

void FUN_10740eaac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5,long param_6,long param_7,undefined8 param_8)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_6 == param_7) {
    *param_5 = 0;
    param_5[0x10] = 0;
    param_5[0x18] = 0;
    param_5[0x38] = 0;
    param_5[0x40] = 0;
    param_5[0x50] = 0;
    param_5[0x58] = 0;
    param_5[0x60] = 0;
    func_0x00010740f480();
  }
  else {
    FUN_10740e868(param_6,param_7,param_8);
    uStack_50 = param_1;
    uStack_48 = param_2;
    uStack_40 = param_3;
    uStack_38 = param_4;
    func_0x00010740f458(param_5,&uStack_50,param_8);
  }
  return;
}


