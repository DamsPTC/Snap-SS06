/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aadbc44; end: 10aadbc93;  */

void FUN_10aadbc44(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    func_0x000107c2ab24(lVar1 + 0x38);
    func_0x00010a052434(lVar1 + 0x20);
    if (*(char *)(lVar1 + 0x1f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 8));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10aadbc94; end: 10aadbcab;  */

void FUN_10aadbc94(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10aadbcac; end: 10aadbda3;  */

void FUN_10aadbcac(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0x28;
        FUN_10a291594(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
    __ZdlPv(lVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10aadbda4; end: 10aadbdef;  */

long * FUN_10aadbda4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x58;
    FUN_10a22ff00();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10aadbdf0; end: 10aadbea7;  */

ulong * FUN_10aadbdf0(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  
  if (0x7ffffffffffffff7 < param_3) {
    func_0x000109ffde50();
    puVar2 = (ulong *)&DAT_10f62a4d8;
    FUN_109ffde64();
    *puVar2 = 0;
    return puVar2;
  }
  if (param_3 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)param_3;
    puVar1 = param_1;
    if (param_3 == 0) goto LAB_10aadbe6c;
  }
  else {
    puVar2 = (ulong *)0x19;
    if ((param_3 | 7) != 0x17) {
      puVar2 = (ulong *)((param_3 | 7) + 1);
    }
    puVar1 = puVar2;
    __Znwm();
    param_1[1] = param_3;
    param_1[2] = (ulong)puVar2 | 0x8000000000000000;
    *param_1 = (ulong)puVar1;
  }
  _memmove(puVar1,param_2,param_3);
LAB_10aadbe6c:
  *(undefined1 *)((long)puVar1 + param_3) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  return param_1;
}



/* Entry: 10aadbea8; end: 10aadbebb;  */

void FUN_10aadbea8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  *puVar1 = 0;
  return;
}



/* Entry: 10aadbebc; end: 10aadbecb;  */

void FUN_10aadbebc(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10aadbecc; end: 10aadbef3;  */

undefined8 FUN_10aadbecc(undefined8 param_1)

{
  FUN_10aadbef4(param_1,0);
  return param_1;
}



/* Entry: 10aadbef4; end: 10aadbf1b;  */

void FUN_10aadbef4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x00010a236ef8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10aadbf1c; end: 10aadbfeb;  */

void FUN_10aadbf1c(long param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
                  long param_5,long param_6)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  plVar3 = &lStack_50;
  lVar6 = *(long *)(param_6 + 0x10);
  lStack_50 = param_1;
  uStack_48 = param_2;
  if (param_5 != 0) {
    plVar2 = &lStack_40;
    lStack_40 = param_1;
    uStack_38 = param_2;
    func_0x00010a289568(plVar2,*param_4);
    if (*plVar2 != 0) {
      FUN_10aadbfec(&lStack_50,param_3);
      puVar4 = (undefined8 *)0x30;
      __Znwm();
      puVar5 = (undefined8 *)*plVar2;
      puVar4[1] = 0;
      *puVar4 = 0;
      puVar4[3] = 0;
      puVar4[2] = 0;
      *(undefined4 *)(puVar4 + 4) = 0x3f800000;
      *(undefined4 *)(puVar4 + 5) = *(undefined4 *)(lVar6 + 0x30);
      FUN_10aad0b9c(**(undefined8 **)(lVar6 + 0x28),lVar6,*puVar5,puVar5 + 2,puVar4);
      FUN_10aadbef4(plVar3,puVar4);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10aadbfd4);
  (*pcVar1)();
}



/* Entry: 10aadbfec; end: 10aadc08f;  */

long FUN_10aadbfec(long *param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if ((bRam00000001137ec1d0 & 1) == 0) {
    iVar1 = 0x137ec1d0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(FUN_10aadbecc,0x1137ec1c8,0x100000000);
      ___cxa_guard_release(0x1137ec1d0);
    }
  }
  plVar2 = (long *)param_1[1];
  FUN_10a26d738(plVar2,param_2);
  if (*plVar2 == -1) {
    lVar3 = 0x1137ec1c8;
  }
  else {
    lVar3 = *param_1 + *plVar2;
  }
  return lVar3;
}



/* Entry: 10aadc090; end: 10aadc0af;  */

void FUN_10aadc090(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10a22c96c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10aadc0b0; end: 10aadc0c7;  */

void FUN_10aadc0b0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10aadc0c8; end: 10aadc1c3;  */

void FUN_10aadc0c8(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined4 *puVar4;
  long *plVar5;
  undefined4 *puVar6;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  plVar3 = &lStack_60;
  lStack_60 = param_1;
  uStack_58 = param_2;
  func_0x00010a5189e4(&lStack_60,param_3);
  puVar4 = (undefined4 *)0x38;
  __Znwm();
  *(undefined8 *)(puVar4 + 4) = 0;
  *(undefined8 *)(puVar4 + 2) = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined8 *)(puVar4 + 6) = 0;
  *(undefined8 *)(puVar4 + 10) = 0;
  puVar4[0xc] = 0x3f800000;
  *puVar4 = 0;
  plVar5 = &lStack_50;
  lStack_50 = param_1;
  uStack_48 = param_2;
  func_0x0001098b9090(plVar5,*(undefined4 *)(param_6 + 0x28));
  *(undefined8 *)(puVar4 + 2) = *(undefined8 *)*plVar5;
  puVar1 = *(undefined4 **)(param_6 + 0x18);
  for (puVar6 = *(undefined4 **)(param_6 + 0x10); puVar6 != puVar1; puVar6 = puVar6 + 1) {
    plVar5 = &lStack_50;
    FUN_10aadbfec(plVar5,*puVar6);
    if (*plVar5 != 0) {
      uVar2 = *(undefined4 *)(*plVar5 + 0x28);
      FUN_10aade024(puVar4 + 4,uVar2,uVar2);
    }
  }
  FUN_10a236e48(plVar3,puVar4);
  return;
}



/* Entry: 10aadc1c4; end: 10aadc20f;  */

void FUN_10aadc1c4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10aadc210; end: 10aadc223;  */

undefined1  [16] FUN_10aadc210(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)plVar1 >> 0x3c == 0) {
    lVar2 = (long)plVar1 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = plVar1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    func_0x00010a136de4();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10aadc224; end: 10aadc2a3;  */

undefined1  [16] FUN_10aadc224(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((ulong)param_1 >> 0x3c == 0) {
    lVar1 = (long)param_1 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    func_0x00010a136de4();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10aadc2a4; end: 10aadd697;  */

/* WARNING: Possible PIC construction at 0x00010aadcfdc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010aadcfe0) */
/* WARNING: Removing unreachable block (ram,0x00010aadcff0) */
/* WARNING: Removing unreachable block (ram,0x00010aadd048) */
/* WARNING: Removing unreachable block (ram,0x00010aadd0a0) */

void FUN_10aadc2a4(undefined8 *param_1,undefined8 *param_2,long param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  ulong uVar15;
  undefined8 *unaff_x24;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined1 auStack_140 [8];
  ulong uStack_138;
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
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar1 = &stack0xfffffffffffffff0;
  uStack_138 = CONCAT44(uStack_138._4_4_,param_4);
LAB_10aadc2dc:
  puVar12 = param_2 + -0xc;
  puVar9 = param_2 + -0x18;
  puVar11 = param_2 + -0x24;
  puVar8 = param_1;
LAB_10aadc2ec:
  do {
    param_1 = puVar8;
    uVar19 = (long)param_2 - (long)param_1;
    uVar18 = ((long)uVar19 >> 5) * -0x5555555555555555;
    if (uVar18 - 2 != 0 && 1 < (long)uVar18) {
      if (uVar18 != 3) {
        puVar8 = puVar12;
        if (uVar18 != 4) {
          if (uVar18 != 5) goto LAB_10aadc32c;
          unaff_x30 = 0x10aadcfe0;
          register0x00000008 = (BADSPACEBASE *)auStack_140;
          puVar8 = param_1 + 0x24;
          unaff_x19 = param_1;
          unaff_x20 = param_2;
          unaff_x21 = puVar12;
          unaff_x22 = param_3;
          unaff_x23 = puVar9;
          unaff_x24 = puVar11;
          unaff_x29 = puVar1;
        }
        puVar10 = param_1 + 0x18;
        puVar11 = param_1 + 0xc;
        *(undefined8 **)((long)register0x00000008 + -0x40) = unaff_x24;
        *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
        *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
        *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
        *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        puVar12 = puVar11;
        FUN_10aad30c4(puVar11,param_1);
        puVar9 = puVar10;
        FUN_10aad30c4(puVar10,puVar11);
        if (((ulong)puVar12 & 1) == 0) {
          if ((int)puVar9 != 0) {
            uVar22 = param_1[0x10];
            uVar24 = param_1[0x13];
            uVar23 = param_1[0x12];
            *(undefined8 *)((long)register0x00000008 + -0x78) = param_1[0x11];
            *(undefined8 *)((long)register0x00000008 + -0x80) = uVar22;
            *(undefined8 *)((long)register0x00000008 + -0x68) = uVar24;
            *(undefined8 *)((long)register0x00000008 + -0x70) = uVar23;
            uVar22 = param_1[0x14];
            uVar24 = param_1[0x17];
            uVar23 = param_1[0x16];
            *(undefined8 *)((long)register0x00000008 + -0x58) = param_1[0x15];
            *(undefined8 *)((long)register0x00000008 + -0x60) = uVar22;
            *(undefined8 *)((long)register0x00000008 + -0x48) = uVar24;
            *(undefined8 *)((long)register0x00000008 + -0x50) = uVar23;
            uVar22 = *puVar11;
            uVar24 = param_1[0xf];
            uVar23 = param_1[0xe];
            *(undefined8 *)((long)register0x00000008 + -0x98) = param_1[0xd];
            *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar22;
            *(undefined8 *)((long)register0x00000008 + -0x88) = uVar24;
            *(undefined8 *)((long)register0x00000008 + -0x90) = uVar23;
            param_1[0xd] = param_1[0x19];
            *puVar11 = *puVar10;
            param_1[0xf] = param_1[0x1b];
            param_1[0xe] = param_1[0x1a];
            param_1[0x15] = param_1[0x21];
            param_1[0x14] = param_1[0x20];
            param_1[0x17] = param_1[0x23];
            param_1[0x16] = param_1[0x22];
            param_1[0x11] = param_1[0x1d];
            param_1[0x10] = param_1[0x1c];
            param_1[0x13] = param_1[0x1f];
            param_1[0x12] = param_1[0x1e];
            uVar24 = *(undefined8 *)((long)register0x00000008 + -0x60);
            uVar23 = *(undefined8 *)((long)register0x00000008 + -0x48);
            uVar22 = *(undefined8 *)((long)register0x00000008 + -0x50);
            param_1[0x21] = *(undefined8 *)((long)register0x00000008 + -0x58);
            param_1[0x20] = uVar24;
            param_1[0x23] = uVar23;
            param_1[0x22] = uVar22;
            uVar24 = *(undefined8 *)((long)register0x00000008 + -0x80);
            uVar23 = *(undefined8 *)((long)register0x00000008 + -0x68);
            uVar22 = *(undefined8 *)((long)register0x00000008 + -0x70);
            param_1[0x1d] = *(undefined8 *)((long)register0x00000008 + -0x78);
            param_1[0x1c] = uVar24;
            param_1[0x1f] = uVar23;
            param_1[0x1e] = uVar22;
            uVar22 = *(undefined8 *)((long)register0x00000008 + -0xa0);
            uVar24 = *(undefined8 *)((long)register0x00000008 + -0x88);
            uVar23 = *(undefined8 *)((long)register0x00000008 + -0x90);
            param_1[0x19] = *(undefined8 *)((long)register0x00000008 + -0x98);
            *puVar10 = uVar22;
            param_1[0x1b] = uVar24;
            param_1[0x1a] = uVar23;
            puVar12 = puVar11;
            FUN_10aad30c4(puVar11,param_1);
            if ((int)puVar12 != 0) {
              uVar22 = param_1[4];
              uVar24 = param_1[7];
              uVar23 = param_1[6];
              *(undefined8 *)((long)register0x00000008 + -0x78) = param_1[5];
              *(undefined8 *)((long)register0x00000008 + -0x80) = uVar22;
              *(undefined8 *)((long)register0x00000008 + -0x68) = uVar24;
              *(undefined8 *)((long)register0x00000008 + -0x70) = uVar23;
              uVar22 = param_1[8];
              uVar24 = param_1[0xb];
              uVar23 = param_1[10];
              *(undefined8 *)((long)register0x00000008 + -0x58) = param_1[9];
              *(undefined8 *)((long)register0x00000008 + -0x60) = uVar22;
              *(undefined8 *)((long)register0x00000008 + -0x48) = uVar24;
              *(undefined8 *)((long)register0x00000008 + -0x50) = uVar23;
              uVar22 = *param_1;
              uVar24 = param_1[3];
              uVar23 = param_1[2];
              *(undefined8 *)((long)register0x00000008 + -0x98) = param_1[1];
              *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar22;
              *(undefined8 *)((long)register0x00000008 + -0x88) = uVar24;
              *(undefined8 *)((long)register0x00000008 + -0x90) = uVar23;
              param_1[1] = param_1[0xd];
              *param_1 = *puVar11;
              param_1[3] = param_1[0xf];
              param_1[2] = param_1[0xe];
              param_1[9] = param_1[0x15];
              param_1[8] = param_1[0x14];
              param_1[0xb] = param_1[0x17];
              param_1[10] = param_1[0x16];
              param_1[5] = param_1[0x11];
              param_1[4] = param_1[0x10];
              param_1[7] = param_1[0x13];
              param_1[6] = param_1[0x12];
              uVar24 = *(undefined8 *)((long)register0x00000008 + -0x60);
              uVar23 = *(undefined8 *)((long)register0x00000008 + -0x48);
              uVar22 = *(undefined8 *)((long)register0x00000008 + -0x50);
              param_1[0x15] = *(undefined8 *)((long)register0x00000008 + -0x58);
              param_1[0x14] = uVar24;
              param_1[0x17] = uVar23;
              param_1[0x16] = uVar22;
              uVar24 = *(undefined8 *)((long)register0x00000008 + -0x80);
              uVar23 = *(undefined8 *)((long)register0x00000008 + -0x68);
              uVar22 = *(undefined8 *)((long)register0x00000008 + -0x70);
              param_1[0x11] = *(undefined8 *)((long)register0x00000008 + -0x78);
              param_1[0x10] = uVar24;
              param_1[0x13] = uVar23;
              param_1[0x12] = uVar22;
              uVar22 = *(undefined8 *)((long)register0x00000008 + -0xa0);
              uVar24 = *(undefined8 *)((long)register0x00000008 + -0x88);
              uVar23 = *(undefined8 *)((long)register0x00000008 + -0x90);
              param_1[0xd] = *(undefined8 *)((long)register0x00000008 + -0x98);
              *puVar11 = uVar22;
              param_1[0xf] = uVar24;
              param_1[0xe] = uVar23;
            }
          }
        }
        else {
          if ((int)puVar9 == 0) {
            uVar22 = param_1[4];
            uVar24 = param_1[7];
            uVar23 = param_1[6];
            *(undefined8 *)((long)register0x00000008 + -0x78) = param_1[5];
            *(undefined8 *)((long)register0x00000008 + -0x80) = uVar22;
            *(undefined8 *)((long)register0x00000008 + -0x68) = uVar24;
            *(undefined8 *)((long)register0x00000008 + -0x70) = uVar23;
            uVar22 = param_1[8];
            uVar24 = param_1[0xb];
            uVar23 = param_1[10];
            *(undefined8 *)((long)register0x00000008 + -0x58) = param_1[9];
            *(undefined8 *)((long)register0x00000008 + -0x60) = uVar22;
            *(undefined8 *)((long)register0x00000008 + -0x48) = uVar24;
            *(undefined8 *)((long)register0x00000008 + -0x50) = uVar23;
            uVar22 = *param_1;
            uVar24 = param_1[3];
            uVar23 = param_1[2];
            *(undefined8 *)((long)register0x00000008 + -0x98) = param_1[1];
            *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar22;
            *(undefined8 *)((long)register0x00000008 + -0x88) = uVar24;
            *(undefined8 *)((long)register0x00000008 + -0x90) = uVar23;
            param_1[1] = param_1[0xd];
            *param_1 = *puVar11;
            param_1[3] = param_1[0xf];
            param_1[2] = param_1[0xe];
            param_1[9] = param_1[0x15];
            param_1[8] = param_1[0x14];
            param_1[0xb] = param_1[0x17];
            param_1[10] = param_1[0x16];
            param_1[5] = param_1[0x11];
            param_1[4] = param_1[0x10];
            param_1[7] = param_1[0x13];
            param_1[6] = param_1[0x12];
            uVar24 = *(undefined8 *)((long)register0x00000008 + -0x60);
            uVar23 = *(undefined8 *)((long)register0x00000008 + -0x48);
            uVar22 = *(undefined8 *)((long)register0x00000008 + -0x50);
            param_1[0x15] = *(undefined8 *)((long)register0x00000008 + -0x58);
            param_1[0x14] = uVar24;
            param_1[0x17] = uVar23;
            param_1[0x16] = uVar22;
            uVar24 = *(undefined8 *)((long)register0x00000008 + -0x80);
            uVar23 = *(undefined8 *)((long)register0x00000008 + -0x68);
            uVar22 = *(undefined8 *)((long)register0x00000008 + -0x70);
            param_1[0x11] = *(undefined8 *)((long)register0x00000008 + -0x78);
            param_1[0x10] = uVar24;
            param_1[0x13] = uVar23;
            param_1[0x12] = uVar22;
            uVar22 = *(undefined8 *)((long)register0x00000008 + -0xa0);
            uVar24 = *(undefined8 *)((long)register0x00000008 + -0x88);
            uVar23 = *(undefined8 *)((long)register0x00000008 + -0x90);
            param_1[0xd] = *(undefined8 *)((long)register0x00000008 + -0x98);
            *puVar11 = uVar22;
            param_1[0xf] = uVar24;
            param_1[0xe] = uVar23;
            puVar12 = puVar10;
            FUN_10aad30c4(puVar10,puVar11);
            if ((int)puVar12 == 0) goto LAB_10aadd860;
            uVar22 = param_1[0x10];
            uVar24 = param_1[0x13];
            uVar23 = param_1[0x12];
            *(undefined8 *)((long)register0x00000008 + -0x78) = param_1[0x11];
            *(undefined8 *)((long)register0x00000008 + -0x80) = uVar22;
            *(undefined8 *)((long)register0x00000008 + -0x68) = uVar24;
            *(undefined8 *)((long)register0x00000008 + -0x70) = uVar23;
            uVar22 = param_1[0x14];
            uVar24 = param_1[0x17];
            uVar23 = param_1[0x16];
            *(undefined8 *)((long)register0x00000008 + -0x58) = param_1[0x15];
            *(undefined8 *)((long)register0x00000008 + -0x60) = uVar22;
            *(undefined8 *)((long)register0x00000008 + -0x48) = uVar24;
            *(undefined8 *)((long)register0x00000008 + -0x50) = uVar23;
            uVar22 = *puVar11;
            uVar24 = param_1[0xf];
            uVar23 = param_1[0xe];
            *(undefined8 *)((long)register0x00000008 + -0x98) = param_1[0xd];
            *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar22;
            *(undefined8 *)((long)register0x00000008 + -0x88) = uVar24;
            *(undefined8 *)((long)register0x00000008 + -0x90) = uVar23;
            param_1[0xd] = param_1[0x19];
            *puVar11 = *puVar10;
            param_1[0xf] = param_1[0x1b];
            param_1[0xe] = param_1[0x1a];
            param_1[0x15] = param_1[0x21];
            param_1[0x14] = param_1[0x20];
            param_1[0x17] = param_1[0x23];
            param_1[0x16] = param_1[0x22];
            param_1[0x11] = param_1[0x1d];
            param_1[0x10] = param_1[0x1c];
            param_1[0x13] = param_1[0x1f];
            param_1[0x12] = param_1[0x1e];
          }
          else {
            uVar22 = param_1[4];
            uVar24 = param_1[7];
            uVar23 = param_1[6];
            *(undefined8 *)((long)register0x00000008 + -0x78) = param_1[5];
            *(undefined8 *)((long)register0x00000008 + -0x80) = uVar22;
            *(undefined8 *)((long)register0x00000008 + -0x68) = uVar24;
            *(undefined8 *)((long)register0x00000008 + -0x70) = uVar23;
            uVar22 = param_1[8];
            uVar24 = param_1[0xb];
            uVar23 = param_1[10];
            *(undefined8 *)((long)register0x00000008 + -0x58) = param_1[9];
            *(undefined8 *)((long)register0x00000008 + -0x60) = uVar22;
            *(undefined8 *)((long)register0x00000008 + -0x48) = uVar24;
            *(undefined8 *)((long)register0x00000008 + -0x50) = uVar23;
            uVar22 = *param_1;
            uVar24 = param_1[3];
            uVar23 = param_1[2];
            *(undefined8 *)((long)register0x00000008 + -0x98) = param_1[1];
            *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar22;
            *(undefined8 *)((long)register0x00000008 + -0x88) = uVar24;
            *(undefined8 *)((long)register0x00000008 + -0x90) = uVar23;
            param_1[1] = param_1[0x19];
            *param_1 = *puVar10;
            param_1[3] = param_1[0x1b];
            param_1[2] = param_1[0x1a];
            param_1[9] = param_1[0x21];
            param_1[8] = param_1[0x20];
            param_1[0xb] = param_1[0x23];
            param_1[10] = param_1[0x22];
            param_1[5] = param_1[0x1d];
            param_1[4] = param_1[0x1c];
            param_1[7] = param_1[0x1f];
            param_1[6] = param_1[0x1e];
          }
          uVar24 = *(undefined8 *)((long)register0x00000008 + -0x60);
          uVar23 = *(undefined8 *)((long)register0x00000008 + -0x48);
          uVar22 = *(undefined8 *)((long)register0x00000008 + -0x50);
          param_1[0x21] = *(undefined8 *)((long)register0x00000008 + -0x58);
          param_1[0x20] = uVar24;
          param_1[0x23] = uVar23;
          param_1[0x22] = uVar22;
          uVar24 = *(undefined8 *)((long)register0x00000008 + -0x80);
          uVar23 = *(undefined8 *)((long)register0x00000008 + -0x68);
          uVar22 = *(undefined8 *)((long)register0x00000008 + -0x70);
          param_1[0x1d] = *(undefined8 *)((long)register0x00000008 + -0x78);
          param_1[0x1c] = uVar24;
          param_1[0x1f] = uVar23;
          param_1[0x1e] = uVar22;
          uVar22 = *(undefined8 *)((long)register0x00000008 + -0xa0);
          uVar24 = *(undefined8 *)((long)register0x00000008 + -0x88);
          uVar23 = *(undefined8 *)((long)register0x00000008 + -0x90);
          param_1[0x19] = *(undefined8 *)((long)register0x00000008 + -0x98);
          *puVar10 = uVar22;
          param_1[0x1b] = uVar24;
          param_1[0x1a] = uVar23;
        }
LAB_10aadd860:
        puVar12 = puVar8;
        FUN_10aad30c4(puVar8,puVar10);
        if ((int)puVar12 != 0) {
          uVar22 = param_1[0x1c];
          uVar24 = param_1[0x1f];
          uVar23 = param_1[0x1e];
          *(undefined8 *)((long)register0x00000008 + -0x78) = param_1[0x1d];
          *(undefined8 *)((long)register0x00000008 + -0x80) = uVar22;
          *(undefined8 *)((long)register0x00000008 + -0x68) = uVar24;
          *(undefined8 *)((long)register0x00000008 + -0x70) = uVar23;
          uVar22 = param_1[0x20];
          uVar24 = param_1[0x23];
          uVar23 = param_1[0x22];
          *(undefined8 *)((long)register0x00000008 + -0x58) = param_1[0x21];
          *(undefined8 *)((long)register0x00000008 + -0x60) = uVar22;
          *(undefined8 *)((long)register0x00000008 + -0x48) = uVar24;
          *(undefined8 *)((long)register0x00000008 + -0x50) = uVar23;
          uVar22 = *puVar10;
          uVar24 = param_1[0x1b];
          uVar23 = param_1[0x1a];
          *(undefined8 *)((long)register0x00000008 + -0x98) = param_1[0x19];
          *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar22;
          *(undefined8 *)((long)register0x00000008 + -0x88) = uVar24;
          *(undefined8 *)((long)register0x00000008 + -0x90) = uVar23;
          uVar24 = *puVar8;
          uVar23 = puVar8[3];
          uVar22 = puVar8[2];
          param_1[0x19] = puVar8[1];
          *puVar10 = uVar24;
          param_1[0x1b] = uVar23;
          param_1[0x1a] = uVar22;
          uVar22 = puVar8[8];
          uVar24 = puVar8[0xb];
          uVar23 = puVar8[10];
          uVar28 = puVar8[5];
          uVar27 = puVar8[4];
          uVar26 = puVar8[7];
          uVar25 = puVar8[6];
          param_1[0x21] = puVar8[9];
          param_1[0x20] = uVar22;
          param_1[0x23] = uVar24;
          param_1[0x22] = uVar23;
          param_1[0x1d] = uVar28;
          param_1[0x1c] = uVar27;
          param_1[0x1f] = uVar26;
          param_1[0x1e] = uVar25;
          uVar24 = *(undefined8 *)((long)register0x00000008 + -0x60);
          uVar23 = *(undefined8 *)((long)register0x00000008 + -0x48);
          uVar22 = *(undefined8 *)((long)register0x00000008 + -0x50);
          puVar8[9] = *(undefined8 *)((long)register0x00000008 + -0x58);
          puVar8[8] = uVar24;
          puVar8[0xb] = uVar23;
          puVar8[10] = uVar22;
          uVar24 = *(undefined8 *)((long)register0x00000008 + -0x80);
          uVar23 = *(undefined8 *)((long)register0x00000008 + -0x68);
          uVar22 = *(undefined8 *)((long)register0x00000008 + -0x70);
          puVar8[5] = *(undefined8 *)((long)register0x00000008 + -0x78);
          puVar8[4] = uVar24;
          puVar8[7] = uVar23;
          puVar8[6] = uVar22;
          uVar22 = *(undefined8 *)((long)register0x00000008 + -0xa0);
          uVar24 = *(undefined8 *)((long)register0x00000008 + -0x88);
          uVar23 = *(undefined8 *)((long)register0x00000008 + -0x90);
          puVar8[1] = *(undefined8 *)((long)register0x00000008 + -0x98);
          *puVar8 = uVar22;
          puVar8[3] = uVar24;
          puVar8[2] = uVar23;
          puVar8 = puVar10;
          FUN_10aad30c4(puVar10,puVar11);
          if ((int)puVar8 != 0) {
            uVar22 = param_1[0x10];
            uVar24 = param_1[0x13];
            uVar23 = param_1[0x12];
            *(undefined8 *)((long)register0x00000008 + -0x78) = param_1[0x11];
            *(undefined8 *)((long)register0x00000008 + -0x80) = uVar22;
            *(undefined8 *)((long)register0x00000008 + -0x68) = uVar24;
            *(undefined8 *)((long)register0x00000008 + -0x70) = uVar23;
            uVar22 = param_1[0x14];
            uVar24 = param_1[0x17];
            uVar23 = param_1[0x16];
            *(undefined8 *)((long)register0x00000008 + -0x58) = param_1[0x15];
            *(undefined8 *)((long)register0x00000008 + -0x60) = uVar22;
            *(undefined8 *)((long)register0x00000008 + -0x48) = uVar24;
            *(undefined8 *)((long)register0x00000008 + -0x50) = uVar23;
            uVar22 = *puVar11;
            uVar24 = param_1[0xf];
            uVar23 = param_1[0xe];
            *(undefined8 *)((long)register0x00000008 + -0x98) = param_1[0xd];
            *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar22;
            *(undefined8 *)((long)register0x00000008 + -0x88) = uVar24;
            *(undefined8 *)((long)register0x00000008 + -0x90) = uVar23;
            param_1[0xd] = param_1[0x19];
            *puVar11 = *puVar10;
            param_1[0xf] = param_1[0x1b];
            param_1[0xe] = param_1[0x1a];
            param_1[0x15] = param_1[0x21];
            param_1[0x14] = param_1[0x20];
            param_1[0x17] = param_1[0x23];
            param_1[0x16] = param_1[0x22];
            param_1[0x11] = param_1[0x1d];
            param_1[0x10] = param_1[0x1c];
            param_1[0x13] = param_1[0x1f];
            param_1[0x12] = param_1[0x1e];
            uVar24 = *(undefined8 *)((long)register0x00000008 + -0x60);
            uVar23 = *(undefined8 *)((long)register0x00000008 + -0x48);
            uVar22 = *(undefined8 *)((long)register0x00000008 + -0x50);
            param_1[0x21] = *(undefined8 *)((long)register0x00000008 + -0x58);
            param_1[0x20] = uVar24;
            param_1[0x23] = uVar23;
            param_1[0x22] = uVar22;
            uVar24 = *(undefined8 *)((long)register0x00000008 + -0x80);
            uVar23 = *(undefined8 *)((long)register0x00000008 + -0x68);
            uVar22 = *(undefined8 *)((long)register0x00000008 + -0x70);
            param_1[0x1d] = *(undefined8 *)((long)register0x00000008 + -0x78);
            param_1[0x1c] = uVar24;
            param_1[0x1f] = uVar23;
            param_1[0x1e] = uVar22;
            uVar22 = *(undefined8 *)((long)register0x00000008 + -0xa0);
            uVar24 = *(undefined8 *)((long)register0x00000008 + -0x88);
            uVar23 = *(undefined8 *)((long)register0x00000008 + -0x90);
            param_1[0x19] = *(undefined8 *)((long)register0x00000008 + -0x98);
            *puVar10 = uVar22;
            param_1[0x1b] = uVar24;
            param_1[0x1a] = uVar23;
            puVar8 = puVar11;
            FUN_10aad30c4(puVar11,param_1);
            if ((int)puVar8 != 0) {
              uVar22 = param_1[4];
              uVar24 = param_1[7];
              uVar23 = param_1[6];
              *(undefined8 *)((long)register0x00000008 + -0x78) = param_1[5];
              *(undefined8 *)((long)register0x00000008 + -0x80) = uVar22;
              *(undefined8 *)((long)register0x00000008 + -0x68) = uVar24;
              *(undefined8 *)((long)register0x00000008 + -0x70) = uVar23;
              uVar22 = param_1[8];
              uVar24 = param_1[0xb];
              uVar23 = param_1[10];
              *(undefined8 *)((long)register0x00000008 + -0x58) = param_1[9];
              *(undefined8 *)((long)register0x00000008 + -0x60) = uVar22;
              *(undefined8 *)((long)register0x00000008 + -0x48) = uVar24;
              *(undefined8 *)((long)register0x00000008 + -0x50) = uVar23;
              uVar22 = *param_1;
              uVar24 = param_1[3];
              uVar23 = param_1[2];
              *(undefined8 *)((long)register0x00000008 + -0x98) = param_1[1];
              *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar22;
              *(undefined8 *)((long)register0x00000008 + -0x88) = uVar24;
              *(undefined8 *)((long)register0x00000008 + -0x90) = uVar23;
              param_1[1] = param_1[0xd];
              *param_1 = *puVar11;
              param_1[3] = param_1[0xf];
              param_1[2] = param_1[0xe];
              param_1[9] = param_1[0x15];
              param_1[8] = param_1[0x14];
              param_1[0xb] = param_1[0x17];
              param_1[10] = param_1[0x16];
              param_1[5] = param_1[0x11];
              param_1[4] = param_1[0x10];
              param_1[7] = param_1[0x13];
              param_1[6] = param_1[0x12];
              uVar24 = *(undefined8 *)((long)register0x00000008 + -0x60);
              uVar23 = *(undefined8 *)((long)register0x00000008 + -0x48);
              uVar22 = *(undefined8 *)((long)register0x00000008 + -0x50);
              param_1[0x15] = *(undefined8 *)((long)register0x00000008 + -0x58);
              param_1[0x14] = uVar24;
              param_1[0x17] = uVar23;
              param_1[0x16] = uVar22;
              uVar24 = *(undefined8 *)((long)register0x00000008 + -0x80);
              uVar23 = *(undefined8 *)((long)register0x00000008 + -0x68);
              uVar22 = *(undefined8 *)((long)register0x00000008 + -0x70);
              param_1[0x11] = *(undefined8 *)((long)register0x00000008 + -0x78);
              param_1[0x10] = uVar24;
              param_1[0x13] = uVar23;
              param_1[0x12] = uVar22;
              uVar22 = *(undefined8 *)((long)register0x00000008 + -0xa0);
              uVar24 = *(undefined8 *)((long)register0x00000008 + -0x88);
              uVar23 = *(undefined8 *)((long)register0x00000008 + -0x90);
              param_1[0xd] = *(undefined8 *)((long)register0x00000008 + -0x98);
              *puVar11 = uVar22;
              param_1[0xf] = uVar24;
              param_1[0xe] = uVar23;
            }
          }
        }
        return;
      }
      puVar8 = param_1 + 0xc;
      FUN_10aad30c4(puVar8,param_1);
      puVar9 = puVar12;
      FUN_10aad30c4(puVar12,param_1 + 0xc);
      if (((ulong)puVar8 & 1) == 0) {
        if ((int)puVar9 == 0) {
          return;
        }
        uStack_a8 = param_1[0x11];
        uStack_b0 = param_1[0x10];
        uStack_98 = param_1[0x13];
        uStack_a0 = param_1[0x12];
        uStack_88 = param_1[0x15];
        uStack_90 = param_1[0x14];
        uStack_78 = param_1[0x17];
        uStack_80 = param_1[0x16];
        uStack_c8 = param_1[0xd];
        uStack_d0 = param_1[0xc];
        uStack_b8 = param_1[0xf];
        uStack_c0 = param_1[0xe];
        uVar22 = *puVar12;
        uVar24 = param_2[-9];
        uVar23 = param_2[-10];
        param_1[0xd] = param_2[-0xb];
        param_1[0xc] = uVar22;
        param_1[0xf] = uVar24;
        param_1[0xe] = uVar23;
        uVar22 = param_2[-4];
        uVar24 = param_2[-1];
        uVar23 = param_2[-2];
        uVar28 = param_2[-7];
        uVar27 = param_2[-8];
        uVar26 = param_2[-5];
        uVar25 = param_2[-6];
        param_1[0x15] = param_2[-3];
        param_1[0x14] = uVar22;
        param_1[0x17] = uVar24;
        param_1[0x16] = uVar23;
        param_1[0x11] = uVar28;
        param_1[0x10] = uVar27;
        param_1[0x13] = uVar26;
        param_1[0x12] = uVar25;
        param_2[-0xb] = uStack_c8;
        *puVar12 = uStack_d0;
        param_2[-9] = uStack_b8;
        param_2[-10] = uStack_c0;
        param_2[-3] = uStack_88;
        param_2[-4] = uStack_90;
        param_2[-1] = uStack_78;
        param_2[-2] = uStack_80;
        param_2[-7] = uStack_a8;
        param_2[-8] = uStack_b0;
        param_2[-5] = uStack_98;
        param_2[-6] = uStack_a0;
        puVar8 = param_1 + 0xc;
        FUN_10aad30c4(puVar8,param_1);
        if ((int)puVar8 == 0) {
          return;
        }
        uVar24 = param_1[1];
        uVar22 = *param_1;
        uVar28 = param_1[3];
        uVar26 = param_1[2];
        uVar25 = param_1[5];
        uVar23 = param_1[4];
        uVar29 = param_1[7];
        uVar27 = param_1[6];
        uVar31 = param_1[9];
        uVar30 = param_1[8];
        uVar33 = param_1[0xb];
        uVar32 = param_1[10];
        param_1[9] = param_1[0x15];
        param_1[8] = param_1[0x14];
        param_1[0xb] = param_1[0x17];
        param_1[10] = param_1[0x16];
        param_1[5] = param_1[0x11];
        param_1[4] = param_1[0x10];
        param_1[7] = param_1[0x13];
        param_1[6] = param_1[0x12];
        param_1[1] = param_1[0xd];
        *param_1 = param_1[0xc];
        param_1[3] = param_1[0xf];
        param_1[2] = param_1[0xe];
        param_1[0xd] = uVar24;
        param_1[0xc] = uVar22;
        param_1[0xf] = uVar28;
        param_1[0xe] = uVar26;
        param_1[0x15] = uVar31;
        param_1[0x14] = uVar30;
        param_1[0x17] = uVar33;
        param_1[0x16] = uVar32;
        param_1[0x11] = uVar25;
        param_1[0x10] = uVar23;
        param_1[0x13] = uVar29;
        param_1[0x12] = uVar27;
        return;
      }
      if ((int)puVar9 == 0) {
        uStack_c8 = param_1[1];
        uStack_d0 = *param_1;
        uStack_b8 = param_1[3];
        uStack_c0 = param_1[2];
        uStack_a8 = param_1[5];
        uStack_b0 = param_1[4];
        uStack_98 = param_1[7];
        uStack_a0 = param_1[6];
        uStack_88 = param_1[9];
        uStack_90 = param_1[8];
        uStack_78 = param_1[0xb];
        uStack_80 = param_1[10];
        param_1[9] = param_1[0x15];
        param_1[8] = param_1[0x14];
        param_1[0xb] = param_1[0x17];
        param_1[10] = param_1[0x16];
        param_1[5] = param_1[0x11];
        param_1[4] = param_1[0x10];
        param_1[7] = param_1[0x13];
        param_1[6] = param_1[0x12];
        param_1[1] = param_1[0xd];
        *param_1 = param_1[0xc];
        param_1[3] = param_1[0xf];
        param_1[2] = param_1[0xe];
        param_1[0xd] = uStack_c8;
        param_1[0xc] = uStack_d0;
        param_1[0xf] = uStack_b8;
        param_1[0xe] = uStack_c0;
        param_1[0x15] = uStack_88;
        param_1[0x14] = uStack_90;
        param_1[0x17] = uStack_78;
        param_1[0x16] = uStack_80;
        param_1[0x11] = uStack_a8;
        param_1[0x10] = uStack_b0;
        param_1[0x13] = uStack_98;
        param_1[0x12] = uStack_a0;
        puVar8 = puVar12;
        FUN_10aad30c4(puVar12,param_1 + 0xc);
        if ((int)puVar8 == 0) {
          return;
        }
        uStack_a8 = param_1[0x11];
        uStack_b0 = param_1[0x10];
        uStack_98 = param_1[0x13];
        uStack_a0 = param_1[0x12];
        uStack_88 = param_1[0x15];
        uStack_90 = param_1[0x14];
        uStack_78 = param_1[0x17];
        uStack_80 = param_1[0x16];
        uStack_c8 = param_1[0xd];
        uStack_d0 = param_1[0xc];
        uStack_b8 = param_1[0xf];
        uStack_c0 = param_1[0xe];
        uVar22 = *puVar12;
        uVar24 = param_2[-9];
        uVar23 = param_2[-10];
        param_1[0xd] = param_2[-0xb];
        param_1[0xc] = uVar22;
        param_1[0xf] = uVar24;
        param_1[0xe] = uVar23;
        uVar22 = param_2[-4];
        uVar24 = param_2[-1];
        uVar23 = param_2[-2];
        uVar28 = param_2[-7];
        uVar27 = param_2[-8];
        uVar26 = param_2[-5];
        uVar25 = param_2[-6];
        param_1[0x15] = param_2[-3];
        param_1[0x14] = uVar22;
        param_1[0x17] = uVar24;
        param_1[0x16] = uVar23;
        param_1[0x11] = uVar28;
        param_1[0x10] = uVar27;
        param_1[0x13] = uVar26;
        param_1[0x12] = uVar25;
        goto LAB_10aadd12c;
      }
LAB_10aadd0fc:
      uStack_c8 = param_1[1];
      uStack_d0 = *param_1;
      uStack_b8 = param_1[3];
      uStack_c0 = param_1[2];
      uStack_a8 = param_1[5];
      uStack_b0 = param_1[4];
      uStack_98 = param_1[7];
      uStack_a0 = param_1[6];
      uStack_88 = param_1[9];
      uStack_90 = param_1[8];
      uStack_78 = param_1[0xb];
      uStack_80 = param_1[10];
      uVar22 = param_2[-4];
      uVar24 = param_2[-1];
      uVar23 = param_2[-2];
      uVar28 = param_2[-7];
      uVar27 = param_2[-8];
      uVar26 = param_2[-5];
      uVar25 = param_2[-6];
      param_1[9] = param_2[-3];
      param_1[8] = uVar22;
      param_1[0xb] = uVar24;
      param_1[10] = uVar23;
      param_1[5] = uVar28;
      param_1[4] = uVar27;
      param_1[7] = uVar26;
      param_1[6] = uVar25;
      uVar22 = *puVar12;
      uVar24 = param_2[-9];
      uVar23 = param_2[-10];
      param_1[1] = param_2[-0xb];
      *param_1 = uVar22;
      param_1[3] = uVar24;
      param_1[2] = uVar23;
LAB_10aadd12c:
      param_2[-0xb] = uStack_c8;
      *puVar12 = uStack_d0;
      param_2[-9] = uStack_b8;
      param_2[-10] = uStack_c0;
      param_2[-3] = uStack_88;
      param_2[-4] = uStack_90;
      param_2[-1] = uStack_78;
      param_2[-2] = uStack_80;
      param_2[-7] = uStack_a8;
      param_2[-8] = uStack_b0;
      param_2[-5] = uStack_98;
      param_2[-6] = uStack_a0;
      return;
    }
    if (uVar18 < 2) {
      return;
    }
    if (uVar18 == 2) {
      puVar8 = puVar12;
      FUN_10aad30c4(puVar12,param_1);
      if ((int)puVar8 == 0) {
        return;
      }
      goto LAB_10aadd0fc;
    }
LAB_10aadc32c:
    if ((long)uVar19 < 0x900) {
      puVar8 = param_1 + 0xc;
      if ((uStack_138 & 1) == 0) {
        if (param_1 == param_2 || puVar8 == param_2) {
          return;
        }
        puVar12 = param_1 + -0xc;
        lVar17 = -0x60;
        lVar20 = 0x60;
        lVar16 = 0;
        do {
          lVar14 = lVar20;
          puVar9 = puVar8;
          FUN_10aad30c4(puVar8,(long)param_1 + lVar16);
          if ((int)puVar9 != 0) {
            uStack_c8 = puVar8[1];
            uStack_d0 = *puVar8;
            uStack_b8 = puVar8[3];
            uStack_c0 = puVar8[2];
            uStack_a8 = puVar8[5];
            uStack_b0 = puVar8[4];
            uStack_98 = puVar8[7];
            uStack_a0 = puVar8[6];
            uStack_88 = puVar8[9];
            uStack_90 = puVar8[8];
            uStack_78 = puVar8[0xb];
            uStack_80 = puVar8[10];
            puVar8 = puVar12;
            lVar20 = lVar17;
            do {
              puVar9 = puVar8;
              puVar9[0x1d] = puVar9[0x11];
              puVar9[0x1c] = puVar9[0x10];
              puVar9[0x1f] = puVar9[0x13];
              puVar9[0x1e] = puVar9[0x12];
              puVar9[0x21] = puVar9[0x15];
              puVar9[0x20] = puVar9[0x14];
              puVar9[0x23] = puVar9[0x17];
              puVar9[0x22] = puVar9[0x16];
              puVar9[0x19] = puVar9[0xd];
              puVar9[0x18] = puVar9[0xc];
              puVar9[0x1b] = puVar9[0xf];
              puVar9[0x1a] = puVar9[0xe];
              if (lVar20 == 0) {
LAB_10aadd694:
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10aadd698);
                (*pcVar5)();
              }
              puVar11 = &uStack_d0;
              FUN_10aad30c4(puVar11,puVar9);
              lVar20 = lVar20 + 0x60;
              puVar8 = puVar9 + -0xc;
            } while (((ulong)puVar11 & 1) != 0);
            puVar9[0xd] = uStack_c8;
            puVar9[0xc] = uStack_d0;
            puVar9[0xf] = uStack_b8;
            puVar9[0xe] = uStack_c0;
            puVar9[0x15] = uStack_88;
            puVar9[0x14] = uStack_90;
            puVar9[0x17] = uStack_78;
            puVar9[0x16] = uStack_80;
            puVar9[0x11] = uStack_a8;
            puVar9[0x10] = uStack_b0;
            puVar9[0x13] = uStack_98;
            puVar9[0x12] = uStack_a0;
          }
          lVar20 = lVar14 + 0x60;
          puVar8 = (undefined8 *)((long)param_1 + lVar20);
          puVar12 = puVar12 + 0xc;
          lVar17 = lVar17 + -0x60;
          lVar16 = lVar14;
          if (puVar8 == param_2) {
            return;
          }
        } while( true );
      }
      if (param_1 == param_2 || puVar8 == param_2) {
        return;
      }
      lVar20 = 0;
      puVar12 = param_1;
      break;
    }
    if (param_3 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uStack_138 = uVar18 - 2 >> 1;
      uVar13 = uStack_138;
      goto LAB_10aadd24c;
    }
    puVar8 = param_1 + (uVar18 >> 1) * 0xc;
    if (uVar19 < 0x3001) {
      puVar10 = param_1;
      FUN_10aad30c4(param_1,puVar8);
      puVar6 = puVar12;
      FUN_10aad30c4(puVar12,param_1);
      if (((ulong)puVar10 & 1) == 0) {
        if ((int)puVar6 != 0) {
          uStack_c8 = param_1[1];
          uStack_d0 = *param_1;
          uStack_b8 = param_1[3];
          uStack_c0 = param_1[2];
          uStack_a8 = param_1[5];
          uStack_b0 = param_1[4];
          uStack_98 = param_1[7];
          uStack_a0 = param_1[6];
          uStack_88 = param_1[9];
          uStack_90 = param_1[8];
          uStack_78 = param_1[0xb];
          uStack_80 = param_1[10];
          uVar22 = param_2[-4];
          uVar24 = param_2[-1];
          uVar23 = param_2[-2];
          uVar28 = param_2[-7];
          uVar27 = param_2[-8];
          uVar26 = param_2[-5];
          uVar25 = param_2[-6];
          param_1[9] = param_2[-3];
          param_1[8] = uVar22;
          param_1[0xb] = uVar24;
          param_1[10] = uVar23;
          param_1[5] = uVar28;
          param_1[4] = uVar27;
          param_1[7] = uVar26;
          param_1[6] = uVar25;
          uVar22 = *puVar12;
          uVar24 = param_2[-9];
          uVar23 = param_2[-10];
          param_1[1] = param_2[-0xb];
          *param_1 = uVar22;
          param_1[3] = uVar24;
          param_1[2] = uVar23;
          param_2[-0xb] = uStack_c8;
          *puVar12 = uStack_d0;
          param_2[-9] = uStack_b8;
          param_2[-10] = uStack_c0;
          param_2[-3] = uStack_88;
          param_2[-4] = uStack_90;
          param_2[-1] = uStack_78;
          param_2[-2] = uStack_80;
          param_2[-7] = uStack_a8;
          param_2[-8] = uStack_b0;
          param_2[-5] = uStack_98;
          param_2[-6] = uStack_a0;
          puVar10 = param_1;
          FUN_10aad30c4(param_1,puVar8);
          if ((int)puVar10 != 0) {
            uStack_c8 = puVar8[1];
            uStack_d0 = *puVar8;
            uStack_b8 = puVar8[3];
            uStack_c0 = puVar8[2];
            uStack_a8 = puVar8[5];
            uStack_b0 = puVar8[4];
            uStack_98 = puVar8[7];
            uStack_a0 = puVar8[6];
            uStack_88 = puVar8[9];
            uStack_90 = puVar8[8];
            uStack_78 = puVar8[0xb];
            uStack_80 = puVar8[10];
            uVar22 = param_1[8];
            uVar24 = param_1[0xb];
            uVar23 = param_1[10];
            uVar28 = param_1[5];
            uVar27 = param_1[4];
            uVar26 = param_1[7];
            uVar25 = param_1[6];
            puVar8[9] = param_1[9];
            puVar8[8] = uVar22;
            puVar8[0xb] = uVar24;
            puVar8[10] = uVar23;
            puVar8[5] = uVar28;
            puVar8[4] = uVar27;
            puVar8[7] = uVar26;
            puVar8[6] = uVar25;
            uVar22 = *param_1;
            uVar24 = param_1[3];
            uVar23 = param_1[2];
            puVar8[1] = param_1[1];
            *puVar8 = uVar22;
            puVar8[3] = uVar24;
            puVar8[2] = uVar23;
            param_1[1] = uStack_c8;
            *param_1 = uStack_d0;
            param_1[3] = uStack_b8;
            param_1[2] = uStack_c0;
            param_1[9] = uStack_88;
            param_1[8] = uStack_90;
            param_1[0xb] = uStack_78;
            param_1[10] = uStack_80;
            param_1[5] = uStack_a8;
            param_1[4] = uStack_b0;
            param_1[7] = uStack_98;
            param_1[6] = uStack_a0;
          }
        }
      }
      else {
        if ((int)puVar6 == 0) {
          uStack_c8 = puVar8[1];
          uStack_d0 = *puVar8;
          uStack_b8 = puVar8[3];
          uStack_c0 = puVar8[2];
          uStack_a8 = puVar8[5];
          uStack_b0 = puVar8[4];
          uStack_98 = puVar8[7];
          uStack_a0 = puVar8[6];
          uStack_88 = puVar8[9];
          uStack_90 = puVar8[8];
          uStack_78 = puVar8[0xb];
          uStack_80 = puVar8[10];
          uVar22 = param_1[8];
          uVar24 = param_1[0xb];
          uVar23 = param_1[10];
          uVar28 = param_1[5];
          uVar27 = param_1[4];
          uVar26 = param_1[7];
          uVar25 = param_1[6];
          puVar8[9] = param_1[9];
          puVar8[8] = uVar22;
          puVar8[0xb] = uVar24;
          puVar8[10] = uVar23;
          puVar8[5] = uVar28;
          puVar8[4] = uVar27;
          puVar8[7] = uVar26;
          puVar8[6] = uVar25;
          uVar22 = *param_1;
          uVar24 = param_1[3];
          uVar23 = param_1[2];
          puVar8[1] = param_1[1];
          *puVar8 = uVar22;
          puVar8[3] = uVar24;
          puVar8[2] = uVar23;
          param_1[1] = uStack_c8;
          *param_1 = uStack_d0;
          param_1[3] = uStack_b8;
          param_1[2] = uStack_c0;
          param_1[9] = uStack_88;
          param_1[8] = uStack_90;
          param_1[0xb] = uStack_78;
          param_1[10] = uStack_80;
          param_1[5] = uStack_a8;
          param_1[4] = uStack_b0;
          param_1[7] = uStack_98;
          param_1[6] = uStack_a0;
          puVar8 = puVar12;
          FUN_10aad30c4(puVar12,param_1);
          if ((int)puVar8 == 0) goto LAB_10aadcbbc;
          uStack_c8 = param_1[1];
          uStack_d0 = *param_1;
          uStack_b8 = param_1[3];
          uStack_c0 = param_1[2];
          uStack_a8 = param_1[5];
          uStack_b0 = param_1[4];
          uStack_98 = param_1[7];
          uStack_a0 = param_1[6];
          uStack_88 = param_1[9];
          uStack_90 = param_1[8];
          uStack_78 = param_1[0xb];
          uStack_80 = param_1[10];
          uVar22 = param_2[-4];
          uVar24 = param_2[-1];
          uVar23 = param_2[-2];
          uVar28 = param_2[-7];
          uVar27 = param_2[-8];
          uVar26 = param_2[-5];
          uVar25 = param_2[-6];
          param_1[9] = param_2[-3];
          param_1[8] = uVar22;
          param_1[0xb] = uVar24;
          param_1[10] = uVar23;
          param_1[5] = uVar28;
          param_1[4] = uVar27;
          param_1[7] = uVar26;
          param_1[6] = uVar25;
          uVar22 = *puVar12;
          uVar24 = param_2[-9];
          uVar23 = param_2[-10];
          param_1[1] = param_2[-0xb];
          *param_1 = uVar22;
          param_1[3] = uVar24;
          param_1[2] = uVar23;
        }
        else {
          uStack_c8 = puVar8[1];
          uStack_d0 = *puVar8;
          uStack_b8 = puVar8[3];
          uStack_c0 = puVar8[2];
          uStack_a8 = puVar8[5];
          uStack_b0 = puVar8[4];
          uStack_98 = puVar8[7];
          uStack_a0 = puVar8[6];
          uStack_88 = puVar8[9];
          uStack_90 = puVar8[8];
          uStack_78 = puVar8[0xb];
          uStack_80 = puVar8[10];
          uVar22 = param_2[-4];
          uVar24 = param_2[-1];
          uVar23 = param_2[-2];
          uVar28 = param_2[-7];
          uVar27 = param_2[-8];
          uVar26 = param_2[-5];
          uVar25 = param_2[-6];
          puVar8[9] = param_2[-3];
          puVar8[8] = uVar22;
          puVar8[0xb] = uVar24;
          puVar8[10] = uVar23;
          puVar8[5] = uVar28;
          puVar8[4] = uVar27;
          puVar8[7] = uVar26;
          puVar8[6] = uVar25;
          uVar22 = *puVar12;
          uVar24 = param_2[-9];
          uVar23 = param_2[-10];
          puVar8[1] = param_2[-0xb];
          *puVar8 = uVar22;
          puVar8[3] = uVar24;
          puVar8[2] = uVar23;
        }
        param_2[-0xb] = uStack_c8;
        *puVar12 = uStack_d0;
        param_2[-9] = uStack_b8;
        param_2[-10] = uStack_c0;
        param_2[-3] = uStack_88;
        param_2[-4] = uStack_90;
        param_2[-1] = uStack_78;
        param_2[-2] = uStack_80;
        param_2[-7] = uStack_a8;
        param_2[-8] = uStack_b0;
        param_2[-5] = uStack_98;
        param_2[-6] = uStack_a0;
      }
    }
    else {
      puVar10 = puVar8;
      FUN_10aad30c4(puVar8,param_1);
      puVar6 = puVar12;
      FUN_10aad30c4(puVar12,puVar8);
      if (((ulong)puVar10 & 1) == 0) {
        if ((int)puVar6 != 0) {
          uStack_c8 = puVar8[1];
          uStack_d0 = *puVar8;
          uStack_b8 = puVar8[3];
          uStack_c0 = puVar8[2];
          uStack_a8 = puVar8[5];
          uStack_b0 = puVar8[4];
          uStack_98 = puVar8[7];
          uStack_a0 = puVar8[6];
          uStack_88 = puVar8[9];
          uStack_90 = puVar8[8];
          uStack_78 = puVar8[0xb];
          uStack_80 = puVar8[10];
          uVar22 = param_2[-4];
          uVar24 = param_2[-1];
          uVar23 = param_2[-2];
          uVar28 = param_2[-7];
          uVar27 = param_2[-8];
          uVar26 = param_2[-5];
          uVar25 = param_2[-6];
          puVar8[9] = param_2[-3];
          puVar8[8] = uVar22;
          puVar8[0xb] = uVar24;
          puVar8[10] = uVar23;
          puVar8[5] = uVar28;
          puVar8[4] = uVar27;
          puVar8[7] = uVar26;
          puVar8[6] = uVar25;
          uVar22 = *puVar12;
          uVar24 = param_2[-9];
          uVar23 = param_2[-10];
          puVar8[1] = param_2[-0xb];
          *puVar8 = uVar22;
          puVar8[3] = uVar24;
          puVar8[2] = uVar23;
          param_2[-0xb] = uStack_c8;
          *puVar12 = uStack_d0;
          param_2[-9] = uStack_b8;
          param_2[-10] = uStack_c0;
          param_2[-3] = uStack_88;
          param_2[-4] = uStack_90;
          param_2[-1] = uStack_78;
          param_2[-2] = uStack_80;
          param_2[-7] = uStack_a8;
          param_2[-8] = uStack_b0;
          param_2[-5] = uStack_98;
          param_2[-6] = uStack_a0;
          puVar10 = puVar8;
          FUN_10aad30c4(puVar8,param_1);
          if ((int)puVar10 != 0) {
            uStack_c8 = param_1[1];
            uStack_d0 = *param_1;
            uStack_b8 = param_1[3];
            uStack_c0 = param_1[2];
            uStack_a8 = param_1[5];
            uStack_b0 = param_1[4];
            uStack_98 = param_1[7];
            uStack_a0 = param_1[6];
            uStack_88 = param_1[9];
            uStack_90 = param_1[8];
            uStack_78 = param_1[0xb];
            uStack_80 = param_1[10];
            uVar22 = puVar8[8];
            uVar24 = puVar8[0xb];
            uVar23 = puVar8[10];
            uVar28 = puVar8[5];
            uVar27 = puVar8[4];
            uVar26 = puVar8[7];
            uVar25 = puVar8[6];
            param_1[9] = puVar8[9];
            param_1[8] = uVar22;
            param_1[0xb] = uVar24;
            param_1[10] = uVar23;
            param_1[5] = uVar28;
            param_1[4] = uVar27;
            param_1[7] = uVar26;
            param_1[6] = uVar25;
            uVar22 = *puVar8;
            uVar24 = puVar8[3];
            uVar23 = puVar8[2];
            param_1[1] = puVar8[1];
            *param_1 = uVar22;
            param_1[3] = uVar24;
            param_1[2] = uVar23;
            puVar8[1] = uStack_c8;
            *puVar8 = uStack_d0;
            puVar8[3] = uStack_b8;
            puVar8[2] = uStack_c0;
            puVar8[9] = uStack_88;
            puVar8[8] = uStack_90;
            puVar8[0xb] = uStack_78;
            puVar8[10] = uStack_80;
            puVar8[5] = uStack_a8;
            puVar8[4] = uStack_b0;
            puVar8[7] = uStack_98;
            puVar8[6] = uStack_a0;
          }
        }
      }
      else {
        if ((int)puVar6 == 0) {
          uStack_c8 = param_1[1];
          uStack_d0 = *param_1;
          uStack_b8 = param_1[3];
          uStack_c0 = param_1[2];
          uStack_a8 = param_1[5];
          uStack_b0 = param_1[4];
          uStack_98 = param_1[7];
          uStack_a0 = param_1[6];
          uStack_88 = param_1[9];
          uStack_90 = param_1[8];
          uStack_78 = param_1[0xb];
          uStack_80 = param_1[10];
          uVar22 = puVar8[8];
          uVar24 = puVar8[0xb];
          uVar23 = puVar8[10];
          uVar28 = puVar8[5];
          uVar27 = puVar8[4];
          uVar26 = puVar8[7];
          uVar25 = puVar8[6];
          param_1[9] = puVar8[9];
          param_1[8] = uVar22;
          param_1[0xb] = uVar24;
          param_1[10] = uVar23;
          param_1[5] = uVar28;
          param_1[4] = uVar27;
          param_1[7] = uVar26;
          param_1[6] = uVar25;
          uVar22 = *puVar8;
          uVar24 = puVar8[3];
          uVar23 = puVar8[2];
          param_1[1] = puVar8[1];
          *param_1 = uVar22;
          param_1[3] = uVar24;
          param_1[2] = uVar23;
          puVar8[1] = uStack_c8;
          *puVar8 = uStack_d0;
          puVar8[3] = uStack_b8;
          puVar8[2] = uStack_c0;
          puVar8[9] = uStack_88;
          puVar8[8] = uStack_90;
          puVar8[0xb] = uStack_78;
          puVar8[10] = uStack_80;
          puVar8[5] = uStack_a8;
          puVar8[4] = uStack_b0;
          puVar8[7] = uStack_98;
          puVar8[6] = uStack_a0;
          puVar10 = puVar12;
          FUN_10aad30c4(puVar12,puVar8);
          if ((int)puVar10 == 0) goto LAB_10aadc5ec;
          uStack_c8 = puVar8[1];
          uStack_d0 = *puVar8;
          uStack_b8 = puVar8[3];
          uStack_c0 = puVar8[2];
          uStack_a8 = puVar8[5];
          uStack_b0 = puVar8[4];
          uStack_98 = puVar8[7];
          uStack_a0 = puVar8[6];
          uStack_88 = puVar8[9];
          uStack_90 = puVar8[8];
          uStack_78 = puVar8[0xb];
          uStack_80 = puVar8[10];
          uVar22 = param_2[-4];
          uVar24 = param_2[-1];
          uVar23 = param_2[-2];
          uVar28 = param_2[-7];
          uVar27 = param_2[-8];
          uVar26 = param_2[-5];
          uVar25 = param_2[-6];
          puVar8[9] = param_2[-3];
          puVar8[8] = uVar22;
          puVar8[0xb] = uVar24;
          puVar8[10] = uVar23;
          puVar8[5] = uVar28;
          puVar8[4] = uVar27;
          puVar8[7] = uVar26;
          puVar8[6] = uVar25;
          uVar22 = *puVar12;
          uVar24 = param_2[-9];
          uVar23 = param_2[-10];
          puVar8[1] = param_2[-0xb];
          *puVar8 = uVar22;
          puVar8[3] = uVar24;
          puVar8[2] = uVar23;
        }
        else {
          uStack_c8 = param_1[1];
          uStack_d0 = *param_1;
          uStack_b8 = param_1[3];
          uStack_c0 = param_1[2];
          uStack_a8 = param_1[5];
          uStack_b0 = param_1[4];
          uStack_98 = param_1[7];
          uStack_a0 = param_1[6];
          uStack_88 = param_1[9];
          uStack_90 = param_1[8];
          uStack_78 = param_1[0xb];
          uStack_80 = param_1[10];
          uVar22 = param_2[-4];
          uVar24 = param_2[-1];
          uVar23 = param_2[-2];
          uVar28 = param_2[-7];
          uVar27 = param_2[-8];
          uVar26 = param_2[-5];
          uVar25 = param_2[-6];
          param_1[9] = param_2[-3];
          param_1[8] = uVar22;
          param_1[0xb] = uVar24;
          param_1[10] = uVar23;
          param_1[5] = uVar28;
          param_1[4] = uVar27;
          param_1[7] = uVar26;
          param_1[6] = uVar25;
          uVar22 = *puVar12;
          uVar24 = param_2[-9];
          uVar23 = param_2[-10];
          param_1[1] = param_2[-0xb];
          *param_1 = uVar22;
          param_1[3] = uVar24;
          param_1[2] = uVar23;
        }
        param_2[-0xb] = uStack_c8;
        *puVar12 = uStack_d0;
        param_2[-9] = uStack_b8;
        param_2[-10] = uStack_c0;
        param_2[-3] = uStack_88;
        param_2[-4] = uStack_90;
        param_2[-1] = uStack_78;
        param_2[-2] = uStack_80;
        param_2[-7] = uStack_a8;
        param_2[-8] = uStack_b0;
        param_2[-5] = uStack_98;
        param_2[-6] = uStack_a0;
      }
LAB_10aadc5ec:
      puVar21 = puVar8 + -0xc;
      puVar10 = puVar21;
      FUN_10aad30c4(puVar21,param_1 + 0xc);
      puVar6 = puVar9;
      FUN_10aad30c4(puVar9,puVar21);
      if (((ulong)puVar10 & 1) == 0) {
        if ((int)puVar6 != 0) {
          uStack_c8 = puVar8[-0xb];
          uStack_d0 = *puVar21;
          uStack_b8 = puVar8[-9];
          uStack_c0 = puVar8[-10];
          uStack_a8 = puVar8[-7];
          uStack_b0 = puVar8[-8];
          uStack_98 = puVar8[-5];
          uStack_a0 = puVar8[-6];
          uStack_88 = puVar8[-3];
          uStack_90 = puVar8[-4];
          uStack_78 = puVar8[-1];
          uStack_80 = puVar8[-2];
          uVar22 = param_2[-0x10];
          uVar24 = param_2[-0xd];
          uVar23 = param_2[-0xe];
          uVar28 = param_2[-0x13];
          uVar27 = param_2[-0x14];
          uVar26 = param_2[-0x11];
          uVar25 = param_2[-0x12];
          puVar8[-3] = param_2[-0xf];
          puVar8[-4] = uVar22;
          puVar8[-1] = uVar24;
          puVar8[-2] = uVar23;
          puVar8[-7] = uVar28;
          puVar8[-8] = uVar27;
          puVar8[-5] = uVar26;
          puVar8[-6] = uVar25;
          uVar22 = *puVar9;
          uVar24 = param_2[-0x15];
          uVar23 = param_2[-0x16];
          puVar8[-0xb] = param_2[-0x17];
          *puVar21 = uVar22;
          puVar8[-9] = uVar24;
          puVar8[-10] = uVar23;
          param_2[-0x17] = uStack_c8;
          *puVar9 = uStack_d0;
          param_2[-0x15] = uStack_b8;
          param_2[-0x16] = uStack_c0;
          param_2[-0xf] = uStack_88;
          param_2[-0x10] = uStack_90;
          param_2[-0xd] = uStack_78;
          param_2[-0xe] = uStack_80;
          param_2[-0x13] = uStack_a8;
          param_2[-0x14] = uStack_b0;
          param_2[-0x11] = uStack_98;
          param_2[-0x12] = uStack_a0;
          puVar10 = puVar21;
          FUN_10aad30c4(puVar21,param_1 + 0xc);
          if ((int)puVar10 != 0) {
            uStack_a8 = param_1[0x11];
            uStack_b0 = param_1[0x10];
            uStack_98 = param_1[0x13];
            uStack_a0 = param_1[0x12];
            uStack_88 = param_1[0x15];
            uStack_90 = param_1[0x14];
            uStack_78 = param_1[0x17];
            uStack_80 = param_1[0x16];
            uStack_c8 = param_1[0xd];
            uStack_d0 = param_1[0xc];
            uStack_b8 = param_1[0xf];
            uStack_c0 = param_1[0xe];
            uVar22 = *puVar21;
            uVar24 = puVar8[-9];
            uVar23 = puVar8[-10];
            param_1[0xd] = puVar8[-0xb];
            param_1[0xc] = uVar22;
            param_1[0xf] = uVar24;
            param_1[0xe] = uVar23;
            uVar22 = puVar8[-4];
            uVar24 = puVar8[-1];
            uVar23 = puVar8[-2];
            uVar28 = puVar8[-7];
            uVar27 = puVar8[-8];
            uVar26 = puVar8[-5];
            uVar25 = puVar8[-6];
            param_1[0x15] = puVar8[-3];
            param_1[0x14] = uVar22;
            param_1[0x17] = uVar24;
            param_1[0x16] = uVar23;
            param_1[0x11] = uVar28;
            param_1[0x10] = uVar27;
            param_1[0x13] = uVar26;
            param_1[0x12] = uVar25;
            puVar8[-0xb] = uStack_c8;
            *puVar21 = uStack_d0;
            puVar8[-9] = uStack_b8;
            puVar8[-10] = uStack_c0;
            puVar8[-3] = uStack_88;
            puVar8[-4] = uStack_90;
            puVar8[-1] = uStack_78;
            puVar8[-2] = uStack_80;
            puVar8[-7] = uStack_a8;
            puVar8[-8] = uStack_b0;
            puVar8[-5] = uStack_98;
            puVar8[-6] = uStack_a0;
          }
        }
      }
      else {
        if ((int)puVar6 == 0) {
          uStack_a8 = param_1[0x11];
          uStack_b0 = param_1[0x10];
          uStack_98 = param_1[0x13];
          uStack_a0 = param_1[0x12];
          uStack_88 = param_1[0x15];
          uStack_90 = param_1[0x14];
          uStack_78 = param_1[0x17];
          uStack_80 = param_1[0x16];
          uStack_c8 = param_1[0xd];
          uStack_d0 = param_1[0xc];
          uStack_b8 = param_1[0xf];
          uStack_c0 = param_1[0xe];
          uVar22 = *puVar21;
          uVar24 = puVar8[-9];
          uVar23 = puVar8[-10];
          param_1[0xd] = puVar8[-0xb];
          param_1[0xc] = uVar22;
          param_1[0xf] = uVar24;
          param_1[0xe] = uVar23;
          uVar22 = puVar8[-4];
          uVar24 = puVar8[-1];
          uVar23 = puVar8[-2];
          uVar28 = puVar8[-7];
          uVar27 = puVar8[-8];
          uVar26 = puVar8[-5];
          uVar25 = puVar8[-6];
          param_1[0x15] = puVar8[-3];
          param_1[0x14] = uVar22;
          param_1[0x17] = uVar24;
          param_1[0x16] = uVar23;
          param_1[0x11] = uVar28;
          param_1[0x10] = uVar27;
          param_1[0x13] = uVar26;
          param_1[0x12] = uVar25;
          puVar8[-0xb] = uStack_c8;
          *puVar21 = uStack_d0;
          puVar8[-9] = uStack_b8;
          puVar8[-10] = uStack_c0;
          puVar8[-3] = uStack_88;
          puVar8[-4] = uStack_90;
          puVar8[-1] = uStack_78;
          puVar8[-2] = uStack_80;
          puVar8[-7] = uStack_a8;
          puVar8[-8] = uStack_b0;
          puVar8[-5] = uStack_98;
          puVar8[-6] = uStack_a0;
          puVar10 = puVar9;
          FUN_10aad30c4(puVar9,puVar21);
          if ((int)puVar10 == 0) goto LAB_10aadc834;
          uStack_c8 = puVar8[-0xb];
          uStack_d0 = *puVar21;
          uStack_b8 = puVar8[-9];
          uStack_c0 = puVar8[-10];
          uStack_a8 = puVar8[-7];
          uStack_b0 = puVar8[-8];
          uStack_98 = puVar8[-5];
          uStack_a0 = puVar8[-6];
          uStack_88 = puVar8[-3];
          uStack_90 = puVar8[-4];
          uStack_78 = puVar8[-1];
          uStack_80 = puVar8[-2];
          uVar22 = param_2[-0x10];
          uVar24 = param_2[-0xd];
          uVar23 = param_2[-0xe];
          uVar28 = param_2[-0x13];
          uVar27 = param_2[-0x14];
          uVar26 = param_2[-0x11];
          uVar25 = param_2[-0x12];
          puVar8[-3] = param_2[-0xf];
          puVar8[-4] = uVar22;
          puVar8[-1] = uVar24;
          puVar8[-2] = uVar23;
          puVar8[-7] = uVar28;
          puVar8[-8] = uVar27;
          puVar8[-5] = uVar26;
          puVar8[-6] = uVar25;
          uVar22 = *puVar9;
          uVar24 = param_2[-0x15];
          uVar23 = param_2[-0x16];
          puVar8[-0xb] = param_2[-0x17];
          *puVar21 = uVar22;
          puVar8[-9] = uVar24;
          puVar8[-10] = uVar23;
        }
        else {
          uStack_a8 = param_1[0x11];
          uStack_b0 = param_1[0x10];
          uStack_98 = param_1[0x13];
          uStack_a0 = param_1[0x12];
          uStack_88 = param_1[0x15];
          uStack_90 = param_1[0x14];
          uStack_78 = param_1[0x17];
          uStack_80 = param_1[0x16];
          uStack_c8 = param_1[0xd];
          uStack_d0 = param_1[0xc];
          uStack_b8 = param_1[0xf];
          uStack_c0 = param_1[0xe];
          uVar22 = *puVar9;
          uVar24 = param_2[-0x15];
          uVar23 = param_2[-0x16];
          param_1[0xd] = param_2[-0x17];
          param_1[0xc] = uVar22;
          param_1[0xf] = uVar24;
          param_1[0xe] = uVar23;
          uVar22 = param_2[-0x10];
          uVar24 = param_2[-0xd];
          uVar23 = param_2[-0xe];
          uVar28 = param_2[-0x13];
          uVar27 = param_2[-0x14];
          uVar26 = param_2[-0x11];
          uVar25 = param_2[-0x12];
          param_1[0x15] = param_2[-0xf];
          param_1[0x14] = uVar22;
          param_1[0x17] = uVar24;
          param_1[0x16] = uVar23;
          param_1[0x11] = uVar28;
          param_1[0x10] = uVar27;
          param_1[0x13] = uVar26;
          param_1[0x12] = uVar25;
        }
        param_2[-0x17] = uStack_c8;
        *puVar9 = uStack_d0;
        param_2[-0x15] = uStack_b8;
        param_2[-0x16] = uStack_c0;
        param_2[-0xf] = uStack_88;
        param_2[-0x10] = uStack_90;
        param_2[-0xd] = uStack_78;
        param_2[-0xe] = uStack_80;
        param_2[-0x13] = uStack_a8;
        param_2[-0x14] = uStack_b0;
        param_2[-0x11] = uStack_98;
        param_2[-0x12] = uStack_a0;
      }
LAB_10aadc834:
      puVar10 = puVar8 + 0xc;
      FUN_10aad30c4(puVar10,param_1 + 0x18);
      puVar6 = puVar11;
      FUN_10aad30c4(puVar11,puVar8 + 0xc);
      if (((ulong)puVar10 & 1) == 0) {
        if ((int)puVar6 != 0) {
          uStack_c8 = puVar8[0xd];
          uStack_d0 = puVar8[0xc];
          uStack_b8 = puVar8[0xf];
          uStack_c0 = puVar8[0xe];
          uStack_a8 = puVar8[0x11];
          uStack_b0 = puVar8[0x10];
          uStack_98 = puVar8[0x13];
          uStack_a0 = puVar8[0x12];
          uStack_88 = puVar8[0x15];
          uStack_90 = puVar8[0x14];
          uStack_78 = puVar8[0x17];
          uStack_80 = puVar8[0x16];
          uVar22 = param_2[-0x1c];
          uVar24 = param_2[-0x19];
          uVar23 = param_2[-0x1a];
          uVar28 = param_2[-0x1f];
          uVar27 = param_2[-0x20];
          uVar26 = param_2[-0x1d];
          uVar25 = param_2[-0x1e];
          puVar8[0x15] = param_2[-0x1b];
          puVar8[0x14] = uVar22;
          puVar8[0x17] = uVar24;
          puVar8[0x16] = uVar23;
          puVar8[0x11] = uVar28;
          puVar8[0x10] = uVar27;
          puVar8[0x13] = uVar26;
          puVar8[0x12] = uVar25;
          uVar22 = *puVar11;
          uVar24 = param_2[-0x21];
          uVar23 = param_2[-0x22];
          puVar8[0xd] = param_2[-0x23];
          puVar8[0xc] = uVar22;
          puVar8[0xf] = uVar24;
          puVar8[0xe] = uVar23;
          param_2[-0x23] = uStack_c8;
          *puVar11 = uStack_d0;
          param_2[-0x21] = uStack_b8;
          param_2[-0x22] = uStack_c0;
          param_2[-0x1b] = uStack_88;
          param_2[-0x1c] = uStack_90;
          param_2[-0x19] = uStack_78;
          param_2[-0x1a] = uStack_80;
          param_2[-0x1f] = uStack_a8;
          param_2[-0x20] = uStack_b0;
          param_2[-0x1d] = uStack_98;
          param_2[-0x1e] = uStack_a0;
          puVar10 = puVar8 + 0xc;
          FUN_10aad30c4(puVar10,param_1 + 0x18);
          if ((int)puVar10 != 0) {
            uStack_a8 = param_1[0x1d];
            uStack_b0 = param_1[0x1c];
            uStack_98 = param_1[0x1f];
            uStack_a0 = param_1[0x1e];
            uStack_88 = param_1[0x21];
            uStack_90 = param_1[0x20];
            uStack_78 = param_1[0x23];
            uStack_80 = param_1[0x22];
            uStack_c8 = param_1[0x19];
            uStack_d0 = param_1[0x18];
            uStack_b8 = param_1[0x1b];
            uStack_c0 = param_1[0x1a];
            uVar22 = puVar8[0xc];
            uVar24 = puVar8[0xf];
            uVar23 = puVar8[0xe];
            param_1[0x19] = puVar8[0xd];
            param_1[0x18] = uVar22;
            param_1[0x1b] = uVar24;
            param_1[0x1a] = uVar23;
            uVar22 = puVar8[0x14];
            uVar24 = puVar8[0x17];
            uVar23 = puVar8[0x16];
            uVar28 = puVar8[0x11];
            uVar27 = puVar8[0x10];
            uVar26 = puVar8[0x13];
            uVar25 = puVar8[0x12];
            param_1[0x21] = puVar8[0x15];
            param_1[0x20] = uVar22;
            param_1[0x23] = uVar24;
            param_1[0x22] = uVar23;
            param_1[0x1d] = uVar28;
            param_1[0x1c] = uVar27;
            param_1[0x1f] = uVar26;
            param_1[0x1e] = uVar25;
            puVar8[0xd] = uStack_c8;
            puVar8[0xc] = uStack_d0;
            puVar8[0xf] = uStack_b8;
            puVar8[0xe] = uStack_c0;
            puVar8[0x15] = uStack_88;
            puVar8[0x14] = uStack_90;
            puVar8[0x17] = uStack_78;
            puVar8[0x16] = uStack_80;
            puVar8[0x11] = uStack_a8;
            puVar8[0x10] = uStack_b0;
            puVar8[0x13] = uStack_98;
            puVar8[0x12] = uStack_a0;
          }
        }
      }
      else {
        if ((int)puVar6 == 0) {
          uStack_a8 = param_1[0x1d];
          uStack_b0 = param_1[0x1c];
          uStack_98 = param_1[0x1f];
          uStack_a0 = param_1[0x1e];
          uStack_88 = param_1[0x21];
          uStack_90 = param_1[0x20];
          uStack_78 = param_1[0x23];
          uStack_80 = param_1[0x22];
          uStack_c8 = param_1[0x19];
          uStack_d0 = param_1[0x18];
          uStack_b8 = param_1[0x1b];
          uStack_c0 = param_1[0x1a];
          uVar22 = puVar8[0xc];
          uVar24 = puVar8[0xf];
          uVar23 = puVar8[0xe];
          param_1[0x19] = puVar8[0xd];
          param_1[0x18] = uVar22;
          param_1[0x1b] = uVar24;
          param_1[0x1a] = uVar23;
          uVar22 = puVar8[0x14];
          uVar24 = puVar8[0x17];
          uVar23 = puVar8[0x16];
          uVar28 = puVar8[0x11];
          uVar27 = puVar8[0x10];
          uVar26 = puVar8[0x13];
          uVar25 = puVar8[0x12];
          param_1[0x21] = puVar8[0x15];
          param_1[0x20] = uVar22;
          param_1[0x23] = uVar24;
          param_1[0x22] = uVar23;
          param_1[0x1d] = uVar28;
          param_1[0x1c] = uVar27;
          param_1[0x1f] = uVar26;
          param_1[0x1e] = uVar25;
          puVar8[0xd] = uStack_c8;
          puVar8[0xc] = uStack_d0;
          puVar8[0xf] = uStack_b8;
          puVar8[0xe] = uStack_c0;
          puVar8[0x15] = uStack_88;
          puVar8[0x14] = uStack_90;
          puVar8[0x17] = uStack_78;
          puVar8[0x16] = uStack_80;
          puVar8[0x11] = uStack_a8;
          puVar8[0x10] = uStack_b0;
          puVar8[0x13] = uStack_98;
          puVar8[0x12] = uStack_a0;
          puVar10 = puVar11;
          FUN_10aad30c4(puVar11,puVar8 + 0xc);
          if ((int)puVar10 == 0) goto LAB_10aadc9d4;
          uStack_c8 = puVar8[0xd];
          uStack_d0 = puVar8[0xc];
          uStack_b8 = puVar8[0xf];
          uStack_c0 = puVar8[0xe];
          uStack_a8 = puVar8[0x11];
          uStack_b0 = puVar8[0x10];
          uStack_98 = puVar8[0x13];
          uStack_a0 = puVar8[0x12];
          uStack_88 = puVar8[0x15];
          uStack_90 = puVar8[0x14];
          uStack_78 = puVar8[0x17];
          uStack_80 = puVar8[0x16];
          uVar22 = param_2[-0x1c];
          uVar24 = param_2[-0x19];
          uVar23 = param_2[-0x1a];
          uVar28 = param_2[-0x1f];
          uVar27 = param_2[-0x20];
          uVar26 = param_2[-0x1d];
          uVar25 = param_2[-0x1e];
          puVar8[0x15] = param_2[-0x1b];
          puVar8[0x14] = uVar22;
          puVar8[0x17] = uVar24;
          puVar8[0x16] = uVar23;
          puVar8[0x11] = uVar28;
          puVar8[0x10] = uVar27;
          puVar8[0x13] = uVar26;
          puVar8[0x12] = uVar25;
          uVar22 = *puVar11;
          uVar24 = param_2[-0x21];
          uVar23 = param_2[-0x22];
          puVar8[0xd] = param_2[-0x23];
          puVar8[0xc] = uVar22;
          puVar8[0xf] = uVar24;
          puVar8[0xe] = uVar23;
        }
        else {
          uStack_a8 = param_1[0x1d];
          uStack_b0 = param_1[0x1c];
          uStack_98 = param_1[0x1f];
          uStack_a0 = param_1[0x1e];
          uStack_88 = param_1[0x21];
          uStack_90 = param_1[0x20];
          uStack_78 = param_1[0x23];
          uStack_80 = param_1[0x22];
          uStack_c8 = param_1[0x19];
          uStack_d0 = param_1[0x18];
          uStack_b8 = param_1[0x1b];
          uStack_c0 = param_1[0x1a];
          uVar22 = *puVar11;
          uVar24 = param_2[-0x21];
          uVar23 = param_2[-0x22];
          param_1[0x19] = param_2[-0x23];
          param_1[0x18] = uVar22;
          param_1[0x1b] = uVar24;
          param_1[0x1a] = uVar23;
          uVar22 = param_2[-0x1c];
          uVar24 = param_2[-0x19];
          uVar23 = param_2[-0x1a];
          uVar28 = param_2[-0x1f];
          uVar27 = param_2[-0x20];
          uVar26 = param_2[-0x1d];
          uVar25 = param_2[-0x1e];
          param_1[0x21] = param_2[-0x1b];
          param_1[0x20] = uVar22;
          param_1[0x23] = uVar24;
          param_1[0x22] = uVar23;
          param_1[0x1d] = uVar28;
          param_1[0x1c] = uVar27;
          param_1[0x1f] = uVar26;
          param_1[0x1e] = uVar25;
        }
        param_2[-0x23] = uStack_c8;
        *puVar11 = uStack_d0;
        param_2[-0x21] = uStack_b8;
        param_2[-0x22] = uStack_c0;
        param_2[-0x1b] = uStack_88;
        param_2[-0x1c] = uStack_90;
        param_2[-0x19] = uStack_78;
        param_2[-0x1a] = uStack_80;
        param_2[-0x1f] = uStack_a8;
        param_2[-0x20] = uStack_b0;
        param_2[-0x1d] = uStack_98;
        param_2[-0x1e] = uStack_a0;
      }
LAB_10aadc9d4:
      puVar6 = puVar8;
      FUN_10aad30c4(puVar8,puVar21);
      puVar10 = puVar8 + 0xc;
      FUN_10aad30c4(puVar10,puVar8);
      if (((ulong)puVar6 & 1) == 0) {
        if ((int)puVar10 != 0) {
          uStack_c8 = puVar8[1];
          uStack_d0 = *puVar8;
          uStack_b8 = puVar8[3];
          uStack_c0 = puVar8[2];
          uStack_a8 = puVar8[5];
          uStack_b0 = puVar8[4];
          uStack_98 = puVar8[7];
          uStack_a0 = puVar8[6];
          uStack_88 = puVar8[9];
          uStack_90 = puVar8[8];
          uStack_78 = puVar8[0xb];
          uStack_80 = puVar8[10];
          puVar8[9] = puVar8[0x15];
          puVar8[8] = puVar8[0x14];
          puVar8[0xb] = puVar8[0x17];
          puVar8[10] = puVar8[0x16];
          puVar8[5] = puVar8[0x11];
          puVar8[4] = puVar8[0x10];
          puVar8[7] = puVar8[0x13];
          puVar8[6] = puVar8[0x12];
          puVar8[1] = puVar8[0xd];
          *puVar8 = puVar8[0xc];
          puVar8[3] = puVar8[0xf];
          puVar8[2] = puVar8[0xe];
          puVar8[0xd] = uStack_c8;
          puVar8[0xc] = uStack_d0;
          puVar8[0xf] = uStack_b8;
          puVar8[0xe] = uStack_c0;
          puVar8[0x15] = uStack_88;
          puVar8[0x14] = uStack_90;
          puVar8[0x17] = uStack_78;
          puVar8[0x16] = uStack_80;
          puVar8[0x11] = uStack_a8;
          puVar8[0x10] = uStack_b0;
          puVar8[0x13] = uStack_98;
          puVar8[0x12] = uStack_a0;
          puVar10 = puVar8;
          FUN_10aad30c4(puVar8,puVar21);
          if ((int)puVar10 != 0) {
            uVar24 = puVar8[-0xb];
            uVar22 = *puVar21;
            uVar28 = puVar8[-9];
            uVar26 = puVar8[-10];
            uVar25 = puVar8[-7];
            uVar23 = puVar8[-8];
            uVar29 = puVar8[-5];
            uVar27 = puVar8[-6];
            uVar31 = puVar8[-3];
            uVar30 = puVar8[-4];
            uVar33 = puVar8[-1];
            uVar32 = puVar8[-2];
            puVar8[-3] = puVar8[9];
            puVar8[-4] = puVar8[8];
            puVar8[-1] = puVar8[0xb];
            puVar8[-2] = puVar8[10];
            puVar8[-7] = puVar8[5];
            puVar8[-8] = puVar8[4];
            puVar8[-5] = puVar8[7];
            puVar8[-6] = puVar8[6];
            puVar8[-0xb] = puVar8[1];
            *puVar21 = *puVar8;
            puVar8[-9] = puVar8[3];
            puVar8[-10] = puVar8[2];
            puVar8[1] = uVar24;
            *puVar8 = uVar22;
            puVar8[3] = uVar28;
            puVar8[2] = uVar26;
            puVar8[9] = uVar31;
            puVar8[8] = uVar30;
            puVar8[0xb] = uVar33;
            puVar8[10] = uVar32;
            puVar8[5] = uVar25;
            puVar8[4] = uVar23;
            puVar8[7] = uVar29;
            puVar8[6] = uVar27;
          }
        }
      }
      else {
        if ((int)puVar10 == 0) {
          uStack_c8 = puVar8[-0xb];
          uStack_d0 = *puVar21;
          uStack_b8 = puVar8[-9];
          uStack_c0 = puVar8[-10];
          uStack_a8 = puVar8[-7];
          uStack_b0 = puVar8[-8];
          uStack_98 = puVar8[-5];
          uStack_a0 = puVar8[-6];
          uStack_88 = puVar8[-3];
          uStack_90 = puVar8[-4];
          uStack_78 = puVar8[-1];
          uStack_80 = puVar8[-2];
          puVar8[-3] = puVar8[9];
          puVar8[-4] = puVar8[8];
          puVar8[-1] = puVar8[0xb];
          puVar8[-2] = puVar8[10];
          puVar8[-7] = puVar8[5];
          puVar8[-8] = puVar8[4];
          puVar8[-5] = puVar8[7];
          puVar8[-6] = puVar8[6];
          puVar8[-0xb] = puVar8[1];
          *puVar21 = *puVar8;
          puVar8[-9] = puVar8[3];
          puVar8[-10] = puVar8[2];
          puVar8[1] = uStack_c8;
          *puVar8 = uStack_d0;
          puVar8[3] = uStack_b8;
          puVar8[2] = uStack_c0;
          puVar8[9] = uStack_88;
          puVar8[8] = uStack_90;
          puVar8[0xb] = uStack_78;
          puVar8[10] = uStack_80;
          puVar8[5] = uStack_a8;
          puVar8[4] = uStack_b0;
          puVar8[7] = uStack_98;
          puVar8[6] = uStack_a0;
          puVar10 = puVar8 + 0xc;
          FUN_10aad30c4(puVar10,puVar8);
          if ((int)puVar10 == 0) goto LAB_10aadcb74;
          uStack_c8 = puVar8[1];
          uStack_d0 = *puVar8;
          uStack_b8 = puVar8[3];
          uStack_c0 = puVar8[2];
          uStack_a8 = puVar8[5];
          uStack_b0 = puVar8[4];
          uStack_98 = puVar8[7];
          uStack_a0 = puVar8[6];
          uStack_88 = puVar8[9];
          uStack_90 = puVar8[8];
          uStack_78 = puVar8[0xb];
          uStack_80 = puVar8[10];
          puVar8[9] = puVar8[0x15];
          puVar8[8] = puVar8[0x14];
          puVar8[0xb] = puVar8[0x17];
          puVar8[10] = puVar8[0x16];
          puVar8[5] = puVar8[0x11];
          puVar8[4] = puVar8[0x10];
          puVar8[7] = puVar8[0x13];
          puVar8[6] = puVar8[0x12];
          puVar8[1] = puVar8[0xd];
          *puVar8 = puVar8[0xc];
          puVar8[3] = puVar8[0xf];
          puVar8[2] = puVar8[0xe];
        }
        else {
          uStack_c8 = puVar8[-0xb];
          uStack_d0 = *puVar21;
          uStack_b8 = puVar8[-9];
          uStack_c0 = puVar8[-10];
          uStack_a8 = puVar8[-7];
          uStack_b0 = puVar8[-8];
          uStack_98 = puVar8[-5];
          uStack_a0 = puVar8[-6];
          uStack_88 = puVar8[-3];
          uStack_90 = puVar8[-4];
          uStack_78 = puVar8[-1];
          uStack_80 = puVar8[-2];
          puVar8[-3] = puVar8[0x15];
          puVar8[-4] = puVar8[0x14];
          puVar8[-1] = puVar8[0x17];
          puVar8[-2] = puVar8[0x16];
          puVar8[-7] = puVar8[0x11];
          puVar8[-8] = puVar8[0x10];
          puVar8[-5] = puVar8[0x13];
          puVar8[-6] = puVar8[0x12];
          puVar8[-0xb] = puVar8[0xd];
          *puVar21 = puVar8[0xc];
          puVar8[-9] = puVar8[0xf];
          puVar8[-10] = puVar8[0xe];
        }
        puVar8[0xd] = uStack_c8;
        puVar8[0xc] = uStack_d0;
        puVar8[0xf] = uStack_b8;
        puVar8[0xe] = uStack_c0;
        puVar8[0x15] = uStack_88;
        puVar8[0x14] = uStack_90;
        puVar8[0x17] = uStack_78;
        puVar8[0x16] = uStack_80;
        puVar8[0x11] = uStack_a8;
        puVar8[0x10] = uStack_b0;
        puVar8[0x13] = uStack_98;
        puVar8[0x12] = uStack_a0;
      }
LAB_10aadcb74:
      uStack_c8 = param_1[1];
      uStack_d0 = *param_1;
      uStack_b8 = param_1[3];
      uStack_c0 = param_1[2];
      uStack_a8 = param_1[5];
      uStack_b0 = param_1[4];
      uStack_98 = param_1[7];
      uStack_a0 = param_1[6];
      uStack_88 = param_1[9];
      uStack_90 = param_1[8];
      uStack_78 = param_1[0xb];
      uStack_80 = param_1[10];
      uVar22 = puVar8[8];
      uVar24 = puVar8[0xb];
      uVar23 = puVar8[10];
      uVar28 = puVar8[5];
      uVar27 = puVar8[4];
      uVar26 = puVar8[7];
      uVar25 = puVar8[6];
      param_1[9] = puVar8[9];
      param_1[8] = uVar22;
      param_1[0xb] = uVar24;
      param_1[10] = uVar23;
      param_1[5] = uVar28;
      param_1[4] = uVar27;
      param_1[7] = uVar26;
      param_1[6] = uVar25;
      uVar22 = *puVar8;
      uVar24 = puVar8[3];
      uVar23 = puVar8[2];
      param_1[1] = puVar8[1];
      *param_1 = uVar22;
      param_1[3] = uVar24;
      param_1[2] = uVar23;
      puVar8[1] = uStack_c8;
      *puVar8 = uStack_d0;
      puVar8[3] = uStack_b8;
      puVar8[2] = uStack_c0;
      puVar8[9] = uStack_88;
      puVar8[8] = uStack_90;
      puVar8[0xb] = uStack_78;
      puVar8[10] = uStack_80;
      puVar8[5] = uStack_a8;
      puVar8[4] = uStack_b0;
      puVar8[7] = uStack_98;
      puVar8[6] = uStack_a0;
    }
LAB_10aadcbbc:
    param_3 = param_3 + -1;
    if ((uStack_138 & 1) != 0) {
LAB_10aadcbd8:
      lVar20 = 0;
      uStack_128 = param_1[1];
      uStack_130 = *param_1;
      uStack_118 = param_1[3];
      uStack_120 = param_1[2];
      uStack_108 = param_1[5];
      uStack_110 = param_1[4];
      uStack_f8 = param_1[7];
      uStack_100 = param_1[6];
      uStack_e8 = param_1[9];
      uStack_f0 = param_1[8];
      uStack_d8 = param_1[0xb];
      uStack_e0 = param_1[10];
      do {
        puVar8 = (undefined8 *)((long)param_1 + lVar20 + 0x60);
        if (puVar8 == param_2) goto LAB_10aadd694;
        FUN_10aad30c4(puVar8,&uStack_130);
        lVar20 = lVar20 + 0x60;
      } while (((ulong)puVar8 & 1) != 0);
      puVar10 = (undefined8 *)((long)param_1 + lVar20);
      puVar6 = param_2;
      if (lVar20 == 0x60) {
        do {
          if (puVar6 <= puVar10) break;
          puVar6 = puVar6 + -0xc;
          puVar8 = puVar6;
          FUN_10aad30c4(puVar6,&uStack_130);
        } while (((ulong)puVar8 & 1) == 0);
      }
      else {
        do {
          if (puVar6 == param_1) goto LAB_10aadd694;
          puVar6 = puVar6 + -0xc;
          puVar8 = puVar6;
          FUN_10aad30c4(puVar6,&uStack_130);
        } while ((int)puVar8 == 0);
      }
      puVar8 = puVar10;
      puVar21 = puVar6;
      if (puVar10 < puVar6) {
        do {
          uStack_c8 = puVar8[1];
          uStack_d0 = *puVar8;
          uStack_b8 = puVar8[3];
          uStack_c0 = puVar8[2];
          uStack_a8 = puVar8[5];
          uStack_b0 = puVar8[4];
          uStack_98 = puVar8[7];
          uStack_a0 = puVar8[6];
          uStack_88 = puVar8[9];
          uStack_90 = puVar8[8];
          uStack_78 = puVar8[0xb];
          uStack_80 = puVar8[10];
          uVar22 = puVar21[8];
          uVar24 = puVar21[0xb];
          uVar23 = puVar21[10];
          uVar28 = puVar21[5];
          uVar27 = puVar21[4];
          uVar26 = puVar21[7];
          uVar25 = puVar21[6];
          puVar8[9] = puVar21[9];
          puVar8[8] = uVar22;
          puVar8[0xb] = uVar24;
          puVar8[10] = uVar23;
          puVar8[5] = uVar28;
          puVar8[4] = uVar27;
          puVar8[7] = uVar26;
          puVar8[6] = uVar25;
          uVar22 = *puVar21;
          uVar24 = puVar21[3];
          uVar23 = puVar21[2];
          puVar8[1] = puVar21[1];
          *puVar8 = uVar22;
          puVar8[3] = uVar24;
          puVar8[2] = uVar23;
          puVar21[1] = uStack_c8;
          *puVar21 = uStack_d0;
          puVar21[3] = uStack_b8;
          puVar21[2] = uStack_c0;
          puVar21[9] = uStack_88;
          puVar21[8] = uStack_90;
          puVar21[0xb] = uStack_78;
          puVar21[10] = uStack_80;
          puVar21[5] = uStack_a8;
          puVar21[4] = uStack_b0;
          puVar21[7] = uStack_98;
          puVar21[6] = uStack_a0;
          do {
            puVar8 = puVar8 + 0xc;
            if (puVar8 == param_2) goto LAB_10aadd694;
            puVar7 = puVar8;
            FUN_10aad30c4(puVar8,&uStack_130);
          } while (((ulong)puVar7 & 1) != 0);
          do {
            if (puVar21 == param_1) goto LAB_10aadd694;
            puVar21 = puVar21 + -0xc;
            puVar7 = puVar21;
            FUN_10aad30c4(puVar21,&uStack_130);
          } while ((int)puVar7 == 0);
        } while (puVar8 < puVar21);
      }
      puVar21 = puVar8 + -0xc;
      if (puVar21 != param_1) {
        uVar22 = *puVar21;
        uVar24 = puVar8[-9];
        uVar23 = puVar8[-10];
        param_1[1] = puVar8[-0xb];
        *param_1 = uVar22;
        param_1[3] = uVar24;
        param_1[2] = uVar23;
        uVar23 = puVar8[-7];
        uVar22 = puVar8[-8];
        uVar25 = puVar8[-5];
        uVar24 = puVar8[-6];
        uVar26 = puVar8[-4];
        uVar28 = puVar8[-1];
        uVar27 = puVar8[-2];
        param_1[9] = puVar8[-3];
        param_1[8] = uVar26;
        param_1[0xb] = uVar28;
        param_1[10] = uVar27;
        param_1[5] = uVar23;
        param_1[4] = uVar22;
        param_1[7] = uVar25;
        param_1[6] = uVar24;
      }
      puVar8[-0xb] = uStack_128;
      *puVar21 = uStack_130;
      puVar8[-9] = uStack_118;
      puVar8[-10] = uStack_120;
      puVar8[-3] = uStack_e8;
      puVar8[-4] = uStack_f0;
      puVar8[-1] = uStack_d8;
      puVar8[-2] = uStack_e0;
      puVar8[-7] = uStack_108;
      puVar8[-8] = uStack_110;
      puVar8[-5] = uStack_f8;
      puVar8[-6] = uStack_100;
      if (puVar6 <= puVar10) {
        puVar10 = param_1;
        func_0x00010aadd980(param_1,puVar21);
        puVar6 = puVar8;
        func_0x00010aadd980(puVar8,param_2);
        if ((int)puVar6 != 0) goto LAB_10aadcf10;
        if (((ulong)puVar10 & 1) != 0) goto LAB_10aadc2ec;
      }
      FUN_10aadc2a4(param_1,puVar21,param_3,(uint)uStack_138 & 1);
      uStack_138 = uStack_138 & 0xffffffff00000000;
      goto LAB_10aadc2ec;
    }
    puVar8 = param_1 + -0xc;
    FUN_10aad30c4(puVar8,param_1);
    if (((ulong)puVar8 & 1) != 0) goto LAB_10aadcbd8;
    uStack_128 = param_1[1];
    uStack_130 = *param_1;
    uStack_118 = param_1[3];
    uStack_120 = param_1[2];
    uStack_108 = param_1[5];
    uStack_110 = param_1[4];
    uStack_f8 = param_1[7];
    uStack_100 = param_1[6];
    uStack_e8 = param_1[9];
    uStack_f0 = param_1[8];
    uStack_d8 = param_1[0xb];
    uStack_e0 = param_1[10];
    puVar10 = param_1;
    FUN_10aad30c4(param_1,puVar12);
    puVar8 = param_1;
    if (((ulong)puVar10 & 1) == 0) {
      do {
        puVar8 = puVar8 + 0xc;
        if (param_2 <= puVar8) break;
        puVar10 = &uStack_130;
        FUN_10aad30c4(puVar10,puVar8);
      } while ((int)puVar10 == 0);
    }
    else {
      do {
        puVar8 = puVar8 + 0xc;
        if (puVar8 == param_2) goto LAB_10aadd694;
        puVar10 = &uStack_130;
        FUN_10aad30c4(puVar10,puVar8);
      } while (((ulong)puVar10 & 1) == 0);
    }
    puVar10 = param_2;
    if (puVar8 < param_2) {
      do {
        if (puVar10 == param_1) goto LAB_10aadd694;
        puVar10 = puVar10 + -0xc;
        puVar6 = &uStack_130;
        FUN_10aad30c4(puVar6,puVar10);
      } while (((ulong)puVar6 & 1) != 0);
    }
    while (puVar8 < puVar10) {
      uStack_c8 = puVar8[1];
      uStack_d0 = *puVar8;
      uStack_b8 = puVar8[3];
      uStack_c0 = puVar8[2];
      uStack_a8 = puVar8[5];
      uStack_b0 = puVar8[4];
      uStack_98 = puVar8[7];
      uStack_a0 = puVar8[6];
      uStack_88 = puVar8[9];
      uStack_90 = puVar8[8];
      uStack_78 = puVar8[0xb];
      uStack_80 = puVar8[10];
      uVar22 = puVar10[8];
      uVar24 = puVar10[0xb];
      uVar23 = puVar10[10];
      uVar28 = puVar10[5];
      uVar27 = puVar10[4];
      uVar26 = puVar10[7];
      uVar25 = puVar10[6];
      puVar8[9] = puVar10[9];
      puVar8[8] = uVar22;
      puVar8[0xb] = uVar24;
      puVar8[10] = uVar23;
      puVar8[5] = uVar28;
      puVar8[4] = uVar27;
      puVar8[7] = uVar26;
      puVar8[6] = uVar25;
      uVar22 = *puVar10;
      uVar24 = puVar10[3];
      uVar23 = puVar10[2];
      puVar8[1] = puVar10[1];
      *puVar8 = uVar22;
      puVar8[3] = uVar24;
      puVar8[2] = uVar23;
      puVar10[1] = uStack_c8;
      *puVar10 = uStack_d0;
      puVar10[3] = uStack_b8;
      puVar10[2] = uStack_c0;
      puVar10[9] = uStack_88;
      puVar10[8] = uStack_90;
      puVar10[0xb] = uStack_78;
      puVar10[10] = uStack_80;
      puVar10[5] = uStack_a8;
      puVar10[4] = uStack_b0;
      puVar10[7] = uStack_98;
      puVar10[6] = uStack_a0;
      do {
        puVar8 = puVar8 + 0xc;
        if (puVar8 == param_2) goto LAB_10aadd694;
        puVar6 = &uStack_130;
        FUN_10aad30c4(puVar6,puVar8);
      } while ((int)puVar6 == 0);
      do {
        if (puVar10 == param_1) goto LAB_10aadd694;
        puVar10 = puVar10 + -0xc;
        puVar6 = &uStack_130;
        FUN_10aad30c4(puVar6,puVar10);
      } while (((ulong)puVar6 & 1) != 0);
    }
    puVar10 = puVar8 + -0xc;
    if (puVar10 != param_1) {
      uVar22 = *puVar10;
      uVar24 = puVar8[-9];
      uVar23 = puVar8[-10];
      param_1[1] = puVar8[-0xb];
      *param_1 = uVar22;
      param_1[3] = uVar24;
      param_1[2] = uVar23;
      uVar23 = puVar8[-7];
      uVar22 = puVar8[-8];
      uVar25 = puVar8[-5];
      uVar24 = puVar8[-6];
      uVar26 = puVar8[-4];
      uVar28 = puVar8[-1];
      uVar27 = puVar8[-2];
      param_1[9] = puVar8[-3];
      param_1[8] = uVar26;
      param_1[0xb] = uVar28;
      param_1[10] = uVar27;
      param_1[5] = uVar23;
      param_1[4] = uVar22;
      param_1[7] = uVar25;
      param_1[6] = uVar24;
    }
    uStack_138 = uStack_138 & 0xffffffff00000000;
    puVar8[-0xb] = uStack_128;
    *puVar10 = uStack_130;
    puVar8[-9] = uStack_118;
    puVar8[-10] = uStack_120;
    puVar8[-3] = uStack_e8;
    puVar8[-4] = uStack_f0;
    puVar8[-1] = uStack_d8;
    puVar8[-2] = uStack_e0;
    puVar8[-7] = uStack_108;
    puVar8[-8] = uStack_110;
    puVar8[-5] = uStack_f8;
    puVar8[-6] = uStack_100;
  } while( true );
LAB_10aadd19c:
  puVar9 = puVar8;
  FUN_10aad30c4(puVar8,puVar12);
  if ((int)puVar9 != 0) {
    uStack_c8 = puVar8[1];
    uStack_d0 = *puVar8;
    uStack_b8 = puVar8[3];
    uStack_c0 = puVar8[2];
    uStack_a8 = puVar8[5];
    uStack_b0 = puVar8[4];
    uStack_98 = puVar8[7];
    uStack_a0 = puVar8[6];
    uStack_88 = puVar8[9];
    uStack_90 = puVar8[8];
    uStack_78 = puVar8[0xb];
    uStack_80 = puVar8[10];
    lVar16 = lVar20;
    do {
      lVar17 = lVar16;
      puVar12 = (undefined8 *)((long)param_1 + lVar17);
      puVar12[0x11] = puVar12[5];
      puVar12[0x10] = puVar12[4];
      puVar12[0x13] = puVar12[7];
      puVar12[0x12] = puVar12[6];
      puVar12[0x15] = puVar12[9];
      puVar12[0x14] = puVar12[8];
      puVar12[0x17] = puVar12[0xb];
      puVar12[0x16] = puVar12[10];
      puVar12[0xd] = puVar12[1];
      puVar12[0xc] = *puVar12;
      puVar12[0xf] = puVar12[3];
      puVar12[0xe] = puVar12[2];
      puVar12 = param_1;
      if (lVar17 == 0) goto LAB_10aadd210;
      puVar12 = &uStack_d0;
      FUN_10aad30c4(puVar12,lVar17 + -0x60 + (long)param_1);
      lVar16 = lVar17 + -0x60;
    } while (((ulong)puVar12 & 1) != 0);
    puVar12 = (undefined8 *)((long)param_1 + lVar17);
LAB_10aadd210:
    puVar12[1] = uStack_c8;
    *puVar12 = uStack_d0;
    puVar12[3] = uStack_b8;
    puVar12[2] = uStack_c0;
    puVar12[9] = uStack_88;
    puVar12[8] = uStack_90;
    puVar12[0xb] = uStack_78;
    puVar12[10] = uStack_80;
    puVar12[5] = uStack_a8;
    puVar12[4] = uStack_b0;
    puVar12[7] = uStack_98;
    puVar12[6] = uStack_a0;
  }
  puVar9 = puVar8 + 0xc;
  lVar20 = lVar20 + 0x60;
  puVar12 = puVar8;
  puVar8 = puVar9;
  if (puVar9 == param_2) {
    return;
  }
  goto LAB_10aadd19c;
LAB_10aadd24c:
  do {
    if ((long)uVar13 <= (long)uStack_138) {
      uVar3 = uVar13 << 1 | 1;
      puVar12 = param_1 + uVar3 * 0xc;
      uVar2 = uVar13 * 2 + 2;
      uVar15 = uVar3;
      puVar8 = puVar12;
      if ((long)uVar2 < (long)uVar18) {
        puVar9 = puVar12;
        FUN_10aad30c4(puVar12,puVar12 + 0xc);
        uVar15 = uVar2;
        puVar8 = puVar12 + 0xc;
        if ((int)puVar9 == 0) {
          uVar15 = uVar3;
          puVar8 = puVar12;
        }
      }
      puVar9 = param_1 + uVar13 * 0xc;
      puVar12 = puVar8;
      FUN_10aad30c4(puVar8,puVar9);
      if (((ulong)puVar12 & 1) == 0) {
        uStack_c8 = puVar9[1];
        uStack_d0 = *puVar9;
        uStack_b8 = puVar9[3];
        uStack_c0 = puVar9[2];
        uStack_a8 = puVar9[5];
        uStack_b0 = puVar9[4];
        uStack_98 = puVar9[7];
        uStack_a0 = puVar9[6];
        uStack_88 = puVar9[9];
        uStack_90 = puVar9[8];
        uStack_78 = puVar9[0xb];
        uStack_80 = puVar9[10];
        do {
          puVar12 = puVar8;
          uVar22 = *puVar12;
          uVar24 = puVar12[3];
          uVar23 = puVar12[2];
          puVar9[1] = puVar12[1];
          *puVar9 = uVar22;
          puVar9[3] = uVar24;
          puVar9[2] = uVar23;
          uVar23 = puVar12[5];
          uVar22 = puVar12[4];
          uVar25 = puVar12[7];
          uVar24 = puVar12[6];
          uVar26 = puVar12[8];
          uVar28 = puVar12[0xb];
          uVar27 = puVar12[10];
          puVar9[9] = puVar12[9];
          puVar9[8] = uVar26;
          puVar9[0xb] = uVar28;
          puVar9[10] = uVar27;
          puVar9[5] = uVar23;
          puVar9[4] = uVar22;
          puVar9[7] = uVar25;
          puVar9[6] = uVar24;
          if ((long)uStack_138 < (long)uVar15) break;
          uVar3 = uVar15 << 1 | 1;
          puVar9 = param_1 + uVar3 * 0xc;
          uVar2 = uVar15 * 2 + 2;
          puVar8 = puVar9;
          uVar15 = uVar3;
          if ((long)uVar2 < (long)uVar18) {
            puVar11 = puVar9;
            FUN_10aad30c4(puVar9,puVar9 + 0xc);
            puVar8 = puVar9 + 0xc;
            uVar15 = uVar2;
            if ((int)puVar11 == 0) {
              puVar8 = puVar9;
              uVar15 = uVar3;
            }
          }
          puVar11 = puVar8;
          FUN_10aad30c4(puVar8,&uStack_d0);
          puVar9 = puVar12;
        } while ((int)puVar11 == 0);
        puVar12[1] = uStack_c8;
        *puVar12 = uStack_d0;
        puVar12[3] = uStack_b8;
        puVar12[2] = uStack_c0;
        puVar12[9] = uStack_88;
        puVar12[8] = uStack_90;
        puVar12[0xb] = uStack_78;
        puVar12[10] = uStack_80;
        puVar12[5] = uStack_a8;
        puVar12[4] = uStack_b0;
        puVar12[7] = uStack_98;
        puVar12[6] = uStack_a0;
      }
    }
    bVar4 = uVar13 != 0;
    uVar13 = uVar13 - 1;
  } while (bVar4);
  lVar20 = (uVar19 >> 5) * -0x5555555555555555;
  do {
    uVar18 = 0;
    uStack_128 = param_1[1];
    uStack_130 = *param_1;
    uStack_118 = param_1[3];
    uStack_120 = param_1[2];
    uStack_108 = param_1[5];
    uStack_110 = param_1[4];
    uStack_f8 = param_1[7];
    uStack_100 = param_1[6];
    uStack_e8 = param_1[9];
    uStack_f0 = param_1[8];
    uStack_d8 = param_1[0xb];
    uStack_e0 = param_1[10];
    puVar8 = param_1;
    do {
      puVar12 = puVar8 + uVar18 * 0xc + 0xc;
      uVar13 = uVar18 << 1 | 1;
      uVar19 = uVar18 * 2 + 2;
      puVar9 = puVar12;
      uVar2 = uVar13;
      if ((long)uVar19 < lVar20) {
        puVar11 = puVar12;
        FUN_10aad30c4(puVar12,puVar8 + uVar18 * 0xc + 0x18);
        puVar9 = puVar8 + uVar18 * 0xc + 0x18;
        uVar2 = uVar19;
        if ((int)puVar11 == 0) {
          puVar9 = puVar12;
          uVar2 = uVar13;
        }
      }
      uVar18 = uVar2;
      uVar22 = *puVar9;
      uVar24 = puVar9[3];
      uVar23 = puVar9[2];
      puVar8[1] = puVar9[1];
      *puVar8 = uVar22;
      puVar8[3] = uVar24;
      puVar8[2] = uVar23;
      uVar23 = puVar9[5];
      uVar22 = puVar9[4];
      uVar25 = puVar9[7];
      uVar24 = puVar9[6];
      uVar26 = puVar9[8];
      uVar28 = puVar9[0xb];
      uVar27 = puVar9[10];
      puVar8[9] = puVar9[9];
      puVar8[8] = uVar26;
      puVar8[0xb] = uVar28;
      puVar8[10] = uVar27;
      puVar8[5] = uVar23;
      puVar8[4] = uVar22;
      puVar8[7] = uVar25;
      puVar8[6] = uVar24;
      puVar8 = puVar9;
    } while ((long)uVar18 <= (lVar20 + -2) / 2);
    puVar8 = param_2 + -0xc;
    if (puVar9 == puVar8) {
      puVar9[1] = uStack_128;
      *puVar9 = uStack_130;
      puVar9[3] = uStack_118;
      puVar9[2] = uStack_120;
      puVar9[9] = uStack_e8;
      puVar9[8] = uStack_f0;
      puVar9[0xb] = uStack_d8;
      puVar9[10] = uStack_e0;
      puVar9[5] = uStack_108;
      puVar9[4] = uStack_110;
      puVar9[7] = uStack_f8;
      puVar9[6] = uStack_100;
    }
    else {
      uVar22 = *puVar8;
      uVar24 = param_2[-9];
      uVar23 = param_2[-10];
      puVar9[1] = param_2[-0xb];
      *puVar9 = uVar22;
      puVar9[3] = uVar24;
      puVar9[2] = uVar23;
      uVar23 = param_2[-7];
      uVar22 = param_2[-8];
      uVar25 = param_2[-5];
      uVar24 = param_2[-6];
      uVar26 = param_2[-4];
      uVar28 = param_2[-1];
      uVar27 = param_2[-2];
      puVar9[9] = param_2[-3];
      puVar9[8] = uVar26;
      puVar9[0xb] = uVar28;
      puVar9[10] = uVar27;
      puVar9[5] = uVar23;
      puVar9[4] = uVar22;
      puVar9[7] = uVar25;
      puVar9[6] = uVar24;
      param_2[-3] = uStack_e8;
      param_2[-4] = uStack_f0;
      param_2[-1] = uStack_d8;
      param_2[-2] = uStack_e0;
      param_2[-7] = uStack_108;
      param_2[-8] = uStack_110;
      param_2[-5] = uStack_f8;
      param_2[-6] = uStack_100;
      param_2[-0xb] = uStack_128;
      *puVar8 = uStack_130;
      param_2[-9] = uStack_118;
      param_2[-10] = uStack_120;
      uVar18 = (long)puVar9 + (0x60 - (long)param_1);
      if (0x60 < (long)uVar18) {
        uVar18 = (uVar18 >> 5) * -0x5555555555555555 - 2 >> 1;
        puVar11 = param_1 + uVar18 * 0xc;
        puVar12 = puVar11;
        FUN_10aad30c4(puVar11,puVar9);
        if ((int)puVar12 != 0) {
          uStack_c8 = puVar9[1];
          uStack_d0 = *puVar9;
          uStack_b8 = puVar9[3];
          uStack_c0 = puVar9[2];
          uStack_a8 = puVar9[5];
          uStack_b0 = puVar9[4];
          uStack_98 = puVar9[7];
          uStack_a0 = puVar9[6];
          uStack_88 = puVar9[9];
          uStack_90 = puVar9[8];
          uStack_78 = puVar9[0xb];
          uStack_80 = puVar9[10];
          do {
            puVar12 = puVar11;
            uVar22 = *puVar12;
            uVar24 = puVar12[3];
            uVar23 = puVar12[2];
            puVar9[1] = puVar12[1];
            *puVar9 = uVar22;
            puVar9[3] = uVar24;
            puVar9[2] = uVar23;
            uVar23 = puVar12[5];
            uVar22 = puVar12[4];
            uVar25 = puVar12[7];
            uVar24 = puVar12[6];
            uVar26 = puVar12[8];
            uVar28 = puVar12[0xb];
            uVar27 = puVar12[10];
            puVar9[9] = puVar12[9];
            puVar9[8] = uVar26;
            puVar9[0xb] = uVar28;
            puVar9[10] = uVar27;
            puVar9[5] = uVar23;
            puVar9[4] = uVar22;
            puVar9[7] = uVar25;
            puVar9[6] = uVar24;
            if (uVar18 == 0) break;
            uVar18 = uVar18 - 1 >> 1;
            puVar11 = param_1 + uVar18 * 0xc;
            puVar10 = puVar11;
            FUN_10aad30c4(puVar11,&uStack_d0);
            puVar9 = puVar12;
          } while (((ulong)puVar10 & 1) != 0);
          puVar12[1] = uStack_c8;
          *puVar12 = uStack_d0;
          puVar12[3] = uStack_b8;
          puVar12[2] = uStack_c0;
          puVar12[9] = uStack_88;
          puVar12[8] = uStack_90;
          puVar12[0xb] = uStack_78;
          puVar12[10] = uStack_80;
          puVar12[5] = uStack_a8;
          puVar12[4] = uStack_b0;
          puVar12[7] = uStack_98;
          puVar12[6] = uStack_a0;
        }
      }
    }
    bVar4 = lVar20 < 3;
    param_2 = puVar8;
    lVar20 = lVar20 + -1;
    if (bVar4) {
      return;
    }
  } while( true );
LAB_10aadcf10:
  param_2 = puVar21;
  if (((ulong)puVar10 & 1) != 0) {
    return;
  }
  goto LAB_10aadc2dc;
}



/* Entry: 10aadd698; end: 10aaddf6f;  */

void FUN_10aadd698(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
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
  
  puVar1 = param_2;
  FUN_10aad30c4(param_2,param_1);
  puVar2 = param_3;
  FUN_10aad30c4(param_3,param_2);
  if (((ulong)puVar1 & 1) == 0) {
    if ((int)puVar2 != 0) {
      uVar7 = param_2[5];
      uVar3 = param_2[4];
      uVar15 = param_2[7];
      uVar11 = param_2[6];
      uVar8 = param_2[9];
      uVar6 = param_2[8];
      uVar16 = param_2[0xb];
      uVar12 = param_2[10];
      uVar9 = param_2[1];
      uVar4 = *param_2;
      uVar17 = param_2[3];
      uVar13 = param_2[2];
      uVar14 = *param_3;
      uVar10 = param_3[3];
      uVar5 = param_3[2];
      param_2[1] = param_3[1];
      *param_2 = uVar14;
      param_2[3] = uVar10;
      param_2[2] = uVar5;
      uVar5 = param_3[8];
      uVar14 = param_3[0xb];
      uVar10 = param_3[10];
      uVar21 = param_3[5];
      uVar20 = param_3[4];
      uVar19 = param_3[7];
      uVar18 = param_3[6];
      param_2[9] = param_3[9];
      param_2[8] = uVar5;
      param_2[0xb] = uVar14;
      param_2[10] = uVar10;
      param_2[5] = uVar21;
      param_2[4] = uVar20;
      param_2[7] = uVar19;
      param_2[6] = uVar18;
      param_3[9] = uVar8;
      param_3[8] = uVar6;
      param_3[0xb] = uVar16;
      param_3[10] = uVar12;
      param_3[5] = uVar7;
      param_3[4] = uVar3;
      param_3[7] = uVar15;
      param_3[6] = uVar11;
      param_3[1] = uVar9;
      *param_3 = uVar4;
      param_3[3] = uVar17;
      param_3[2] = uVar13;
      puVar1 = param_2;
      FUN_10aad30c4(param_2,param_1);
      if ((int)puVar1 != 0) {
        uVar7 = param_1[5];
        uVar3 = param_1[4];
        uVar15 = param_1[7];
        uVar11 = param_1[6];
        uVar8 = param_1[9];
        uVar6 = param_1[8];
        uVar16 = param_1[0xb];
        uVar12 = param_1[10];
        uVar9 = param_1[1];
        uVar4 = *param_1;
        uVar17 = param_1[3];
        uVar13 = param_1[2];
        uVar14 = *param_2;
        uVar10 = param_2[3];
        uVar5 = param_2[2];
        param_1[1] = param_2[1];
        *param_1 = uVar14;
        param_1[3] = uVar10;
        param_1[2] = uVar5;
        uVar5 = param_2[8];
        uVar14 = param_2[0xb];
        uVar10 = param_2[10];
        uVar21 = param_2[5];
        uVar20 = param_2[4];
        uVar19 = param_2[7];
        uVar18 = param_2[6];
        param_1[9] = param_2[9];
        param_1[8] = uVar5;
        param_1[0xb] = uVar14;
        param_1[10] = uVar10;
        param_1[5] = uVar21;
        param_1[4] = uVar20;
        param_1[7] = uVar19;
        param_1[6] = uVar18;
        param_2[9] = uVar8;
        param_2[8] = uVar6;
        param_2[0xb] = uVar16;
        param_2[10] = uVar12;
        param_2[5] = uVar7;
        param_2[4] = uVar3;
        param_2[7] = uVar15;
        param_2[6] = uVar11;
        param_2[1] = uVar9;
        *param_2 = uVar4;
        param_2[3] = uVar17;
        param_2[2] = uVar13;
      }
    }
  }
  else {
    if ((int)puVar2 == 0) {
      uVar7 = param_1[5];
      uVar3 = param_1[4];
      uVar15 = param_1[7];
      uVar11 = param_1[6];
      uVar8 = param_1[9];
      uVar6 = param_1[8];
      uVar16 = param_1[0xb];
      uVar12 = param_1[10];
      uVar9 = param_1[1];
      uVar4 = *param_1;
      uVar17 = param_1[3];
      uVar13 = param_1[2];
      uVar14 = *param_2;
      uVar10 = param_2[3];
      uVar5 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar14;
      param_1[3] = uVar10;
      param_1[2] = uVar5;
      uVar5 = param_2[8];
      uVar14 = param_2[0xb];
      uVar10 = param_2[10];
      uVar21 = param_2[5];
      uVar20 = param_2[4];
      uVar19 = param_2[7];
      uVar18 = param_2[6];
      param_1[9] = param_2[9];
      param_1[8] = uVar5;
      param_1[0xb] = uVar14;
      param_1[10] = uVar10;
      param_1[5] = uVar21;
      param_1[4] = uVar20;
      param_1[7] = uVar19;
      param_1[6] = uVar18;
      param_2[9] = uVar8;
      param_2[8] = uVar6;
      param_2[0xb] = uVar16;
      param_2[10] = uVar12;
      param_2[5] = uVar7;
      param_2[4] = uVar3;
      param_2[7] = uVar15;
      param_2[6] = uVar11;
      param_2[1] = uVar9;
      *param_2 = uVar4;
      param_2[3] = uVar17;
      param_2[2] = uVar13;
      puVar1 = param_3;
      FUN_10aad30c4(param_3,param_2);
      if ((int)puVar1 == 0) goto LAB_10aadd860;
      uStack_78 = param_2[5];
      uStack_80 = param_2[4];
      uStack_68 = param_2[7];
      uStack_70 = param_2[6];
      uStack_58 = param_2[9];
      uStack_60 = param_2[8];
      uStack_48 = param_2[0xb];
      uStack_50 = param_2[10];
      uStack_98 = param_2[1];
      uStack_a0 = *param_2;
      uStack_88 = param_2[3];
      uStack_90 = param_2[2];
      uVar4 = *param_3;
      uVar6 = param_3[3];
      uVar3 = param_3[2];
      param_2[1] = param_3[1];
      *param_2 = uVar4;
      param_2[3] = uVar6;
      param_2[2] = uVar3;
      uVar3 = param_3[8];
      uVar4 = param_3[0xb];
      uVar6 = param_3[10];
      uVar9 = param_3[5];
      uVar8 = param_3[4];
      uVar7 = param_3[7];
      uVar5 = param_3[6];
      param_2[9] = param_3[9];
      param_2[8] = uVar3;
      param_2[0xb] = uVar4;
      param_2[10] = uVar6;
      param_2[5] = uVar9;
      param_2[4] = uVar8;
      param_2[7] = uVar7;
      param_2[6] = uVar5;
    }
    else {
      uStack_78 = param_1[5];
      uStack_80 = param_1[4];
      uStack_68 = param_1[7];
      uStack_70 = param_1[6];
      uStack_58 = param_1[9];
      uStack_60 = param_1[8];
      uStack_48 = param_1[0xb];
      uStack_50 = param_1[10];
      uStack_98 = param_1[1];
      uStack_a0 = *param_1;
      uStack_88 = param_1[3];
      uStack_90 = param_1[2];
      uVar4 = *param_3;
      uVar6 = param_3[3];
      uVar3 = param_3[2];
      param_1[1] = param_3[1];
      *param_1 = uVar4;
      param_1[3] = uVar6;
      param_1[2] = uVar3;
      uVar3 = param_3[8];
      uVar4 = param_3[0xb];
      uVar6 = param_3[10];
      uVar9 = param_3[5];
      uVar8 = param_3[4];
      uVar7 = param_3[7];
      uVar5 = param_3[6];
      param_1[9] = param_3[9];
      param_1[8] = uVar3;
      param_1[0xb] = uVar4;
      param_1[10] = uVar6;
      param_1[5] = uVar9;
      param_1[4] = uVar8;
      param_1[7] = uVar7;
      param_1[6] = uVar5;
    }
    param_3[9] = uStack_58;
    param_3[8] = uStack_60;
    param_3[0xb] = uStack_48;
    param_3[10] = uStack_50;
    param_3[5] = uStack_78;
    param_3[4] = uStack_80;
    param_3[7] = uStack_68;
    param_3[6] = uStack_70;
    param_3[1] = uStack_98;
    *param_3 = uStack_a0;
    param_3[3] = uStack_88;
    param_3[2] = uStack_90;
  }
LAB_10aadd860:
  puVar1 = param_4;
  FUN_10aad30c4(param_4,param_3);
  if ((int)puVar1 != 0) {
    uVar7 = param_3[5];
    uVar3 = param_3[4];
    uVar15 = param_3[7];
    uVar11 = param_3[6];
    uVar8 = param_3[9];
    uVar6 = param_3[8];
    uVar16 = param_3[0xb];
    uVar12 = param_3[10];
    uVar9 = param_3[1];
    uVar4 = *param_3;
    uVar17 = param_3[3];
    uVar13 = param_3[2];
    uVar14 = *param_4;
    uVar10 = param_4[3];
    uVar5 = param_4[2];
    param_3[1] = param_4[1];
    *param_3 = uVar14;
    param_3[3] = uVar10;
    param_3[2] = uVar5;
    uVar5 = param_4[8];
    uVar14 = param_4[0xb];
    uVar10 = param_4[10];
    uVar21 = param_4[5];
    uVar20 = param_4[4];
    uVar19 = param_4[7];
    uVar18 = param_4[6];
    param_3[9] = param_4[9];
    param_3[8] = uVar5;
    param_3[0xb] = uVar14;
    param_3[10] = uVar10;
    param_3[5] = uVar21;
    param_3[4] = uVar20;
    param_3[7] = uVar19;
    param_3[6] = uVar18;
    param_4[9] = uVar8;
    param_4[8] = uVar6;
    param_4[0xb] = uVar16;
    param_4[10] = uVar12;
    param_4[5] = uVar7;
    param_4[4] = uVar3;
    param_4[7] = uVar15;
    param_4[6] = uVar11;
    param_4[1] = uVar9;
    *param_4 = uVar4;
    param_4[3] = uVar17;
    param_4[2] = uVar13;
    puVar1 = param_3;
    FUN_10aad30c4(param_3,param_2);
    if ((int)puVar1 != 0) {
      uVar7 = param_2[5];
      uVar3 = param_2[4];
      uVar15 = param_2[7];
      uVar11 = param_2[6];
      uVar8 = param_2[9];
      uVar6 = param_2[8];
      uVar16 = param_2[0xb];
      uVar12 = param_2[10];
      uVar9 = param_2[1];
      uVar4 = *param_2;
      uVar17 = param_2[3];
      uVar13 = param_2[2];
      uVar14 = *param_3;
      uVar10 = param_3[3];
      uVar5 = param_3[2];
      param_2[1] = param_3[1];
      *param_2 = uVar14;
      param_2[3] = uVar10;
      param_2[2] = uVar5;
      uVar5 = param_3[8];
      uVar14 = param_3[0xb];
      uVar10 = param_3[10];
      uVar21 = param_3[5];
      uVar20 = param_3[4];
      uVar19 = param_3[7];
      uVar18 = param_3[6];
      param_2[9] = param_3[9];
      param_2[8] = uVar5;
      param_2[0xb] = uVar14;
      param_2[10] = uVar10;
      param_2[5] = uVar21;
      param_2[4] = uVar20;
      param_2[7] = uVar19;
      param_2[6] = uVar18;
      param_3[9] = uVar8;
      param_3[8] = uVar6;
      param_3[0xb] = uVar16;
      param_3[10] = uVar12;
      param_3[5] = uVar7;
      param_3[4] = uVar3;
      param_3[7] = uVar15;
      param_3[6] = uVar11;
      param_3[1] = uVar9;
      *param_3 = uVar4;
      param_3[3] = uVar17;
      param_3[2] = uVar13;
      puVar1 = param_2;
      FUN_10aad30c4(param_2,param_1);
      if ((int)puVar1 != 0) {
        uVar7 = param_1[5];
        uVar3 = param_1[4];
        uVar15 = param_1[7];
        uVar11 = param_1[6];
        uVar8 = param_1[9];
        uVar6 = param_1[8];
        uVar16 = param_1[0xb];
        uVar12 = param_1[10];
        uVar9 = param_1[1];
        uVar4 = *param_1;
        uVar17 = param_1[3];
        uVar13 = param_1[2];
        uVar14 = *param_2;
        uVar10 = param_2[3];
        uVar5 = param_2[2];
        param_1[1] = param_2[1];
        *param_1 = uVar14;
        param_1[3] = uVar10;
        param_1[2] = uVar5;
        uVar5 = param_2[8];
        uVar14 = param_2[0xb];
        uVar10 = param_2[10];
        uVar21 = param_2[5];
        uVar20 = param_2[4];
        uVar19 = param_2[7];
        uVar18 = param_2[6];
        param_1[9] = param_2[9];
        param_1[8] = uVar5;
        param_1[0xb] = uVar14;
        param_1[10] = uVar10;
        param_1[5] = uVar21;
        param_1[4] = uVar20;
        param_1[7] = uVar19;
        param_1[6] = uVar18;
        param_2[9] = uVar8;
        param_2[8] = uVar6;
        param_2[0xb] = uVar16;
        param_2[10] = uVar12;
        param_2[5] = uVar7;
        param_2[4] = uVar3;
        param_2[7] = uVar15;
        param_2[6] = uVar11;
        param_2[1] = uVar9;
        *param_2 = uVar4;
        param_2[3] = uVar17;
        param_2[2] = uVar13;
      }
    }
  }
  return;
}



/* Entry: 10aaddf70; end: 10aaddfcb;  */

void FUN_10aaddf70(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x00010a136de4();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10aaddfcc; end: 10aaddfdf;  */

void FUN_10aaddfcc(undefined8 param_1,int param_2,undefined4 param_3,long *param_4)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x25;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (plVar2 < (long *)0x2aaaaaaaaaaaaab) {
    __Znwm((long)plVar2 * 0x60);
    return;
  }
  func_0x000109ffded8();
  uVar11 = (ulong)param_2;
  uVar10 = plVar2[1];
  if (uVar10 != 0) {
    uVar3 = uVar10 - 1;
    if ((uVar10 & uVar3) == 0) {
      unaff_x25 = uVar3 & uVar11;
    }
    else {
      unaff_x25 = uVar11;
      if (uVar10 <= uVar11) {
        uVar7 = 0;
        if (uVar10 != 0) {
          uVar7 = uVar11 / uVar10;
        }
        unaff_x25 = uVar11 - uVar7 * uVar10;
      }
    }
    plVar5 = *(long **)(*plVar2 + unaff_x25 * 8);
    if (plVar5 != (long *)0x0) {
      do {
        while( true ) {
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) goto LAB_10aade0dc;
          uVar7 = plVar5[1];
          if (uVar7 != uVar11) break;
          if (*(int *)(plVar5 + 2) == param_2) {
            return;
          }
        }
        if ((uVar10 & uVar3) == 0) {
          uVar7 = uVar7 & uVar3;
        }
        else if (uVar10 <= uVar7) {
          uVar1 = 0;
          if (uVar10 != 0) {
            uVar1 = uVar7 / uVar10;
          }
          uVar7 = uVar7 - uVar1 * uVar10;
        }
      } while (uVar7 == unaff_x25);
    }
  }
LAB_10aade0dc:
  plVar5 = (long *)0x40;
  __Znwm();
  *plVar5 = 0;
  plVar5[1] = uVar11;
  *(undefined4 *)(plVar5 + 2) = param_3;
  lVar6 = *param_4;
  uVar3 = param_4[1];
  *param_4 = 0;
  param_4[1] = 0;
  plVar5[3] = lVar6;
  plVar5[4] = uVar3;
  lVar8 = param_4[2];
  plVar5[5] = lVar8;
  lVar9 = param_4[3];
  plVar5[6] = lVar9;
  *(int *)(plVar5 + 7) = (int)param_4[4];
  if (lVar9 != 0) {
    uVar7 = *(ulong *)(lVar8 + 8);
    if ((uVar3 & uVar3 - 1) == 0) {
      uVar7 = uVar7 & uVar3 - 1;
    }
    else {
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = uVar7 / uVar3;
      }
      if (uVar3 <= uVar7) {
        uVar7 = uVar7 - uVar1 * uVar3;
      }
    }
    *(long **)(lVar6 + uVar7 * 8) = plVar5 + 5;
    param_4[2] = 0;
    param_4[3] = 0;
  }
  if ((uVar10 == 0) || (*(float *)(plVar2 + 4) * (float)uVar10 < (float)(plVar2[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar10) {
      uVar3 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar3 = uVar3 | uVar10 << 1;
    uVar10 = (ulong)((float)(plVar2[3] + 1) / *(float *)(plVar2 + 4));
    if (uVar3 <= uVar10) {
      uVar3 = uVar10;
    }
    FUN_10a503004(plVar2,uVar3);
    uVar10 = plVar2[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x25 = uVar10 - 1 & uVar11;
    }
    else {
      unaff_x25 = uVar11;
      if (uVar10 <= uVar11) {
        uVar3 = 0;
        if (uVar10 != 0) {
          uVar3 = uVar11 / uVar10;
        }
        unaff_x25 = uVar11 - uVar3 * uVar10;
      }
    }
  }
  lVar6 = *plVar2;
  plVar4 = *(long **)(lVar6 + unaff_x25 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = plVar2 + 2;
    *plVar5 = *plVar4;
    *plVar4 = (long)plVar5;
    *(long **)(lVar6 + unaff_x25 * 8) = plVar4;
    if (*plVar5 == 0) goto LAB_10aade250;
    uVar11 = *(ulong *)(*plVar5 + 8);
    if ((uVar10 & uVar10 - 1) == 0) {
      uVar11 = uVar11 & uVar10 - 1;
    }
    else if (uVar10 <= uVar11) {
      uVar3 = 0;
      if (uVar10 != 0) {
        uVar3 = uVar11 / uVar10;
      }
      uVar11 = uVar11 - uVar3 * uVar10;
    }
    plVar4 = (long *)(*plVar2 + uVar11 * 8);
  }
  else {
    *plVar5 = *plVar4;
  }
  *plVar4 = (long)plVar5;
LAB_10aade250:
  plVar2[3] = plVar2[3] + 1;
  return;
}



/* Entry: 10aaddfe0; end: 10aade023;  */

void FUN_10aaddfe0(long *param_1,int param_2,undefined4 param_3,long *param_4)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x25;
  
  if (param_1 < (long *)0x2aaaaaaaaaaaaab) {
    __Znwm((long)param_1 * 0x60);
    return;
  }
  func_0x000109ffded8();
  uVar10 = (ulong)param_2;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar2 = uVar9 - 1;
    if ((uVar9 & uVar2) == 0) {
      unaff_x25 = uVar2 & uVar10;
    }
    else {
      unaff_x25 = uVar10;
      if (uVar9 <= uVar10) {
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar6 = uVar10 / uVar9;
        }
        unaff_x25 = uVar10 - uVar6 * uVar9;
      }
    }
    plVar4 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar4 != (long *)0x0) {
      do {
        while( true ) {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) goto LAB_10aade0dc;
          uVar6 = plVar4[1];
          if (uVar6 != uVar10) break;
          if (*(int *)(plVar4 + 2) == param_2) {
            return;
          }
        }
        if ((uVar9 & uVar2) == 0) {
          uVar6 = uVar6 & uVar2;
        }
        else if (uVar9 <= uVar6) {
          uVar1 = 0;
          if (uVar9 != 0) {
            uVar1 = uVar6 / uVar9;
          }
          uVar6 = uVar6 - uVar1 * uVar9;
        }
      } while (uVar6 == unaff_x25);
    }
  }
LAB_10aade0dc:
  plVar4 = (long *)0x40;
  __Znwm();
  *plVar4 = 0;
  plVar4[1] = uVar10;
  *(undefined4 *)(plVar4 + 2) = param_3;
  lVar5 = *param_4;
  uVar2 = param_4[1];
  *param_4 = 0;
  param_4[1] = 0;
  plVar4[3] = lVar5;
  plVar4[4] = uVar2;
  lVar7 = param_4[2];
  plVar4[5] = lVar7;
  lVar8 = param_4[3];
  plVar4[6] = lVar8;
  *(int *)(plVar4 + 7) = (int)param_4[4];
  if (lVar8 != 0) {
    uVar6 = *(ulong *)(lVar7 + 8);
    if ((uVar2 & uVar2 - 1) == 0) {
      uVar6 = uVar6 & uVar2 - 1;
    }
    else {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar6 / uVar2;
      }
      if (uVar2 <= uVar6) {
        uVar6 = uVar6 - uVar1 * uVar2;
      }
    }
    *(long **)(lVar5 + uVar6 * 8) = plVar4 + 5;
    param_4[2] = 0;
    param_4[3] = 0;
  }
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar2 = 1;
    if (2 < uVar9) {
      uVar2 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar2 = uVar2 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar2 <= uVar9) {
      uVar2 = uVar9;
    }
    FUN_10a503004(param_1,uVar2);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x25 = uVar9 - 1 & uVar10;
    }
    else {
      unaff_x25 = uVar10;
      if (uVar9 <= uVar10) {
        uVar2 = 0;
        if (uVar9 != 0) {
          uVar2 = uVar10 / uVar9;
        }
        unaff_x25 = uVar10 - uVar2 * uVar9;
      }
    }
  }
  lVar5 = *param_1;
  plVar3 = *(long **)(lVar5 + unaff_x25 * 8);
  if (plVar3 == (long *)0x0) {
    plVar3 = param_1 + 2;
    *plVar4 = *plVar3;
    *plVar3 = (long)plVar4;
    *(long **)(lVar5 + unaff_x25 * 8) = plVar3;
    if (*plVar4 == 0) goto LAB_10aade250;
    uVar10 = *(ulong *)(*plVar4 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar10 = uVar10 & uVar9 - 1;
    }
    else if (uVar9 <= uVar10) {
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar10 / uVar9;
      }
      uVar10 = uVar10 - uVar2 * uVar9;
    }
    plVar3 = (long *)(*param_1 + uVar10 * 8);
  }
  else {
    *plVar4 = *plVar3;
  }
  *plVar3 = (long)plVar4;
LAB_10aade250:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10aade024; end: 10aade28f;  */

void FUN_10aade024(long *param_1,int param_2,undefined4 param_3,long *param_4)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x25;
  
  uVar10 = (ulong)param_2;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar2 = uVar9 - 1;
    if ((uVar9 & uVar2) == 0) {
      unaff_x25 = uVar2 & uVar10;
    }
    else {
      unaff_x25 = uVar10;
      if (uVar9 <= uVar10) {
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar6 = uVar10 / uVar9;
        }
        unaff_x25 = uVar10 - uVar6 * uVar9;
      }
    }
    plVar4 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar4 != (long *)0x0) {
      do {
        while( true ) {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) goto LAB_10aade0dc;
          uVar6 = plVar4[1];
          if (uVar6 != uVar10) break;
          if (*(int *)(plVar4 + 2) == param_2) {
            return;
          }
        }
        if ((uVar9 & uVar2) == 0) {
          uVar6 = uVar6 & uVar2;
        }
        else if (uVar9 <= uVar6) {
          uVar1 = 0;
          if (uVar9 != 0) {
            uVar1 = uVar6 / uVar9;
          }
          uVar6 = uVar6 - uVar1 * uVar9;
        }
      } while (uVar6 == unaff_x25);
    }
  }
LAB_10aade0dc:
  plVar4 = (long *)0x40;
  __Znwm();
  *plVar4 = 0;
  plVar4[1] = uVar10;
  *(undefined4 *)(plVar4 + 2) = param_3;
  lVar5 = *param_4;
  uVar2 = param_4[1];
  *param_4 = 0;
  param_4[1] = 0;
  plVar4[3] = lVar5;
  plVar4[4] = uVar2;
  lVar7 = param_4[2];
  plVar4[5] = lVar7;
  lVar8 = param_4[3];
  plVar4[6] = lVar8;
  *(int *)(plVar4 + 7) = (int)param_4[4];
  if (lVar8 != 0) {
    uVar6 = *(ulong *)(lVar7 + 8);
    if ((uVar2 & uVar2 - 1) == 0) {
      uVar6 = uVar6 & uVar2 - 1;
    }
    else {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar6 / uVar2;
      }
      if (uVar2 <= uVar6) {
        uVar6 = uVar6 - uVar1 * uVar2;
      }
    }
    *(long **)(lVar5 + uVar6 * 8) = plVar4 + 5;
    param_4[2] = 0;
    param_4[3] = 0;
  }
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar2 = 1;
    if (2 < uVar9) {
      uVar2 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar2 = uVar2 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar2 <= uVar9) {
      uVar2 = uVar9;
    }
    FUN_10a503004(param_1,uVar2);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x25 = uVar9 - 1 & uVar10;
    }
    else {
      unaff_x25 = uVar10;
      if (uVar9 <= uVar10) {
        uVar2 = 0;
        if (uVar9 != 0) {
          uVar2 = uVar10 / uVar9;
        }
        unaff_x25 = uVar10 - uVar2 * uVar9;
      }
    }
  }
  lVar5 = *param_1;
  plVar3 = *(long **)(lVar5 + unaff_x25 * 8);
  if (plVar3 == (long *)0x0) {
    plVar3 = param_1 + 2;
    *plVar4 = *plVar3;
    *plVar3 = (long)plVar4;
    *(long **)(lVar5 + unaff_x25 * 8) = plVar3;
    if (*plVar4 == 0) goto LAB_10aade250;
    uVar10 = *(ulong *)(*plVar4 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar10 = uVar10 & uVar9 - 1;
    }
    else if (uVar9 <= uVar10) {
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar10 / uVar9;
      }
      uVar10 = uVar10 - uVar2 * uVar9;
    }
    plVar3 = (long *)(*param_1 + uVar10 * 8);
  }
  else {
    *plVar4 = *plVar3;
  }
  *plVar3 = (long)plVar4;
LAB_10aade250:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10aade290; end: 10aade33f;  */

void FUN_10aade290(long param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
                  long param_5,long param_6)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  plVar4 = &lStack_50;
  lStack_50 = param_1;
  uStack_48 = param_2;
  if (param_5 != 0) {
    plVar3 = &lStack_40;
    lStack_40 = param_1;
    uStack_38 = param_2;
    func_0x00010a289568(plVar3,*param_4);
    if (*plVar3 != 0) {
      func_0x00010a517600(&lStack_50,param_3);
      FUN_10aad356c(&lStack_40,*(undefined8 *)(param_6 + 0x10),*(undefined8 *)*plVar3);
      lVar1 = lStack_40;
      lStack_40 = 0;
      lVar5 = *plVar4;
      *plVar4 = lVar1;
      if (lVar5 != 0) {
        func_0x00010a502448(plVar4);
        lVar1 = lStack_40;
        lStack_40 = 0;
        if (lVar1 != 0) {
          func_0x00010a502448(&lStack_40);
        }
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10aade340);
  (*pcVar2)();
}



/* Entry: 10aade340; end: 10aade35b;  */

void FUN_10aade340(void)

{
  return;
}



/* Entry: 10aade35c; end: 10aade3eb;  */

long * FUN_10aade35c(long *param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    if (param_2 >> 0x3c != 0) {
      FUN_10aade3ec();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10aade3d0);
      (*pcVar1)();
    }
    lVar2 = param_2 * 0x10;
    __Znwm();
    *param_1 = lVar2;
    param_1[2] = lVar2 + param_2 * 0x10;
    _bzero();
    param_1[1] = lVar2 + param_2 * 0x10;
  }
  return param_1;
}



/* Entry: 10aade3ec; end: 10aade3ff;  */

undefined8 * FUN_10aade3ec(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  
  puVar4 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  *puVar4 = &PTR_FUN_110c42ea0;
  FUN_10aade53c(puVar4 + 0x2a);
  func_0x00010a23495c(puVar4 + 0x28);
  FUN_10a235538(puVar4 + 0x26);
  func_0x00010aae1558(puVar4 + 0x22);
  func_0x00010aadf46c(puVar4 + 0x20);
  plVar5 = (long *)puVar4[0x1f];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  func_0x00010aadf46c(puVar4 + 0x1d);
  plVar5 = (long *)puVar4[0x1c];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  func_0x000109d18f34(puVar4 + 5);
  if (puVar4[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return puVar4;
}



/* Entry: 10aade400; end: 10aade4c7;  */

undefined8 * FUN_10aade400(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_110c42ea0;
  FUN_10aade53c(param_1 + 0x2a);
  func_0x00010a23495c(param_1 + 0x28);
  FUN_10a235538(param_1 + 0x26);
  func_0x00010aae1558(param_1 + 0x22);
  func_0x00010aadf46c(param_1 + 0x20);
  plVar4 = (long *)param_1[0x1f];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  func_0x00010aadf46c(param_1 + 0x1d);
  plVar4 = (long *)param_1[0x1c];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  func_0x000109d18f34(param_1 + 5);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10aade4c8; end: 10aade53b;  */

void FUN_10aade4c8(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  code *pcVar1;
  int aiStack_20 [2];
  undefined8 *puStack_18;
  
  if (param_1[2] != param_1[3]) {
    aiStack_20[0] = 3;
    puStack_18 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,param_2,aiStack_20);
    if ((3 < aiStack_20[0]) && (puStack_18 != (undefined8 *)0x0)) {
      (**(code **)*puStack_18)();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10aade53c);
  (*pcVar1)();
}



/* Entry: 10aade53c; end: 10aade593;  */

long FUN_10aade53c(long param_1)

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



/* Entry: 10aade594; end: 10aade5d7;  */

void FUN_10aade594(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x101) = 0;
  return;
}



/* Entry: 10aade5d8; end: 10aade607;  */

void FUN_10aade5d8(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x50);
  FUN_10aade608();
                    /* WARNING: Could not recover jumptable at 0x00010aade604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10aade608; end: 10aade647;  */

void FUN_10aade608(undefined8 *param_1)

{
  (*(code *)*param_1)();
  (*(code *)param_1[9])(param_1);
  return;
}



/* Entry: 10aade648; end: 10aade6af;  */

void FUN_10aade648(long param_1)

{
  if (param_1 != 0) {
    (*(code *)**(undefined8 **)(param_1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10aade6b0; end: 10aade76b;  */

void FUN_10aade6b0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar6 = *(undefined8 **)(param_2 + 0x10);
  uVar4 = *puVar6;
  FUN_10aab7f78(uVar4);
  FUN_10a19ec08();
  FUN_10a19ecbc(uVar4,*(undefined4 *)(puVar6 + 3),*(undefined4 *)((long)puVar6 + 0x1c),1);
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  FUN_10a1a0aac(uVar4,puVar6 + 4,puVar6 + 1,&uStack_40,&uStack_70);
  func_0x00010a312864(puVar6 + 4);
  lVar5 = puVar6[2];
  uVar4 = puVar6[1];
  param_1[1] = puVar6[2];
  *param_1 = uVar4;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 10aade76c; end: 10aade7ab;  */

void FUN_10aade76c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    func_0x00010a09db0c(lVar1 + 0x20);
    func_0x00010a09db0c(lVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10aade7ac; end: 10aade7c3;  */

void FUN_10aade7ac(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10aade7c4; end: 10aade857;  */

void FUN_10aade7c4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  puVar6 = *(undefined8 **)(param_2 + 8);
  *param_1 = &PTR_FUN_110c43e48;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  uVar7 = *puVar6;
  puVar4[1] = puVar6[1];
  *puVar4 = uVar7;
  lVar5 = puVar6[2];
  puVar4[2] = lVar5;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4[3] = puVar6[3];
  lVar5 = puVar6[5];
  uVar7 = puVar6[4];
  puVar4[5] = puVar6[5];
  puVar4[4] = uVar7;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined4 *)(puVar4 + 6) = *(undefined4 *)(puVar6 + 6);
  param_1[1] = puVar4;
  return;
}



/* Entry: 10aade858; end: 10aade92b;  */

undefined8 FUN_10aade858(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long *plVar3;
  long *plVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  
  plVar7 = *(long **)(param_1 + 0x10);
  plVar3 = plVar7;
  FUN_10aab7f78(plVar7);
  FUN_10a19ec08();
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  plVar4 = plVar7;
  (**(code **)(*plVar7 + 0xa8))();
  if ((uint)plVar4 < 0x17) {
    uVar5 = *(undefined4 *)(&UNK_10e4f45e8 + ((ulong)plVar4 & 0xffffffff) * 4);
  }
  else {
    uVar5 = 0;
  }
  FUN_10a19ecbc(plVar3,uVar1,uVar2,uVar5);
  (**(code **)(*plVar7 + 0xa8))();
  lVar6 = *(long *)(param_1 + 0x18);
  if ((int)plVar7 == 1) {
    FUN_10a19f814(plVar3,param_1 + 0x28,*(undefined8 *)(lVar6 + 0x28),*(undefined4 *)(lVar6 + 0x18))
    ;
  }
  else {
    FUN_10a1a03cc(plVar3,param_1 + 0x28,*(undefined8 *)(lVar6 + 0x28),*(undefined8 *)(lVar6 + 0x30),
                  *(undefined4 *)(lVar6 + 0x18),0xffffffff);
  }
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10aade92c; end: 10aade9b3;  */

long FUN_10aade92c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x28);
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
  return param_1 + 0x20;
}



/* Entry: 10aade9b4; end: 10aadebb3;  */

char * FUN_10aade9b4(char *param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long *plVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined1 uVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  
  puVar7 = PTR___tlv_bootstrap_11340d750;
  if (*param_1 == '\x01') {
    ppuVar12 = &PTR___tlv_bootstrap_11340d750;
    ppuVar9 = ppuVar12;
    (*(code *)PTR___tlv_bootstrap_11340d750)();
    ppuVar10 = &PTR___tlv_bootstrap_11340d738;
    if (((ulong)*ppuVar9 & 1) == 0) {
      ppuVar9 = ppuVar10;
      (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
      __tlv_atexit(0x10a132a8c,ppuVar9,0x100000000);
      (*(code *)puVar7)();
      *(undefined1 *)ppuVar12 = 1;
    }
    (*(code *)PTR___tlv_bootstrap_11340d738)();
    plVar15 = (long *)ppuVar10[2];
    if (plVar15 != (long *)0x0) {
      lVar13 = plVar15[1];
      bVar6 = *(byte *)(lVar13 + 0x42) | *(byte *)(lVar13 + 0x43);
      if ((((bVar6 & 1) != 0) || ((*(byte *)(lVar13 + 0x3f) & 1) != 0)) ||
         (*(char *)(lVar13 + 0x40) == '\x01')) {
        uVar17 = cntfrq_el0;
        InstructionSynchronizationBarrier();
        uVar16 = cntvct_el0;
        if (uVar17 != 1000000000) {
          uVar4 = 0;
          if (uVar17 != 0) {
            uVar4 = uVar16 / uVar17;
          }
          uVar5 = 0;
          if (uVar17 != 0) {
            uVar5 = ((uVar16 - uVar4 * uVar17) * 1000000000) / uVar17;
          }
          uVar16 = uVar5 + uVar4 * 1000000000;
        }
        if (*(char *)(plVar15[1] + 0x40) == '\x01') {
          uVar17 = *(ulong *)(param_1 + 8);
          if (uVar17 <= uVar16) {
            lVar13 = *plVar15;
            __ZNSt3__15mutex4lockEv(lVar13 + 0x800);
            FUN_10a15387c((double)(uVar16 - uVar17),lVar13,lVar13 + 0x800,uVar17,uVar16);
            __ZNSt3__15mutex6unlockEv(lVar13 + 0x800);
          }
        }
        lVar13 = lRam00000001137ec198;
        if ((bVar6 & 1) != 0) {
          uVar2 = *(undefined4 *)(param_1 + 4);
          uVar3 = *(undefined2 *)(param_1 + 2);
          plVar11 = plVar15;
          FUN_10a1333cc();
          if (plVar11 != (long *)0x0) {
            uVar14 = 6;
            if (lRam00000001137ec198 != lVar13) {
              uVar14 = 8;
            }
            lVar1 = 0;
            if (lRam00000001137ec198 != lVar13) {
              lVar1 = lVar13;
            }
            *plVar11 = (long)&UNK_10f68e0e6;
            plVar11[1] = lVar1;
            plVar11[2] = uVar16;
            *(undefined4 *)(plVar11 + 3) = uVar2;
            *(undefined2 *)((long)plVar11 + 0x1c) = uVar3;
            *(undefined1 *)((long)plVar11 + 0x1e) = uVar14;
            if ((*(byte *)(plVar15 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10aadebac);
              (*pcVar8)();
            }
            plVar15[0x18] = plVar15[0x18] + 1;
          }
        }
      }
      if (((*(char *)(plVar15[1] + 0x41) == '\x01') && (param_1[0x18] == '\x01')) &&
         (plVar15 = (long *)plVar15[0xb], plVar15 != (long *)0x0)) {
        (**(code **)(*plVar15 + 0x18))(plVar15,*(undefined8 *)(param_1 + 0x10));
      }
    }
  }
  return param_1;
}



/* Entry: 10aadebb4; end: 10aadebc3;  */

void FUN_10aadebb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c43e98;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10aadebc4; end: 10aadebe3;  */

void FUN_10aadebc4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c43e98;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aadebe4; end: 10aadec23;  */

void FUN_10aadebe4(long param_1)

{
  func_0x00010a09db0c(param_1 + 0xa0);
  (*(code *)**(undefined8 **)(param_1 + 0x60))();
                    /* WARNING: Could not recover jumptable at 0x00010aadec20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x20))((undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10aadec24; end: 10aadec27;  */

void FUN_10aadec24(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aadec28; end: 10aadecaf;  */

long FUN_10aadec28(long param_1)

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



/* Entry: 10aadecb0; end: 10aadef43;  */

void FUN_10aadecb0(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined1 auStack_178 [8];
  undefined8 *apuStack_170 [8];
  undefined8 *apuStack_130 [9];
  long *plStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined8 uStack_bf;
  ulong auStack_b0 [12];
  char cStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = *param_1;
  lStack_180 = 0;
  if (*(long *)(lVar7 + 0x20) == 0) {
    auStack_b0[0] = auStack_b0[0] & 0xffffffffffffff00;
    cStack_50 = '\0';
  }
  else {
    FUN_10a08f044(auStack_178);
    FUN_10a3232a8(auStack_b0,auStack_178);
    cStack_50 = '\x01';
    func_0x00010a09a9f4(auStack_178);
  }
  lVar8 = param_1[1];
  FUN_10aad501c(auStack_178,lVar8);
  uStack_d8 = *(undefined8 *)(lVar8 + 0xa0);
  uStack_e0 = *(undefined8 *)(lVar8 + 0x98);
  uStack_d0 = *(undefined8 *)(lVar8 + 0xa8);
  uStack_bf = *(undefined8 *)(lVar8 + 0xb9);
  uStack_c0 = (undefined1)((ulong)*(undefined8 *)(lVar8 + 0xb1) >> 0x38);
  uStack_c8 = (undefined1)*(undefined8 *)(lVar8 + 0xb0);
  uStack_c7 = (undefined7)((ulong)*(undefined8 *)(lVar8 + 0xb0) >> 8);
  FUN_10aab9ce0(&lStack_198,lVar7,auStack_178,1);
  uVar3 = uStack_190;
  lVar8 = lStack_198;
  uStack_190 = 0;
  uStack_188 = 0;
  lStack_198 = 0;
  if (plStack_e8 != (long *)0x0) {
    plVar4 = plStack_e8 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e8);
    }
  }
  (*(code *)*apuStack_130[0])(apuStack_130);
  (*(code *)*apuStack_170[0])(apuStack_170);
  if (cStack_50 == '\x01') {
    func_0x00010a09a9f4(auStack_b0);
  }
  while( true ) {
    lVar6 = lStack_180;
    *(undefined1 *)(lVar7 + 0x100) = 0;
    auStack_b0[0] = 0;
    __ZNSt13exception_ptrD1Ev(auStack_b0);
    if (lVar6 == 0) {
      lVar7 = lVar8;
      FUN_10aabad30(param_1 + 3,lVar8,uVar3);
      iVar5 = (int)lVar7;
    }
    else {
      iVar5 = (int)&lStack_180;
      FUN_10aabe278(param_1 + 0xb);
    }
    if (lVar8 != 0) {
      __ZdlPv(lVar8);
    }
    __ZNSt13exception_ptrD1Ev(&lStack_180);
    plVar4 = param_1;
    (*(code *)param_1[0x14])();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) break;
    ___stack_chk_fail();
    if (iVar5 == 0) {
      __Unwind_Resume(plVar4);
      func_0x000104bd46a0();
      if (plVar4 != (long *)0x0) {
        (**(code **)plVar4[0xc])();
        (**(code **)plVar4[4])();
        FUN_10aadec28(plVar4 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(plVar4);
        return;
      }
      return;
    }
    ___cxa_begin_catch(plVar4);
    __ZSt17current_exceptionv(auStack_b0);
    __ZNSt13exception_ptraSERKS_(&lStack_180,auStack_b0);
    __ZNSt13exception_ptrD1Ev(auStack_b0);
    ___cxa_end_catch();
    lVar7 = lVar6;
  }
  return;
}



/* Entry: 10aadef44; end: 10aadefdb;  */

void FUN_10aadef44(long param_1)

{
  if (param_1 != 0) {
    (*(code *)**(undefined8 **)(param_1 + 0x60))();
    (*(code *)**(undefined8 **)(param_1 + 0x20))();
    FUN_10aadec28(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10aadefdc; end: 10aadf1db;  */

char * FUN_10aadefdc(char *param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long *plVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined1 uVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  
  puVar7 = PTR___tlv_bootstrap_11340d750;
  if (*param_1 == '\x01') {
    ppuVar12 = &PTR___tlv_bootstrap_11340d750;
    ppuVar9 = ppuVar12;
    (*(code *)PTR___tlv_bootstrap_11340d750)();
    ppuVar10 = &PTR___tlv_bootstrap_11340d738;
    if (((ulong)*ppuVar9 & 1) == 0) {
      ppuVar9 = ppuVar10;
      (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
      __tlv_atexit(0x10a132a8c,ppuVar9,0x100000000);
      (*(code *)puVar7)();
      *(undefined1 *)ppuVar12 = 1;
    }
    (*(code *)PTR___tlv_bootstrap_11340d738)();
    plVar15 = (long *)ppuVar10[2];
    if (plVar15 != (long *)0x0) {
      lVar13 = plVar15[1];
      bVar6 = *(byte *)(lVar13 + 0x42) | *(byte *)(lVar13 + 0x43);
      if ((((bVar6 & 1) != 0) || ((*(byte *)(lVar13 + 0x3f) & 1) != 0)) ||
         (*(char *)(lVar13 + 0x40) == '\x01')) {
        uVar17 = cntfrq_el0;
        InstructionSynchronizationBarrier();
        uVar16 = cntvct_el0;
        if (uVar17 != 1000000000) {
          uVar4 = 0;
          if (uVar17 != 0) {
            uVar4 = uVar16 / uVar17;
          }
          uVar5 = 0;
          if (uVar17 != 0) {
            uVar5 = ((uVar16 - uVar4 * uVar17) * 1000000000) / uVar17;
          }
          uVar16 = uVar5 + uVar4 * 1000000000;
        }
        if (*(char *)(plVar15[1] + 0x40) == '\x01') {
          uVar17 = *(ulong *)(param_1 + 8);
          if (uVar17 <= uVar16) {
            lVar13 = *plVar15;
            __ZNSt3__15mutex4lockEv(lVar13 + 0x780);
            FUN_10a15387c((double)(uVar16 - uVar17),lVar13,lVar13 + 0x780,uVar17,uVar16);
            __ZNSt3__15mutex6unlockEv(lVar13 + 0x780);
          }
        }
        lVar13 = lRam00000001137ec198;
        if ((bVar6 & 1) != 0) {
          uVar2 = *(undefined4 *)(param_1 + 4);
          uVar3 = *(undefined2 *)(param_1 + 2);
          plVar11 = plVar15;
          FUN_10a1333cc();
          if (plVar11 != (long *)0x0) {
            uVar14 = 6;
            if (lRam00000001137ec198 != lVar13) {
              uVar14 = 8;
            }
            lVar1 = 0;
            if (lRam00000001137ec198 != lVar13) {
              lVar1 = lVar13;
            }
            *plVar11 = (long)&UNK_10f68e0fb;
            plVar11[1] = lVar1;
            plVar11[2] = uVar16;
            *(undefined4 *)(plVar11 + 3) = uVar2;
            *(undefined2 *)((long)plVar11 + 0x1c) = uVar3;
            *(undefined1 *)((long)plVar11 + 0x1e) = uVar14;
            if ((*(byte *)(plVar15 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10aadf1d4);
              (*pcVar8)();
            }
            plVar15[0x18] = plVar15[0x18] + 1;
          }
        }
      }
      if (((*(char *)(plVar15[1] + 0x41) == '\x01') && (param_1[0x18] == '\x01')) &&
         (plVar15 = (long *)plVar15[0xb], plVar15 != (long *)0x0)) {
        (**(code **)(*plVar15 + 0x18))(plVar15,*(undefined8 *)(param_1 + 0x10));
      }
    }
  }
  return param_1;
}



/* Entry: 10aadf1dc; end: 10aadf1eb;  */

void FUN_10aadf1dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c43ee8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10aadf1ec; end: 10aadf20b;  */

void FUN_10aadf1ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c43ee8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aadf20c; end: 10aadf217;  */

void FUN_10aadf20c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 auStack_68 [4];
  undefined1 auStack_48 [8];
  
  puVar6 = *(undefined8 **)(param_1 + 0x18);
  if (puVar6 != (undefined8 *)0x0) {
    puVar7 = *(undefined8 **)(param_1 + 0x20);
    puVar4 = puVar6;
    if (puVar7 != puVar6) {
      do {
        puVar7 = puVar7 + -1;
        plVar5 = (long *)*puVar7;
        if (plVar5 != (long *)0x0) {
          if ((*(byte *)(plVar5 + 0x11) & 1) == 0) {
            auStack_68[0] = 0;
            lVar8 = plVar5[2];
            puVar4 = auStack_68;
            __ZNSt13exception_ptrD1Ev(puVar4);
            plVar5 = (long *)*puVar7;
            if ((lVar8 == 0) && (0 < plVar5[1])) {
              __ZNSt3__115future_categoryEv();
              __ZNSt3__112future_errorC1ENS_10error_codeE(auStack_68,4,puVar4);
              FUN_10a084fb0(auStack_48,auStack_68);
              __ZNSt3__117__assoc_sub_state13set_exceptionESt13exception_ptr(plVar5,auStack_48);
              __ZNSt13exception_ptrD1Ev(auStack_48);
              __ZNSt3__112future_errorD1Ev(auStack_68);
              plVar5 = (long *)*puVar7;
            }
          }
          plVar1 = plVar5 + 1;
          do {
            lVar8 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      } while (puVar7 != puVar6);
      puVar4 = *(undefined8 **)(param_1 + 0x18);
    }
    *(undefined8 **)(param_1 + 0x20) = puVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar4);
    return;
  }
  return;
}



/* Entry: 10aadf218; end: 10aadf22b;  */

void FUN_10aadf218(void)

{
  long *plVar1;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  *plVar1 = (long)(PTR___ZTVNSt3__117__assoc_sub_stateE_110346b28 + 0x10);
  __ZNSt3__118condition_variableD1Ev(plVar1 + 0xb);
  __ZNSt3__15mutexD1Ev(plVar1 + 3);
  __ZNSt13exception_ptrD1Ev(plVar1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__114__shared_countD2Ev_110346530)(plVar1);
  return;
}



/* Entry: 10aadf22c; end: 10aadf2ff;  */

void FUN_10aadf22c(long *param_1)

{
  *param_1 = (long)(PTR___ZTVNSt3__117__assoc_sub_stateE_110346b28 + 0x10);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0xb);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  __ZNSt13exception_ptrD1Ev(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__114__shared_countD2Ev_110346530)(param_1);
  return;
}



/* Entry: 10aadf300; end: 10aadf413;  */

void FUN_10aadf300(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 auStack_68 [4];
  undefined1 auStack_48 [8];
  
  puVar6 = (undefined8 *)*param_1;
  if (puVar6 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)param_1[1];
    puVar4 = puVar6;
    if (puVar7 != puVar6) {
      do {
        puVar7 = puVar7 + -1;
        plVar5 = (long *)*puVar7;
        if (plVar5 != (long *)0x0) {
          if ((*(byte *)(plVar5 + 0x11) & 1) == 0) {
            auStack_68[0] = 0;
            lVar8 = plVar5[2];
            puVar4 = auStack_68;
            __ZNSt13exception_ptrD1Ev(puVar4);
            plVar5 = (long *)*puVar7;
            if ((lVar8 == 0) && (0 < plVar5[1])) {
              __ZNSt3__115future_categoryEv();
              __ZNSt3__112future_errorC1ENS_10error_codeE(auStack_68,4,puVar4);
              FUN_10a084fb0(auStack_48,auStack_68);
              __ZNSt3__117__assoc_sub_state13set_exceptionESt13exception_ptr(plVar5,auStack_48);
              __ZNSt13exception_ptrD1Ev(auStack_48);
              __ZNSt3__112future_errorD1Ev(auStack_68);
              plVar5 = (long *)*puVar7;
            }
          }
          plVar1 = plVar5 + 1;
          do {
            lVar8 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      } while (puVar7 != puVar6);
      puVar4 = (undefined8 *)*param_1;
    }
    param_1[1] = puVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar4);
    return;
  }
  return;
}



/* Entry: 10aadf414; end: 10aadf4f3;  */

long FUN_10aadf414(long param_1)

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



/* Entry: 10aadf4f4; end: 10aae013b;  */

void FUN_10aadf4f4(long *param_1,int param_2)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  ulong *puVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  long lStack_3c8;
  long *plStack_3c0;
  long lStack_3b8;
  long *plStack_3b0;
  long lStack_3a8;
  undefined8 uStack_3a0;
  undefined8 *puStack_398;
  undefined8 uStack_390;
  undefined *puStack_388;
  undefined **ppuStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  long lStack_348;
  undefined *puStack_340;
  undefined **ppuStack_338;
  code *pcStack_300;
  undefined **appuStack_2f8 [7];
  long lStack_2c0;
  undefined *puStack_2b8;
  undefined **appuStack_2b0 [7];
  long lStack_278;
  code *pcStack_270;
  long alStack_268 [7];
  long lStack_230;
  undefined *puStack_228;
  undefined **appuStack_220 [7];
  long *plStack_1e8;
  code *pcStack_1e0;
  undefined8 *apuStack_1d8 [7];
  long lStack_1a0;
  undefined *puStack_198;
  undefined **appuStack_190 [7];
  long *plStack_158;
  long *plStack_150;
  long lStack_148;
  undefined *puStack_140;
  undefined **appuStack_138 [7];
  code *pcStack_100;
  undefined8 *apuStack_f8 [7];
  long lStack_c0;
  undefined *puStack_b8;
  undefined **appuStack_b0 [7];
  long *plStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = param_1[2];
  lVar12 = param_1[3];
  lVar15 = lVar12 - lVar13;
  if (lVar15 != 0) {
    uVar18 = 0;
    do {
      uVar1 = uVar18 + 1;
      lVar16 = param_1[7];
      if (uVar1 < (ulong)(lVar15 >> 2)) {
        if (lVar16 != 0) {
          uVar8 = 0x168;
          __Znwm(0x168);
          FUN_10a08ee34();
          FUN_10aabb088(param_1 + 7,uVar8);
          lVar16 = 0;
          lVar13 = param_1[2];
          lVar12 = param_1[3];
        }
      }
      else {
        param_1[7] = 0;
      }
      if (((ulong)(lVar12 - lVar13 >> 2) <= uVar18) ||
         (lVar12 = *(long *)param_1[5], (ulong)(((long *)param_1[5])[1] - lVar12 >> 3) <= uVar18)) {
LAB_10aae0074:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10aae0078);
        (*pcVar7)();
      }
      plVar9 = (long *)*param_1;
      if (plVar9 == (long *)0x0) {
        FUN_109d1a80c();
        lStack_348 = *plVar9;
        uStack_360 = 0;
        uStack_368 = 0;
        uStack_350 = 0;
        uStack_358 = 0;
        uStack_370 = 0;
        uStack_378 = 0;
        puStack_388 = &UNK_1053a6a3c;
        ppuStack_380 = &PTR_DAT_110ae9180;
        pcStack_300 = FUN_10aae0a44;
        appuStack_2f8[0] = &PTR_DAT_110c43fa8;
        puStack_2b8 = &UNK_1053a6a3c;
        appuStack_2b0[0] = &PTR_DAT_110ae9180;
        puStack_340 = &UNK_1053a6a3c;
        ppuStack_338 = &PTR_DAT_110ae9180;
        lVar13 = 0x1f8;
        lStack_2c0 = lStack_348;
        __Znwm();
        pcStack_1e0 = (code *)lVar16;
        FUN_10ad4e38c();
        if (pcStack_1e0 != (code *)0x0) {
          FUN_10a08ef58();
          __ZdlPv();
        }
        pcStack_1e0 = pcStack_300;
        (*(code *)appuStack_2f8[0][2])(apuStack_1d8,appuStack_2f8);
        appuStack_190[0] = &PTR_DAT_110ae9180;
        lStack_1a0 = lStack_2c0;
        puStack_198 = puStack_2b8;
        (*(code *)appuStack_2b0[0][2])(appuStack_190,appuStack_2b0);
        puStack_2b8 = &UNK_1053a6a3c;
        (*(code *)*appuStack_2b0[0])(appuStack_2b0);
        appuStack_2b0[0] = &PTR_DAT_110ae9180;
        plStack_158 = (long *)0x0;
        plVar9 = (long *)0xb0;
        __Znwm();
        lVar15 = lStack_1a0;
        *(undefined2 *)(plVar9 + 3) = 4;
        plVar9[2] = 0;
        plVar9[1] = 0x200000006;
        plVar9[5] = 0;
        plVar9[4] = 0;
        plVar9[7] = 0;
        plVar9[6] = 0;
        plVar9[9] = 0;
        plVar9[8] = 0;
        plVar9[0xb] = 0;
        plVar9[10] = 0;
        plVar9[0xd] = 0;
        plVar9[0xc] = 0;
        plVar9[0xf] = 0;
        plVar9[0xe] = 0;
        plVar9[0x10] = 0;
        plVar9[0x11] = (long)(plVar9 + 3);
        plVar9[0x12] = 0;
        *plVar9 = (long)&PTR_DAT_110c43f80;
        *(undefined1 *)(plVar9 + 0x13) = 0;
        *(undefined1 *)(plVar9 + 0x15) = 0;
        plStack_3b0 = (long *)0x0;
        lStack_3a8 = 0;
        lStack_148 = lStack_1a0;
        appuStack_138[0] = &PTR_DAT_110ae9180;
        puStack_140 = puStack_198;
        plStack_158 = plVar9;
        plStack_150 = plVar9;
        (*(code *)appuStack_190[0][2])(appuStack_138,appuStack_190);
        puStack_198 = &UNK_1053a6a3c;
        (*(code *)*appuStack_190[0])(appuStack_190);
        appuStack_190[0] = &PTR_DAT_110ae9180;
        puVar10 = (undefined8 *)0xb8;
        __Znwm();
        *puVar10 = FUN_10aae777c;
        puVar10[1] = FUN_10aae7a20;
        func_0x0001092ba17c(puVar10 + 2);
        plVar9 = plStack_150;
        plVar17 = (long *)puVar10[7];
        if (plVar17 != (long *)0x0) {
          plVar3 = plVar17 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar6) {
              *plVar3 = *plVar3 + 4;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plStack_150 = (long *)0x0;
        puVar10[10] = lStack_148;
        puVar10[9] = plVar9;
        puVar10[0xc] = &PTR_DAT_110ae9180;
        puVar10[0xb] = puStack_140;
        (*(code *)appuStack_138[0][2])(puVar10 + 0xc,appuStack_138);
        puStack_140 = &UNK_1053a6a3c;
        (*(code *)*appuStack_138[0])(appuStack_138);
        appuStack_138[0] = &PTR_DAT_110ae9180;
        puVar10[0x13] = lVar15;
        *(undefined1 *)(puVar10 + 0x14) = 0;
        *(undefined1 *)(puVar10 + 0x16) = 0;
        puVar11 = puVar10 + 0x13;
        func_0x0001092ba064(puVar11,puVar10);
        if (((ulong)puVar11 & 1) == 0) {
          FUN_10aae0500(puVar10 + 0x15,puVar10 + 9);
          puVar10[0x13] = puVar10[0x15];
          plVar9 = (long *)(puVar10[0x15] + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar6) {
              *plVar9 = *plVar9 + 4;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (((uint)*(undefined8 *)(puVar10[0x13] + 0x10) >> 1 & 1) == 0) {
            *(undefined1 *)(puVar10 + 0x16) = 1;
            lVar15 = puVar10[0x13];
            plVar9 = (long *)(lVar15 + 0x10);
            uVar8 = puVar10[3];
            do {
              lVar16 = *plVar9;
              if (lVar16 == 0) {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar6) {
                  *plVar9 = 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 == '\0') {
                  uStack_3a0 = 0;
                  puStack_398 = puVar10;
                  uStack_390 = uVar8;
                  func_0x000109d1b588(lVar15 + 0x18,&uStack_3a0);
                  *(undefined8 *)(lVar15 + 0x10) = 0;
                  goto joined_r0x00010aadfa54;
                }
              }
              else {
                ClearExclusiveLocal();
              }
            } while (((uint)lVar16 >> 1 & 1) == 0);
          }
          plVar9 = (long *)puVar10[0x13];
          if (((uint)*(undefined8 *)(puVar10[0x13] + 0x10) >> 5 & 1) != 0) {
            func_0x0001092af97c(plVar9 + 0x12);
            goto LAB_10aae0074;
          }
          if (plVar9 != (long *)0x0) {
            puVar4 = (ulong *)(plVar9 + 1);
            do {
              uVar14 = *puVar4;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
              if (bVar6) {
                *puVar4 = uVar14 - 4;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if ((uVar14 & 0x1fffffffc) == 4) {
              do {
                uVar14 = *puVar4;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
                if (bVar6) {
                  *puVar4 = uVar14 - 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (uVar14 - 1 == 0) {
                (**(code **)(*plVar9 + 8))();
              }
            }
          }
          plVar9 = (long *)puVar10[0x15];
          if (plVar9 != (long *)0x0) {
            puVar4 = (ulong *)(plVar9 + 1);
            do {
              uVar14 = *puVar4;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
              if (bVar6) {
                *puVar4 = uVar14 - 4;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if ((uVar14 & 0x1fffffffc) == 4) {
              do {
                uVar14 = *puVar4;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
                if (bVar6) {
                  *puVar4 = uVar14 - 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (uVar14 - 1 == 0) {
                (**(code **)(*plVar9 + 8))();
              }
            }
          }
          func_0x0001092ba100(puVar10 + 2);
          func_0x0001092ba41c(puVar10 + 10);
          plVar9 = (long *)puVar10[9];
          if (plVar9 != (long *)0x0) {
            puVar4 = (ulong *)(plVar9 + 1);
            do {
              uVar14 = *puVar4;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
              if (bVar6) {
                *puVar4 = uVar14 - 4;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if ((uVar14 & 0x1fffffffc) == 4) {
              do {
                uVar14 = *puVar4;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
                if (bVar6) {
                  *puVar4 = uVar14 - 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (uVar14 - 1 == 0) {
                (**(code **)(*plVar9 + 8))();
              }
            }
          }
          func_0x000109d1a1d0(puVar10 + 2);
          __ZdlPv(puVar10);
        }
joined_r0x00010aadfa54:
        if (plVar17 != (long *)0x0) {
          puVar4 = (ulong *)(plVar17 + 1);
          do {
            uVar14 = *puVar4;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
            if (bVar6) {
              *puVar4 = uVar14 - 4;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((uVar14 & 0x1fffffffc) == 4) {
            do {
              uVar14 = *puVar4;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
              if (bVar6) {
                *puVar4 = uVar14 - 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (uVar14 - 1 == 0) {
              (**(code **)(*plVar17 + 8))(plVar17);
            }
          }
        }
        func_0x0001092ba41c((ulong)&plStack_150 | 8);
        if (plStack_150 != (long *)0x0) {
          puVar4 = (ulong *)(plStack_150 + 1);
          do {
            uVar14 = *puVar4;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
            if (bVar6) {
              *puVar4 = uVar14 - 4;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((uVar14 & 0x1fffffffc) == 4) {
            do {
              uVar14 = *puVar4;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
              if (bVar6) {
                *puVar4 = uVar14 - 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (uVar14 - 1 == 0) {
              (**(code **)(*plStack_150 + 8))();
            }
          }
        }
        if (lStack_3a8 != 0) {
          func_0x0001092b4274((ulong)&plStack_3b0 | 8);
        }
        if (plStack_3b0 != (long *)0x0) {
          puVar4 = (ulong *)(plStack_3b0 + 1);
          do {
            uVar14 = *puVar4;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
            if (bVar6) {
              *puVar4 = uVar14 - 4;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((uVar14 & 0x1fffffffc) == 4) {
            do {
              uVar14 = *puVar4;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
              if (bVar6) {
                *puVar4 = uVar14 - 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (uVar14 - 1 == 0) {
              (**(code **)(*plStack_3b0 + 8))();
            }
          }
        }
        pcStack_270 = pcStack_1e0;
        lStack_278 = lVar13;
        (*(code *)apuStack_1d8[0][2])(alStack_268,apuStack_1d8);
        lStack_230 = lStack_1a0;
        puStack_228 = puStack_198;
        appuStack_220[0] = &PTR_DAT_110ae9180;
        (*(code *)appuStack_190[0][2])(appuStack_220,appuStack_190);
        puStack_198 = &UNK_1053a6a3c;
        (*(code *)*appuStack_190[0])(appuStack_190);
        plStack_1e8 = plStack_158;
        appuStack_190[0] = &PTR_DAT_110ae9180;
        plStack_158 = (long *)0x0;
        func_0x0001092ba41c(&lStack_1a0);
        (*(code *)*apuStack_1d8[0])(apuStack_1d8);
        lVar13 = lStack_278;
        lStack_3c8 = lStack_278;
        if (lStack_278 == 0) {
          plStack_3c0 = (long *)0x0;
        }
        else {
          plVar9 = (long *)0xb0;
          __Znwm();
          pcStack_100 = pcStack_270;
          (**(code **)(alStack_268[0] + 0x10))(apuStack_f8,alStack_268);
          lStack_c0 = lStack_230;
          puStack_b8 = puStack_228;
          appuStack_b0[0] = &PTR_DAT_110ae9180;
          (*(code *)appuStack_220[0][2])(appuStack_b0,appuStack_220);
          puStack_228 = &UNK_1053a6a3c;
          (*(code *)*appuStack_220[0])(appuStack_220);
          plStack_78 = plStack_1e8;
          appuStack_220[0] = &PTR_DAT_110ae9180;
          plStack_1e8 = (long *)0x0;
          plVar17 = plVar9 + 1;
          *plVar17 = 0;
          *plVar9 = (long)&PTR_FUN_110c43fd0;
          plVar9[2] = 0;
          plVar9[3] = lVar13;
          plVar9[4] = (long)pcStack_100;
          (*(code *)apuStack_f8[0][2])(plVar9 + 5,apuStack_f8);
          plVar9[0xe] = (long)&PTR_DAT_110ae9180;
          plVar9[0xc] = lStack_c0;
          plVar9[0xd] = (long)puStack_b8;
          (*(code *)appuStack_b0[0][2])(plVar9 + 0xe,appuStack_b0);
          puStack_b8 = &UNK_1053a6a3c;
          (*(code *)*appuStack_b0[0])(appuStack_b0);
          plVar9[0x15] = (long)plStack_78;
          appuStack_b0[0] = &PTR_DAT_110ae9180;
          plStack_78 = (long *)0x0;
          plStack_3c0 = plVar9;
          func_0x0001092ba41c(&lStack_c0);
          (*(code *)*apuStack_f8[0])(apuStack_f8);
          if ((lStack_278 != 0) &&
             ((*(long *)(lStack_278 + 0x10) == 0 ||
              (*(long *)(*(long *)(lStack_278 + 0x10) + 8) == -1)))) {
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar6) {
                *plVar17 = *plVar17 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            plVar3 = plVar9 + 2;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar6) {
                *plVar3 = *plVar3 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            lVar13 = *(long *)(lStack_278 + 0x10);
            *(long *)(lStack_278 + 8) = lStack_278;
            *(long **)(lStack_278 + 0x10) = plVar9;
            if (lVar13 != 0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
            do {
              lVar13 = *plVar17;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar6) {
                *plVar17 = lVar13 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar13 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
            }
          }
        }
        lStack_278 = 0;
        param_2 = (int)&lStack_3c8;
        FUN_10aae01dc(*(undefined8 *)(lVar12 + uVar18 * 8));
        plVar9 = plStack_3c0;
        if (plStack_3c0 != (long *)0x0) {
          plVar17 = plStack_3c0 + 1;
          do {
            lVar13 = *plVar17;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar6) {
              *plVar17 = lVar13 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_3c0 + 0x10))(plStack_3c0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
        FUN_10aae0d38(&lStack_278);
        func_0x0001092ba41c(&lStack_2c0);
        (*(code *)*appuStack_2f8[0])(appuStack_2f8);
        func_0x0001092ba41c(&lStack_348);
        (*(code *)*ppuStack_380)(&ppuStack_380);
      }
      else {
        lStack_3b8 = lVar16;
        (**(code **)(*plVar9 + 0x10))
                  (&lStack_278,plVar9,*(undefined4 *)(lVar13 + uVar18 * 4),&lStack_3b8,param_1[8]);
        param_2 = (int)&lStack_278;
        FUN_10aae01dc(*(undefined8 *)(lVar12 + uVar18 * 8));
        pcVar7 = pcStack_270;
        if (pcStack_270 != (code *)0x0) {
          pcVar2 = pcStack_270 + 8;
          do {
            lVar13 = *(long *)pcVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
            if (bVar6) {
              *(long *)pcVar2 = lVar13 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*(long *)pcStack_270 + 0x10))(pcStack_270);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar7);
          }
        }
        lVar13 = lStack_3b8;
        lStack_3b8 = 0;
        if (lVar13 != 0) {
          FUN_10a08ef58();
          __ZdlPv();
        }
      }
      lVar13 = param_1[2];
      lVar12 = param_1[3];
      lVar15 = lVar12 - lVar13;
      uVar18 = uVar1;
    } while (uVar1 < (ulong)(lVar15 >> 2));
  }
  (*(code *)param_1[10])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume(param_1);
  }
  func_0x000104bd46a0();
  if (param_1 == (long *)0x0) {
    return;
  }
  FUN_10aabb088(param_1 + 7,0);
  FUN_10aadf414(param_1 + 5);
  if (param_1[2] != 0) {
    param_1[3] = param_1[2];
    __ZdlPv();
  }
  func_0x00010a23495c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aae013c; end: 10aae01db;  */

void FUN_10aae013c(long param_1)

{
  if (param_1 != 0) {
    FUN_10aabb088(param_1 + 0x38,0);
    FUN_10aadf414(param_1 + 0x28);
    if (*(long *)(param_1 + 0x10) != 0) {
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x10);
      __ZdlPv();
    }
    func_0x00010a23495c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10aae01dc; end: 10aae0287;  */

long * FUN_10aae01dc(long param_1,undefined8 *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long unaff_x19;
  long lVar9;
  undefined8 uVar10;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_38;
  
  if (param_1 == 0) {
    lVar5 = 3;
    FUN_10a0843f8();
    __ZNSt3__15mutex6unlockEv(unaff_x19 + 0x18);
    lVar9 = lVar5;
    __Unwind_Resume();
    lStack_60 = lVar5;
    if (lVar9 != 0) {
      __ZNSt13exception_ptrC1ERKS_(&lStack_68);
      __ZNSt3__117__assoc_sub_state13set_exceptionESt13exception_ptr(lVar9,&lStack_68);
      plVar6 = &lStack_68;
      __ZNSt13exception_ptrD1Ev(plVar6);
      return plVar6;
    }
    plVar6 = (long *)0x3;
    FUN_10a0843f8();
    __ZNSt13exception_ptrD1Ev(&lStack_68);
    __Unwind_Resume();
    func_0x0001092ba41c(plVar6 + 1);
    plVar7 = (long *)*plVar6;
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    return plVar6;
  }
  __ZNSt3__15mutex4lockEv(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
    uStack_38 = 0;
    lVar9 = *(long *)(param_1 + 0x10);
    __ZNSt13exception_ptrD1Ev(&uStack_38);
    if (lVar9 == 0) {
      uVar10 = *param_2;
      *(undefined8 *)(param_1 + 0x98) = param_2[1];
      *(undefined8 *)(param_1 + 0x90) = uVar10;
      *param_2 = 0;
      param_2[1] = 0;
      *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 5;
      __ZNSt3__118condition_variable10notify_allEv(param_1 + 0x58);
      plVar6 = (long *)(param_1 + 0x18);
      __ZNSt3__15mutex6unlockEv(plVar6);
      return plVar6;
    }
  }
  FUN_10a0843f8(2);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aae026c);
  (*pcVar4)();
}



/* Entry: 10aae0288; end: 10aae02e7;  */

long * FUN_10aae0288(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lStack_28;
  
  if (param_1 != 0) {
    __ZNSt13exception_ptrC1ERKS_(&lStack_28);
    __ZNSt3__117__assoc_sub_state13set_exceptionESt13exception_ptr(param_1,&lStack_28);
    plVar4 = &lStack_28;
    __ZNSt13exception_ptrD1Ev(plVar4);
    return plVar4;
  }
  plVar4 = (long *)0x3;
  FUN_10a0843f8();
  __ZNSt13exception_ptrD1Ev(&lStack_28);
  __Unwind_Resume();
  func_0x0001092ba41c(plVar4 + 1);
  plVar5 = (long *)*plVar4;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  return plVar4;
}



/* Entry: 10aae02e8; end: 10aae04ff;  */

long * FUN_10aae02e8(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  func_0x0001092ba41c(param_1 + 1);
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  return param_1;
}



/* Entry: 10aae0500; end: 10aae0a43;  */

void FUN_10aae0500(long *param_1,long *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar5 = (undefined8 *)0x80;
  __Znwm();
  *puVar5 = FUN_10aae71dc;
  puVar5[1] = FUN_10aae7638;
  puVar5[0xd] = param_2;
  func_0x0001092ba17c(puVar5 + 2);
  lVar7 = puVar5[7];
  if (lVar7 != 0) {
    plVar6 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar7;
  lVar7 = *param_2;
  puVar5[0xb] = lVar7;
  plVar6 = (long *)(lVar7 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((uint)*(undefined8 *)(puVar5[0xb] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0xf) = 0;
    lVar7 = puVar5[0xb];
    plVar6 = (long *)(lVar7 + 0x10);
    uStack_38 = puVar5[3];
    do {
      lVar10 = *plVar6;
      if (lVar10 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') goto LAB_10aae08ac;
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar10 >> 1 & 1) == 0);
  }
  plVar6 = (long *)puVar5[0xb];
  if (((uint)*(undefined8 *)(puVar5[0xb] + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar6 + 0x12);
    goto LAB_10aae08e8;
  }
  if ((*(byte *)(plVar6 + 0x15) & 1) == 0) goto LAB_10aae08e8;
  puVar5[9] = plVar6[0x13];
  lVar7 = plVar6[0x14];
  puVar5[10] = lVar7;
  if (lVar7 == 0) {
LAB_10aae0620:
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar9 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar9 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar9 & 0x1fffffffc) == 4) {
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar9 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  else {
    plVar6 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar6 = (long *)puVar5[0xb];
    if (plVar6 != (long *)0x0) goto LAB_10aae0620;
  }
  plVar8 = (long *)puVar5[0xd];
  plVar6 = (long *)*plVar8;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar9 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar9 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar9 & 0x1fffffffc) == 4) {
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar9 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    plVar8 = (long *)puVar5[0xd];
  }
  *plVar8 = 0;
  lVar7 = puVar5[10];
  puVar5[0xe] = puVar5[9];
  puVar5[10] = 0;
  puVar5[0xb] = lVar7;
  puVar5[0xc] = lVar7;
  plVar6 = (long *)(lVar7 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((uint)*(undefined8 *)(puVar5[0xc] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0xf) = 1;
    lVar7 = puVar5[0xc];
    plVar6 = (long *)(lVar7 + 0x10);
    uStack_38 = puVar5[3];
    do {
      lVar10 = *plVar6;
      if (lVar10 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
LAB_10aae08ac:
          uStack_48 = 0;
          puStack_40 = puVar5;
          func_0x000109d1b588(lVar7 + 0x18,&uStack_48);
          *(undefined8 *)(lVar7 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar10 >> 1 & 1) == 0);
  }
  plVar6 = (long *)puVar5[0xc];
  if (((uint)*(undefined8 *)(puVar5[0xc] + 0x10) >> 5 & 1) == 0) {
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    plVar6 = (long *)puVar5[0xb];
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    puVar5[0xb] = 0;
    if (puVar5[0xe] != 0) {
      (**(code **)(*(long *)(puVar5[0xe] + 0x18) + 0x10))();
    }
    func_0x0001092ba100(puVar5 + 2);
    plVar6 = (long *)puVar5[0xb];
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    plVar6 = (long *)puVar5[10];
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    func_0x000109d1a1d0(puVar5 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar5);
    return;
  }
  func_0x0001092af97c(plVar6 + 0x12);
LAB_10aae08e8:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aae08ec);
  (*pcVar4)();
}



/* Entry: 10aae0a44; end: 10aae0a5b;  */

void FUN_10aae0a44(undefined8 *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_109d1918c(&plStack_58,param_2 + 0x110);
  FUN_109d1918c(&plStack_60,param_2 + 0x40);
  uStack_38 = 2;
  FUN_10a235b1c(&plStack_50,&uStack_38);
  plVar5 = (long *)(lStack_40 + 8);
  if (*plVar5 != 0) {
    func_0x0001092b4274(plVar5);
  }
  *plVar5 = lStack_48;
  lStack_48 = 0;
  func_0x00010a235d1c(lStack_40,0,&plStack_58);
  func_0x00010a235d1c(lStack_40,1,&plStack_60);
  *param_1 = plStack_50;
  plStack_50 = (long *)0x0;
  if (lStack_48 != 0) {
    func_0x0001092b4274(&lStack_48);
    if (plStack_50 != (long *)0x0) {
      puVar1 = (ulong *)(plStack_50 + 1);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar4 & 0x1fffffffc) == 4) {
        do {
          uVar4 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar4 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar4 - 1 == 0) {
          (**(code **)(*plStack_50 + 8))();
        }
      }
    }
  }
  if (plStack_60 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_60 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plStack_60 + 8))();
      }
    }
  }
  if (plStack_58 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_58 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plStack_58 + 8))();
      }
    }
  }
  return;
}



/* Entry: 10aae0a5c; end: 10aae0aff;  */

void FUN_10aae0a5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c43fd0;
  if (param_1[0x15] != 0) {
    func_0x0001092b4274();
  }
  func_0x0001092ba41c(param_1 + 0xc);
  (**(code **)param_1[5])();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 10aae0b00; end: 10aae0b4f;  */

void FUN_10aae0b00(long param_1)

{
  FUN_10aae0b90(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0xa8) != 0) {
    func_0x0001092b4274();
  }
  func_0x0001092ba41c(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010aae0b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x28))((undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10aae0b50; end: 10aae0b8b;  */

long FUN_10aae0b50(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c44010);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10aae0b8c; end: 10aae0b8f;  */

void FUN_10aae0b8c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aae0b90; end: 10aae0d37;  */

void FUN_10aae0b90(undefined8 *param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plStack_40;
  long lStack_38;
  
  (*(code *)*param_1)(&plStack_40,param_2,param_1);
  plVar7 = plStack_40;
  lVar8 = param_1[0x11];
  plStack_40 = (long *)0x0;
  param_1[0x11] = 0;
  plVar4 = (long *)(lVar8 + 0x10);
  do {
    lVar6 = *plVar4;
    lStack_38 = lVar8;
    if (lVar6 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 != '\0') goto LAB_10aae0c00;
      if ((*(char *)(lVar8 + 0xa8) == '\x01') &&
         (plVar4 = *(long **)(lVar8 + 0xa0), plVar4 != (long *)0x0)) {
        puVar1 = (ulong *)(plVar4 + 1);
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar5 & 0x1fffffffc) == 4) {
          do {
            uVar5 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar5 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar5 - 1 == 0) {
            (**(code **)(*plVar4 + 8))();
          }
        }
      }
      *(undefined8 *)(lVar8 + 0x98) = param_2;
      *(long **)(lVar8 + 0xa0) = plVar7;
      *(undefined1 *)(lVar8 + 0xa8) = 1;
      *(undefined8 *)(lVar8 + 0x10) = 2;
      FUN_109d1b4dc(lVar8 + 0x18);
      plVar7 = (long *)0x0;
      goto LAB_10aae0c88;
    }
    ClearExclusiveLocal();
LAB_10aae0c00:
  } while (((uint)lVar6 >> 1 & 1) == 0);
  if (lVar8 != 0) {
LAB_10aae0c88:
    func_0x0001092b4274(&lStack_38,lVar8);
  }
  if (plVar7 != (long *)0x0) {
    puVar1 = (ulong *)(plVar7 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  if (plStack_40 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_40 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plStack_40 + 8))();
      }
    }
  }
  return;
}



/* Entry: 10aae0d38; end: 10aae0d97;  */

long * FUN_10aae0d38(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_10aae0b90(param_1 + 1);
  }
  if (param_1[0x12] != 0) {
    func_0x0001092b4274();
  }
  func_0x0001092ba41c(param_1 + 9);
  (**(code **)param_1[2])();
  return param_1;
}



/* Entry: 10aae0d98; end: 10aae0def;  */

long FUN_10aae0d98(long param_1)

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



/* Entry: 10aae0df0; end: 10aae0e4b;  */

long * FUN_10aae0df0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x00010aad6998(plVar1 + 3);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10aae0e4c; end: 10aae0fab;  */

long FUN_10aae0e4c(long param_1)

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



/* Entry: 10aae0fac; end: 10aae128f;  */

/* WARNING: Removing unreachable block (ram,0x00010aae1070) */
/* WARNING: Removing unreachable block (ram,0x00010aae1074) */
/* WARNING: Removing unreachable block (ram,0x00010aae107c) */
/* WARNING: Removing unreachable block (ram,0x00010aae1084) */
/* WARNING: Removing unreachable block (ram,0x00010aae1090) */
/* WARNING: Removing unreachable block (ram,0x00010aae1098) */
/* WARNING: Removing unreachable block (ram,0x00010aae10a0) */
/* WARNING: Removing unreachable block (ram,0x00010aae10a4) */
/* WARNING: Removing unreachable block (ram,0x00010aae11bc) */
/* WARNING: Removing unreachable block (ram,0x00010aae11c0) */
/* WARNING: Removing unreachable block (ram,0x00010aae11c8) */
/* WARNING: Removing unreachable block (ram,0x00010aae11d0) */
/* WARNING: Removing unreachable block (ram,0x00010aae11dc) */
/* WARNING: Removing unreachable block (ram,0x00010aae11e4) */
/* WARNING: Removing unreachable block (ram,0x00010aae11ec) */
/* WARNING: Removing unreachable block (ram,0x00010aae11f0) */

void FUN_10aae0fac(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  code *pcStack_60;
  code *pcStack_58;
  long *plStack_50;
  undefined8 *puStack_48;
  
  lVar3 = **(long **)*param_1;
  uVar10 = *(undefined8 *)(*(long **)*param_1)[1];
  plVar8 = *(long **)(lVar3 + 0x50);
  puStack_68 = (undefined8 *)0x0;
  if (plVar8 == (long *)0x0) {
    puStack_70 = (undefined8 *)0xc8;
    __Znwm();
    puStack_70[2] = 0;
    puStack_70[1] = 0x200000006;
    *(undefined2 *)(puStack_70 + 3) = 4;
    puStack_70[5] = 0;
    puStack_70[4] = 0;
    puStack_70[7] = 0;
    puStack_70[6] = 0;
    puStack_70[9] = 0;
    puStack_70[8] = 0;
    puStack_70[0xb] = 0;
    puStack_70[10] = 0;
    puStack_70[0xd] = 0;
    puStack_70[0xc] = 0;
    puStack_70[0xf] = 0;
    puStack_70[0xe] = 0;
    puStack_70[0x10] = 0;
    puStack_70[0x11] = puStack_70 + 3;
    puStack_70[0x12] = 0;
    *(undefined2 *)(puStack_70 + 0x13) = 0;
    *puStack_70 = &PTR_DAT_110c44068;
    plVar9 = puStack_70 + 0x14;
    *plVar9 = lVar3;
    puStack_70[0x15] = uVar10;
    *(undefined1 *)(puStack_70 + 0x17) = 1;
    puStack_70[0x18] = 0;
    pcStack_60 = FUN_10aae12c0;
    puStack_68 = puStack_70;
  }
  else {
    pcStack_58 = (code *)0x0;
    (**(code **)(*plVar8 + 0x28))(plVar8,0,&pcStack_58);
    if (pcStack_58 != (code *)0x0) {
      func_0x0001092af97c(&pcStack_58);
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10aae126c);
      (*pcVar6)();
    }
    puStack_70 = (undefined8 *)0xd0;
    __Znwm();
    *(undefined2 *)(puStack_70 + 3) = 4;
    puStack_70[2] = 0;
    puStack_70[1] = 0x200000006;
    puStack_70[5] = 0;
    puStack_70[4] = 0;
    puStack_70[7] = 0;
    puStack_70[6] = 0;
    puStack_70[9] = 0;
    puStack_70[8] = 0;
    puStack_70[0xb] = 0;
    puStack_70[10] = 0;
    puStack_70[0xd] = 0;
    puStack_70[0xc] = 0;
    puStack_70[0xf] = 0;
    puStack_70[0xe] = 0;
    puStack_70[0x10] = 0;
    puStack_70[0x11] = puStack_70 + 3;
    puStack_70[0x12] = 0;
    *(undefined2 *)(puStack_70 + 0x13) = 0;
    *puStack_70 = &PTR_FUN_110c44030;
    plVar9 = puStack_70 + 0x14;
    *plVar9 = lVar3;
    puStack_70[0x15] = uVar10;
    *(undefined1 *)(puStack_70 + 0x17) = 1;
    puStack_70[0x18] = 0;
    puStack_70[0x19] = plVar8;
    if (puStack_68 != (undefined8 *)0x0) {
      func_0x0001092b4274(&puStack_68);
    }
    pcStack_60 = FUN_10aae1290;
    puStack_68 = puStack_70;
    __ZNSt13exception_ptrD1Ev(&pcStack_58);
  }
  puVar1 = (undefined8 *)(lVar3 + 0x40);
  if (plVar9[4] != 0) {
    func_0x0001092b4274();
  }
  plVar9[4] = (long)puStack_68;
  puStack_68 = (undefined8 *)0x0;
  pcStack_58 = pcStack_60;
  plStack_50 = plVar9;
  puStack_48 = puVar1;
  (**(code **)*puVar1)(puVar1,&pcStack_58);
  if (puStack_68 != (undefined8 *)0x0) {
    func_0x0001092b4274(&puStack_68);
  }
  plVar8 = *(long **)(lVar3 + 0x200);
  if (plVar8 != (long *)0x0) {
    puVar2 = (ulong *)(plVar8 + 1);
    do {
      uVar7 = *puVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = uVar7 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar7 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar8 + 8))();
      }
    }
  }
  *(undefined8 **)(lVar3 + 0x200) = puStack_70;
  return;
}



/* Entry: 10aae1290; end: 10aae12bf;  */

void FUN_10aae1290(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x28);
  FUN_10aae12c0();
                    /* WARNING: Could not recover jumptable at 0x00010aae12bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10aae12c0; end: 10aae13b7;  */

void FUN_10aae12c0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lStack_28;
  
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10aae138c);
    (*pcVar4)();
  }
  lVar6 = param_1[4];
  param_1[4] = 0;
  lStack_28 = lVar6;
  if (((uint)*(undefined8 *)(*(long *)(*param_1 + 0x78) + 0x10) >> 1 & 1) == 0) {
    FUN_10aabb0f4(*param_1,param_1 + 1);
  }
  plVar1 = (long *)(lVar6 + 0x10);
  do {
    lVar5 = *plVar1;
    if (lVar5 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(lVar6 + 0x18);
        goto LAB_10aae1344;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar5 >> 1 & 1) != 0) {
LAB_10aae1344:
      if ((char)param_1[3] == '\x01') {
        *(undefined1 *)(param_1 + 3) = 0;
      }
      lStack_28 = 0;
      if ((lVar6 != 0) && (func_0x0001092b4274(&lStack_28,lVar6), lStack_28 != 0)) {
        func_0x0001092b4274(&lStack_28);
      }
      return;
    }
  } while( true );
}



/* Entry: 10aae13b8; end: 10aae17c7;  */

undefined8 * FUN_10aae13b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c44030;
  if (param_1[0x18] != 0) {
    func_0x0001092b4274();
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10aae17c8; end: 10aae1d0b;  */

void FUN_10aae17c8(long *param_1,long *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar5 = (undefined8 *)0x80;
  __Znwm();
  *puVar5 = FUN_10aae8164;
  puVar5[1] = FUN_10aae85c0;
  puVar5[0xd] = param_2;
  func_0x0001092ba17c(puVar5 + 2);
  lVar7 = puVar5[7];
  if (lVar7 != 0) {
    plVar6 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar7;
  lVar7 = *param_2;
  puVar5[0xb] = lVar7;
  plVar6 = (long *)(lVar7 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((uint)*(undefined8 *)(puVar5[0xb] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0xf) = 0;
    lVar7 = puVar5[0xb];
    plVar6 = (long *)(lVar7 + 0x10);
    uStack_38 = puVar5[3];
    do {
      lVar10 = *plVar6;
      if (lVar10 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') goto LAB_10aae1b74;
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar10 >> 1 & 1) == 0);
  }
  plVar6 = (long *)puVar5[0xb];
  if (((uint)*(undefined8 *)(puVar5[0xb] + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar6 + 0x12);
    goto LAB_10aae1bb0;
  }
  if ((*(byte *)(plVar6 + 0x15) & 1) == 0) goto LAB_10aae1bb0;
  puVar5[9] = plVar6[0x13];
  lVar7 = plVar6[0x14];
  puVar5[10] = lVar7;
  if (lVar7 == 0) {
LAB_10aae18e8:
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar9 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar9 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar9 & 0x1fffffffc) == 4) {
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar9 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  else {
    plVar6 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar6 = (long *)puVar5[0xb];
    if (plVar6 != (long *)0x0) goto LAB_10aae18e8;
  }
  plVar8 = (long *)puVar5[0xd];
  plVar6 = (long *)*plVar8;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar9 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar9 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar9 & 0x1fffffffc) == 4) {
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar9 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    plVar8 = (long *)puVar5[0xd];
  }
  *plVar8 = 0;
  lVar7 = puVar5[10];
  puVar5[0xe] = puVar5[9];
  puVar5[10] = 0;
  puVar5[0xb] = lVar7;
  puVar5[0xc] = lVar7;
  plVar6 = (long *)(lVar7 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((uint)*(undefined8 *)(puVar5[0xc] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0xf) = 1;
    lVar7 = puVar5[0xc];
    plVar6 = (long *)(lVar7 + 0x10);
    uStack_38 = puVar5[3];
    do {
      lVar10 = *plVar6;
      if (lVar10 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
LAB_10aae1b74:
          uStack_48 = 0;
          puStack_40 = puVar5;
          func_0x000109d1b588(lVar7 + 0x18,&uStack_48);
          *(undefined8 *)(lVar7 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar10 >> 1 & 1) == 0);
  }
  plVar6 = (long *)puVar5[0xc];
  if (((uint)*(undefined8 *)(puVar5[0xc] + 0x10) >> 5 & 1) == 0) {
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    plVar6 = (long *)puVar5[0xb];
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    puVar5[0xb] = 0;
    if (puVar5[0xe] != 0) {
      (**(code **)(*(long *)(puVar5[0xe] + 0x18) + 0x10))();
    }
    func_0x0001092ba100(puVar5 + 2);
    plVar6 = (long *)puVar5[0xb];
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    plVar6 = (long *)puVar5[10];
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    func_0x000109d1a1d0(puVar5 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar5);
    return;
  }
  func_0x0001092af97c(plVar6 + 0x12);
LAB_10aae1bb0:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aae1bb4);
  (*pcVar4)();
}



/* Entry: 10aae1d0c; end: 10aae1d2b;  */

void FUN_10aae1d0c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010aae1d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))();
  return;
}



/* Entry: 10aae1d2c; end: 10aae1d8b;  */

long * FUN_10aae1d2c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_10aae1d8c(param_1 + 1);
  }
  if (param_1[0x12] != 0) {
    func_0x0001092b4274();
  }
  func_0x0001092ba41c(param_1 + 9);
  (**(code **)param_1[2])();
  return param_1;
}



/* Entry: 10aae1d8c; end: 10aae1f33;  */

void FUN_10aae1d8c(undefined8 *param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plStack_40;
  long lStack_38;
  
  (*(code *)*param_1)(&plStack_40,param_2,param_1);
  plVar7 = plStack_40;
  lVar8 = param_1[0x11];
  plStack_40 = (long *)0x0;
  param_1[0x11] = 0;
  plVar4 = (long *)(lVar8 + 0x10);
  do {
    lVar6 = *plVar4;
    lStack_38 = lVar8;
    if (lVar6 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 != '\0') goto LAB_10aae1dfc;
      if ((*(char *)(lVar8 + 0xa8) == '\x01') &&
         (plVar4 = *(long **)(lVar8 + 0xa0), plVar4 != (long *)0x0)) {
        puVar1 = (ulong *)(plVar4 + 1);
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar5 & 0x1fffffffc) == 4) {
          do {
            uVar5 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar5 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar5 - 1 == 0) {
            (**(code **)(*plVar4 + 8))();
          }
        }
      }
      *(undefined8 *)(lVar8 + 0x98) = param_2;
      *(long **)(lVar8 + 0xa0) = plVar7;
      *(undefined1 *)(lVar8 + 0xa8) = 1;
      *(undefined8 *)(lVar8 + 0x10) = 2;
      FUN_109d1b4dc(lVar8 + 0x18);
      plVar7 = (long *)0x0;
      goto LAB_10aae1e84;
    }
    ClearExclusiveLocal();
LAB_10aae1dfc:
  } while (((uint)lVar6 >> 1 & 1) == 0);
  if (lVar8 != 0) {
LAB_10aae1e84:
    func_0x0001092b4274(&lStack_38,lVar8);
  }
  if (plVar7 != (long *)0x0) {
    puVar1 = (ulong *)(plVar7 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  if (plStack_40 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_40 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plStack_40 + 8))();
      }
    }
  }
  return;
}



/* Entry: 10aae1f34; end: 10aae1fd7;  */

void FUN_10aae1f34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c440f0;
  if (param_1[0x15] != 0) {
    func_0x0001092b4274();
  }
  func_0x0001092ba41c(param_1 + 0xc);
  (**(code **)param_1[5])();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 10aae1fd8; end: 10aae2027;  */

void FUN_10aae1fd8(long param_1)

{
  FUN_10aae1d8c(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0xa8) != 0) {
    func_0x0001092b4274();
  }
  func_0x0001092ba41c(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010aae2020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x28))((undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10aae2028; end: 10aae2063;  */

long FUN_10aae2028(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c44130);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10aae2064; end: 10aae2067;  */

void FUN_10aae2064(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aae2068; end: 10aae20bf;  */

long FUN_10aae2068(long param_1)

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



/* Entry: 10aae20c0; end: 10aae2293;  */

void FUN_10aae20c0(long *param_1,long param_2)

{
  undefined8 **ppuVar1;
  undefined8 **ppuVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long *unaff_x24;
  long *plVar11;
  long *unaff_x26;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_f8;
  undefined8 **ppuStack_f0;
  long lStack_e8;
  undefined8 *apuStack_e0 [7];
  long lStack_a8;
  undefined8 *apuStack_a0 [7];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = *(long **)(param_2 + 0x10);
  ppuVar2 = (undefined8 **)*param_1;
  ppuVar7 = (undefined8 **)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (ppuVar7 == ppuVar2) {
    ppuVar6 = (undefined8 **)plVar11[1];
    ppuVar7 = ppuVar6;
    if (ppuVar6 != (undefined8 **)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      ppuVar7 = ppuVar6;
      ppuStack_f0 = ppuVar6;
      if (ppuVar6 != (undefined8 **)0x0) {
        lVar9 = *plVar11;
        lStack_f8 = lVar9;
        if (lVar9 != 0) {
          lVar10 = plVar11[2];
          lVar5 = plVar11[3];
          lStack_a8 = plVar11[4];
          unaff_x24 = &lStack_a8;
          (**(code **)(plVar11[5] + 0x18))(apuStack_a0);
          lStack_e8 = plVar11[0xc];
          unaff_x26 = &lStack_e8;
          (**(code **)(plVar11[0xd] + 0x18))(apuStack_e0);
          lStack_118 = plVar11[0x15];
          lStack_120 = plVar11[0x14];
          lStack_108 = plVar11[0x17];
          lStack_110 = plVar11[0x16];
          FUN_10aabe008(lVar9,lVar10,(char)lVar5,&lStack_a8,&lStack_e8,&lStack_120);
          (*(code *)*apuStack_e0[0])(apuStack_e0);
          ppuVar7 = apuStack_a0;
          (*(code *)*apuStack_a0[0])();
        }
        ppuVar1 = ppuVar6 + 1;
        do {
          puVar8 = *ppuVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
          if (bVar4) {
            *ppuVar1 = (undefined8 *)((long)puVar8 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar8 == (undefined8 *)0x0) {
          (*(code *)(*ppuVar6)[2])(ppuVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppuVar7 = ppuVar6;
        }
      }
    }
  }
  else {
    ppuVar7 = (undefined8 **)(plVar11 + 4);
    FUN_10aabad30(ppuVar7,ppuVar2);
  }
  if (ppuVar2 != (undefined8 **)0x0) {
    ppuVar7 = ppuVar2;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*apuStack_e0[0])(unaff_x26 + 1);
  (*(code *)*apuStack_a0[0])(unaff_x24 + 1);
  FUN_10aae2068(&lStack_f8);
  if (ppuVar2 != (undefined8 **)0x0) {
    __ZdlPv(ppuVar2);
  }
  __Unwind_Resume();
  puVar8 = ppuVar7[1];
  if (puVar8 != (undefined8 *)0x0) {
    (**(code **)puVar8[0xd])();
    (**(code **)puVar8[5])(puVar8 + 5);
    if (puVar8[1] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar8);
    return;
  }
  return;
}



/* Entry: 10aae2294; end: 10aae22f3;  */

void FUN_10aae2294(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 0x68))();
    (*(code *)**(undefined8 **)(lVar1 + 0x28))((undefined8 *)(lVar1 + 0x28));
    if (*(long *)(lVar1 + 8) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10aae22f4; end: 10aae230b;  */

void FUN_10aae22f4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10aae230c; end: 10aae240b;  */

void FUN_10aae230c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar7 = *(undefined8 **)(param_2 + 8);
  *param_1 = &PTR_FUN_110c44140;
  puVar4 = (undefined8 *)0xc0;
  __Znwm();
  lVar5 = puVar7[1];
  uVar6 = *puVar7;
  puVar4[1] = puVar7[1];
  *puVar4 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar6 = puVar7[2];
  *(undefined1 *)(puVar4 + 3) = *(undefined1 *)(puVar7 + 3);
  puVar4[2] = uVar6;
  puVar4[4] = puVar7[4];
  (**(code **)(puVar7[5] + 0x18))(puVar4 + 5);
  puVar4[0xc] = puVar7[0xc];
  (**(code **)(puVar7[0xd] + 0x18))(puVar4 + 0xd);
  uVar6 = puVar7[0x14];
  uVar9 = puVar7[0x17];
  uVar8 = puVar7[0x16];
  puVar4[0x15] = puVar7[0x15];
  puVar4[0x14] = uVar6;
  puVar4[0x17] = uVar9;
  puVar4[0x16] = uVar8;
  param_1[1] = puVar4;
  return;
}



/* Entry: 10aae240c; end: 10aae25d7;  */

void FUN_10aae240c(undefined8 param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long *unaff_x23;
  long *plVar8;
  long *unaff_x25;
  undefined1 auStack_118 [8];
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_e8;
  long *plStack_e0;
  long lStack_d8;
  undefined8 *apuStack_d0 [7];
  long lStack_98;
  undefined8 *apuStack_90 [7];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = *(long **)(param_2 + 0x10);
  __ZNSt13exception_ptrC1ERKS_(auStack_118,param_1);
  lStack_e8 = 0;
  plStack_e0 = (long *)0x0;
  plVar4 = (long *)plVar8[1];
  if (((plVar4 == (long *)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_e0 = plVar4, plVar4 == (long *)0x0)) ||
     (lVar6 = *plVar8, lStack_e8 = lVar6, lVar6 == 0)) {
    plVar4 = plStack_e0;
    FUN_10aabe278(plVar8 + 0xc,auStack_118);
    if (plVar4 == (long *)0x0) goto LAB_10aae2548;
  }
  else {
    lVar7 = plVar8[2];
    lVar3 = plVar8[3];
    lStack_98 = plVar8[4];
    unaff_x23 = &lStack_98;
    (**(code **)(plVar8[5] + 0x18))(apuStack_90);
    lStack_d8 = plVar8[0xc];
    unaff_x25 = &lStack_d8;
    (**(code **)(plVar8[0xd] + 0x18))(apuStack_d0);
    lStack_108 = plVar8[0x15];
    lStack_110 = plVar8[0x14];
    lStack_f8 = plVar8[0x17];
    lStack_100 = plVar8[0x16];
    FUN_10aabe008(lVar6,lVar7,(char)lVar3,&lStack_98,&lStack_d8,&lStack_110);
    (*(code *)*apuStack_d0[0])(apuStack_d0);
    (*(code *)*apuStack_90[0])(apuStack_90);
  }
  plVar8 = plVar4 + 1;
  do {
    lVar6 = *plVar8;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar2) {
      *plVar8 = lVar6 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
LAB_10aae2548:
  puVar5 = auStack_118;
  __ZNSt13exception_ptrD1Ev();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*apuStack_d0[0])(unaff_x25 + 1);
  (*(code *)*apuStack_90[0])(unaff_x23 + 1);
  FUN_10aae2068(&lStack_e8);
  __ZNSt13exception_ptrD1Ev(auStack_118);
  __Unwind_Resume();
  lVar6 = *(long *)(puVar5 + 8);
  if (lVar6 == 0) {
    return;
  }
  (*(code *)**(undefined8 **)(lVar6 + 0x68))();
  (*(code *)**(undefined8 **)(lVar6 + 0x28))((undefined8 *)(lVar6 + 0x28));
  if (*(long *)(lVar6 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar6);
  return;
}



/* Entry: 10aae25d8; end: 10aae2637;  */

void FUN_10aae25d8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 0x68))();
    (*(code *)**(undefined8 **)(lVar1 + 0x28))((undefined8 *)(lVar1 + 0x28));
    if (*(long *)(lVar1 + 8) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10aae2638; end: 10aae264f;  */

void FUN_10aae2638(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10aae2650; end: 10aae274f;  */

void FUN_10aae2650(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar7 = *(undefined8 **)(param_2 + 8);
  *param_1 = &PTR_FUN_110c44160;
  puVar4 = (undefined8 *)0xc0;
  __Znwm();
  lVar5 = puVar7[1];
  uVar6 = *puVar7;
  puVar4[1] = puVar7[1];
  *puVar4 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar6 = puVar7[2];
  *(undefined1 *)(puVar4 + 3) = *(undefined1 *)(puVar7 + 3);
  puVar4[2] = uVar6;
  puVar4[4] = puVar7[4];
  (**(code **)(puVar7[5] + 0x18))(puVar4 + 5);
  puVar4[0xc] = puVar7[0xc];
  (**(code **)(puVar7[0xd] + 0x18))(puVar4 + 0xd);
  uVar6 = puVar7[0x14];
  uVar9 = puVar7[0x17];
  uVar8 = puVar7[0x16];
  puVar4[0x15] = puVar7[0x15];
  puVar4[0x14] = uVar6;
  puVar4[0x17] = uVar9;
  puVar4[0x16] = uVar8;
  param_1[1] = puVar4;
  return;
}



/* Entry: 10aae2750; end: 10aae2813;  */

void FUN_10aae2750(long *param_1,long param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = *(long **)(param_2 + 0x10);
  lVar1 = *param_1;
  lVar6 = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10aabad30(plVar5 + 2,lVar1,lVar6);
  plVar4 = (long *)plVar5[1];
  if ((plVar4 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0))
  {
    lVar6 = *plVar5;
    if (lVar6 != 0) {
      plVar5 = plVar4;
      __ZNSt3__16chrono12steady_clock3nowEv();
      *(long **)(lVar6 + 0x18) = plVar5;
    }
    plVar5 = plVar4 + 1;
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10aae2814; end: 10aae2863;  */

void FUN_10aae2814(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 0x18))((undefined8 *)(lVar1 + 0x18));
    if (*(long *)(lVar1 + 8) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10aae2864; end: 10aae287b;  */

void FUN_10aae2864(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10aae287c; end: 10aae292f;  */

void FUN_10aae287c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  puVar6 = *(undefined8 **)(param_2 + 8);
  *param_1 = &PTR_FUN_110c44180;
  puVar4 = (undefined8 *)0x50;
  __Znwm();
  lVar5 = puVar6[1];
  uVar7 = *puVar6;
  puVar4[1] = puVar6[1];
  *puVar4 = uVar7;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4[2] = puVar6[2];
  (**(code **)(puVar6[3] + 0x18))(puVar4 + 3,puVar6 + 3);
  param_1[1] = puVar4;
  return;
}



/* Entry: 10aae2930; end: 10aae2987;  */

long FUN_10aae2930(long param_1)

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



/* Entry: 10aae2988; end: 10aae298b;  */

void FUN_10aae2988(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10aae298c; end: 10aae29bf;  */

void FUN_10aae298c(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


