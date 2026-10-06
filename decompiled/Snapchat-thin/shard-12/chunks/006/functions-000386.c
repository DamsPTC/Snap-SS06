/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1092a3f28; end: 1092a3f63;  */

long FUN_1092a3f28(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110ae7e40);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1092a3f64; end: 1092a3f6f;  */

undefined ** FUN_1092a3f64(void)

{
  return &PTR_DAT_110ae7e40;
}



/* Entry: 1092a3f70; end: 1092a421f;  */

void FUN_1092a3f70(long *param_1,long param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined8 *puVar3;
  char *pcVar4;
  long *plVar5;
  long lVar6;
  long extraout_x8;
  undefined8 **ppuStack_108;
  ulong uStack_100;
  byte bStack_f1;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d0 [24];
  long alStack_b8 [3];
  undefined **ppuStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  undefined ***pppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined8 *)0x40;
  __Znwm();
  puVar3[2] = 0x10929ea90;
  puVar3[3] = 0x10929eb1c;
  puVar3[6] = 0x10929eab0;
  puVar3[7] = 0;
  *puVar3 = 0x1092a4368;
  puVar3[1] = 0x10929ea78;
  bVar1 = *(byte *)(param_2 + 0x10);
  pcVar2 = FUN_1092a4394;
  if (bVar1 == 0) {
    pcVar2 = FUN_1092a43b4;
  }
  puVar3[4] = FUN_10929eb24;
  puVar3[5] = pcVar2;
  if ((bVar1 & 1) == 0) {
    ppuStack_a0 = *(undefined ***)(param_2 + 8);
  }
  else {
    FUN_1092b2700(&ppuStack_a0,*(undefined8 *)(param_2 + 8));
  }
  puVar3[7] = ppuStack_a0;
  puStack_98 = (undefined8 *)puVar3[1];
  ppuStack_a0 = (undefined **)*puVar3;
  pppuStack_88 = (undefined ***)puVar3[3];
  lStack_90 = puVar3[2];
  uStack_78 = puVar3[5];
  uStack_80 = puVar3[4];
  uStack_68 = puVar3[7];
  uStack_70 = puVar3[6];
  uStack_58 = 0;
  uStack_50 = 0;
  pcVar4 = "";
  FUN_10929edd8("",&ppuStack_a0,1);
  ppuStack_a0 = &PTR_FUN_110ae7ea8;
  *param_1 = (long)pcVar4;
  puStack_98 = puVar3;
  pppuStack_88 = &ppuStack_a0;
  FUN_1092a3ca0(param_1 + 1,&ppuStack_a0);
  if (pppuStack_88 == &ppuStack_a0) {
    lVar6 = 0x20;
LAB_1092a4098:
    (**(code **)((long)*pppuStack_88 + lVar6))();
  }
  else if (pppuStack_88 != (undefined ***)0x0) {
    lVar6 = 0x28;
    goto LAB_1092a4098;
  }
  if (*param_1 == 0) {
    lVar6 = *(long *)(param_2 + 8);
    if (*(char *)(lVar6 + 0x1f) < '\0') {
      func_0x000107c3192c(&uStack_f0,*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10));
      goto LAB_1092a410c;
    }
  }
  else {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
    ___stack_chk_fail();
    lVar6 = extraout_x8;
  }
  uStack_e8 = *(undefined8 *)(lVar6 + 0x10);
  uStack_f0 = *(undefined8 *)(lVar6 + 8);
  uStack_e0 = *(undefined8 *)(lVar6 + 0x18);
LAB_1092a410c:
  FUN_10928a5e0(auStack_d0,&UNK_10f5632e8,&uStack_f0);
  FUN_109259240(alStack_b8,auStack_d0,&UNK_10f563304);
  FUN_1092b1a98(*(undefined8 *)(param_2 + 8));
  __ZNSt3__19to_stringEm(&ppuStack_108);
  if (-1 < (char)bStack_f1) {
    uStack_100 = (ulong)bStack_f1;
    ppuStack_108 = &ppuStack_108;
  }
  plVar5 = alStack_b8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (plVar5,ppuStack_108,uStack_100);
  puStack_98 = (undefined8 *)plVar5[1];
  ppuStack_a0 = (undefined **)*plVar5;
  lStack_90 = plVar5[2];
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = 0;
  func_0x000105687ee0(&ppuStack_a0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1092a418c);
  (*pcVar2)();
}



/* Entry: 1092a4220; end: 1092a42ff;  */

/* WARNING: Possible PIC construction at 0x00010002d5b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002d5bc) */
/* WARNING: Removing unreachable block (ram,0x000107c60e4c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd8c0) */

ulong * FUN_1092a4220(ulong *param_1,long param_2)

{
  ulong *puVar1;
  undefined1 *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  long lVar6;
  ulong *puVar7;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  ulong *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  ulong *puStack_48;
  ulong *puStack_40;
  
  lVar6 = *(long *)(param_2 + 8);
  if (lVar6 != 0) {
    FUN_1092b21dc();
    FUN_1092b2024(*(undefined8 *)(param_2 + 8),0,0);
    FUN_1092b1a3c(&puStack_48,*(undefined8 *)(param_2 + 8));
    FUN_1092c3638(param_1,puStack_48,(long)puStack_40 - (long)puStack_48);
    FUN_1092b2024(*(undefined8 *)(param_2 + 8),lVar6,0);
    if (puStack_48 != (ulong *)0x0) {
      puStack_40 = puStack_48;
      __ZdlPv();
    }
    return puStack_48;
  }
  puVar2 = (undefined1 *)register0x00000008;
  puVar4 = (ulong *)&UNK_10f563335;
  while( true ) {
    puVar7 = puVar4;
    puVar3 = param_1;
    *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
    *(ulong **)(puVar2 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
    *(ulong **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined **)(puVar2 + -8) = unaff_x30;
    puVar4 = puVar7;
    func_0x000107c613d0();
    if (puVar4 < (ulong *)0x7ffffffffffffff8) break;
    func_0x000104c4f6b8();
    *(undefined8 *)(puVar2 + -0x60) = unaff_x20;
    *(ulong **)(puVar2 + -0x58) = puVar3;
    *(undefined1 **)(puVar2 + -0x50) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x48) = &UNK_10002d57c;
    unaff_x29 = puVar2 + -0x50;
    if ((bRam00000001132dfb00 & 1) != 0) {
      return puVar4;
    }
    puVar4 = (ulong *)0x1132dfb00;
    func_0x000107c60e48();
    if ((int)puVar4 == 0) {
      return puVar4;
    }
    unaff_x30 = &UNK_10002d5bc;
    puVar2 = puVar2 + -0x60;
    param_1 = (ulong *)0x1132dfae8;
    puVar4 = (ulong *)&UNK_10f5738ce;
    unaff_x19 = puVar3;
    unaff_x21 = puVar7;
  }
  if (puVar4 < (ulong *)0x17) {
    *(char *)((long)puVar3 + 0x17) = (char)puVar4;
    puVar5 = puVar3;
    if (puVar4 == (ulong *)0x0) goto code_r0x00010002d55c;
  }
  else {
    puVar1 = (ulong *)0x19;
    if (((ulong)puVar4 | 7) != 0x17) {
      puVar1 = (ulong *)(((ulong)puVar4 | 7) + 1);
    }
    puVar5 = puVar1;
    func_0x000107c60e20();
    puVar3[1] = (ulong)puVar4;
    puVar3[2] = (ulong)puVar1 | 0x8000000000000000;
    *puVar3 = (ulong)puVar5;
  }
  func_0x000107c610b8(puVar5,puVar7,puVar4);
code_r0x00010002d55c:
  *(undefined1 *)((long)puVar5 + (long)puVar4) = 0;
  return puVar3;
}



/* Entry: 1092a4300; end: 1092a4393;  */

undefined8 * FUN_1092a4300(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae7e60;
  FUN_1092a43bc(param_1 + 1,0);
  return param_1;
}



/* Entry: 1092a4394; end: 1092a43b3;  */

undefined8 FUN_1092a4394(long param_1)

{
  if (param_1 != 0) {
    FUN_1092b2248();
    __ZdlPv();
  }
  return 1;
}



/* Entry: 1092a43b4; end: 1092a43bb;  */

undefined8 FUN_1092a43b4(void)

{
  return 1;
}



/* Entry: 1092a43bc; end: 1092a43e3;  */

void FUN_1092a43bc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_1092b2248();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1092a43e4; end: 1092a43eb;  */

void FUN_1092a43e4(void)

{
  return;
}



/* Entry: 1092a43ec; end: 1092a441f;  */

void FUN_1092a43ec(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110ae7ea8;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1092a4420; end: 1092a443b;  */

void FUN_1092a4420(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110ae7ea8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1092a443c; end: 1092a44bf;  */

undefined * FUN_1092a443c(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = (int)*param_2;
  FUN_10929f574();
  if (iVar1 != 0) {
    puVar2 = &UNK_10f56330b;
    func_0x000105688514(&UNK_10f56330b);
    func_0x000107c31948(param_2,&PTR_DAT_110ae7f08);
    puVar2 = puVar2 + 8;
    if ((int)param_2 == 0) {
      puVar2 = (undefined *)0x0;
    }
    return puVar2;
  }
  puVar2 = *(undefined **)(param_1 + 8);
  if (puVar2 != (undefined *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return puVar2;
  }
  return (undefined *)0x0;
}



/* Entry: 1092a44c0; end: 1092a44cb;  */

undefined ** FUN_1092a44c0(void)

{
  return &PTR_DAT_110ae7f08;
}



/* Entry: 1092a44cc; end: 1092a460b;  */

undefined8 * FUN_1092a44cc(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_38;
  
  *param_1 = &PTR_FUN_110ae7f28;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  plVar2 = param_1 + 0x11;
  param_1[0x12] = 0;
  *plVar2 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  uVar4 = param_2[1];
  uVar3 = *param_2;
  param_1[0x14] = param_2[2];
  param_1[0x13] = uVar4;
  param_1[0x12] = uVar3;
  FUN_1092a2100(&lStack_38,param_2);
  plVar1 = (long *)*plVar2;
  *plVar2 = lStack_38;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  return param_1;
}



/* Entry: 1092a460c; end: 1092a46bf;  */

undefined8 * FUN_1092a460c(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110ae7f28;
  plVar1 = (long *)param_1[0x11];
  param_1[0x11] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  FUN_1092a737c(param_1 + 0xc);
  plVar1 = (long *)param_1[0xb];
  param_1[0xb] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x50))();
  }
  plVar1 = (long *)param_1[10];
  param_1[10] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x50))();
  }
  puStack_28 = param_1 + 7;
  FUN_1092a50e4(&puStack_28);
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
    __ZdlPv();
  }
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1092a46c0; end: 1092a46c3;  */

undefined8 * FUN_1092a46c0(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110ae7f28;
  plVar1 = (long *)param_1[0x11];
  param_1[0x11] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  FUN_1092a737c(param_1 + 0xc);
  plVar1 = (long *)param_1[0xb];
  param_1[0xb] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x50))();
  }
  plVar1 = (long *)param_1[10];
  param_1[10] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x50))();
  }
  puStack_28 = param_1 + 7;
  FUN_1092a50e4(&puStack_28);
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
    __ZdlPv();
  }
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1092a46c4; end: 1092a46d7;  */

void FUN_1092a46c4(void)

{
  FUN_1092a460c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092a46d8; end: 1092a4783;  */

void FUN_1092a46d8(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x20);
  FUN_1092a4784(param_1 + 0x38);
  func_0x0001092a73c4(param_1 + 0x60);
  uVar1 = 0x30;
  __Znwm();
  FUN_1092bf890();
  plVar2 = *(long **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x50))();
  }
  uVar1 = 0x30;
  __Znwm();
  FUN_1092bf890();
  plVar2 = *(long **)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001092a475c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x50))();
    return;
  }
  return;
}



/* Entry: 1092a4784; end: 1092a47cf;  */

/* WARNING: Removing unreachable block (ram,0x0001092a47b0) */

void FUN_1092a4784(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x28) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 1092a47d0; end: 1092a4847;  */

void FUN_1092a47d0(long *param_1,long *param_2)

{
  long *plVar1;
  uint uStack_24;
  
  uStack_24 = (uint)param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uStack_24 = (uint)*(byte *)((long)param_2 + 0x17);
  }
  (**(code **)(*param_1 + 8))(param_1,&uStack_24,4);
  plVar1 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar1 = param_2;
  }
  (**(code **)(*param_1 + 8))(param_1,plVar1,uStack_24);
  return;
}



/* Entry: 1092a4848; end: 1092a48cb;  */

long FUN_1092a4848(long *param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  byte *pbVar7;
  
  iVar2 = (int)param_2;
  if (param_2 < 8) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    uVar6 = param_2 >> 3;
    plVar5 = param_1;
    do {
      uVar1 = uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 + *plVar5 ^ uVar1;
      uVar6 = uVar6 - 1;
      plVar5 = plVar5 + 1;
    } while (uVar6 != 0);
  }
  if (iVar2 < 8) {
    iVar2 = 7;
  }
  uVar6 = (ulong)(iVar2 - 7);
  lVar4 = 0;
  lVar3 = param_2 - uVar6;
  if (uVar6 <= param_2 && lVar3 != 0) {
    pbVar7 = (byte *)((long)param_1 + uVar6);
    do {
      lVar4 = lVar4 * 0x101 + (ulong)*pbVar7;
      lVar3 = lVar3 + -1;
      pbVar7 = pbVar7 + 1;
    } while (lVar3 != 0);
  }
  return lVar4 + (uVar1 ^ param_2);
}



/* Entry: 1092a48cc; end: 1092a4cfb;  */

void FUN_1092a48cc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 ****ppppuVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  long *plVar8;
  long *plVar9;
  undefined8 ***pppuVar10;
  long *extraout_x8;
  long lVar11;
  undefined8 ***pppuVar12;
  ulong uVar13;
  undefined *unaff_x22;
  ulong unaff_x23;
  undefined8 ****unaff_x24;
  long lVar14;
  undefined1 uStack_201;
  undefined8 ***pppuStack_200;
  ulong uStack_1f8;
  undefined *puStack_1f0;
  undefined8 ***pppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined8 ***pppuStack_1d8;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  long lStack_1a0;
  long lStack_198;
  char cStack_189;
  undefined1 auStack_188 [15];
  undefined1 uStack_179;
  undefined1 *puStack_178;
  undefined *puStack_170;
  undefined **ppuStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 ***pppuStack_130;
  undefined8 **ppuStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 ***pppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1c0 = param_3;
  FUN_1092a46d8();
  FUN_1092b22a8(&pppuStack_f0,param_2);
  func_0x0001092a5124(param_1 + 7);
  param_1[8] = uStack_e8;
  param_1[7] = pppuStack_f0;
  param_1[9] = uStack_e0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  pppuStack_f0 = (undefined8 ***)0x0;
  pppuStack_130 = &pppuStack_f0;
  func_0x0001092a50e4(&pppuStack_130);
  lVar11 = param_1[7];
  lVar3 = param_1[8];
  lVar14 = 0;
  if (lVar3 != lVar11) {
    lVar14 = LZCOUNT((lVar3 - lVar11 >> 3) * -0x3333333333333333) * -2 + 0x7e;
  }
  FUN_1092a515c(lVar11,lVar3,lVar14,1);
  pppuVar10 = (undefined8 ***)param_1[7];
  pppuVar12 = (undefined8 ***)param_1[8];
  if (pppuVar12 != pppuVar10) {
    unaff_x23 = 0;
    unaff_x22 = &UNK_10f432965;
    do {
      FUN_1092a4cfc(auStack_1b8,param_2,pppuVar10 + unaff_x23 * 5);
      func_0x000107c31940(&lStack_1a0,&UNK_10f432965);
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      pppuStack_130 = (undefined8 ***)&UNK_1069b161c;
      ppuStack_128 = (undefined8 **)&PTR_DAT_110950c70;
      FUN_1092b17dc(&pppuStack_f0,auStack_1b8,&lStack_1a0,&pppuStack_130);
      (*(code *)*ppuStack_128)(&ppuStack_128);
      if (cStack_189 < '\0') {
        __ZdlPv(lStack_1a0);
      }
      unaff_x24 = &pppuStack_f0;
      FUN_1092b1a98();
      lVar14 = param_1[7];
      FUN_1092b1a3c(&lStack_1a0,&pppuStack_f0);
      lVar14 = lVar14 + unaff_x23 * 0x28;
      if (*(int *)(param_1 + 0x12) == 0) {
LAB_1092a4aa8:
        *(undefined4 *)(lVar14 + 0x1c) = 0;
        *(int *)(lVar14 + 0x20) = (int)unaff_x24;
        *(int *)(lVar14 + 0x18) = (int)param_1[2] - *(int *)(param_1 + 1);
        FUN_1092a70fc(param_1 + 1);
      }
      else {
        FUN_1092a4848(lStack_1a0,lStack_198 - lStack_1a0);
        puVar5 = param_1 + 0xc;
        FUN_1092a7428(puVar5,auStack_188);
        if (puVar5 == (undefined8 *)0x0) {
          puStack_178 = auStack_188;
          puVar5 = param_1 + 0xc;
          FUN_1092a74c8(puVar5,auStack_188,&UNK_10dd5b8f9,&puStack_178,&uStack_179);
          *(int *)(puVar5 + 3) = (int)unaff_x23;
          goto LAB_1092a4aa8;
        }
        uVar4 = *(uint *)(puVar5 + 3);
        lVar11 = param_1[7] + (ulong)uVar4 * 0x28;
        *(undefined4 *)(lVar14 + 0x20) = *(undefined4 *)(lVar11 + 0x20);
        *(undefined8 *)(lVar14 + 0x18) = *(undefined8 *)(lVar11 + 0x18);
        if (uVar4 == 0xffffffff) goto LAB_1092a4aa8;
      }
      if (lStack_1a0 != 0) {
        lStack_198 = lStack_1a0;
        __ZdlPv();
      }
      FUN_1092b2248(&pppuStack_f0);
      if (cStack_1a1 < '\0') {
        __ZdlPv(auStack_1b8[0]);
      }
      unaff_x23 = (ulong)((int)unaff_x23 + 1);
      pppuVar10 = (undefined8 ***)param_1[7];
      pppuVar12 = (undefined8 ***)param_1[8];
      uVar13 = ((long)pppuVar12 - (long)pppuVar10 >> 3) * -0x3333333333333333;
    } while (unaff_x23 <= uVar13 && uVar13 - unaff_x23 != 0);
  }
  ppppuVar2 = (undefined8 ****)param_1[1];
  lVar14 = param_1[2];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  uStack_120 = param_1[9];
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  pppuStack_130 = pppuVar10;
  ppuStack_128 = pppuVar12;
  (**(code **)*param_1)(param_1,ppppuVar2,lVar14 - (long)ppppuVar2,&pppuStack_130,param_1 + 4);
  func_0x000107c31940(&lStack_1a0,&UNK_10f5173d2);
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  puStack_170 = &UNK_1069b161c;
  ppuStack_168 = &PTR_DAT_110950c70;
  FUN_1092b17dc(&pppuStack_f0,uStack_1c0,&lStack_1a0,&puStack_170);
  (*(code *)*ppuStack_168)(&ppuStack_168);
  if (cStack_189 < '\0') {
    __ZdlPv(lStack_1a0);
  }
  plVar9 = (long *)param_1[4];
  FUN_1092b1f3c(&pppuStack_f0,plVar9,param_1[5] - (long)plVar9);
  FUN_1092b2248(&pppuStack_f0);
  pppuStack_f0 = &pppuStack_130;
  ppppuVar6 = &pppuStack_f0;
  func_0x0001092a50e4();
  if (ppppuVar2 != (undefined8 ****)0x0) {
    ppppuVar6 = ppppuVar2;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    FUN_1092b2248(&pppuStack_f0);
    pppuStack_f0 = &pppuStack_130;
    func_0x0001092a50e4(&pppuStack_f0);
    if (ppppuVar2 != (undefined8 ****)0x0) {
      __ZdlPv(ppppuVar2);
    }
    ppppuVar7 = ppppuVar6;
    __Unwind_Resume();
    pcStack_1c8 = FUN_1092a4cfc;
    pppuVar10 = ppppuVar7[1];
    if (-1 < (char)*(byte *)((long)ppppuVar7 + 0x17)) {
      pppuVar10 = (undefined8 ***)(ulong)*(byte *)((long)ppppuVar7 + 0x17);
    }
    uVar13 = plVar9[1];
    if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
      uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
    }
    plVar8 = extraout_x8;
    pppuStack_200 = unaff_x24;
    uStack_1f8 = unaff_x23;
    puStack_1f0 = unaff_x22;
    pppuStack_1e8 = ppppuVar2;
    ppuStack_1e0 = &puStack_170;
    pppuStack_1d8 = ppppuVar6;
    puStack_1d0 = &stack0xfffffffffffffff0;
    func_0x000104c4f768(extraout_x8,uVar13 + (long)pppuVar10,&uStack_201);
    plVar1 = (long *)*plVar8;
    if (-1 < *(char *)((long)plVar8 + 0x17)) {
      plVar1 = plVar8;
    }
    if (pppuVar10 != (undefined8 ***)0x0) {
      ppppuVar2 = (undefined8 ****)*ppppuVar7;
      if (-1 < *(char *)((long)ppppuVar7 + 0x17)) {
        ppppuVar2 = ppppuVar7;
      }
      _memmove(plVar1,ppppuVar2,pppuVar10);
    }
    if (uVar13 != 0) {
      plVar8 = (long *)*plVar9;
      if (-1 < *(char *)((long)plVar9 + 0x17)) {
        plVar8 = plVar9;
      }
      _memmove((long)plVar1 + (long)pppuVar10,plVar8,uVar13);
    }
    *(undefined1 *)((long)plVar1 + (long)pppuVar10 + uVar13) = 0;
    return;
  }
  return;
}



/* Entry: 1092a4cfc; end: 1092a4dc3;  */

void FUN_1092a4cfc(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  undefined1 uStack_41;
  
  uVar1 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  uVar2 = param_3[1];
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_3 + 0x17);
  }
  func_0x000104c4f768(param_1,uVar2 + uVar1,&uStack_41);
  plVar3 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar3 = param_1;
  }
  if (uVar1 != 0) {
    plVar4 = (long *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      plVar4 = param_2;
    }
    _memmove(plVar3,plVar4,uVar1);
  }
  if (uVar2 != 0) {
    plVar4 = (long *)*param_3;
    if (-1 < *(char *)((long)param_3 + 0x17)) {
      plVar4 = param_3;
    }
    _memmove((long)plVar3 + uVar1,plVar4,uVar2);
  }
  *(undefined1 *)((long)plVar3 + uVar1 + uVar2) = 0;
  return;
}



/* Entry: 1092a4dc4; end: 1092a50cb;  */

void FUN_1092a4dc4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  undefined8 *param_5)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puStack_98;
  int iStack_90;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  
  FUN_1092a46d8();
  uStack_8c = 0;
  uStack_5c = 0;
  uStack_64 = 0;
  uStack_6c = 0;
  uStack_74 = 0;
  uStack_7c = 0;
  puStack_98 = &UNK_100435a4c;
  iStack_90 = (int)((ulong)(param_4[1] - *param_4) >> 3) * -0x33333333;
  uStack_84 = (ulong)*(uint *)(param_1 + 0x94);
  (**(code **)(**(long **)(param_1 + 0x50) + 8))(*(long **)(param_1 + 0x50),&puStack_98,0x40);
  uStack_58 = 2;
  plVar2 = *(long **)(param_1 + 0x50);
  (**(code **)(*plVar2 + 0x18))();
  (**(code **)(**(long **)(param_1 + 0x50) + 8))(*(long **)(param_1 + 0x50),&uStack_58,8);
  lVar1 = param_4[1];
  for (lVar7 = *param_4; lVar7 != lVar1; lVar7 = lVar7 + 0x28) {
    FUN_1092a47d0(*(undefined8 *)(param_1 + 0x50),lVar7);
    (**(code **)(**(long **)(param_1 + 0x50) + 8))(*(long **)(param_1 + 0x50),lVar7 + 0x1c,4);
    (**(code **)(**(long **)(param_1 + 0x50) + 8))(*(long **)(param_1 + 0x50),lVar7 + 0x20,4);
    (**(code **)(**(long **)(param_1 + 0x50) + 8))(*(long **)(param_1 + 0x50),lVar7 + 0x18,4);
  }
  plVar3 = *(long **)(param_1 + 0x50);
  (**(code **)(*plVar3 + 0x18))();
  uStack_58 = CONCAT44(((int)plVar3 - (int)plVar2) + -8,(undefined4)uStack_58);
  (**(code **)(**(long **)(param_1 + 0x50) + 0x20))(*(long **)(param_1 + 0x50),plVar2,0);
  (**(code **)(**(long **)(param_1 + 0x50) + 8))(*(long **)(param_1 + 0x50),&uStack_58,8);
  (**(code **)(**(long **)(param_1 + 0x50) + 0x20))(*(long **)(param_1 + 0x50),plVar3,0);
  uStack_8c._4_4_ = 1;
  puVar4 = *(undefined8 **)(param_1 + 0x88);
  (**(code **)*puVar4)(puVar4,param_2,param_3,param_1 + 0x20,0);
  uStack_84 = CONCAT44((int)param_3,(undefined4)uStack_84);
  uStack_7c = CONCAT44(uStack_7c._4_4_,(int)puVar4);
  uStack_58 = CONCAT44((int)puVar4,1);
  (**(code **)(**(long **)(param_1 + 0x58) + 8))(*(long **)(param_1 + 0x58),&uStack_58,8);
  (**(code **)(**(long **)(param_1 + 0x58) + 8))
            (*(long **)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x20),(ulong)puVar4 & 0xffffffff);
  plVar2 = *(long **)(param_1 + 0x50);
  (**(code **)(*plVar2 + 0x18))();
  uStack_8c = CONCAT44(uStack_8c._4_4_,(int)plVar2);
  (**(code **)(**(long **)(param_1 + 0x50) + 0x20))(*(long **)(param_1 + 0x50),0,0);
  (**(code **)(**(long **)(param_1 + 0x50) + 8))(*(long **)(param_1 + 0x50),&puStack_98,0x40);
  uVar6 = *param_5;
  param_5[1] = uVar6;
  plVar2 = *(long **)(param_1 + 0x50);
  (**(code **)(*plVar2 + 0x28))();
  plVar3 = *(long **)(param_1 + 0x50);
  (**(code **)(*plVar3 + 0x28))();
  plVar5 = *(long **)(param_1 + 0x50);
  (**(code **)(*plVar5 + 0x10))();
  FUN_1092a6ef8(param_5,uVar6,plVar2,(long)plVar3 + (long)plVar5,
                ((long)plVar3 + (long)plVar5) - (long)plVar2);
  uVar6 = param_5[1];
  plVar2 = *(long **)(param_1 + 0x58);
  (**(code **)(*plVar2 + 0x28))();
  plVar3 = *(long **)(param_1 + 0x58);
  (**(code **)(*plVar3 + 0x28))();
  plVar5 = *(long **)(param_1 + 0x58);
  (**(code **)(*plVar5 + 0x10))();
  FUN_1092a6ef8(param_5,uVar6,plVar2,(long)plVar3 + (long)plVar5,
                ((long)plVar3 + (long)plVar5) - (long)plVar2);
  return;
}



/* Entry: 1092a50cc; end: 1092a50cf;  */

void FUN_1092a50cc(void)

{
  return;
}



/* Entry: 1092a50d0; end: 1092a50e3;  */

void FUN_1092a50d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&UNK_10f563348;
  func_0x000105688514();
  if (*(long *)*puVar1 != 0) {
    FUN_1092a4784();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*puVar1);
    return;
  }
  return;
}



/* Entry: 1092a50e4; end: 1092a515b;  */

void FUN_1092a50e4(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_1092a4784();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 1092a515c; end: 1092a640f;  */

/* WARNING: Removing unreachable block (ram,0x0001092a5924) */
/* WARNING: Removing unreachable block (ram,0x0001092a56a4) */
/* WARNING: Removing unreachable block (ram,0x0001092a6024) */
/* WARNING: Removing unreachable block (ram,0x0001092a56d4) */
/* WARNING: Removing unreachable block (ram,0x0001092a5958) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1092a515c(char *******param_1,char *******param_2,char *******param_3,char *******param_4)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  char *****pppppcVar4;
  undefined1 uVar5;
  char cVar6;
  char cVar7;
  byte bVar8;
  char *******pppppppcVar9;
  char *******pppppppcVar10;
  char *******pppppppcVar11;
  char *******pppppppcVar12;
  char *******pppppppcVar13;
  char *******pppppppcVar14;
  ulong uVar15;
  char *******pppppppcVar16;
  char *pcVar17;
  char ******ppppppcVar18;
  char *******pppppppcVar19;
  char *****pppppcVar20;
  char *******pppppppcVar21;
  char *******pppppppcVar22;
  char *******pppppppcVar23;
  char *******pppppppcVar24;
  char ******ppppppcVar25;
  char *******unaff_x20;
  ulong uVar26;
  char *******pppppppcVar27;
  ulong uVar28;
  char *******pppppppcVar29;
  ulong uVar30;
  ulong uVar31;
  char *****pppppcVar32;
  char ******ppppppcVar33;
  char *******pppppppcStack_148;
  char *******pppppppcStack_140;
  char *******pppppppcStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char *****pppppcStack_120;
  char *****pppppcStack_118;
  undefined7 uStack_108;
  undefined1 uStack_101;
  undefined7 uStack_100;
  long lStack_f8;
  char *******pppppppcStack_f0;
  char *******pppppppcStack_e8;
  char *******pppppppcStack_e0;
  char *******pppppppcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char *******pppppppcStack_c0;
  char *******pppppppcStack_b8;
  char *******pppppppcStack_b0;
  char ******ppppppcStack_a8;
  char *******pppppppcStack_a0;
  char ******ppppppcStack_98;
  char ******ppppppcStack_90;
  char ******ppppppcStack_88;
  char ******ppppppcStack_80;
  undefined8 uStack_78;
  undefined7 uStack_70;
  long lStack_68;
  
  pppppppcVar19 = (char *******)&pppppppcStack_c0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppcStack_c0 = param_2;
  pppppppcStack_b8 = param_1;
  pppppppcVar29 = param_3;
LAB_1092a51ac:
  pppppppcVar9 = pppppppcStack_b8;
  pppppppcVar27 = pppppppcStack_c0;
  uVar28 = (long)pppppppcStack_c0 - (long)pppppppcStack_b8;
  uVar31 = ((long)uVar28 >> 3) * -0x3333333333333333;
  if (uVar31 - 2 == 0 || (long)uVar31 < 2) {
    if (uVar31 < 2) goto LAB_1092a63d4;
    if (uVar31 == 2) {
      pppppppcVar23 = pppppppcStack_c0 + -5;
      pppppppcVar29 = (char *******)pppppppcStack_c0[-5];
      pppppppcVar16 = (char *******)((long)pppppppcStack_c0[-5] + (long)pppppppcStack_c0[-4]);
      if (-1 < (char)*(byte *)((long)pppppppcStack_c0 + -0x11)) {
        pppppppcVar29 = pppppppcVar23;
        pppppppcVar16 =
             (char *******)((long)pppppppcVar23 + (ulong)*(byte *)((long)pppppppcStack_c0 + -0x11));
      }
      pppppppcVar14 = (char *******)((long)*pppppppcStack_b8 + (long)pppppppcStack_b8[1]);
      pppppppcVar11 = (char *******)*pppppppcStack_b8;
      if (-1 < (char)*(byte *)((long)pppppppcStack_b8 + 0x17)) {
        pppppppcVar14 =
             (char *******)
             ((long)pppppppcStack_b8 + (ulong)*(byte *)((long)pppppppcStack_b8 + 0x17));
        pppppppcVar11 = pppppppcStack_b8;
      }
      goto LAB_1092a59d0;
    }
  }
  else {
    if (uVar31 == 3) {
      param_3 = pppppppcStack_c0 + -5;
      param_2 = pppppppcStack_b8 + 5;
      param_1 = pppppppcStack_b8;
      pppppppcStack_c0 = param_3;
      FUN_1092a64dc();
      goto LAB_1092a63d4;
    }
    if (uVar31 == 4) {
      pppppppcStack_c0 = pppppppcStack_c0 + -5;
      param_2 = pppppppcStack_b8 + 5;
      param_3 = pppppppcStack_b8 + 10;
      param_1 = pppppppcStack_b8;
      FUN_1092a6718();
      goto LAB_1092a63d4;
    }
    if (uVar31 == 5) {
      pppppppcStack_c0 = pppppppcStack_c0 + -5;
      param_2 = pppppppcStack_b8 + 5;
      param_3 = pppppppcStack_b8 + 10;
      param_1 = pppppppcStack_b8;
      FUN_1092a68cc();
      goto LAB_1092a63d4;
    }
  }
  if ((long)uVar28 < 0x3c0) {
    if (((ulong)param_4 & 1) == 0) {
      if ((pppppppcStack_b8 != pppppppcStack_c0) && (pppppppcStack_b8 + 5 != pppppppcStack_c0)) {
        unaff_x20 = (char *******)&pppppppcStack_a0;
        pppppppcVar19 = pppppppcStack_b8 + 5;
        pppppppcVar29 = pppppppcStack_b8;
        do {
          pppppppcVar9 = pppppppcVar19;
          pppppppcVar19 = (char *******)pppppppcVar29[5];
          pppppppcVar16 = (char *******)((long)pppppppcVar29[5] + (long)pppppppcVar29[6]);
          if (-1 < (char)*(byte *)((long)pppppppcVar29 + 0x3f)) {
            pppppppcVar19 = pppppppcVar9;
            pppppppcVar16 =
                 (char *******)((long)pppppppcVar9 + (ulong)*(byte *)((long)pppppppcVar29 + 0x3f));
          }
          pppppppcVar11 = (char *******)((long)*pppppppcVar29 + (long)pppppppcVar29[1]);
          pppppppcVar23 = (char *******)*pppppppcVar29;
          if (-1 < (char)*(byte *)((long)pppppppcVar29 + 0x17)) {
            pppppppcVar11 =
                 (char *******)((long)pppppppcVar29 + (ulong)*(byte *)((long)pppppppcVar29 + 0x17));
            pppppppcVar23 = pppppppcVar29;
          }
          do {
            if (pppppppcVar11 == pppppppcVar23) break;
            if (pppppppcVar16 == pppppppcVar19) {
LAB_1092a62cc:
              ppppppcStack_90 = pppppppcVar9[2];
              ppppppcStack_98 = pppppppcVar9[1];
              pppppppcStack_a0 = (char *******)*pppppppcVar9;
              pppppppcVar9[1] = (char ******)0x0;
              pppppppcVar9[2] = (char ******)0x0;
              *pppppppcVar9 = (char ******)0x0;
              ppppppcStack_80 = pppppppcVar29[9];
              ppppppcStack_88 = pppppppcVar29[8];
              pppppppcVar19 = pppppppcVar9;
LAB_1092a62f0:
              param_4 = pppppppcVar29;
              if (*(char *)((long)pppppppcVar19 + 0x17) < '\0') {
                param_1 = (char *******)*pppppppcVar19;
                __ZdlPv();
              }
              ppppppcVar18 = *param_4;
              pppppppcVar19[1] = param_4[1];
              *pppppppcVar19 = ppppppcVar18;
              pppppppcVar19[2] = param_4[2];
              *(char *)((long)param_4 + 0x17) = '\0';
              *(char *)param_4 = '\0';
              ppppppcVar18 = param_4[3];
              pppppppcVar19[4] = param_4[4];
              pppppppcVar19[3] = ppppppcVar18;
              pppppppcVar29 = param_4 + -5;
              pppppppcVar16 = pppppppcStack_a0;
              pppppppcVar23 = (char *******)((long)pppppppcStack_a0 + (long)ppppppcStack_98);
              if (-1 < (long)ppppppcStack_90) {
                pppppppcVar16 = unaff_x20;
                pppppppcVar23 = (char *******)((long)unaff_x20 + ((ulong)ppppppcStack_90 >> 0x38));
              }
              pppppppcVar14 = (char *******)((long)*pppppppcVar29 + (long)param_4[-4]);
              pppppppcVar11 = (char *******)*pppppppcVar29;
              if (-1 < (char)*(byte *)((long)param_4 + -0x11)) {
                pppppppcVar14 =
                     (char *******)((long)pppppppcVar29 + (ulong)*(byte *)((long)param_4 + -0x11));
                pppppppcVar11 = pppppppcVar29;
              }
LAB_1092a636c:
              if (pppppppcVar14 == pppppppcVar11) goto LAB_1092a63a0;
              pppppppcVar19 = param_4;
              if (pppppppcVar23 != pppppppcVar16) {
                pppppppcVar23 = (char *******)((long)pppppppcVar23 + -1);
                cVar6 = *(char *)((long)pppppppcVar14 + -1);
                if (cVar6 <= *(char *)pppppppcVar23) goto code_r0x0001092a638c;
              }
              goto LAB_1092a62f0;
            }
            pppppppcVar16 = (char *******)((long)pppppppcVar16 + -1);
            cVar6 = *(char *)((long)pppppppcVar11 + -1);
            if (*(char *)pppppppcVar16 < cVar6) goto LAB_1092a62cc;
            pppppppcVar11 = (char *******)((long)pppppppcVar11 + -1);
          } while (*(char *)pppppppcVar16 <= cVar6);
LAB_1092a63c8:
          pppppppcVar19 = pppppppcVar9 + 5;
          pppppppcVar29 = pppppppcVar9;
        } while (pppppppcVar9 + 5 != pppppppcVar27);
      }
    }
    else if ((pppppppcStack_b8 != pppppppcStack_c0) && (pppppppcStack_b8 + 5 != pppppppcStack_c0)) {
      unaff_x20 = (char *******)&pppppppcStack_a0;
      pppppppcVar19 = pppppppcStack_b8 + 5;
      pppppppcVar29 = pppppppcStack_b8;
      goto LAB_1092a5a58;
    }
    goto LAB_1092a63d4;
  }
  if (pppppppcVar29 != (char *******)0x0) {
    uVar31 = uVar31 >> 1;
    pppppppcVar9 = pppppppcStack_b8 + uVar31 * 5;
    param_3 = pppppppcStack_c0 + -5;
    if (uVar28 < 0x1401) {
      param_2 = pppppppcStack_b8;
      FUN_1092a64dc();
    }
    else {
      FUN_1092a64dc(pppppppcStack_b8);
      pppppppcVar9 = pppppppcStack_c0;
      pppppppcVar27 = (char *******)(uVar31 * 0x28 + -0x28);
      FUN_1092a64dc(pppppppcStack_b8 + 5,pppppppcStack_b8 + uVar31 * 5 + -5,pppppppcStack_c0 + -10);
      FUN_1092a64dc(pppppppcStack_b8 + 10,pppppppcStack_b8 + uVar31 * 5 + 5,pppppppcVar9 + -0xf);
      param_3 = pppppppcStack_b8 + uVar31 * 5 + 5;
      FUN_1092a64dc(pppppppcStack_b8 + uVar31 * 5 + -5,pppppppcStack_b8 + uVar31 * 5);
      pppppppcStack_a0 = pppppppcStack_b8 + uVar31 * 5;
      pppppppcVar9 = (char *******)&pppppppcStack_b8;
      param_2 = (char *******)&pppppppcStack_a0;
      FUN_1092a6b0c();
    }
    pppppppcVar16 = pppppppcStack_b8;
    pppppppcVar29 = (char *******)((long)pppppppcVar29 + -1);
    uStack_78._7_1_ = (undefined1)((ulong)pppppppcStack_c0 >> 0x38);
    uStack_78._0_7_ = SUB87(pppppppcStack_c0,0);
    if (((ulong)param_4 & 1) != 0) {
LAB_1092a5298:
      ppppppcStack_90 = pppppppcStack_b8[2];
      ppppppcStack_98 = pppppppcStack_b8[1];
      pppppppcStack_a0 = (char *******)*pppppppcStack_b8;
      pppppppcStack_b8[1] = (char ******)0x0;
      pppppppcStack_b8[2] = (char ******)0x0;
      *pppppppcStack_b8 = (char ******)0x0;
      ppppppcStack_80 = pppppppcStack_b8[4];
      ppppppcStack_88 = pppppppcStack_b8[3];
      pppppppcVar14 = pppppppcStack_b8;
      pppppppcVar11 = (char *******)((long)pppppppcStack_a0 + (long)ppppppcStack_98);
      pppppppcVar23 = pppppppcStack_a0;
      if (-1 < (long)ppppppcStack_90) {
        pppppppcVar11 = (char *******)((long)&pppppppcStack_a0 + ((ulong)ppppppcStack_90 >> 0x38));
        pppppppcVar23 = (char *******)&pppppppcStack_a0;
      }
LAB_1092a52e4:
      pppppppcVar10 = pppppppcVar14;
      pppppppcVar14 = pppppppcVar10 + 5;
      pppppppcStack_b0 = pppppppcVar14;
      pppppppcVar22 = (char *******)((long)*pppppppcVar14 + (long)pppppppcVar10[6]);
      pppppppcVar12 = pppppppcVar11;
      pppppppcVar9 = (char *******)*pppppppcVar14;
      if (-1 < (char)*(byte *)((long)pppppppcVar10 + 0x3f)) {
        pppppppcVar22 =
             (char *******)((long)pppppppcVar14 + (ulong)*(byte *)((long)pppppppcVar10 + 0x3f));
        pppppppcVar9 = pppppppcVar14;
      }
LAB_1092a5314:
      if (pppppppcVar12 == pppppppcVar23) goto LAB_1092a5348;
      if (pppppppcVar22 != pppppppcVar9) {
        cVar6 = *(char *)((long)pppppppcVar22 + -1);
        cVar7 = *(char *)((long)pppppppcVar12 + -1);
        if (cVar7 <= cVar6) goto code_r0x0001092a5334;
      }
      goto LAB_1092a52e4;
    }
    pppppppcVar14 = pppppppcStack_b8 + -5;
    pppppppcVar23 = (char *******)*pppppppcVar14;
    pppppppcVar11 = (char *******)((long)*pppppppcVar14 + (long)pppppppcStack_b8[-4]);
    if (-1 < (char)*(byte *)((long)pppppppcStack_b8 + -0x11)) {
      pppppppcVar23 = pppppppcVar14;
      pppppppcVar11 =
           (char *******)((long)pppppppcVar14 + (ulong)*(byte *)((long)pppppppcStack_b8 + -0x11));
    }
    pppppppcVar22 = (char *******)((long)*pppppppcStack_b8 + (long)pppppppcStack_b8[1]);
    pppppppcVar14 = (char *******)*pppppppcStack_b8;
    if (-1 < (char)*(byte *)((long)pppppppcStack_b8 + 0x17)) {
      pppppppcVar22 =
           (char *******)((long)pppppppcStack_b8 + (ulong)*(byte *)((long)pppppppcStack_b8 + 0x17));
      pppppppcVar14 = pppppppcStack_b8;
    }
    do {
      if (pppppppcVar22 == pppppppcVar14) break;
      if (pppppppcVar11 == pppppppcVar23) goto LAB_1092a5298;
      pppppppcVar11 = (char *******)((long)pppppppcVar11 + -1);
      cVar6 = *(char *)((long)pppppppcVar22 + -1);
      if (*(char *)pppppppcVar11 < cVar6) goto LAB_1092a5298;
      pppppppcVar22 = (char *******)((long)pppppppcVar22 + -1);
    } while (*(char *)pppppppcVar11 <= cVar6);
    ppppppcStack_90 = pppppppcStack_b8[2];
    ppppppcStack_98 = pppppppcStack_b8[1];
    pppppppcStack_a0 = (char *******)*pppppppcStack_b8;
    pppppppcStack_b8[1] = (char ******)0x0;
    pppppppcStack_b8[2] = (char ******)0x0;
    *pppppppcStack_b8 = (char ******)0x0;
    ppppppcStack_80 = pppppppcStack_b8[4];
    ppppppcStack_88 = pppppppcStack_b8[3];
    unaff_x20 = pppppppcStack_a0;
    pppppppcVar27 = (char *******)((long)pppppppcStack_a0 + (long)ppppppcStack_98);
    if (-1 < (long)ppppppcStack_90) {
      unaff_x20 = (char *******)&pppppppcStack_a0;
      pppppppcVar27 = (char *******)((long)&pppppppcStack_a0 + ((ulong)ppppppcStack_90 >> 0x38));
    }
    uVar31 = (ulong)*(byte *)((long)pppppppcStack_c0 + -0x11);
    pppppppcVar12 = pppppppcStack_c0 + -5;
    pppppppcVar11 = (char *******)*pppppppcVar12;
    ppppppcVar18 = pppppppcStack_c0[-4];
    pppppppcVar14 = (char *******)((long)pppppppcVar11 + (long)ppppppcVar18);
    pppppppcVar22 = pppppppcVar27;
    pppppppcVar23 = pppppppcVar11;
    if (-1 < (char)*(byte *)((long)pppppppcStack_c0 + -0x11)) {
      pppppppcVar14 = (char *******)((long)pppppppcVar12 + uVar31);
      pppppppcVar23 = pppppppcVar12;
    }
    do {
      if (pppppppcVar14 == pppppppcVar23) break;
      pppppppcVar12 = pppppppcStack_b8;
      if (pppppppcVar22 == unaff_x20) {
LAB_1092a5748:
        do {
          pppppppcStack_b0 = pppppppcVar12 + 5;
          pppppppcVar14 = (char *******)((long)*pppppppcStack_b0 + (long)pppppppcVar12[6]);
          pppppppcVar22 = pppppppcVar27;
          pppppppcVar23 = (char *******)*pppppppcStack_b0;
          if (-1 < (char)*(byte *)((long)pppppppcVar12 + 0x3f)) {
            pppppppcVar14 =
                 (char *******)
                 ((long)pppppppcStack_b0 + (ulong)*(byte *)((long)pppppppcVar12 + 0x3f));
            pppppppcVar23 = pppppppcStack_b0;
          }
          do {
            pppppppcVar12 = pppppppcStack_b0;
            if (pppppppcVar14 == pppppppcVar23) break;
            if (pppppppcVar22 == unaff_x20) goto LAB_1092a57a4;
            pppppppcVar22 = (char *******)((long)pppppppcVar22 + -1);
            pppppppcVar14 = (char *******)((long)pppppppcVar14 + -1);
            if (*(char *)pppppppcVar22 < *(char *)pppppppcVar14) goto LAB_1092a57a4;
          } while (*(char *)pppppppcVar22 <= *(char *)pppppppcVar14);
        } while( true );
      }
      cVar6 = *(char *)((long)pppppppcVar22 + -1);
      cVar7 = *(char *)((long)pppppppcVar14 + -1);
      if (cVar6 < cVar7) goto LAB_1092a5748;
      pppppppcVar14 = (char *******)((long)pppppppcVar14 + -1);
      pppppppcVar22 = (char *******)((long)pppppppcVar22 + -1);
    } while (cVar6 <= cVar7);
    pppppppcStack_b0 = pppppppcStack_b8 + 5;
    pppppppcVar23 = pppppppcStack_b8;
    pppppppcVar14 = pppppppcStack_b8 + 5;
    while (pppppppcStack_b0 = pppppppcVar14, pppppppcVar14 < pppppppcStack_c0) {
      pppppppcVar12 = (char *******)((long)pppppppcVar23[5] + (long)pppppppcVar23[6]);
      pppppppcVar10 = pppppppcVar27;
      pppppppcVar22 = (char *******)pppppppcVar23[5];
      if (-1 < (char)*(byte *)((long)pppppppcVar23 + 0x3f)) {
        pppppppcVar12 =
             (char *******)((long)pppppppcVar14 + (ulong)*(byte *)((long)pppppppcVar23 + 0x3f));
        pppppppcVar22 = pppppppcVar14;
      }
      do {
        if (pppppppcVar12 == pppppppcVar22) break;
        if (pppppppcVar10 == unaff_x20) goto LAB_1092a57a4;
        cVar6 = *(char *)((long)pppppppcVar10 + -1);
        cVar7 = *(char *)((long)pppppppcVar12 + -1);
        if (cVar6 < cVar7) goto LAB_1092a57a4;
        pppppppcVar12 = (char *******)((long)pppppppcVar12 + -1);
        pppppppcVar10 = (char *******)((long)pppppppcVar10 + -1);
      } while (cVar6 <= cVar7);
      pppppppcStack_b0 = pppppppcVar14 + 5;
      pppppppcVar23 = pppppppcVar14;
      pppppppcVar14 = pppppppcVar14 + 5;
    }
LAB_1092a57a4:
    pppppppcVar23 = pppppppcStack_c0;
    pppppppcVar14 = pppppppcStack_c0;
    if (pppppppcStack_b0 < pppppppcStack_c0) {
      do {
        pppppppcVar23 = pppppppcVar14 + -5;
        uStack_78._0_7_ = SUB87(pppppppcVar23,0);
        uStack_78._7_1_ = (undefined1)((ulong)pppppppcVar23 >> 0x38);
        pppppppcVar22 = (char *******)((long)pppppppcVar11 + (long)ppppppcVar18);
        pppppppcVar12 = pppppppcVar27;
        if (-1 < (char)uVar31) {
          pppppppcVar22 = (char *******)((long)pppppppcVar23 + uVar31);
          pppppppcVar11 = pppppppcVar23;
        }
        while( true ) {
          if (pppppppcVar22 == pppppppcVar11) goto LAB_1092a58d8;
          if (pppppppcVar12 == unaff_x20) break;
          cVar6 = *(char *)((long)pppppppcVar12 + -1);
          cVar7 = *(char *)((long)pppppppcVar22 + -1);
          if (cVar6 < cVar7) break;
          pppppppcVar22 = (char *******)((long)pppppppcVar22 + -1);
          pppppppcVar12 = (char *******)((long)pppppppcVar12 + -1);
          if (cVar7 < cVar6) goto LAB_1092a58d8;
        }
        uVar31 = (ulong)*(byte *)((long)pppppppcVar14 + -0x39);
        pppppppcVar11 = (char *******)pppppppcVar14[-10];
        ppppppcVar18 = pppppppcVar14[-9];
        pppppppcVar14 = pppppppcVar23;
      } while( true );
    }
LAB_1092a58d8:
    pppppppcVar11 = pppppppcStack_b0;
    if (pppppppcStack_b0 < pppppppcVar23) {
      pppppppcVar9 = (char *******)&pppppppcStack_b0;
      param_2 = (char *******)&uStack_78;
      FUN_1092a6410();
      pppppppcVar23 = pppppppcStack_b0;
      do {
        pppppppcStack_b0 = pppppppcVar23 + 5;
        pppppppcVar14 = (char *******)((long)*pppppppcStack_b0 + (long)pppppppcVar23[6]);
        pppppppcVar22 = pppppppcVar27;
        pppppppcVar11 = (char *******)*pppppppcStack_b0;
        if (-1 < (char)*(byte *)((long)pppppppcVar23 + 0x3f)) {
          pppppppcVar14 =
               (char *******)((long)pppppppcStack_b0 + (ulong)*(byte *)((long)pppppppcVar23 + 0x3f))
          ;
          pppppppcVar11 = pppppppcStack_b0;
        }
        do {
          pppppppcVar23 = pppppppcStack_b0;
          if (pppppppcVar14 == pppppppcVar11) break;
          if (pppppppcVar22 == unaff_x20) {
LAB_1092a587c:
            pppppppcVar11 = (char *******)CONCAT17(uStack_78._7_1_,(undefined7)uStack_78);
            goto LAB_1092a5880;
          }
          pppppppcVar22 = (char *******)((long)pppppppcVar22 + -1);
          pppppppcVar14 = (char *******)((long)pppppppcVar14 + -1);
          if (*(char *)pppppppcVar22 < *(char *)pppppppcVar14) goto LAB_1092a587c;
        } while (*(char *)pppppppcVar22 <= *(char *)pppppppcVar14);
      } while( true );
    }
    pppppppcVar27 = pppppppcStack_b0 + -5;
    if (pppppppcVar27 != pppppppcVar16) {
      if (*(char *)((long)pppppppcVar16 + 0x17) < '\0') {
        pppppppcVar9 = (char *******)*pppppppcVar16;
        __ZdlPv();
      }
      ppppppcVar25 = pppppppcVar11[-4];
      ppppppcVar18 = *pppppppcVar27;
      pppppppcVar16[2] = pppppppcVar11[-3];
      pppppppcVar16[1] = ppppppcVar25;
      *pppppppcVar16 = ppppppcVar18;
      *(char *)((long)pppppppcVar11 + -0x11) = '\0';
      *(char *)(pppppppcVar11 + -5) = '\0';
      ppppppcVar18 = pppppppcVar11[-2];
      pppppppcVar16[4] = pppppppcVar11[-1];
      pppppppcVar16[3] = ppppppcVar18;
    }
    pppppppcStack_b8 = pppppppcVar9;
    pppppppcVar11[-3] = ppppppcStack_90;
    pppppppcVar11[-4] = ppppppcStack_98;
    *pppppppcVar27 = (char ******)pppppppcStack_a0;
    ppppppcStack_90 = (char ******)((ulong)ppppppcStack_90 & 0xffffffffffffff);
    pppppppcStack_a0 = (char *******)((ulong)pppppppcStack_a0 & 0xffffffffffffff00);
    pppppppcVar11[-1] = ppppppcStack_80;
    pppppppcVar11[-2] = ppppppcStack_88;
    pppppppcVar9 = pppppppcStack_b0;
LAB_1092a5960:
    param_4 = (char *******)0x0;
    param_1 = pppppppcStack_b8;
LAB_1092a5964:
    pppppppcStack_b8 = pppppppcVar9;
    goto LAB_1092a51ac;
  }
  if (pppppppcStack_b8 == pppppppcStack_c0) goto LAB_1092a63d4;
  uVar26 = uVar31 - 2 >> 1;
  uVar15 = uVar26;
  do {
    if ((long)uVar15 <= (long)uVar26) {
      uVar2 = uVar15 << 1 | 1;
      pppppppcVar19 = pppppppcVar9 + uVar2 * 5;
      uVar1 = uVar15 * 2 + 2;
      pppppppcVar29 = pppppppcVar19;
      uVar30 = uVar2;
      if ((long)uVar1 < (long)uVar31) {
        pppppppcVar11 = pppppppcVar19 + 5;
        pppppppcVar16 = (char *******)*pppppppcVar19;
        pppppppcVar23 = (char *******)((long)*pppppppcVar19 + (long)pppppppcVar19[1]);
        if (-1 < (char)*(byte *)((long)pppppppcVar19 + 0x17)) {
          pppppppcVar16 = pppppppcVar19;
          pppppppcVar23 =
               (char *******)((long)pppppppcVar19 + (ulong)*(byte *)((long)pppppppcVar19 + 0x17));
        }
        pppppppcVar22 = (char *******)((long)*pppppppcVar11 + (long)pppppppcVar19[6]);
        pppppppcVar14 = (char *******)*pppppppcVar11;
        if (-1 < (char)*(byte *)((long)pppppppcVar19 + 0x3f)) {
          pppppppcVar22 =
               (char *******)((long)pppppppcVar11 + (ulong)*(byte *)((long)pppppppcVar19 + 0x3f));
          pppppppcVar14 = pppppppcVar11;
        }
        while ((pppppppcVar29 = pppppppcVar19, uVar30 = uVar2, pppppppcVar22 != pppppppcVar14 &&
               (pppppppcVar29 = pppppppcVar11, uVar30 = uVar1, pppppppcVar23 != pppppppcVar16))) {
          pppppppcVar23 = (char *******)((long)pppppppcVar23 + -1);
          cVar6 = *(char *)((long)pppppppcVar22 + -1);
          if ((*(char *)pppppppcVar23 < cVar6) ||
             (pppppppcVar22 = (char *******)((long)pppppppcVar22 + -1),
             pppppppcVar29 = pppppppcVar19, uVar30 = uVar2, cVar6 < *(char *)pppppppcVar23)) break;
        }
      }
      pppppppcVar23 = pppppppcVar9 + uVar15 * 5;
      pppppppcVar19 = (char *******)*pppppppcVar29;
      pppppppcVar16 = (char *******)((long)*pppppppcVar29 + (long)pppppppcVar29[1]);
      if (-1 < (char)*(byte *)((long)pppppppcVar29 + 0x17)) {
        pppppppcVar19 = pppppppcVar29;
        pppppppcVar16 =
             (char *******)((long)pppppppcVar29 + (ulong)*(byte *)((long)pppppppcVar29 + 0x17));
      }
      pppppppcVar14 = (char *******)((long)*pppppppcVar23 + (long)pppppppcVar23[1]);
      pppppppcVar11 = (char *******)*pppppppcVar23;
      if (-1 < (char)*(byte *)((long)pppppppcVar23 + 0x17)) {
        pppppppcVar14 =
             (char *******)((long)pppppppcVar23 + (ulong)*(byte *)((long)pppppppcVar23 + 0x17));
        pppppppcVar11 = pppppppcVar23;
      }
      do {
        if (pppppppcVar14 == pppppppcVar11) break;
        if (pppppppcVar16 == pppppppcVar19) goto LAB_1092a5eb4;
        pppppppcVar16 = (char *******)((long)pppppppcVar16 + -1);
        cVar6 = *(char *)((long)pppppppcVar14 + -1);
        if (*(char *)pppppppcVar16 < cVar6) goto LAB_1092a5eb4;
        pppppppcVar14 = (char *******)((long)pppppppcVar14 + -1);
      } while (*(char *)pppppppcVar16 <= cVar6);
      ppppppcStack_90 = pppppppcVar23[2];
      ppppppcStack_98 = pppppppcVar23[1];
      pppppppcStack_a0 = (char *******)*pppppppcVar23;
      pppppppcVar23[1] = (char ******)0x0;
      pppppppcVar23[2] = (char ******)0x0;
      *pppppppcVar23 = (char ******)0x0;
      ppppppcStack_80 = pppppppcVar23[4];
      ppppppcStack_88 = pppppppcVar23[3];
      while( true ) {
        pppppppcVar19 = pppppppcVar29;
        ppppppcVar25 = pppppppcVar19[1];
        ppppppcVar18 = *pppppppcVar19;
        pppppppcVar23[2] = pppppppcVar19[2];
        pppppppcVar23[1] = ppppppcVar25;
        *pppppppcVar23 = ppppppcVar18;
        *(char *)((long)pppppppcVar19 + 0x17) = '\0';
        *(char *)pppppppcVar19 = '\0';
        ppppppcVar18 = pppppppcVar19[3];
        pppppppcVar23[4] = pppppppcVar19[4];
        pppppppcVar23[3] = ppppppcVar18;
        if ((long)uVar26 < (long)uVar30) break;
        uVar2 = uVar30 << 1 | 1;
        pppppppcVar16 = pppppppcVar9 + uVar2 * 5;
        uVar1 = uVar30 * 2 + 2;
        pppppppcVar29 = pppppppcVar16;
        uVar30 = uVar2;
        if ((long)uVar1 < (long)uVar31) {
          pppppppcVar14 = pppppppcVar16 + 5;
          pppppppcVar23 = (char *******)*pppppppcVar16;
          pppppppcVar11 = (char *******)((long)*pppppppcVar16 + (long)pppppppcVar16[1]);
          if (-1 < (char)*(byte *)((long)pppppppcVar16 + 0x17)) {
            pppppppcVar23 = pppppppcVar16;
            pppppppcVar11 =
                 (char *******)((long)pppppppcVar16 + (ulong)*(byte *)((long)pppppppcVar16 + 0x17));
          }
          pppppppcVar12 = (char *******)((long)*pppppppcVar14 + (long)pppppppcVar16[6]);
          pppppppcVar22 = (char *******)*pppppppcVar14;
          if (-1 < (char)*(byte *)((long)pppppppcVar16 + 0x3f)) {
            pppppppcVar12 =
                 (char *******)((long)pppppppcVar14 + (ulong)*(byte *)((long)pppppppcVar16 + 0x3f));
            pppppppcVar22 = pppppppcVar14;
          }
          while ((pppppppcVar29 = pppppppcVar16, uVar30 = uVar2, pppppppcVar12 != pppppppcVar22 &&
                 (pppppppcVar29 = pppppppcVar14, uVar30 = uVar1, pppppppcVar11 != pppppppcVar23))) {
            pppppppcVar11 = (char *******)((long)pppppppcVar11 + -1);
            cVar6 = *(char *)((long)pppppppcVar12 + -1);
            if ((*(char *)pppppppcVar11 < cVar6) ||
               (pppppppcVar29 = pppppppcVar16,
               pppppppcVar12 = (char *******)((long)pppppppcVar12 + -1), uVar30 = uVar2,
               cVar6 < *(char *)pppppppcVar11)) break;
          }
        }
        pppppppcVar16 = (char *******)*pppppppcVar29;
        pppppppcVar23 = (char *******)((long)*pppppppcVar29 + (long)pppppppcVar29[1]);
        if (-1 < (char)*(byte *)((long)pppppppcVar29 + 0x17)) {
          pppppppcVar16 = pppppppcVar29;
          pppppppcVar23 =
               (char *******)((long)pppppppcVar29 + (ulong)*(byte *)((long)pppppppcVar29 + 0x17));
        }
        pppppppcVar14 = (char *******)((long)pppppppcStack_a0 + (long)ppppppcStack_98);
        pppppppcVar11 = pppppppcStack_a0;
        if (-1 < (long)ppppppcStack_90) {
          pppppppcVar14 = (char *******)((long)&pppppppcStack_a0 + ((ulong)ppppppcStack_90 >> 0x38))
          ;
          pppppppcVar11 = (char *******)&pppppppcStack_a0;
        }
        do {
          if (pppppppcVar14 == pppppppcVar11) break;
          if (pppppppcVar23 == pppppppcVar16) goto LAB_1092a5e88;
          pppppppcVar23 = (char *******)((long)pppppppcVar23 + -1);
          cVar6 = *(char *)((long)pppppppcVar14 + -1);
          if (*(char *)pppppppcVar23 < cVar6) goto LAB_1092a5e88;
          pppppppcVar14 = (char *******)((long)pppppppcVar14 + -1);
        } while (*(char *)pppppppcVar23 <= cVar6);
        pppppppcVar23 = pppppppcVar19;
        if (*(char *)((long)pppppppcVar19 + 0x17) < '\0') {
          param_1 = (char *******)*pppppppcVar19;
          __ZdlPv();
        }
      }
LAB_1092a5e88:
      if (*(char *)((long)pppppppcVar19 + 0x17) < '\0') {
        param_1 = (char *******)*pppppppcVar19;
        __ZdlPv();
      }
      pppppppcVar19[2] = ppppppcStack_90;
      pppppppcVar19[1] = ppppppcStack_98;
      *pppppppcVar19 = (char ******)pppppppcStack_a0;
      pppppppcVar19[4] = ppppppcStack_80;
      pppppppcVar19[3] = ppppppcStack_88;
    }
LAB_1092a5eb4:
    bVar3 = uVar15 != 0;
    uVar15 = uVar15 - 1;
  } while (bVar3);
  pppppppcVar29 = pppppppcVar27;
  pppppppcVar19 = (char *******)((uVar28 >> 3) * -0x3333333333333333);
LAB_1092a5ed0:
  ppppppcVar18 = *pppppppcVar9;
  uStack_78._0_7_ = SUB87(pppppppcVar9[1],0);
  uStack_78._7_1_ = (undefined1)*(undefined8 *)((long)pppppppcVar9 + 0xf);
  uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)pppppppcVar9 + 0xf) >> 8);
  cVar6 = *(char *)((long)pppppppcVar9 + 0x17);
  *pppppppcVar9 = (char ******)0x0;
  pppppppcVar9[1] = (char ******)0x0;
  pppppppcVar9[2] = (char ******)0x0;
  ppppppcStack_a8 = pppppppcVar9[4];
  pppppppcStack_b0 = (char *******)pppppppcVar9[3];
  uVar31 = 0;
  pppppppcVar27 = pppppppcVar9;
  do {
    pppppppcVar16 = pppppppcVar27 + uVar31 * 5 + 5;
    uVar15 = uVar31 << 1 | 1;
    uVar28 = uVar31 * 2 + 2;
    unaff_x20 = pppppppcVar16;
    uVar26 = uVar15;
    if ((long)uVar28 < (long)pppppppcVar19) {
      pppppppcVar14 = pppppppcVar27 + uVar31 * 5 + 10;
      bVar8 = *(byte *)((long)pppppppcVar27 + uVar31 * 0x28 + 0x3f);
      pppppppcVar23 = (char *******)pppppppcVar27[uVar31 * 5 + 5];
      pppppppcVar11 =
           (char *******)((long)pppppppcVar27[uVar31 * 5 + 5] + (long)pppppppcVar27[uVar31 * 5 + 6])
      ;
      if (-1 < (char)bVar8) {
        pppppppcVar23 = pppppppcVar16;
        pppppppcVar11 = (char *******)((long)pppppppcVar16 + (ulong)bVar8);
      }
      bVar8 = *(byte *)((long)pppppppcVar27 + uVar31 * 0x28 + 0x67);
      pppppppcVar12 = (char *******)((long)*pppppppcVar14 + (long)pppppppcVar27[uVar31 * 5 + 0xb]);
      pppppppcVar22 = (char *******)*pppppppcVar14;
      if (-1 < (char)bVar8) {
        pppppppcVar12 = (char *******)((long)pppppppcVar14 + (ulong)bVar8);
        pppppppcVar22 = pppppppcVar14;
      }
      while ((unaff_x20 = pppppppcVar16, uVar26 = uVar15, pppppppcVar12 != pppppppcVar22 &&
             (unaff_x20 = pppppppcVar14, uVar26 = uVar28, pppppppcVar11 != pppppppcVar23))) {
        pppppppcVar11 = (char *******)((long)pppppppcVar11 + -1);
        cVar7 = *(char *)((long)pppppppcVar12 + -1);
        if ((*(char *)pppppppcVar11 < cVar7) ||
           (pppppppcVar12 = (char *******)((long)pppppppcVar12 + -1), unaff_x20 = pppppppcVar16,
           uVar26 = uVar15, cVar7 < *(char *)pppppppcVar11)) break;
      }
    }
    if (*(char *)((long)pppppppcVar27 + 0x17) < '\0') {
      param_1 = (char *******)*pppppppcVar27;
      __ZdlPv();
    }
    ppppppcVar33 = unaff_x20[1];
    ppppppcVar25 = *unaff_x20;
    pppppppcVar27[2] = unaff_x20[2];
    pppppppcVar27[1] = ppppppcVar33;
    *pppppppcVar27 = ppppppcVar25;
    *(char *)((long)unaff_x20 + 0x17) = '\0';
    *(char *)unaff_x20 = '\0';
    ppppppcVar25 = unaff_x20[3];
    pppppppcVar27[4] = unaff_x20[4];
    pppppppcVar27[3] = ppppppcVar25;
    uVar31 = uVar26;
    pppppppcVar27 = unaff_x20;
  } while ((long)uVar26 <= (long)((ulong)((long)pppppppcVar19 + -2) >> 1));
  pppppppcVar27 = pppppppcVar29 + -5;
  if (unaff_x20 == pppppppcVar27) {
    if (*(char *)((long)unaff_x20 + 0x17) < '\0') {
      param_1 = (char *******)*unaff_x20;
      __ZdlPv();
    }
    *unaff_x20 = ppppppcVar18;
    unaff_x20[1] = (char ******)CONCAT17(uStack_78._7_1_,(undefined7)uStack_78);
    *(ulong *)((long)unaff_x20 + 0xf) = CONCAT71(uStack_70,uStack_78._7_1_);
    *(char *)((long)unaff_x20 + 0x17) = cVar6;
    unaff_x20[4] = ppppppcStack_a8;
    unaff_x20[3] = (char ******)pppppppcStack_b0;
  }
  else {
    if (*(char *)((long)unaff_x20 + 0x17) < '\0') {
      param_1 = (char *******)*unaff_x20;
      __ZdlPv();
    }
    ppppppcVar33 = pppppppcVar29[-4];
    ppppppcVar25 = *pppppppcVar27;
    unaff_x20[2] = pppppppcVar29[-3];
    unaff_x20[1] = ppppppcVar33;
    *unaff_x20 = ppppppcVar25;
    *(char *)((long)pppppppcVar29 + -0x11) = '\0';
    *(char *)(pppppppcVar29 + -5) = '\0';
    ppppppcVar25 = pppppppcVar29[-2];
    unaff_x20[4] = pppppppcVar29[-1];
    unaff_x20[3] = ppppppcVar25;
    pppppppcVar29[-5] = ppppppcVar18;
    pppppppcVar29[-4] = (char ******)CONCAT17(uStack_78._7_1_,(undefined7)uStack_78);
    *(ulong *)((long)pppppppcVar29 + -0x19) = CONCAT71(uStack_70,uStack_78._7_1_);
    *(char *)((long)pppppppcVar29 + -0x11) = cVar6;
    pppppppcVar29[-1] = ppppppcStack_a8;
    pppppppcVar29[-2] = (char ******)pppppppcStack_b0;
    pcVar17 = (char *)((long)unaff_x20 + (0x28 - (long)pppppppcVar9));
    if (0x28 < (long)pcVar17) {
      uVar31 = ((ulong)pcVar17 >> 3) * -0x3333333333333333 - 2 >> 1;
      pppppppcVar23 = pppppppcVar9 + uVar31 * 5;
      pppppppcVar29 = (char *******)*pppppppcVar23;
      pppppppcVar16 = (char *******)((long)*pppppppcVar23 + (long)pppppppcVar23[1]);
      if (-1 < (char)*(byte *)((long)pppppppcVar23 + 0x17)) {
        pppppppcVar29 = pppppppcVar23;
        pppppppcVar16 =
             (char *******)((long)pppppppcVar23 + (ulong)*(byte *)((long)pppppppcVar23 + 0x17));
      }
      pppppppcVar14 = (char *******)((long)*unaff_x20 + (long)unaff_x20[1]);
      pppppppcVar11 = (char *******)*unaff_x20;
      if (-1 < (char)*(byte *)((long)unaff_x20 + 0x17)) {
        pppppppcVar14 = (char *******)((long)unaff_x20 + (ulong)*(byte *)((long)unaff_x20 + 0x17));
        pppppppcVar11 = unaff_x20;
      }
      do {
        if (pppppppcVar14 == pppppppcVar11) break;
        if (pppppppcVar16 == pppppppcVar29) {
LAB_1092a6118:
          ppppppcStack_90 = unaff_x20[2];
          ppppppcStack_98 = unaff_x20[1];
          pppppppcStack_a0 = (char *******)*unaff_x20;
          unaff_x20[1] = (char ******)0x0;
          unaff_x20[2] = (char ******)0x0;
          *unaff_x20 = (char ******)0x0;
          ppppppcStack_80 = unaff_x20[4];
          ppppppcStack_88 = unaff_x20[3];
          pppppppcVar29 = unaff_x20;
          goto LAB_1092a613c;
        }
        pppppppcVar16 = (char *******)((long)pppppppcVar16 + -1);
        cVar6 = *(char *)((long)pppppppcVar14 + -1);
        if (*(char *)pppppppcVar16 < cVar6) goto LAB_1092a6118;
        pppppppcVar14 = (char *******)((long)pppppppcVar14 + -1);
      } while (*(char *)pppppppcVar16 <= cVar6);
    }
  }
  goto LAB_1092a6224;
code_r0x0001092a638c:
  pppppppcVar14 = (char *******)((long)pppppppcVar14 + -1);
  if (cVar6 < *(char *)pppppppcVar23) {
LAB_1092a63a0:
    if (*(char *)((long)param_4 + 0x17) < '\0') {
      param_1 = (char *******)*param_4;
      __ZdlPv();
    }
    param_4[2] = ppppppcStack_90;
    param_4[1] = ppppppcStack_98;
    *param_4 = (char ******)pppppppcStack_a0;
    param_4[4] = ppppppcStack_80;
    param_4[3] = ppppppcStack_88;
    goto LAB_1092a63c8;
  }
  goto LAB_1092a636c;
LAB_1092a5a58:
  param_4 = pppppppcVar19;
  pppppppcVar19 = (char *******)pppppppcVar29[5];
  pppppppcVar16 = (char *******)((long)pppppppcVar29[5] + (long)pppppppcVar29[6]);
  if (-1 < (char)*(byte *)((long)pppppppcVar29 + 0x3f)) {
    pppppppcVar19 = param_4;
    pppppppcVar16 = (char *******)((long)param_4 + (ulong)*(byte *)((long)pppppppcVar29 + 0x3f));
  }
  pppppppcVar11 = (char *******)((long)*pppppppcVar29 + (long)pppppppcVar29[1]);
  pppppppcVar23 = (char *******)*pppppppcVar29;
  if (-1 < (char)*(byte *)((long)pppppppcVar29 + 0x17)) {
    pppppppcVar11 =
         (char *******)((long)pppppppcVar29 + (ulong)*(byte *)((long)pppppppcVar29 + 0x17));
    pppppppcVar23 = pppppppcVar29;
  }
  do {
    if (pppppppcVar11 == pppppppcVar23) break;
    if (pppppppcVar16 == pppppppcVar19) {
LAB_1092a5acc:
      ppppppcStack_90 = param_4[2];
      ppppppcStack_98 = param_4[1];
      pppppppcStack_a0 = (char *******)*param_4;
      param_4[1] = (char ******)0x0;
      param_4[2] = (char ******)0x0;
      *param_4 = (char ******)0x0;
      ppppppcStack_80 = pppppppcVar29[9];
      ppppppcStack_88 = pppppppcVar29[8];
      pppppppcVar19 = param_4;
      goto LAB_1092a5af0;
    }
    pppppppcVar16 = (char *******)((long)pppppppcVar16 + -1);
    cVar6 = *(char *)((long)pppppppcVar11 + -1);
    if (*(char *)pppppppcVar16 < cVar6) goto LAB_1092a5acc;
    pppppppcVar11 = (char *******)((long)pppppppcVar11 + -1);
  } while (*(char *)pppppppcVar16 <= cVar6);
  goto LAB_1092a5bd4;
LAB_1092a5af0:
  pppppppcVar16 = pppppppcVar29;
  if (*(char *)((long)pppppppcVar19 + 0x17) < '\0') {
    param_1 = (char *******)*pppppppcVar19;
    __ZdlPv();
  }
  ppppppcVar18 = *pppppppcVar16;
  pppppppcVar19[1] = pppppppcVar16[1];
  *pppppppcVar19 = ppppppcVar18;
  pppppppcVar19[2] = pppppppcVar16[2];
  *(char *)((long)pppppppcVar16 + 0x17) = '\0';
  *(char *)pppppppcVar16 = '\0';
  ppppppcVar18 = pppppppcVar16[3];
  pppppppcVar19[4] = pppppppcVar16[4];
  pppppppcVar19[3] = ppppppcVar18;
  pppppppcVar19 = pppppppcVar9;
  if (pppppppcVar16 != pppppppcVar9) {
    pppppppcVar29 = pppppppcVar16 + -5;
    pppppppcVar23 = pppppppcStack_a0;
    pppppppcVar11 = (char *******)((long)pppppppcStack_a0 + (long)ppppppcStack_98);
    if (-1 < (long)ppppppcStack_90) {
      pppppppcVar23 = unaff_x20;
      pppppppcVar11 = (char *******)((long)unaff_x20 + ((ulong)ppppppcStack_90 >> 0x38));
    }
    pppppppcVar22 = (char *******)((long)*pppppppcVar29 + (long)pppppppcVar16[-4]);
    pppppppcVar14 = (char *******)*pppppppcVar29;
    if (-1 < (char)*(byte *)((long)pppppppcVar16 + -0x11)) {
      pppppppcVar22 =
           (char *******)((long)pppppppcVar29 + (ulong)*(byte *)((long)pppppppcVar16 + -0x11));
      pppppppcVar14 = pppppppcVar29;
    }
    while( true ) {
      pppppppcVar19 = pppppppcVar16;
      if (pppppppcVar22 == pppppppcVar14) goto LAB_1092a5bac;
      if (pppppppcVar11 == pppppppcVar23) break;
      pppppppcVar11 = (char *******)((long)pppppppcVar11 + -1);
      cVar6 = *(char *)((long)pppppppcVar22 + -1);
      if (*(char *)pppppppcVar11 < cVar6) break;
      pppppppcVar22 = (char *******)((long)pppppppcVar22 + -1);
      if (cVar6 < *(char *)pppppppcVar11) goto LAB_1092a5bac;
    }
    goto LAB_1092a5af0;
  }
LAB_1092a5bac:
  if (*(char *)((long)pppppppcVar19 + 0x17) < '\0') {
    param_1 = (char *******)*pppppppcVar19;
    __ZdlPv();
  }
  pppppppcVar19[2] = ppppppcStack_90;
  pppppppcVar19[1] = ppppppcStack_98;
  *pppppppcVar19 = (char ******)pppppppcStack_a0;
  pppppppcVar16[4] = ppppppcStack_80;
  pppppppcVar16[3] = ppppppcStack_88;
LAB_1092a5bd4:
  pppppppcVar19 = param_4 + 5;
  pppppppcVar29 = param_4;
  if (param_4 + 5 == pppppppcVar27) goto LAB_1092a63d4;
  goto LAB_1092a5a58;
code_r0x0001092a5334:
  pppppppcVar22 = (char *******)((long)pppppppcVar22 + -1);
  pppppppcVar12 = (char *******)((long)pppppppcVar12 + -1);
  if (cVar7 < cVar6) {
LAB_1092a5348:
    pppppppcVar9 = pppppppcStack_c0;
    if (pppppppcVar10 != pppppppcStack_b8) goto LAB_1092a5350;
    goto LAB_1092a5580;
  }
  goto LAB_1092a5314;
LAB_1092a5580:
  pppppppcVar22 = pppppppcVar9;
  if (pppppppcVar14 < pppppppcVar9) {
    pppppppcVar22 = pppppppcVar9 + -5;
    uStack_78._0_7_ = SUB87(pppppppcVar22,0);
    uStack_78._7_1_ = (undefined1)((ulong)pppppppcVar22 >> 0x38);
    pppppppcVar10 = (char *******)((long)pppppppcVar9[-5] + (long)pppppppcVar9[-4]);
    pppppppcVar21 = pppppppcVar11;
    pppppppcVar12 = (char *******)pppppppcVar9[-5];
    if (-1 < (char)*(byte *)((long)pppppppcVar9 + -0x11)) {
      pppppppcVar10 =
           (char *******)((long)pppppppcVar22 + (ulong)*(byte *)((long)pppppppcVar9 + -0x11));
      pppppppcVar12 = pppppppcVar22;
    }
    do {
      pppppppcVar9 = pppppppcVar22;
      if (pppppppcVar21 == pppppppcVar23) break;
      if (pppppppcVar10 == pppppppcVar12) goto LAB_1092a5588;
      cVar6 = *(char *)((long)pppppppcVar10 + -1);
      cVar7 = *(char *)((long)pppppppcVar21 + -1);
      if (cVar6 < cVar7) goto LAB_1092a5588;
      pppppppcVar10 = (char *******)((long)pppppppcVar10 + -1);
      pppppppcVar21 = (char *******)((long)pppppppcVar21 + -1);
    } while (cVar6 <= cVar7);
    goto LAB_1092a5580;
  }
LAB_1092a5588:
  pppppppcVar9 = pppppppcVar14;
  if (pppppppcVar14 < pppppppcVar22) {
LAB_1092a5594:
    FUN_1092a6410(&pppppppcStack_b0,&uStack_78);
    pppppppcVar12 = pppppppcStack_b0;
LAB_1092a55a4:
    pppppppcVar9 = pppppppcVar12 + 5;
    pppppppcStack_b0 = pppppppcVar9;
    pppppppcVar21 = (char *******)((long)*pppppppcVar9 + (long)pppppppcVar12[6]);
    pppppppcVar24 = pppppppcVar11;
    pppppppcVar10 = (char *******)*pppppppcVar9;
    if (-1 < (char)*(byte *)((long)pppppppcVar12 + 0x3f)) {
      pppppppcVar21 =
           (char *******)((long)pppppppcVar9 + (ulong)*(byte *)((long)pppppppcVar12 + 0x3f));
      pppppppcVar10 = pppppppcVar9;
    }
LAB_1092a55d0:
    if (pppppppcVar24 == pppppppcVar23) goto LAB_1092a55f8;
    pppppppcVar12 = pppppppcVar9;
    if (pppppppcVar21 != pppppppcVar10) {
      cVar6 = *(char *)((long)pppppppcVar21 + -1);
      cVar7 = *(char *)((long)pppppppcVar24 + -1);
      if (cVar7 <= cVar6) goto code_r0x0001092a55f0;
    }
    goto LAB_1092a55a4;
  }
LAB_1092a5660:
  unaff_x20 = pppppppcVar9 + -5;
  pppppppcStack_b0 = pppppppcVar9;
  if (unaff_x20 != pppppppcVar16) {
    if (*(char *)((long)pppppppcVar16 + 0x17) < '\0') {
      __ZdlPv(*pppppppcVar16);
    }
    ppppppcVar25 = pppppppcVar9[-4];
    ppppppcVar18 = *unaff_x20;
    pppppppcVar16[2] = pppppppcVar9[-3];
    pppppppcVar16[1] = ppppppcVar25;
    *pppppppcVar16 = ppppppcVar18;
    *(char *)((long)pppppppcVar9 + -0x11) = '\0';
    *(char *)(pppppppcVar9 + -5) = '\0';
    ppppppcVar18 = pppppppcVar9[-2];
    pppppppcVar16[4] = pppppppcVar9[-1];
    pppppppcVar16[3] = ppppppcVar18;
  }
  pppppppcVar9[-3] = ppppppcStack_90;
  pppppppcVar9[-4] = ppppppcStack_98;
  *unaff_x20 = (char ******)pppppppcStack_a0;
  ppppppcStack_90 = (char ******)((ulong)ppppppcStack_90 & 0xffffffffffffff);
  pppppppcStack_a0 = (char *******)((ulong)pppppppcStack_a0 & 0xffffffffffffff00);
  pppppppcVar9[-1] = ppppppcStack_80;
  pppppppcVar9[-2] = ppppppcStack_88;
  if (pppppppcVar14 < pppppppcVar22) {
LAB_1092a56f0:
    param_2 = unaff_x20;
    param_3 = pppppppcVar29;
    FUN_1092a515c();
    goto LAB_1092a5960;
  }
  pppppppcVar16 = pppppppcStack_b8;
  FUN_1092a6bd8(pppppppcStack_b8,unaff_x20);
  param_1 = pppppppcVar9;
  param_2 = pppppppcStack_c0;
  FUN_1092a6bd8();
  if ((int)param_1 == 0) {
    if (((ulong)pppppppcVar16 & 1) == 0) goto LAB_1092a56f0;
    goto LAB_1092a5964;
  }
  if (((ulong)pppppppcVar16 & 1) != 0) goto LAB_1092a63d4;
  pppppppcStack_c0 = unaff_x20;
  goto LAB_1092a51ac;
LAB_1092a5350:
  pppppppcVar22 = pppppppcVar9 + -5;
  uStack_78._0_7_ = SUB87(pppppppcVar22,0);
  uStack_78._7_1_ = (undefined1)((ulong)pppppppcVar22 >> 0x38);
  pppppppcVar10 = (char *******)((long)pppppppcVar9[-5] + (long)pppppppcVar9[-4]);
  pppppppcVar21 = pppppppcVar11;
  pppppppcVar12 = (char *******)pppppppcVar9[-5];
  if (-1 < (char)*(byte *)((long)pppppppcVar9 + -0x11)) {
    pppppppcVar10 =
         (char *******)((long)pppppppcVar22 + (ulong)*(byte *)((long)pppppppcVar9 + -0x11));
    pppppppcVar12 = pppppppcVar22;
  }
  do {
    pppppppcVar9 = pppppppcVar22;
    if (pppppppcVar21 == pppppppcVar23) break;
    if (pppppppcVar10 == pppppppcVar12) goto LAB_1092a5588;
    pppppppcVar10 = (char *******)((long)pppppppcVar10 + -1);
    pppppppcVar21 = (char *******)((long)pppppppcVar21 + -1);
    if (*(char *)pppppppcVar10 < *(char *)pppppppcVar21) goto LAB_1092a5588;
  } while (*(char *)pppppppcVar10 <= *(char *)pppppppcVar21);
  goto LAB_1092a5350;
code_r0x0001092a55f0:
  pppppppcVar21 = (char *******)((long)pppppppcVar21 + -1);
  pppppppcVar24 = (char *******)((long)pppppppcVar24 + -1);
  if (cVar7 < cVar6) {
LAB_1092a55f8:
    pppppppcVar12 = (char *******)CONCAT17(uStack_78._7_1_,(undefined7)uStack_78);
    goto LAB_1092a55fc;
  }
  goto LAB_1092a55d0;
LAB_1092a55fc:
  pppppppcVar13 = pppppppcVar12 + -5;
  uStack_78._0_7_ = SUB87(pppppppcVar13,0);
  uStack_78._7_1_ = (undefined1)((ulong)pppppppcVar13 >> 0x38);
  pppppppcVar21 = (char *******)((long)pppppppcVar12[-5] + (long)pppppppcVar12[-4]);
  pppppppcVar24 = pppppppcVar11;
  pppppppcVar10 = (char *******)pppppppcVar12[-5];
  if (-1 < (char)*(byte *)((long)pppppppcVar12 + -0x11)) {
    pppppppcVar21 =
         (char *******)((long)pppppppcVar13 + (ulong)*(byte *)((long)pppppppcVar12 + -0x11));
    pppppppcVar10 = pppppppcVar13;
  }
  do {
    pppppppcVar12 = pppppppcVar13;
    if (pppppppcVar24 == pppppppcVar23) break;
    if (pppppppcVar21 == pppppppcVar10) {
LAB_1092a5658:
      if (pppppppcVar13 <= pppppppcVar9) goto LAB_1092a5660;
      goto LAB_1092a5594;
    }
    pppppppcVar21 = (char *******)((long)pppppppcVar21 + -1);
    pppppppcVar24 = (char *******)((long)pppppppcVar24 + -1);
    if (*(char *)pppppppcVar21 < *(char *)pppppppcVar24) goto LAB_1092a5658;
  } while (*(char *)pppppppcVar21 <= *(char *)pppppppcVar24);
  goto LAB_1092a55fc;
LAB_1092a58b0:
  while( true ) {
    if (pppppppcVar22 == pppppppcVar14) goto LAB_1092a58d8;
    pppppppcVar11 = pppppppcVar23;
    if (pppppppcVar12 != unaff_x20) break;
LAB_1092a5880:
    pppppppcVar23 = pppppppcVar11 + -5;
    uStack_78._0_7_ = SUB87(pppppppcVar23,0);
    uStack_78._7_1_ = (undefined1)((ulong)pppppppcVar23 >> 0x38);
    pppppppcVar22 = (char *******)((long)pppppppcVar11[-5] + (long)pppppppcVar11[-4]);
    pppppppcVar12 = pppppppcVar27;
    pppppppcVar14 = (char *******)pppppppcVar11[-5];
    if (-1 < (char)*(byte *)((long)pppppppcVar11 + -0x11)) {
      pppppppcVar22 =
           (char *******)((long)pppppppcVar23 + (ulong)*(byte *)((long)pppppppcVar11 + -0x11));
      pppppppcVar14 = pppppppcVar23;
    }
  }
  cVar6 = *(char *)((long)pppppppcVar12 + -1);
  cVar7 = *(char *)((long)pppppppcVar22 + -1);
  if (cVar6 < cVar7) goto LAB_1092a5880;
  pppppppcVar22 = (char *******)((long)pppppppcVar22 + -1);
  pppppppcVar12 = (char *******)((long)pppppppcVar12 + -1);
  if (cVar7 < cVar6) goto LAB_1092a58d8;
  goto LAB_1092a58b0;
LAB_1092a613c:
  pppppppcVar16 = pppppppcVar23;
  unaff_x20 = pppppppcVar29;
  if (*(char *)((long)unaff_x20 + 0x17) < '\0') {
    param_1 = (char *******)*unaff_x20;
    __ZdlPv();
  }
  ppppppcVar25 = pppppppcVar16[1];
  ppppppcVar18 = *pppppppcVar16;
  unaff_x20[2] = pppppppcVar16[2];
  unaff_x20[1] = ppppppcVar25;
  *unaff_x20 = ppppppcVar18;
  *(char *)((long)pppppppcVar16 + 0x17) = '\0';
  *(char *)pppppppcVar16 = '\0';
  ppppppcVar18 = pppppppcVar16[3];
  unaff_x20[4] = pppppppcVar16[4];
  unaff_x20[3] = ppppppcVar18;
  if (uVar31 != 0) {
    uVar31 = uVar31 - 1 >> 1;
    pppppppcVar23 = pppppppcVar9 + uVar31 * 5;
    pppppppcVar11 = (char *******)*pppppppcVar23;
    pppppppcVar14 = (char *******)((long)*pppppppcVar23 + (long)pppppppcVar23[1]);
    if (-1 < (char)*(byte *)((long)pppppppcVar23 + 0x17)) {
      pppppppcVar11 = pppppppcVar23;
      pppppppcVar14 =
           (char *******)((long)pppppppcVar23 + (ulong)*(byte *)((long)pppppppcVar23 + 0x17));
    }
    pppppppcVar12 = (char *******)((long)pppppppcStack_a0 + (long)ppppppcStack_98);
    pppppppcVar22 = pppppppcStack_a0;
    if (-1 < (long)ppppppcStack_90) {
      pppppppcVar12 = (char *******)((long)&pppppppcStack_a0 + ((ulong)ppppppcStack_90 >> 0x38));
      pppppppcVar22 = (char *******)&pppppppcStack_a0;
    }
    while( true ) {
      if (pppppppcVar12 == pppppppcVar22) goto LAB_1092a61f8;
      pppppppcVar29 = pppppppcVar16;
      if (pppppppcVar14 == pppppppcVar11) break;
      pppppppcVar14 = (char *******)((long)pppppppcVar14 + -1);
      cVar6 = *(char *)((long)pppppppcVar12 + -1);
      if (*(char *)pppppppcVar14 < cVar6) break;
      pppppppcVar12 = (char *******)((long)pppppppcVar12 + -1);
      if (cVar6 < *(char *)pppppppcVar14) goto LAB_1092a61f8;
    }
    goto LAB_1092a613c;
  }
LAB_1092a61f8:
  if (*(char *)((long)pppppppcVar16 + 0x17) < '\0') {
    param_1 = (char *******)*pppppppcVar16;
    __ZdlPv();
  }
  pppppppcVar16[2] = ppppppcStack_90;
  pppppppcVar16[1] = ppppppcStack_98;
  *pppppppcVar16 = (char ******)pppppppcStack_a0;
  pppppppcVar16[4] = ppppppcStack_80;
  pppppppcVar16[3] = ppppppcStack_88;
LAB_1092a6224:
  param_4 = (char *******)((long)pppppppcVar19 + -1);
  bVar3 = (long)pppppppcVar19 < 3;
  pppppppcVar29 = pppppppcVar27;
  pppppppcVar19 = param_4;
  if (bVar3) goto LAB_1092a63d4;
  goto LAB_1092a5ed0;
LAB_1092a65c8:
  do {
    if (pppppppcVar19 == pppppppcVar29) break;
    if (pppppppcVar9 == pppppppcVar27) {
LAB_1092a66ec:
      pppppppcVar29 = (char *******)&pppppppcStack_138;
      goto LAB_1092a66f8;
    }
    cVar6 = *(char *)((long)pppppppcVar9 + -1);
    pppppppcVar19 = (char *******)((long)pppppppcVar19 + -1);
    if (cVar6 < *(char *)pppppppcVar19) goto LAB_1092a66ec;
    pppppppcVar9 = (char *******)((long)pppppppcVar9 + -1);
  } while (cVar6 <= *(char *)pppppppcVar19);
  FUN_1092a6410(&pppppppcStack_138,&pppppppcStack_140);
  pppppppcVar29 = (char *******)*pppppppcStack_148;
  pppppppcVar19 = (char *******)((long)*pppppppcStack_148 + (long)pppppppcStack_148[1]);
  if (-1 < (char)*(byte *)((long)pppppppcStack_148 + 0x17)) {
    pppppppcVar29 = pppppppcStack_148;
    pppppppcVar19 =
         (char *******)((long)pppppppcStack_148 + (ulong)*(byte *)((long)pppppppcStack_148 + 0x17));
  }
  pppppppcVar9 = (char *******)((long)*pppppppcStack_140 + (long)pppppppcStack_140[1]);
  pppppppcVar27 = (char *******)*pppppppcStack_140;
  if (-1 < (char)*(byte *)((long)pppppppcStack_140 + 0x17)) {
    pppppppcVar9 = (char *******)
                   ((long)pppppppcStack_140 + (ulong)*(byte *)((long)pppppppcStack_140 + 0x17));
    pppppppcVar27 = pppppppcStack_140;
  }
  while( true ) {
    if (pppppppcVar9 == pppppppcVar27) {
      return;
    }
    if (pppppppcVar19 == pppppppcVar29) break;
    pppppppcVar19 = (char *******)((long)pppppppcVar19 + -1);
    cVar6 = *(char *)((long)pppppppcVar9 + -1);
    if (*(char *)pppppppcVar19 < cVar6) break;
    pppppppcVar9 = (char *******)((long)pppppppcVar9 + -1);
    if (cVar6 < *(char *)pppppppcVar19) {
      return;
    }
  }
  pppppppcVar29 = (char *******)&pppppppcStack_140;
LAB_1092a66f8:
  pppppppcVar19 = (char *******)&pppppppcStack_148;
  goto LAB_1092a6708;
LAB_1092a59d0:
  do {
    pppppppcStack_c0 = pppppppcVar23;
    if (pppppppcVar14 == pppppppcVar11) break;
    if (pppppppcVar16 == pppppppcVar29) {
LAB_1092a6234:
      param_1 = (char *******)&pppppppcStack_b8;
      FUN_1092a6410();
      param_2 = pppppppcVar19;
      break;
    }
    pppppppcVar16 = (char *******)((long)pppppppcVar16 + -1);
    cVar6 = *(char *)((long)pppppppcVar14 + -1);
    if (*(char *)pppppppcVar16 < cVar6) goto LAB_1092a6234;
    pppppppcVar14 = (char *******)((long)pppppppcVar14 + -1);
  } while (*(char *)pppppppcVar16 <= cVar6);
LAB_1092a63d4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_1092a6410;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppcVar18 = *param_1;
  ppppppcVar25 = *param_2;
  pppppcVar4 = *ppppppcVar18;
  uStack_108 = SUB87(ppppppcVar18[1],0);
  uStack_101 = (undefined1)*(undefined8 *)((long)ppppppcVar18 + 0xf);
  uStack_100 = (undefined7)((ulong)*(undefined8 *)((long)ppppppcVar18 + 0xf) >> 8);
  uVar5 = *(undefined1 *)((long)ppppppcVar18 + 0x17);
  ppppppcVar18[1] = (char *****)0x0;
  ppppppcVar18[2] = (char *****)0x0;
  *ppppppcVar18 = (char *****)0x0;
  pppppcStack_118 = ppppppcVar18[4];
  pppppcStack_120 = ppppppcVar18[3];
  pppppcVar20 = ppppppcVar25[2];
  pppppcVar32 = *ppppppcVar25;
  ppppppcVar18[1] = ppppppcVar25[1];
  *ppppppcVar18 = pppppcVar32;
  ppppppcVar18[2] = pppppcVar20;
  *(undefined1 *)((long)ppppppcVar25 + 0x17) = 0;
  *(undefined1 *)ppppppcVar25 = 0;
  pppppcVar20 = ppppppcVar25[3];
  ppppppcVar18[4] = ppppppcVar25[4];
  ppppppcVar18[3] = pppppcVar20;
  pppppppcStack_f0 = param_4;
  pppppppcStack_e8 = pppppppcVar27;
  pppppppcStack_e0 = unaff_x20;
  pppppppcStack_d8 = pppppppcVar9;
  puStack_d0 = &stack0xfffffffffffffff0;
  if (*(char *)((long)ppppppcVar25 + 0x17) < '\0') {
    param_1 = (char *******)*ppppppcVar25;
    __ZdlPv();
  }
  *ppppppcVar25 = pppppcVar4;
  ppppppcVar25[1] = (char *****)CONCAT17(uStack_101,uStack_108);
  *(ulong *)((long)ppppppcVar25 + 0xf) = CONCAT71(uStack_100,uStack_101);
  *(undefined1 *)((long)ppppppcVar25 + 0x17) = uVar5;
  ppppppcVar25[4] = pppppcStack_118;
  ppppppcVar25[3] = pppppcStack_120;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_1092a64dc;
  pppppppcVar29 = (char *******)*param_2;
  pppppppcVar19 = (char *******)((long)*param_2 + (long)param_2[1]);
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    pppppppcVar29 = param_2;
    pppppppcVar19 = (char *******)((long)param_2 + (ulong)*(byte *)((long)param_2 + 0x17));
  }
  pppppppcVar9 = (char *******)((long)*param_1 + (long)param_1[1]);
  pppppppcVar16 = pppppppcVar19;
  pppppppcVar27 = (char *******)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    pppppppcVar9 = (char *******)((long)param_1 + (ulong)*(byte *)((long)param_1 + 0x17));
    pppppppcVar27 = param_1;
  }
  do {
    pppppppcStack_148 = param_3;
    pppppppcStack_140 = param_2;
    pppppppcStack_138 = param_1;
    ppuStack_130 = &puStack_d0;
    if (pppppppcVar9 == pppppppcVar27) break;
    if (pppppppcVar16 == pppppppcVar29) {
LAB_1092a65a8:
      pppppppcVar9 = (char *******)((long)*param_3 + (long)param_3[1]);
      pppppppcVar27 = (char *******)*param_3;
      if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
        pppppppcVar9 = (char *******)((long)param_3 + (ulong)*(byte *)((long)param_3 + 0x17));
        pppppppcVar27 = param_3;
      }
      goto LAB_1092a65c8;
    }
    cVar6 = *(char *)((long)pppppppcVar16 + -1);
    cVar7 = *(char *)((long)pppppppcVar9 + -1);
    if (cVar6 < cVar7) goto LAB_1092a65a8;
    pppppppcVar9 = (char *******)((long)pppppppcVar9 + -1);
    pppppppcVar16 = (char *******)((long)pppppppcVar16 + -1);
  } while (cVar6 <= cVar7);
  pppppppcVar9 = (char *******)((long)*param_3 + (long)param_3[1]);
  pppppppcVar27 = (char *******)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    pppppppcVar9 = (char *******)((long)param_3 + (ulong)*(byte *)((long)param_3 + 0x17));
    pppppppcVar27 = param_3;
  }
  while( true ) {
    if (pppppppcVar19 == pppppppcVar29) {
      return;
    }
    if (pppppppcVar9 == pppppppcVar27) break;
    cVar6 = *(char *)((long)pppppppcVar9 + -1);
    pppppppcVar19 = (char *******)((long)pppppppcVar19 + -1);
    if (cVar6 < *(char *)pppppppcVar19) break;
    pppppppcVar9 = (char *******)((long)pppppppcVar9 + -1);
    if (*(char *)pppppppcVar19 < cVar6) {
      return;
    }
  }
  FUN_1092a6410(&pppppppcStack_140,&pppppppcStack_148);
  pppppppcVar29 = (char *******)*pppppppcStack_140;
  pppppppcVar19 = (char *******)((long)*pppppppcStack_140 + (long)pppppppcStack_140[1]);
  if (-1 < (char)*(byte *)((long)pppppppcStack_140 + 0x17)) {
    pppppppcVar29 = pppppppcStack_140;
    pppppppcVar19 =
         (char *******)((long)pppppppcStack_140 + (ulong)*(byte *)((long)pppppppcStack_140 + 0x17));
  }
  pppppppcVar9 = (char *******)((long)*pppppppcStack_138 + (long)pppppppcStack_138[1]);
  pppppppcVar27 = (char *******)*pppppppcStack_138;
  if (-1 < (char)*(byte *)((long)pppppppcStack_138 + 0x17)) {
    pppppppcVar9 = (char *******)
                   ((long)pppppppcStack_138 + (ulong)*(byte *)((long)pppppppcStack_138 + 0x17));
    pppppppcVar27 = pppppppcStack_138;
  }
  while( true ) {
    if (pppppppcVar9 == pppppppcVar27) {
      return;
    }
    if (pppppppcVar19 == pppppppcVar29) break;
    pppppppcVar19 = (char *******)((long)pppppppcVar19 + -1);
    cVar6 = *(char *)((long)pppppppcVar9 + -1);
    if (*(char *)pppppppcVar19 < cVar6) break;
    pppppppcVar9 = (char *******)((long)pppppppcVar9 + -1);
    if (cVar6 < *(char *)pppppppcVar19) {
      return;
    }
  }
  pppppppcVar29 = (char *******)&pppppppcStack_138;
  pppppppcVar19 = (char *******)&pppppppcStack_140;
LAB_1092a6708:
  FUN_1092a6410(pppppppcVar29,pppppppcVar19);
  return;
}



/* Entry: 1092a6410; end: 1092a64db;  */

void FUN_1092a6410(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  char cVar5;
  char cVar6;
  long **pplVar7;
  long **pplVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined7 uStack_48;
  undefined1 uStack_41;
  undefined7 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = (undefined8 *)*param_1;
  puVar14 = (undefined8 *)*param_2;
  uVar3 = *puVar9;
  uStack_48 = (undefined7)puVar9[1];
  uStack_41 = (undefined1)*(undefined8 *)((long)puVar9 + 0xf);
  uStack_40 = (undefined7)((ulong)*(undefined8 *)((long)puVar9 + 0xf) >> 8);
  uVar4 = *(undefined1 *)((long)puVar9 + 0x17);
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  uStack_58 = puVar9[4];
  uStack_60 = puVar9[3];
  uVar11 = puVar14[2];
  uVar15 = *puVar14;
  puVar9[1] = puVar14[1];
  *puVar9 = uVar15;
  puVar9[2] = uVar11;
  *(undefined1 *)((long)puVar14 + 0x17) = 0;
  *(undefined1 *)puVar14 = 0;
  uVar11 = puVar14[3];
  puVar9[4] = puVar14[4];
  puVar9[3] = uVar11;
  if (*(char *)((long)puVar14 + 0x17) < '\0') {
    param_1 = (long *)*puVar14;
    __ZdlPv();
  }
  *puVar14 = uVar3;
  puVar14[1] = CONCAT17(uStack_41,uStack_48);
  *(ulong *)((long)puVar14 + 0xf) = CONCAT71(uStack_40,uStack_41);
  *(undefined1 *)((long)puVar14 + 0x17) = uVar4;
  puVar14[4] = uStack_58;
  puVar14[3] = uStack_60;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_1092a64dc;
  plVar2 = (long *)*param_2;
  plVar10 = (long *)(*param_2 + param_2[1]);
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    plVar2 = param_2;
    plVar10 = (long *)((long)param_2 + (ulong)*(byte *)((long)param_2 + 0x17));
  }
  plVar12 = (long *)(*param_1 + param_1[1]);
  plVar13 = plVar10;
  plVar1 = (long *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    plVar12 = (long *)((long)param_1 + (ulong)*(byte *)((long)param_1 + 0x17));
    plVar1 = param_1;
  }
  do {
    plStack_88 = param_3;
    plStack_80 = param_2;
    plStack_78 = param_1;
    puStack_70 = &stack0xfffffffffffffff0;
    if (plVar12 == plVar1) break;
    if (plVar13 == plVar2) {
LAB_1092a65a8:
      plVar12 = (long *)(*param_3 + param_3[1]);
      plVar1 = (long *)*param_3;
      if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
        plVar12 = (long *)((long)param_3 + (ulong)*(byte *)((long)param_3 + 0x17));
        plVar1 = param_3;
      }
      goto LAB_1092a65c8;
    }
    cVar5 = *(char *)((long)plVar13 + -1);
    cVar6 = *(char *)((long)plVar12 + -1);
    if (cVar5 < cVar6) goto LAB_1092a65a8;
    plVar12 = (long *)((long)plVar12 + -1);
    plVar13 = (long *)((long)plVar13 + -1);
  } while (cVar5 <= cVar6);
  plVar12 = (long *)(*param_3 + param_3[1]);
  plVar1 = (long *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    plVar12 = (long *)((long)param_3 + (ulong)*(byte *)((long)param_3 + 0x17));
    plVar1 = param_3;
  }
  while( true ) {
    if (plVar10 == plVar2) {
      return;
    }
    if (plVar12 == plVar1) break;
    cVar5 = *(char *)((long)plVar12 + -1);
    plVar10 = (long *)((long)plVar10 + -1);
    if (cVar5 < *(char *)plVar10) break;
    plVar12 = (long *)((long)plVar12 + -1);
    if (*(char *)plVar10 < cVar5) {
      return;
    }
  }
  FUN_1092a6410(&plStack_80,&plStack_88);
  plVar2 = (long *)*plStack_80;
  plVar10 = (long *)(*plStack_80 + plStack_80[1]);
  if (-1 < (char)*(byte *)((long)plStack_80 + 0x17)) {
    plVar2 = plStack_80;
    plVar10 = (long *)((long)plStack_80 + (ulong)*(byte *)((long)plStack_80 + 0x17));
  }
  plVar12 = (long *)(*plStack_78 + plStack_78[1]);
  plVar1 = (long *)*plStack_78;
  if (-1 < (char)*(byte *)((long)plStack_78 + 0x17)) {
    plVar12 = (long *)((long)plStack_78 + (ulong)*(byte *)((long)plStack_78 + 0x17));
    plVar1 = plStack_78;
  }
  while( true ) {
    if (plVar12 == plVar1) {
      return;
    }
    if (plVar10 == plVar2) break;
    plVar10 = (long *)((long)plVar10 + -1);
    cVar5 = *(char *)((long)plVar12 + -1);
    if (*(char *)plVar10 < cVar5) break;
    plVar12 = (long *)((long)plVar12 + -1);
    if (cVar5 < *(char *)plVar10) {
      return;
    }
  }
  pplVar7 = &plStack_78;
  pplVar8 = &plStack_80;
LAB_1092a6708:
  FUN_1092a6410(pplVar7,pplVar8);
  return;
LAB_1092a65c8:
  do {
    if (plVar10 == plVar2) break;
    if (plVar12 == plVar1) {
LAB_1092a66ec:
      pplVar7 = &plStack_78;
      goto LAB_1092a66f8;
    }
    cVar5 = *(char *)((long)plVar12 + -1);
    plVar10 = (long *)((long)plVar10 + -1);
    if (cVar5 < *(char *)plVar10) goto LAB_1092a66ec;
    plVar12 = (long *)((long)plVar12 + -1);
  } while (cVar5 <= *(char *)plVar10);
  FUN_1092a6410(&plStack_78,&plStack_80);
  plVar2 = (long *)*plStack_88;
  plVar10 = (long *)(*plStack_88 + plStack_88[1]);
  if (-1 < (char)*(byte *)((long)plStack_88 + 0x17)) {
    plVar2 = plStack_88;
    plVar10 = (long *)((long)plStack_88 + (ulong)*(byte *)((long)plStack_88 + 0x17));
  }
  plVar12 = (long *)(*plStack_80 + plStack_80[1]);
  plVar1 = (long *)*plStack_80;
  if (-1 < (char)*(byte *)((long)plStack_80 + 0x17)) {
    plVar12 = (long *)((long)plStack_80 + (ulong)*(byte *)((long)plStack_80 + 0x17));
    plVar1 = plStack_80;
  }
  while( true ) {
    if (plVar12 == plVar1) {
      return;
    }
    if (plVar10 == plVar2) break;
    plVar10 = (long *)((long)plVar10 + -1);
    cVar5 = *(char *)((long)plVar12 + -1);
    if (*(char *)plVar10 < cVar5) break;
    plVar12 = (long *)((long)plVar12 + -1);
    if (cVar5 < *(char *)plVar10) {
      return;
    }
  }
  pplVar7 = &plStack_80;
LAB_1092a66f8:
  pplVar8 = &plStack_88;
  goto LAB_1092a6708;
}



/* Entry: 1092a64dc; end: 1092a6717;  */

void FUN_1092a64dc(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  char cVar4;
  long **pplVar5;
  long **pplVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plStack_28;
  long *plStack_20;
  long *plStack_18;
  
  plVar2 = (long *)*param_2;
  plVar7 = (long *)(*param_2 + param_2[1]);
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    plVar2 = param_2;
    plVar7 = (long *)((long)param_2 + (ulong)*(byte *)((long)param_2 + 0x17));
  }
  plVar8 = (long *)(*param_1 + param_1[1]);
  plVar9 = plVar7;
  plVar1 = (long *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    plVar8 = (long *)((long)param_1 + (ulong)*(byte *)((long)param_1 + 0x17));
    plVar1 = param_1;
  }
  do {
    plStack_28 = param_3;
    plStack_20 = param_2;
    plStack_18 = param_1;
    if (plVar8 == plVar1) break;
    if (plVar9 == plVar2) {
LAB_1092a65a8:
      plVar8 = (long *)(*param_3 + param_3[1]);
      plVar1 = (long *)*param_3;
      if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
        plVar8 = (long *)((long)param_3 + (ulong)*(byte *)((long)param_3 + 0x17));
        plVar1 = param_3;
      }
      goto LAB_1092a65c8;
    }
    cVar3 = *(char *)((long)plVar9 + -1);
    cVar4 = *(char *)((long)plVar8 + -1);
    if (cVar3 < cVar4) goto LAB_1092a65a8;
    plVar8 = (long *)((long)plVar8 + -1);
    plVar9 = (long *)((long)plVar9 + -1);
  } while (cVar3 <= cVar4);
  plVar8 = (long *)(*param_3 + param_3[1]);
  plVar1 = (long *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    plVar8 = (long *)((long)param_3 + (ulong)*(byte *)((long)param_3 + 0x17));
    plVar1 = param_3;
  }
  while( true ) {
    if (plVar7 == plVar2) {
      return;
    }
    if (plVar8 == plVar1) break;
    cVar3 = *(char *)((long)plVar8 + -1);
    plVar7 = (long *)((long)plVar7 + -1);
    if (cVar3 < *(char *)plVar7) break;
    plVar8 = (long *)((long)plVar8 + -1);
    if (*(char *)plVar7 < cVar3) {
      return;
    }
  }
  FUN_1092a6410(&plStack_20,&plStack_28);
  plVar2 = (long *)*plStack_20;
  plVar7 = (long *)(*plStack_20 + plStack_20[1]);
  if (-1 < (char)*(byte *)((long)plStack_20 + 0x17)) {
    plVar2 = plStack_20;
    plVar7 = (long *)((long)plStack_20 + (ulong)*(byte *)((long)plStack_20 + 0x17));
  }
  plVar8 = (long *)(*plStack_18 + plStack_18[1]);
  plVar1 = (long *)*plStack_18;
  if (-1 < (char)*(byte *)((long)plStack_18 + 0x17)) {
    plVar8 = (long *)((long)plStack_18 + (ulong)*(byte *)((long)plStack_18 + 0x17));
    plVar1 = plStack_18;
  }
  while( true ) {
    if (plVar8 == plVar1) {
      return;
    }
    if (plVar7 == plVar2) break;
    plVar7 = (long *)((long)plVar7 + -1);
    cVar3 = *(char *)((long)plVar8 + -1);
    if (*(char *)plVar7 < cVar3) break;
    plVar8 = (long *)((long)plVar8 + -1);
    if (cVar3 < *(char *)plVar7) {
      return;
    }
  }
  pplVar5 = &plStack_18;
  pplVar6 = &plStack_20;
LAB_1092a6708:
  FUN_1092a6410(pplVar5,pplVar6);
  return;
LAB_1092a65c8:
  do {
    if (plVar7 == plVar2) break;
    if (plVar8 == plVar1) {
LAB_1092a66ec:
      pplVar5 = &plStack_18;
      goto LAB_1092a66f8;
    }
    cVar3 = *(char *)((long)plVar8 + -1);
    plVar7 = (long *)((long)plVar7 + -1);
    if (cVar3 < *(char *)plVar7) goto LAB_1092a66ec;
    plVar8 = (long *)((long)plVar8 + -1);
  } while (cVar3 <= *(char *)plVar7);
  FUN_1092a6410(&plStack_18,&plStack_20);
  plVar2 = (long *)*plStack_28;
  plVar7 = (long *)(*plStack_28 + plStack_28[1]);
  if (-1 < (char)*(byte *)((long)plStack_28 + 0x17)) {
    plVar2 = plStack_28;
    plVar7 = (long *)((long)plStack_28 + (ulong)*(byte *)((long)plStack_28 + 0x17));
  }
  plVar8 = (long *)(*plStack_20 + plStack_20[1]);
  plVar1 = (long *)*plStack_20;
  if (-1 < (char)*(byte *)((long)plStack_20 + 0x17)) {
    plVar8 = (long *)((long)plStack_20 + (ulong)*(byte *)((long)plStack_20 + 0x17));
    plVar1 = plStack_20;
  }
  while( true ) {
    if (plVar8 == plVar1) {
      return;
    }
    if (plVar7 == plVar2) break;
    plVar7 = (long *)((long)plVar7 + -1);
    cVar3 = *(char *)((long)plVar8 + -1);
    if (*(char *)plVar7 < cVar3) break;
    plVar8 = (long *)((long)plVar8 + -1);
    if (cVar3 < *(char *)plVar7) {
      return;
    }
  }
  pplVar5 = &plStack_20;
LAB_1092a66f8:
  pplVar6 = &plStack_28;
  goto LAB_1092a6708;
}



/* Entry: 1092a6718; end: 1092a68cb;  */

void FUN_1092a6718(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  long *plVar4;
  long *plVar5;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plStack_50 = param_4;
  plStack_48 = param_3;
  plStack_40 = param_2;
  plStack_38 = param_1;
  FUN_1092a64dc();
  plVar2 = (long *)*param_4;
  plVar4 = (long *)(*param_4 + param_4[1]);
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    plVar2 = param_4;
    plVar4 = (long *)((long)param_4 + (ulong)*(byte *)((long)param_4 + 0x17));
  }
  plVar5 = (long *)(*param_3 + param_3[1]);
  plVar1 = (long *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    plVar5 = (long *)((long)param_3 + (ulong)*(byte *)((long)param_3 + 0x17));
    plVar1 = param_3;
  }
  while( true ) {
    if (plVar5 == plVar1) {
      return;
    }
    if (plVar4 == plVar2) break;
    plVar4 = (long *)((long)plVar4 + -1);
    cVar3 = *(char *)((long)plVar5 + -1);
    if (*(char *)plVar4 < cVar3) break;
    plVar5 = (long *)((long)plVar5 + -1);
    if (cVar3 < *(char *)plVar4) {
      return;
    }
  }
  FUN_1092a6410(&plStack_48,&plStack_50);
  plVar2 = (long *)*plStack_48;
  plVar4 = (long *)(*plStack_48 + plStack_48[1]);
  if (-1 < (char)*(byte *)((long)plStack_48 + 0x17)) {
    plVar2 = plStack_48;
    plVar4 = (long *)((long)plStack_48 + (ulong)*(byte *)((long)plStack_48 + 0x17));
  }
  plVar5 = (long *)(*param_2 + param_2[1]);
  plVar1 = (long *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    plVar5 = (long *)((long)param_2 + (ulong)*(byte *)((long)param_2 + 0x17));
    plVar1 = param_2;
  }
  while( true ) {
    if (plVar5 == plVar1) {
      return;
    }
    if (plVar4 == plVar2) break;
    plVar4 = (long *)((long)plVar4 + -1);
    cVar3 = *(char *)((long)plVar5 + -1);
    if (*(char *)plVar4 < cVar3) break;
    plVar5 = (long *)((long)plVar5 + -1);
    if (cVar3 < *(char *)plVar4) {
      return;
    }
  }
  FUN_1092a6410(&plStack_40,&plStack_48);
  plVar2 = (long *)*plStack_40;
  plVar4 = (long *)(*plStack_40 + plStack_40[1]);
  if (-1 < (char)*(byte *)((long)plStack_40 + 0x17)) {
    plVar2 = plStack_40;
    plVar4 = (long *)((long)plStack_40 + (ulong)*(byte *)((long)plStack_40 + 0x17));
  }
  plVar5 = (long *)(*param_1 + param_1[1]);
  plVar1 = (long *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    plVar5 = (long *)((long)param_1 + (ulong)*(byte *)((long)param_1 + 0x17));
    plVar1 = param_1;
  }
  while( true ) {
    if (plVar5 == plVar1) {
      return;
    }
    if (plVar4 == plVar2) break;
    plVar4 = (long *)((long)plVar4 + -1);
    cVar3 = *(char *)((long)plVar5 + -1);
    if (*(char *)plVar4 < cVar3) break;
    plVar5 = (long *)((long)plVar5 + -1);
    if (cVar3 < *(char *)plVar4) {
      return;
    }
  }
  FUN_1092a6410(&plStack_38,&plStack_40);
  return;
}



/* Entry: 1092a68cc; end: 1092a6b0b;  */

void FUN_1092a68cc(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  long *plVar4;
  long *plVar5;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  plStack_68 = param_5;
  plStack_60 = param_4;
  plStack_58 = param_3;
  plStack_50 = param_2;
  plStack_48 = param_1;
  FUN_1092a6718();
  plVar2 = (long *)*param_5;
  plVar4 = (long *)(*param_5 + param_5[1]);
  if (-1 < (char)*(byte *)((long)param_5 + 0x17)) {
    plVar2 = param_5;
    plVar4 = (long *)((long)param_5 + (ulong)*(byte *)((long)param_5 + 0x17));
  }
  plVar5 = (long *)(*param_4 + param_4[1]);
  plVar1 = (long *)*param_4;
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    plVar5 = (long *)((long)param_4 + (ulong)*(byte *)((long)param_4 + 0x17));
    plVar1 = param_4;
  }
  while( true ) {
    if (plVar5 == plVar1) {
      return;
    }
    if (plVar4 == plVar2) break;
    plVar4 = (long *)((long)plVar4 + -1);
    cVar3 = *(char *)((long)plVar5 + -1);
    if (*(char *)plVar4 < cVar3) break;
    plVar5 = (long *)((long)plVar5 + -1);
    if (cVar3 < *(char *)plVar4) {
      return;
    }
  }
  FUN_1092a6410(&plStack_60,&plStack_68);
  plVar2 = (long *)*plStack_60;
  plVar4 = (long *)(*plStack_60 + plStack_60[1]);
  if (-1 < (char)*(byte *)((long)plStack_60 + 0x17)) {
    plVar2 = plStack_60;
    plVar4 = (long *)((long)plStack_60 + (ulong)*(byte *)((long)plStack_60 + 0x17));
  }
  plVar5 = (long *)(*param_3 + param_3[1]);
  plVar1 = (long *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    plVar5 = (long *)((long)param_3 + (ulong)*(byte *)((long)param_3 + 0x17));
    plVar1 = param_3;
  }
  while( true ) {
    if (plVar5 == plVar1) {
      return;
    }
    if (plVar4 == plVar2) break;
    plVar4 = (long *)((long)plVar4 + -1);
    cVar3 = *(char *)((long)plVar5 + -1);
    if (*(char *)plVar4 < cVar3) break;
    plVar5 = (long *)((long)plVar5 + -1);
    if (cVar3 < *(char *)plVar4) {
      return;
    }
  }
  FUN_1092a6410(&plStack_58,&plStack_60);
  plVar2 = (long *)*plStack_58;
  plVar4 = (long *)(*plStack_58 + plStack_58[1]);
  if (-1 < (char)*(byte *)((long)plStack_58 + 0x17)) {
    plVar2 = plStack_58;
    plVar4 = (long *)((long)plStack_58 + (ulong)*(byte *)((long)plStack_58 + 0x17));
  }
  plVar5 = (long *)(*param_2 + param_2[1]);
  plVar1 = (long *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    plVar5 = (long *)((long)param_2 + (ulong)*(byte *)((long)param_2 + 0x17));
    plVar1 = param_2;
  }
  while( true ) {
    if (plVar5 == plVar1) {
      return;
    }
    if (plVar4 == plVar2) break;
    plVar4 = (long *)((long)plVar4 + -1);
    cVar3 = *(char *)((long)plVar5 + -1);
    if (*(char *)plVar4 < cVar3) break;
    plVar5 = (long *)((long)plVar5 + -1);
    if (cVar3 < *(char *)plVar4) {
      return;
    }
  }
  FUN_1092a6410(&plStack_50,&plStack_58);
  plVar2 = (long *)*plStack_50;
  plVar4 = (long *)(*plStack_50 + plStack_50[1]);
  if (-1 < (char)*(byte *)((long)plStack_50 + 0x17)) {
    plVar2 = plStack_50;
    plVar4 = (long *)((long)plStack_50 + (ulong)*(byte *)((long)plStack_50 + 0x17));
  }
  plVar5 = (long *)(*param_1 + param_1[1]);
  plVar1 = (long *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    plVar5 = (long *)((long)param_1 + (ulong)*(byte *)((long)param_1 + 0x17));
    plVar1 = param_1;
  }
  while( true ) {
    if (plVar5 == plVar1) {
      return;
    }
    if (plVar4 == plVar2) break;
    plVar4 = (long *)((long)plVar4 + -1);
    cVar3 = *(char *)((long)plVar5 + -1);
    if (*(char *)plVar4 < cVar3) break;
    plVar5 = (long *)((long)plVar5 + -1);
    if (cVar3 < *(char *)plVar4) {
      return;
    }
  }
  FUN_1092a6410(&plStack_48,&plStack_50);
  return;
}



/* Entry: 1092a6b0c; end: 1092a6bd7;  */

char * FUN_1092a6b0c(char *param_1,char *param_2)

{
  char *pcVar1;
  char **ppcVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char *pcVar14;
  undefined8 *puVar15;
  char *pcVar16;
  int iVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  char *pcStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  char *pcStack_b0;
  char *pcStack_a8;
  undefined7 uStack_48;
  undefined1 uStack_41;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = *(undefined8 **)param_1;
  puVar15 = *(undefined8 **)param_2;
  uVar20 = *puVar7;
  uStack_48 = (undefined7)puVar7[1];
  uVar12 = *(undefined8 *)((long)puVar7 + 0xf);
  uStack_41 = (undefined1)uVar12;
  uVar3 = *(undefined1 *)((long)puVar7 + 0x17);
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  uVar21 = puVar7[4];
  uVar18 = puVar7[3];
  uVar13 = puVar15[2];
  uVar19 = *puVar15;
  puVar7[1] = puVar15[1];
  *puVar7 = uVar19;
  puVar7[2] = uVar13;
  *(undefined1 *)((long)puVar15 + 0x17) = 0;
  *(undefined1 *)puVar15 = 0;
  uVar13 = puVar15[3];
  puVar7[4] = puVar15[4];
  puVar7[3] = uVar13;
  if (*(char *)((long)puVar15 + 0x17) < '\0') {
    param_1 = (char *)*puVar15;
    __ZdlPv();
  }
  *puVar15 = uVar20;
  puVar15[1] = CONCAT17(uStack_41,uStack_48);
  *(undefined8 *)((long)puVar15 + 0xf) = uVar12;
  *(undefined1 *)((long)puVar15 + 0x17) = uVar3;
  puVar15[4] = uVar21;
  puVar15[3] = uVar18;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return param_1;
  }
  ___stack_chk_fail();
  uVar8 = ((long)param_2 - (long)param_1 >> 3) * -0x3333333333333333;
  pcStack_b0 = param_2;
  pcStack_a8 = param_1;
  if ((long)uVar8 < 3) {
    if (uVar8 < 2) {
      return (char *)0x1;
    }
    if (uVar8 == 2) {
      pcStack_b0 = param_2 + -0x28;
      pcVar16 = *(char **)pcStack_b0;
      pcVar9 = *(char **)pcStack_b0 + *(long *)(param_2 + -0x20);
      if (-1 < param_2[-0x11]) {
        pcVar16 = pcStack_b0;
        pcVar9 = pcStack_b0 + (byte)param_2[-0x11];
      }
      pcVar10 = *(char **)param_1 + *(long *)(param_1 + 8);
      pcVar11 = *(char **)param_1;
      if (-1 < param_1[0x17]) {
        pcVar10 = param_1 + (byte)param_1[0x17];
        pcVar11 = param_1;
      }
      while( true ) {
        if (pcVar10 == pcVar11) {
          return (char *)0x1;
        }
        if (pcVar9 == pcVar16) break;
        pcVar9 = pcVar9 + -1;
        cVar4 = pcVar10[-1];
        if (*pcVar9 < cVar4) break;
        pcVar10 = pcVar10 + -1;
        if (cVar4 < *pcVar9) {
          return (char *)0x1;
        }
      }
      FUN_1092a6410(&pcStack_a8,&pcStack_b0);
      return (char *)0x1;
    }
  }
  else {
    if (uVar8 == 3) {
      FUN_1092a64dc(param_1,param_1 + 0x28,param_2 + -0x28);
      return (char *)0x1;
    }
    if (uVar8 == 4) {
      FUN_1092a6718(param_1,param_1 + 0x28,param_1 + 0x50,param_2 + -0x28);
      return (char *)0x1;
    }
    if (uVar8 == 5) {
      FUN_1092a68cc(param_1,param_1 + 0x28,param_1 + 0x50,param_1 + 0x78,param_2 + -0x28);
      return (char *)0x1;
    }
  }
  FUN_1092a64dc(param_1,param_1 + 0x28,param_1 + 0x50);
  if (param_1 + 0x78 == param_2) {
    return (char *)0x1;
  }
  iVar17 = 0;
  pcVar16 = param_1 + 0x50;
  pcVar9 = param_1 + 0x78;
  do {
    pcVar11 = *(char **)pcVar9;
    pcVar10 = *(char **)pcVar9 + *(long *)(pcVar9 + 8);
    if (-1 < pcVar9[0x17]) {
      pcVar11 = pcVar9;
      pcVar10 = pcVar9 + (byte)pcVar9[0x17];
    }
    pcVar14 = *(char **)pcVar16 + *(long *)(pcVar16 + 8);
    pcVar1 = *(char **)pcVar16;
    if (-1 < pcVar16[0x17]) {
      pcVar14 = pcVar16 + (byte)pcVar16[0x17];
      pcVar1 = pcVar16;
    }
    while( true ) {
      if (pcVar14 == pcVar1) goto LAB_1092a6e90;
      if (pcVar10 == pcVar11) break;
      pcVar10 = pcVar10 + -1;
      cVar4 = pcVar14[-1];
      if (*pcVar10 < cVar4) break;
      pcVar14 = pcVar14 + -1;
      if (cVar4 < *pcVar10) goto LAB_1092a6e90;
    }
    uVar5 = 0;
    lStack_d8 = *(long *)(pcVar9 + 8);
    pcStack_e0 = *(char **)pcVar9;
    uStack_d0 = *(ulong *)(pcVar9 + 0x10);
    pcVar9[8] = '\0';
    pcVar9[9] = '\0';
    pcVar9[10] = '\0';
    pcVar9[0xb] = '\0';
    pcVar9[0xc] = '\0';
    pcVar9[0xd] = '\0';
    pcVar9[0xe] = '\0';
    pcVar9[0xf] = '\0';
    pcVar9[0x10] = '\0';
    pcVar9[0x11] = '\0';
    pcVar9[0x12] = '\0';
    pcVar9[0x13] = '\0';
    pcVar9[0x14] = '\0';
    pcVar9[0x15] = '\0';
    pcVar9[0x16] = '\0';
    pcVar9[0x17] = '\0';
    pcVar9[0] = '\0';
    pcVar9[1] = '\0';
    pcVar9[2] = '\0';
    pcVar9[3] = '\0';
    pcVar9[4] = '\0';
    pcVar9[5] = '\0';
    pcVar9[6] = '\0';
    pcVar9[7] = '\0';
    uStack_c0 = *(undefined8 *)(pcVar9 + 0x20);
    uStack_c8 = *(undefined8 *)(pcVar9 + 0x18);
    pcVar11 = pcVar9;
    while( true ) {
      pcVar10 = pcVar16;
      if (uVar5 >> 7 != 0) {
        __ZdlPv(*(undefined8 *)pcVar11);
      }
      uVar20 = *(undefined8 *)pcVar10;
      *(undefined8 *)(pcVar11 + 8) = *(undefined8 *)(pcVar10 + 8);
      *(undefined8 *)pcVar11 = uVar20;
      *(undefined8 *)(pcVar11 + 0x10) = *(undefined8 *)(pcVar10 + 0x10);
      pcVar10[0x17] = '\0';
      *pcVar10 = '\0';
      uVar20 = *(undefined8 *)(pcVar10 + 0x18);
      *(undefined8 *)(pcVar11 + 0x20) = *(undefined8 *)(pcVar10 + 0x20);
      *(undefined8 *)(pcVar11 + 0x18) = uVar20;
      if (pcVar10 == pcStack_a8) break;
      pcVar16 = pcVar10 + -0x28;
      ppcVar2 = (char **)pcStack_e0;
      pcVar11 = pcStack_e0 + lStack_d8;
      if (-1 < (long)uStack_d0) {
        ppcVar2 = &pcStack_e0;
        pcVar11 = (char *)((long)&pcStack_e0 + (uStack_d0 >> 0x38));
      }
      pcVar14 = *(char **)pcVar16 + *(long *)(pcVar10 + -0x20);
      pcVar1 = *(char **)pcVar16;
      if (-1 < pcVar10[-0x11]) {
        pcVar14 = pcVar16 + (byte)pcVar10[-0x11];
        pcVar1 = pcVar16;
      }
      while( true ) {
        if (pcVar14 == pcVar1) goto LAB_1092a6e58;
        if ((char **)pcVar11 == ppcVar2) break;
        pcVar11 = pcVar11 + -1;
        cVar4 = pcVar14[-1];
        if (*pcVar11 < cVar4) break;
        pcVar14 = pcVar14 + -1;
        if (cVar4 < *pcVar11) goto LAB_1092a6e58;
      }
      uVar5 = (uint)(byte)pcVar10[0x17];
      pcVar11 = pcVar10;
    }
LAB_1092a6e58:
    if (pcVar10[0x17] < '\0') {
      __ZdlPv(*(undefined8 *)pcVar10);
    }
    *(ulong *)(pcVar10 + 0x10) = uStack_d0;
    *(long *)(pcVar10 + 8) = lStack_d8;
    *(char **)pcVar10 = pcStack_e0;
    *(undefined8 *)(pcVar10 + 0x20) = uStack_c0;
    *(undefined8 *)(pcVar10 + 0x18) = uStack_c8;
    iVar17 = iVar17 + 1;
    param_2 = pcStack_b0;
    if (iVar17 == 8) {
      return (char *)(ulong)(pcVar9 + 0x28 == pcStack_b0);
    }
LAB_1092a6e90:
    pcVar11 = pcVar9 + 0x28;
    pcVar16 = pcVar9;
    pcVar9 = pcVar11;
    if (pcVar11 == param_2) {
      return (char *)0x1;
    }
  } while( true );
}



/* Entry: 1092a6bd8; end: 1092a6ef7;  */

bool FUN_1092a6bd8(char *param_1,char *param_2)

{
  char *pcVar1;
  char **ppcVar2;
  char cVar3;
  uint uVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  undefined8 uVar12;
  char *pcStack_80;
  long lStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  char *pcStack_50;
  char *pcStack_48;
  
  uVar5 = ((long)param_2 - (long)param_1 >> 3) * -0x3333333333333333;
  pcStack_50 = param_2;
  pcStack_48 = param_1;
  if ((long)uVar5 < 3) {
    if (uVar5 < 2) {
      return true;
    }
    if (uVar5 == 2) {
      pcStack_50 = param_2 + -0x28;
      pcVar10 = *(char **)pcStack_50;
      pcVar6 = *(char **)pcStack_50 + *(long *)(param_2 + -0x20);
      if (-1 < param_2[-0x11]) {
        pcVar10 = pcStack_50;
        pcVar6 = pcStack_50 + (byte)param_2[-0x11];
      }
      pcVar7 = *(char **)param_1 + *(long *)(param_1 + 8);
      pcVar8 = *(char **)param_1;
      if (-1 < param_1[0x17]) {
        pcVar7 = param_1 + (byte)param_1[0x17];
        pcVar8 = param_1;
      }
      while( true ) {
        if (pcVar7 == pcVar8) {
          return true;
        }
        if (pcVar6 == pcVar10) break;
        pcVar6 = pcVar6 + -1;
        cVar3 = pcVar7[-1];
        if (*pcVar6 < cVar3) break;
        pcVar7 = pcVar7 + -1;
        if (cVar3 < *pcVar6) {
          return true;
        }
      }
      FUN_1092a6410(&pcStack_48,&pcStack_50);
      return true;
    }
  }
  else {
    if (uVar5 == 3) {
      FUN_1092a64dc(param_1,param_1 + 0x28,param_2 + -0x28);
      return true;
    }
    if (uVar5 == 4) {
      FUN_1092a6718(param_1,param_1 + 0x28,param_1 + 0x50,param_2 + -0x28);
      return true;
    }
    if (uVar5 == 5) {
      FUN_1092a68cc(param_1,param_1 + 0x28,param_1 + 0x50,param_1 + 0x78,param_2 + -0x28);
      return true;
    }
  }
  FUN_1092a64dc(param_1,param_1 + 0x28,param_1 + 0x50);
  if (param_1 + 0x78 == param_2) {
    return true;
  }
  iVar11 = 0;
  pcVar10 = param_1 + 0x50;
  pcVar6 = param_1 + 0x78;
  do {
    pcVar8 = *(char **)pcVar6;
    pcVar7 = *(char **)pcVar6 + *(long *)(pcVar6 + 8);
    if (-1 < pcVar6[0x17]) {
      pcVar8 = pcVar6;
      pcVar7 = pcVar6 + (byte)pcVar6[0x17];
    }
    pcVar9 = *(char **)pcVar10 + *(long *)(pcVar10 + 8);
    pcVar1 = *(char **)pcVar10;
    if (-1 < pcVar10[0x17]) {
      pcVar9 = pcVar10 + (byte)pcVar10[0x17];
      pcVar1 = pcVar10;
    }
    while( true ) {
      if (pcVar9 == pcVar1) goto LAB_1092a6e90;
      if (pcVar7 == pcVar8) break;
      pcVar7 = pcVar7 + -1;
      cVar3 = pcVar9[-1];
      if (*pcVar7 < cVar3) break;
      pcVar9 = pcVar9 + -1;
      if (cVar3 < *pcVar7) goto LAB_1092a6e90;
    }
    uVar4 = 0;
    lStack_78 = *(long *)(pcVar6 + 8);
    pcStack_80 = *(char **)pcVar6;
    uStack_70 = *(ulong *)(pcVar6 + 0x10);
    pcVar6[8] = '\0';
    pcVar6[9] = '\0';
    pcVar6[10] = '\0';
    pcVar6[0xb] = '\0';
    pcVar6[0xc] = '\0';
    pcVar6[0xd] = '\0';
    pcVar6[0xe] = '\0';
    pcVar6[0xf] = '\0';
    pcVar6[0x10] = '\0';
    pcVar6[0x11] = '\0';
    pcVar6[0x12] = '\0';
    pcVar6[0x13] = '\0';
    pcVar6[0x14] = '\0';
    pcVar6[0x15] = '\0';
    pcVar6[0x16] = '\0';
    pcVar6[0x17] = '\0';
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    pcVar6[4] = '\0';
    pcVar6[5] = '\0';
    pcVar6[6] = '\0';
    pcVar6[7] = '\0';
    uStack_60 = *(undefined8 *)(pcVar6 + 0x20);
    uStack_68 = *(undefined8 *)(pcVar6 + 0x18);
    pcVar8 = pcVar6;
    while( true ) {
      pcVar7 = pcVar10;
      if (uVar4 >> 7 != 0) {
        __ZdlPv(*(undefined8 *)pcVar8);
      }
      uVar12 = *(undefined8 *)pcVar7;
      *(undefined8 *)(pcVar8 + 8) = *(undefined8 *)(pcVar7 + 8);
      *(undefined8 *)pcVar8 = uVar12;
      *(undefined8 *)(pcVar8 + 0x10) = *(undefined8 *)(pcVar7 + 0x10);
      pcVar7[0x17] = '\0';
      *pcVar7 = '\0';
      uVar12 = *(undefined8 *)(pcVar7 + 0x18);
      *(undefined8 *)(pcVar8 + 0x20) = *(undefined8 *)(pcVar7 + 0x20);
      *(undefined8 *)(pcVar8 + 0x18) = uVar12;
      if (pcVar7 == pcStack_48) break;
      pcVar10 = pcVar7 + -0x28;
      ppcVar2 = (char **)pcStack_80;
      pcVar8 = pcStack_80 + lStack_78;
      if (-1 < (long)uStack_70) {
        ppcVar2 = &pcStack_80;
        pcVar8 = (char *)((long)&pcStack_80 + (uStack_70 >> 0x38));
      }
      pcVar9 = *(char **)pcVar10 + *(long *)(pcVar7 + -0x20);
      pcVar1 = *(char **)pcVar10;
      if (-1 < pcVar7[-0x11]) {
        pcVar9 = pcVar10 + (byte)pcVar7[-0x11];
        pcVar1 = pcVar10;
      }
      while( true ) {
        if (pcVar9 == pcVar1) goto LAB_1092a6e58;
        if ((char **)pcVar8 == ppcVar2) break;
        pcVar8 = pcVar8 + -1;
        cVar3 = pcVar9[-1];
        if (*pcVar8 < cVar3) break;
        pcVar9 = pcVar9 + -1;
        if (cVar3 < *pcVar8) goto LAB_1092a6e58;
      }
      uVar4 = (uint)(byte)pcVar7[0x17];
      pcVar8 = pcVar7;
    }
LAB_1092a6e58:
    if (pcVar7[0x17] < '\0') {
      __ZdlPv(*(undefined8 *)pcVar7);
    }
    *(ulong *)(pcVar7 + 0x10) = uStack_70;
    *(long *)(pcVar7 + 8) = lStack_78;
    *(char **)pcVar7 = pcStack_80;
    *(undefined8 *)(pcVar7 + 0x20) = uStack_60;
    *(undefined8 *)(pcVar7 + 0x18) = uStack_68;
    iVar11 = iVar11 + 1;
    param_2 = pcStack_50;
    if (iVar11 == 8) {
      return pcVar6 + 0x28 == pcStack_50;
    }
LAB_1092a6e90:
    pcVar8 = pcVar6 + 0x28;
    pcVar10 = pcVar6;
    pcVar6 = pcVar8;
    if (pcVar8 == param_2) {
      return true;
    }
  } while( true );
}



/* Entry: 1092a6ef8; end: 1092a70fb;  */

ulong * FUN_1092a6ef8(ulong *param_1,ulong *param_2,ulong *param_3,undefined1 *param_4,long param_5)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined1 *puVar13;
  
  puVar1 = param_2;
  if (0 < param_5) {
    puVar4 = (undefined1 *)param_1[1];
    if ((long)(param_1[2] - (long)puVar4) < param_5) {
      uVar11 = *param_1;
      puVar13 = puVar4 + (param_5 - uVar11);
      if ((long)puVar13 < 0) {
        func_0x000104c591bc();
        puVar1 = param_2;
        if (0 < param_5) {
          puVar4 = (undefined1 *)param_1[1];
          if ((long)(param_1[2] - (long)puVar4) < param_5) {
            uVar11 = *param_1;
            puVar13 = puVar4 + (param_5 - uVar11);
            if ((long)puVar13 < 0) {
              func_0x000104c591bc();
              puVar1 = param_1;
              if (param_4 != (undefined1 *)0x0) {
                FUN_109246380();
                puVar4 = (undefined1 *)param_1[1];
                for (; param_2 != param_3; param_2 = (ulong *)((long)param_2 + 1)) {
                  *puVar4 = (char)*param_2;
                  puVar4 = puVar4 + 1;
                }
                param_1[1] = (ulong)puVar4;
              }
              return puVar1;
            }
            uVar2 = param_1[2] - uVar11;
            puVar6 = (undefined1 *)(uVar2 * 2);
            if (puVar6 < puVar13 || (long)puVar6 - (long)puVar13 == 0) {
              puVar6 = puVar13;
            }
            if (0x3ffffffffffffffe < uVar2) {
              puVar6 = (undefined1 *)0x7fffffffffffffff;
            }
            if (puVar6 == (undefined1 *)0x0) {
              puVar13 = (undefined1 *)0x0;
            }
            else {
              puVar13 = puVar6;
              __Znwm();
            }
            puVar1 = (ulong *)((long)param_2 + ((long)puVar13 - uVar11));
            puVar9 = (undefined1 *)((long)puVar1 + param_5);
            puVar3 = puVar1;
            do {
              *(char *)puVar3 = (char)*param_3;
              param_5 = param_5 + -1;
              puVar3 = (ulong *)((long)puVar3 + 1);
              param_3 = (ulong *)((long)param_3 + 1);
            } while (param_5 != 0);
            _memcpy(puVar9,param_2,(long)puVar4 - (long)param_2);
            param_1[1] = (ulong)param_2;
            uVar11 = *param_1;
            puVar5 = (undefined1 *)((long)puVar1 + (uVar11 - (long)param_2));
            _memcpy(puVar5,uVar11,(long)param_2 - uVar11);
            *param_1 = (ulong)puVar5;
            param_1[1] = (ulong)(puVar9 + ((long)puVar4 - (long)param_2));
            param_1[2] = (ulong)(puVar13 + (long)puVar6);
            if (uVar11 != 0) {
              __ZdlPv(uVar11);
            }
          }
          else {
            lVar12 = (long)puVar4 - (long)param_2;
            if (lVar12 < param_5) {
              lVar8 = (long)param_4 - (lVar12 + (long)param_3);
              if (lVar8 != 0) {
                _memmove(puVar4,(undefined1 *)(lVar12 + (long)param_3),lVar8);
              }
              puVar13 = puVar4 + lVar8;
              param_1[1] = (ulong)puVar13;
              if (lVar12 < 1) {
                return param_2;
              }
              puVar6 = puVar13;
              if (puVar13 + -param_5 < puVar4) {
                lVar8 = (long)param_4 - (long)(param_5 + (long)param_3);
                lVar10 = (long)param_4 - (long)param_3;
                do {
                  *(undefined1 *)(lVar10 + (long)param_2) = *(undefined1 *)(lVar8 + (long)param_2);
                  lVar8 = lVar8 + 1;
                  lVar10 = lVar10 + 1;
                } while ((undefined1 *)(lVar8 + (long)param_2) < puVar4);
                puVar6 = (undefined1 *)(lVar10 + (long)param_2);
              }
              param_1[1] = (ulong)puVar6;
              if (puVar13 != (undefined1 *)((long)param_2 + param_5)) {
                _memmove((undefined1 *)((long)param_2 + param_5),param_2);
              }
            }
            else {
              puVar13 = puVar4 + -param_5;
              puVar6 = puVar4;
              puVar9 = puVar4;
              if (puVar4 + -param_5 < puVar4) {
                do {
                  puVar5 = puVar13 + 1;
                  puVar9 = puVar6 + 1;
                  *puVar6 = *puVar13;
                  puVar13 = puVar5;
                  puVar6 = puVar9;
                } while (puVar5 != puVar4);
              }
              param_1[1] = (ulong)puVar9;
              lVar12 = param_5;
              if (puVar4 != (undefined1 *)((long)param_2 + param_5)) {
                _memmove((undefined1 *)((long)param_2 + param_5),param_2);
              }
            }
            _memmove(param_2,param_3,lVar12);
          }
        }
        return puVar1;
      }
      uVar2 = param_1[2] - uVar11;
      puVar6 = (undefined1 *)(uVar2 * 2);
      if (puVar6 < puVar13 || (long)puVar6 - (long)puVar13 == 0) {
        puVar6 = puVar13;
      }
      if (0x3ffffffffffffffe < uVar2) {
        puVar6 = (undefined1 *)0x7fffffffffffffff;
      }
      if (puVar6 == (undefined1 *)0x0) {
        puVar13 = (undefined1 *)0x0;
      }
      else {
        puVar13 = puVar6;
        __Znwm();
      }
      puVar1 = (ulong *)(puVar13 + ((long)param_2 - uVar11));
      _memcpy(puVar1,param_3,param_5);
      _memcpy((undefined1 *)((long)puVar1 + param_5),param_2,(long)puVar4 - (long)param_2);
      param_1[1] = (ulong)param_2;
      _memcpy(puVar13,uVar11,(long)param_2 - uVar11);
      *param_1 = (ulong)puVar13;
      param_1[1] = (ulong)((undefined1 *)((long)puVar1 + param_5) + ((long)puVar4 - (long)param_2));
      param_1[2] = (ulong)(puVar13 + (long)puVar6);
      if (uVar11 != 0) {
        __ZdlPv(uVar11);
      }
    }
    else {
      lVar12 = (long)puVar4 - (long)param_2;
      if (lVar12 < param_5) {
        puVar13 = puVar4;
        puVar6 = puVar4;
        if ((undefined1 *)((long)param_3 + lVar12) != param_4) {
          puVar13 = (undefined1 *)((long)param_2 + (long)param_4) + -(long)param_3;
          puVar9 = puVar4;
          puVar5 = (undefined1 *)((long)param_3 + lVar12);
          do {
            puVar7 = puVar5 + 1;
            puVar6 = puVar9 + 1;
            *puVar9 = *puVar5;
            puVar9 = puVar6;
            puVar5 = puVar7;
          } while (puVar7 != param_4);
        }
        param_1[1] = (ulong)puVar13;
        if (lVar12 < 1) {
          return param_2;
        }
        puVar9 = puVar13 + -param_5;
        puVar5 = puVar13;
        if (puVar13 + -param_5 < puVar4) {
          do {
            puVar7 = puVar9 + 1;
            puVar13 = puVar5 + 1;
            *puVar5 = *puVar9;
            puVar9 = puVar7;
            puVar5 = puVar13;
          } while (puVar7 != puVar4);
        }
        param_1[1] = (ulong)puVar13;
        if (puVar6 != (undefined1 *)((long)param_2 + param_5)) {
          _memmove((undefined1 *)((long)param_2 + param_5),param_2);
        }
      }
      else {
        puVar13 = puVar4 + -param_5;
        puVar6 = puVar4;
        puVar9 = puVar4;
        if (puVar4 + -param_5 < puVar4) {
          do {
            puVar5 = puVar13 + 1;
            puVar9 = puVar6 + 1;
            *puVar6 = *puVar13;
            puVar13 = puVar5;
            puVar6 = puVar9;
          } while (puVar5 != puVar4);
        }
        param_1[1] = (ulong)puVar9;
        lVar12 = param_5;
        if (puVar4 != (undefined1 *)((long)param_2 + param_5)) {
          _memmove((undefined1 *)((long)param_2 + param_5),param_2);
        }
      }
      _memmove(param_2,param_3,lVar12);
    }
  }
  return puVar1;
}



/* Entry: 1092a70fc; end: 1092a730b;  */

long * FUN_1092a70fc(long *param_1,long *param_2,long *param_3,long param_4,long param_5)

{
  undefined1 *puVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 *puVar10;
  
  plVar2 = param_2;
  if (0 < param_5) {
    puVar5 = (undefined1 *)param_1[1];
    if (param_1[2] - (long)puVar5 < param_5) {
      lVar7 = *param_1;
      puVar1 = puVar5 + (param_5 - lVar7);
      if ((long)puVar1 < 0) {
        func_0x000104c591bc();
        plVar2 = param_1;
        if (param_4 != 0) {
          FUN_109246380();
          puVar5 = (undefined1 *)param_1[1];
          for (; param_2 != param_3; param_2 = (long *)((long)param_2 + 1)) {
            *puVar5 = (char)*param_2;
            puVar5 = puVar5 + 1;
          }
          param_1[1] = (long)puVar5;
        }
        return plVar2;
      }
      uVar3 = param_1[2] - lVar7;
      puVar8 = (undefined1 *)(uVar3 * 2);
      if (puVar8 < puVar1 || (long)puVar8 - (long)puVar1 == 0) {
        puVar8 = puVar1;
      }
      if (0x3ffffffffffffffe < uVar3) {
        puVar8 = (undefined1 *)0x7fffffffffffffff;
      }
      if (puVar8 == (undefined1 *)0x0) {
        puVar1 = (undefined1 *)0x0;
      }
      else {
        puVar1 = puVar8;
        __Znwm();
      }
      plVar2 = (long *)((long)param_2 + ((long)puVar1 - lVar7));
      puVar10 = (undefined1 *)((long)plVar2 + param_5);
      plVar4 = plVar2;
      do {
        *(char *)plVar4 = (char)*param_3;
        param_5 = param_5 + -1;
        plVar4 = (long *)((long)plVar4 + 1);
        param_3 = (long *)((long)param_3 + 1);
      } while (param_5 != 0);
      _memcpy(puVar10,param_2,(long)puVar5 - (long)param_2);
      param_1[1] = (long)param_2;
      lVar7 = *param_1;
      puVar6 = (undefined1 *)((long)plVar2 + (lVar7 - (long)param_2));
      _memcpy(puVar6,lVar7,(long)param_2 - lVar7);
      *param_1 = (long)puVar6;
      param_1[1] = (long)(puVar10 + ((long)puVar5 - (long)param_2));
      param_1[2] = (long)(puVar1 + (long)puVar8);
      if (lVar7 != 0) {
        __ZdlPv(lVar7);
      }
    }
    else {
      lVar7 = (long)puVar5 - (long)param_2;
      if (lVar7 < param_5) {
        lVar9 = param_4 - (lVar7 + (long)param_3);
        if (lVar9 != 0) {
          _memmove(puVar5,(undefined1 *)(lVar7 + (long)param_3),lVar9);
        }
        puVar1 = puVar5 + lVar9;
        param_1[1] = (long)puVar1;
        if (lVar7 < 1) {
          return param_2;
        }
        puVar8 = puVar1;
        if (puVar1 + -param_5 < puVar5) {
          lVar9 = param_4 - (long)(param_5 + (long)param_3);
          param_4 = param_4 - (long)param_3;
          do {
            *(undefined1 *)(param_4 + (long)param_2) = *(undefined1 *)(lVar9 + (long)param_2);
            lVar9 = lVar9 + 1;
            param_4 = param_4 + 1;
          } while ((undefined1 *)(lVar9 + (long)param_2) < puVar5);
          puVar8 = (undefined1 *)(param_4 + (long)param_2);
        }
        param_1[1] = (long)puVar8;
        if (puVar1 != (undefined1 *)((long)param_2 + param_5)) {
          _memmove((undefined1 *)((long)param_2 + param_5),param_2);
        }
      }
      else {
        puVar1 = puVar5 + -param_5;
        puVar8 = puVar5;
        puVar10 = puVar5;
        if (puVar5 + -param_5 < puVar5) {
          do {
            puVar6 = puVar1 + 1;
            puVar10 = puVar8 + 1;
            *puVar8 = *puVar1;
            puVar1 = puVar6;
            puVar8 = puVar10;
          } while (puVar6 != puVar5);
        }
        param_1[1] = (long)puVar10;
        lVar7 = param_5;
        if (puVar5 != (undefined1 *)((long)param_2 + param_5)) {
          _memmove((undefined1 *)((long)param_2 + param_5),param_2);
        }
      }
      _memmove(param_2,param_3,lVar7);
    }
  }
  return plVar2;
}



/* Entry: 1092a730c; end: 1092a737b;  */

void FUN_1092a730c(long param_1,undefined1 *param_2,undefined1 *param_3,long param_4)

{
  undefined1 *puVar1;
  
  if (param_4 != 0) {
    FUN_109246380(param_1,param_4);
    puVar1 = *(undefined1 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    *(undefined1 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 1092a737c; end: 1092a7427;  */

long * FUN_1092a737c(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1092a7428; end: 1092a74c7;  */

long * FUN_1092a7428(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = *param_2;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar4 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if (plVar6[2] == uVar3) {
            return plVar6;
          }
        }
        else {
          if ((uVar2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 1092a74c8; end: 1092a76d3;  */

undefined1  [16] FUN_1092a74c8(long *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x24;
  undefined1 auVar11 [16];
  
  uVar10 = *param_2;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar3 = uVar9 - 1;
    if ((uVar9 & uVar3) == 0) {
      unaff_x24 = uVar3 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar6 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar6 * uVar9;
      }
    }
    puVar5 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar5 != (undefined8 *)0x0) {
      for (plVar8 = (long *)*puVar5; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar6 = plVar8[1];
        if (uVar6 == uVar10) {
          if (plVar8[2] == uVar10) {
            uVar2 = 0;
            goto LAB_1092a76a0;
          }
        }
        else {
          if ((uVar9 & uVar3) == 0) {
            uVar6 = uVar6 & uVar3;
          }
          else if (uVar9 <= uVar6) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar6 / uVar9;
            }
            uVar6 = uVar6 - uVar1 * uVar9;
          }
          if (uVar6 != unaff_x24) break;
        }
      }
    }
  }
  plVar8 = (long *)0x20;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = uVar10;
  plVar8[2] = *(long *)*param_4;
  *(undefined4 *)(plVar8 + 3) = 0;
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar9) {
      uVar3 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar3 = uVar3 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    FUN_1092a76d4(param_1,uVar3);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = uVar9 - 1 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar3 * uVar9;
      }
    }
  }
  lVar7 = *param_1;
  plVar4 = *(long **)(lVar7 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar8 = *plVar4;
    *plVar4 = (long)plVar8;
    *(long **)(lVar7 + unaff_x24 * 8) = plVar4;
    if (*plVar8 == 0) goto LAB_1092a7690;
    uVar10 = *(ulong *)(*plVar8 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar10 = uVar10 & uVar9 - 1;
    }
    else if (uVar9 <= uVar10) {
      uVar3 = 0;
      if (uVar9 != 0) {
        uVar3 = uVar10 / uVar9;
      }
      uVar10 = uVar10 - uVar3 * uVar9;
    }
    plVar4 = (long *)(*param_1 + uVar10 * 8);
  }
  else {
    *plVar8 = *plVar4;
  }
  *plVar4 = (long)plVar8;
LAB_1092a7690:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_1092a76a0:
  auVar11._8_8_ = uVar2;
  auVar11._0_8_ = plVar8;
  return auVar11;
}



/* Entry: 1092a76d4; end: 1092a77a3;  */

long * FUN_1092a76d4(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lStack_68;
  
  plVar3 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar10 = (long *)param_1[1];
  if (plVar10 < param_2) {
LAB_1092a771c:
    if (param_2 == (long *)0x0) {
      plVar3 = (long *)*param_1;
      *param_1 = 0;
      if (plVar3 != (long *)0x0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if ((ulong)param_2 >> 0x3d != 0) {
        func_0x000104c4f740();
        *param_1 = (long)&PTR_FUN_110ae7f90;
        param_1[2] = 0;
        param_1[1] = 0;
        param_1[0x12] = 0;
        param_1[0x11] = 0;
        param_1[4] = 0;
        param_1[3] = 0;
        param_1[6] = 0;
        param_1[5] = 0;
        param_1[8] = 0;
        param_1[7] = 0;
        param_1[10] = 0;
        param_1[9] = 0;
        param_1[0xc] = 0;
        param_1[0xb] = 0;
        param_1[0xe] = 0;
        param_1[0xd] = 0;
        param_1[0x10] = 0;
        param_1[0xf] = 0;
        param_1[0x14] = 0;
        param_1[0x13] = 0;
        *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
        plVar10 = param_1 + 0x16;
        param_1[0x17] = 0;
        *plVar10 = 0;
        param_1[0x19] = 0;
        param_1[0x18] = 0;
        param_1[0x1b] = 0;
        param_1[0x1a] = 0;
        param_1[0x1d] = 0;
        param_1[0x1c] = 0;
        lVar11 = param_2[1];
        lVar2 = *param_2;
        param_1[0x1d] = param_2[2];
        param_1[0x1c] = lVar11;
        param_1[0x1b] = lVar2;
        FUN_1092a2100(&lStack_68,param_2);
        plVar3 = (long *)param_1[0x17];
        param_1[0x17] = lStack_68;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x28))();
        }
        puVar4 = (undefined8 *)0x8;
        __Znwm();
        *puVar4 = &PTR_FUN_110ae9950;
        plVar3 = (long *)*plVar10;
        *plVar10 = (long)puVar4;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x28))();
        }
        return param_1;
      }
      lVar2 = (long)param_2 << 3;
      __Znwm();
      plVar3 = (long *)*param_1;
      *param_1 = lVar2;
      if (plVar3 != (long *)0x0) {
        __ZdlPv();
      }
      plVar10 = (long *)0x0;
      param_1[1] = (long)param_2;
      do {
        *(undefined8 *)(*param_1 + (long)plVar10 * 8) = 0;
        plVar10 = (long *)((long)plVar10 + 1);
      } while (param_2 != plVar10);
      plVar10 = (long *)param_1[2];
      if (plVar10 != (long *)0x0) {
        plVar6 = (long *)plVar10[1];
        uVar5 = (long)param_2 - 1;
        if (((ulong)param_2 & uVar5) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar5);
        }
        else if (param_2 <= plVar6) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar6 / (ulong)param_2;
          }
          plVar6 = (long *)((long)plVar6 - uVar1 * (long)param_2);
        }
        *(long **)(*param_1 + (long)plVar6 * 8) = param_1 + 2;
        plVar7 = (long *)*plVar10;
        while (plVar7 != (long *)0x0) {
          plVar9 = (long *)plVar7[1];
          if (((ulong)param_2 & uVar5) == 0) {
            plVar9 = (long *)((ulong)plVar9 & uVar5);
          }
          else if (param_2 <= plVar9) {
            uVar1 = 0;
            if (param_2 != (long *)0x0) {
              uVar1 = (ulong)plVar9 / (ulong)param_2;
            }
            plVar9 = (long *)((long)plVar9 - uVar1 * (long)param_2);
          }
          plVar8 = plVar7;
          if (plVar9 != plVar6) {
            lVar2 = *param_1;
            if (*(long *)(lVar2 + (long)plVar9 * 8) == 0) {
              *(long **)(lVar2 + (long)plVar9 * 8) = plVar10;
              plVar6 = plVar9;
            }
            else {
              *plVar10 = *plVar7;
              *plVar7 = **(undefined8 **)(lVar2 + (long)plVar9 * 8);
              **(long **)(lVar2 + (long)plVar9 * 8) = (long)plVar7;
              plVar8 = plVar10;
            }
          }
          plVar10 = plVar8;
          plVar7 = (long *)*plVar8;
        }
      }
    }
    return plVar3;
  }
  if (param_2 < plVar10) {
    plVar3 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar10 < (long *)0x3) || (((ulong)plVar10 & (long)plVar10 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar3) {
      plVar3 = (long *)(1L << (-LZCOUNT((long)plVar3 + -1) & 0x3fU));
    }
    if (param_2 <= plVar3) {
      param_2 = plVar3;
    }
    if (param_2 < plVar10) goto LAB_1092a771c;
  }
  return plVar3;
}



/* Entry: 1092a77a4; end: 1092a78df;  */

long * FUN_1092a77a4(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lStack_68;
  
  if (param_2 == (long *)0x0) {
    plVar3 = (long *)*param_1;
    *param_1 = 0;
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if ((ulong)param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      *param_1 = (long)&PTR_FUN_110ae7f90;
      param_1[2] = 0;
      param_1[1] = 0;
      param_1[0x12] = 0;
      param_1[0x11] = 0;
      param_1[4] = 0;
      param_1[3] = 0;
      param_1[6] = 0;
      param_1[5] = 0;
      param_1[8] = 0;
      param_1[7] = 0;
      param_1[10] = 0;
      param_1[9] = 0;
      param_1[0xc] = 0;
      param_1[0xb] = 0;
      param_1[0xe] = 0;
      param_1[0xd] = 0;
      param_1[0x10] = 0;
      param_1[0xf] = 0;
      param_1[0x14] = 0;
      param_1[0x13] = 0;
      *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
      plVar5 = param_1 + 0x16;
      param_1[0x17] = 0;
      *plVar5 = 0;
      param_1[0x19] = 0;
      param_1[0x18] = 0;
      param_1[0x1b] = 0;
      param_1[0x1a] = 0;
      param_1[0x1d] = 0;
      param_1[0x1c] = 0;
      lVar11 = param_2[1];
      lVar2 = *param_2;
      param_1[0x1d] = param_2[2];
      param_1[0x1c] = lVar11;
      param_1[0x1b] = lVar2;
      FUN_1092a2100(&lStack_68,param_2);
      plVar3 = (long *)param_1[0x17];
      param_1[0x17] = lStack_68;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x28))();
      }
      puVar4 = (undefined8 *)0x8;
      __Znwm();
      *puVar4 = &PTR_FUN_110ae9950;
      plVar3 = (long *)*plVar5;
      *plVar5 = (long)puVar4;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x28))();
      }
      return param_1;
    }
    lVar2 = (long)param_2 << 3;
    __Znwm();
    plVar3 = (long *)*param_1;
    *param_1 = lVar2;
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
    plVar5 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar5 * 8) = 0;
      plVar5 = (long *)((long)plVar5 + 1);
    } while (param_2 != plVar5);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      plVar7 = (long *)plVar5[1];
      uVar6 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar6) == 0) {
        plVar7 = (long *)((ulong)plVar7 & uVar6);
      }
      else if (param_2 <= plVar7) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar7 / (ulong)param_2;
        }
        plVar7 = (long *)((long)plVar7 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar7 * 8) = param_1 + 2;
      plVar8 = (long *)*plVar5;
      while (plVar8 != (long *)0x0) {
        plVar10 = (long *)plVar8[1];
        if (((ulong)param_2 & uVar6) == 0) {
          plVar10 = (long *)((ulong)plVar10 & uVar6);
        }
        else if (param_2 <= plVar10) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar10 / (ulong)param_2;
          }
          plVar10 = (long *)((long)plVar10 - uVar1 * (long)param_2);
        }
        plVar9 = plVar8;
        if (plVar10 != plVar7) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar10 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar10 * 8) = plVar5;
            plVar7 = plVar10;
          }
          else {
            *plVar5 = *plVar8;
            *plVar8 = **(undefined8 **)(lVar2 + (long)plVar10 * 8);
            **(long **)(lVar2 + (long)plVar10 * 8) = (long)plVar8;
            plVar9 = plVar5;
          }
        }
        plVar5 = plVar9;
        plVar8 = (long *)*plVar9;
      }
    }
  }
  return plVar3;
}



/* Entry: 1092a78e0; end: 1092a7acf;  */

undefined8 * FUN_1092a78e0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  *param_1 = &PTR_FUN_110ae7f90;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  plVar3 = param_1 + 0x16;
  param_1[0x17] = 0;
  *plVar3 = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  uVar5 = param_2[1];
  uVar4 = *param_2;
  param_1[0x1d] = param_2[2];
  param_1[0x1c] = uVar5;
  param_1[0x1b] = uVar4;
  FUN_1092a2100(&uStack_48,param_2);
  plVar1 = (long *)param_1[0x17];
  param_1[0x17] = uStack_48;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  puVar2 = (undefined8 *)0x8;
  __Znwm();
  *puVar2 = &PTR_FUN_110ae9950;
  plVar1 = (long *)*plVar3;
  *plVar3 = (long)puVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  return param_1;
}



/* Entry: 1092a7ad0; end: 1092a7beb;  */

undefined8 * FUN_1092a7ad0(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110ae7f90;
  puStack_28 = param_1 + 0x18;
  func_0x0001092a88d8(&puStack_28);
  plVar1 = (long *)param_1[0x17];
  param_1[0x17] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  plVar1 = (long *)param_1[0x16];
  param_1[0x16] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  FUN_1092a737c(param_1 + 0x11);
  plVar1 = (long *)param_1[0x10];
  param_1[0x10] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x50))();
  }
  plVar1 = (long *)param_1[0xf];
  param_1[0xf] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x50))();
  }
  plVar1 = (long *)param_1[0xe];
  param_1[0xe] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x50))();
  }
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x50))();
  }
  puStack_28 = param_1 + 10;
  FUN_1092a50e4(&puStack_28);
  if (param_1[7] != 0) {
    param_1[8] = param_1[7];
    __ZdlPv();
  }
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
    __ZdlPv();
  }
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1092a7bec; end: 1092a7bef;  */

undefined8 * FUN_1092a7bec(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110ae7f90;
  puStack_28 = param_1 + 0x18;
  func_0x0001092a88d8(&puStack_28);
  plVar1 = (long *)param_1[0x17];
  param_1[0x17] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  plVar1 = (long *)param_1[0x16];
  param_1[0x16] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  FUN_1092a737c(param_1 + 0x11);
  plVar1 = (long *)param_1[0x10];
  param_1[0x10] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x50))();
  }
  plVar1 = (long *)param_1[0xf];
  param_1[0xf] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x50))();
  }
  plVar1 = (long *)param_1[0xe];
  param_1[0xe] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x50))();
  }
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x50))();
  }
  puStack_28 = param_1 + 10;
  FUN_1092a50e4(&puStack_28);
  if (param_1[7] != 0) {
    param_1[8] = param_1[7];
    __ZdlPv();
  }
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
    __ZdlPv();
  }
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1092a7bf0; end: 1092a7c03;  */

void FUN_1092a7bf0(void)

{
  FUN_1092a7ad0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092a7c04; end: 1092a7e23;  */

void FUN_1092a7c04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *apuStack_148 [2];
  char cStack_131;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1092a7e24();
  lStack_118 = 0;
  lStack_110 = 0;
  uStack_108 = 0;
  lStack_130 = 0;
  lStack_128 = 0;
  uStack_120 = 0;
  FUN_1092b22a8(&uStack_c0,param_2);
  func_0x0001092a5124(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = uStack_b8;
  *(undefined8 *)(param_1 + 0x50) = uStack_c0;
  *(undefined8 *)(param_1 + 0x60) = uStack_b0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_c0 = 0;
  apuStack_148[0] = &uStack_c0;
  func_0x0001092a50e4(apuStack_148);
  puVar1 = *(undefined8 **)(param_1 + 200);
  for (puVar5 = *(undefined8 **)(param_1 + 0xc0); puVar5 != puVar1; puVar5 = puVar5 + 1) {
    (*(code *)**(undefined8 **)*puVar5)((undefined8 *)*puVar5,param_2,param_1 + 0x50,&lStack_118);
  }
  (**(code **)**(undefined8 **)(param_1 + 0xb0))
            (*(undefined8 **)(param_1 + 0xb0),param_2,param_1 + 0x50,&lStack_118);
  FUN_1092a7f30(param_1,&lStack_118,&lStack_130);
  func_0x000107c31940(apuStack_148,&UNK_10f5173d2);
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puStack_100 = &UNK_1069b161c;
  ppuStack_f8 = &PTR_DAT_110950c70;
  FUN_1092b17dc(&uStack_c0,param_3,apuStack_148,&puStack_100);
  (*(code *)*ppuStack_f8)(&ppuStack_f8);
  if (cStack_131 < '\0') {
    __ZdlPv(apuStack_148[0]);
  }
  FUN_1092b1f3c(&uStack_c0,lStack_130,lStack_128 - lStack_130);
  FUN_1092b2248(&uStack_c0);
  if (lStack_130 != 0) {
    lStack_128 = lStack_130;
    __ZdlPv();
  }
  lVar2 = lStack_118;
  if (lStack_118 != 0) {
    lStack_110 = lStack_118;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  FUN_1092b2248(&uStack_c0);
  if (lStack_130 != 0) {
    lStack_128 = lStack_130;
    __ZdlPv();
  }
  if (lStack_118 != 0) {
    lStack_110 = lStack_118;
    __ZdlPv();
  }
  __Unwind_Resume();
  *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(lVar2 + 8);
  *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar2 + 0x20);
  FUN_1092a4784(lVar2 + 0x50);
  *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)(lVar2 + 0x38);
  func_0x0001092a73c4(lVar2 + 0x88);
  uVar3 = 0x30;
  __Znwm();
  FUN_1092bf890();
  plVar4 = *(long **)(lVar2 + 0x68);
  *(undefined8 *)(lVar2 + 0x68) = uVar3;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x50))();
  }
  uVar3 = 0x30;
  __Znwm();
  FUN_1092bf890();
  plVar4 = *(long **)(lVar2 + 0x70);
  *(undefined8 *)(lVar2 + 0x70) = uVar3;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x50))();
  }
  uVar3 = 0x30;
  __Znwm();
  FUN_1092bf890();
  plVar4 = *(long **)(lVar2 + 0x78);
  *(undefined8 *)(lVar2 + 0x78) = uVar3;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x50))();
  }
  uVar3 = 0x30;
  __Znwm();
  FUN_1092bf890();
  plVar4 = *(long **)(lVar2 + 0x80);
  *(undefined8 *)(lVar2 + 0x80) = uVar3;
  if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001092a7f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x50))();
    return;
  }
  return;
}



/* Entry: 1092a7e24; end: 1092a7f2f;  */

void FUN_1092a7e24(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x20);
  FUN_1092a4784(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x38);
  func_0x0001092a73c4(param_1 + 0x88);
  uVar1 = 0x30;
  __Znwm();
  FUN_1092bf890();
  plVar2 = *(long **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x50))();
  }
  uVar1 = 0x30;
  __Znwm();
  FUN_1092bf890();
  plVar2 = *(long **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x50))();
  }
  uVar1 = 0x30;
  __Znwm();
  FUN_1092bf890();
  plVar2 = *(long **)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x50))();
  }
  uVar1 = 0x30;
  __Znwm();
  FUN_1092bf890();
  plVar2 = *(long **)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001092a7f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x50))();
    return;
  }
  return;
}



/* Entry: 1092a7f30; end: 1092a86b3;  */

void FUN_1092a7f30(long param_1,long *param_2,undefined8 *param_3,long *param_4,undefined1 *param_5)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long lVar17;
  ulong uVar18;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  long *plStack_118;
  long lStack_110;
  long *plStack_108;
  long lStack_100;
  long lStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  int iStack_d0;
  undefined8 uStack_cc;
  undefined8 uStack_c4;
  undefined8 uStack_bc;
  undefined8 uStack_b4;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined4 uStack_9c;
  long lStack_98;
  undefined1 uStack_89;
  undefined8 uStack_88;
  
  uStack_cc = 0;
  uStack_9c = 0;
  uStack_a4 = 0;
  uStack_ac = 0;
  uStack_b4 = 0;
  uStack_bc = 0;
  uStack_d8 = 0x200435a4c;
  iStack_d0 = (int)((ulong)(*(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50)) >> 3) *
              -0x33333333;
  uStack_c4 = (ulong)*(uint *)(param_1 + 0xdc);
  puVar13 = (undefined *)0x40;
  puStack_e0 = param_3;
  (**(code **)(**(long **)(param_1 + 0x68) + 8))(*(long **)(param_1 + 0x68),&uStack_d8,0x40);
  lVar12 = *(long *)(param_1 + 0x50);
  if (*(long *)(param_1 + 0x58) != lVar12) {
    lVar17 = 0;
    uVar18 = 0;
    do {
      plVar9 = (long *)(lVar12 + lVar17);
      uVar2 = *(uint *)(plVar9 + 4);
      puVar16 = (undefined *)(ulong)uVar2;
      lVar5 = *(long *)(param_1 + 8);
      puVar14 = (undefined *)(*(long *)(param_1 + 0x10) - lVar5);
      plVar8 = (long *)(puVar16 + -(long)puVar14);
      if (puVar16 < puVar14 || plVar8 == (long *)0x0) {
        if (puVar16 < puVar14) {
          *(undefined **)(param_1 + 0x10) = puVar16 + lVar5;
        }
      }
      else {
        func_0x000107c27d58(param_1 + 8,plVar8);
        lVar5 = *(long *)(param_1 + 8);
      }
      lVar1 = lVar12 + lVar17;
      if (uVar2 != 0) {
        plVar8 = (long *)((ulong)*(uint *)(lVar1 + 0x18) + *param_2);
        puVar13 = puVar16;
        _memmove(lVar5,plVar8,puVar16);
      }
      if (*(int *)(param_1 + 0xd8) == 0) {
LAB_1092a80b8:
        lVar5 = lVar12 + lVar17;
        iVar4 = *(int *)(lVar5 + 0x24);
        if (iVar4 == 0) {
          plVar11 = *(long **)(param_1 + 0xb0);
          plVar8 = plVar9;
          (**(code **)(*plVar11 + 0x10))(plVar11,plVar9);
          iVar4 = (int)plVar11;
          *(int *)(lVar5 + 0x24) = iVar4;
        }
        *(uint *)(plVar9 + 4) = uVar2;
        if (iVar4 == 3) {
          plVar8 = *(long **)(param_1 + 0x80);
          (**(code **)(*plVar8 + 0x10))();
          if (plVar8 == (long *)0x0) {
            uStack_88 = (long *)0x4;
            (**(code **)(**(long **)(param_1 + 0x80) + 8))(*(long **)(param_1 + 0x80),&uStack_88,8);
          }
          *(int *)(lVar12 + lVar17 + 0x1c) = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 8);
          plVar8 = *(long **)(param_1 + 0x80);
          (**(code **)(*plVar8 + 0x10))();
          *(int *)(lVar1 + 0x18) = (int)plVar8 + -8;
          plVar8 = *(long **)(param_1 + 0x80);
          lVar12 = *(long *)(param_1 + 8);
          lVar5 = *(long *)(param_1 + 0x10);
        }
        else {
          if (iVar4 != 2) {
            if (iVar4 != 1) {
              puVar14 = &UNK_10f56338a;
              func_0x000105688514();
              pcStack_e8 = FUN_1092a86b4;
              puStack_120 = puVar16;
              plStack_118 = plVar9;
              lStack_110 = lVar5;
              plStack_108 = param_2;
              lStack_100 = param_1;
              lStack_f8 = lVar1;
              puStack_f0 = &stack0xfffffffffffffff0;
              FUN_1092a7e24();
              plVar9 = (long *)(puVar14 + 0x50);
              if (plVar9 != param_4) {
                FUN_1092a8954(plVar9,*param_4,param_4[1],
                              (param_4[1] - *param_4 >> 3) * -0x3333333333333333);
              }
              lStack_138 = 0;
              lStack_130 = 0;
              uStack_128 = 0;
              FUN_1092a730c(&lStack_138,plVar8,(undefined *)((long)plVar8 + (long)puVar13),puVar13);
              puVar10 = *(undefined8 **)(puVar14 + 200);
              for (puVar7 = *(undefined8 **)(puVar14 + 0xc0); puVar7 != puVar10; puVar7 = puVar7 + 1
                  ) {
                (**(code **)(*(long *)*puVar7 + 8))((long *)*puVar7,plVar9,&lStack_138);
              }
              (**(code **)(**(long **)(puVar14 + 0xb0) + 8))
                        (*(long **)(puVar14 + 0xb0),plVar9,&lStack_138);
              FUN_1092a7f30(puVar14,&lStack_138,param_5);
              if (lStack_138 != 0) {
                lStack_130 = lStack_138;
                __ZdlPv();
              }
              return;
            }
            *(undefined4 *)(lVar5 + 0x24) = 1;
            plVar8 = *(long **)(param_1 + 0x70);
            (**(code **)(*plVar8 + 0x10))();
            if (plVar8 == (long *)0x0) {
              uStack_88 = (long *)0x1;
              (**(code **)(**(long **)(param_1 + 0x70) + 8))
                        (*(long **)(param_1 + 0x70),&uStack_88,8);
            }
            *(int *)(lVar1 + 0x18) = (int)*(undefined8 *)(param_1 + 0x40) - *(int *)(param_1 + 0x38)
            ;
            puVar13 = *(undefined **)(param_1 + 8);
            param_4 = *(long **)(param_1 + 0x10);
            param_5 = (undefined1 *)((long)param_4 - (long)puVar13);
            FUN_1092a70fc(param_1 + 0x38);
            *(undefined4 *)(lVar12 + lVar17 + 0x1c) = 0;
            goto LAB_1092a824c;
          }
          plVar8 = *(long **)(param_1 + 0x78);
          (**(code **)(*plVar8 + 0x10))();
          if (plVar8 == (long *)0x0) {
            uStack_88 = (long *)0x3;
            (**(code **)(**(long **)(param_1 + 0x78) + 8))(*(long **)(param_1 + 0x78),&uStack_88,8);
          }
          plVar8 = *(long **)(param_1 + 0x78);
          (**(code **)(*plVar8 + 0x10))();
          *(int *)(lVar1 + 0x18) = (int)plVar8 + -8;
          puVar7 = *(undefined8 **)(param_1 + 0xb8);
          param_4 = (long *)(param_1 + 0x20);
          param_5 = (undefined1 *)0x1;
          (**(code **)*puVar7)
                    (puVar7,*(long *)(param_1 + 8),
                     *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8),param_4,1);
          *(int *)(lVar12 + lVar17 + 0x1c) = (int)puVar7;
          plVar8 = *(long **)(param_1 + 0x78);
          lVar12 = *(long *)(param_1 + 0x20);
          lVar5 = *(long *)(param_1 + 0x28);
        }
        puVar13 = (undefined *)(lVar5 - lVar12);
        (**(code **)(*plVar8 + 8))(plVar8,lVar12,puVar13);
      }
      else {
        lVar6 = *(long *)(param_1 + 8);
        FUN_1092a4848(lVar6,*(long *)(param_1 + 0x10) - lVar6);
        lVar5 = param_1 + 0x88;
        plVar8 = &lStack_98;
        lStack_98 = lVar6;
        FUN_1092a7428(lVar5,plVar8);
        if (lVar5 == 0) {
          uStack_88 = &lStack_98;
          lVar5 = param_1 + 0x88;
          plVar8 = &lStack_98;
          param_4 = &uStack_88;
          param_5 = &uStack_89;
          puVar13 = &UNK_10dd5b8f9;
          FUN_1092a74c8(lVar5,plVar8,&UNK_10dd5b8f9,param_4,param_5);
          *(int *)(lVar5 + 0x18) = (int)uVar18;
          goto LAB_1092a80b8;
        }
        uVar3 = *(uint *)(lVar5 + 0x18);
        lVar5 = *(long *)(param_1 + 0x50) + (ulong)uVar3 * 0x28;
        uVar15 = *(undefined8 *)(lVar5 + 0x18);
        *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(lVar5 + 0x20);
        *(undefined8 *)(lVar1 + 0x18) = uVar15;
        if (uVar3 == 0xffffffff) goto LAB_1092a80b8;
      }
LAB_1092a824c:
      uVar18 = uVar18 + 1;
      lVar12 = *(long *)(param_1 + 0x50);
      lVar17 = lVar17 + 0x28;
    } while (uVar18 < (ulong)((*(long *)(param_1 + 0x58) - lVar12 >> 3) * -0x3333333333333333));
  }
  uStack_88 = (long *)0x2;
  plVar8 = *(long **)(param_1 + 0x68);
  (**(code **)(*plVar8 + 0x18))();
  (**(code **)(**(long **)(param_1 + 0x68) + 8))(*(long **)(param_1 + 0x68),&uStack_88,8);
  lVar17 = *(long *)(param_1 + 0x58);
  for (lVar12 = *(long *)(param_1 + 0x50); lVar12 != lVar17; lVar12 = lVar12 + 0x28) {
    FUN_1092a47d0(*(undefined8 *)(param_1 + 0x68),lVar12);
    (**(code **)(**(long **)(param_1 + 0x68) + 8))(*(long **)(param_1 + 0x68),lVar12 + 0x1c,4);
    (**(code **)(**(long **)(param_1 + 0x68) + 8))(*(long **)(param_1 + 0x68),lVar12 + 0x20,4);
    (**(code **)(**(long **)(param_1 + 0x68) + 8))(*(long **)(param_1 + 0x68),lVar12 + 0x18,4);
    (**(code **)(**(long **)(param_1 + 0x68) + 8))(*(long **)(param_1 + 0x68),lVar12 + 0x24,4);
  }
  plVar9 = *(long **)(param_1 + 0x68);
  (**(code **)(*plVar9 + 0x18))();
  uStack_88 = (long *)CONCAT44(((int)plVar9 - (int)plVar8) + -8,(undefined4)uStack_88);
  (**(code **)(**(long **)(param_1 + 0x68) + 0x20))(*(long **)(param_1 + 0x68),plVar8,0);
  (**(code **)(**(long **)(param_1 + 0x68) + 8))(*(long **)(param_1 + 0x68),&uStack_88,8);
  (**(code **)(**(long **)(param_1 + 0x68) + 0x20))(*(long **)(param_1 + 0x68),plVar9,0);
  uStack_cc = CONCAT44(1,(undefined4)uStack_cc);
  lVar17 = *(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x38);
  puVar10 = *(undefined8 **)(param_1 + 0xb8);
  (**(code **)*puVar10)(puVar10,*(long *)(param_1 + 0x38),lVar17,param_1 + 0x20,0);
  uStack_88 = (long *)CONCAT44(*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x20),1);
  (**(code **)(**(long **)(param_1 + 0x70) + 0x20))(*(long **)(param_1 + 0x70),0,0);
  (**(code **)(**(long **)(param_1 + 0x70) + 8))(*(long **)(param_1 + 0x70),&uStack_88,8);
  puVar7 = puStack_e0;
  lVar12 = *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20);
  if (lVar12 != 0) {
    (**(code **)(**(long **)(param_1 + 0x70) + 8))
              (*(long **)(param_1 + 0x70),*(long *)(param_1 + 0x20),lVar12);
  }
  uStack_c4 = CONCAT44((int)lVar17,(undefined4)uStack_c4);
  uStack_bc = CONCAT44(uStack_bc._4_4_,(int)puVar10);
  plVar8 = *(long **)(param_1 + 0x68);
  (**(code **)(*plVar8 + 0x18))();
  uStack_cc = CONCAT44(uStack_cc._4_4_,(int)plVar8);
  (**(code **)(**(long **)(param_1 + 0x68) + 0x20))(*(long **)(param_1 + 0x68),0,0);
  (**(code **)(**(long **)(param_1 + 0x68) + 8))(*(long **)(param_1 + 0x68),&uStack_d8,0x40);
  uVar15 = *puVar7;
  puVar7[1] = uVar15;
  plVar8 = *(long **)(param_1 + 0x68);
  (**(code **)(*plVar8 + 0x28))();
  plVar9 = *(long **)(param_1 + 0x68);
  (**(code **)(*plVar9 + 0x28))();
  plVar11 = *(long **)(param_1 + 0x68);
  (**(code **)(*plVar11 + 0x10))();
  FUN_1092a6ef8(puVar7,uVar15,plVar8,(long)plVar9 + (long)plVar11,
                ((long)plVar9 + (long)plVar11) - (long)plVar8);
  uVar15 = puVar7[1];
  plVar8 = *(long **)(param_1 + 0x70);
  (**(code **)(*plVar8 + 0x28))();
  plVar9 = *(long **)(param_1 + 0x70);
  (**(code **)(*plVar9 + 0x28))();
  plVar11 = *(long **)(param_1 + 0x70);
  (**(code **)(*plVar11 + 0x10))();
  FUN_1092a6ef8(puVar7,uVar15,plVar8,(long)plVar9 + (long)plVar11,
                ((long)plVar9 + (long)plVar11) - (long)plVar8);
  plVar8 = *(long **)(param_1 + 0x78);
  (**(code **)(*plVar8 + 0x10))();
  if (plVar8 != (long *)0x0) {
    uStack_88 = (long *)CONCAT44(uStack_88._4_4_,3);
    plVar8 = *(long **)(param_1 + 0x78);
    (**(code **)(*plVar8 + 0x10))();
    uStack_88 = (long *)CONCAT44((int)plVar8 + -8,(undefined4)uStack_88);
    (**(code **)(**(long **)(param_1 + 0x78) + 0x20))(*(long **)(param_1 + 0x78),0,0);
    (**(code **)(**(long **)(param_1 + 0x78) + 8))(*(long **)(param_1 + 0x78),&uStack_88,8);
    uVar15 = puVar7[1];
    plVar8 = *(long **)(param_1 + 0x78);
    (**(code **)(*plVar8 + 0x28))();
    plVar9 = *(long **)(param_1 + 0x78);
    (**(code **)(*plVar9 + 0x28))();
    plVar11 = *(long **)(param_1 + 0x78);
    (**(code **)(*plVar11 + 0x10))();
    FUN_1092a6ef8(puVar7,uVar15,plVar8,(long)plVar9 + (long)plVar11,
                  ((long)plVar9 + (long)plVar11) - (long)plVar8);
  }
  plVar8 = *(long **)(param_1 + 0x80);
  (**(code **)(*plVar8 + 0x10))();
  if (plVar8 != (long *)0x0) {
    uStack_88 = (long *)CONCAT44(uStack_88._4_4_,4);
    plVar8 = *(long **)(param_1 + 0x80);
    (**(code **)(*plVar8 + 0x10))();
    uStack_88 = (long *)CONCAT44((int)plVar8 + -8,(undefined4)uStack_88);
    (**(code **)(**(long **)(param_1 + 0x80) + 0x20))(*(long **)(param_1 + 0x80),0,0);
    (**(code **)(**(long **)(param_1 + 0x80) + 8))(*(long **)(param_1 + 0x80),&uStack_88,8);
    uVar15 = puVar7[1];
    plVar8 = *(long **)(param_1 + 0x80);
    (**(code **)(*plVar8 + 0x28))();
    plVar9 = *(long **)(param_1 + 0x80);
    (**(code **)(*plVar9 + 0x28))();
    plVar11 = *(long **)(param_1 + 0x80);
    (**(code **)(*plVar11 + 0x10))();
    FUN_1092a6ef8(puVar7,uVar15,plVar8,(long)plVar9 + (long)plVar11,
                  ((long)plVar9 + (long)plVar11) - (long)plVar8);
  }
  return;
}



/* Entry: 1092a86b4; end: 1092a87c3;  */

void FUN_1092a86b4(long param_1,long param_2,long param_3,long *param_4,undefined8 param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  FUN_1092a7e24();
  plVar1 = (long *)(param_1 + 0x50);
  if (plVar1 != param_4) {
    FUN_1092a8954(plVar1,*param_4,param_4[1],(param_4[1] - *param_4 >> 3) * -0x3333333333333333);
  }
  lStack_58 = 0;
  lStack_50 = 0;
  uStack_48 = 0;
  FUN_1092a730c(&lStack_58,param_2,param_2 + param_3,param_3);
  puVar2 = *(undefined8 **)(param_1 + 200);
  for (puVar3 = *(undefined8 **)(param_1 + 0xc0); puVar3 != puVar2; puVar3 = puVar3 + 1) {
    (**(code **)(*(long *)*puVar3 + 8))((long *)*puVar3,plVar1,&lStack_58);
  }
  (**(code **)(**(long **)(param_1 + 0xb0) + 8))(*(long **)(param_1 + 0xb0),plVar1,&lStack_58);
  FUN_1092a7f30(param_1,&lStack_58,param_5);
  if (lStack_58 != 0) {
    lStack_50 = lStack_58;
    __ZdlPv();
  }
  return;
}



/* Entry: 1092a87c4; end: 1092a87f3;  */

void FUN_1092a87c4(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  *param_2 = 0;
  plVar1 = *(long **)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = uVar2;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001092a87e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))();
    return;
  }
  return;
}



/* Entry: 1092a87f4; end: 1092a8953;  */

void FUN_1092a87f4(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 < (undefined8 *)param_1[2]) {
    uVar5 = *param_2;
    *param_2 = 0;
    puVar10 = puVar8 + 1;
    *puVar8 = uVar5;
  }
  else {
    lVar9 = (long)puVar8 - *param_1;
    uVar1 = (lVar9 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_1092a8c04();
      puVar8 = (undefined8 *)*param_1;
      plVar11 = (long *)*puVar8;
      if (plVar11 != (long *)0x0) {
        plVar12 = (long *)puVar8[1];
        plVar4 = plVar11;
        if (plVar12 != plVar11) {
          do {
            plVar12 = plVar12 + -1;
            plVar4 = (long *)*plVar12;
            *plVar12 = 0;
            if (plVar4 != (long *)0x0) {
              (**(code **)(*plVar4 + 0x18))();
            }
          } while (plVar12 != plVar11);
          plVar4 = *(long **)*param_1;
        }
        puVar8[1] = plVar11;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(plVar4);
        return;
      }
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    plVar11 = param_1;
    plStack_38 = param_1;
    FUN_1092a8c18();
    lVar2 = *param_1;
    lVar3 = param_1[1];
    puVar8 = (undefined8 *)((long)plVar11 + lVar9);
    uVar5 = *param_2;
    *param_2 = 0;
    lVar9 = (long)puVar8 - (lVar3 - lVar2);
    puVar10 = puVar8 + 1;
    *puVar8 = uVar5;
    _memcpy(lVar9,lVar2);
    lStack_58 = *param_1;
    *param_1 = lVar9;
    param_1[1] = (long)puVar10;
    lStack_40 = param_1[2];
    param_1[2] = (long)(plVar11 + uVar7);
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x0001092a8c4c(&lStack_58);
  }
  param_1[1] = (long)puVar10;
  return;
}



/* Entry: 1092a8954; end: 1092a8af3;  */

/* WARNING: Removing unreachable block (ram,0x0001092a8ab8) */

long * FUN_1092a8954(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long unaff_x23;
  long *plVar6;
  long lVar7;
  long *plStack_c0;
  long **pplStack_b8;
  long **pplStack_b0;
  undefined1 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  long *plStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  plVar5 = (long *)*param_1;
  plVar2 = param_1;
  if ((long *)((param_1[2] - (long)plVar5 >> 3) * -0x3333333333333333) < param_4) {
    plVar1 = param_1;
    plVar5 = param_2;
    plVar3 = param_3;
    plVar6 = param_4;
    func_0x0001092a5124();
    if ((long *)0x666666666666666 < param_4) {
      FUN_1092a3a7c();
      param_1[1] = unaff_x23;
      __Unwind_Resume();
      param_1[1] = 0x666666666666666;
      __Unwind_Resume();
      pcStack_48 = FUN_1092a8af4;
      ppuStack_70 = &puStack_50;
      plStack_60 = param_3;
      plStack_58 = param_1;
      puStack_50 = &stack0xfffffffffffffff0;
      if (plVar5 < (long *)0x666666666666667) {
        plVar2 = plVar1;
        FUN_1092a3a90();
        *plVar1 = (long)plVar2;
        plVar1[1] = (long)plVar2;
        plVar1[2] = (long)(plVar2 + (long)plVar5 * 5);
        return plVar2;
      }
      FUN_1092a3a7c();
      uStack_88 = 0x666666666666666;
      pcStack_68 = FUN_1092a8b3c;
      pplStack_b8 = &plStack_a0;
      pplStack_b0 = &plStack_98;
      uStack_a8 = 0;
      plStack_c0 = plVar1;
      plStack_a0 = plVar6;
      plStack_80 = param_3;
      plStack_90 = param_2;
      plStack_78 = param_1;
      for (; plStack_98 = plVar6, plVar5 != plVar3; plVar5 = plVar5 + 5) {
        if (*(char *)((long)plVar5 + 0x17) < '\0') {
          func_0x000107c3192c(plVar6,*plVar5,plVar5[1]);
        }
        else {
          lVar7 = plVar5[1];
          lVar4 = *plVar5;
          plVar6[2] = plVar5[2];
          plVar6[1] = lVar7;
          *plVar6 = lVar4;
        }
        lVar4 = plVar5[3];
        plVar6[4] = plVar5[4];
        plVar6[3] = lVar4;
        plVar6 = plStack_98 + 5;
      }
      uStack_a8 = 1;
      FUN_1092a3b8c(&plStack_c0);
      return plVar6;
    }
    lVar4 = param_1[2] - *param_1 >> 3;
    plVar5 = (long *)(lVar4 * -0x6666666666666666);
    if (plVar5 < param_4 || (long)plVar5 - (long)param_4 == 0) {
      plVar5 = param_4;
    }
    if (0x333333333333332 < (ulong)(lVar4 * -0x3333333333333333)) {
      plVar5 = (long *)0x666666666666666;
    }
    FUN_1092a8af4(param_1,plVar5);
    FUN_1092a8b3c(param_1,param_2,param_3,param_1[1]);
  }
  else {
    plVar6 = (long *)param_1[1];
    if (param_4 <= (long *)(((long)plVar6 - (long)plVar5 >> 3) * -0x3333333333333333)) {
      if (param_2 != param_3) {
        do {
          plVar2 = plVar5;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar5,param_2);
          lVar4 = param_2[3];
          plVar5[4] = param_2[4];
          plVar5[3] = lVar4;
          param_2 = param_2 + 5;
          plVar5 = plVar5 + 5;
        } while (param_2 != param_3);
        plVar6 = (long *)param_1[1];
      }
      for (; plVar6 != plVar5; plVar6 = plVar6 + -5) {
      }
      param_1[1] = (long)plVar5;
      return plVar2;
    }
    plVar1 = (long *)((long)param_2 + ((long)plVar6 - (long)plVar5));
    if (plVar6 != plVar5) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar5,param_2);
        lVar4 = param_2[3];
        plVar5[4] = param_2[4];
        plVar5[3] = lVar4;
        param_2 = param_2 + 5;
        plVar5 = plVar5 + 5;
      } while (param_2 != plVar1);
      plVar6 = (long *)param_1[1];
    }
    FUN_1092a8b3c(param_1,plVar1,param_3,plVar6);
  }
  param_1[1] = (long)plVar2;
  return plVar2;
}



/* Entry: 1092a8af4; end: 1092a8b3b;  */

long * FUN_1092a8af4(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plStack_80;
  long **pplStack_78;
  long **pplStack_70;
  undefined1 uStack_68;
  long *plStack_60;
  long *plStack_58;
  
  if (param_2 < (long *)0x666666666666667) {
    plVar1 = param_1;
    FUN_1092a3a90();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + (long)param_2 * 5);
    return plVar1;
  }
  FUN_1092a3a7c();
  pplStack_78 = &plStack_60;
  pplStack_70 = &plStack_58;
  uStack_68 = 0;
  plStack_80 = param_1;
  plStack_60 = param_4;
  for (; plStack_58 = param_4, param_2 != param_3; param_2 = param_2 + 5) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(param_4,*param_2,param_2[1]);
    }
    else {
      lVar3 = param_2[1];
      lVar2 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = lVar3;
      *param_4 = lVar2;
    }
    lVar2 = param_2[3];
    param_4[4] = param_2[4];
    param_4[3] = lVar2;
    param_4 = plStack_58 + 5;
  }
  uStack_68 = 1;
  FUN_1092a3b8c(&plStack_80);
  return param_4;
}



/* Entry: 1092a8b3c; end: 1092a8c03;  */

undefined8 *
FUN_1092a8b3c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  uStack_48 = 0;
  puStack_40 = param_4;
  uStack_60 = param_1;
  for (; puStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 5) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(param_4,*param_2,param_2[1]);
    }
    else {
      uVar2 = param_2[1];
      uVar1 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar2;
      *param_4 = uVar1;
    }
    uVar1 = param_2[3];
    param_4[4] = param_2[4];
    param_4[3] = uVar1;
    param_4 = puStack_38 + 5;
  }
  uStack_48 = 1;
  FUN_1092a3b8c(&uStack_60);
  return param_4;
}



/* Entry: 1092a8c04; end: 1092a8c17;  */

undefined1  [16] FUN_1092a8c04(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3d == 0) {
    lVar3 = param_2 << 3;
    __Znwm(lVar3);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar3;
    return auVar6;
  }
  func_0x000104c4f740();
  plVar1 = (long *)plVar2[1];
  plVar5 = (long *)plVar2[2];
  while (plVar5 != plVar1) {
    plVar5 = plVar5 + -1;
    plVar4 = (long *)*plVar5;
    plVar2[2] = (long)plVar5;
    *plVar5 = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))();
      plVar5 = (long *)plVar2[2];
    }
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = plVar2;
  return auVar7;
}



/* Entry: 1092a8c18; end: 1092a8ca7;  */

undefined1  [16] FUN_1092a8c18(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000104c4f740();
  plVar1 = (long *)param_1[1];
  plVar4 = (long *)param_1[2];
  while (plVar4 != plVar1) {
    plVar4 = plVar4 + -1;
    plVar3 = (long *)*plVar4;
    param_1[2] = (long)plVar4;
    *plVar4 = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))();
      plVar4 = (long *)param_1[2];
    }
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 1092a8ca8; end: 1092a8dbf;  */

undefined8 * FUN_1092a8ca8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_38;
  
  *param_1 = &PTR_FUN_110ae7fe8;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  uVar4 = param_2[1];
  uVar3 = *param_2;
  param_1[0xb] = param_2[2];
  param_1[10] = uVar4;
  param_1[9] = uVar3;
  FUN_1092a2100(&uStack_38,param_2);
  plVar1 = (long *)param_1[5];
  param_1[5] = uStack_38;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  puVar2 = (undefined8 *)0x8;
  __Znwm();
  *puVar2 = &PTR_FUN_110ae9950;
  plVar1 = (long *)param_1[4];
  param_1[4] = puVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  return param_1;
}



/* Entry: 1092a8dc0; end: 1092a8e43;  */

undefined8 * FUN_1092a8dc0(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110ae7fe8;
  puStack_28 = param_1 + 6;
  func_0x0001092a88d8(&puStack_28);
  plVar1 = (long *)param_1[5];
  param_1[5] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  plVar1 = (long *)param_1[4];
  param_1[4] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  puStack_28 = param_1 + 1;
  FUN_1092a50e4(&puStack_28);
  return param_1;
}



/* Entry: 1092a8e44; end: 1092a8e47;  */

undefined8 * FUN_1092a8e44(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110ae7fe8;
  puStack_28 = param_1 + 6;
  func_0x0001092a88d8(&puStack_28);
  plVar1 = (long *)param_1[5];
  param_1[5] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  plVar1 = (long *)param_1[4];
  param_1[4] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  puStack_28 = param_1 + 1;
  FUN_1092a50e4(&puStack_28);
  return param_1;
}



/* Entry: 1092a8e48; end: 1092a8e5b;  */

void FUN_1092a8e48(void)

{
  FUN_1092a8dc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092a8e5c; end: 1092a907f;  */

void FUN_1092a8e5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  undefined **ppuVar2;
  undefined8 ****ppppuVar3;
  undefined8 ***pppuVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined8 ***pppuVar7;
  long *plVar8;
  code *pcVar9;
  int iVar10;
  undefined8 ****ppppuVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  int iVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 ****ppppuVar21;
  long lVar22;
  uint uVar23;
  long lVar24;
  int *piVar25;
  long lVar26;
  long *plStack_c78;
  undefined8 ***pppuStack_c70;
  undefined8 ***pppuStack_c68;
  undefined8 uStack_c60;
  undefined8 ***pppuStack_c50;
  undefined8 ***pppuStack_c48;
  undefined8 ***pppuStack_c40;
  long alStack_c38 [3];
  undefined1 auStack_c20 [24];
  ulong uStack_c08;
  int iStack_c00;
  ulong uStack_bf0;
  int iStack_be8;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined **ppuStack_bc0;
  undefined **ppuStack_bb8;
  undefined1 auStack_bb0 [56];
  undefined8 uStack_b78;
  char cStack_b61;
  undefined **appuStack_b50 [300];
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1c8;
  undefined8 *apuStack_148 [2];
  char cStack_131;
  long *plStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1092a4784(param_1 + 8);
  lStack_118 = 0;
  lStack_110 = 0;
  uStack_108 = 0;
  plStack_130 = (long *)0x0;
  plStack_128 = (long *)0x0;
  uStack_120 = 0;
  FUN_1092b22a8(&uStack_c0,param_2);
  func_0x0001092a5124(param_1 + 8);
  *(undefined8 *)(param_1 + 0x10) = uStack_b8;
  *(undefined8 *)(param_1 + 8) = uStack_c0;
  *(undefined8 *)(param_1 + 0x18) = uStack_b0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_c0 = 0;
  apuStack_148[0] = &uStack_c0;
  func_0x0001092a50e4(apuStack_148);
  puVar5 = *(undefined8 **)(param_1 + 0x38);
  for (puVar17 = *(undefined8 **)(param_1 + 0x30); puVar17 != puVar5; puVar17 = puVar17 + 1) {
    (*(code *)**(undefined8 **)*puVar17)((undefined8 *)*puVar17,param_2,param_1 + 8,&lStack_118);
  }
  (**(code **)**(undefined8 **)(param_1 + 0x20))
            (*(undefined8 **)(param_1 + 0x20),param_2,param_1 + 8,&lStack_118);
  FUN_1092a9080(param_1,&lStack_118,&plStack_130);
  func_0x000107c31940(apuStack_148,&UNK_10f5173d2);
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puStack_100 = &UNK_1069b161c;
  ppuStack_f8 = &PTR_DAT_110950c70;
  FUN_1092b17dc(&uStack_c0,param_3,apuStack_148,&puStack_100);
  (*(code *)*ppuStack_f8)(&ppuStack_f8);
  if (cStack_131 < '\0') {
    __ZdlPv(apuStack_148[0]);
  }
  plVar15 = (long *)((long)plStack_128 - (long)plStack_130);
  plVar14 = plStack_130;
  FUN_1092b1f3c(&uStack_c0);
  FUN_1092b2248(&uStack_c0);
  if (plStack_130 != (long *)0x0) {
    plStack_128 = plStack_130;
    __ZdlPv();
  }
  lVar22 = lStack_118;
  if (lStack_118 != 0) {
    lStack_110 = lStack_118;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  FUN_1092b2248(&uStack_c0);
  if (plStack_130 != (long *)0x0) {
    plStack_128 = plStack_130;
    __ZdlPv();
  }
  if (lStack_118 != 0) {
    lStack_110 = lStack_118;
    __ZdlPv();
  }
  __Unwind_Resume();
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  (**(code **)(**(long **)(lVar22 + 0x20) + 0x18))
            (auStack_c20,*(long **)(lVar22 + 0x20),lVar22 + 0x48,lVar22 + 8,plVar14);
  FUN_1092a997c(alStack_c38,(long)iStack_be8);
  uStack_bd0 = (undefined **)((ulong)uStack_bd0._4_4_ << 0x20);
  if (0 < iStack_c00) {
    iVar16 = 0;
    do {
      puVar1 = &uStack_c08;
      if ((uStack_c08 & 1) != 0) {
        puVar1 = (ulong *)(uStack_c08 + (long)iVar16 * 8 + 7);
      }
      ppuVar2 = &PTR_PTR_1132cea20;
      if (*(undefined ***)(*puVar1 + 0x20) != (undefined **)0x0) {
        ppuVar2 = *(undefined ***)(*puVar1 + 0x20);
      }
      FUN_10923b3a0(alStack_c38[0] + (ulong)*(uint *)(ppuVar2 + 4) * 0x18,&uStack_bd0);
      iVar16 = (int)uStack_bd0 + 1;
      uStack_bd0 = (undefined **)CONCAT44(uStack_bd0._4_4_,iVar16);
    } while (iVar16 < iStack_c00);
  }
  iVar16 = iStack_be8;
  lVar24 = (long)iStack_be8;
  pppuStack_c48 = (undefined8 ****)0x0;
  pppuStack_c40 = (undefined8 ****)0x0;
  pppuStack_c50 = (undefined8 ****)0x0;
  if (iStack_be8 == 0) {
LAB_1092a94b0:
    lVar24 = 0;
  }
  else {
    if (iStack_be8 < 0) goto LAB_1092a96b8;
    ppppuVar11 = &pppuStack_c50;
    FUN_1092a9b64();
    pppuStack_c40 = ppppuVar11 + lVar24 * 3;
    pppuStack_c50 = ppppuVar11;
    _bzero();
    pppuStack_c48 = ppppuVar11 + (((long)iVar16 * 0x18 - 0x18U) / 0x18) * 3 + 3;
    if (iStack_be8 < 1) goto LAB_1092a94b0;
    lVar26 = 0;
    lVar24 = 0;
    do {
      puVar1 = &uStack_bf0;
      if ((uStack_bf0 & 1) != 0) {
        puVar1 = (ulong *)(uStack_bf0 + lVar26 * 8 + 7);
      }
      uVar20 = *puVar1;
      *(uint *)(uVar20 + 0x10) = *(uint *)(uVar20 + 0x10) | 1;
      uVar12 = *(ulong *)(uVar20 + 0x18);
      if (uVar12 == 0) {
        uVar12 = *(ulong *)(uVar20 + 8);
        if ((uVar12 & 1) != 0) {
          uVar12 = *(ulong *)(uVar12 & 0xfffffffffffffffe);
        }
        func_0x0001092a1ea4();
        *(ulong *)(uVar20 + 0x18) = uVar12;
      }
      *(long *)(uVar12 + 0x18) = lVar24;
      *(uint *)(uVar12 + 0x10) = *(uint *)(uVar12 + 0x10) | 1;
      FUN_109246310(&pppuStack_c70,*(undefined8 *)(uVar20 + 0x28));
      puVar17 = (undefined8 *)(alStack_c38[0] + lVar26 * 0x18);
      piVar6 = (int *)puVar17[1];
      piVar25 = (int *)*puVar17;
      while (piVar25 != piVar6) {
        puVar1 = &uStack_c08;
        if ((uStack_c08 & 1) != 0) {
          puVar1 = (ulong *)(uStack_c08 + (long)*piVar25 * 8 + 7);
        }
        ppuVar2 = &PTR_PTR_1132cea20;
        if (*(undefined ***)(*puVar1 + 0x20) != (undefined **)0x0) {
          ppuVar2 = *(undefined ***)(*puVar1 + 0x20);
        }
        lVar18 = *(long *)(lVar22 + 8) + (long)*piVar25 * 0x28;
        _memcpy((undefined *)((long)pppuStack_c70 + (long)ppuVar2[3]),
                *plVar14 + (ulong)*(uint *)(lVar18 + 0x18),*(undefined4 *)(lVar18 + 0x20));
        piVar25 = piVar25 + 1;
      }
      iVar16 = *(int *)(uVar20 + 0x30);
      iVar10 = *(int *)(lVar22 + 0x4c);
      FUN_1092c3b80();
      if (iVar16 == iVar10) {
        puVar17 = *(undefined8 **)(lVar22 + 0x28);
        (**(code **)*puVar17)
                  (puVar17,pppuStack_c70,(long)pppuStack_c68 - (long)pppuStack_c70,
                   pppuStack_c50 + lVar26 * 3,0);
        ppppuVar11 = (undefined8 ****)(pppuStack_c50 + lVar26 * 3);
        uVar12 = (ulong)(int)puVar17;
        uVar19 = (long)ppppuVar11[1] - (long)*ppppuVar11;
        if (uVar12 < uVar19 || uVar12 - uVar19 == 0) {
          if (uVar12 < uVar19) {
            ppppuVar11[1] = (undefined8 ***)((long)*ppppuVar11 + uVar12);
          }
        }
        else {
          func_0x000107c27d58(ppppuVar11,uVar12 - uVar19);
        }
      }
      else {
        iVar16 = *(int *)(uVar20 + 0x30);
        if (iVar16 == 0xf) {
          ppppuVar11 = (undefined8 ****)(pppuStack_c50 + lVar26 * 3);
          if (*ppppuVar11 != (undefined8 ***)0x0) {
            ppppuVar11[1] = *ppppuVar11;
            __ZdlPv();
            *ppppuVar11 = (undefined8 ***)0x0;
            ppppuVar11[1] = (undefined8 ***)0x0;
            ppppuVar11[2] = (undefined8 ***)0x0;
          }
          ppppuVar11[1] = pppuStack_c68;
          *ppppuVar11 = pppuStack_c70;
          ppppuVar11[2] = uStack_c60;
          pppuStack_c70 = (undefined8 ****)0x0;
          pppuStack_c68 = (undefined8 ****)0x0;
          uStack_c60 = (undefined8 ***)0x0;
        }
        else {
          uStack_bc8 = *(undefined8 *)(lVar22 + 0x50);
          uStack_bd0 = *(undefined ***)(lVar22 + 0x48);
          ppuStack_bc0 = *(undefined ***)(lVar22 + 0x58);
          func_0x0001092c3bac();
          uStack_bd0 = (undefined **)CONCAT44(iVar16,(int)uStack_bd0);
          FUN_1092a2100(&plStack_c78,&uStack_bd0);
          plVar8 = plStack_c78;
          plVar13 = plStack_c78;
          (**(code **)*plStack_c78)
                    (plStack_c78,pppuStack_c70,(long)pppuStack_c68 - (long)pppuStack_c70,
                     pppuStack_c50 + lVar26 * 3,0);
          ppppuVar11 = (undefined8 ****)(pppuStack_c50 + lVar26 * 3);
          uVar12 = (ulong)(int)plVar13;
          uVar19 = (long)ppppuVar11[1] - (long)*ppppuVar11;
          if (uVar12 < uVar19 || uVar12 - uVar19 == 0) {
            if (uVar12 < uVar19) {
              ppppuVar11[1] = (undefined8 ***)((long)*ppppuVar11 + uVar12);
            }
          }
          else {
            func_0x000107c27d58(ppppuVar11,uVar12 - uVar19);
          }
          (**(code **)(*plVar8 + 0x28))(plVar8);
        }
      }
      if (*(char *)(uVar20 + 0x34) == '\x01') {
        pppuVar4 = (undefined8 ***)pppuStack_c50[lVar26 * 3];
        pppuVar7 = (undefined8 ***)(pppuStack_c50 + lVar26 * 3)[1];
        FUN_1092c37f8(&uStack_bd0,0);
        lVar18 = (long)pppuVar7 - (long)pppuVar4;
        FUN_1092c38a0(&uStack_bd0,pppuVar4,lVar18,pppuVar4,lVar18);
      }
      lVar18 = (long)(pppuStack_c50 + lVar26 * 3)[1] - (long)pppuStack_c50[lVar26 * 3];
      *(long *)(uVar20 + 0x20) = lVar18;
      *(uint *)(uVar20 + 0x10) = *(uint *)(uVar20 + 0x10) | 2;
      if ((undefined8 ****)pppuStack_c70 != (undefined8 ****)0x0) {
        pppuStack_c68 = pppuStack_c70;
        __ZdlPv();
      }
      lVar24 = lVar18 + lVar24;
      lVar26 = lVar26 + 1;
    } while (lVar26 < iStack_be8);
  }
  FUN_1092a988c(&uStack_bd0);
  func_0x00010b4d16a0(auStack_c20,&ppuStack_bc0);
  FUN_10926dc5c(&pppuStack_c70,&ppuStack_bb8,&plStack_c78);
  ppppuVar11 = (undefined8 ****)pppuStack_c68;
  if (-1 < (long)uStack_c60) {
    ppppuVar11 = (undefined8 ****)((ulong)uStack_c60 >> 0x38);
  }
  ppppuVar21 = ppppuVar11 + 6;
  uVar12 = (long)ppppuVar21 + lVar24;
  puVar17 = (undefined8 *)*plVar15;
  uVar20 = plVar15[1] - (long)puVar17;
  if (uVar12 < uVar20 || uVar12 - uVar20 == 0) {
    if (uVar12 < uVar20) {
      plVar15[1] = (long)puVar17 + uVar12;
    }
  }
  else {
    func_0x000107c27d58(plVar15,uVar12 - uVar20);
    puVar17 = (undefined8 *)*plVar15;
  }
  *puVar17 = 0x300435a4c;
  puVar17[1] = ppppuVar11;
  puVar17[3] = uStack_1e8;
  puVar17[2] = uStack_1f0;
  puVar17[5] = uStack_1d8;
  puVar17[4] = uStack_1e0;
  uVar23 = (uint)(char)uStack_c60._7_1_;
  ppppuVar3 = (undefined8 ****)pppuStack_c70;
  if (-1 < (long)uStack_c60) {
    ppppuVar3 = &pppuStack_c70;
  }
  _memcpy(*plVar15 + 0x30,ppppuVar3,ppppuVar11);
  if (pppuStack_c48 != pppuStack_c50) {
    lVar22 = 0;
    uVar12 = 0;
    do {
      lVar24 = *(long *)((long)pppuStack_c50 + lVar22);
      _memcpy(*plVar15 + (long)ppppuVar21,lVar24,
              ((long *)((long)pppuStack_c50 + lVar22))[1] - lVar24);
      ppppuVar21 = (undefined8 ****)
                   ((long)ppppuVar21 +
                   (((long *)((long)pppuStack_c50 + lVar22))[1] -
                   *(long *)((long)pppuStack_c50 + lVar22)));
      uVar12 = uVar12 + 1;
      uVar20 = ((long)pppuStack_c48 - (long)pppuStack_c50 >> 3) * -0x5555555555555555;
      lVar22 = lVar22 + 0x18;
    } while (uVar12 <= uVar20 && uVar20 - uVar12 != 0);
    uVar23 = (uint)uStack_c60._7_1_;
  }
  if ((uVar23 >> 7 & 1) != 0) {
    __ZdlPv(pppuStack_c70);
  }
  uStack_bd0 = &PTR_SUB_1108a5a38;
  ppuStack_bc0 = &PTR_DAT_1108a5a60;
  appuStack_b50[0] = &PTR_DAT_1108a5a88;
  ppuStack_bb8 = &PTR_DAT_11088d7b0;
  if (cStack_b61 < '\0') {
    __ZdlPv(uStack_b78);
  }
  ppuStack_bb8 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_bb0);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(&uStack_bd0,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_b50);
  func_0x0001092a9ba8(&pppuStack_c50);
  uStack_bd0 = (undefined **)alStack_c38;
  func_0x0001092a9abc(&uStack_bd0);
  FUN_1092a1920(auStack_c20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
LAB_1092a96b8:
  FUN_1092a9b50();
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x1092a96c0);
  (*pcVar9)();
}



/* Entry: 1092a9080; end: 1092a9777;  */

void FUN_1092a9080(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  undefined **ppuVar2;
  undefined8 ****ppppuVar3;
  undefined8 ***pppuVar4;
  int *piVar5;
  undefined8 ***pppuVar6;
  long *plVar7;
  code *pcVar8;
  int iVar9;
  undefined8 ****ppppuVar10;
  ulong uVar11;
  long *plVar12;
  int iVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 ****ppppuVar18;
  uint uVar19;
  long lVar20;
  int *piVar21;
  long lVar22;
  long *plStack_b28;
  undefined8 ***pppuStack_b20;
  undefined8 ***pppuStack_b18;
  undefined8 uStack_b10;
  undefined8 ***pppuStack_b00;
  undefined8 ***pppuStack_af8;
  undefined8 ***pppuStack_af0;
  long alStack_ae8 [3];
  undefined1 auStack_ad0 [24];
  ulong uStack_ab8;
  int iStack_ab0;
  ulong uStack_aa0;
  int iStack_a98;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined **ppuStack_a70;
  undefined **ppuStack_a68;
  undefined1 auStack_a60 [56];
  undefined8 uStack_a28;
  char cStack_a11;
  undefined **appuStack_a00 [300];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
            (auStack_ad0,*(long **)(param_1 + 0x20),param_1 + 0x48,param_1 + 8,param_2);
  FUN_1092a997c(alStack_ae8,(long)iStack_a98);
  uStack_a80 = (undefined **)((ulong)uStack_a80._4_4_ << 0x20);
  if (0 < iStack_ab0) {
    iVar13 = 0;
    do {
      puVar1 = &uStack_ab8;
      if ((uStack_ab8 & 1) != 0) {
        puVar1 = (ulong *)(uStack_ab8 + (long)iVar13 * 8 + 7);
      }
      ppuVar2 = &PTR_PTR_1132cea20;
      if (*(undefined ***)(*puVar1 + 0x20) != (undefined **)0x0) {
        ppuVar2 = *(undefined ***)(*puVar1 + 0x20);
      }
      FUN_10923b3a0(alStack_ae8[0] + (ulong)*(uint *)(ppuVar2 + 4) * 0x18,&uStack_a80);
      iVar13 = (int)uStack_a80 + 1;
      uStack_a80 = (undefined **)CONCAT44(uStack_a80._4_4_,iVar13);
    } while (iVar13 < iStack_ab0);
  }
  iVar13 = iStack_a98;
  lVar20 = (long)iStack_a98;
  pppuStack_af8 = (undefined8 ****)0x0;
  pppuStack_af0 = (undefined8 ****)0x0;
  pppuStack_b00 = (undefined8 ****)0x0;
  if (iStack_a98 == 0) {
LAB_1092a94b0:
    lVar20 = 0;
  }
  else {
    if (iStack_a98 < 0) goto LAB_1092a96b8;
    ppppuVar10 = &pppuStack_b00;
    FUN_1092a9b64();
    pppuStack_af0 = ppppuVar10 + lVar20 * 3;
    pppuStack_b00 = ppppuVar10;
    _bzero();
    pppuStack_af8 = ppppuVar10 + (((long)iVar13 * 0x18 - 0x18U) / 0x18) * 3 + 3;
    if (iStack_a98 < 1) goto LAB_1092a94b0;
    lVar22 = 0;
    lVar20 = 0;
    do {
      puVar1 = &uStack_aa0;
      if ((uStack_aa0 & 1) != 0) {
        puVar1 = (ulong *)(uStack_aa0 + lVar22 * 8 + 7);
      }
      uVar17 = *puVar1;
      *(uint *)(uVar17 + 0x10) = *(uint *)(uVar17 + 0x10) | 1;
      uVar11 = *(ulong *)(uVar17 + 0x18);
      if (uVar11 == 0) {
        uVar11 = *(ulong *)(uVar17 + 8);
        if ((uVar11 & 1) != 0) {
          uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
        }
        func_0x0001092a1ea4();
        *(ulong *)(uVar17 + 0x18) = uVar11;
      }
      *(long *)(uVar11 + 0x18) = lVar20;
      *(uint *)(uVar11 + 0x10) = *(uint *)(uVar11 + 0x10) | 1;
      FUN_109246310(&pppuStack_b20,*(undefined8 *)(uVar17 + 0x28));
      puVar14 = (undefined8 *)(alStack_ae8[0] + lVar22 * 0x18);
      piVar5 = (int *)puVar14[1];
      piVar21 = (int *)*puVar14;
      while (piVar21 != piVar5) {
        puVar1 = &uStack_ab8;
        if ((uStack_ab8 & 1) != 0) {
          puVar1 = (ulong *)(uStack_ab8 + (long)*piVar21 * 8 + 7);
        }
        ppuVar2 = &PTR_PTR_1132cea20;
        if (*(undefined ***)(*puVar1 + 0x20) != (undefined **)0x0) {
          ppuVar2 = *(undefined ***)(*puVar1 + 0x20);
        }
        lVar15 = *(long *)(param_1 + 8) + (long)*piVar21 * 0x28;
        _memcpy((undefined *)((long)pppuStack_b20 + (long)ppuVar2[3]),
                *param_2 + (ulong)*(uint *)(lVar15 + 0x18),*(undefined4 *)(lVar15 + 0x20));
        piVar21 = piVar21 + 1;
      }
      iVar13 = *(int *)(uVar17 + 0x30);
      iVar9 = *(int *)(param_1 + 0x4c);
      FUN_1092c3b80();
      if (iVar13 == iVar9) {
        puVar14 = *(undefined8 **)(param_1 + 0x28);
        (**(code **)*puVar14)
                  (puVar14,pppuStack_b20,(long)pppuStack_b18 - (long)pppuStack_b20,
                   pppuStack_b00 + lVar22 * 3,0);
        ppppuVar10 = (undefined8 ****)(pppuStack_b00 + lVar22 * 3);
        uVar11 = (ulong)(int)puVar14;
        uVar16 = (long)ppppuVar10[1] - (long)*ppppuVar10;
        if (uVar11 < uVar16 || uVar11 - uVar16 == 0) {
          if (uVar11 < uVar16) {
            ppppuVar10[1] = (undefined8 ***)((long)*ppppuVar10 + uVar11);
          }
        }
        else {
          func_0x000107c27d58(ppppuVar10,uVar11 - uVar16);
        }
      }
      else {
        iVar13 = *(int *)(uVar17 + 0x30);
        if (iVar13 == 0xf) {
          ppppuVar10 = (undefined8 ****)(pppuStack_b00 + lVar22 * 3);
          if (*ppppuVar10 != (undefined8 ***)0x0) {
            ppppuVar10[1] = *ppppuVar10;
            __ZdlPv();
            *ppppuVar10 = (undefined8 ***)0x0;
            ppppuVar10[1] = (undefined8 ***)0x0;
            ppppuVar10[2] = (undefined8 ***)0x0;
          }
          ppppuVar10[1] = pppuStack_b18;
          *ppppuVar10 = pppuStack_b20;
          ppppuVar10[2] = uStack_b10;
          pppuStack_b20 = (undefined8 ****)0x0;
          pppuStack_b18 = (undefined8 ****)0x0;
          uStack_b10 = (undefined8 ***)0x0;
        }
        else {
          uStack_a78 = *(undefined8 *)(param_1 + 0x50);
          uStack_a80 = *(undefined ***)(param_1 + 0x48);
          ppuStack_a70 = *(undefined ***)(param_1 + 0x58);
          func_0x0001092c3bac();
          uStack_a80 = (undefined **)CONCAT44(iVar13,(int)uStack_a80);
          FUN_1092a2100(&plStack_b28,&uStack_a80);
          plVar7 = plStack_b28;
          plVar12 = plStack_b28;
          (**(code **)*plStack_b28)
                    (plStack_b28,pppuStack_b20,(long)pppuStack_b18 - (long)pppuStack_b20,
                     pppuStack_b00 + lVar22 * 3,0);
          ppppuVar10 = (undefined8 ****)(pppuStack_b00 + lVar22 * 3);
          uVar11 = (ulong)(int)plVar12;
          uVar16 = (long)ppppuVar10[1] - (long)*ppppuVar10;
          if (uVar11 < uVar16 || uVar11 - uVar16 == 0) {
            if (uVar11 < uVar16) {
              ppppuVar10[1] = (undefined8 ***)((long)*ppppuVar10 + uVar11);
            }
          }
          else {
            func_0x000107c27d58(ppppuVar10,uVar11 - uVar16);
          }
          (**(code **)(*plVar7 + 0x28))(plVar7);
        }
      }
      if (*(char *)(uVar17 + 0x34) == '\x01') {
        pppuVar4 = (undefined8 ***)pppuStack_b00[lVar22 * 3];
        pppuVar6 = (undefined8 ***)(pppuStack_b00 + lVar22 * 3)[1];
        FUN_1092c37f8(&uStack_a80,0);
        lVar15 = (long)pppuVar6 - (long)pppuVar4;
        FUN_1092c38a0(&uStack_a80,pppuVar4,lVar15,pppuVar4,lVar15);
      }
      lVar15 = (long)(pppuStack_b00 + lVar22 * 3)[1] - (long)pppuStack_b00[lVar22 * 3];
      *(long *)(uVar17 + 0x20) = lVar15;
      *(uint *)(uVar17 + 0x10) = *(uint *)(uVar17 + 0x10) | 2;
      if ((undefined8 ****)pppuStack_b20 != (undefined8 ****)0x0) {
        pppuStack_b18 = pppuStack_b20;
        __ZdlPv();
      }
      lVar20 = lVar15 + lVar20;
      lVar22 = lVar22 + 1;
    } while (lVar22 < iStack_a98);
  }
  FUN_1092a988c(&uStack_a80);
  func_0x00010b4d16a0(auStack_ad0,&ppuStack_a70);
  FUN_10926dc5c(&pppuStack_b20,&ppuStack_a68,&plStack_b28);
  ppppuVar10 = (undefined8 ****)pppuStack_b18;
  if (-1 < (long)uStack_b10) {
    ppppuVar10 = (undefined8 ****)((ulong)uStack_b10 >> 0x38);
  }
  ppppuVar18 = ppppuVar10 + 6;
  uVar11 = (long)ppppuVar18 + lVar20;
  puVar14 = (undefined8 *)*param_3;
  uVar17 = param_3[1] - (long)puVar14;
  if (uVar11 < uVar17 || uVar11 - uVar17 == 0) {
    if (uVar11 < uVar17) {
      param_3[1] = (long)puVar14 + uVar11;
    }
  }
  else {
    func_0x000107c27d58(param_3,uVar11 - uVar17);
    puVar14 = (undefined8 *)*param_3;
  }
  *puVar14 = 0x300435a4c;
  puVar14[1] = ppppuVar10;
  puVar14[3] = uStack_98;
  puVar14[2] = uStack_a0;
  puVar14[5] = uStack_88;
  puVar14[4] = uStack_90;
  uVar19 = (uint)(char)uStack_b10._7_1_;
  ppppuVar3 = (undefined8 ****)pppuStack_b20;
  if (-1 < (long)uStack_b10) {
    ppppuVar3 = &pppuStack_b20;
  }
  _memcpy(*param_3 + 0x30,ppppuVar3,ppppuVar10);
  if (pppuStack_af8 != pppuStack_b00) {
    lVar20 = 0;
    uVar11 = 0;
    do {
      lVar22 = *(long *)((long)pppuStack_b00 + lVar20);
      _memcpy(*param_3 + (long)ppppuVar18,lVar22,
              ((long *)((long)pppuStack_b00 + lVar20))[1] - lVar22);
      ppppuVar18 = (undefined8 ****)
                   ((long)ppppuVar18 +
                   (((long *)((long)pppuStack_b00 + lVar20))[1] -
                   *(long *)((long)pppuStack_b00 + lVar20)));
      uVar11 = uVar11 + 1;
      uVar17 = ((long)pppuStack_af8 - (long)pppuStack_b00 >> 3) * -0x5555555555555555;
      lVar20 = lVar20 + 0x18;
    } while (uVar11 <= uVar17 && uVar17 - uVar11 != 0);
    uVar19 = (uint)uStack_b10._7_1_;
  }
  if ((uVar19 >> 7 & 1) != 0) {
    __ZdlPv(pppuStack_b20);
  }
  uStack_a80 = &PTR_SUB_1108a5a38;
  ppuStack_a70 = &PTR_DAT_1108a5a60;
  appuStack_a00[0] = &PTR_DAT_1108a5a88;
  ppuStack_a68 = &PTR_DAT_11088d7b0;
  if (cStack_a11 < '\0') {
    __ZdlPv(uStack_a28);
  }
  ppuStack_a68 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_a60);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(&uStack_a80,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_a00);
  func_0x0001092a9ba8(&pppuStack_b00);
  uStack_a80 = (undefined **)alStack_ae8;
  func_0x0001092a9abc(&uStack_a80);
  FUN_1092a1920(auStack_ad0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
LAB_1092a96b8:
  FUN_1092a9b50();
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x1092a96c0);
  (*pcVar8)();
}



/* Entry: 1092a9778; end: 1092a988b;  */

void FUN_1092a9778(long param_1,long param_2,long param_3,long *param_4,undefined8 param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  plVar1 = (long *)(param_1 + 8);
  FUN_1092a4784(plVar1);
  if (plVar1 != param_4) {
    FUN_1092a8954(plVar1,*param_4,param_4[1],(param_4[1] - *param_4 >> 3) * -0x3333333333333333);
  }
  lStack_58 = 0;
  lStack_50 = 0;
  uStack_48 = 0;
  FUN_1092a730c(&lStack_58,param_2,param_2 + param_3,param_3);
  puVar2 = *(undefined8 **)(param_1 + 0x38);
  for (puVar3 = *(undefined8 **)(param_1 + 0x30); puVar3 != puVar2; puVar3 = puVar3 + 1) {
    (**(code **)(*(long *)*puVar3 + 8))((long *)*puVar3,plVar1,&lStack_58);
  }
  (**(code **)(**(long **)(param_1 + 0x20) + 8))(*(long **)(param_1 + 0x20),plVar1,&lStack_58);
  FUN_1092a9080(param_1,&lStack_58,param_5);
  if (lStack_58 != 0) {
    lStack_50 = lStack_58;
    __ZdlPv();
  }
  return;
}



/* Entry: 1092a988c; end: 1092a994b;  */

undefined8 * FUN_1092a988c(undefined8 *param_1)

{
  param_1[0x10] = &PTR___ZTv0_n24_NSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_1108a5ba0;
  param_1[0x16] = 0;
  param_1[1] = 0;
  param_1[2] = &PTR_DAT_1108a5a60;
  *param_1 = &PTR___ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_1108a5b78;
  __ZNSt3__18ios_base4initEPv(param_1 + 0x10,param_1 + 3);
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
  *param_1 = &PTR_SUB_1108a5a38;
  param_1[0x10] = &PTR_DAT_1108a5a88;
  param_1[2] = &PTR_DAT_1108a5a60;
  FUN_10926dbbc(param_1 + 3,0x18);
  return param_1;
}



/* Entry: 1092a994c; end: 1092a997b;  */

void FUN_1092a994c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  *param_2 = 0;
  plVar1 = *(long **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001092a996c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))();
    return;
  }
  return;
}



/* Entry: 1092a997c; end: 1092a9a1b;  */

undefined8 * FUN_1092a997c(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_1092a9a1c(param_1);
    lVar2 = param_1[1];
    lVar1 = ((param_2 * 0x18 - 0x18U) / 0x18) * 0x18 + 0x18;
    _bzero(lVar2,lVar1);
    param_1[1] = lVar2 + lVar1;
  }
  return param_1;
}



/* Entry: 1092a9a1c; end: 1092a9a63;  */

void FUN_1092a9a1c(long *param_1,ulong param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    plVar1 = param_1;
    FUN_1092a9a78();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 3);
    return;
  }
  FUN_1092a9a64();
  puVar2 = (undefined8 *)&UNK_10f5633a7;
  func_0x000104c4f6cc();
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    __Znwm(param_2 * 0x18);
    return;
  }
  func_0x000104c4f740();
  if (*(long *)*puVar2 != 0) {
    FUN_1092a9afc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*puVar2);
    return;
  }
  return;
}



/* Entry: 1092a9a64; end: 1092a9a77;  */

void FUN_1092a9a64(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&UNK_10f5633a7;
  func_0x000104c4f6cc();
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    __Znwm(param_2 * 0x18);
    return;
  }
  func_0x000104c4f740();
  if (*(long *)*puVar1 != 0) {
    FUN_1092a9afc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*puVar1);
    return;
  }
  return;
}



/* Entry: 1092a9a78; end: 1092a9afb;  */

void FUN_1092a9a78(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    __Znwm(param_2 * 0x18);
    return;
  }
  func_0x000104c4f740();
  if (*(long *)*param_1 != 0) {
    FUN_1092a9afc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 1092a9afc; end: 1092a9b4f;  */

void FUN_1092a9afc(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)*param_1;
  plVar3 = (long *)param_1[1];
  while (plVar2 = plVar3, plVar2 != plVar1) {
    plVar3 = plVar2 + -3;
    if (*plVar3 != 0) {
      plVar2[-2] = *plVar3;
      __ZdlPv();
    }
  }
  param_1[1] = (long)plVar1;
  return;
}



/* Entry: 1092a9b50; end: 1092a9b63;  */

void FUN_1092a9b50(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  
  plVar1 = (long *)&UNK_10f5633a7;
  func_0x000104c4f6cc();
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    __Znwm(param_2 * 0x18);
    return;
  }
  func_0x000104c4f740();
  if (*plVar1 != 0) {
    FUN_1092a9bd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*plVar1);
    return;
  }
  return;
}



/* Entry: 1092a9b64; end: 1092a9bd7;  */

void FUN_1092a9b64(long *param_1,ulong param_2)

{
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    __Znwm(param_2 * 0x18);
    return;
  }
  func_0x000104c4f740();
  if (*param_1 != 0) {
    FUN_1092a9bd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*param_1);
    return;
  }
  return;
}



/* Entry: 1092a9bd8; end: 1092a9c2b;  */

void FUN_1092a9bd8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)*param_1;
  plVar3 = (long *)param_1[1];
  while (plVar2 = plVar3, plVar2 != plVar1) {
    plVar3 = plVar2 + -3;
    if (*plVar3 != 0) {
      plVar2[-2] = *plVar3;
      __ZdlPv();
    }
  }
  param_1[1] = (long)plVar1;
  return;
}



/* Entry: 1092a9c2c; end: 1092a9cdf;  */

ulong FUN_1092a9c2c(ulong *param_1,long param_2,long param_3,ulong param_4)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lStack_88;
  long lStack_80;
  
  iVar1 = *(int *)(param_2 + 0xc);
  if (iVar1 == 3) {
    uVar2 = 0x60;
    __Znwm();
    uVar6 = uVar2;
    FUN_1092a8ca8();
  }
  else if (iVar1 == 2) {
    uVar2 = 0xf0;
    __Znwm();
    uVar6 = uVar2;
    FUN_1092a78e0();
  }
  else {
    if (iVar1 != 1) {
      plVar3 = (long *)&UNK_10f5633ae;
      func_0x000105688514();
      __ZdlPv();
      __Unwind_Resume();
      if (param_4 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = plVar3[3] - plVar3[2];
        if (param_4 <= (ulong)(plVar3[3] - plVar3[2])) {
          uVar6 = param_4;
        }
        if (param_3 == 0) {
          FUN_1092a38dc(&lStack_88,uVar6);
          (**(code **)*plVar3)(plVar3,lStack_88,uVar6);
          if (lStack_88 != 0) {
            lStack_80 = lStack_88;
            __ZdlPv();
          }
        }
        else {
          uVar2 = uVar6;
          if (plVar3[5] != plVar3[4]) {
            uVar5 = plVar3[5] - (plVar3[7] + plVar3[4]);
            if (uVar5 <= uVar6) {
              uVar2 = uVar5;
            }
            plVar4 = plVar3;
            (**(code **)(*plVar3 + 0x30))(plVar3);
            _memcpy(param_3,plVar4,uVar2);
            param_3 = param_3 + uVar2;
            plVar3[2] = plVar3[2] + uVar2;
            (**(code **)(*plVar3 + 0x40))(plVar3,uVar2);
            uVar2 = uVar6 - uVar2;
          }
          if (uVar2 != 0) {
            (**(code **)(*plVar3 + 0x58))(plVar3,param_3,uVar2);
          }
        }
      }
      return uVar6;
    }
    uVar2 = 0xa8;
    __Znwm();
    uVar6 = uVar2;
    FUN_1092a44cc();
  }
  *param_1 = uVar2;
  return uVar6;
}



/* Entry: 1092a9ce0; end: 1092a9e1f;  */

ulong FUN_1092a9ce0(long *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lStack_58;
  long lStack_50;
  
  if (param_3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = param_1[3] - param_1[2];
    if (param_3 <= (ulong)(param_1[3] - param_1[2])) {
      uVar4 = param_3;
    }
    if (param_2 == 0) {
      FUN_1092a38dc(&lStack_58,uVar4);
      (**(code **)*param_1)(param_1,lStack_58,uVar4);
      if (lStack_58 != 0) {
        lStack_50 = lStack_58;
        __ZdlPv();
      }
    }
    else {
      uVar1 = uVar4;
      if (param_1[5] != param_1[4]) {
        uVar3 = param_1[5] - (param_1[7] + param_1[4]);
        if (uVar3 <= uVar4) {
          uVar1 = uVar3;
        }
        plVar2 = param_1;
        (**(code **)(*param_1 + 0x30))(param_1);
        _memcpy(param_2,plVar2,uVar1);
        param_2 = param_2 + uVar1;
        param_1[2] = param_1[2] + uVar1;
        (**(code **)(*param_1 + 0x40))(param_1,uVar1);
        uVar1 = uVar4 - uVar1;
      }
      if (uVar1 != 0) {
        (**(code **)(*param_1 + 0x58))(param_1,param_2,uVar1);
      }
    }
  }
  return uVar4;
}



/* Entry: 1092a9e20; end: 1092a9e2f;  */

undefined8 FUN_1092a9e20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1092a9e30; end: 1092a9efb;  */

void FUN_1092a9e30(long *param_1,long *param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_3 == 2) {
    param_1[2] = param_1[3];
    return;
  }
  if (param_3 == 1) {
    if (param_2 == (long *)0x0) {
      return;
    }
  }
  else {
    if (param_3 != 0) {
      return;
    }
    plVar1 = param_1;
    (**(code **)(*param_1 + 0x18))();
    plVar2 = param_1;
    (**(code **)(*param_1 + 0x18))();
    if (plVar1 < param_2) {
      param_2 = (long *)((long)param_2 - (long)plVar2);
      UNRECOVERED_JUMPTABLE = *(code **)*param_1;
      goto LAB_1092a9eec;
    }
    if (plVar2 <= param_2) {
      return;
    }
    (**(code **)(*param_1 + 0x60))(param_1);
  }
  UNRECOVERED_JUMPTABLE = *(code **)*param_1;
LAB_1092a9eec:
                    /* WARNING: Could not recover jumptable at 0x0001092a9ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,0,param_2);
  return;
}



/* Entry: 1092a9efc; end: 1092a9fa7;  */

void FUN_1092a9efc(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  
  uVar1 = param_1[3] - param_1[2];
  if (param_2 <= (ulong)(param_1[3] - param_1[2])) {
    uVar1 = param_2;
  }
  FUN_109246310(&lStack_50,uVar1);
  uVar3 = param_1[2];
  (**(code **)*param_1)(param_1,lStack_50,lStack_48 - lStack_50);
  lVar2 = param_1[4];
  param_1[2] = uVar3;
  if (lVar2 != 0) {
    param_1[5] = lVar2;
    __ZdlPv();
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  param_1[5] = lStack_48;
  param_1[4] = lStack_50;
  param_1[6] = uStack_40;
  param_1[7] = 0;
  return;
}



/* Entry: 1092a9fa8; end: 1092a9fe7;  */

long FUN_1092a9fa8(long param_1)

{
  return *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x38);
}



/* Entry: 1092a9fe8; end: 1092aa073;  */

/* WARNING: Removing unreachable block (ram,0x0001092aa054) */

long ***** FUN_1092a9fe8(long *****param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  long *****ppppplVar3;
  long *****ppppplVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long ***ppplVar8;
  ulong uVar9;
  ulong uVar10;
  long ****pppplVar11;
  long ****pppplVar12;
  long ****pppplStack_68;
  long ***ppplStack_60;
  long ***ppplStack_58;
  long ****pppplStack_50;
  long ****pppplStack_48;
  
  pppplVar11 = param_1[1];
  lVar5 = (long)pppplVar11 - (long)*param_1 >> 3;
  bVar2 = param_2 < (ulong)(lVar5 * -0x3333333333333333);
  uVar7 = param_2 + lVar5 * 0x3333333333333333;
  if (bVar2 || uVar7 == 0) {
    if (bVar2) {
      pppplVar12 = *param_1 + param_2 * 5;
      for (; pppplVar11 != pppplVar12; pppplVar11 = pppplVar11 + -5) {
      }
      param_1[1] = pppplVar12;
    }
    return param_1;
  }
  ppppplVar4 = (long *****)param_1[1];
  if ((ulong)(((long)param_1[2] - (long)ppppplVar4 >> 3) * -0x3333333333333333) < uVar7) {
    lVar5 = (long)ppppplVar4 - (long)*param_1;
    uVar9 = uVar7 + (lVar5 >> 3) * -0x3333333333333333;
    if (0x666666666666666 < uVar9) {
      FUN_1092a3a7c();
      func_0x0001092a3c04(&pppplStack_68);
      __Unwind_Resume();
      pppplVar11 = param_1[1];
      if (pppplVar11 != (long ****)0x0) {
        pppplVar12 = pppplVar11 + 1;
        do {
          ppplVar8 = *pppplVar12;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pppplVar12,0x10);
          if (bVar2) {
            *pppplVar12 = (long ***)((long)ppplVar8 + -1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (ppplVar8 == (long ***)0x0) {
          (*(code *)(*pppplVar11)[2])(pppplVar11);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar11);
        }
      }
      return param_1;
    }
    lVar6 = (long)param_1[2] - (long)*param_1 >> 3;
    uVar10 = lVar6 * -0x6666666666666666;
    if (uVar10 < uVar9 || uVar10 - uVar9 == 0) {
      uVar10 = uVar9;
    }
    if (0x333333333333332 < (ulong)(lVar6 * -0x3333333333333333)) {
      uVar10 = 0x666666666666666;
    }
    pppplStack_48 = (long ****)param_1;
    if (uVar10 == 0) {
      ppppplVar4 = (long *****)0x0;
    }
    else {
      ppppplVar4 = param_1;
      FUN_1092a3a90();
    }
    lVar5 = (long)ppppplVar4 + lVar5;
    lVar6 = ((uVar7 * 0x28 - 0x28) / 0x28) * 0x28 + 0x28;
    pppplStack_68 = (long ****)ppppplVar4;
    ppplStack_60 = (long ***)lVar5;
    pppplStack_50 = (long ****)(ppppplVar4 + uVar10 * 5);
    _bzero(lVar5,lVar6);
    pppplVar11 = (long ****)(lVar5 + lVar6);
    pppplVar12 = (long ****)((long)*param_1 + (lVar5 - (long)param_1[1]));
    ppplStack_58 = (long ***)pppplVar11;
    func_0x0001092a3ad4(param_1,*param_1,param_1[1],pppplVar12);
    pppplStack_68 = *param_1;
    *param_1 = pppplVar12;
    param_1[1] = pppplVar11;
    pppplStack_50 = param_1[2];
    param_1[2] = (long ****)(ppppplVar4 + uVar10 * 5);
    ppppplVar3 = &pppplStack_68;
    ppplStack_60 = (long ***)pppplStack_68;
    ppplStack_58 = (long ***)pppplStack_68;
    func_0x0001092a3c04(ppppplVar3);
  }
  else {
    ppppplVar3 = param_1;
    if (uVar7 != 0) {
      uVar7 = (uVar7 * 0x28 - 0x28) / 0x28;
      ppppplVar3 = ppppplVar4;
      _bzero(ppppplVar4,uVar7 * 0x28 + 0x28);
      ppppplVar4 = ppppplVar4 + uVar7 * 5 + 5;
    }
    param_1[1] = (long ****)ppppplVar4;
  }
  return ppppplVar3;
}



/* Entry: 1092aa074; end: 1092aa083;  */

long FUN_1092aa074(long param_1)

{
  return param_1 + 0x70;
}



/* Entry: 1092aa084; end: 1092aa183;  */

void FUN_1092aa084(long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long *plStack_28;
  
  if (*(uint *)(param_2 + 0x24) - 2 < 2) {
    (**(code **)(*param_1 + 0x40))(&plStack_28,param_1,param_2);
    if (plStack_28 != (long *)0x0) {
      (**(code **)(*(long *)*plStack_28 + 0x20))
                ((long *)*plStack_28,param_3,1,*(undefined4 *)(param_2 + 0x20));
      plVar1 = plStack_28;
      plStack_28 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        plVar2 = (long *)*plVar1;
        *plVar1 = 0;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x40))();
        }
        __ZdlPv(plVar1);
      }
    }
  }
  else if (*(uint *)(param_2 + 0x24) < 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)
              (param_3,param_1[0x11] + (ulong)*(uint *)(param_2 + 0x18),
               *(undefined4 *)(param_2 + 0x20));
    return;
  }
  return;
}



/* Entry: 1092aa184; end: 1092aa3e3;  */

void FUN_1092aa184(long param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar3 = (undefined8 *)0x80;
  __Znwm();
  uVar7 = *param_2;
  uVar11 = param_2[1];
  *param_2 = 0;
  *puVar3 = &PTR_FUN_110ae9620;
  puVar3[1] = uVar7;
  puVar3[2] = uVar11;
  (**(code **)(param_2[2] + 0x10))(puVar3 + 3);
  uVar11 = param_2[9];
  uVar7 = param_2[0xd];
  uVar13 = param_2[0xc];
  uVar12 = param_2[0xb];
  puVar3[0xb] = param_2[10];
  puVar3[10] = uVar11;
  puVar3[0xd] = uVar13;
  puVar3[0xc] = uVar12;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xb] = 0;
  puVar3[0xe] = uVar7;
  puVar3[0xf] = 0;
  plVar4 = *(long **)(param_1 + 0x30);
  *(undefined8 **)(param_1 + 0x30) = puVar3;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x50))();
    puVar3 = *(undefined8 **)(param_1 + 0x30);
  }
  (**(code **)*puVar3)(puVar3,param_1 + 0xb8,0x40);
  if (*(int *)(param_1 + 0xb8) == 0x435a4c) {
    puVar9 = (undefined8 *)(param_1 + 0xa8);
    func_0x0001092ab5d4(*puVar9);
    puVar3 = (undefined8 *)(param_1 + 0xa0);
    *puVar3 = puVar9;
    *puVar9 = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    uStack_58 = 0;
    uVar2 = *(uint *)(param_1 + 0xd0);
    uVar10 = (ulong)uVar2;
    plVar4 = *(long **)(param_1 + 0x30);
    (**(code **)(*plVar4 + 0x10))();
    plVar5 = *(long **)(param_1 + 0x30);
    (**(code **)(*plVar5 + 0x18))();
    plVar6 = *(long **)(param_1 + 0x30);
    while ((**(code **)(*plVar6 + 0x10))(), plVar5 < plVar6) {
      (**(code **)**(undefined8 **)(param_1 + 0x30))(*(undefined8 **)(param_1 + 0x30),&uStack_58,8);
      plVar5 = *(long **)(param_1 + 0x30);
      (**(code **)(*plVar5 + 0x18))();
      uVar7 = uStack_58;
      puVar9 = puVar3;
      FUN_1092ab664(puVar3,uStack_58,&uStack_58);
      puVar9[4] = uVar7;
      *(int *)(puVar9 + 5) = (int)plVar5;
      (**(code **)(**(long **)(param_1 + 0x30) + 0x20))
                (*(long **)(param_1 + 0x30),uStack_58._4_4_,1);
      plVar5 = *(long **)(param_1 + 0x30);
      (**(code **)(*plVar5 + 0x18))();
      plVar6 = *(long **)(param_1 + 0x30);
    }
    if ((plVar4 == (long *)0x0) && (uVar2 != 0)) goto LAB_1092aa3c0;
    if (uVar2 < 0x40000001) {
      lVar1 = *(long *)(param_1 + 0x88);
      uVar8 = *(long *)(param_1 + 0x90) - lVar1;
      if (uVar10 < uVar8 || uVar10 - uVar8 == 0) {
        if (uVar10 < uVar8) {
          *(ulong *)(param_1 + 0x90) = lVar1 + uVar10;
        }
      }
      else {
        func_0x000107c27d58((long *)(param_1 + 0x88),uVar10 - uVar8);
      }
      if (*(uint *)(param_1 + 0xcc) < 4) {
        uStack_50 = 0;
        uStack_48 = 0;
        uStack_58 = (ulong)*(uint *)(param_1 + 0xcc) << 0x20;
        FUN_1092a2100(&uStack_60,&uStack_58);
        plVar4 = *(long **)(param_1 + 0xf8);
        *(undefined8 *)(param_1 + 0xf8) = uStack_60;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x28))();
        }
        return;
      }
      goto LAB_1092aa3d8;
    }
  }
  else {
    func_0x000105688514(&UNK_10f5633ea);
LAB_1092aa3c0:
    func_0x000105688514(&UNK_10f5633fe);
  }
  func_0x000105688514(&UNK_10f56343d);
LAB_1092aa3d8:
  func_0x000105688514(&UNK_10f5633c6);
  return;
}



/* Entry: 1092aa3e4; end: 1092aa3e7;  */

void FUN_1092aa3e4(void)

{
  return;
}



/* Entry: 1092aa3e8; end: 1092aa93f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1092aa3e8(undefined8 *****param_1,long *param_2)

{
  undefined8 ***pppuVar1;
  ulong uVar2;
  uint uVar3;
  undefined **ppuVar4;
  uint uVar5;
  bool bVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *****pppppuVar11;
  undefined8 ******ppppppuVar12;
  undefined8 *****pppppuVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined **ppuVar17;
  undefined ***pppuVar18;
  long *plVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  undefined8 *extraout_x8;
  code *pcVar23;
  long *plVar24;
  undefined8 ****unaff_x21;
  undefined8 ****unaff_x22;
  undefined8 ****unaff_x23;
  long lVar25;
  undefined8 *******unaff_x24;
  undefined8 ******unaff_x25;
  undefined **unaff_x26;
  ulong unaff_x27;
  undefined **unaff_x28;
  undefined8 *****pppppuVar26;
  undefined8 *****pppppuVar27;
  undefined ***pppuStack_2b8;
  long lStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined ***pppuStack_298;
  long lStack_290;
  long lStack_268;
  undefined8 ****ppppuStack_260;
  undefined8 ******ppppppuStack_258;
  undefined8 *****pppppuStack_250;
  undefined8 ****ppppuStack_248;
  undefined8 ****ppppuStack_240;
  undefined8 ****ppppuStack_238;
  undefined8 *****pppppuStack_230;
  undefined8 *****pppppuStack_228;
  undefined1 **ppuStack_220;
  code *pcStack_218;
  undefined1 uStack_201;
  long lStack_200;
  uint uStack_1f4;
  undefined **ppuStack_1f0;
  ulong uStack_1e8;
  undefined8 ****ppppuStack_1e0;
  undefined8 ******ppppppuStack_1d8;
  undefined8 *******pppppppuStack_1d0;
  undefined8 ****ppppuStack_1c8;
  undefined8 ****ppppuStack_1c0;
  undefined8 ****ppppuStack_1b8;
  undefined8 *****pppppuStack_1b0;
  undefined8 *****pppppuStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  undefined8 auStack_190 [2];
  char cStack_179;
  undefined8 *******apppppppuStack_178 [2];
  char cStack_161;
  undefined8 ******ppppppuStack_160;
  undefined8 ******ppppppuStack_158;
  undefined8 ******ppppppuStack_150;
  undefined8 *****pppppuStack_140;
  undefined8 *****pppppuStack_138;
  undefined8 *****pppppuStack_130;
  undefined8 ******ppppppuStack_128;
  undefined **ppuStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 ****appppuStack_e8 [15];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar11 = param_1;
  if (*(int *)(param_1 + 0x19) == 1) {
    (*(code *)(*param_1)[4])();
    unaff_x21 = param_1[0xe];
    unaff_x23 = param_1[0xf];
    if (unaff_x21 != unaff_x23) {
      unaff_x22 = (undefined8 ****)&UNK_10f5173d2;
      unaff_x24 = &ppppppuStack_128;
      unaff_x25 = (undefined8 ******)&UNK_1069b161c;
      unaff_x26 = &PTR_DAT_110950c70;
      do {
        FUN_1092a4cfc(&pppppuStack_140,param_2,unaff_x21);
        func_0x000107c31940(&ppppppuStack_160,&UNK_10f5173d2);
        uStack_100 = 0;
        uStack_108 = 0;
        uStack_f0 = 0;
        uStack_f8 = 0;
        uStack_110 = 0;
        uStack_118 = 0;
        ppppppuStack_128 = (undefined8 ******)&UNK_1069b161c;
        ppuStack_120 = &PTR_DAT_110950c70;
        FUN_1092b17dc(appppuStack_e8,&pppppuStack_140,&ppppppuStack_160,&ppppppuStack_128);
        (*(code *)*ppuStack_120)(&ppuStack_120);
        if ((long)ppppppuStack_150 < 0) {
          __ZdlPv(ppppppuStack_160);
        }
        if ((long)pppppuStack_130 < 0) {
          __ZdlPv(pppppuStack_140);
        }
        if (appppuStack_e8[0] == (undefined8 ****)0x0) {
          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                    (&ppppppuStack_160,&UNK_10f5634e2,param_2);
          pppuVar1 = unaff_x21[1];
          ppppuVar7 = (undefined8 ****)*unaff_x21;
          if (-1 < (char)*(byte *)((long)unaff_x21 + 0x17)) {
            pppuVar1 = (undefined8 ***)(ulong)*(byte *)((long)unaff_x21 + 0x17);
            ppppuVar7 = unaff_x21;
          }
          ppppppuVar12 = &ppppppuStack_160;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (ppppppuVar12,ppppuVar7,pppuVar1);
          pppppuStack_138 = ppppppuVar12[1];
          pppppuStack_140 = *ppppppuVar12;
          pppppuStack_130 = ppppppuVar12[2];
          ppppppuVar12[1] = (undefined8 *****)0x0;
          ppppppuVar12[2] = (undefined8 *****)0x0;
          *ppppppuVar12 = (undefined8 *****)0x0;
          func_0x000105687ee0(&pppppuStack_140);
          goto LAB_1092aa7f0;
        }
        FUN_109246310(&pppppuStack_140,*(undefined4 *)(unaff_x21 + 4));
        FUN_1092aa084(param_1,unaff_x21,pppppuStack_140);
        FUN_1092b1f3c(appppuStack_e8,pppppuStack_140,(long)pppppuStack_138 - (long)pppppuStack_140);
        if (pppppuStack_140 != (undefined8 *****)0x0) {
          pppppuStack_138 = pppppuStack_140;
          __ZdlPv();
        }
        pppppuVar11 = appppuStack_e8;
        FUN_1092b2248();
        unaff_x21 = unaff_x21 + 5;
      } while (unaff_x21 != unaff_x23);
    }
  }
  else if (*(int *)(param_1 + 0x19) == 0) {
    pppppuStack_140 = (undefined8 *****)0x0;
    pppppuStack_138 = (undefined8 *****)0x0;
    pppppuStack_130 = (undefined8 *****)0x0;
    unaff_x21 = param_1[0xe];
    unaff_x26 = (undefined **)param_1[0xf];
    if (unaff_x21 != (undefined8 ****)unaff_x26) {
      unaff_x25 = &ppppppuStack_128;
      unaff_x28 = &PTR_DAT_110950c70;
      do {
        ppppuVar7 = param_1[6];
        (*(code *)(*ppppuVar7)[5])();
        unaff_x22 = (undefined8 ****)(ulong)*(uint *)((long)param_1 + 0xc4);
        unaff_x27 = (ulong)*(uint *)(unaff_x21 + 3);
        ppppuVar8 = param_1[6];
        (*(code *)(*ppppuVar8)[2])();
        ppppuVar9 = param_1[6];
        (*(code *)(*ppppuVar9)[3])();
        uVar20 = (ulong)*(uint *)(unaff_x21 + 4);
        uVar2 = (long)ppppuVar8 - (long)ppppuVar9;
        if ((ulong)*(uint *)((long)unaff_x21 + 0x1c) <= (ulong)((long)ppppuVar8 - (long)ppppuVar9))
        {
          uVar2 = (ulong)*(uint *)((long)unaff_x21 + 0x1c);
        }
        uVar22 = (long)pppppuStack_138 - (long)pppppuStack_140;
        if (uVar20 < uVar22 || uVar20 - uVar22 == 0) {
          if (uVar20 < uVar22) {
            pppppuStack_138 = (undefined8 *****)((long)pppppuStack_140 + uVar20);
          }
        }
        else {
          func_0x000107c27d58(&pppppuStack_140,uVar20 - uVar22);
          uVar20 = (ulong)*(uint *)(unaff_x21 + 4);
        }
        ppppuVar8 = param_1[0x1f];
        (*(code *)(*ppppuVar8)[1])
                  (ppppuVar8,(undefined *)((long)ppppuVar7 + (long)((long)unaff_x22 + unaff_x27)),
                   uVar2,pppppuStack_140,uVar20);
        if ((int)ppppuVar8 != *(int *)((long)unaff_x21 + 0x1c)) {
          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                    (appppuStack_e8,&UNK_10f5634fe,unaff_x21);
          func_0x000105687ee0(appppuStack_e8);
LAB_1092aa7f0:
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x1092aa7f4);
          (*pcVar23)();
        }
        unaff_x23 = (undefined8 ****)param_2[1];
        if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
          unaff_x23 = (undefined8 ****)(ulong)*(byte *)((long)param_2 + 0x17);
        }
        func_0x000104c4f768(apppppppuStack_178,(undefined *)((long)unaff_x23 + 1),auStack_190);
        unaff_x24 = apppppppuStack_178[0];
        if (-1 < cStack_161) {
          unaff_x24 = apppppppuStack_178;
        }
        if (unaff_x23 != (undefined8 ****)0x0) {
          plVar24 = (long *)*param_2;
          if (-1 < *(char *)((long)param_2 + 0x17)) {
            plVar24 = param_2;
          }
          _memmove(unaff_x24,plVar24,unaff_x23);
        }
        *(undefined2 *)((long)unaff_x24 + (long)unaff_x23) = 0x2f;
        pppuVar1 = unaff_x21[1];
        ppppuVar7 = (undefined8 ****)*unaff_x21;
        if (-1 < (char)*(byte *)((long)unaff_x21 + 0x17)) {
          pppuVar1 = (undefined8 ***)(ulong)*(byte *)((long)unaff_x21 + 0x17);
          ppppuVar7 = unaff_x21;
        }
        pppppppuVar10 = apppppppuStack_178;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (pppppppuVar10,ppppuVar7,pppuVar1);
        ppppppuStack_158 = pppppppuVar10[1];
        ppppppuStack_160 = *pppppppuVar10;
        ppppppuStack_150 = pppppppuVar10[2];
        pppppppuVar10[1] = (undefined8 ******)0x0;
        pppppppuVar10[2] = (undefined8 ******)0x0;
        *pppppppuVar10 = (undefined8 ******)0x0;
        func_0x000107c31940(auStack_190,&UNK_10f5173d2);
        uStack_100 = 0;
        uStack_108 = 0;
        uStack_f0 = 0;
        uStack_f8 = 0;
        uStack_110 = 0;
        uStack_118 = 0;
        ppppppuStack_128 = (undefined8 ******)&UNK_1069b161c;
        ppuStack_120 = &PTR_DAT_110950c70;
        FUN_1092b17dc(appppuStack_e8,&ppppppuStack_160,auStack_190,&ppppppuStack_128);
        (*(code *)*ppuStack_120)(&ppuStack_120);
        if (cStack_179 < '\0') {
          __ZdlPv(auStack_190[0]);
        }
        if ((long)ppppppuStack_150 < 0) {
          __ZdlPv(ppppppuStack_160);
        }
        if (cStack_161 < '\0') {
          __ZdlPv(apppppppuStack_178[0]);
        }
        FUN_1092b1f3c(appppuStack_e8,pppppuStack_140,(long)pppppuStack_138 - (long)pppppuStack_140);
        FUN_1092b2248(appppuStack_e8);
        unaff_x21 = unaff_x21 + 5;
      } while (unaff_x21 != (undefined8 ****)unaff_x26);
      pppppuVar11 = pppppuStack_140;
      if (pppppuStack_140 != (undefined8 *****)0x0) {
        pppppuStack_138 = pppppuStack_140;
        __ZdlPv();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if ((long)pppppuStack_130 < 0) {
    __ZdlPv(pppppuStack_140);
  }
  if ((long)ppppppuStack_150 < 0) {
    __ZdlPv(ppppppuStack_160);
  }
  FUN_1092b2248(appppuStack_e8);
  pppppuVar13 = pppppuVar11;
  __Unwind_Resume();
  pcStack_198 = FUN_1092aa940;
  pppppuVar26 = (undefined8 *****)pppppuVar13[0x14];
  puStack_1a0 = &stack0xfffffffffffffff0;
  pppppuStack_1a8 = pppppuVar11;
  ppppuStack_1b8 = unaff_x21;
  ppppuStack_1c0 = unaff_x22;
  ppppuStack_1c8 = unaff_x23;
  pppppppuStack_1d0 = unaff_x24;
  ppppppuStack_1d8 = unaff_x25;
  ppppuStack_1e0 = (undefined8 ****)unaff_x26;
  uStack_1e8 = unaff_x27;
  ppuStack_1f0 = unaff_x28;
  pppppuStack_1b0 = param_1;
  while (pppppuVar26 != pppppuVar13 + 0x15) {
    uVar3 = *(uint *)((long)pppppuVar26 + 0x24);
    unaff_x25 = (undefined8 ******)(ulong)uVar3;
    param_1 = (undefined8 *****)(ulong)*(uint *)(pppppuVar26 + 5);
    if (*(int *)(pppppuVar26 + 4) == 1) {
      if (uVar3 == *(uint *)((long)pppppuVar13 + 0xd4)) {
        ppppuVar7 = pppppuVar13[6];
        (*(code *)(*ppppuVar7)[2])();
        if (unaff_x25 <= (undefined8 ******)((long)ppppuVar7 - (long)param_1)) {
          ppppuVar7 = pppppuVar13[6];
          (*(code *)(*ppppuVar7)[5])();
          pppppuVar13[7] = (undefined8 ****)((long)ppppuVar7 + (long)param_1);
          pppppuVar13[8] = unaff_x25;
          (*(code *)(*pppppuVar13[6])[4])
                    (pppppuVar13[6],(undefined *)((long)unaff_x25 + (long)param_1),0);
          goto LAB_1092aab60;
        }
      }
LAB_1092aac5c:
      func_0x000105688514(&UNK_10f5633ea);
LAB_1092aac68:
      func_0x000105688514(&UNK_10f563480);
      goto LAB_1092aac74;
    }
    if (*(int *)(pppppuVar26 + 4) == 2) {
      (*(code *)(*pppppuVar13[6])[4])(pppppuVar13[6],param_1,0);
      uVar21 = 0x14;
      if (*(uint *)((long)pppppuVar13 + 0xbc) < 2) {
        uVar21 = 0x10;
      }
      uVar5 = 0;
      if (uVar21 != 0) {
        uVar5 = uVar3 / uVar21;
      }
      if (uVar5 < *(uint *)(pppppuVar13 + 0x18)) goto LAB_1092aac68;
      FUN_1092a9fe8(pppppuVar13 + 0xe);
      unaff_x26 = (undefined **)pppppuVar13[0xf];
      for (unaff_x21 = pppppuVar13[0xe]; unaff_x21 != (undefined8 ****)unaff_x26;
          unaff_x21 = unaff_x21 + 5) {
        unaff_x22 = pppppuVar13[6];
        uStack_1f4 = 0;
        (*(code *)**unaff_x22)(unaff_x22,&uStack_1f4,4);
        unaff_x23 = unaff_x22;
        (*(code *)(*unaff_x22)[2])();
        ppppuVar7 = unaff_x22;
        (*(code *)(*unaff_x22)[3])();
        uVar2 = 0;
        if (ppppuVar7 <= unaff_x23) {
          uVar2 = (long)unaff_x23 - (long)ppppuVar7;
        }
        if (uVar2 < uStack_1f4) {
          func_0x000105688514(&UNK_10f563561);
LAB_1092aac50:
          func_0x000105688514(&UNK_10f56359f);
          goto LAB_1092aac5c;
        }
        if (0x40000000 < uStack_1f4) goto LAB_1092aac50;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                  (unaff_x21,(ulong)uStack_1f4,0);
        ppppuVar7 = (undefined8 ****)*unaff_x21;
        if (-1 < *(char *)((long)unaff_x21 + 0x17)) {
          ppppuVar7 = unaff_x21;
        }
        (*(code *)**unaff_x22)(unaff_x22,ppppuVar7,uStack_1f4);
        (*(code *)**unaff_x22)(unaff_x22,(long)unaff_x21 + 0x1c,4);
        (*(code *)**unaff_x22)(unaff_x22,unaff_x21 + 4,4);
        unaff_x23 = unaff_x21 + 3;
        (*(code *)**unaff_x22)(unaff_x22,unaff_x23,4);
        if (1 < *(uint *)((long)pppppuVar13 + 0xbc)) {
          (*(code *)**unaff_x22)(unaff_x22,(long)unaff_x21 + 0x24,4);
        }
      }
      ppppuVar7 = pppppuVar13[6];
      (*(code *)(*ppppuVar7)[3])();
      if ((undefined8 ******)((long)ppppuVar7 - (long)param_1) != unaff_x25) goto LAB_1092aac5c;
    }
LAB_1092aab60:
    pppppuVar11 = (undefined8 *****)pppppuVar26[1];
    pppppuVar27 = pppppuVar26;
    if ((undefined8 *****)pppppuVar26[1] == (undefined8 *****)0x0) {
      do {
        pppppuVar26 = (undefined8 *****)pppppuVar27[2];
        bVar6 = (undefined8 *****)*pppppuVar26 != pppppuVar27;
        pppppuVar27 = pppppuVar26;
      } while (bVar6);
    }
    else {
      do {
        pppppuVar26 = pppppuVar11;
        pppppuVar11 = (undefined8 *****)*pppppuVar26;
      } while ((undefined8 *****)*pppppuVar26 != (undefined8 *****)0x0);
    }
  }
  ppppuVar7 = pppppuVar13[0x1f];
  (*(code *)(*ppppuVar7)[1])
            (ppppuVar7,pppppuVar13[7],pppppuVar13[8],pppppuVar13[0x11],
             *(undefined4 *)(pppppuVar13 + 0x1a));
  if ((int)ppppuVar7 == *(int *)((long)pppppuVar13 + 0xd4)) {
    ppppuVar7 = pppppuVar13[0xe];
    if (pppppuVar13[0xf] != ppppuVar7) {
      lVar25 = 0;
      ppppuVar8 = (undefined8 ****)0x0;
      do {
        lStack_200 = (long)ppppuVar7 + lVar25;
        pppppuVar11 = pppppuVar13 + 9;
        FUN_1092404c8(pppppuVar11,lStack_200,&UNK_10dd5b8f9,&lStack_200,&uStack_201);
        pppppuVar11[5] = ppppuVar8;
        ppppuVar8 = (undefined8 ****)((long)ppppuVar8 + 1);
        ppppuVar7 = pppppuVar13[0xe];
        lVar25 = lVar25 + 0x28;
      } while (ppppuVar8 <
               (undefined8 ****)
               (((long)pppppuVar13[0xf] - (long)ppppuVar7 >> 3) * -0x3333333333333333));
    }
    return;
  }
LAB_1092aac74:
  puVar14 = &UNK_10f5634cc;
  func_0x000105688514();
  pcStack_218 = FUN_1092aac80;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = puVar14 + 0x48;
  ppppuStack_260 = (undefined8 ****)unaff_x26;
  ppppppuStack_258 = unaff_x25;
  pppppuStack_250 = pppppuVar13 + 0x15;
  ppppuStack_248 = unaff_x23;
  ppppuStack_240 = unaff_x22;
  ppppuStack_238 = unaff_x21;
  pppppuStack_230 = param_1;
  pppppuStack_228 = pppppuVar13;
  ppuStack_220 = &puStack_1a0;
  FUN_109240a28();
  if (puVar15 == (undefined *)0x0) {
    *extraout_x8 = 0;
LAB_1092aae14:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
      return;
    }
LAB_1092aaf78:
    ___stack_chk_fail();
  }
  else {
    lVar25 = *(long *)(puVar14 + 0x70) + *(long *)(puVar15 + 0x28) * 0x28;
    *extraout_x8 = 0;
    uVar3 = *(uint *)(lVar25 + 0x24);
    if (1 < uVar3) {
      if (uVar3 == 2) {
        plVar24 = *(long **)(puVar14 + 0x30);
        (**(code **)(*plVar24 + 0x28))();
        puVar15 = puVar14 + 0xa0;
        FUN_1092ab664(puVar15,3,&UNK_10dfc1288);
        uVar3 = *(uint *)(puVar15 + 0x28);
        uVar21 = *(uint *)(lVar25 + 0x18);
        ppuVar4 = *(undefined ***)(puVar14 + 0x20);
        ppuVar17 = *(undefined ***)(puVar14 + 0x28);
        ppuStack_2a8 = ppuVar4;
        if ((ppuVar17 == (undefined **)0x0) ||
           (__ZNSt3__119__shared_weak_count4lockEv(), ppuStack_2a0 = ppuVar17,
           ppuVar17 == (undefined **)0x0)) {
          FUN_1092315e8();
          goto LAB_1092aaf90;
        }
        pppuVar18 = (undefined ***)0x60;
        __Znwm();
        uVar5 = *(uint *)(lVar25 + 0x1c);
        *pppuVar18 = &PTR_FUN_110ae95b8;
        pppuVar18[1] = (undefined **)FUN_1092ab738;
        pppuVar18[2] = &PTR_FUN_110ae8190;
        pppuVar18[3] = ppuVar4;
        pppuVar18[4] = ppuVar17;
        pppuVar18[9] = (undefined **)((long)plVar24 + (ulong)uVar21 + (ulong)uVar3);
        pppuVar18[10] = (undefined **)(ulong)uVar5;
        pppuVar18[0xb] = (undefined **)0x0;
        pppuStack_2b8 = pppuVar18;
        (**(code **)(**(long **)(puVar14 + 0xf8) + 0x18))
                  (&ppuStack_2a8,*(long **)(puVar14 + 0xf8),&pppuStack_2b8,
                   *(undefined4 *)(lVar25 + 0x20),1);
        uVar16 = 0x10;
        __Znwm();
        FUN_1092c0408();
        ppuVar4 = ppuStack_2a8;
        ppuStack_2a8 = (undefined **)0x0;
        if (ppuVar4 != (undefined **)0x0) {
          (**(code **)(*ppuVar4 + 0x50))();
        }
        pppuVar18 = pppuStack_2b8;
        pppuStack_2b8 = (undefined ***)0x0;
        if (pppuVar18 != (undefined ***)0x0) {
          pcVar23 = (code *)(*pppuVar18)[10];
          goto LAB_1092aaf38;
        }
      }
      else {
        if (uVar3 != 3) goto LAB_1092aae14;
        (**(code **)(**(long **)(puVar14 + 0x30) + 0x28))();
        FUN_1092ab664(puVar14 + 0xa0,4,&UNK_10dfc128c);
        pppuVar18 = *(undefined ****)(puVar14 + 0x20);
        lVar25 = *(long *)(puVar14 + 0x28);
        pppuStack_2b8 = pppuVar18;
        if ((lVar25 == 0) ||
           (__ZNSt3__119__shared_weak_count4lockEv(), lStack_2b0 = lVar25, lVar25 == 0)) {
          FUN_1092315e8();
          goto LAB_1092aaf90;
        }
        uVar16 = 0x10;
        __Znwm();
        ppuStack_2a8 = (undefined **)FUN_1092ab80c;
        ppuStack_2a0 = &PTR_DAT_110ae81a8;
        pppuStack_2b8 = (undefined ***)0x0;
        lStack_2b0 = 0;
        pppuStack_298 = pppuVar18;
        lStack_290 = lVar25;
        FUN_1092c04b0();
        pcVar23 = (code *)*ppuStack_2a0;
        pppuVar18 = &ppuStack_2a0;
LAB_1092aaf38:
        (*pcVar23)(pppuVar18);
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
        plVar24 = (long *)*extraout_x8;
        *extraout_x8 = uVar16;
        if (plVar24 != (long *)0x0) {
          plVar19 = (long *)*plVar24;
          *plVar24 = 0;
          if (plVar19 != (long *)0x0) {
            (**(code **)(*plVar19 + 0x40))();
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(plVar24);
          return;
        }
        return;
      }
      goto LAB_1092aaf78;
    }
    pppuVar18 = *(undefined ****)(puVar14 + 0x20);
    lVar25 = *(long *)(puVar14 + 0x28);
    pppuStack_2b8 = pppuVar18;
    if ((lVar25 != 0) &&
       (__ZNSt3__119__shared_weak_count4lockEv(), lStack_2b0 = lVar25, lVar25 != 0)) {
      uVar16 = 0x10;
      __Znwm(0x10);
      ppuStack_2a8 = (undefined **)0x1092ab838;
      ppuStack_2a0 = &PTR_DAT_110ae81c0;
      pppuStack_2b8 = (undefined ***)0x0;
      lStack_2b0 = 0;
      pppuStack_298 = pppuVar18;
      lStack_290 = lVar25;
      FUN_1092c04b0();
      (*(code *)*ppuStack_2a0)(&ppuStack_2a0);
      FUN_1092ab7c0(extraout_x8,uVar16);
      goto LAB_1092aae14;
    }
  }
  FUN_1092315e8();
LAB_1092aaf90:
                    /* WARNING: Does not return */
  pcVar23 = (code *)SoftwareBreakpoint(1,0x1092aaf94);
  (*pcVar23)();
}



/* Entry: 1092aa940; end: 1092aac7f;  */

void FUN_1092aa940(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined **ppuVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined ***pppuVar11;
  long *plVar12;
  uint uVar13;
  undefined8 *extraout_x8;
  code *pcVar14;
  ulong unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  ulong uVar15;
  long *unaff_x23;
  long lVar16;
  ulong unaff_x25;
  undefined8 *unaff_x26;
  long *plVar17;
  long *plVar18;
  undefined ***pppuStack_128;
  long lStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined ***pppuStack_108;
  long lStack_100;
  long lStack_d8;
  undefined8 *puStack_d0;
  ulong uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  undefined8 *puStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 uStack_71;
  long lStack_70;
  uint uStack_64;
  
  plVar17 = *(long **)(param_1 + 0xa0);
  while (plVar17 != (long *)(param_1 + 0xa8)) {
    uVar2 = *(uint *)((long)plVar17 + 0x24);
    unaff_x25 = (ulong)uVar2;
    unaff_x20 = (ulong)*(uint *)(plVar17 + 5);
    if ((int)plVar17[4] == 1) {
      if (uVar2 == *(uint *)(param_1 + 0xd4)) {
        plVar12 = *(long **)(param_1 + 0x30);
        (**(code **)(*plVar12 + 0x10))();
        if (unaff_x25 <= (long)plVar12 - unaff_x20) {
          plVar12 = *(long **)(param_1 + 0x30);
          (**(code **)(*plVar12 + 0x28))();
          *(ulong *)(param_1 + 0x38) = (long)plVar12 + unaff_x20;
          *(ulong *)(param_1 + 0x40) = unaff_x25;
          (**(code **)(**(long **)(param_1 + 0x30) + 0x20))
                    (*(long **)(param_1 + 0x30),unaff_x25 + unaff_x20,0);
          goto LAB_1092aab60;
        }
      }
LAB_1092aac5c:
      func_0x000105688514(&UNK_10f5633ea);
LAB_1092aac68:
      func_0x000105688514(&UNK_10f563480);
      goto LAB_1092aac74;
    }
    if ((int)plVar17[4] == 2) {
      (**(code **)(**(long **)(param_1 + 0x30) + 0x20))(*(long **)(param_1 + 0x30),unaff_x20,0);
      uVar13 = 0x14;
      if (*(uint *)(param_1 + 0xbc) < 2) {
        uVar13 = 0x10;
      }
      uVar4 = 0;
      if (uVar13 != 0) {
        uVar4 = uVar2 / uVar13;
      }
      if (uVar4 < *(uint *)(param_1 + 0xc0)) goto LAB_1092aac68;
      FUN_1092a9fe8(param_1 + 0x70);
      unaff_x26 = *(undefined8 **)(param_1 + 0x78);
      for (unaff_x21 = *(undefined8 **)(param_1 + 0x70); unaff_x21 != unaff_x26;
          unaff_x21 = unaff_x21 + 5) {
        unaff_x22 = *(long **)(param_1 + 0x30);
        uStack_64 = 0;
        (**(code **)*unaff_x22)(unaff_x22,&uStack_64,4);
        unaff_x23 = unaff_x22;
        (**(code **)(*unaff_x22 + 0x10))();
        plVar12 = unaff_x22;
        (**(code **)(*unaff_x22 + 0x18))();
        uVar15 = 0;
        if (plVar12 <= unaff_x23) {
          uVar15 = (long)unaff_x23 - (long)plVar12;
        }
        if (uVar15 < uStack_64) {
          func_0x000105688514(&UNK_10f563561);
LAB_1092aac50:
          func_0x000105688514(&UNK_10f56359f);
          goto LAB_1092aac5c;
        }
        if (0x40000000 < uStack_64) goto LAB_1092aac50;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                  (unaff_x21,(ulong)uStack_64,0);
        puVar1 = (undefined8 *)*unaff_x21;
        if (-1 < *(char *)((long)unaff_x21 + 0x17)) {
          puVar1 = unaff_x21;
        }
        (**(code **)*unaff_x22)(unaff_x22,puVar1,uStack_64);
        (**(code **)*unaff_x22)(unaff_x22,(long)unaff_x21 + 0x1c,4);
        (**(code **)*unaff_x22)(unaff_x22,unaff_x21 + 4,4);
        unaff_x23 = unaff_x21 + 3;
        (**(code **)*unaff_x22)(unaff_x22,unaff_x23,4);
        if (1 < *(uint *)(param_1 + 0xbc)) {
          (**(code **)*unaff_x22)(unaff_x22,(long)unaff_x21 + 0x24,4);
        }
      }
      plVar12 = *(long **)(param_1 + 0x30);
      (**(code **)(*plVar12 + 0x18))();
      if ((long)plVar12 - unaff_x20 != unaff_x25) goto LAB_1092aac5c;
    }
LAB_1092aab60:
    plVar12 = (long *)plVar17[1];
    plVar18 = plVar17;
    if ((long *)plVar17[1] == (long *)0x0) {
      do {
        plVar17 = (long *)plVar18[2];
        bVar5 = (long *)*plVar17 != plVar18;
        plVar18 = plVar17;
      } while (bVar5);
    }
    else {
      do {
        plVar17 = plVar12;
        plVar12 = (long *)*plVar17;
      } while ((long *)*plVar17 != (long *)0x0);
    }
  }
  plVar17 = *(long **)(param_1 + 0xf8);
  (**(code **)(*plVar17 + 8))
            (plVar17,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0xd0));
  if ((int)plVar17 == *(int *)(param_1 + 0xd4)) {
    lStack_70 = *(long *)(param_1 + 0x70);
    if (*(long *)(param_1 + 0x78) != lStack_70) {
      lVar16 = 0;
      uVar15 = 0;
      do {
        lStack_70 = lStack_70 + lVar16;
        lVar6 = param_1 + 0x48;
        FUN_1092404c8(lVar6,lStack_70,&UNK_10dd5b8f9,&lStack_70,&uStack_71);
        *(ulong *)(lVar6 + 0x28) = uVar15;
        uVar15 = uVar15 + 1;
        lStack_70 = *(long *)(param_1 + 0x70);
        lVar16 = lVar16 + 0x28;
      } while (uVar15 < (ulong)((*(long *)(param_1 + 0x78) - lStack_70 >> 3) * -0x3333333333333333))
      ;
    }
    return;
  }
LAB_1092aac74:
  puVar7 = &UNK_10f5634cc;
  func_0x000105688514();
  pcStack_88 = FUN_1092aac80;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar7 + 0x48;
  puStack_d0 = unaff_x26;
  uStack_c8 = unaff_x25;
  plStack_c0 = (long *)(param_1 + 0xa8);
  plStack_b8 = unaff_x23;
  plStack_b0 = unaff_x22;
  puStack_a8 = unaff_x21;
  uStack_a0 = unaff_x20;
  lStack_98 = param_1;
  puStack_90 = &stack0xfffffffffffffff0;
  FUN_109240a28();
  if (puVar8 == (undefined *)0x0) {
    *extraout_x8 = 0;
LAB_1092aae14:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
      return;
    }
LAB_1092aaf78:
    ___stack_chk_fail();
  }
  else {
    lVar16 = *(long *)(puVar7 + 0x70) + *(long *)(puVar8 + 0x28) * 0x28;
    *extraout_x8 = 0;
    uVar2 = *(uint *)(lVar16 + 0x24);
    if (1 < uVar2) {
      if (uVar2 == 2) {
        plVar17 = *(long **)(puVar7 + 0x30);
        (**(code **)(*plVar17 + 0x28))();
        puVar8 = puVar7 + 0xa0;
        FUN_1092ab664(puVar8,3,&UNK_10dfc1288);
        uVar2 = *(uint *)(puVar8 + 0x28);
        uVar13 = *(uint *)(lVar16 + 0x18);
        ppuVar3 = *(undefined ***)(puVar7 + 0x20);
        ppuVar10 = *(undefined ***)(puVar7 + 0x28);
        ppuStack_118 = ppuVar3;
        if ((ppuVar10 == (undefined **)0x0) ||
           (__ZNSt3__119__shared_weak_count4lockEv(), ppuStack_110 = ppuVar10,
           ppuVar10 == (undefined **)0x0)) {
          FUN_1092315e8();
          goto LAB_1092aaf90;
        }
        pppuVar11 = (undefined ***)0x60;
        __Znwm();
        uVar4 = *(uint *)(lVar16 + 0x1c);
        *pppuVar11 = &PTR_FUN_110ae95b8;
        pppuVar11[1] = (undefined **)FUN_1092ab738;
        pppuVar11[2] = &PTR_FUN_110ae8190;
        pppuVar11[3] = ppuVar3;
        pppuVar11[4] = ppuVar10;
        pppuVar11[9] = (undefined **)((long)plVar17 + (ulong)uVar13 + (ulong)uVar2);
        pppuVar11[10] = (undefined **)(ulong)uVar4;
        pppuVar11[0xb] = (undefined **)0x0;
        pppuStack_128 = pppuVar11;
        (**(code **)(**(long **)(puVar7 + 0xf8) + 0x18))
                  (&ppuStack_118,*(long **)(puVar7 + 0xf8),&pppuStack_128,
                   *(undefined4 *)(lVar16 + 0x20),1);
        uVar9 = 0x10;
        __Znwm();
        FUN_1092c0408();
        ppuVar3 = ppuStack_118;
        ppuStack_118 = (undefined **)0x0;
        if (ppuVar3 != (undefined **)0x0) {
          (**(code **)(*ppuVar3 + 0x50))();
        }
        pppuVar11 = pppuStack_128;
        pppuStack_128 = (undefined ***)0x0;
        if (pppuVar11 != (undefined ***)0x0) {
          pcVar14 = (code *)(*pppuVar11)[10];
          goto LAB_1092aaf38;
        }
      }
      else {
        if (uVar2 != 3) goto LAB_1092aae14;
        (**(code **)(**(long **)(puVar7 + 0x30) + 0x28))();
        FUN_1092ab664(puVar7 + 0xa0,4,&UNK_10dfc128c);
        pppuVar11 = *(undefined ****)(puVar7 + 0x20);
        lVar16 = *(long *)(puVar7 + 0x28);
        pppuStack_128 = pppuVar11;
        if ((lVar16 == 0) ||
           (__ZNSt3__119__shared_weak_count4lockEv(), lStack_120 = lVar16, lVar16 == 0)) {
          FUN_1092315e8();
          goto LAB_1092aaf90;
        }
        uVar9 = 0x10;
        __Znwm();
        ppuStack_118 = (undefined **)FUN_1092ab80c;
        ppuStack_110 = &PTR_DAT_110ae81a8;
        pppuStack_128 = (undefined ***)0x0;
        lStack_120 = 0;
        pppuStack_108 = pppuVar11;
        lStack_100 = lVar16;
        FUN_1092c04b0();
        pcVar14 = (code *)*ppuStack_110;
        pppuVar11 = &ppuStack_110;
LAB_1092aaf38:
        (*pcVar14)(pppuVar11);
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
        plVar17 = (long *)*extraout_x8;
        *extraout_x8 = uVar9;
        if (plVar17 == (long *)0x0) {
          return;
        }
        plVar12 = (long *)*plVar17;
        *plVar17 = 0;
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x40))();
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(plVar17);
        return;
      }
      goto LAB_1092aaf78;
    }
    pppuVar11 = *(undefined ****)(puVar7 + 0x20);
    lVar16 = *(long *)(puVar7 + 0x28);
    pppuStack_128 = pppuVar11;
    if ((lVar16 != 0) &&
       (__ZNSt3__119__shared_weak_count4lockEv(), lStack_120 = lVar16, lVar16 != 0)) {
      uVar9 = 0x10;
      __Znwm(0x10);
      ppuStack_118 = (undefined **)0x1092ab838;
      ppuStack_110 = &PTR_DAT_110ae81c0;
      pppuStack_128 = (undefined ***)0x0;
      lStack_120 = 0;
      pppuStack_108 = pppuVar11;
      lStack_100 = lVar16;
      FUN_1092c04b0();
      (*(code *)*ppuStack_110)(&ppuStack_110);
      FUN_1092ab7c0(extraout_x8,uVar9);
      goto LAB_1092aae14;
    }
  }
  FUN_1092315e8();
LAB_1092aaf90:
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x1092aaf94);
  (*pcVar14)();
}



/* Entry: 1092aac80; end: 1092ab053;  */

void FUN_1092aac80(undefined8 *param_1,long param_2)

{
  undefined **ppuVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined ***pppuVar8;
  long *plVar9;
  code *pcVar10;
  long *plVar11;
  long lVar12;
  undefined ***pppuStack_a8;
  long lStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined ***pppuStack_88;
  long lStack_80;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = param_2 + 0x48;
  FUN_109240a28();
  if (lVar12 == 0) {
    *param_1 = 0;
LAB_1092aae14:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
LAB_1092aaf78:
    ___stack_chk_fail();
  }
  else {
    lVar12 = *(long *)(param_2 + 0x70) + *(long *)(lVar12 + 0x28) * 0x28;
    *param_1 = 0;
    uVar2 = *(uint *)(lVar12 + 0x24);
    if (1 < uVar2) {
      if (uVar2 != 2) {
        if (uVar2 == 3) {
          (**(code **)(**(long **)(param_2 + 0x30) + 0x28))();
          FUN_1092ab664(param_2 + 0xa0,4,&UNK_10dfc128c);
          pppuVar8 = *(undefined ****)(param_2 + 0x20);
          lVar12 = *(long *)(param_2 + 0x28);
          pppuStack_a8 = pppuVar8;
          if (lVar12 != 0) {
            __ZNSt3__119__shared_weak_count4lockEv();
            lStack_a0 = lVar12;
            if (lVar12 != 0) {
              uVar5 = 0x10;
              __Znwm();
              ppuStack_98 = (undefined **)FUN_1092ab80c;
              ppuStack_90 = &PTR_DAT_110ae81a8;
              pppuStack_a8 = (undefined ***)0x0;
              lStack_a0 = 0;
              pppuStack_88 = pppuVar8;
              lStack_80 = lVar12;
              FUN_1092c04b0();
              pcVar10 = (code *)*ppuStack_90;
              pppuVar8 = &ppuStack_90;
LAB_1092aaf38:
              (*pcVar10)(pppuVar8);
              goto LAB_1092aaf3c;
            }
          }
          FUN_1092315e8();
          goto LAB_1092aaf90;
        }
        goto LAB_1092aae14;
      }
      plVar11 = *(long **)(param_2 + 0x30);
      (**(code **)(*plVar11 + 0x28))();
      lVar6 = param_2 + 0xa0;
      FUN_1092ab664(lVar6,3,&UNK_10dfc1288);
      uVar2 = *(uint *)(lVar6 + 0x28);
      uVar3 = *(uint *)(lVar12 + 0x18);
      ppuVar1 = *(undefined ***)(param_2 + 0x20);
      ppuVar7 = *(undefined ***)(param_2 + 0x28);
      ppuStack_98 = ppuVar1;
      if (ppuVar7 != (undefined **)0x0) {
        __ZNSt3__119__shared_weak_count4lockEv();
        ppuStack_90 = ppuVar7;
        if (ppuVar7 != (undefined **)0x0) {
          pppuVar8 = (undefined ***)0x60;
          __Znwm();
          uVar4 = *(uint *)(lVar12 + 0x1c);
          *pppuVar8 = &PTR_FUN_110ae95b8;
          pppuVar8[1] = (undefined **)FUN_1092ab738;
          pppuVar8[2] = &PTR_FUN_110ae8190;
          pppuVar8[3] = ppuVar1;
          pppuVar8[4] = ppuVar7;
          pppuVar8[9] = (undefined **)((long)plVar11 + (ulong)uVar3 + (ulong)uVar2);
          pppuVar8[10] = (undefined **)(ulong)uVar4;
          pppuVar8[0xb] = (undefined **)0x0;
          pppuStack_a8 = pppuVar8;
          (**(code **)(**(long **)(param_2 + 0xf8) + 0x18))
                    (&ppuStack_98,*(long **)(param_2 + 0xf8),&pppuStack_a8,
                     *(undefined4 *)(lVar12 + 0x20),1);
          uVar5 = 0x10;
          __Znwm();
          FUN_1092c0408();
          ppuVar1 = ppuStack_98;
          ppuStack_98 = (undefined **)0x0;
          if (ppuVar1 != (undefined **)0x0) {
            (**(code **)(*ppuVar1 + 0x50))();
          }
          pppuVar8 = pppuStack_a8;
          pppuStack_a8 = (undefined ***)0x0;
          if (pppuVar8 != (undefined ***)0x0) {
            pcVar10 = (code *)(*pppuVar8)[10];
            goto LAB_1092aaf38;
          }
LAB_1092aaf3c:
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
            plVar11 = (long *)*param_1;
            *param_1 = uVar5;
            if (plVar11 != (long *)0x0) {
              plVar9 = (long *)*plVar11;
              *plVar11 = 0;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 0x40))();
              }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR___ZdlPv_110352258)(plVar11);
              return;
            }
            return;
          }
          goto LAB_1092aaf78;
        }
      }
      FUN_1092315e8();
      goto LAB_1092aaf90;
    }
    pppuVar8 = *(undefined ****)(param_2 + 0x20);
    lVar12 = *(long *)(param_2 + 0x28);
    pppuStack_a8 = pppuVar8;
    if (lVar12 != 0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      lStack_a0 = lVar12;
      if (lVar12 != 0) {
        uVar5 = 0x10;
        __Znwm(0x10);
        ppuStack_98 = (undefined **)0x1092ab838;
        ppuStack_90 = &PTR_DAT_110ae81c0;
        pppuStack_a8 = (undefined ***)0x0;
        lStack_a0 = 0;
        pppuStack_88 = pppuVar8;
        lStack_80 = lVar12;
        FUN_1092c04b0();
        (*(code *)*ppuStack_90)(&ppuStack_90);
        FUN_1092ab7c0(param_1,uVar5);
        goto LAB_1092aae14;
      }
    }
  }
  FUN_1092315e8();
LAB_1092aaf90:
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x1092aaf94);
  (*pcVar10)();
}



/* Entry: 1092ab054; end: 1092ab123;  */

void FUN_1092ab054(long param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  if ((long *)(param_1 + 0x70) != param_3) {
    FUN_1092a8954(param_3,*(long *)(param_1 + 0x70),*(long *)(param_1 + 0x78),
                  (*(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x70) >> 3) * -0x3333333333333333
                 );
  }
  FUN_1092a2dc0(param_2,0,0,0);
  lVar2 = param_3[1];
  for (lVar4 = *param_3; lVar4 != lVar2; lVar4 = lVar4 + 0x28) {
    lVar3 = *param_2;
    uVar5 = param_2[1] - lVar3;
    uVar1 = uVar5 + *(uint *)(lVar4 + 0x20);
    if (uVar5 < uVar1) {
      func_0x000107c27d58(param_2);
      lVar3 = *param_2;
    }
    else if (uVar5 != uVar1) {
      param_2[1] = lVar3 + uVar1;
    }
    FUN_1092aa084(param_1,lVar4,lVar3 + uVar5);
    *(int *)(lVar4 + 0x18) = (int)uVar5;
  }
  return;
}



/* Entry: 1092ab124; end: 1092ab27b;  */

void FUN_1092ab124(undefined8 param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = *(long **)(param_2 + 0x30);
  if (plVar1 == (long *)0x0) {
    func_0x000107c31940(param_1,&UNK_10f563516);
  }
  else {
    (**(code **)(*plVar1 + 0x18))();
    plVar2 = *(long **)(param_2 + 0x30);
    (**(code **)(*plVar2 + 0x28))();
    plVar3 = *(long **)(param_2 + 0x30);
    (**(code **)(*plVar3 + 0x10))();
    FUN_1092c3638(param_1,plVar2,plVar3);
    (**(code **)(**(long **)(param_2 + 0x30) + 0x20))(*(long **)(param_2 + 0x30),plVar1,0);
  }
  return;
}



/* Entry: 1092ab27c; end: 1092ab3e7;  */

undefined8 * FUN_1092ab27c(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110ae80e0;
  plVar1 = (long *)param_1[0x1f];
  param_1[0x1f] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  func_0x0001092ab5d4(param_1[0x15]);
  if (param_1[0x11] != 0) {
    param_1[0x12] = param_1[0x11];
    __ZdlPv();
  }
  puStack_28 = param_1 + 0xe;
  FUN_1092a50e4(&puStack_28);
  FUN_109240b0c(param_1 + 9);
  plVar1 = (long *)param_1[6];
  param_1[6] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x50))();
  }
  if (param_1[5] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_FUN_110ae8678;
  func_0x0001092ab60c(param_1 + 1);
  return param_1;
}



/* Entry: 1092ab3e8; end: 1092ab3f3;  */

void FUN_1092ab3e8(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001092ab3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))();
  return;
}



/* Entry: 1092ab3f4; end: 1092ab57b;  */

long ***** FUN_1092ab3f4(long *****param_1,ulong param_2)

{
  long ****pppplVar1;
  char cVar2;
  bool bVar3;
  long *****ppppplVar4;
  long *****ppppplVar5;
  long lVar6;
  long ***ppplVar7;
  ulong uVar8;
  ulong uVar9;
  long ****pppplVar10;
  long lVar11;
  long ****pppplStack_68;
  long ***ppplStack_60;
  long ***ppplStack_58;
  long ****pppplStack_50;
  long ****pppplStack_48;
  
  ppppplVar5 = (long *****)param_1[1];
  if ((ulong)(((long)param_1[2] - (long)ppppplVar5 >> 3) * -0x3333333333333333) < param_2) {
    lVar11 = (long)ppppplVar5 - (long)*param_1;
    uVar8 = param_2 + (lVar11 >> 3) * -0x3333333333333333;
    if (0x666666666666666 < uVar8) {
      FUN_1092a3a7c();
      func_0x0001092a3c04(&pppplStack_68);
      __Unwind_Resume();
      pppplVar10 = param_1[1];
      if (pppplVar10 != (long ****)0x0) {
        pppplVar1 = pppplVar10 + 1;
        do {
          ppplVar7 = *pppplVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppplVar1,0x10);
          if (bVar3) {
            *pppplVar1 = (long ***)((long)ppplVar7 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (ppplVar7 == (long ***)0x0) {
          (*(code *)(*pppplVar10)[2])(pppplVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar10);
        }
      }
      return param_1;
    }
    lVar6 = (long)param_1[2] - (long)*param_1 >> 3;
    uVar9 = lVar6 * -0x6666666666666666;
    if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
      uVar9 = uVar8;
    }
    if (0x333333333333332 < (ulong)(lVar6 * -0x3333333333333333)) {
      uVar9 = 0x666666666666666;
    }
    pppplStack_48 = (long ****)param_1;
    if (uVar9 == 0) {
      ppppplVar5 = (long *****)0x0;
    }
    else {
      ppppplVar5 = param_1;
      FUN_1092a3a90();
    }
    lVar11 = (long)ppppplVar5 + lVar11;
    lVar6 = ((param_2 * 0x28 - 0x28) / 0x28) * 0x28 + 0x28;
    pppplStack_68 = (long ****)ppppplVar5;
    ppplStack_60 = (long ***)lVar11;
    pppplStack_50 = (long ****)(ppppplVar5 + uVar9 * 5);
    _bzero(lVar11,lVar6);
    pppplVar10 = (long ****)(lVar11 + lVar6);
    pppplVar1 = (long ****)((long)*param_1 + (lVar11 - (long)param_1[1]));
    ppplStack_58 = (long ***)pppplVar10;
    func_0x0001092a3ad4(param_1,*param_1,param_1[1],pppplVar1);
    pppplStack_68 = *param_1;
    *param_1 = pppplVar1;
    param_1[1] = pppplVar10;
    pppplStack_50 = param_1[2];
    param_1[2] = (long ****)(ppppplVar5 + uVar9 * 5);
    ppppplVar4 = &pppplStack_68;
    ppplStack_60 = (long ***)pppplStack_68;
    ppplStack_58 = (long ***)pppplStack_68;
    func_0x0001092a3c04(ppppplVar4);
  }
  else {
    ppppplVar4 = param_1;
    if (param_2 != 0) {
      uVar8 = (param_2 * 0x28 - 0x28) / 0x28;
      ppppplVar4 = ppppplVar5;
      _bzero(ppppplVar5,uVar8 * 0x28 + 0x28);
      ppppplVar5 = ppppplVar5 + uVar8 * 5 + 5;
    }
    param_1[1] = (long ****)ppppplVar5;
  }
  return ppppplVar4;
}



/* Entry: 1092ab57c; end: 1092ab663;  */

long FUN_1092ab57c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 1092ab664; end: 1092ab737;  */

long * FUN_1092ab664(long *param_1,uint param_2,undefined4 *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = param_1 + 1;
  plVar2 = (long *)*plVar1;
  do {
    plVar3 = plVar1;
    if (plVar2 == (long *)0x0) {
LAB_1092ab6c8:
      plVar2 = (long *)0x30;
      __Znwm();
      *(undefined4 *)((long)plVar2 + 0x1c) = *param_3;
      plVar2[4] = 0;
      *(undefined4 *)(plVar2 + 5) = 0;
      *plVar2 = 0;
      plVar2[1] = 0;
      plVar2[2] = (long)plVar1;
      *plVar3 = (long)plVar2;
      plVar1 = plVar2;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
        plVar1 = (long *)*plVar3;
      }
      func_0x000107c27d40(param_1[1],plVar1);
      param_1[2] = param_1[2] + 1;
      return plVar2;
    }
    while (plVar1 = plVar2, *(uint *)((long)plVar1 + 0x1c) <= param_2) {
      if (param_2 <= *(uint *)((long)plVar1 + 0x1c)) {
        return plVar1;
      }
      plVar2 = (long *)plVar1[1];
      if ((long *)plVar1[1] == (long *)0x0) {
        plVar3 = plVar1 + 1;
        goto LAB_1092ab6c8;
      }
    }
    plVar2 = (long *)*plVar1;
  } while( true );
}



/* Entry: 1092ab738; end: 1092ab73f;  */

void FUN_1092ab738(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 1092ab740; end: 1092ab79b;  */

void FUN_1092ab740(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 1092ab79c; end: 1092ab7bf;  */

long FUN_1092ab79c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1 + 8;
}



/* Entry: 1092ab7c0; end: 1092ab80b;  */

void FUN_1092ab7c0(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar2 != (long *)0x0) {
    plVar1 = (long *)*plVar2;
    *plVar2 = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x40))();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar2);
    return;
  }
  return;
}



/* Entry: 1092ab80c; end: 1092ab863;  */

void FUN_1092ab80c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}


