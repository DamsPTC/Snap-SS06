/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101f33170; end: 101f331af;  */

void FUN_101f33170(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_101f332ac(&uStack_50);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_48;
    *param_1 = uStack_50;
    param_1[3] = uStack_38;
    param_1[2] = uStack_40;
    param_1[5] = uStack_28;
    param_1[4] = uStack_30;
  }
  return;
}



/* Entry: 101f331b0; end: 101f332ab;  */

/* WARNING: Possible PIC construction at 0x000101f331e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f331e4) */

long FUN_101f331b0(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *param_1;
  if (lVar1 != *param_2 || param_1[1] != param_2[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )();
    return lVar1;
  }
  uVar2 = param_1[2];
  if ((uVar2 == param_2[2] && param_1[3] == param_2[3]) || (func_0x000107c605b8(), (uVar2 & 1) != 0)
     ) {
    lVar1 = param_1[4];
    if ((lVar1 != param_2[4]) || (param_1[5] != param_2[5])) goto code_r0x000107c605b8;
    lVar1 = 1;
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 101f332ac; end: 101f33487;  */

/* WARNING: Removing unreachable block (ram,0x000101f33420) */
/* WARNING: Removing unreachable block (ram,0x000101f333e0) */
/* WARNING: Removing unreachable block (ram,0x000101f33430) */
/* WARNING: Removing unreachable block (ram,0x000101f33444) */
/* WARNING: Removing unreachable block (ram,0x000101f33378) */

void FUN_101f332ac(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long extraout_x8;
  long unaff_x21;
  long lVar9;
  undefined1 auStack_80 [8];
  undefined1 *puStack_78;
  long lStack_70;
  undefined1 *puStack_68;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0x112e41c98;
  func_0x0001000285a8(0x112e41c98,&UNK_10da31028);
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_101f33720();
  func_0x000107c606e0(auStack_80 + -extraout_x8,&UNK_1104a2270,&UNK_1104a2270,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    puVar5 = &uStack_51;
    lVar4 = lVar3;
    func_0x000107c604f4();
    uStack_52 = 1;
    puVar6 = &uStack_52;
    lVar7 = lVar3;
    puStack_68 = puVar5;
    func_0x000107c604f4();
    uStack_53 = 2;
    puVar5 = &uStack_53;
    lVar8 = lVar3;
    puStack_78 = puVar6;
    lStack_70 = lVar7;
    func_0x000107c604f4();
    (**(code **)(lVar9 + 8))(auStack_80 + -extraout_x8,lVar3);
    func_0x0001000834e4(param_2);
    *param_1 = puStack_68;
    param_1[1] = lVar4;
    param_1[2] = puStack_78;
    param_1[3] = lStack_70;
    param_1[4] = puVar5;
    param_1[5] = lVar8;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 101f33488; end: 101f334ab;  */

void FUN_101f33488(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101f334ac();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101f334ac; end: 101f334eb;  */

void FUN_101f334ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41c90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da30fe4;
  func_0x000107c61520(&UNK_10da30fe4,&UNK_1104a21d0);
  puRam0000000112e41c90 = puVar1;
  return;
}



/* Entry: 101f334ec; end: 101f33547;  */

long FUN_101f334ec(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101f33548; end: 101f33627;  */

undefined8 * FUN_101f33548(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 101f33628; end: 101f3367b;  */

undefined8 * FUN_101f33628(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 101f3367c; end: 101f3371f;  */

int FUN_101f3367c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101f33720; end: 101f3375f;  */

void FUN_101f33720(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41ca0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da3112c;
  func_0x000107c61520(&UNK_10da3112c,&UNK_1104a2270);
  puRam0000000112e41ca0 = puVar1;
  return;
}



/* Entry: 101f33760; end: 101f338c7;  */

int FUN_101f33760(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101f337dc;
        goto LAB_101f337c0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101f337c0:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_101f337dc:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101f338c8; end: 101f33907;  */

void FUN_101f338c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41ca8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da31104;
  func_0x000107c61520(&UNK_10da31104,&UNK_1104a2270);
  puRam0000000112e41ca8 = puVar1;
  return;
}



/* Entry: 101f33908; end: 101f3390b;  */

void FUN_101f33908(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41cb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da31064;
  func_0x000107c61520(&UNK_10da31064,&UNK_1104a2270);
  puRam0000000112e41cb0 = puVar1;
  return;
}



/* Entry: 101f3390c; end: 101f3394b;  */

void FUN_101f3390c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41cb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da31064;
  func_0x000107c61520(&UNK_10da31064,&UNK_1104a2270);
  puRam0000000112e41cb0 = puVar1;
  return;
}



/* Entry: 101f3394c; end: 101f3394f;  */

void FUN_101f3394c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41cb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da3103c;
  func_0x000107c61520(&UNK_10da3103c,&UNK_1104a2270);
  puRam0000000112e41cb8 = puVar1;
  return;
}



/* Entry: 101f33950; end: 101f3398f;  */

void FUN_101f33950(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41cb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da3103c;
  func_0x000107c61520(&UNK_10da3103c,&UNK_1104a2270);
  puRam0000000112e41cb8 = puVar1;
  return;
}



/* Entry: 101f33990; end: 101f33997;  */

undefined8 FUN_101f33990(void)

{
  return 1;
}



/* Entry: 101f33998; end: 101f339eb;  */

void FUN_101f33998(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c5fb58(auStack_68,0x692d646e65697266,0xe900000000000064);
  func_0x000107c606a8();
  return;
}



/* Entry: 101f339ec; end: 101f33a07;  */

void FUN_101f339ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)
            (param_1,0x692d646e65697266,0xe900000000000064);
  return;
}



/* Entry: 101f33a08; end: 101f33a57;  */

void FUN_101f33a08(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  func_0x000107c5fb58(auStack_68,0x692d646e65697266,0xe900000000000064);
  func_0x000107c606a8();
  return;
}



/* Entry: 101f33a58; end: 101f33ac3;  */

void FUN_101f33a58(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  lVar2 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar1);
  *(bool *)param_1 = lVar2 != 0;
  return;
}



/* Entry: 101f33ac4; end: 101f33aff;  */

void FUN_101f33ac4(undefined8 *param_1)

{
  *param_1 = 0x692d646e65697266;
  param_1[1] = 0xe900000000000064;
  return;
}



/* Entry: 101f33b00; end: 101f33b6f;  */

void FUN_101f33b00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_3);
  *(bool *)param_1 = lVar1 != 0;
  return;
}



/* Entry: 101f33b70; end: 101f33b87;  */

undefined1  [16] FUN_101f33b70(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101f33b88; end: 101f33bd7;  */

void FUN_101f33b88(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_101f33bd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101f33bd8; end: 101f33c17;  */

void FUN_101f33bd8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41d38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da31310;
  func_0x000107c61520(&UNK_10da31310,&UNK_1104a2460);
  puRam0000000112e41d38 = puVar1;
  return;
}



/* Entry: 101f33c18; end: 101f33c33;  */

undefined1  [16] FUN_101f33c18(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xea00000000007465;
  auVar1._0_8_ = 0x676469772d646461;
  return auVar1;
}



/* Entry: 101f33c34; end: 101f33c57;  */

void FUN_101f33c34(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101f33c58();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101f33c58; end: 101f33c97;  */

void FUN_101f33c58(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41d40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da311cc;
  func_0x000107c61520(&UNK_10da311cc,&UNK_1104a23c8);
  puRam0000000112e41d40 = puVar1;
  return;
}



/* Entry: 101f33c98; end: 101f33cc7;  */

long FUN_101f33c98(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != *param_2 || param_1[1] != param_2[1]) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )();
    return lVar1;
  }
  return 1;
}



/* Entry: 101f33cc8; end: 101f33def;  */

/* WARNING: Removing unreachable block (ram,0x000101f33d8c) */

void FUN_101f33cc8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  
  lVar3 = 0x112e41d30;
  func_0x0001000285a8(0x112e41d30,&UNK_10da31180);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_101f33bd8();
  puVar5 = &UNK_1104a2460;
  func_0x000107c606e0(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_1104a2460,&UNK_1104a2460,lVar4,
                      uVar1,uVar2);
  if (unaff_x21 == 0) {
    lVar4 = lVar3;
    func_0x000107c604f4();
    (**(code **)(lVar6 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar3);
    func_0x0001000834e4(param_2);
    *param_1 = puVar5;
    param_1[1] = lVar4;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 101f33df0; end: 101f33df7;  */

void FUN_101f33df0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 101f33df8; end: 101f33e67;  */

undefined8 * FUN_101f33df8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 101f33e68; end: 101f33feb;  */

int FUN_101f33e68(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101f33fec; end: 101f3402b;  */

void FUN_101f33fec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41d48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da312e8;
  func_0x000107c61520(&UNK_10da312e8,&UNK_1104a2460);
  puRam0000000112e41d48 = puVar1;
  return;
}



/* Entry: 101f3402c; end: 101f3402f;  */

void FUN_101f3402c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41d50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da31248;
  func_0x000107c61520(&UNK_10da31248,&UNK_1104a2460);
  puRam0000000112e41d50 = puVar1;
  return;
}



/* Entry: 101f34030; end: 101f3406f;  */

void FUN_101f34030(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41d50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da31248;
  func_0x000107c61520(&UNK_10da31248,&UNK_1104a2460);
  puRam0000000112e41d50 = puVar1;
  return;
}



/* Entry: 101f34070; end: 101f34073;  */

void FUN_101f34070(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41d58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da31220;
  func_0x000107c61520(&UNK_10da31220,&UNK_1104a2460);
  puRam0000000112e41d58 = puVar1;
  return;
}



/* Entry: 101f34074; end: 101f340b3;  */

void FUN_101f34074(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41d58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da31220;
  func_0x000107c61520(&UNK_10da31220,&UNK_1104a2460);
  puRam0000000112e41d58 = puVar1;
  return;
}



/* Entry: 101f340b4; end: 101f340bb;  */

undefined8 * FUN_101f340b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 101f340bc; end: 101f34473;  */

undefined8 FUN_101f340bc(long param_1,long param_2)

{
  long *plVar1;
  double dVar2;
  char cVar3;
  byte bVar4;
  code *pcVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  double *pdVar14;
  ulong uVar15;
  long lVar16;
  ulong uStack_68;
  
  if (param_1 == param_2) {
    return 1;
  }
  if (*(long *)(param_1 + 0x10) != *(long *)(param_2 + 0x10)) {
    return 0;
  }
  uVar15 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uStack_68 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uStack_68 = ~(-1L << (uVar15 & 0x3f));
  }
  uStack_68 = uStack_68 & *(ulong *)(param_1 + 0x40);
  func_0x000107c61438(param_1,2);
  func_0x000107c61434(param_2);
  lVar6 = 0;
LAB_101f34150:
  if (uStack_68 == 0) {
    do {
      lVar16 = lVar6 + 1;
      if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101f34474);
        (*pcVar5)();
      }
      if ((long)(uVar15 + 0x3f >> 6) <= lVar16) {
        func_0x000107c6142c(param_2);
        func_0x000107c61430(param_1,2);
        return 1;
      }
      uStack_68 = ((ulong *)(param_1 + 0x40))[lVar16];
      lVar6 = lVar6 + 1;
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
    lVar16 = lVar6;
  }
  uVar13 = LZCOUNT(uVar12) | lVar16 << 6;
  plVar1 = (long *)(*(long *)(param_1 + 0x30) + uVar13 * 0x10);
  lVar6 = *plVar1;
  uVar12 = plVar1[1];
  pdVar14 = (double *)(*(long *)(param_1 + 0x38) + uVar13 * 0x18);
  dVar9 = *pdVar14;
  dVar2 = pdVar14[1];
  cVar3 = *(char *)(pdVar14 + 2);
  func_0x000107c61434(uVar12);
  func_0x000101f347b4(dVar9,dVar2,cVar3);
  uVar13 = uVar12;
  func_0x000100029284();
  func_0x000107c6142c(uVar12);
  if ((uVar13 & 1) == 0) {
    func_0x000107c6142c(param_2);
    func_0x000107c61430(param_1,2);
    func_0x000101f347f4(dVar9,dVar2,cVar3);
    return 0;
  }
  pdVar14 = (double *)(*(long *)(param_2 + 0x38) + lVar6 * 0x18);
  dVar8 = *pdVar14;
  dVar10 = pdVar14[1];
  bVar4 = *(byte *)(pdVar14 + 2);
  lVar6 = lVar16;
  if (bVar4 < 4) {
    if (bVar4 < 2) {
      if (bVar4 == 0) {
        if (cVar3 == '\0') {
          if (((SUB84(dVar8,0) ^ SUB84(dVar9,0)) & 1) != 0) goto LAB_101f34438;
          goto LAB_101f34150;
        }
      }
      else if (cVar3 == '\x01') {
        if (dVar8 != dVar9 || dVar10 != dVar2) {
          func_0x000107c605b8(dVar8,dVar10,dVar9,dVar2,0);
          uVar11 = 1;
          dVar10 = dVar2;
          dVar7 = dVar8;
          goto LAB_101f3435c;
        }
        func_0x000101f347f4(dVar9,dVar2,1);
        goto LAB_101f34150;
      }
    }
    else if (bVar4 == 2) {
      if (cVar3 == '\x02') {
LAB_101f34378:
        if (dVar8 != dVar9) goto LAB_101f34438;
        goto LAB_101f34150;
      }
    }
    else if (cVar3 == '\x03') goto LAB_101f34378;
  }
  else {
    dVar7 = dVar8;
    if (5 < bVar4) {
      if (bVar4 == 6) {
        if (cVar3 == '\x06') {
          func_0x000107c61434();
          FUN_101f340bc();
          func_0x000101f347f4(dVar9,dVar2,6);
          uVar11 = 6;
          dVar9 = dVar8;
          goto LAB_101f3435c;
        }
        goto LAB_101f3440c;
      }
      if (cVar3 != '\a' || (dVar2 != 0.0 || dVar9 != 0.0)) {
        func_0x000101f347f4(dVar9,dVar2,cVar3);
LAB_101f34438:
        func_0x000107c6142c(param_2);
LAB_101f34444:
        func_0x000107c61430(param_1,2);
        return 0;
      }
      goto LAB_101f34150;
    }
    if (bVar4 == 4) {
      if (cVar3 != '\x04') goto LAB_101f3440c;
      if (dVar8 != dVar9) goto LAB_101f34438;
      goto LAB_101f34150;
    }
    if (cVar3 == '\x05') {
      func_0x000107c61434();
      FUN_101f421f8();
      func_0x000101f347f4(dVar9,dVar2,5);
      uVar11 = 5;
      dVar9 = dVar8;
LAB_101f3435c:
      func_0x000101f347f4(dVar9,dVar10,uVar11);
      if (((ulong)dVar7 & 1) == 0) goto LAB_101f34438;
      goto LAB_101f34150;
    }
  }
LAB_101f3440c:
  func_0x000101f347f4(dVar9,dVar2,cVar3);
  func_0x000107c6142c(param_2);
  goto LAB_101f34444;
}



/* Entry: 101f34474; end: 101f344d3;  */

undefined8 FUN_101f34474(ulong *param_1,ulong *param_2)

{
  long *plVar1;
  double dVar2;
  ulong uVar3;
  char cVar4;
  byte bVar5;
  code *pcVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  ulong uVar11;
  double dVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  double *pdVar16;
  long lVar17;
  ulong uVar18;
  ulong uStack_68;
  
  uVar11 = *param_1;
  uVar3 = param_1[2];
  uVar18 = param_2[2];
  if ((uVar11 != *param_2 || param_1[1] != param_2[1]) && (func_0x000107c605b8(), (uVar11 & 1) == 0)
     ) {
    return 0;
  }
  if (uVar3 == uVar18) {
    return 1;
  }
  if (*(long *)(uVar3 + 0x10) != *(long *)(uVar18 + 0x10)) {
    return 0;
  }
  uVar11 = 1L << ((ulong)*(byte *)(uVar3 + 0x20) & 0x3f);
  uStack_68 = 0xffffffffffffffff;
  if ((*(byte *)(uVar3 + 0x20) & 0x3f) < 6) {
    uStack_68 = ~(-1L << (uVar11 & 0x3f));
  }
  uStack_68 = uStack_68 & *(ulong *)(uVar3 + 0x40);
  func_0x000107c61438(uVar3,2);
  func_0x000107c61434(uVar18);
  lVar7 = 0;
LAB_101f34150:
  if (uStack_68 == 0) {
    do {
      lVar17 = lVar7 + 1;
      if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101f34474);
        (*pcVar6)();
      }
      if ((long)(uVar11 + 0x3f >> 6) <= lVar17) {
        func_0x000107c6142c(uVar18);
        func_0x000107c61430(uVar3,2);
        return 1;
      }
      uStack_68 = ((ulong *)(uVar3 + 0x40))[lVar17];
      lVar7 = lVar7 + 1;
    } while (uStack_68 == 0);
    uVar14 = (uStack_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_68 & 0x5555555555555555) << 1;
    uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
    uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
    uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
    uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
    uStack_68 = uStack_68 - 1 & uStack_68;
  }
  else {
    uVar14 = (uStack_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_68 & 0x5555555555555555) << 1;
    uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
    uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
    uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
    uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
    uStack_68 = uStack_68 - 1 & uStack_68;
    lVar17 = lVar7;
  }
  uVar15 = LZCOUNT(uVar14) | lVar17 << 6;
  plVar1 = (long *)(*(long *)(uVar3 + 0x30) + uVar15 * 0x10);
  lVar7 = *plVar1;
  uVar14 = plVar1[1];
  pdVar16 = (double *)(*(long *)(uVar3 + 0x38) + uVar15 * 0x18);
  dVar10 = *pdVar16;
  dVar2 = pdVar16[1];
  cVar4 = *(char *)(pdVar16 + 2);
  func_0x000107c61434(uVar14);
  func_0x000101f347b4(dVar10,dVar2,cVar4);
  uVar15 = uVar14;
  func_0x000100029284();
  func_0x000107c6142c(uVar14);
  if ((uVar15 & 1) == 0) {
    func_0x000107c6142c(uVar18);
    func_0x000107c61430(uVar3,2);
    func_0x000101f347f4(dVar10,dVar2,cVar4);
    return 0;
  }
  pdVar16 = (double *)(*(long *)(uVar18 + 0x38) + lVar7 * 0x18);
  dVar9 = *pdVar16;
  dVar12 = pdVar16[1];
  bVar5 = *(byte *)(pdVar16 + 2);
  lVar7 = lVar17;
  if (bVar5 < 4) {
    if (bVar5 < 2) {
      if (bVar5 == 0) {
        if (cVar4 == '\0') {
          if (((SUB84(dVar9,0) ^ SUB84(dVar10,0)) & 1) != 0) goto LAB_101f34438;
          goto LAB_101f34150;
        }
      }
      else if (cVar4 == '\x01') {
        if (dVar9 != dVar10 || dVar12 != dVar2) {
          func_0x000107c605b8(dVar9,dVar12,dVar10,dVar2,0);
          uVar13 = 1;
          dVar12 = dVar2;
          dVar8 = dVar9;
          goto LAB_101f3435c;
        }
        func_0x000101f347f4(dVar10,dVar2,1);
        goto LAB_101f34150;
      }
    }
    else if (bVar5 == 2) {
      if (cVar4 == '\x02') {
LAB_101f34378:
        if (dVar9 != dVar10) goto LAB_101f34438;
        goto LAB_101f34150;
      }
    }
    else if (cVar4 == '\x03') goto LAB_101f34378;
  }
  else {
    dVar8 = dVar9;
    if (5 < bVar5) {
      if (bVar5 == 6) {
        if (cVar4 == '\x06') {
          func_0x000107c61434();
          FUN_101f340bc();
          func_0x000101f347f4(dVar10,dVar2,6);
          uVar13 = 6;
          dVar10 = dVar9;
          goto LAB_101f3435c;
        }
        goto LAB_101f3440c;
      }
      if (cVar4 != '\a' || (dVar2 != 0.0 || dVar10 != 0.0)) {
        func_0x000101f347f4(dVar10,dVar2,cVar4);
LAB_101f34438:
        func_0x000107c6142c(uVar18);
LAB_101f34444:
        func_0x000107c61430(uVar3,2);
        return 0;
      }
      goto LAB_101f34150;
    }
    if (bVar5 == 4) {
      if (cVar4 != '\x04') goto LAB_101f3440c;
      if (dVar9 != dVar10) goto LAB_101f34438;
      goto LAB_101f34150;
    }
    if (cVar4 == '\x05') {
      func_0x000107c61434();
      FUN_101f421f8();
      func_0x000101f347f4(dVar10,dVar2,5);
      uVar13 = 5;
      dVar10 = dVar9;
LAB_101f3435c:
      func_0x000101f347f4(dVar10,dVar12,uVar13);
      if (((ulong)dVar8 & 1) == 0) goto LAB_101f34438;
      goto LAB_101f34150;
    }
  }
LAB_101f3440c:
  func_0x000101f347f4(dVar10,dVar2,cVar4);
  func_0x000107c6142c(uVar18);
  goto LAB_101f34444;
}



/* Entry: 101f344d4; end: 101f3460f;  */

/* WARNING: Possible PIC construction at 0x000101f42360: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f3430c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f42364) */
/* WARNING: Removing unreachable block (ram,0x000101f42368) */
/* WARNING: Removing unreachable block (ram,0x000101f34310) */
/* WARNING: Type propagation algorithm not settling */

double FUN_101f344d4(double *param_1,double *param_2)

{
  long *plVar1;
  double dVar2;
  char cVar3;
  byte bVar4;
  code *pcVar5;
  bool bVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  ulong uVar14;
  ulong uVar15;
  double *pdVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  char *pcVar20;
  byte *pbVar21;
  ulong uStack_68;
  
  dVar8 = *param_1;
  dVar10 = param_1[1];
  dVar2 = *param_2;
  dVar13 = param_2[1];
  cVar3 = *(char *)(param_2 + 2);
  bVar4 = *(byte *)(param_1 + 2);
  if (3 < bVar4) {
    if (bVar4 < 6) {
      if (bVar4 == 4) {
        if (cVar3 == '\x04') {
          return (double)(ulong)(dVar8 == dVar2);
        }
        return 0.0;
      }
      if (cVar3 != '\x05') {
        return 0.0;
      }
      lVar19 = *(long *)((long)dVar8 + 0x10);
      if (lVar19 == *(long *)((long)dVar2 + 0x10)) {
        if ((lVar19 != 0) && (dVar8 != dVar2)) {
          pcVar20 = (char *)((long)dVar2 + 0x30);
          pbVar21 = (byte *)((long)dVar8 + 0x30);
          do {
            dVar9 = *(double *)(pbVar21 + -0x10);
            dVar10 = *(double *)(pbVar21 + -8);
            bVar4 = *pbVar21;
            dVar12 = *(double *)(pcVar20 + -0x10);
            dVar13 = *(double *)(pcVar20 + -8);
            cVar3 = *pcVar20;
            if (bVar4 < 4) {
              if (bVar4 < 2) {
                if (bVar4 == 0) {
                  if (cVar3 != '\0') {
                    return 0.0;
                  }
                  if (((SUB84(dVar12,0) ^ SUB84(dVar9,0)) & 1) != 0) {
                    return 0.0;
                  }
                }
                else {
                  if (cVar3 != '\x01') goto LAB_101f423dc;
                  if ((dVar9 != dVar12) || (dVar10 != dVar13)) goto code_r0x000107c605b8;
                }
              }
              else if (bVar4 == 2) {
                if (cVar3 != '\x02' || dVar9 != dVar12) goto LAB_101f423dc;
              }
              else if (cVar3 != '\x03' || dVar9 != dVar12) goto LAB_101f423dc;
            }
            else {
              dVar8 = dVar9;
              if (bVar4 < 6) {
                if (bVar4 == 4) {
                  bVar6 = false;
                  if ((cVar3 == '\x04') && (bVar6 = false, !NAN(dVar9) && !NAN(dVar12))) {
                    bVar6 = dVar9 == dVar12;
                  }
                  if (!bVar6) goto LAB_101f423dc;
                }
                else {
                  if (cVar3 != '\x05') goto LAB_101f423dc;
                  func_0x000101f347b4(dVar12,dVar13,5);
                  func_0x000101f347b4(dVar9,dVar10,5);
                  FUN_101f421f8(dVar9,dVar12);
                  func_0x000101f347f4(dVar12,dVar13,5);
                  func_0x000101f347f4(dVar9,dVar10,5);
joined_r0x000101f4232c:
                  if (((ulong)dVar8 & 1) == 0) goto LAB_101f423dc;
                }
              }
              else {
                if (bVar4 == 6) {
                  if (cVar3 == '\x06') {
                    func_0x000101f347b4(dVar12,dVar13,6);
                    func_0x000101f347b4(dVar9,dVar10,6);
                    FUN_101f340bc(dVar9,dVar12);
                    func_0x000101f347f4(dVar12,dVar13,6);
                    func_0x000101f347f4(dVar9,dVar10,6);
                    goto joined_r0x000101f4232c;
                  }
                  goto LAB_101f423dc;
                }
                if (cVar3 != '\a' || (dVar13 != 0.0 || dVar12 != 0.0)) goto LAB_101f423dc;
              }
            }
            pcVar20 = pcVar20 + 0x18;
            pbVar21 = pbVar21 + 0x18;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
        }
        dVar8 = 4.94065645841247e-324;
      }
      else {
LAB_101f423dc:
        dVar8 = 0.0;
      }
      return dVar8;
    }
    if (bVar4 != 6) {
      if (cVar3 != '\a') {
        return 0.0;
      }
      if (dVar13 == 0.0 && dVar2 == 0.0) {
        return 4.94065645841247e-324;
      }
      return 0.0;
    }
    if (cVar3 != '\x06') {
      return 0.0;
    }
    if (dVar8 == dVar2) {
      return 4.94065645841247e-324;
    }
    if (*(long *)((long)dVar8 + 0x10) != *(long *)((long)dVar2 + 0x10)) {
      return 0.0;
    }
    uVar17 = 1L << ((ulong)*(byte *)((long)dVar8 + 0x20) & 0x3f);
    uStack_68 = 0xffffffffffffffff;
    if ((*(byte *)((long)dVar8 + 0x20) & 0x3f) < 6) {
      uStack_68 = ~(-1L << (uVar17 & 0x3f));
    }
    uStack_68 = uStack_68 & *(ulong *)((long)dVar8 + 0x40);
    func_0x000107c61438(dVar8,2);
    func_0x000107c61434(dVar2);
    lVar19 = 0;
LAB_101f34150:
    if (uStack_68 == 0) {
      do {
        lVar18 = lVar19 + 1;
        if (SCARRY8(lVar19,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101f34474);
          (*pcVar5)();
        }
        if ((long)(uVar17 + 0x3f >> 6) <= lVar18) {
          func_0x000107c6142c(dVar2);
          func_0x000107c61430(dVar8,2);
          return 4.94065645841247e-324;
        }
        uStack_68 = ((ulong *)((long)dVar8 + 0x40))[lVar18];
        lVar19 = lVar19 + 1;
      } while (uStack_68 == 0);
      uVar14 = (uStack_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_68 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
      uStack_68 = uStack_68 - 1 & uStack_68;
    }
    else {
      uVar14 = (uStack_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_68 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
      uStack_68 = uStack_68 - 1 & uStack_68;
      lVar18 = lVar19;
    }
    uVar15 = LZCOUNT(uVar14) | lVar18 << 6;
    plVar1 = (long *)(*(long *)((long)dVar8 + 0x30) + uVar15 * 0x10);
    lVar19 = *plVar1;
    uVar14 = plVar1[1];
    pdVar16 = (double *)(*(long *)((long)dVar8 + 0x38) + uVar15 * 0x18);
    dVar12 = *pdVar16;
    dVar13 = pdVar16[1];
    cVar3 = *(char *)(pdVar16 + 2);
    func_0x000107c61434(uVar14);
    func_0x000101f347b4(dVar12,dVar13,cVar3);
    uVar15 = uVar14;
    func_0x000100029284();
    func_0x000107c6142c(uVar14);
    if ((uVar15 & 1) == 0) {
      func_0x000107c6142c(dVar2);
      func_0x000107c61430(dVar8,2);
      func_0x000101f347f4(dVar12,dVar13,cVar3);
      return 0.0;
    }
    pdVar16 = (double *)(*(long *)((long)dVar2 + 0x38) + lVar19 * 0x18);
    dVar9 = *pdVar16;
    dVar10 = pdVar16[1];
    bVar4 = *(byte *)(pdVar16 + 2);
    lVar19 = lVar18;
    if (bVar4 < 4) {
      if (bVar4 < 2) {
        if (bVar4 == 0) {
          if (cVar3 == '\0') {
            if (((SUB84(dVar9,0) ^ SUB84(dVar12,0)) & 1) != 0) goto LAB_101f34438;
            goto LAB_101f34150;
          }
        }
        else if (cVar3 == '\x01') {
          if (dVar9 != dVar12 || dVar10 != dVar13) goto code_r0x000107c605b8;
          func_0x000101f347f4(dVar12,dVar13,1);
          goto LAB_101f34150;
        }
      }
      else if (bVar4 == 2) {
        if (cVar3 == '\x02') {
LAB_101f34378:
          if (dVar9 != dVar12) goto LAB_101f34438;
          goto LAB_101f34150;
        }
      }
      else if (cVar3 == '\x03') goto LAB_101f34378;
    }
    else {
      dVar7 = dVar9;
      if (5 < bVar4) {
        if (bVar4 == 6) {
          if (cVar3 == '\x06') {
            func_0x000107c61434();
            FUN_101f340bc();
            func_0x000101f347f4(dVar12,dVar13,6);
            uVar11 = 6;
            goto LAB_101f3435c;
          }
          goto LAB_101f3440c;
        }
        if (cVar3 != '\a' || (dVar13 != 0.0 || dVar12 != 0.0)) {
          func_0x000101f347f4(dVar12,dVar13,cVar3);
LAB_101f34438:
          func_0x000107c6142c(dVar2);
LAB_101f34444:
          func_0x000107c61430(dVar8,2);
          return 0.0;
        }
        goto LAB_101f34150;
      }
      if (bVar4 == 4) {
        if (cVar3 != '\x04') goto LAB_101f3440c;
        if (dVar9 != dVar12) goto LAB_101f34438;
        goto LAB_101f34150;
      }
      if (cVar3 == '\x05') {
        func_0x000107c61434();
        FUN_101f421f8();
        func_0x000101f347f4(dVar12,dVar13,5);
        uVar11 = 5;
LAB_101f3435c:
        func_0x000101f347f4(dVar9,dVar10,uVar11);
        if (((ulong)dVar7 & 1) == 0) goto LAB_101f34438;
        goto LAB_101f34150;
      }
    }
LAB_101f3440c:
    func_0x000101f347f4(dVar12,dVar13,cVar3);
    func_0x000107c6142c(dVar2);
    goto LAB_101f34444;
  }
  if (bVar4 < 2) {
    if (bVar4 == 0) {
      if (cVar3 == '\0') {
        return (double)(ulong)((SUB84(dVar2,0) ^ SUB84(dVar8,0) ^ 1) & 1);
      }
    }
    else if (cVar3 == '\x01') {
      dVar9 = dVar8;
      dVar12 = dVar2;
      if ((dVar8 == dVar2) && (dVar10 == dVar13)) {
        return 4.94065645841247e-324;
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(dVar9,dVar10,dVar12,dVar13,0);
      return dVar9;
    }
  }
  else if (bVar4 == 2) {
    if (cVar3 == '\x02') {
LAB_101f345d8:
      return (double)(ulong)(dVar8 == dVar2);
    }
  }
  else if (cVar3 == '\x03') goto LAB_101f345d8;
  return 0.0;
}



/* Entry: 101f34610; end: 101f34673;  */

/* WARNING: Possible PIC construction at 0x000101f34624: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f34628) */

void FUN_101f34610(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 101f34674; end: 101f346d7;  */

undefined8 * FUN_101f34674(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 101f346d8; end: 101f3471b;  */

undefined8 * FUN_101f346d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x000107c6142c(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 101f3471c; end: 101f34823;  */

int FUN_101f3471c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101f34824; end: 101f348bf;  */

undefined8 * FUN_101f34824(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x000101f347b4(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 101f348c0; end: 101f34903;  */

undefined8 * FUN_101f348c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  func_0x000101f347f4(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 101f34904; end: 101f349e7;  */

int FUN_101f34904(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xf8 < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xf9;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 8) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101f349e8; end: 101f34a93;  */

void FUN_101f349e8(void)

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



/* Entry: 101f34a94; end: 101f34aa7;  */

bool FUN_101f34a94(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101f34aa8; end: 101f35153;  */

void FUN_101f34aa8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar3;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  ulong uVar4;
  undefined1 auStack_d0 [24];
  long lStack_b8;
  undefined1 *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  lVar1 = 0;
  uStack_90 = param_1;
  lStack_88 = param_2;
  func_0x000107c5eec8();
  lStack_98 = *(long *)(lVar1 + -8);
  lStack_a0 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_98 + 0x40));
  puStack_b0 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = (long)(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar2 = 0;
  lStack_b8 = lVar1;
  FUN_101f357fc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = (((lVar1 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0)) - extraout_x12_00) -
          extraout_x12_01) - extraout_x12_02;
  lStack_a8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = 0x112e41e90;
  func_0x0001000285a8(0x112e41e90,&UNK_10da31518);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = ((((lVar3 - extraout_x12_03) - extraout_x12_04) - extraout_x12_05) - extraout_x12_06) -
          extraout_x8_01;
  lVar1 = uVar4 + (long)*(int *)(lVar1 + 0x30);
  FUN_101b6fb88(uStack_90,uVar4);
  lVar3 = lStack_88;
  lStack_88 = lVar1;
  FUN_101b6fb88(lVar3,lVar1);
  func_0x000107c614c4(uVar4,lVar2);
                    /* WARNING: Could not recover jumptable at 0x000101f34cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10da31400)[uVar4 & 0xffffffff] * 4 + 0x101f34cbc))();
  return;
}



/* Entry: 101f35154; end: 101f35157;  */

void FUN_101f35154(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41de0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da31478;
  func_0x000107c61520(&UNK_10da31478,&UNK_1104a26e0);
  puRam0000000112e41de0 = puVar1;
  return;
}



/* Entry: 101f35158; end: 101f35197;  */

void FUN_101f35158(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41de0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da31478;
  func_0x000107c61520(&UNK_10da31478,&UNK_1104a26e0);
  puRam0000000112e41de0 = puVar1;
  return;
}



/* Entry: 101f35198; end: 101f3537b;  */

long * FUN_101f35198(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_3 + -8);
  uVar3 = *(uint *)(lVar8 + 0x50);
  if ((uVar3 >> 0x11 & 1) == 0) {
    plVar5 = param_2;
    func_0x000107c614c4(param_2,param_3);
    iVar4 = (int)plVar5;
    if (iVar4 < 3) {
      if (iVar4 == 0) {
        *param_1 = *param_2;
        func_0x000107c61434();
        uVar6 = 0;
      }
      else if (iVar4 == 1) {
        *param_1 = *param_2;
        func_0x000107c61434();
        uVar6 = 1;
      }
      else {
        if (iVar4 != 2) goto LAB_101f352f8;
        lVar8 = param_2[1];
        *param_1 = *param_2;
        param_1[1] = lVar8;
        lVar8 = param_2[2];
        param_1[3] = param_2[3];
        param_1[2] = lVar8;
        func_0x000107c61434();
        uVar6 = 2;
      }
    }
    else if (iVar4 < 6) {
      if (iVar4 == 3) {
        *param_1 = *param_2;
        func_0x000107c61434();
        uVar6 = 3;
      }
      else {
        if (iVar4 != 4) {
LAB_101f352f8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__memcpy_11034c658)(param_1,param_2,*(undefined8 *)(lVar8 + 0x40));
          return param_1;
        }
        lVar8 = 0;
        func_0x000107c5eec8();
        (**(code **)(*(long *)(lVar8 + -8) + 0x10))(param_1,param_2,lVar8);
        lVar8 = 0x112e05b68;
        func_0x0001000285a8(0x112e05b68,&UNK_10d9d8db8);
        puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x30));
        puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x30));
        uVar6 = puVar2[1];
        *puVar1 = *puVar2;
        puVar1[1] = uVar6;
        *(undefined1 *)((long)param_1 + (long)*(int *)(lVar8 + 0x40)) =
             *(undefined1 *)((long)param_2 + (long)*(int *)(lVar8 + 0x40));
        func_0x000107c61434(uVar6);
        uVar6 = 4;
      }
    }
    else if (iVar4 == 6) {
      *param_1 = *param_2;
      func_0x000107c61434();
      uVar6 = 6;
    }
    else {
      if (iVar4 != 7) goto LAB_101f352f8;
      *param_1 = *param_2;
      func_0x000107c61434();
      uVar6 = 7;
    }
    func_0x000107c6159c(param_1,param_3,uVar6);
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    uVar7 = (ulong)uVar3 & 0xff;
    param_1 = (long *)(lVar8 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 101f3537c; end: 101f3541f;  */

void FUN_101f3537c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = param_1;
  func_0x000107c614c4();
  uVar1 = (uint)puVar2;
  if (7 < uVar1) {
    return;
  }
  if ((1 << (ulong)(uVar1 & 0x1f) & 0xcbU) == 0) {
    if (uVar1 == 2) {
      param_1 = param_1 + 1;
    }
    else {
      if (uVar1 != 4) {
        return;
      }
      lVar3 = 0;
      func_0x000107c5eec8();
      (**(code **)(*(long *)(lVar3 + -8) + 8))(param_1,lVar3);
      lVar3 = 0x112e05b68;
      func_0x0001000285a8(0x112e05b68,&UNK_10d9d8db8);
      param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x30) + 8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 101f35420; end: 101f357bf;  */

undefined8 * FUN_101f35420(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar3 = param_2;
  func_0x000107c614c4(param_2,param_3);
  iVar2 = (int)puVar3;
  if (iVar2 < 3) {
    if (iVar2 == 0) {
      *param_1 = *param_2;
      func_0x000107c61434();
      uVar5 = 0;
    }
    else if (iVar2 == 1) {
      *param_1 = *param_2;
      func_0x000107c61434();
      uVar5 = 1;
    }
    else {
      if (iVar2 != 2) goto LAB_101f35554;
      uVar5 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar5;
      uVar5 = param_2[2];
      param_1[3] = param_2[3];
      param_1[2] = uVar5;
      func_0x000107c61434();
      uVar5 = 2;
    }
  }
  else if (iVar2 < 6) {
    if (iVar2 == 3) {
      *param_1 = *param_2;
      func_0x000107c61434();
      uVar5 = 3;
    }
    else {
      if (iVar2 != 4) {
LAB_101f35554:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memcpy_11034c658)
                  (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
        return param_1;
      }
      lVar4 = 0;
      func_0x000107c5eec8();
      (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
      lVar4 = 0x112e05b68;
      func_0x0001000285a8(0x112e05b68,&UNK_10d9d8db8);
      puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x30));
      puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x30));
      uVar5 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar5;
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x40)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x40));
      func_0x000107c61434(uVar5);
      uVar5 = 4;
    }
  }
  else if (iVar2 == 6) {
    *param_1 = *param_2;
    func_0x000107c61434();
    uVar5 = 6;
  }
  else {
    if (iVar2 != 7) goto LAB_101f35554;
    *param_1 = *param_2;
    func_0x000107c61434();
    uVar5 = 7;
  }
  func_0x000107c6159c(param_1,param_3,uVar5);
  return param_1;
}



/* Entry: 101f357c0; end: 101f357fb;  */

undefined8 FUN_101f357c0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_101f357fc();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 101f357fc; end: 101f35833;  */

void FUN_101f357fc(undefined8 param_1)

{
  if (lRam0000000112e41e58 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e69d634);
  return;
}



/* Entry: 101f35834; end: 101f359c3;  */

long FUN_101f35834(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = param_2;
  func_0x000107c614c4(param_2,param_3);
  if ((int)lVar3 == 4) {
    lVar3 = 0;
    func_0x000107c5eec8();
    (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
    lVar3 = 0x112e05b68;
    func_0x0001000285a8(0x112e05b68,&UNK_10d9d8db8);
    puVar1 = (undefined8 *)(param_2 + *(int *)(lVar3 + 0x30));
    uVar4 = *puVar1;
    puVar2 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x30));
    puVar2[1] = puVar1[1];
    *puVar2 = uVar4;
    *(undefined1 *)(param_1 + *(int *)(lVar3 + 0x40)) =
         *(undefined1 *)(param_2 + *(int *)(lVar3 + 0x40));
    func_0x000107c6159c(param_1,param_3,4);
    return param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
  return param_1;
}



/* Entry: 101f359c4; end: 101f359f3;  */

void FUN_101f359c4(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000101f359cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x30))();
  return;
}



/* Entry: 101f359f4; end: 101f35a9f;  */

void FUN_101f359f4(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_90 [32];
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR___sBbWV_11034d660 + 0x40;
  puStack_60 = &UNK_10da314b8;
  lVar2 = 0x13f;
  puStack_70 = puVar1;
  puStack_68 = puVar1;
  puStack_58 = puVar1;
  func_0x000107c5eec8();
  if (param_2 < 0x40) {
    func_0x000107c61508(auStack_90,*(long *)(lVar2 + -8) + 0x40,&UNK_10da314d0,&UNK_10da314e8);
    puStack_48 = &UNK_10da314e8;
    puStack_50 = auStack_90;
    puStack_40 = puVar1;
    puStack_38 = puVar1;
    func_0x000107c61528(param_1,0x100,8,&puStack_70);
  }
  return;
}



/* Entry: 101f35aa0; end: 101f35c03;  */

int FUN_101f35aa0(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101f35b1c;
        goto LAB_101f35b00;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101f35b00:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_101f35b1c:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101f35c04; end: 101f35c4b;  */

undefined8 FUN_101f35c04(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112e41e90;
  func_0x0001000285a8(0x112e41e90,&UNK_10da31518);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 101f35c4c; end: 101f35c53;  */

void FUN_101f35c4c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  char *pcVar8;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar7 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  pcVar8 = "overlapping_features";
  uVar2 = 0xd000000000000011;
  if (bVar7 != 4) {
    pcVar8 = "occluding_layer_groups";
    uVar2 = 0xd000000000000014;
  }
  uVar1 = 0x7364695f72657375;
  if (bVar7 != 3) {
    uVar1 = uVar2;
  }
  uVar6 = 0xe800000000000000;
  if (bVar7 != 3) {
    uVar6 = (ulong)pcVar8 | 0x8000000000000000;
  }
  uVar2 = 0x656475746974616c;
  if (bVar7 != 1) {
    uVar2 = 0x64757469676e6f6c;
  }
  uVar3 = 0xe800000000000000;
  if (bVar7 != 1) {
    uVar3 = 0xe900000000000065;
  }
  uVar4 = 0x6469;
  if (bVar7 != 0) {
    uVar4 = uVar2;
  }
  uVar5 = 0xe200000000000000;
  if (bVar7 != 0) {
    uVar5 = uVar3;
  }
  if (bVar7 < 3) {
    uVar6 = uVar5;
    uVar1 = uVar4;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000107c606a8();
  return;
}



/* Entry: 101f35c54; end: 101f35d2b;  */

void FUN_101f35c54(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  char *pcVar8;
  byte *unaff_x20;
  
  bVar7 = *unaff_x20;
  pcVar8 = "overlapping_features";
  uVar2 = 0xd000000000000011;
  if (bVar7 != 4) {
    pcVar8 = "occluding_layer_groups";
    uVar2 = 0xd000000000000014;
  }
  uVar1 = 0x7364695f72657375;
  if (bVar7 != 3) {
    uVar1 = uVar2;
  }
  uVar6 = 0xe800000000000000;
  if (bVar7 != 3) {
    uVar6 = (ulong)pcVar8 | 0x8000000000000000;
  }
  uVar2 = 0x656475746974616c;
  if (bVar7 != 1) {
    uVar2 = 0x64757469676e6f6c;
  }
  uVar3 = 0xe800000000000000;
  if (bVar7 != 1) {
    uVar3 = 0xe900000000000065;
  }
  uVar4 = 0x6469;
  if (bVar7 != 0) {
    uVar4 = uVar2;
  }
  uVar5 = 0xe200000000000000;
  if (bVar7 != 0) {
    uVar5 = uVar3;
  }
  if (bVar7 < 3) {
    uVar6 = uVar5;
    uVar1 = uVar4;
  }
  func_0x000107c5fb58(param_1,uVar1,uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar6);
  return;
}



/* Entry: 101f35d2c; end: 101f35d33;  */

void FUN_101f35d2c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  char *pcVar8;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar7 = *unaff_x20;
  func_0x000107c6068c(auStack_68);
  pcVar8 = "overlapping_features";
  uVar2 = 0xd000000000000011;
  if (bVar7 != 4) {
    pcVar8 = "occluding_layer_groups";
    uVar2 = 0xd000000000000014;
  }
  uVar1 = 0x7364695f72657375;
  if (bVar7 != 3) {
    uVar1 = uVar2;
  }
  uVar6 = 0xe800000000000000;
  if (bVar7 != 3) {
    uVar6 = (ulong)pcVar8 | 0x8000000000000000;
  }
  uVar2 = 0x656475746974616c;
  if (bVar7 != 1) {
    uVar2 = 0x64757469676e6f6c;
  }
  uVar3 = 0xe800000000000000;
  if (bVar7 != 1) {
    uVar3 = 0xe900000000000065;
  }
  uVar4 = 0x6469;
  if (bVar7 != 0) {
    uVar4 = uVar2;
  }
  uVar5 = 0xe200000000000000;
  if (bVar7 != 0) {
    uVar5 = uVar3;
  }
  if (bVar7 < 3) {
    uVar6 = uVar5;
    uVar1 = uVar4;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000107c606a8();
  return;
}



/* Entry: 101f35d34; end: 101f35d5f;  */

void FUN_101f35d34(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_101f368d8(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 101f35d60; end: 101f35ed3;  */

void FUN_101f35d60(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  char *pcVar8;
  byte *unaff_x20;
  
  bVar7 = *unaff_x20;
  pcVar8 = "overlapping_features";
  uVar2 = 0xd000000000000011;
  if (bVar7 != 4) {
    pcVar8 = "occluding_layer_groups";
    uVar2 = 0xd000000000000014;
  }
  uVar1 = 0x7364695f72657375;
  if (bVar7 != 3) {
    uVar1 = uVar2;
  }
  uVar6 = 0xe800000000000000;
  if (bVar7 != 3) {
    uVar6 = (ulong)pcVar8 | 0x8000000000000000;
  }
  uVar2 = 0x656475746974616c;
  if (bVar7 != 1) {
    uVar2 = 0x64757469676e6f6c;
  }
  uVar3 = 0xe800000000000000;
  if (bVar7 != 1) {
    uVar3 = 0xe900000000000065;
  }
  uVar4 = 0x6469;
  if (bVar7 != 0) {
    uVar4 = uVar2;
  }
  uVar5 = 0xe200000000000000;
  if (bVar7 != 0) {
    uVar5 = uVar3;
  }
  if (bVar7 < 3) {
    uVar6 = uVar5;
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  param_1[1] = uVar6;
  return;
}



/* Entry: 101f35ed4; end: 101f35ef7;  */

void FUN_101f35ed4(undefined1 *param_1,undefined1 param_2)

{
  FUN_101f368d8();
  *param_1 = param_2;
  return;
}



/* Entry: 101f35ef8; end: 101f35f0f;  */

undefined1  [16] FUN_101f35ef8(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101f35f10; end: 101f35f5f;  */

void FUN_101f35f10(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000101f3799c();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101f35f60; end: 101f35f7b;  */

undefined1  [16] FUN_101f35f60(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f01c7a0;
  auVar1._0_8_ = 0xd000000000000011;
  return auVar1;
}



/* Entry: 101f35f7c; end: 101f35fc3;  */

uint FUN_101f35f7c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_18 = param_2[7];
  uStack_20 = param_2[6];
  FUN_101f3667c(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 101f35fc4; end: 101f36003;  */

void FUN_101f35fc4(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_101f3693c(&uStack_60);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_58;
    *param_1 = uStack_60;
    param_1[3] = uStack_48;
    param_1[2] = uStack_50;
    param_1[5] = uStack_38;
    param_1[4] = uStack_40;
    param_1[7] = uStack_28;
    param_1[6] = uStack_30;
  }
  return;
}



/* Entry: 101f36004; end: 101f361ff;  */

void FUN_101f36004(void)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar5 = 0xea00000000007265;
  uVar3 = 0x7473756c635f7369;
  if (cVar2 != '\x01') {
    uVar5 = 0xe800000000000000;
    uVar3 = 0x7364695f72657375;
  }
  uVar1 = 0x800000010f01c600;
  uVar4 = 0xd000000000000011;
  if (cVar2 != '\0') {
    uVar1 = uVar5;
    uVar4 = uVar3;
  }
  func_0x000107c5fb58(auStack_68,uVar4,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101f36200; end: 101f362cb;  */

void FUN_101f36200(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *unaff_x20;
  
  uVar4 = 0xea00000000007265;
  uVar2 = 0x7473756c635f7369;
  if (*unaff_x20 != '\x01') {
    uVar4 = 0xe800000000000000;
    uVar2 = 0x7364695f72657375;
  }
  uVar1 = 0x800000010f01c600;
  uVar3 = 0xd000000000000011;
  if (*unaff_x20 != '\0') {
    uVar1 = uVar4;
    uVar3 = uVar2;
  }
  *param_1 = uVar3;
  param_1[1] = uVar1;
  return;
}



/* Entry: 101f362cc; end: 101f362ef;  */

void FUN_101f362cc(undefined1 *param_1,undefined1 param_2)

{
  FUN_101f36c58();
  *param_1 = param_2;
  return;
}



/* Entry: 101f362f0; end: 101f36307;  */

undefined1  [16] FUN_101f362f0(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101f36308; end: 101f36357;  */

void FUN_101f36308(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_101f3795c();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101f36358; end: 101f36387;  */

void FUN_101f36358(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  long unaff_x21;
  
  FUN_101f36cbc();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    *(undefined1 *)(param_1 + 2) = param_4;
    param_1[3] = param_5;
  }
  return;
}



/* Entry: 101f36388; end: 101f363ab;  */

undefined8 FUN_101f36388(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar6 = param_1[3];
  uVar2 = param_2[1];
  uVar7 = param_2[3];
  bVar3 = (byte)param_2[2];
  uVar4 = param_1[2];
  if (uVar1 == 0) {
    if (uVar2 != 0) {
      return 0;
    }
  }
  else {
    if (uVar2 == 0) {
      return 0;
    }
    if (((uVar5 != *param_2) || (uVar1 != uVar2)) &&
       (func_0x000107c605b8(uVar5,uVar1,*param_2,uVar2,0), (uVar5 & 1) == 0)) {
      return 0;
    }
  }
  if ((byte)uVar4 == 2) {
    if (bVar3 != 2) {
      return 0;
    }
  }
  else {
    if (bVar3 == 2) {
      return 0;
    }
    if ((((byte)uVar4 ^ bVar3) & 1) != 0) {
      return 0;
    }
  }
  if (uVar6 == 0) {
    if (uVar7 == 0) {
      return 1;
    }
  }
  else if ((uVar7 != 0) && (lVar8 = *(long *)(uVar6 + 0x10), lVar8 == *(long *)(uVar7 + 0x10))) {
    if (lVar8 == 0) {
      return 1;
    }
    if (uVar6 == uVar7) {
      return 1;
    }
    plVar9 = (long *)(uVar7 + 0x28);
    plVar10 = (long *)(uVar6 + 0x28);
    while ((uVar5 = plVar10[-1], uVar5 == plVar9[-1] && *plVar10 == *plVar9 ||
           (func_0x000107c605b8(), (uVar5 & 1) != 0))) {
      plVar9 = plVar9 + 2;
      plVar10 = plVar10 + 2;
      lVar8 = lVar8 + -1;
      if (lVar8 == 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 101f363ac; end: 101f36457;  */

void FUN_101f363ac(void)

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



/* Entry: 101f36458; end: 101f364cf;  */

undefined1  [16] FUN_101f36458(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar3 = *unaff_x20;
  uVar5 = 0xe900000000000065;
  uVar4 = 0x64757469676e6f6c;
  if (bVar3 != 2) {
    uVar5 = 0xea00000000007365;
    uVar4 = 0x69747265706f7270;
  }
  uVar1 = 0x6469;
  if (bVar3 != 0) {
    uVar1 = 0x656475746974616c;
  }
  uVar2 = 0xe200000000000000;
  if (bVar3 != 0) {
    uVar2 = 0xe800000000000000;
  }
  if (bVar3 < 2) {
    uVar5 = uVar2;
    uVar4 = uVar1;
  }
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Entry: 101f364d0; end: 101f364f3;  */

void FUN_101f364d0(undefined1 *param_1,undefined1 param_2)

{
  FUN_101f36e9c();
  *param_1 = param_2;
  return;
}



/* Entry: 101f364f4; end: 101f3650b;  */

undefined1  [16] FUN_101f364f4(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101f3650c; end: 101f3655b;  */

void FUN_101f3650c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_101f3787c();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101f3655c; end: 101f3659b;  */

void FUN_101f3655c(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_101f37004(&uStack_60);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_58;
    *param_1 = uStack_60;
    param_1[3] = uStack_48;
    param_1[2] = uStack_50;
    param_1[5] = uStack_38;
    param_1[4] = uStack_40;
    param_1[7] = uStack_28;
    param_1[6] = uStack_30;
  }
  return;
}



/* Entry: 101f3659c; end: 101f3667b;  */

undefined8 FUN_101f3659c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  ulong uVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  uVar7 = *param_1;
  dVar15 = (double)param_1[2];
  dVar14 = (double)param_1[3];
  uVar8 = param_1[4];
  uVar2 = param_1[5];
  uVar5 = param_1[6];
  uVar12 = param_1[7];
  dVar17 = (double)param_2[2];
  dVar16 = (double)param_2[3];
  uVar1 = param_2[4];
  uVar3 = param_2[5];
  bVar4 = (byte)param_2[6];
  uVar13 = param_2[7];
  if (((uVar7 != *param_2) || (param_1[1] != param_2[1])) &&
     (func_0x000107c605b8(), (uVar7 & 1) == 0)) {
    return 0;
  }
  bVar6 = false;
  if ((dVar15 == dVar17) && (bVar6 = false, !NAN(dVar14) && !NAN(dVar16))) {
    bVar6 = dVar14 == dVar16;
  }
  if (bVar6) {
    if (uVar2 == 0) {
      if (uVar3 != 0) {
        return 0;
      }
    }
    else {
      if (uVar3 == 0) {
        return 0;
      }
      if (((uVar8 != uVar1) || (uVar2 != uVar3)) &&
         (func_0x000107c605b8(uVar8,uVar2,uVar1,uVar3,0), (uVar8 & 1) == 0)) {
        return 0;
      }
    }
    if ((byte)uVar5 == 2) {
      if (bVar4 != 2) {
        return 0;
      }
    }
    else {
      if (bVar4 == 2) {
        return 0;
      }
      if ((((byte)uVar5 ^ bVar4) & 1) != 0) {
        return 0;
      }
    }
    if (uVar12 == 0) {
      if (uVar13 == 0) {
        return 1;
      }
    }
    else if ((uVar13 != 0) && (lVar9 = *(long *)(uVar12 + 0x10), lVar9 == *(long *)(uVar13 + 0x10)))
    {
      if (lVar9 == 0) {
        return 1;
      }
      if (uVar12 == uVar13) {
        return 1;
      }
      plVar10 = (long *)(uVar13 + 0x28);
      plVar11 = (long *)(uVar12 + 0x28);
      while ((uVar8 = plVar11[-1], uVar8 == plVar10[-1] && *plVar11 == *plVar10 ||
             (func_0x000107c605b8(), (uVar8 & 1) != 0))) {
        plVar10 = plVar10 + 2;
        plVar11 = plVar11 + 2;
        lVar9 = lVar9 + -1;
        if (lVar9 == 0) {
          return 1;
        }
      }
    }
    return 0;
  }
  return 0;
}



/* Entry: 101f3667c; end: 101f367b7;  */

undefined8 FUN_101f3667c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  uVar1 = *param_1;
  if ((((uVar1 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar1 & 1) != 0)
       ) && ((double)param_1[2] == (double)param_2[2])) &&
     ((double)param_1[3] == (double)param_2[3])) {
    uVar1 = param_1[4];
    uVar2 = param_2[4];
    lVar3 = *(long *)(uVar1 + 0x10);
    if (lVar3 == *(long *)(uVar2 + 0x10)) {
      if (lVar3 != 0 && uVar1 != uVar2) {
        plVar4 = (long *)(uVar2 + 0x28);
        plVar5 = (long *)(uVar1 + 0x28);
        do {
          uVar1 = plVar5[-1];
          if ((uVar1 != plVar4[-1] || *plVar5 != *plVar4) &&
             (func_0x000107c605b8(), (uVar1 & 1) == 0)) {
            return 0;
          }
          plVar4 = plVar4 + 2;
          plVar5 = plVar5 + 2;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
      uVar1 = param_2[6];
      if (param_1[6] == 0) {
        if (uVar1 != 0) {
          return 0;
        }
      }
      else {
        if (uVar1 == 0) {
          return 0;
        }
        uVar2 = param_1[5];
        if (((uVar2 != param_2[5]) || (param_1[6] != uVar1)) &&
           (func_0x000107c605b8(), (uVar2 & 1) == 0)) {
          return 0;
        }
      }
      uVar1 = param_1[7];
      if (uVar1 == 0) {
        if (param_2[7] == 0) {
          return 1;
        }
      }
      else if ((param_2[7] != 0) && (FUN_101f42018(), (uVar1 & 1) != 0)) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 101f367b8; end: 101f368d7;  */

undefined8
FUN_101f367b8(ulong param_1,long param_2,byte param_3,long param_4,ulong param_5,long param_6,
             byte param_7,long param_8)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  if (param_2 == 0) {
    if (param_6 != 0) {
      return 0;
    }
  }
  else {
    if (param_6 == 0) {
      return 0;
    }
    if (((param_1 != param_5) || (param_2 != param_6)) &&
       (func_0x000107c605b8(param_1,param_2,param_5,param_6,0), (param_1 & 1) == 0)) {
      return 0;
    }
  }
  if (param_3 == 2) {
    if (param_7 != 2) {
      return 0;
    }
  }
  else {
    if (param_7 == 2) {
      return 0;
    }
    if (((param_3 ^ param_7) & 1) != 0) {
      return 0;
    }
  }
  if (param_4 == 0) {
    if (param_8 == 0) {
      return 1;
    }
  }
  else if ((param_8 != 0) && (lVar2 = *(long *)(param_4 + 0x10), lVar2 == *(long *)(param_8 + 0x10))
          ) {
    if (lVar2 == 0) {
      return 1;
    }
    if (param_4 == param_8) {
      return 1;
    }
    plVar3 = (long *)(param_8 + 0x28);
    plVar4 = (long *)(param_4 + 0x28);
    while ((uVar1 = plVar4[-1], uVar1 == plVar3[-1] && *plVar4 == *plVar3 ||
           (func_0x000107c605b8(), (uVar1 & 1) != 0))) {
      plVar3 = plVar3 + 2;
      plVar4 = plVar4 + 2;
      lVar2 = lVar2 + -1;
      if (lVar2 == 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 101f368d8; end: 101f3693b;  */

ulong FUN_101f368d8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (5 < uVar1) {
    uVar1 = 6;
  }
  return uVar1;
}



/* Entry: 101f3693c; end: 101f36c57;  */

/* WARNING: Removing unreachable block (ram,0x000101f36bbc) */
/* WARNING: Removing unreachable block (ram,0x000101f36a6c) */
/* WARNING: Removing unreachable block (ram,0x000101f36a98) */
/* WARNING: Removing unreachable block (ram,0x000101f36b40) */
/* WARNING: Removing unreachable block (ram,0x000101f36bd4) */
/* WARNING: Removing unreachable block (ram,0x000101f36bec) */
/* WARNING: Removing unreachable block (ram,0x000101f36ab4) */
/* WARNING: Removing unreachable block (ram,0x000101f36a08) */

void FUN_101f3693c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 ****ppppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  long lStack_140;
  undefined8 **ppuStack_138;
  undefined1 auStack_130 [64];
  undefined8 ***pppuStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 **ppuStack_d0;
  undefined8 ***pppuStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_a9;
  undefined8 ***pppuStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 **ppuStack_88;
  undefined8 ***pppuStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_58;
  
  lVar1 = 0x112e41ec8;
  func_0x0001000285a8(0x112e41ec8,&UNK_10da31698);
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  lVar2 = param_3;
  func_0x0001000a8868(param_3,uVar4);
  func_0x000101f3799c();
  func_0x000107c606e0((long)&lStack_140 - extraout_x8,&UNK_1104a2960,&UNK_1104a2960,lVar2,uVar4,
                      uVar5);
  if (unaff_x21 == 0) {
    pppuStack_f0 = (undefined8 ***)((ulong)pppuStack_f0 & 0xffffffffffffff00);
    ppppuVar3 = &pppuStack_f0;
    lVar2 = lVar1;
    func_0x000107c604f4();
    pppuStack_f0._0_1_ = 1;
    pppuStack_a8 = ppppuVar3;
    lStack_a0 = lVar2;
    func_0x000107c604fc(&pppuStack_f0,lVar1);
    pppuStack_f0 = (undefined8 ***)CONCAT71(pppuStack_f0._1_7_,2);
    uStack_98 = param_2;
    func_0x000107c604fc(&pppuStack_f0,lVar1);
    uVar4 = 0x112d38270;
    uStack_90 = param_2;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    auStack_130[0] = 3;
    uVar5 = uVar4;
    FUN_10188fe58();
    func_0x000107c60508(&pppuStack_f0,uVar4,auStack_130,lVar1,uVar4,uVar5);
    ppuStack_138 = pppuStack_f0;
    ppuStack_88 = pppuStack_f0;
    pppuStack_f0 = (undefined8 ***)CONCAT71(pppuStack_f0._1_7_,4);
    ppppuVar3 = &pppuStack_f0;
    lVar2 = lVar1;
    func_0x000107c604d4();
    uVar4 = 0x112e41ed8;
    lStack_140 = lVar2;
    pppuStack_80 = ppppuVar3;
    lStack_78 = lVar2;
    func_0x0001000285a8(0x112e41ed8,&UNK_10da316a0);
    uStack_a9 = 5;
    uVar5 = uVar4;
    FUN_101f379dc();
    func_0x000107c604e8(&uStack_58,uVar4,&uStack_a9,lVar1,uVar4,uVar5);
    (**(code **)(lVar6 + 8))((long)&lStack_140 - extraout_x8,lVar1);
    uStack_70 = uStack_58;
    lStack_e8 = lStack_a0;
    pppuStack_f0 = pppuStack_a8;
    uStack_d8 = uStack_90;
    uStack_e0 = uStack_98;
    pppuStack_c8 = pppuStack_80;
    ppuStack_d0 = ppuStack_88;
    uStack_b8 = uStack_58;
    lStack_c0 = lStack_78;
    FUN_101f37a8c(&pppuStack_f0,auStack_130);
    func_0x0001000834e4(param_3);
    func_0x000101f37ac0(&pppuStack_a8);
    param_1[1] = lStack_e8;
    *param_1 = pppuStack_f0;
    param_1[3] = uStack_d8;
    param_1[2] = uStack_e0;
    param_1[5] = pppuStack_c8;
    param_1[4] = ppuStack_d0;
    param_1[7] = uStack_b8;
    param_1[6] = lStack_c0;
  }
  else {
    func_0x0001000834e4(param_3);
  }
  return;
}



/* Entry: 101f36c58; end: 101f36cbb;  */

ulong FUN_101f36c58(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 101f36cbc; end: 101f36e9b;  */

/* WARNING: Removing unreachable block (ram,0x000101f36e00) */
/* WARNING: Removing unreachable block (ram,0x000101f36e78) */
/* WARNING: Removing unreachable block (ram,0x000101f36d88) */

undefined1 * FUN_101f36cbc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar1 = 0x112e41eb8;
  func_0x0001000285a8(0x112e41eb8,&UNK_10da31688);
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  puVar3 = *(undefined1 **)(param_1 + 0x20);
  lVar2 = param_1;
  func_0x0001000a8868(param_1,uVar4);
  FUN_101f3795c();
  func_0x000107c606e0(auStack_70 + -extraout_x8,&UNK_1104a29f0,&UNK_1104a29f0,lVar2,uVar4,puVar3);
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    puVar3 = &uStack_51;
    func_0x000107c604d4(puVar3,lVar1);
    uStack_52 = 1;
    func_0x000107c604d8(&uStack_52,lVar1);
    uVar4 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    uStack_53 = 2;
    uVar5 = uVar4;
    FUN_10188fe58();
    func_0x000107c604e8(auStack_68,uVar4,&uStack_53,lVar1,uVar4,uVar5);
    (**(code **)(lVar6 + 8))(auStack_70 + -extraout_x8,lVar1);
    func_0x0001000834e4(param_1);
  }
  else {
    func_0x0001000834e4(param_1);
  }
  return puVar3;
}



/* Entry: 101f36e9c; end: 101f37003;  */

undefined4 FUN_101f36e9c(long param_1,long param_2)

{
  ulong uVar1;
  
  if (param_1 != 0x6469 || param_2 != -0x1e00000000000000) {
    uVar1 = 0x6469;
    func_0x000107c605b8(0x6469,0xe200000000000000,param_1,param_2,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0;
      if (((param_1 == 0x656475746974616c) && (param_2 == -0x1800000000000000)) ||
         (func_0x000107c605b8(0x656475746974616c,0xe800000000000000,param_1,param_2,0),
         (uVar1 & 1) != 0)) {
        func_0x000107c6142c(param_2);
        return 1;
      }
      uVar1 = 0;
      if (((param_1 != 0x64757469676e6f6c) || (param_2 != -0x16ffffffffffff9b)) &&
         (func_0x000107c605b8(0x64757469676e6f6c,0xe900000000000065,param_1,param_2,0),
         (uVar1 & 1) == 0)) {
        uVar1 = 0;
        if ((param_1 == 0x69747265706f7270) && (param_2 == -0x15ffffffffff8c9b)) {
          func_0x000107c6142c(0xea00000000007365);
          return 3;
        }
        func_0x000107c605b8(0x69747265706f7270,0xea00000000007365,param_1,param_2,0);
        func_0x000107c6142c(param_2);
        if ((uVar1 & 1) != 0) {
          return 3;
        }
        return 4;
      }
      func_0x000107c6142c(param_2);
      return 2;
    }
  }
  func_0x000107c6142c(param_2);
  return 0;
}



/* Entry: 101f37004; end: 101f37233;  */

/* WARNING: Removing unreachable block (ram,0x000101f37134) */
/* WARNING: Removing unreachable block (ram,0x000101f371a0) */
/* WARNING: Removing unreachable block (ram,0x000101f370d0) */

void FUN_101f37004(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 ****ppppuVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_150 [64];
  undefined8 ***pppuStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined8 uStack_b8;
  undefined8 ***pppuStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined8 uStack_70;
  undefined1 uStack_51;
  
  lVar3 = 0x112e41ea0;
  func_0x0001000285a8(0x112e41ea0,&UNK_10da31680);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_3 + 0x18);
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  lVar4 = param_3;
  func_0x0001000a8868(param_3,uVar1);
  FUN_101f3787c();
  func_0x000107c606e0(auStack_150 + -extraout_x8,&UNK_1104a2a80,&UNK_1104a2a80,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    pppuStack_110 = (undefined8 ***)((ulong)pppuStack_110 & 0xffffffffffffff00);
    ppppuVar5 = &pppuStack_110;
    lVar4 = lVar3;
    func_0x000107c604f4();
    pppuStack_110._0_1_ = 1;
    pppuStack_a8 = ppppuVar5;
    lStack_a0 = lVar4;
    func_0x000107c604fc(&pppuStack_110,lVar3);
    pppuStack_110._0_1_ = 2;
    ppppuVar5 = &pppuStack_110;
    uStack_98 = param_2;
    func_0x000107c604fc(ppppuVar5,lVar3);
    uStack_51 = 3;
    uStack_90 = param_2;
    func_0x000101f378bc();
    func_0x000107c60508(&uStack_d0,&UNK_1104a28c0,&uStack_51,lVar3,&UNK_1104a28c0,ppppuVar5);
    (**(code **)(lVar6 + 8))(auStack_150 + -extraout_x8,lVar3);
    uStack_80 = uStack_c8;
    uStack_88 = uStack_d0;
    uStack_78 = uStack_c0;
    uStack_70 = uStack_b8;
    lStack_108 = lStack_a0;
    pppuStack_110 = pppuStack_a8;
    uStack_f8 = uStack_90;
    uStack_100 = uStack_98;
    uStack_e0 = CONCAT71(uStack_77,uStack_c0);
    uStack_e8 = uStack_c8;
    uStack_f0 = uStack_d0;
    uStack_d8 = uStack_b8;
    FUN_101f378fc(&pppuStack_110,auStack_150);
    func_0x0001000834e4(param_3);
    func_0x000101f37930(&pppuStack_a8);
    param_1[1] = lStack_108;
    *param_1 = pppuStack_110;
    param_1[3] = uStack_f8;
    param_1[2] = uStack_100;
    param_1[5] = uStack_e8;
    param_1[4] = uStack_f0;
    param_1[7] = uStack_d8;
    param_1[6] = uStack_e0;
  }
  else {
    func_0x0001000834e4(param_3);
  }
  return;
}



/* Entry: 101f37234; end: 101f37257;  */

void FUN_101f37234(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101f37258();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101f37258; end: 101f37297;  */

void FUN_101f37258(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41e98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da31564;
  func_0x000107c61520(&UNK_10da31564,&UNK_1104a27a8);
  puRam0000000112e41e98 = puVar1;
  return;
}


