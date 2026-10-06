/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1078d745c; end: 1078d746b;  */

void FUN_1078d745c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e9028;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078d769c; end: 1078d76af;  */

void FUN_1078d769c(void)

{
  func_0x0001078d768c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078d7990; end: 1078d7a33;  */

void FUN_1078d7990(undefined8 param_1,long *param_2)

{
  long lVar1;
  int extraout_w10;
  long lStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *param_2;
  lStack_38 = param_2[1];
  lStack_40 = lVar1;
  if (lStack_38 != 0) {
    do {
      func_0x0001078d8460();
    } while (extraout_w10 != 0);
  }
  lStack_50 = lVar1 + 0x208;
  uStack_48 = 1;
  func_0x00010724e404();
  func_0x0001078d7a34(*(undefined8 *)(lVar1 + 0x330));
  func_0x00010724e49c(&lStack_50);
  func_0x0001078d7968(&lStack_40);
  return;
}



/* Entry: 1078d7d74; end: 1078d7d83;  */

void FUN_1078d7d74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e9200;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078d7fb8; end: 1078d7fcb;  */

void FUN_1078d7fb8(void)

{
  func_0x0001078d7fa8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078d83b4; end: 1078d843b;  */

/* WARNING: Possible PIC construction at 0x0001078d8424: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078d8428) */
/* WARNING: Removing unreachable block (ram,0x0001078d8434) */
/* WARNING: Removing unreachable block (ram,0x0001078d842c) */
/* WARNING: Removing unreachable block (ram,0x0001078d8494) */

void FUN_1078d83b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  
  func_0x0001078d8450();
  func_0x0001078ce374(auStack_40,1);
  puStack_30[2] = 0;
  *puStack_30 = &PTR_DAT_1109e8b48;
  puStack_30[1] = 0;
  func_0x000108127608(puStack_30 + 3,param_3);
  puVar1 = puStack_30;
  puStack_30 = (undefined8 *)0x0;
  func_0x0001078ce358(param_1,puVar1 + 3);
  func_0x0001078ce450(auStack_40);
  return;
}



/* Entry: 1078d8cb8; end: 1078d8d2f;  */

bool FUN_1078d8cb8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  bool bVar2;
  long unaff_x20;
  
  func_0x000100152bac(&stack0x00000040);
  func_0x000107c613d0();
  uVar1 = *(ulong *)(unaff_x20 + 8);
  if (-1 < (char)*(byte *)(unaff_x20 + 0x17)) {
    uVar1 = (ulong)*(byte *)(unaff_x20 + 0x17);
  }
  if (param_2 == uVar1) {
    func_0x000107c60bf4();
    bVar2 = (int)unaff_x20 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 1078d97f0; end: 1078d9857;  */

void FUN_1078d97f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x0001078d9400(auStack_38);
  func_0x0001078d9858(param_1,auStack_38,param_3,1,0x28,0xffffffff,1);
  func_0x0001078db60c(auStack_38);
  return;
}



/* Entry: 1078daf3c; end: 1078daf63;  */

bool FUN_1078daf3c(long param_1,int param_2,int param_3)

{
  ulong *puVar1;
  ulong uVar2;
  
  if (-1 < param_2) {
    if (((param_3 < *(int *)(param_1 + 4)) && (-1 < param_3)) && (param_2 < *(int *)(param_1 + 4)))
    {
      puVar1 = (ulong *)(param_1 + 0x10);
      func_0x0001078db0f8(puVar1,(long)param_3);
      uVar2 = (ulong)param_2;
      func_0x0001078db128();
      return (uVar2 & *puVar1) != 0;
    }
  }
  return false;
}



/* Entry: 1078db2bc; end: 1078db397;  */

undefined4 * FUN_1078db2bc(long *param_1,undefined4 *param_2,undefined4 *param_3)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [40];
  
  puVar2 = (undefined4 *)param_1[1];
  if (puVar2 < (undefined4 *)param_1[2]) {
    if (param_2 == puVar2) {
      *puVar2 = *param_3;
      param_1[1] = (long)(puVar2 + 1);
    }
    else {
      func_0x0001078387bc(param_1,param_2,puVar2,param_2 + 1);
      *param_2 = *param_3;
    }
  }
  else {
    plVar1 = param_1;
    func_0x0001006601e8(param_1,((long)puVar2 - *param_1 >> 2) + 1);
    func_0x000100161bec(auStack_58,plVar1,(long)param_2 - *param_1 >> 2,param_1 + 2);
    func_0x0001078dbc0c(auStack_58,param_3);
    func_0x0001078388c8(param_1,auStack_58,param_2);
    func_0x0001078dbf34();
  }
  return param_2;
}



/* Entry: 1078db67c; end: 1078db6bf;  */

void FUN_1078db67c(long param_1,long param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != param_2; lVar1 = lVar1 + -0x28) {
    func_0x000104be7d74(lVar1 + -0x18);
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1078dbc00; end: 1078dbc0b;  */

void FUN_1078dbc00(ulong *param_1,undefined4 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  func_0x0001078dbd30();
  puVar5 = (undefined4 *)param_1[2];
  if (puVar5 == (undefined4 *)param_1[3]) {
    uVar6 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      uVar4 = (long)((long)puVar5 - uVar6) >> 1;
      if ((long)puVar5 - uVar6 == 0) {
        uVar4 = 1;
      }
      func_0x000100161bec(&uStack_80,uVar4,uVar4 >> 2,param_1[4]);
      func_0x000107838968(&uStack_80,param_1[1],param_1[2]);
      uVar4 = param_1[1];
      uVar6 = *param_1;
      uVar8 = param_1[3];
      uVar7 = param_1[2];
      param_1[1] = uStack_78;
      *param_1 = uStack_80;
      param_1[3] = uStack_68;
      param_1[2] = uStack_70;
      uStack_80 = uVar6;
      uStack_78 = uVar4;
      uStack_70 = uVar7;
      uStack_68 = uVar8;
      func_0x000100161cc4(&uStack_80);
      puVar5 = (undefined4 *)param_1[2];
    }
    else {
      lVar2 = (((long)(uVar4 - uVar6) >> 2) + 1) / -2;
      lVar1 = uVar4 + lVar2 * 4;
      lVar3 = (long)puVar5 - uVar4;
      if (lVar3 != 0) {
        _memmove(lVar1,uVar4,lVar3);
        uVar4 = param_1[1];
      }
      puVar5 = (undefined4 *)(lVar1 + lVar3);
      param_1[1] = uVar4 + lVar2 * 4;
      param_1[2] = (ulong)puVar5;
    }
  }
  *puVar5 = *param_2;
  param_1[2] = (ulong)(puVar5 + 1);
  return;
}



/* Entry: 1078dd4c8; end: 1078dd787;  */

void FUN_1078dd4c8(long *param_1,char *param_2,long *param_3)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  char *pcVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  
  if (((param_1 != (long *)0x0) && (param_2 != (char *)0x0)) && (lVar11 = *param_1, lVar11 != 0)) {
    uVar13 = 0xfeedbeef;
    uVar12 = 0x9e3779b9;
    pcVar2 = param_2;
    _strlen();
    uVar10 = (uint)pcVar2;
    pcVar4 = param_2;
    if (uVar10 < 0xc) {
      uVar5 = 0x9e3779b9;
      uVar8 = uVar10;
    }
    else {
      uVar5 = 0x9e3779b9;
      pcVar9 = pcVar2;
      do {
        iVar1 = uVar12 + (int)pcVar4[4] + pcVar4[5] * 0x100 + pcVar4[6] * 0x10000 +
                (uint)(byte)pcVar4[7] * 0x1000000;
        uVar13 = uVar13 + (int)pcVar4[8] + pcVar4[9] * 0x100 + pcVar4[10] * 0x10000 +
                 (uint)(byte)pcVar4[0xb] * 0x1000000;
        uVar12 = (uVar5 + (int)*pcVar4 + pcVar4[1] * 0x100 + pcVar4[2] * 0x10000 +
                 (uint)(byte)pcVar4[3] * 0x1000000) - (iVar1 + uVar13) ^ uVar13 >> 0xd;
        uVar5 = (iVar1 - uVar13) - uVar12 ^ uVar12 << 8;
        uVar13 = (uVar13 - uVar12) - uVar5 ^ uVar5 >> 0xd;
        uVar12 = (uVar12 - uVar5) - uVar13 ^ uVar13 >> 0xc;
        uVar8 = (uVar5 - uVar13) - uVar12 ^ uVar12 << 0x10;
        uVar13 = (uVar13 - uVar12) - uVar8 ^ uVar8 >> 5;
        uVar5 = (uVar12 - uVar8) - uVar13 ^ uVar13 >> 3;
        uVar12 = (uVar8 - uVar13) - uVar5 ^ uVar5 << 10;
        uVar13 = (uVar13 - uVar5) - uVar12 ^ uVar12 >> 0xf;
        pcVar4 = pcVar4 + 0xc;
        uVar8 = (int)pcVar9 - 0xc;
        pcVar9 = (char *)(ulong)uVar8;
      } while (0xb < uVar8);
    }
    uVar13 = uVar13 + uVar10;
    switch(uVar8) {
    case 0xb:
      uVar13 = uVar13 + (uint)(byte)pcVar4[10] * 0x1000000;
    case 10:
      uVar13 = uVar13 + pcVar4[9] * 0x10000;
    case 9:
      uVar13 = uVar13 + pcVar4[8] * 0x100;
    case 8:
      uVar12 = uVar12 + (uint)(byte)pcVar4[7] * 0x1000000;
    case 7:
      uVar12 = uVar12 + pcVar4[6] * 0x10000;
    case 6:
      uVar12 = uVar12 + pcVar4[5] * 0x100;
    case 5:
      uVar12 = uVar12 + (int)pcVar4[4];
    case 4:
      uVar5 = uVar5 + (uint)(byte)pcVar4[3] * 0x1000000;
    case 3:
      uVar5 = uVar5 + pcVar4[2] * 0x10000;
    case 2:
      uVar5 = uVar5 + pcVar4[1] * 0x100;
    case 1:
      uVar5 = uVar5 + (int)*pcVar4;
    }
    uVar5 = (uVar5 - uVar12) - uVar13 ^ uVar13 >> 0xd;
    uVar12 = (uVar12 - uVar13) - uVar5 ^ uVar5 << 8;
    uVar13 = (uVar13 - uVar5) - uVar12 ^ uVar12 >> 0xd;
    uVar5 = (uVar5 - uVar12) - uVar13 ^ uVar13 >> 0xc;
    uVar12 = (uVar12 - uVar13) - uVar5 ^ uVar5 << 0x10;
    uVar13 = (uVar13 - uVar5) - uVar12 ^ uVar12 >> 5;
    uVar5 = (uVar5 - uVar12) - uVar13 ^ uVar13 >> 3;
    uVar12 = (uVar12 - uVar13) - uVar5 ^ uVar5 << 10;
    plVar6 = *(long **)(lVar11 + 0x20);
    lVar11 = *(long *)(*plVar6 +
                      (ulong)(((uVar13 - uVar5) - uVar12 ^ uVar12 >> 0xf) & (int)plVar6[1] - 1U) *
                      0x10);
    if (lVar11 != 0) {
      lVar7 = plVar6[4];
      do {
        lVar11 = lVar11 - lVar7;
        if (*(uint *)(lVar11 + 0x50) == uVar10) {
          uVar3 = *(undefined8 *)(lVar11 + 0x48);
          _memcmp(uVar3,param_2,(ulong)pcVar2 & 0xffffffff);
          if ((int)uVar3 == 0) {
            *param_3 = lVar11;
            return;
          }
        }
        lVar11 = *(long *)(lVar11 + 0x40);
      } while (lVar11 != 0);
    }
  }
  return;
}



/* Entry: 1078df5e0; end: 1078df83b;  */

undefined **
FUN_1078df5e0(undefined **param_1,undefined **param_2,undefined8 *param_3,undefined **param_4)

{
  int iVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **unaff_x22;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined4 uStack_f0;
  undefined8 *puStack_e8;
  undefined1 uStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined8 *puStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_88;
  int iStack_80;
  undefined *apuStack_7c [8];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = &puStack_88;
  ppuVar6 = (undefined **)0xc;
  ppuVar2 = param_1;
  (*(code *)*param_1)(param_1,ppuVar5,0xc);
  if ((int)ppuVar2 != 0) goto LAB_1078df624;
  if (puStack_88 == (undefined *)0xbb31312058544bab && iStack_80 == 0xa1a0a0d) {
    ppuVar5 = apuStack_7c;
    ppuVar6 = (undefined **)0x34;
    ppuVar2 = param_1;
    (*(code *)*param_1)(param_1,ppuVar5,0x34);
    if ((int)ppuVar2 != 0) goto LAB_1078df624;
    ppuVar3 = (undefined **)0x1;
    ppuVar5 = (undefined **)0x90;
    _calloc();
    if (ppuVar3 == (undefined **)0x0) {
LAB_1078df750:
      ppuVar2 = (undefined **)0xd;
      goto LAB_1078df624;
    }
    ppuVar6 = &puStack_88;
    ppuVar2 = ppuVar3;
    ppuVar5 = param_1;
    param_4 = param_2;
    func_0x0001078dfad4();
    iVar1 = (int)ppuVar2;
    unaff_x22 = ppuVar3;
  }
  else {
    if (puStack_88 != (undefined *)0xbb30322058544bab || iStack_80 != 0xa1a0a0d) {
      ppuVar2 = (undefined **)0xf;
      goto LAB_1078df624;
    }
    ppuVar5 = apuStack_7c;
    ppuVar6 = (undefined **)0x44;
    ppuVar2 = param_1;
    (*(code *)*param_1)(param_1,ppuVar5,0x44);
    if ((int)ppuVar2 != 0) goto LAB_1078df624;
    ppuVar3 = (undefined **)0x1;
    ppuVar5 = (undefined **)0xa8;
    _calloc();
    if (ppuVar3 == (undefined **)0x0) goto LAB_1078df750;
    ppuVar6 = &puStack_88;
    ppuVar2 = ppuVar3;
    ppuVar5 = param_1;
    param_4 = param_2;
    func_0x0001078e1510();
    iVar1 = (int)ppuVar2;
    unaff_x22 = ppuVar3;
  }
  if (iVar1 != 0) {
    _free(unaff_x22);
    unaff_x22 = (undefined **)0x0;
    param_2 = ppuVar2;
  }
  *param_3 = unaff_x22;
LAB_1078df624:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  uStack_98 = 0x1078df75c;
  ppuVar3 = (undefined **)0xb;
  if (((ppuVar5 != (undefined **)0x0) && (ppuVar2 != (undefined **)0x0)) &&
     (param_4 != (undefined **)0x0)) {
    puVar4 = (undefined8 *)0x28;
    ppuStack_c0 = unaff_x22;
    ppuStack_b8 = param_1;
    ppuStack_b0 = param_2;
    puStack_a8 = param_3;
    puStack_a0 = &stack0xfffffffffffffff0;
    _malloc();
    if (puVar4 == (undefined8 *)0x0) {
      return (undefined **)0xd;
    }
    puVar4[3] = ppuVar5;
    puVar4[4] = 0;
    *puVar4 = ppuVar2;
    puVar4[1] = 0;
    puVar4[2] = ppuVar5;
    uStack_f0 = 2;
    puStack_128 = &UNK_1078dd8b4;
    puStack_120 = &UNK_1078dd94c;
    puStack_118 = &UNK_1078dd998;
    puStack_110 = &UNK_1078ddb10;
    puStack_108 = &UNK_1078ddb34;
    puStack_100 = &UNK_1078ddb68;
    puStack_f8 = &UNK_1078ddb8c;
    uStack_c8 = 0;
    ppuVar3 = &puStack_128;
    puStack_e8 = puVar4;
    FUN_1078df5e0(ppuVar3,ppuVar6,param_4);
  }
  return ppuVar3;
}



/* Entry: 1078e0d68; end: 1078e0ef3;  */

void FUN_1078e0d68(long param_1,code *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  long lStack_78;
  
  if (((param_1 != 0) && (param_2 != (code *)0x0)) && (*(int *)(param_1 + 0x34) != 0)) {
    uVar12 = 0;
    do {
      uVar6 = *(uint *)(param_1 + 0x24) >> (ulong)(uVar12 & 0x1f);
      uVar1 = uVar6;
      if (uVar6 < 2) {
        uVar1 = 1;
      }
      uVar7 = *(uint *)(param_1 + 0x28) >> (ulong)(uVar12 & 0x1f);
      uVar2 = uVar7;
      if (uVar7 < 2) {
        uVar2 = 1;
      }
      uVar8 = *(uint *)(param_1 + 0x2c) >> (ulong)(uVar12 & 0x1f);
      uVar9 = uVar8 - 1;
      if (uVar8 == 0 || uVar9 == 0) {
        uVar8 = 1;
      }
      lVar10 = *(long *)(param_1 + 0x18);
      fVar13 = (float)NEON_ucvtf(*(undefined4 *)(lVar10 + 0x24));
      uVar11 = *(uint *)(lVar10 + 0x30);
      if (*(uint *)(lVar10 + 0x30) <= (uint)(int)((float)uVar6 / fVar13)) {
        uVar11 = (int)((float)uVar6 / fVar13);
      }
      uVar11 = uVar11 * (*(uint *)(lVar10 + 0x20) >> 3);
      if ((*(byte *)(lVar10 + 0x18) >> 1 & 1) == 0) {
        uVar11 = uVar11 + (int)((float)(int)((float)uVar11 / 4.0) * 4.0 - (float)uVar11);
      }
      uVar4 = *(uint *)(lVar10 + 0x2c);
      uVar6 = 0;
      if (uVar4 != 0) {
        uVar6 = (uVar9 + uVar4) / uVar4;
      }
      if (CARRY4(uVar9,uVar4)) {
        uVar6 = 1;
      }
      uVar9 = (uint)((float)uVar7 / (float)*(uint *)(lVar10 + 0x28));
      uVar7 = *(uint *)(lVar10 + 0x34);
      if (*(uint *)(lVar10 + 0x34) <= uVar9) {
        uVar7 = uVar9;
      }
      iVar3 = *(int *)(param_1 + 0x38);
      iVar5 = *(int *)(param_1 + 0x3c);
      (**(code **)(*(long *)(param_1 + 8) + 8))(param_1,uVar12,0,0,&lStack_78);
      uVar9 = uVar12;
      (*param_2)(uVar12,0,uVar1,uVar2,uVar8,uVar11 * uVar7 * uVar6 * iVar5 * iVar3,
                 *(long *)(param_1 + 0x70) + lStack_78,param_3);
    } while ((uVar9 == 0) && (uVar12 = uVar12 + 1, uVar12 < *(uint *)(param_1 + 0x34)));
  }
  return;
}



/* Entry: 1078e2120; end: 1078e2247;  */

undefined8 FUN_1078e2120(ulong param_1,ulong param_2,uint param_3,uint param_4,long *param_5)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  if (param_1 == 0) {
    return 0xb;
  }
  if ((((uint)param_2 < *(uint *)(param_1 + 0x34)) && (param_3 < *(uint *)(param_1 + 0x38))) &&
     (*(int *)(param_1 + 0x88) == 0)) {
    if (*(char *)(param_1 + 0x21) == '\x01') {
      uVar1 = *(uint *)(param_1 + 0x3c);
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x2c) >> (ulong)((uint)param_2 & 0x1f);
      if (uVar1 < 2) {
        uVar1 = 1;
      }
    }
    if (param_4 < uVar1) {
      lVar3 = *(long *)(*(long *)(param_1 + 0xa0) + (param_2 & 0xffffffff) * 0x18 + 0x20);
      *param_5 = lVar3;
      if (param_3 != 0) {
        uVar2 = param_1;
        func_0x0001078df8c8(param_1,param_2,2);
        lVar3 = lVar3 + uVar2 * param_3;
        *param_5 = lVar3;
      }
      if (param_4 == 0) {
        return 0;
      }
      func_0x0001078df83c(param_1,param_2,2);
      *param_5 = lVar3 + (param_1 & 0xffffffff) * (ulong)param_4;
      return 0;
    }
  }
  return 10;
}



/* Entry: 1078e36b0; end: 1078e36b7;  */

byte FUN_1078e36b0(double param_1,double param_2,double param_3,undefined8 *param_4,ulong param_5)

{
  ulong *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  bool bVar8;
  ulong *puVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  ulong *puVar24;
  ulong unaff_x23;
  byte bVar25;
  uint uVar26;
  ulong *puVar27;
  double dVar28;
  ulong *puStack_88;
  ulong *puStack_80;
  undefined8 uStack_78;
  
  puVar9 = (ulong *)*param_4;
  bVar8 = false;
  if ((ABS(param_1) < 180.0) && (bVar8 = false, !NAN(ABS(param_2)) && !NAN(dRam0000000113726a60))) {
    bVar8 = ABS(param_2) < dRam0000000113726a60;
  }
  if (bVar8) {
    puVar24 = (ulong *)puVar9[3];
    dVar28 = (double)(uint)(1 << (ulong)((uint)*puVar24 >> 0x14 & 0x1f));
    uVar22 = (uint)(((param_1 + 180.0) / 360.0) * dVar28);
    param_2 = param_2 * 0.017453292519943295;
    puVar16 = puVar9;
    _tan();
    _asinh();
    bVar25 = 0;
    param_2 = param_2 / -3.141592653589793;
    func_0x0001079143ec(param_2,0x3ff0000000000000);
    uVar21 = (uint)(param_2 * dVar28);
    dVar28 = (param_3 / (double)puVar9[0xb]) * (param_3 / (double)puVar9[0xb]);
    iVar10 = (int)dVar28;
    uVar5 = uVar22 - iVar10;
    iVar4 = *(uint *)((long)puVar9 + 0x54) - 1;
    iVar2 = uVar21 + iVar10;
    if (iVar4 <= (int)(uVar21 + iVar10)) {
      iVar2 = iVar4;
    }
    puVar1 = puVar9 + 6;
    for (; (int)uVar5 <= (int)(uVar22 + iVar10); uVar5 = uVar5 + 1) {
      for (uVar26 = uVar21 - iVar10 & ((int)(uVar21 - iVar10) >> 0x1f ^ 0xffffffffU);
          (int)uVar26 <= iVar2; uVar26 = uVar26 + 1) {
        if ((double)(int)(uVar5 - uVar22) * (double)(int)(uVar5 - uVar22) +
            (double)(int)(uVar26 - uVar21) * (double)(int)(uVar26 - uVar21) <= dVar28) {
          uVar13 = uVar5;
          if ((int)uVar5 < 0) {
            uVar13 = *(uint *)((long)puVar9 + 0x54) + uVar5;
          }
          uVar12 = *puVar24;
          uVar6 = (uint)uVar12 >> 0x10 & 0xf;
          uVar11 = ((uint)uVar12 >> 0x14 & 0x1f) - uVar6;
          uVar14 = uVar13 >> (ulong)(uVar11 & 0x1f);
          uVar3 = uVar26 >> (ulong)(uVar11 & 0x1f);
          uVar11 = (uVar3 << (ulong)uVar6) + uVar14;
          uVar23 = (ulong)uVar11;
          uVar13 = (uVar13 - (uVar14 << (ulong)((byte)puVar9[9] & 0x1f))) +
                   (uVar26 - (uVar3 << (ulong)((byte)puVar9[9] & 0x1f))) *
                   *(uint *)((long)puVar9 + 0x4c);
          if ((uVar5 == uVar22 && puVar24[2] <= param_5) && uVar26 == uVar21) {
            *(uint *)(puVar24 + 1) = uVar11;
            *(uint *)((long)puVar24 + 0xc) = uVar13;
            puVar24[2] = param_5;
          }
          uVar15 = puVar9[5];
          if ((uVar15 != 0) && (puVar9[7] != 0)) {
            uVar18 = uVar15 - 1;
            uVar14 = (uint)uVar15;
            if ((uVar15 & uVar18) == 0) {
              uVar19 = (ulong)(uVar14 - 1 & uVar11);
            }
            else {
              uVar19 = uVar23;
              if (uVar15 <= uVar23) {
                uVar3 = 0;
                if (uVar14 != 0) {
                  uVar3 = uVar11 / uVar14;
                }
                uVar19 = (ulong)(uVar11 - uVar3 * uVar14);
              }
            }
            puVar27 = *(ulong **)(puVar9[4] + uVar19 * 8);
            if (puVar27 != (ulong *)0x0) {
              do {
                while( true ) {
                  puVar27 = (ulong *)*puVar27;
                  if (puVar27 == (ulong *)0x0) goto code_r0x0001078e3938;
                  uVar20 = puVar27[1];
                  if (uVar20 != uVar23) break;
                  if ((uint)puVar27[2] == uVar11) {
                    uVar11 = (uint)*(byte *)((long)puVar9 + 0x17);
                    goto code_r0x0001078e3b3c;
                  }
                }
                if ((uVar15 & uVar18) == 0) {
                  uVar20 = uVar20 & uVar18;
                }
                else if (uVar15 <= uVar20) {
                  uVar7 = 0;
                  if (uVar15 != 0) {
                    uVar7 = uVar20 / uVar15;
                  }
                  uVar20 = uVar20 - uVar7 * uVar15;
                }
              } while (uVar20 == uVar19);
            }
          }
code_r0x0001078e3938:
          *puVar24 = uVar12 & 0xff80000000000000 |
                     uVar12 & 0x1ffffff | (uVar12 + 0x2000000 >> 0x19 & 0x3fffffff) << 0x19;
          uVar15 = (ulong)*(byte *)((long)puVar9 + 0x17);
          uVar12 = uVar15;
          if ((char)*(byte *)((long)puVar9 + 0x17) < '\0') {
            uVar12 = puVar9[1];
          }
          uVar18 = puVar9[5];
          if (uVar18 != 0) {
            uVar19 = uVar18 - 1;
            uVar14 = (uint)uVar18;
            if ((uVar18 & uVar19) == 0) {
              unaff_x23 = (ulong)(uVar14 - 1 & uVar11);
            }
            else {
              unaff_x23 = uVar23;
              if (uVar18 <= uVar23) {
                uVar3 = 0;
                if (uVar14 != 0) {
                  uVar3 = uVar11 / uVar14;
                }
                unaff_x23 = (ulong)(uVar11 - uVar3 * uVar14);
              }
            }
            puVar27 = *(ulong **)(puVar9[4] + unaff_x23 * 8);
            if (puVar27 != (ulong *)0x0) {
              do {
                while( true ) {
                  puVar27 = (ulong *)*puVar27;
                  if (puVar27 == (ulong *)0x0) goto code_r0x0001078e39ec;
                  uVar20 = puVar27[1];
                  if (uVar20 != uVar23) break;
                  if ((uint)puVar27[2] == uVar11) goto code_r0x0001078e3b0c;
                }
                if ((uVar18 & uVar19) == 0) {
                  uVar20 = uVar20 & uVar19;
                }
                else if (uVar18 <= uVar20) {
                  uVar7 = 0;
                  if (uVar18 != 0) {
                    uVar7 = uVar20 / uVar18;
                  }
                  uVar20 = uVar20 - uVar7 * uVar18;
                }
              } while (uVar20 == unaff_x23);
            }
          }
code_r0x0001078e39ec:
          func_0x000107917234();
          uStack_78 = 1;
          *puVar16 = 0;
          puVar16[1] = uVar23;
          *(uint *)(puVar16 + 2) = uVar11;
          *(uint *)((long)puVar16 + 0x14) = (uint)uVar12;
          puStack_88 = puVar16;
          puStack_80 = puVar1;
          if ((uVar18 == 0) || (*(float *)(puVar9 + 8) * (float)uVar18 < (float)(puVar9[7] + 1))) {
            func_0x0001079157f0(uVar18 << 1);
            func_0x00010736dc54(puVar9 + 4);
            uVar18 = puVar9[5];
            if ((uVar18 & uVar18 - 1) == 0) {
              unaff_x23 = (ulong)((int)uVar18 - 1U & uVar11);
            }
            else {
              unaff_x23 = uVar23;
              if (uVar18 <= uVar23) {
                uVar12 = 0;
                if (uVar18 != 0) {
                  uVar12 = uVar23 / uVar18;
                }
                unaff_x23 = uVar23 - uVar12 * uVar18;
              }
            }
          }
          puVar27 = puStack_88;
          uVar12 = puVar9[4];
          puVar16 = *(ulong **)(uVar12 + unaff_x23 * 8);
          if (puVar16 == (ulong *)0x0) {
            *puStack_88 = *puVar1;
            *puVar1 = (ulong)puStack_88;
            *(ulong **)(uVar12 + unaff_x23 * 8) = puVar1;
            if (*puStack_88 != 0) {
              uVar23 = *(ulong *)(*puStack_88 + 8);
              if ((uVar18 & uVar18 - 1) == 0) {
                uVar23 = uVar23 & uVar18 - 1;
              }
              else if (uVar18 <= uVar23) {
                uVar15 = 0;
                if (uVar18 != 0) {
                  uVar15 = uVar23 / uVar18;
                }
                uVar23 = uVar23 - uVar15 * uVar18;
              }
              *(ulong **)(uVar12 + uVar23 * 8) = puStack_88;
            }
          }
          else {
            *puStack_88 = *puVar16;
            *puVar16 = (ulong)puStack_88;
          }
          puStack_88 = (ulong *)0x0;
          puVar9[7] = puVar9[7] + 1;
          func_0x00010736de14(&puStack_88);
          uVar15 = (ulong)*(byte *)((long)puVar9 + 0x17);
code_r0x0001078e3b0c:
          if ((uint)uVar15 >> 7 != 0) {
            uVar15 = puVar9[1];
          }
          puVar16 = puVar9;
          func_0x0001001548a8(puVar9,uVar15 + (ulong)(uint)puVar9[10] * 8);
          uVar11 = (uint)*(char *)((long)puVar9 + 0x17);
          puVar24 = puVar9;
          if (*(char *)((long)puVar9 + 0x17) < '\0') {
            puVar24 = (ulong *)*puVar9;
          }
          puVar9[3] = (ulong)puVar24;
code_r0x0001078e3b3c:
          puVar17 = puVar9;
          if ((uVar11 >> 7 & 1) != 0) {
            puVar17 = (ulong *)*puVar9;
          }
          uVar12 = *(ulong *)((long)puVar17 +
                             (ulong)(uVar13 >> 6) * 8 + (ulong)*(uint *)((long)puVar27 + 0x14));
          uVar23 = uVar12 | 1L << ((ulong)uVar13 & 0x3f);
          *(ulong *)((long)puVar17 +
                    (ulong)(uVar13 >> 6) * 8 + (ulong)*(uint *)((long)puVar27 + 0x14)) = uVar23;
          bVar25 = uVar12 != uVar23 | bVar25;
        }
      }
    }
  }
  else {
    bVar25 = 0;
  }
  return bVar25;
}



/* Entry: 1078e5f40; end: 1078e5fb3;  */

void FUN_1078e5f40(void)

{
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w9;
  uint extraout_w9_00;
  uint extraout_w9_01;
  uint extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint uVar1;
  undefined4 *unaff_x22;
  
  func_0x000107913c7c();
  func_0x0001078e5e34();
  func_0x000107917174(*unaff_x22);
  uVar1 = extraout_w10;
  if (extraout_w8 != extraout_w9) {
    uVar1 = (uint)(extraout_w8 < extraout_w9);
  }
  if (uVar1 == 1) {
    func_0x000107915db0();
    uVar1 = extraout_w10_00;
    if (extraout_w8_00 != extraout_w9_00) {
      uVar1 = (uint)(extraout_w8_00 < extraout_w9_00);
    }
    if (uVar1 == 1) {
      func_0x000107915df4();
      uVar1 = extraout_w10_01;
      if (extraout_w8_01 != extraout_w9_01) {
        uVar1 = (uint)(extraout_w8_01 < extraout_w9_01);
      }
      if (uVar1 == 1) {
        func_0x000107916f54();
      }
    }
  }
  return;
}



/* Entry: 1078e6494; end: 1078e64cb;  */

void FUN_1078e6494(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x000107914c78();
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != unaff_x19; lVar1 = lVar1 + -0x18) {
    func_0x00010791667c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1078e672c; end: 1078e674b;  */

void FUN_1078e672c(undefined8 *param_1)

{
  func_0x0001078e6750();
  *param_1 = &PTR_DAT_1109e9ed0;
  return;
}



/* Entry: 1078e67d4; end: 1078e6cd7;  */

void FUN_1078e67d4(double *****param_1,double *****param_2,double ******param_3)

{
  double *****pppppdVar1;
  int iVar2;
  bool bVar3;
  undefined1 uVar4;
  double ******ppppppdVar5;
  double ******ppppppdVar6;
  double ***pppdVar7;
  double *****extraout_x8;
  double *****extraout_x8_00;
  double *****pppppdVar8;
  double *****pppppdVar9;
  ulong extraout_x8_01;
  double ***pppdVar10;
  double ****ppppdVar11;
  double ***pppdVar12;
  double *****pppppdVar13;
  double *****pppppdVar14;
  long lVar15;
  double *****pppppdVar16;
  double ****in_register_00005008;
  double ****ppppdVar17;
  double *****pppppdVar18;
  double ****in_register_00005028;
  double ****ppppdVar19;
  double *****pppppdStack_f8;
  double *****pppppdStack_f0;
  double *****pppppdStack_e8;
  double *****pppppdStack_e0;
  double *****pppppdStack_d8;
  double *****pppppdStack_d0;
  double *****pppppdStack_c8;
  double ****ppppdStack_c0;
  double ****ppppdStack_b0;
  double ***pppdStack_a8;
  double ****ppppdStack_a0;
  double ***pppdStack_98;
  double ****ppppdStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  pppppdVar13 = *param_3;
  ppppppdVar6 = param_3;
  func_0x0001079160e0();
  pppppdVar16 = param_1;
  ppppdVar17 = in_register_00005008;
  pppppdVar18 = param_2;
  ppppdVar19 = in_register_00005028;
LAB_1078e6814:
  bVar3 = param_3[1] <= pppppdVar13;
  if (pppppdVar13 == param_3[1]) {
    ppppppdVar5 = param_3 + 3;
    pppppdStack_c8 = (double *****)(param_3 + 0x1f);
    ppppdStack_c0 = (double ****)param_3[0x21];
    pppppdVar13 = param_3[0x19];
    pppppdStack_e0 = (double *****)param_3;
    pppppdStack_d8 = (double *****)(param_3 + 8);
    pppppdStack_d0 = (double *****)ppppppdVar5;
    func_0x000107917008(param_3[0x1a]);
    pppppdVar9 = extraout_x8;
    if (bVar3) {
      ppppdStack_90 = (double ****)0x0;
      uStack_88 = 0;
      uStack_80 = 0;
      func_0x000107915854();
      pppppdVar8 = extraout_x8_00;
      pppppdVar9 = pppppdVar13;
      ppppdStack_b0 = (double ****)pppppdVar16;
      pppdStack_a8 = (double ***)ppppdVar17;
      ppppdStack_a0 = (double ****)pppppdVar18;
      pppdStack_98 = (double ***)ppppdVar19;
      for (; pppppdVar13 != pppppdVar8; pppppdVar13 = pppppdVar13 + 0xf) {
        FUN_1078eb308(&ppppdStack_b0,pppppdVar13 + 4);
        func_0x0001078eb39c(&ppppdStack_90,pppppdVar9);
        pppppdVar8 = param_3[0x1a];
        pppppdVar9 = pppppdVar9 + 0xf;
      }
      func_0x0001078ea444(&ppppdStack_b0,&ppppdStack_90,0,&pppppdStack_e0);
      ppppppdVar6 = (double ******)&ppppdStack_90;
      FUN_1078ebb60();
    }
    else {
      while (pppppdVar13 != pppppdVar9) {
        pppppdVar13 = pppppdVar13 + 0xf;
        for (pppppdVar8 = pppppdVar13; pppppdVar8 != pppppdVar9; pppppdVar8 = pppppdVar8 + 0xf) {
          ppppppdVar6 = &pppppdStack_e0;
          func_0x000107915378();
          func_0x0001078ea4e8();
          pppppdVar9 = param_3[0x1a];
        }
      }
    }
    ppppdVar11 = (double ****)0x0;
    pppppdVar8 = param_3[4];
    pppppdVar9 = param_3[3];
    for (pppppdVar13 = pppppdVar9; pppppdVar13 != pppppdVar8; pppppdVar13 = pppppdVar13 + 0x36) {
      pppppdVar13[0x33] = ppppdVar11;
      if ((*(byte *)((long)pppppdVar13 + 0x1a2) & 1) == 0) {
        pppppdVar1 = param_3[0xf];
        for (pppppdVar14 = param_3[0xe]; pppppdVar14 != pppppdVar1; pppppdVar14 = pppppdVar14 + 2) {
          func_0x000107914c6c();
          func_0x0001078ea40c();
          if ((int)ppppppdVar6 != 0) {
            *(undefined1 *)((long)pppppdVar13 + 0x1a2) = 1;
          }
        }
      }
      ppppdVar11 = (double ****)((long)ppppdVar11 + 1);
    }
    pppppdStack_e8 = (double *****)(param_3 + 0x20);
    pppppdStack_f8 = (double *****)ppppppdVar5;
    pppppdStack_f0 = (double *****)param_3;
    if (((ulong)(((long)pppppdVar8 - (long)pppppdVar9) / 0x1b0) < 0x11) ||
       (func_0x0001079172ec(), extraout_x8_01 < 0x1001)) {
      for (; uVar4 = pppppdVar9 == pppppdVar8, !(bool)uVar4; pppppdVar9 = pppppdVar9 + 0x36) {
        while (func_0x000107915a18(), !(bool)uVar4) {
          func_0x000107915378(&pppppdStack_f8);
          func_0x0001078ed69c();
        }
        pppppdVar8 = param_3[4];
      }
    }
    else {
      ppppdStack_b0 = (double ****)0x0;
      pppdStack_a8 = (double ***)0x0;
      ppppdStack_a0 = (double ****)0x0;
      ppppdStack_90 = (double ****)0x0;
      uStack_88 = 0;
      uStack_80 = 0;
      func_0x000107913d34();
      pppppdVar13 = pppppdVar9;
      pppppdStack_e0 = pppppdVar16;
      pppppdStack_d8 = (double *****)ppppdVar17;
      pppppdStack_d0 = pppppdVar18;
      pppppdStack_c8 = (double *****)ppppdVar19;
      for (; uVar4 = pppppdVar9 == pppppdVar8, !(bool)uVar4; pppppdVar9 = pppppdVar9 + 0x36) {
        func_0x00010791760c();
        func_0x0001078e9c18();
        func_0x0001078eda1c(&ppppdStack_b0,pppppdVar13);
        pppppdVar8 = param_3[4];
        pppppdVar13 = pppppdVar13 + 0x36;
      }
      pppppdVar16 = *param_3;
      pppppdVar13 = pppppdVar16;
      while (func_0x000107915a18(), !(bool)uVar4) {
        FUN_1078eda98(&pppppdStack_e0,pppppdVar13);
        func_0x0001078edb44(&ppppdStack_90,pppppdVar16);
        pppppdVar13 = pppppdVar13 + 0x20;
        pppppdVar16 = pppppdVar16 + 0x20;
      }
      func_0x000107918010();
      func_0x0001078ed490();
      func_0x0001078ee07c(&ppppdStack_90);
      func_0x0001078ee0a0(&ppppdStack_b0);
    }
    return;
  }
  if (0 < (long)pppppdVar13[10]) {
    iVar2 = *(int *)pppppdVar13;
    if (iVar2 != 5) {
      pppppdVar13[0xd] = (double ****)(param_3[8] + (long)pppppdVar13[5] * 4);
      pppppdVar13[0xe] = pppppdVar13[7];
      pppppdVar13[0xf] = pppppdVar13[9];
    }
    ppppppdVar5 = (double ******)(pppppdVar13 + 0x15);
    pppppdVar13[0x16] = in_register_00005028;
    *ppppppdVar5 = param_2;
    pppppdVar13[0x18] = in_register_00005008;
    pppppdVar13[0x17] = (double ****)param_1;
    pppppdVar16 = param_1;
    ppppdVar17 = in_register_00005008;
    pppppdVar18 = param_2;
    ppppdVar19 = in_register_00005028;
    func_0x000107917ae4();
    if ((int)ppppppdVar6 == 0) {
      pppdVar7 = *pppppdVar13[0xd];
      ppppdVar11 = pppppdVar13[0xf];
      for (pppdVar12 = pppdVar7 + (long)pppppdVar13[0xe] * 2;
          pppdVar12 != pppdVar7 + (long)ppppdVar11 * 2; pppdVar12 = pppdVar12 + 2) {
        func_0x000107915848();
        func_0x0001078e9c18();
      }
      for (lVar15 = (long)pppppdVar13[0x14] << 4; lVar15 != 0; lVar15 = lVar15 + -0x10) {
        func_0x000107915848();
        func_0x0001078e9c18();
      }
      *(undefined1 *)(pppppdVar13 + 0x19) = 1;
      func_0x0001078e9c64();
      ppppppdVar6 = ppppppdVar5;
    }
    else {
      *(undefined1 *)(pppppdVar13 + 0x19) = 0;
    }
    func_0x000107917ae4();
    if ((iVar2 == 4) && (((ulong)ppppppdVar6 & 1) == 0)) {
      pppdVar7 = *pppppdVar13[0xd];
      ppppdVar11 = pppppdVar13[0xf];
      bVar3 = true;
      pppdVar12 = pppdVar7 + (long)pppppdVar13[0xe] * 2;
      while (pppdVar10 = pppdVar12 + 2, pppdVar10 != pppdVar7 + (long)ppppdVar11 * 2) {
        pppppdVar16 = (double *****)pppppdVar13[0x1e];
        ppppdVar17 = (double ****)0x0;
        pppppdVar18 = (double *****)pppppdVar13[0x1f];
        ppppdVar19 = (double ****)0x0;
        func_0x0001078e9ca4(pppppdVar16,pppppdVar18,*pppdVar12,pppdVar12[1],*pppdVar10,pppdVar12[3])
        ;
        if (bVar3) {
          pppppdVar13[0x1a] = (double ****)pppppdVar16;
LAB_1078e693c:
          pppppdVar13[0x1b] = (double ****)pppppdVar16;
        }
        else {
          if ((double)pppppdVar16 < (double)pppppdVar13[0x1a]) {
            pppppdVar13[0x1a] = (double ****)pppppdVar16;
          }
          pppppdVar18 = (double *****)pppppdVar13[0x1b];
          ppppdVar19 = (double ****)0x0;
          if ((double)pppppdVar18 < (double)pppppdVar16) goto LAB_1078e693c;
        }
        bVar3 = false;
        pppdVar12 = pppdVar10;
      }
    }
    if ((((*(byte *)((long)pppppdVar13 + 0x59) & 1) != 0) || (((ulong)pppppdVar13[0xb] & 1) != 0))
       || (func_0x000107917ae4(), ((ulong)ppppppdVar6 & 1) != 0)) goto LAB_1078e6a08;
    ppppdVar11 = pppppdVar13[0xf];
    pppdVar7 = *pppppdVar13[0xd];
    pppdVar12 = pppdVar7 + (long)pppppdVar13[0xe] * 2;
    if (2 < (ulong)((long)ppppdVar11 - (long)pppppdVar13[0xe])) {
      ppppdVar17 = (double ****)pppdVar12[1];
      pppppdVar16 = (double *****)*pppdVar12;
      ppppdVar19 = (double ****)pppdVar12[3];
      pppppdVar18 = (double *****)pppdVar12[2];
      pppdVar10 = pppdVar12 + 4;
      pppppdStack_e0 = pppppdVar16;
      pppppdStack_d8 = (double *****)ppppdVar17;
      ppppdStack_b0 = (double ****)pppppdVar18;
      pppdStack_a8 = (double ***)ppppdVar19;
      do {
        if (pppdVar10 == pppdVar7 + (long)ppppdVar11 * 2) {
          lVar15 = (long)pppppdVar13[0x14] << 4;
          goto LAB_1078e69cc;
        }
        func_0x000107918010();
        func_0x0001078e9d1c();
        pppdVar10 = pppdVar10 + 2;
      } while (((ulong)ppppppdVar6 & 1) != 0);
      goto LAB_1078e69e8;
    }
    ppppppdVar6 = (double ******)0x1;
    goto LAB_1078e69ec;
  }
  goto LAB_1078e6a08;
  while( true ) {
    func_0x0001078e9d1c();
    lVar15 = lVar15 + -0x10;
    if (((ulong)ppppppdVar6 & 1) == 0) break;
LAB_1078e69cc:
    func_0x000107918010();
    if (lVar15 == 0) {
      func_0x0001078e9d1c();
      if ((int)ppppppdVar6 != 0) {
        func_0x000107918010();
        func_0x0001078e9d1c();
      }
      goto LAB_1078e69ec;
    }
  }
LAB_1078e69e8:
  ppppppdVar6 = (double ******)0x0;
LAB_1078e69ec:
  *(char *)((long)pppppdVar13 + 0xc9) = (char)ppppppdVar6;
  pppdVar7 = pppdVar7 + (long)ppppdVar11 * 2;
  *(undefined2 *)((long)pppppdVar13 + 0xca) = 0x101;
  pppdVar10 = pppdVar12 + 2;
  if (pppdVar7 != pppdVar12 && pppdVar10 != pppdVar7) {
    for (; pppdVar10 != pppdVar7; pppdVar10 = pppdVar10 + 2) {
      pppppdVar16 = (double *****)pppdVar10[-2];
      ppppdVar17 = (double ****)0x0;
      pppppdVar18 = (double *****)*pppdVar10;
      ppppdVar19 = (double ****)0x0;
      if ((double)pppppdVar18 <= (double)pppppdVar16) {
        *(undefined1 *)((long)pppppdVar13 + 0xca) = 0;
      }
      if ((double)pppppdVar16 <= (double)pppppdVar18) {
        *(undefined1 *)((long)pppppdVar13 + 0xcb) = 0;
      }
    }
  }
LAB_1078e6a08:
  pppppdVar13 = pppppdVar13 + 0x20;
  goto LAB_1078e6814;
}



/* Entry: 1078e8dd0; end: 1078e8f23;  */

void FUN_1078e8dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong *param_4)

{
  long lVar1;
  unkuint9 Var2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  double *unaff_x20;
  double *unaff_x22;
  ulong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  double dStack_70;
  double dStack_68;
  
  func_0x000107913e28();
  func_0x0001078e8f24(param_2,0);
  uVar5 = 0;
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  dVar6 = *unaff_x22;
  dVar8 = ABS(dVar6);
  if (0.0 <= dVar6) {
    dVar8 = dVar6;
  }
  uVar3 = *param_4;
  Var2 = (unkuint9)uVar3;
  dVar6 = 6.283185307179586;
  dVar9 = 0.0;
  for (; uVar5 < uVar3; uVar5 = uVar5 + 1) {
    dVar10 = *unaff_x20;
    dVar7 = dVar9;
    ___sincos_stret();
    dVar6 = dVar10 + dVar6 * dVar8;
    dStack_68 = unaff_x20[1] + dVar7 * dVar8;
    dStack_70 = dVar6;
    func_0x0001078e96d4(&lStack_88,&dStack_70);
    dVar9 = dVar9 - 6.283185307179586 / (double)(unkint9)Var2;
    uVar3 = *param_4;
  }
  func_0x0001078e96d4(&lStack_88,lStack_88);
  lVar4 = unaff_x19;
  FUN_1078e9868();
  if (lStack_80 != lStack_88) {
    func_0x0001004d77a8();
    func_0x0001078e9a00();
  }
  lVar1 = 0;
  if (-1 < *(long *)(lVar4 + 0x38)) {
    lVar1 = *(long *)(lVar4 + 0x48) - *(long *)(lVar4 + 0x38);
  }
  *(long *)(lVar4 + 0x50) = lVar1;
  lVar4 = *(long *)(unaff_x19 + 8);
  dVar8 = *unaff_x20;
  *(double *)(lVar4 + -8) = unaff_x20[1];
  *(double *)(lVar4 + -0x10) = dVar8;
  func_0x0001078e923c();
  func_0x0001079170f8();
  return;
}



/* Entry: 1078e9868; end: 1078e99ff;  */

long FUN_1078e9868(long param_1,uint param_2,undefined8 param_3,int param_4)

{
  ulong uVar1;
  uint *puVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  undefined8 extraout_x8;
  uint *extraout_x8_00;
  long extraout_x8_01;
  ulong uVar8;
  long extraout_x8_02;
  long extraout_x9;
  long *unaff_x19;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  uVar7 = param_2;
  func_0x000107913c90();
  bVar5 = 4 < uVar7;
  uVar6 = uVar7 == 5;
  if ((bool)uVar6) {
    *(undefined1 *)(*(long *)(param_1 + 0x48) + -8) = 1;
  }
  lVar4 = *unaff_x19;
  lVar10 = unaff_x19[1];
  lVar9 = lVar10 - lVar4 >> 8;
  unaff_x19[0x18] = lVar9;
  lVar12 = unaff_x19[0x15];
  lVar11 = unaff_x19[0x14];
  uVar1 = lVar9 + 1;
  func_0x000107916574();
  if (bVar5) {
    if (uVar1 >> 0x38 == 0) {
      uVar8 = extraout_x9 - lVar4;
      uVar3 = (long)uVar8 >> 7;
      if ((ulong)((long)uVar8 >> 7) <= uVar1) {
        uVar3 = uVar1;
      }
      uVar6 = uVar8 == 0x7fffffffffffff00;
      if (0x7ffffffffffffeff < uVar8) {
        uVar3 = 0xffffffffffffff;
      }
      if (uVar3 == 0) {
        param_1 = 0;
      }
      else {
        if (uVar3 >> 0x38 != 0) goto LAB_1078e99fc;
        param_1 = uVar3 << 8;
        __Znwm();
      }
      puVar2 = (uint *)(param_1 + (lVar10 - lVar4));
      *puVar2 = param_2;
      lVar11 = param_1 + uVar3 * 0x100;
      *(long *)(puVar2 + 2) = lVar9;
      *(long *)(puVar2 + 4) = lVar9 + -1;
      *(ulong *)(puVar2 + 6) = uVar1;
      lVar13 = unaff_x19[0x15];
      lVar12 = unaff_x19[0x14];
      *(long *)(puVar2 + 10) = lVar13;
      *(long *)(puVar2 + 8) = lVar12;
      func_0x0001079158cc();
      lVar10 = extraout_x8_02 + 0x100;
      *(long *)(extraout_x8_02 + 0xd4) = lVar13;
      *(long *)(extraout_x8_02 + 0xcc) = lVar12;
      *(undefined4 *)(extraout_x8_02 + 0xdc) = 0;
      func_0x00010791522c();
      _memcpy();
      *unaff_x19 = extraout_x8_02 + lVar9 * -0x100;
      unaff_x19[1] = lVar10;
      unaff_x19[2] = lVar11;
      if (lVar4 != 0) {
        func_0x000107914d94();
      }
      goto LAB_1078e99c0;
    }
  }
  else {
    *extraout_x8_00 = param_2;
    *(long *)(extraout_x8_00 + 2) = lVar9;
    *(long *)(extraout_x8_00 + 4) = lVar9 + -1;
    *(ulong *)(extraout_x8_00 + 6) = uVar1;
    *(long *)(extraout_x8_00 + 10) = lVar12;
    *(long *)(extraout_x8_00 + 8) = lVar11;
    func_0x0001079158cc();
    *(long *)(extraout_x8_01 + 0xd4) = lVar12;
    *(long *)(extraout_x8_01 + 0xcc) = lVar11;
    lVar10 = extraout_x8_01 + 0x100;
    *(undefined4 *)(extraout_x8_01 + 0xdc) = 0;
LAB_1078e99c0:
    unaff_x19[1] = lVar10;
    func_0x000107913564(extraout_x8);
    if ((bool)uVar6) {
      return lVar10 + -0x100;
    }
    ___stack_chk_fail();
  }
  func_0x0001078e9a48();
LAB_1078e99fc:
  func_0x000104bd35f4();
  func_0x000107913cd4();
  if (param_4 != 0) {
    func_0x000107915260();
    func_0x0001078e9a54();
  }
  while (func_0x00010791763c(), !(bool)uVar6) {
    func_0x000107915260();
    func_0x0001078e9a54();
    *(long *)(lVar4 + 0x48) = param_1;
  }
  return param_1;
}



/* Entry: 1078e9bf0; end: 1078e9d1b;  */

bool FUN_1078e9bf0(long param_1)

{
  if ((*(long *)(param_1 + 8) != 0) && (*(ulong *)(param_1 + 0x10) < *(ulong *)(param_1 + 0x18))) {
    return *(long *)(param_1 + 0x40) == 0;
  }
  return true;
}



/* Entry: 1078eb308; end: 1078eb39b;  */

void FUN_1078eb308(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *param_2;
  lVar1 = *param_1;
  if (lVar3 < *param_1) {
    *param_1 = lVar3;
    lVar1 = lVar3;
  }
  lVar2 = param_1[2];
  if (param_1[2] < lVar3) {
    param_1[2] = lVar3;
    lVar2 = lVar3;
  }
  lVar5 = param_2[1];
  lVar3 = param_1[1];
  if (lVar5 < param_1[1]) {
    param_1[1] = lVar5;
    lVar3 = lVar5;
  }
  lVar4 = param_1[3];
  if (param_1[3] < lVar5) {
    param_1[3] = lVar5;
    lVar4 = lVar5;
  }
  lVar5 = param_2[2];
  if (lVar5 < lVar1) {
    *param_1 = lVar5;
  }
  if (lVar2 < lVar5) {
    param_1[2] = lVar5;
  }
  lVar1 = param_2[3];
  if (lVar1 < lVar3) {
    param_1[1] = lVar1;
  }
  if (lVar4 < lVar1) {
    param_1[3] = lVar1;
  }
  return;
}



/* Entry: 1078eb63c; end: 1078eb68f;  */

void FUN_1078eb63c(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  
  func_0x000107915d78();
  if (!(bool)in_ZR) {
    func_0x000107914c78();
    lVar1 = extraout_x8;
    while (unaff_x21 != lVar1) {
      func_0x000107915d6c();
      lVar1 = extraout_x8_00;
      while (unaff_x21 = unaff_x22, unaff_x23 != lVar1) {
        func_0x00010791460c();
        func_0x0001078ea4e8();
        lVar1 = *(long *)(unaff_x20 + 8);
      }
    }
  }
  return;
}



/* Entry: 1078ebb60; end: 1078ebb83;  */

void FUN_1078ebb60(long param_1)

{
  func_0x000107914c90();
  if (param_1 != 0) {
    func_0x000107914de8();
  }
  return;
}



/* Entry: 1078ebf2c; end: 1078ebf8b;  */

undefined8 * FUN_1078ebf2c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  char cVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  char cVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint extraout_w8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  
  puVar4 = param_2;
  func_0x000107913ca4();
  func_0x0001078ec2c4();
  uVar8 = param_2[1];
  uVar6 = *param_2;
  param_1[2] = uVar8;
  param_1[1] = uVar6;
  func_0x000107916388();
  *(undefined8 *)((long)param_1 + 0xa2) = uVar8;
  *(undefined8 *)((long)param_1 + 0x9a) = uVar6;
  *param_1 = 1;
  func_0x000107918104(0x30);
  func_0x000107913564(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107913ca4();
  func_0x0001078ec2c4();
  func_0x000107916388();
  *(undefined8 *)((long)param_1 + 0xa2) = uVar8;
  *(undefined8 *)((long)param_1 + 0x9a) = uVar6;
  func_0x000107918104(100);
  func_0x000107913564(extraout_x8_00);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  dVar7 = (double)(long)param_1;
  dVar9 = (double)(long)puVar4;
  dVar10 = (double)param_3;
  func_0x000107917da8();
  cVar3 = NAN(dVar7);
  uVar2 = dVar7 == 0.0;
  cVar1 = dVar7 < 0.0;
  if (!(bool)uVar2) {
    func_0x000107915fcc();
    if (cVar1 == cVar3) {
      uVar5 = 0xffffffff;
      if (0.0 < dVar7) {
        uVar5 = 1;
      }
      return (undefined8 *)(ulong)uVar5;
    }
    func_0x000107914b3c();
    uVar5 = extraout_w8;
    if (!(bool)uVar2 && cVar1 == cVar3) {
      uVar5 = 1;
    }
    if (dVar9 < dVar10) {
      return (undefined8 *)(ulong)uVar5;
    }
  }
  return (undefined8 *)0x0;
}



/* Entry: 1078ec930; end: 1078ec99b;  */

void FUN_1078ec930(int param_1)

{
  if (((bRam0000000113726a70 & 1) == 0) && (func_0x000107917fa8(), param_1 != 0)) {
    uRam0000000113726b38 = 1;
    uRam0000000113726b30 = 0;
    func_0x0001078ec2fc();
    ___cxa_guard_release(0x113726a70);
  }
  func_0x0001079184cc(0x113726b30);
  return;
}



/* Entry: 1078ecd60; end: 1078ecdaf;  */

long FUN_1078ecd60(long param_1)

{
  long lVar1;
  
  lVar1 = 0x40;
  __Znwm(0x40);
  func_0x0001078ece3c();
  func_0x00010530126c(lVar1 + 0x18,param_1 + 0x18);
  return lVar1;
}



/* Entry: 1078eced4; end: 1078ecf13;  */

void FUN_1078eced4(undefined8 param_1)

{
  func_0x00010724664c(param_1,&UNK_10f43475e);
  func_0x00010791750c();
  return;
}



/* Entry: 1078ed378; end: 1078ed413;  */

undefined4 FUN_1078ed378(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  undefined4 extraout_w8;
  long *unaff_x19;
  undefined8 *unaff_x20;
  double dVar7;
  double dVar8;
  double dVar9;
  
  func_0x000107914c78();
  func_0x0001078ec28c();
  lVar5 = unaff_x20[1];
  lVar6 = *unaff_x19;
  func_0x000107915e78(*unaff_x20);
  dVar7 = (double)param_3;
  dVar8 = (double)lVar5;
  dVar9 = (double)lVar6;
  func_0x000107917da8();
  cVar4 = NAN(dVar7);
  uVar3 = dVar7 == 0.0;
  cVar2 = dVar7 < 0.0;
  if (!(bool)uVar3) {
    func_0x000107915fcc();
    if (cVar2 == cVar4) {
      if (dVar7 <= 0.0) {
        return 0xffffffff;
      }
      return 1;
    }
    func_0x000107914b3c();
    uVar1 = extraout_w8;
    if (!(bool)uVar3 && cVar2 == cVar4) {
      uVar1 = 1;
    }
    if (dVar8 < dVar9) {
      return uVar1;
    }
  }
  return 0;
}



/* Entry: 1078eda98; end: 1078edb43;  */

void FUN_1078eda98(double *param_1,long param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  if (*(char *)(param_2 + 200) == '\x01') {
    dVar3 = *(double *)(param_2 + 0xa8);
    dVar1 = *param_1;
    if (dVar3 < *param_1) {
      *param_1 = dVar3;
      dVar1 = dVar3;
    }
    dVar2 = param_1[2];
    if (param_1[2] < dVar3) {
      param_1[2] = dVar3;
      dVar2 = dVar3;
    }
    dVar5 = *(double *)(param_2 + 0xb0);
    dVar3 = param_1[1];
    if (dVar5 < param_1[1]) {
      param_1[1] = dVar5;
      dVar3 = dVar5;
    }
    dVar4 = param_1[3];
    if (param_1[3] < dVar5) {
      param_1[3] = dVar5;
      dVar4 = dVar5;
    }
    dVar5 = *(double *)(param_2 + 0xb8);
    if (dVar5 < dVar1) {
      *param_1 = dVar5;
    }
    if (dVar2 < dVar5) {
      param_1[2] = dVar5;
    }
    dVar1 = *(double *)(param_2 + 0xc0);
    if (dVar1 < dVar3) {
      param_1[1] = dVar1;
    }
    if (dVar4 < dVar1) {
      param_1[3] = dVar1;
    }
    return;
  }
  return;
}



/* Entry: 1078edf30; end: 1078edf63;  */

bool FUN_1078edf30(double param_1,double param_2,double *param_3)

{
  bool bVar1;
  bool bVar2;
  double dVar3;
  
  dVar3 = param_3[2];
  bVar1 = false;
  bVar2 = true;
  if (*param_3 <= param_1) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(param_1) && !NAN(dVar3)) {
      bVar1 = param_1 == dVar3;
      bVar2 = dVar3 <= param_1;
    }
  }
  if (bVar2 && !bVar1) {
    return false;
  }
  return param_2 <= param_3[3] && param_3[1] <= param_2;
}



/* Entry: 1078ee0c4; end: 1078ee287;  */

bool FUN_1078ee0c4(long param_1,long param_2,long param_3)

{
  int *piVar1;
  
  if (param_2 == param_3) {
    return true;
  }
  piVar1 = (int *)(**(long **)(param_1 + 8) + param_2 * 0x100);
  if ((*(long *)(piVar1 + 4) != param_3) && (*(long *)(piVar1 + 6) != param_3)) {
    return false;
  }
  return (*piVar1 - 3U & 0xfffffffd) == 0;
}



/* Entry: 1078eea90; end: 1078eeb0f;  */

void FUN_1078eea90(undefined8 param_1,ulong param_2)

{
  int iVar1;
  
  func_0x0001079188cc();
  func_0x0001079145dc();
  func_0x0001078eea1c();
  iVar1 = (int)param_2;
  func_0x000107915254();
  func_0x0001078eea1c();
  if ((param_2 & 1) == 0) {
    if (iVar1 != 0) {
      func_0x00010791360c();
      func_0x0001079158c0();
      func_0x0001004d77a8();
      func_0x0001078eea1c();
      if (iVar1 != 0) {
        func_0x00010791345c();
      }
    }
  }
  else {
    if (iVar1 == 0) {
      func_0x00010791345c();
      func_0x000107915254();
      func_0x0001078eea1c();
      if (iVar1 == 0) {
        return;
      }
      func_0x00010791360c();
    }
    else {
      func_0x000107914468();
    }
    func_0x0001079158c0();
  }
  return;
}



/* Entry: 1078ef0b4; end: 1078ef197;  */

long * FUN_1078ef0b4(long param_1,long param_2,long param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  plVar2 = (long *)(param_1 + 8);
  plVar4 = plVar2;
  plVar6 = plVar2;
  while (plVar5 = (long *)*plVar6, plVar5 != (long *)0x0) {
    bVar1 = plVar5[5] < param_3;
    if (plVar5[4] != param_2) {
      bVar1 = plVar5[4] < param_2;
    }
    lVar3 = 8;
    if (!bVar1) {
      lVar3 = 0;
    }
    plVar6 = (long *)((long)plVar5 + lVar3);
    if (!bVar1) {
      plVar4 = plVar5;
    }
  }
  if (plVar2 != plVar4) {
    bVar1 = param_3 < plVar4[5];
    if (param_2 != plVar4[4]) {
      bVar1 = param_2 < plVar4[4];
    }
    if (!bVar1) {
      return plVar4;
    }
  }
  return plVar2;
}



/* Entry: 1078ef964; end: 1078efa0f;  */

void FUN_1078ef964(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar3;
  undefined8 unaff_x30;
  undefined8 in_register_00005008;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_3 + 0x10);
  if ((long)param_2[2] < lVar1) {
    if (lVar1 < (long)param_4[2]) {
      uVar2 = param_2[2];
      in_register_00005008 = param_2[1];
      param_1 = *param_2;
      uVar3 = param_4[2];
      uVar4 = *param_4;
      param_2[1] = param_4[1];
      *param_2 = uVar4;
      param_2[2] = uVar3;
    }
    else {
      func_0x000107915eec();
      if ((long)param_4[2] <= *(long *)(param_3 + 0x10)) {
        return;
      }
      func_0x0001079175d4(unaff_x30);
      uVar2 = extraout_x8_00;
    }
    param_4[1] = in_register_00005008;
    *param_4 = param_1;
    param_4[2] = uVar2;
  }
  else if (lVar1 < (long)param_4[2]) {
    func_0x0001079175d4();
    param_4[1] = in_register_00005008;
    *param_4 = param_1;
    param_4[2] = extraout_x8;
    if ((long)param_2[2] < *(long *)(param_3 + 0x10)) {
      func_0x000107915eec();
    }
  }
  return;
}



/* Entry: 1078efe28; end: 1078efe33;  */

void FUN_1078efe28(long param_1,long param_2)

{
  func_0x000107913ad0();
  func_0x0001078efe58();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  return;
}



/* Entry: 1078f017c; end: 1078f01bf;  */

long * FUN_1078f017c(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)(param_1 + 8);
  plVar3 = (long *)*plVar1;
  do {
    plVar2 = plVar1;
    if (plVar3 == (long *)0x0) {
LAB_1078f01b8:
      *param_2 = (long)plVar1;
      return plVar2;
    }
    while (plVar1 = plVar3, plVar1[4] <= param_3) {
      plVar3 = (long *)plVar1[1];
      if ((long *)plVar1[1] == (long *)0x0) {
        plVar2 = plVar1 + 1;
        goto LAB_1078f01b8;
      }
    }
    plVar3 = (long *)*plVar1;
  } while( true );
}



/* Entry: 1078f0acc; end: 1078f0b23;  */

undefined8 FUN_1078f0acc(long *param_1,long *param_2,long *param_3,long param_4,undefined8 *param_5)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((*param_3 != 0) && (param_1 = param_2, *param_3 != 1)) {
    return 0;
  }
  plVar1 = (long *)(*param_1 + param_3[1] * 0x20);
  lVar2 = *plVar1;
  uVar4 = (plVar1[1] - lVar2 >> 4) - 1;
  lVar5 = 0;
  if (uVar4 != 0) {
    lVar5 = (param_3[3] + param_4) / (long)uVar4;
  }
  lVar5 = (param_3[3] + param_4) - lVar5 * uVar4;
  puVar3 = (undefined8 *)(lVar2 + ((uVar4 & lVar5 >> 0x3f) + lVar5) * 0x10);
  uVar6 = *puVar3;
  param_5[1] = puVar3[1];
  *param_5 = uVar6;
  return 1;
}



/* Entry: 1078f0e60; end: 1078f0e8b;  */

/* WARNING: Possible PIC construction at 0x0001078f1078: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078f107c) */

void FUN_1078f0e60(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulong extraout_x8;
  undefined1 *puVar10;
  long extraout_x9;
  undefined8 *unaff_x19;
  undefined1 *unaff_x20;
  long lVar11;
  undefined1 *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long lVar12;
  undefined1 *unaff_x24;
  undefined1 *unaff_x26;
  ulong uVar13;
  undefined1 *unaff_x27;
  undefined1 *unaff_x28;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  
  uVar2 = param_2 <= param_1;
  if (param_1 == param_2) {
    return;
  }
  uVar5 = 0;
  puVar1 = (undefined1 *)register0x00000008;
code_r0x0001078f0e8c:
  *(undefined8 *)(puVar1 + -0x80) = unaff_d11;
  *(undefined8 *)(puVar1 + -0x78) = unaff_d10;
  func_0x0001079175f0();
  *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
  *(undefined **)(puVar1 + -8) = unaff_x30;
  unaff_x29 = puVar1 + -0x10;
  func_0x0001079141cc();
code_r0x0001078f0eb0:
  func_0x0001079177bc();
code_r0x0001078f0eb4:
  func_0x0001079148f8();
  if (!(bool)uVar2 || (bool)uVar5) {
                    /* WARNING: Could not recover jumptable at 0x0001078f118c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_1078f1190 + (ulong)(byte)unaff_x27[0x10dedb8e0] * 4))();
    return;
  }
  uVar2 = 0xa7e < extraout_x8;
  if ((long)extraout_x8 < 0xa80) {
    if (((ulong)unaff_x26 & 1) == 0) {
      if (unaff_x21 != unaff_x24) {
        puVar7 = unaff_x21 + -0x70;
        while (unaff_x21 = unaff_x21 + 0x70, unaff_x21 != unaff_x24) {
          func_0x000107913f88();
          func_0x000107915848();
          func_0x0001078f1458();
          if ((int)param_1 != 0) {
            func_0x000107913d48(puVar1 + -0xf8);
            puVar8 = puVar7;
            do {
              param_1 = puVar8;
              func_0x000107914a98(param_1 + 0xe0,param_1 + 0x70);
              func_0x000107913f88();
              uVar13 = 0;
              func_0x000107916494();
              puVar8 = param_1 + -0x70;
            } while ((uVar13 & 1) != 0);
            param_1 = param_1 + 0x70;
            func_0x000107914a98(param_1,puVar1 + -0xf8);
          }
          puVar7 = puVar7 + 0x70;
        }
      }
      goto code_r0x0001078f1190;
    }
    if (unaff_x21 == unaff_x24) goto code_r0x0001078f1190;
    lVar11 = 0;
    puVar7 = unaff_x21;
    goto code_r0x0001078f123c;
  }
  if (unaff_x23 != 0) {
    func_0x0001079185e8();
    if ((bool)uVar2) {
      func_0x000107913e38();
      func_0x00010791684c();
      unaff_x27 = unaff_x20 + -0x70;
      func_0x00010791684c(unaff_x21 + 0x70,unaff_x27,*(undefined8 *)(puVar1 + -0x170));
      func_0x00010791684c(unaff_x21 + 0xe0,unaff_x20 + 0x70,*(undefined8 *)(puVar1 + -0x178));
      func_0x000107915808();
      func_0x0001078f1558();
      func_0x000107913cf0(puVar1 + -0xf8);
      func_0x000107913d48();
      func_0x000107914a80();
    }
    else {
      func_0x000107914a6c();
      func_0x0001078f1558();
    }
    unaff_x23 = unaff_x23 + -1;
    if (((ulong)unaff_x26 & 1) == 0) {
      puVar7 = unaff_x21 + -0x70;
      func_0x000107918368(unaff_x19[1]);
      func_0x0001079138a8();
      func_0x000107916494();
      if (((ulong)puVar7 & 1) == 0) {
        param_1 = puVar1 + -0x168;
        func_0x000107913cf0();
        func_0x0001079138a8();
        func_0x000107915260();
        func_0x0001078f1458();
        puVar7 = unaff_x21;
        if (((ulong)param_1 & 1) == 0) {
          do {
            func_0x000107917870(puVar7 + 0x70);
            if ((bool)uVar2) break;
            func_0x000107913b40();
            func_0x0001078f1458();
            puVar7 = unaff_x27;
          } while ((int)param_1 == 0);
        }
        else {
          do {
            unaff_x27 = puVar7 + 0x70;
            func_0x000107913b40();
            func_0x0001078f1458();
            puVar7 = unaff_x27;
          } while (((ulong)param_1 & 1) == 0);
        }
        func_0x000107917738();
        puVar7 = unaff_x24;
        if (!(bool)uVar2) {
          do {
            unaff_x26 = puVar7 + -0x70;
            param_1 = puVar1 + -0x168;
            func_0x000107913c20();
            func_0x000107915644();
            puVar7 = unaff_x26;
          } while (((ulong)param_1 & 1) != 0);
        }
        while (unaff_x27 < unaff_x26) {
          func_0x000107914948();
          func_0x0001079171fc();
          func_0x000107914a98();
          puVar7 = unaff_x26;
          func_0x000107914a98(unaff_x26,puVar1 + -0xf8);
          func_0x000107915de8(*unaff_x19);
          do {
            unaff_x27 = unaff_x27 + 0x70;
            func_0x000107913b40();
            func_0x0001078f1458();
          } while ((int)puVar7 == 0);
          do {
            unaff_x26 = unaff_x26 + -0x70;
            param_1 = puVar1 + -0x168;
            func_0x000107913c20();
            func_0x000107915644();
          } while (((ulong)param_1 & 1) != 0);
        }
        unaff_x20 = unaff_x27 + -0x70;
        uVar2 = unaff_x20 <= unaff_x21;
        uVar5 = unaff_x21 == unaff_x20;
        if (!(bool)uVar5) {
          param_1 = unaff_x21;
          func_0x000107913d48();
        }
        func_0x000107914a80();
        unaff_x26 = (undefined1 *)0x0;
        goto code_r0x0001078f0eb4;
      }
    }
    else {
      func_0x000107918368(unaff_x19[1]);
    }
    func_0x000107913cf0(puVar1 + -0x168);
    unaff_x27 = (undefined1 *)0x0;
    do {
      unaff_x27 = unaff_x27 + 0x70;
      puVar7 = unaff_x27 + (long)unaff_x21;
      func_0x0001079138a8(puVar7,puVar1 + -0x168);
      func_0x0001078f1458();
    } while (((ulong)puVar7 & 1) != 0);
    puVar7 = unaff_x21 + (long)unaff_x27;
    unaff_x20 = unaff_x24;
    if (unaff_x27 == (undefined1 *)0x70) {
      do {
        if (unaff_x20 <= puVar7) break;
        unaff_x20 = unaff_x20 + -0x70;
        func_0x000107913c20();
        puVar8 = unaff_x20;
        func_0x000107915644();
      } while (((ulong)puVar8 & 1) == 0);
    }
    else {
      do {
        unaff_x20 = unaff_x20 + -0x70;
        func_0x000107913c20();
        puVar8 = unaff_x20;
        func_0x000107915644();
      } while ((int)puVar8 == 0);
    }
    func_0x0001079178ac();
    while (unaff_x27 < unaff_x28) {
      func_0x000107914948();
      func_0x000107914a98(unaff_x27,unaff_x28);
      func_0x000107914a98(unaff_x28,puVar1 + -0xf8);
      func_0x000107915de8(*unaff_x19);
      do {
        unaff_x27 = unaff_x27 + 0x70;
        func_0x000107913c20();
        puVar8 = unaff_x27;
        func_0x000107915644();
      } while (((ulong)puVar8 & 1) != 0);
      do {
        unaff_x28 = unaff_x28 + -0x70;
        func_0x000107913c20();
        puVar8 = unaff_x28;
        func_0x000107915644();
      } while (((ulong)puVar8 & 1) == 0);
    }
    unaff_x28 = unaff_x27 + -0x70;
    if (unaff_x21 != unaff_x28) {
      func_0x000107915884();
      func_0x000107914a98();
    }
    param_1 = unaff_x28;
    func_0x000107914a98(unaff_x28,puVar1 + -0x168);
    uVar2 = unaff_x20 <= puVar7;
    uVar5 = puVar7 == unaff_x20;
    if (!(bool)uVar2) goto code_r0x0001078f1074;
    func_0x0001079145cc();
    func_0x0001078f179c();
    func_0x00010791487c();
    func_0x0001078f179c();
    if ((int)param_1 == 0) goto code_r0x0001078f1070;
    unaff_x24 = unaff_x28;
    if (((ulong)unaff_x20 & 1) != 0) goto code_r0x0001078f1190;
    goto code_r0x0001078f0eb0;
  }
  if (unaff_x21 == unaff_x24) goto code_r0x0001078f1190;
  func_0x0001079169f0();
  for (; -1 < unaff_x22; unaff_x22 = unaff_x22 + -1) {
    func_0x0001079143fc();
    FUN_1078f19c8();
  }
  do {
    cVar3 = SBORROW8((long)unaff_x27,2);
    cVar4 = (long)(unaff_x27 + -2) < 0;
    if ((long)unaff_x27 < 2) goto code_r0x0001078f1190;
    *(undefined1 **)(puVar1 + -0x170) = unaff_x24;
    puVar7 = puVar1 + -0x168;
    func_0x000107913cf0();
    puVar10 = (undefined1 *)0x0;
    uVar13 = (ulong)(unaff_x27 + -2) >> 1;
    puVar8 = unaff_x21;
    do {
      iVar6 = (int)puVar7;
      lVar11 = (long)puVar10 * 0x70;
      func_0x00010791419c();
      puVar9 = puVar8 + lVar11 + 0x70;
      puVar10 = unaff_x28;
      if (cVar4 != cVar3) {
        func_0x000107913f88();
        func_0x000107915320();
        func_0x0001078f1458();
        puVar9 = (undefined1 *)(extraout_x9 + 0xe0);
        puVar10 = unaff_x24;
        if (iVar6 == 0) {
          puVar9 = puVar8 + lVar11 + 0x70;
          puVar10 = unaff_x28;
        }
      }
      func_0x000107913ce4();
      iVar6 = (int)puVar8;
      cVar3 = SBORROW8((long)puVar10,uVar13);
      cVar4 = (long)((long)puVar10 - uVar13) < 0;
      puVar7 = puVar8;
      puVar8 = puVar9;
      unaff_x28 = puVar10;
    } while ((long)puVar10 <= (long)uVar13);
    unaff_x24 = (undefined1 *)(*(long *)(puVar1 + -0x170) + -0x70);
    if (puVar9 == unaff_x24) {
      puVar7 = puVar1 + -0x168;
code_r0x0001078f13e4:
      func_0x000107914a98(puVar9,puVar7);
    }
    else {
      func_0x0001079177b0();
      func_0x000107914a98();
      func_0x000107914808();
      if (0x70 < (long)(puVar9 + (0x70 - (long)unaff_x21))) {
        uVar13 = (ulong)(puVar9 + (0x70 - (long)unaff_x21)) / 0x70 - 2 >> 1;
        func_0x000107913f88();
        func_0x0001079152e8();
        func_0x0001078f1458();
        if (iVar6 != 0) {
          func_0x000107913ce4(puVar1 + -0xf8);
          puVar7 = unaff_x21 + uVar13 * 0x70;
          do {
            puVar9 = puVar7;
            func_0x000107913d48(puVar8);
            if (uVar13 == 0) break;
            uVar13 = uVar13 - 1 >> 1;
            puVar7 = unaff_x21 + uVar13 * 0x70;
            func_0x000107913f88();
            puVar10 = puVar7;
            func_0x0001078f1458(puVar7,puVar1 + -0xf8);
            puVar8 = puVar9;
          } while (((ulong)puVar10 & 1) != 0);
          puVar7 = puVar1 + -0xf8;
          goto code_r0x0001078f13e4;
        }
      }
    }
    unaff_x27 = unaff_x27 + -1;
  } while( true );
code_r0x0001078f123c:
  puVar7 = puVar7 + 0x70;
  if (puVar7 == unaff_x24) {
code_r0x0001078f1190:
    func_0x000107914abc(*(undefined8 *)(puVar1 + -8));
    return;
  }
  func_0x000107913f88();
  puVar8 = puVar7;
  func_0x0001078f1458();
  if ((int)puVar8 != 0) {
    func_0x000107913ce4(puVar1 + -0xf8);
    lVar12 = lVar11;
    do {
      func_0x000107914a98(unaff_x21 + lVar12 + 0x70);
      if (lVar12 == 0) break;
      lVar12 = lVar12 + -0x70;
      func_0x000107913f88();
      puVar8 = puVar1 + -0xf8;
      func_0x0001078f1458(puVar8,unaff_x21 + lVar12);
    } while (((ulong)puVar8 & 1) != 0);
    func_0x000107914a98();
  }
  lVar11 = lVar11 + 0x70;
  goto code_r0x0001078f123c;
code_r0x0001078f1070:
  if (((ulong)unaff_x20 & 1) == 0) {
code_r0x0001078f1074:
    func_0x0001079141b4();
    unaff_x30 = &UNK_1078f107c;
    puVar1 = puVar1 + -0x180;
    goto code_r0x0001078f0e8c;
  }
  goto code_r0x0001078f0eb4;
}



/* Entry: 1078f19c8; end: 1078f1acf;  */

void FUN_1078f19c8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  long param_5)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined8 *extraout_x8;
  int unaff_w22;
  int iVar4;
  int iVar5;
  int unaff_w23;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  undefined8 unaff_x30;
  undefined8 uVar6;
  undefined8 uVar7;
  
  cVar1 = SBORROW8(param_5,2);
  cVar2 = param_5 + -2 < 0;
  if (1 < param_5) {
    func_0x000107918960();
    func_0x0001079168a0();
    if (cVar2 == cVar1) {
      func_0x00010791416c();
      func_0x000107917798();
      if (cVar2 == cVar1) {
        func_0x000107915de8();
        unaff_x27 = unaff_x26;
        iVar4 = unaff_w22;
      }
      else {
        func_0x000107915de8();
        func_0x0001079138a8();
        func_0x0001079177b0();
        func_0x0001078f1458();
        iVar4 = unaff_w22 + 0x70;
        if ((int)param_3 == 0) {
          unaff_x27 = unaff_x26;
          iVar4 = unaff_w22;
        }
      }
      func_0x0001079138a8();
      func_0x000107915320();
      func_0x0001078f1458();
      if ((param_3 & 1) == 0) {
        func_0x000107914498();
        do {
          func_0x000107913ce4();
          cVar1 = SBORROW8(unaff_x25,unaff_x27);
          cVar2 = unaff_x25 - unaff_x27 < 0;
          if (unaff_x25 < unaff_x27) break;
          func_0x0001079165bc();
          if (cVar2 == cVar1) {
            uVar7 = *extraout_x8;
            uVar6 = extraout_x8[1];
            unaff_x27 = unaff_x28;
            iVar5 = iVar4;
          }
          else {
            uVar7 = *extraout_x8;
            uVar6 = extraout_x8[1];
            func_0x000107914c6c();
            func_0x000107916580();
            func_0x000107915320();
            func_0x0001078f1458();
            iVar5 = iVar4 + 0x70;
            if (unaff_w23 == 0) {
              unaff_x27 = unaff_x28;
              iVar5 = iVar4;
            }
          }
          func_0x000107914c6c();
          iVar3 = iVar5;
          func_0x0001078f1458(param_1,param_2,uVar7,uVar6);
          unaff_w23 = iVar4;
          iVar4 = iVar5;
        } while (iVar3 == 0);
        func_0x0001079146b0();
      }
    }
    func_0x00010791893c(unaff_x30);
  }
  return;
}



/* Entry: 1078f1e94; end: 1078f1faf;  */

long FUN_1078f1e94(long param_1)

{
  char in_NG;
  char in_OV;
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  func_0x000107914110();
  lVar1 = extraout_x8;
  while (lVar1 != 0) {
    while (func_0x000107914c2c(), unaff_x22 = unaff_x20, in_NG == in_OV) {
      in_OV = SBORROW8(extraout_x8_00,unaff_x21);
      in_NG = extraout_x8_00 - unaff_x21 < 0;
      if (unaff_x21 <= extraout_x8_00) goto LAB_1078f1f20;
      if (*(long *)(unaff_x20 + 8) == 0) goto LAB_1078f1ee0;
    }
    func_0x000107915c94();
    lVar1 = extraout_x8_01;
  }
LAB_1078f1ee0:
  func_0x00010791612c();
  func_0x00010791733c();
  func_0x000107916e58(0xffffffffffffffff);
  *(undefined8 *)(extraout_x8_02 + 0x40) = 0;
  *(undefined8 **)(param_1 + 0x38) = (undefined8 *)(extraout_x8_02 + 0x40);
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 **)(param_1 + 0x50) = (undefined8 *)(param_1 + 0x58);
  func_0x000107913628();
  if (extraout_x8_03 != 0) {
    *unaff_x19 = extraout_x8_03;
  }
  func_0x000107913f98();
  func_0x0001004d7750();
  unaff_x20 = unaff_x22;
LAB_1078f1f20:
  return unaff_x20 + 0x28;
}



/* Entry: 1078f3294; end: 1078f3367;  */

void FUN_1078f3294(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *extraout_x8;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x10;
  long lVar3;
  long lVar4;
  long *unaff_x19;
  ulong unaff_x20;
  ulong uVar5;
  ulong unaff_x22;
  
  func_0x000107917aac();
  func_0x000107914d64();
  func_0x000107918644();
  uVar5 = extraout_x10 >> 4;
  if (uVar5 < param_2) {
    func_0x000107918630();
    if ((ulong)(extraout_x9_00 >> 4) < unaff_x22) {
      func_0x000107914d7c();
      func_0x0001078e9778();
      lVar3 = *unaff_x19;
      lVar1 = unaff_x19[1];
      if (param_1 != 0) {
        func_0x0001078e97fc();
      }
      puVar2 = (undefined8 *)(param_1 + (lVar1 - lVar3));
      for (lVar4 = unaff_x20 * 0x10 + uVar5 * -0x10; lVar4 != 0; lVar4 = lVar4 + -0x10) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = puVar2 + 2;
      }
      func_0x000107915724();
      func_0x0001078e97b8();
      func_0x000107917d8c();
    }
    else {
      puVar2 = extraout_x8;
      for (lVar3 = unaff_x20 * 0x10 + uVar5 * -0x10; lVar3 != 0; lVar3 = lVar3 + -0x10) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = puVar2 + 2;
      }
      unaff_x19[1] = (long)(extraout_x8 + unaff_x22 * 2);
    }
  }
  else if (unaff_x20 < uVar5) {
    unaff_x19[1] = extraout_x9 + unaff_x20 * 0x10;
  }
  return;
}



/* Entry: 1078f3c30; end: 1078f3d33;  */

bool FUN_1078f3c30(long param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  func_0x000107914c78();
  func_0x00010791542c();
  lVar7 = param_1;
  func_0x000107913b08();
  func_0x0001078e9d94();
  iVar4 = (int)lVar7;
  iVar5 = (int)param_1;
  if (iVar5 == 0 && iVar4 == 0) {
    func_0x000107913c58();
    func_0x000107915420();
    lVar6 = lVar7;
    func_0x000107913b08();
    func_0x0001078f1930();
    if ((int)lVar7 == (int)lVar6) goto LAB_1078f3d14;
    bVar3 = (int)lVar7 < (int)lVar6;
  }
  else {
    lVar6 = lVar7;
    if (iVar5 == 0) {
      func_0x000107913c58();
      func_0x000107915420();
      lVar6 = lVar7;
      if ((int)lVar7 == -1) {
        return true;
      }
    }
    if (iVar4 == 0) {
      func_0x000107913b08();
      func_0x0001078f1930();
      if ((int)lVar6 == -1) {
        return false;
      }
    }
    bVar2 = SBORROW4(iVar5,iVar4);
    iVar1 = iVar5 - iVar4;
    bVar3 = false;
    if (iVar5 == iVar4) {
      func_0x000107915908();
      func_0x000107916580();
      func_0x000107915474();
      iVar4 = (int)lVar6;
      if (iVar4 == 0) {
LAB_1078f3d14:
        func_0x000107915254();
        iVar4 = *(int *)(lVar6 + 0x2c);
        iVar5 = *(int *)(param_2 + 0x2c);
        bVar2 = SBORROW4(iVar4,iVar5);
        bVar3 = iVar4 - iVar5 < 0;
        if (iVar4 == iVar5) {
          lVar7 = *(long *)(lVar6 + 0x20);
          lVar8 = *(long *)(param_2 + 0x20);
          bVar2 = SBORROW8(lVar7,lVar8);
          bVar3 = lVar7 - lVar8 < 0;
          if (lVar7 == lVar8) {
            lVar7 = *(long *)(lVar6 + 0x48);
            lVar8 = *(long *)(param_2 + 0x48);
            bVar2 = SBORROW8(lVar7,lVar8);
            bVar3 = lVar7 - lVar8 < 0;
            if (lVar7 == lVar8) {
              lVar7 = *(long *)(lVar6 + 0x50);
              lVar8 = *(long *)(param_2 + 0x50);
              bVar2 = SBORROW8(lVar7,lVar8);
              bVar3 = lVar7 - lVar8 < 0;
              if (lVar7 == lVar8) {
                lVar7 = *(long *)(lVar6 + 0x58);
                lVar8 = *(long *)(param_2 + 0x58);
                bVar2 = SBORROW8(lVar7,lVar8);
                bVar3 = lVar7 - lVar8 < 0;
                if (lVar7 == lVar8) {
                  lVar7 = *(long *)(lVar6 + 0x68);
                  lVar8 = *(long *)(param_2 + 0x68);
                  bVar2 = SBORROW8(lVar7,lVar8);
                  bVar3 = lVar7 - lVar8 < 0;
                  if (lVar7 == lVar8) {
                    bVar2 = SBORROW8(*(long *)(lVar6 + 0x60),*(long *)(param_2 + 0x60));
                    bVar3 = *(long *)(lVar6 + 0x60) - *(long *)(param_2 + 0x60) < 0;
                  }
                }
              }
            }
            return bVar3 != bVar2;
          }
        }
        return bVar3 != bVar2;
      }
      func_0x000107915908();
      func_0x00010791542c();
      iVar5 = (int)lVar6;
      if (iVar4 + iVar5 != 0) goto LAB_1078f3d14;
      bVar2 = SBORROW4(iVar5,iVar4);
      iVar1 = iVar5 - iVar4;
      bVar3 = iVar5 == iVar4;
    }
    bVar3 = !bVar3 && iVar1 < 0 == bVar2;
  }
  return bVar3;
}



/* Entry: 1078f42b4; end: 1078f4327;  */

void FUN_1078f42b4(long param_1)

{
  func_0x000107914c90();
  if (param_1 != 0) {
    func_0x000107914de8();
  }
  return;
}



/* Entry: 1078f4588; end: 1078f45c7;  */

void FUN_1078f4588(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long *unaff_x19;
  
  func_0x000107918860();
  while (func_0x00010791814c(), !(bool)in_ZR) {
    unaff_x19[2] = extraout_x8 + -0x18;
    func_0x0001078e64cc();
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1078f4aa0; end: 1078f4acb;  */

void FUN_1078f4aa0(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107914c78();
  func_0x000107917d24();
  func_0x0001078f4ae0(unaff_x20 + 0x48,unaff_x19 + 0x48);
  return;
}



/* Entry: 1078f4d48; end: 1078f4d53;  */

void FUN_1078f4d48(void)

{
  uint extraout_w8;
  undefined8 *unaff_x19;
  
  func_0x000107913ad0();
  func_0x00010002bfa0();
  if ((extraout_w8 & 1) == 0) {
    func_0x0001078f4d7c(*unaff_x19);
  }
  return;
}



/* Entry: 1078f50b8; end: 1078f510f;  */

void FUN_1078f50b8(ulong param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  ulong unaff_x20;
  int unaff_w26;
  
  func_0x000107915f10();
  func_0x0001079133e4();
  while (func_0x000107915ebc(), !(bool)in_ZR) {
    func_0x00010791744c();
    func_0x0001078edfa0();
    func_0x000107916fc0();
    if ((unaff_w26 == 0) || ((param_1 & 1) == 0)) {
      func_0x00010791742c();
      in_ZR = unaff_w26 == 0;
      param_1 = unaff_x20;
      if ((bool)in_ZR) {
        param_1 = extraout_x8;
      }
      func_0x0001078f503c();
    }
  }
  return;
}



/* Entry: 1078f5588; end: 1078f558f;  */

void FUN_1078f5588(undefined8 param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar1;
  undefined1 uVar2;
  ulong unaff_x20;
  ulong unaff_x21;
  undefined1 auStack_120 [72];
  undefined1 auStack_d8 [48];
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
  undefined1 auStack_50 [32];
  
  func_0x000107913cb4();
  func_0x000107913d54();
  uStack_60 = param_2[2];
  uStack_68 = param_2[1];
  uStack_90 = *param_2;
  uStack_78 = param_2[3];
  uStack_80 = param_2[2];
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = param_1;
  uStack_70 = uStack_90;
  uStack_58 = param_1;
  func_0x0001079132d8();
  func_0x0001079139f4();
  FUN_1078f50b8();
  func_0x000107913794();
  FUN_1078f50b8();
  func_0x0001079155d4();
  if (!(bool)in_ZR) {
    func_0x0001079158b4();
    uVar2 = 0;
    if ((bool)in_CY) {
      uVar2 = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if ((99 < unaff_x20) || (func_0x000107913f00(), !(bool)uVar2)) goto code_r0x0001078f5618;
      func_0x0001078f57c8(auStack_d8);
      func_0x000107913df4();
      func_0x0001078f523c();
      func_0x000107915b2c();
      func_0x00010791354c();
      func_0x0001078f57c0();
    }
    else {
code_r0x0001078f5618:
      func_0x000107913f30();
      func_0x0001078f552c();
    }
    func_0x000107913ef0();
    in_CY = false;
    if (((bool)uVar2) && (func_0x000107913ee0(), in_CY = false, (bool)uVar2)) {
      in_CY = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if (unaff_x20 < 100) {
        in_CY = 0x78 < unaff_x21;
        in_ZR = unaff_x21 == 0x79;
        if ((bool)in_CY) {
          func_0x0001078f57c8(auStack_d8);
          func_0x000107915338();
          func_0x000107913880(auStack_50);
          func_0x0001078f57c0();
          func_0x000107913894(auStack_50);
          func_0x0001078f57c0();
          goto code_r0x0001078f56a8;
        }
      }
    }
    func_0x000107913f20();
    func_0x0001078f552c();
    func_0x000107913f10();
    func_0x0001078f552c();
  }
code_r0x0001078f56a8:
  func_0x0001079155c8();
  if ((bool)in_ZR) {
    func_0x0001079185d0();
code_r0x0001078f5718:
    uVar2 = 0;
    if (0x7f < unaff_x21) goto code_r0x0001078f5720;
  }
  else {
    func_0x0001079158a8();
    if ((((!(bool)in_CY) || (func_0x000107913ed0(), !(bool)in_CY)) ||
        (bVar1 = 0x62 < unaff_x20, 99 < unaff_x20)) || (func_0x000107914e34(), !bVar1)) {
      func_0x000107914858();
      func_0x0001078f552c();
      func_0x000107913ec0();
      func_0x0001078f552c();
      goto code_r0x0001078f5718;
    }
    func_0x0001078f57c8(auStack_120);
    func_0x000107915338();
    func_0x000107913adc(auStack_50,&uStack_a8);
    func_0x0001078f57c0();
    func_0x000107913858(auStack_50);
    func_0x0001078f57c0();
code_r0x0001078f5720:
    uVar2 = 0x62 < unaff_x20;
    if ((unaff_x20 < 100) && (func_0x000107913ea0(), (bool)uVar2)) {
      func_0x000107913a0c();
      func_0x0001078f57c0();
      goto code_r0x0001078f5744;
    }
  }
  func_0x000107914848();
  func_0x0001078f552c();
code_r0x0001078f5744:
  func_0x000107913e90();
  if ((((bool)uVar2) && (bVar1 = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107913e80(), bVar1)) {
    func_0x00010791386c(&uStack_90);
    func_0x0001078f57c0();
  }
  else {
    func_0x000107913eb0();
    func_0x0001078f552c();
  }
  func_0x000107915a84();
  func_0x000107915ac4();
  func_0x000107915a70();
  func_0x000107915af4();
  func_0x000107915ae4();
  func_0x000107915b24();
  return;
}



/* Entry: 1078f5974; end: 1078f59c3;  */

void FUN_1078f5974(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x20;
  
  func_0x000107914c78();
  uVar3 = *param_2;
  func_0x0001078f58f8(uVar3,param_2[1]);
  if ((int)uVar3 == 0) {
    lVar1 = *unaff_x20;
    lVar2 = unaff_x20[1];
    if (lVar1 != lVar2) {
      do {
        if (lVar1 + 0x10 == lVar2) {
          return;
        }
        func_0x000107917ce0();
      } while ((int)uVar3 == 0);
    }
  }
  return;
}



/* Entry: 1078f5d38; end: 1078f5d67;  */

long FUN_1078f5d38(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = param_1[1] - *param_1 >> 4;
  for (plVar2 = (long *)param_1[3]; plVar2 != (long *)param_1[4]; plVar2 = plVar2 + 3) {
    lVar1 = lVar1 + (plVar2[1] - *plVar2 >> 4);
  }
  return lVar1;
}



/* Entry: 1078f601c; end: 1078f6187;  */

void FUN_1078f601c(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long *unaff_x19;
  
  func_0x000107918860();
  while (func_0x00010791814c(), !(bool)in_ZR) {
    unaff_x19[2] = extraout_x8 + -0x30;
    func_0x0001078e6404();
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1078f6454; end: 1078f6497;  */

bool FUN_1078f6454(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  do {
    uVar1 = param_1;
    if (uVar1 == param_2) break;
    uVar2 = uVar1;
    func_0x0001078f6498();
    param_1 = uVar1 + 0x30;
  } while ((uVar2 & 1) != 0);
  return uVar1 == param_2;
}



/* Entry: 1078f88d8; end: 1078f8903;  */

void FUN_1078f88d8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107914c78();
  func_0x000107917d24();
  func_0x0001079009f0(unaff_x20 + 0x48,unaff_x19 + 0x48);
  return;
}



/* Entry: 1078f9480; end: 1078f94a3;  */

void FUN_1078f9480(void)

{
  undefined1 in_ZR;
  
  func_0x0001079176a8();
  func_0x0001078f96c8();
  func_0x000107915254();
  func_0x00010791462c();
  while (func_0x000107915a18(), !(bool)in_ZR) {
    func_0x000107916f34();
  }
  return;
}



/* Entry: 1078fa3cc; end: 1078fa413;  */

void FUN_1078fa3cc(uint param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long *unaff_x19;
  long *unaff_x22;
  long *unaff_x23;
  
  func_0x000107917a38();
  func_0x000107915584();
  lVar1 = extraout_x8;
  do {
    if (*unaff_x19 == *unaff_x23) {
LAB_1078fa408:
      *unaff_x19 = lVar1;
      return;
    }
    func_0x000107916c48();
    if ((param_1 & 1) == 0) {
      lVar1 = *unaff_x22;
      goto LAB_1078fa408;
    }
    func_0x000107915e90();
    lVar1 = extraout_x8_00;
  } while( true );
}



/* Entry: 1078faac0; end: 1078fab43;  */

void FUN_1078faac0(ulong param_1)

{
  if (param_1 >> 0x3d == 0) {
    func_0x00010791464c();
    return;
  }
  func_0x000104bd35f4();
  func_0x0001004d7774();
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1078faedc; end: 1078faedf;  */

void FUN_1078faedc(undefined8 *param_1)

{
  undefined1 in_ZR;
  
  param_1[1] = 0x7ff8000000000000;
  *param_1 = 0x7ff8000000000000;
  param_1[3] = 0x8000000000000000;
  param_1[2] = 0x8000000000000000;
  func_0x00010791462c();
  while (func_0x000107915a18(), !(bool)in_ZR) {
    func_0x000107916f34();
  }
  return;
}



/* Entry: 1078fb2b4; end: 1078fb477;  */

void FUN_1078fb2b4(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar1;
  undefined1 uVar2;
  ulong unaff_x20;
  ulong unaff_x21;
  
  func_0x0001079188cc();
  func_0x0001079136f4();
  func_0x0001079153e4();
  func_0x0001079132d8();
  func_0x0001079136bc();
  func_0x0001079136d8();
  func_0x0001079155d4();
  if (!(bool)in_ZR) {
    func_0x0001079158b4();
    uVar2 = 0;
    if ((bool)in_CY) {
      uVar2 = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if ((99 < unaff_x20) || (func_0x000107913f00(), !(bool)uVar2)) goto LAB_1078fb2f4;
      func_0x000107913d24();
      func_0x0001078f96f8();
      func_0x00010791354c();
      func_0x0001078fb478();
    }
    else {
LAB_1078fb2f4:
      func_0x000107913f30();
      func_0x0001078fb250();
    }
    func_0x000107913ef0();
    in_CY = false;
    if (((bool)uVar2) && (func_0x000107913ee0(), in_CY = false, (bool)uVar2)) {
      in_CY = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if (unaff_x20 < 100) {
        in_CY = 0x78 < unaff_x21;
        in_ZR = unaff_x21 == 0x79;
        if ((bool)in_CY) {
          func_0x000107914c84();
          func_0x0001078f9724();
          func_0x000107913880();
          func_0x0001078fb478();
          func_0x000107913894();
          func_0x0001078fb478();
          goto LAB_1078fb374;
        }
      }
    }
    func_0x000107913f20();
    func_0x0001078fb250();
    func_0x000107913f10();
    func_0x0001078fb250();
  }
LAB_1078fb374:
  func_0x0001079155c8();
  if ((bool)in_ZR) {
    func_0x0001079181f0();
LAB_1078fb3d4:
    uVar2 = 0;
    if (0x7f < unaff_x21) goto LAB_1078fb3dc;
  }
  else {
    func_0x0001079158a8();
    if ((((!(bool)in_CY) || (func_0x000107913ed0(), !(bool)in_CY)) ||
        (bVar1 = 0x62 < unaff_x20, 99 < unaff_x20)) || (func_0x000107914e34(), !bVar1)) {
      func_0x000107914708();
      func_0x0001078fb250();
      func_0x000107913ec0();
      func_0x0001078fb250();
      goto LAB_1078fb3d4;
    }
    func_0x000107915ee0();
    func_0x0001078f9724();
    func_0x000107913a34();
    func_0x0001078fb478();
    func_0x000107913650();
    func_0x0001078fb478();
LAB_1078fb3dc:
    uVar2 = 0x62 < unaff_x20;
    if ((unaff_x20 < 100) && (func_0x000107913ea0(), (bool)uVar2)) {
      func_0x0001079139c4();
      func_0x0001078fb478();
      goto LAB_1078fb400;
    }
  }
  func_0x0001079146f8();
  func_0x0001078fb250();
LAB_1078fb400:
  func_0x000107913e90();
  if ((((bool)uVar2) && (bVar1 = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107913e80(), bVar1)) {
    func_0x00010791386c(&stack0x000000b0);
    func_0x0001078fb478();
  }
  else {
    func_0x000107913eb0();
    func_0x0001078fb250();
  }
  func_0x00010791502c();
  func_0x000107915070();
  func_0x000107915008();
  func_0x0001079150b0();
  func_0x00010791508c();
  func_0x000107915094();
  return;
}



/* Entry: 1078fbb20; end: 1078fbc43;  */

long FUN_1078fbb20(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x9;
  long extraout_x9_00;
  undefined8 *extraout_x10;
  undefined8 *extraout_x10_00;
  undefined8 *puVar7;
  long lVar8;
  long extraout_x10_01;
  long extraout_x10_02;
  long extraout_x11;
  long lVar9;
  long extraout_x12;
  long extraout_x13;
  long unaff_x19;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar6 = param_2;
  func_0x000107913c90();
  func_0x00010791645c((long)puVar6 - param_1);
  if (!(bool)in_CY || (bool)in_ZR) {
    lVar5 = 1;
                    /* WARNING: Could not recover jumptable at 0x0001078fbb68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dedb8fe)[extraout_x8_00] * 4 + 0x1078fbb6c))(1);
    return lVar5;
  }
  lVar5 = unaff_x19 + 0x18;
  func_0x000107915b84();
  func_0x0001078fb9c8();
  func_0x00010791766c();
  puVar6 = (undefined8 *)(unaff_x19 + 0x48);
  puVar10 = (undefined8 *)(unaff_x19 + 0x30);
  while( true ) {
    cVar1 = SBORROW8((long)puVar6,(long)param_2);
    cVar2 = (long)puVar6 - (long)param_2 < 0;
    uVar3 = puVar6 == param_2;
    if ((bool)uVar3) break;
    func_0x000107918214();
    puVar7 = extraout_x10;
    if (!(bool)uVar3 && cVar2 == cVar1) {
      do {
        func_0x00010791724c();
        if ((bool)uVar3) {
          uVar3 = true;
          break;
        }
        uVar3 = extraout_x11 == *(long *)(extraout_x13 + 0x28);
      } while (!(bool)uVar3 && *(long *)(extraout_x13 + 0x28) <= extraout_x11);
      func_0x000107917810();
      puVar7 = extraout_x10_00;
      if ((bool)uVar3) {
        func_0x0001079176f0(extraout_x10_00 + 3);
        goto LAB_1078fbc20;
      }
    }
    puVar6 = puVar7 + 3;
    puVar10 = puVar7;
  }
  param_1 = 1;
  uVar3 = 1;
LAB_1078fbc20:
  func_0x000107913564(extraout_x8);
  if ((bool)uVar3) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107913ca4();
  cVar1 = SBORROW8(lVar5,2);
  lVar8 = lVar5 + -2;
  cVar2 = lVar8 < 0;
  uVar3 = lVar8 == 0;
  if ((1 < lVar5) && (func_0x0001079176d8(lVar8), cVar2 == cVar1)) {
    func_0x000107916ab4();
    lVar5 = extraout_x9;
    if (cVar2 != cVar1) {
      lVar5 = 0x18;
      if (*(long *)(extraout_x9 + 0x10) <= *(long *)(extraout_x9 + 0x28)) {
        lVar5 = 0;
      }
      lVar5 = extraout_x9 + lVar5;
    }
    lVar9 = *(long *)(lVar5 + 0x10);
    lVar8 = param_3[2];
    cVar2 = SBORROW8(lVar9,lVar8);
    lVar5 = lVar9 - lVar8;
    uVar3 = lVar9 == lVar8;
    if (lVar9 <= lVar8) {
      uVar12 = param_3[1];
      uVar11 = *param_3;
      do {
        cVar1 = lVar5 < 0;
        func_0x000107916b0c();
        lVar8 = extraout_x10_01;
        if (cVar1 != cVar2) break;
        func_0x0001079171e0();
        lVar5 = extraout_x9_00;
        if (cVar1 != cVar2) {
          lVar5 = extraout_x12;
          if (*(long *)(extraout_x9_00 + 0x10) <= *(long *)(extraout_x9_00 + 0x28)) {
            lVar5 = 0;
          }
          lVar5 = extraout_x9_00 + lVar5;
        }
        lVar9 = *(long *)(lVar5 + 0x10);
        cVar2 = SBORROW8(lVar9,extraout_x10_02);
        lVar5 = lVar9 - extraout_x10_02;
        uVar3 = lVar9 == extraout_x10_02;
        lVar8 = extraout_x10_02;
      } while (lVar9 <= extraout_x10_02);
      param_3[1] = uVar12;
      *param_3 = uVar11;
      param_3[2] = lVar8;
    }
  }
  func_0x000107913564(extraout_x8_01);
  if ((bool)uVar3) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010791462c();
  do {
    func_0x000107915a18();
    if ((bool)uVar3) {
      return 0xffffffff;
    }
    uVar11 = *puVar10;
    func_0x0001078fbd80(*param_2,param_2[1],uVar11,puVar10[1]);
    iVar4 = (int)uVar11;
    if (iVar4 == 1) {
      puVar6 = (undefined8 *)puVar10[3];
      do {
        if (puVar6 == (undefined8 *)puVar10[4]) {
          return 1;
        }
        uVar11 = *puVar6;
        func_0x0001078fbd80(*param_2,param_2[1],uVar11,puVar6[1]);
        puVar6 = puVar6 + 3;
      } while ((int)uVar11 == -1);
      iVar4 = -(int)uVar11;
    }
    uVar3 = 0;
    puVar10 = puVar10 + 6;
  } while (iVar4 < 0);
  return 0;
}



/* Entry: 1078fc4ac; end: 1078fc503;  */

void FUN_1078fc4ac(int param_1)

{
  func_0x0001079188e0();
  func_0x000107913908();
  func_0x0001078fc454();
  func_0x00010791739c();
  func_0x0001078fc210();
  if (param_1 != 0) {
    func_0x00010791437c();
    func_0x0001078fc210();
    if (param_1 != 0) {
      func_0x0001079134bc();
      func_0x0001078fc210();
      if (param_1 != 0) {
        func_0x0001079134ec();
        func_0x0001078fc210();
        if (param_1 != 0) {
          func_0x000107913438();
        }
      }
    }
  }
  return;
}



/* Entry: 1078fc8c8; end: 1078fc903;  */

void FUN_1078fc8c8(long param_1)

{
  long unaff_x19;
  
  if (param_1 != 0) {
    func_0x000107914c90();
    FUN_1078fc8c8();
    FUN_1078fc8c8(*(undefined8 *)(unaff_x19 + 8));
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      func_0x000107917b0c();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078fe1d4; end: 1078fe217;  */

bool FUN_1078fe1d4(ulong param_1)

{
  undefined1 in_ZR;
  bool bVar1;
  long extraout_x9;
  long extraout_x11;
  
  func_0x000107913cd4();
  func_0x000107917b70();
  if ((param_1 & 1) == 0) {
    func_0x000107914938();
    func_0x000107914a4c();
    func_0x0001079173dc();
    bVar1 = (bool)in_ZR && extraout_x9 == extraout_x11;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 1078fe3e8; end: 1078fe4c7;  */

void FUN_1078fe3e8(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long extraout_x10;
  
  func_0x000107917aac();
  func_0x00010791375c();
  if ((bool)in_ZR) {
    func_0x0001079165ec();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x0001079165e0(extraout_x8 - extraout_x10 >> 2);
      func_0x0001078fe698();
      func_0x000107913404();
      func_0x0001078fe674();
      func_0x0001079135c0();
      func_0x0001078fe6e4();
    }
    else {
      func_0x000107913778();
      if (!(bool)in_ZR) {
        func_0x000107914138();
      }
      func_0x00010791461c();
    }
  }
  func_0x000107915e84();
  return;
}



/* Entry: 1078fe904; end: 1078fe9bf;  */

undefined1 * FUN_1078fe904(undefined1 *param_1)

{
  undefined1 in_ZR;
  int iVar1;
  undefined1 auStack_d8 [168];
  
  func_0x0001079142d0();
  func_0x000107916450();
  func_0x000107913364();
  func_0x000107913b24();
  func_0x0001078f9428();
  func_0x000107915ec8();
  if ((bool)in_ZR) {
LAB_1078fe96c:
    func_0x000107915ed4();
    func_0x000107914d88();
    func_0x0001078ff6b8();
    if ((int)param_1 != 0) {
      func_0x0001079172ac();
      func_0x000107914d88();
      func_0x0001078ff6b8();
      goto LAB_1078fe994;
    }
  }
  else {
    func_0x0001079155e0();
    iVar1 = (int)param_1;
    FUN_1078faedc();
    func_0x0001079155e0();
    func_0x000107914d88();
    func_0x0001078ff6b8();
    if (iVar1 != 0) {
      param_1 = auStack_d8;
      func_0x0001079149c4();
      func_0x0001078ff798();
      if ((int)param_1 != 0) {
        func_0x0001079155e0();
        func_0x000107913cc4();
        func_0x0001078ff798();
        if (((ulong)param_1 & 1) != 0) goto LAB_1078fe96c;
      }
    }
  }
  param_1 = (undefined1 *)0x0;
LAB_1078fe994:
  func_0x0001079154b4();
  func_0x000107915384();
  func_0x0001079154e4();
  return param_1;
}



/* Entry: 1078ffb04; end: 1078ffb0b;  */

undefined8 FUN_1078ffb04(undefined1 *param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong unaff_x20;
  ulong unaff_x21;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  
  iVar3 = (int)&stack0x00000000;
  func_0x0001079188cc();
  func_0x0001079136f4();
  func_0x0001079153e4();
  in_stack_00000098 = 0;
  in_stack_000000a0 = 0;
  in_stack_000000a8 = 0;
  func_0x0001079132d8();
  func_0x0001079136bc();
  func_0x0001079136d8();
  func_0x0001079155d4();
  if ((bool)in_ZR) {
code_r0x0001078ffbe4:
    func_0x0001079155c8();
    if ((bool)in_ZR) {
      func_0x0001079181f0();
code_r0x0001078ffc54:
      iVar3 = (int)param_1;
      uVar2 = 0x7f < unaff_x21;
      if ((bool)uVar2) {
code_r0x0001078ffc5c:
        iVar3 = (int)param_1;
        uVar2 = 0x62 < unaff_x20;
        if (99 < unaff_x20) goto code_r0x0001078ffc7c;
        func_0x000107913ea0();
        iVar3 = (int)param_1;
        if (!(bool)uVar2) goto code_r0x0001078ffc7c;
        func_0x0001079139c4();
        func_0x0001078ffd14();
        iVar3 = (int)param_1;
        if (((ulong)param_1 & 1) == 0) goto code_r0x0001078ffcc4;
      }
      else {
code_r0x0001078ffc7c:
        func_0x0001079146f8();
        func_0x0001078ffa94();
        if (iVar3 == 0) goto code_r0x0001078ffcc4;
      }
      func_0x000107913e90();
      if ((((bool)uVar2) && (bVar1 = 0x62 < unaff_x20, unaff_x20 < 100)) &&
         (func_0x000107913e80(), bVar1)) {
        uVar4 = 0;
        func_0x00010791386c();
        func_0x0001078ffd14();
        if ((uVar4 & 1) != 0) {
code_r0x0001078ffc9c:
          uVar5 = 1;
          goto code_r0x0001078ffcc8;
        }
      }
      else {
        func_0x000107913eb0();
        func_0x0001078ffa94();
        if (iVar3 != 0) goto code_r0x0001078ffc9c;
      }
    }
    else {
      func_0x0001079158a8();
      if (((((bool)in_CY) && (func_0x000107913ed0(), (bool)in_CY)) &&
          (bVar1 = 0x62 < unaff_x20, unaff_x20 < 100)) && (func_0x000107914e34(), bVar1)) {
        func_0x000107915ee0();
        func_0x0001078f9724();
        func_0x000107913a34();
        func_0x0001078ffd14();
        if ((int)param_1 != 0) {
          func_0x000107913650();
          func_0x0001078ffd14();
          if (((ulong)param_1 & 1) != 0) goto code_r0x0001078ffc5c;
        }
      }
      else {
        func_0x000107914708();
        func_0x0001078ffa94();
        if ((int)param_1 != 0) {
          func_0x000107913ec0();
          func_0x0001078ffa94();
          if ((int)param_1 != 0) goto code_r0x0001078ffc54;
        }
      }
    }
  }
  else {
    func_0x0001079158b4();
    uVar2 = 0;
    if ((bool)in_CY) {
      uVar2 = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if ((99 < unaff_x20) || (func_0x000107913f00(), !(bool)uVar2)) goto code_r0x0001078ffb4c;
      func_0x000107913d24();
      func_0x0001078f96f8();
      func_0x00010791354c();
      func_0x0001078ffd14();
      if (((ulong)param_1 & 1) != 0) goto code_r0x0001078ffb80;
    }
    else {
code_r0x0001078ffb4c:
      func_0x000107913f30();
      func_0x0001078ffa94();
      if ((int)param_1 != 0) {
code_r0x0001078ffb80:
        func_0x000107913ef0();
        in_CY = false;
        if ((bool)uVar2) {
          func_0x000107913ee0();
          in_CY = false;
          if ((bool)uVar2) {
            in_CY = 0x62 < unaff_x20;
            in_ZR = unaff_x20 == 99;
            if (unaff_x20 < 100) {
              in_CY = 0x78 < unaff_x21;
              in_ZR = unaff_x21 == 0x79;
              if ((bool)in_CY) {
                func_0x000107914c84();
                func_0x0001078f9724();
                func_0x000107913880();
                func_0x0001078ffd14();
                if (iVar3 != 0) {
                  func_0x000107913894();
                  func_0x0001078ffd14();
                  param_1 = (undefined1 *)register0x00000008;
                  if (((ulong)register0x00000008 & 1) != 0) goto code_r0x0001078ffbe4;
                }
                goto code_r0x0001078ffcc4;
              }
            }
          }
        }
        func_0x000107913f20();
        func_0x0001078ffa94();
        if ((int)param_1 != 0) {
          func_0x000107913f10();
          func_0x0001078ffa94();
          if ((int)param_1 != 0) goto code_r0x0001078ffbe4;
        }
      }
    }
  }
code_r0x0001078ffcc4:
  uVar5 = 0;
code_r0x0001078ffcc8:
  func_0x00010791502c();
  func_0x000107915070();
  func_0x000107915008();
  func_0x0001079150b0();
  func_0x00010791508c();
  func_0x000107915094();
  return uVar5;
}



/* Entry: 10790005c; end: 10790007f;  */

void FUN_10790005c(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 - (long)param_2;
  lVar1 = (long)*(undefined8 **)(param_1 + 0x10) + param_3;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (; param_3 != 0; param_3 = param_3 + -8) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 107900254; end: 107900257;  */

undefined8 * FUN_107900254(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  
  puVar1 = param_1;
  func_0x00010791751c();
  *puVar1 = extraout_x8;
  param_1[1] = &PTR_DAT_1109ea0e8;
  func_0x000105301370(puVar1 + 2,param_2 + 0x10);
  *param_1 = &PTR_DAT_1109ea070;
  param_1[1] = &PTR_DAT_1109ea0a0;
  param_1[2] = &PTR_DAT_1109ea0c8;
  return param_1;
}



/* Entry: 107900544; end: 1079005d7;  */

/* WARNING: Removing unreachable block (ram,0x0001079005b8) */

void FUN_107900544(int param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = 0;
  func_0x000107914d58();
  func_0x0001078fbd04();
  if (param_1 == 0) {
    func_0x000107900634();
    func_0x000107917f00();
    if ((uVar2 & 1) == 0) {
      do {
        uVar2 = 0;
        func_0x00010790081c();
        func_0x000107917f00();
        if ((uVar2 & 1) != 0) {
          return;
        }
        iVar1 = 0;
        func_0x0001078fbd04();
      } while (iVar1 == 0);
    }
  }
  return;
}



/* Entry: 1079008bc; end: 107900917;  */

void FUN_1079008bc(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  long unaff_x21;
  long lVar1;
  
  func_0x000107914c4c();
  if (!(bool)in_ZR) {
    func_0x0001078f4bac();
    lVar1 = *(long *)(unaff_x19 + 8);
    func_0x000107913f60();
    *(long *)(unaff_x19 + 8) = lVar1 + unaff_x21;
  }
  func_0x000107914e8c();
  func_0x000107900918();
  return;
}



/* Entry: 107900cc8; end: 107900d1f;  */

void FUN_107900cc8(ulong param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  ulong unaff_x20;
  int unaff_w26;
  
  func_0x000107915f10();
  func_0x0001079133e4();
  while (func_0x000107915ebc(), !(bool)in_ZR) {
    func_0x00010791744c();
    func_0x0001078edfa0();
    func_0x000107916fc0();
    if ((unaff_w26 == 0) || ((param_1 & 1) == 0)) {
      func_0x00010791742c();
      in_ZR = unaff_w26 == 0;
      param_1 = unaff_x20;
      if ((bool)in_ZR) {
        param_1 = extraout_x8;
      }
      func_0x0001078f503c();
    }
  }
  return;
}



/* Entry: 107901198; end: 10790119f;  */

void FUN_107901198(undefined8 param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar1;
  undefined1 uVar2;
  ulong unaff_x20;
  ulong unaff_x21;
  undefined1 auStack_120 [72];
  undefined1 auStack_d8 [48];
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
  undefined1 auStack_50 [32];
  
  func_0x000107913cb4();
  func_0x000107913d54();
  uStack_60 = param_2[2];
  uStack_68 = param_2[1];
  uStack_90 = *param_2;
  uStack_78 = param_2[3];
  uStack_80 = param_2[2];
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = param_1;
  uStack_70 = uStack_90;
  uStack_58 = param_1;
  func_0x0001079132d8();
  func_0x0001079139f4();
  FUN_107900cc8();
  func_0x000107913794();
  FUN_107900cc8();
  func_0x0001079155d4();
  if (!(bool)in_ZR) {
    func_0x0001079158b4();
    uVar2 = 0;
    if ((bool)in_CY) {
      uVar2 = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if ((99 < unaff_x20) || (func_0x000107913f00(), !(bool)uVar2)) goto code_r0x000107901228;
      func_0x0001079013d8(auStack_d8);
      func_0x000107913df4();
      func_0x000107900e4c();
      func_0x000107915b2c();
      func_0x00010791354c();
      func_0x0001079013d0();
    }
    else {
code_r0x000107901228:
      func_0x000107913f30();
      func_0x00010790113c();
    }
    func_0x000107913ef0();
    in_CY = false;
    if (((bool)uVar2) && (func_0x000107913ee0(), in_CY = false, (bool)uVar2)) {
      in_CY = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if (unaff_x20 < 100) {
        in_CY = 0x78 < unaff_x21;
        in_ZR = unaff_x21 == 0x79;
        if ((bool)in_CY) {
          func_0x0001079013d8(auStack_d8);
          func_0x000107915338();
          func_0x000107913880(auStack_50);
          func_0x0001079013d0();
          func_0x000107913894(auStack_50);
          func_0x0001079013d0();
          goto code_r0x0001079012b8;
        }
      }
    }
    func_0x000107913f20();
    func_0x00010790113c();
    func_0x000107913f10();
    func_0x00010790113c();
  }
code_r0x0001079012b8:
  func_0x0001079155c8();
  if ((bool)in_ZR) {
    func_0x0001079185d0();
code_r0x000107901328:
    uVar2 = 0;
    if (0x7f < unaff_x21) goto code_r0x000107901330;
  }
  else {
    func_0x0001079158a8();
    if ((((!(bool)in_CY) || (func_0x000107913ed0(), !(bool)in_CY)) ||
        (bVar1 = 0x62 < unaff_x20, 99 < unaff_x20)) || (func_0x000107914e34(), !bVar1)) {
      func_0x000107914858();
      func_0x00010790113c();
      func_0x000107913ec0();
      func_0x00010790113c();
      goto code_r0x000107901328;
    }
    func_0x0001079013d8(auStack_120);
    func_0x000107915338();
    func_0x000107913adc(auStack_50,&uStack_a8);
    func_0x0001079013d0();
    func_0x000107913858(auStack_50);
    func_0x0001079013d0();
code_r0x000107901330:
    uVar2 = 0x62 < unaff_x20;
    if ((unaff_x20 < 100) && (func_0x000107913ea0(), (bool)uVar2)) {
      func_0x000107913a0c();
      func_0x0001079013d0();
      goto code_r0x000107901354;
    }
  }
  func_0x000107914848();
  func_0x00010790113c();
code_r0x000107901354:
  func_0x000107913e90();
  if ((((bool)uVar2) && (bVar1 = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107913e80(), bVar1)) {
    func_0x00010791386c(&uStack_90);
    func_0x0001079013d0();
  }
  else {
    func_0x000107913eb0();
    func_0x00010790113c();
  }
  func_0x000107915a84();
  func_0x000107915ac4();
  func_0x000107915a70();
  func_0x000107915af4();
  func_0x000107915ae4();
  func_0x000107915b24();
  return;
}



/* Entry: 10790162c; end: 10790163f;  */

void FUN_10790162c(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c03f28();
  func_0x000107914c78();
  lVar2 = *(long *)(puVar1 + 8);
  while (lVar2 != unaff_x19) {
    lVar2 = lVar2 + -0x18;
    func_0x000107912734();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107902014; end: 10790201f;  */

void FUN_107902014(void)

{
  uint extraout_w8;
  undefined8 *unaff_x19;
  
  func_0x000107913ad0();
  func_0x00010002bfa0();
  if ((extraout_w8 & 1) == 0) {
    func_0x000107902048(*unaff_x19);
  }
  return;
}



/* Entry: 107902684; end: 10790270f;  */

void FUN_107902684(ulong param_1)

{
  long lVar1;
  
  func_0x000107916af4();
  for (lVar1 = (param_1 >> 1) + 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    ___sincos_stret();
    func_0x000107915a64();
    func_0x0001078e96d4();
  }
  return;
}



/* Entry: 107902d04; end: 107902f13;  */

void FUN_107902d04(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar2;
  bool bVar3;
  undefined1 uVar4;
  long extraout_x8;
  long extraout_x9;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [120];
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
  undefined8 auStack_50 [2];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107913cb4();
  func_0x000107913d54();
  uStack_60 = param_2[2];
  uStack_68 = param_2[1];
  uStack_90 = *param_2;
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = param_1;
  uStack_80 = uVar5;
  uStack_78 = uVar6;
  uStack_70 = uStack_90;
  uStack_58 = param_1;
  func_0x0001079132d8();
  func_0x0001079139f4();
  func_0x000107902c2c();
  func_0x000107913794();
  func_0x000107902c98();
  uVar1 = unaff_x20 + 1;
  func_0x0001079155d4();
  uVar4 = 1;
  if ((bool)in_ZR) goto LAB_107902dfc;
  uVar4 = extraout_x9 - extraout_x8 == 0x80;
  uVar2 = 0;
  if ((ulong)(extraout_x9 - extraout_x8) < 0x80) {
LAB_107902d74:
    func_0x000107913f30();
    func_0x000107902f14();
  }
  else {
    uVar2 = 0x62 < uVar1;
    uVar4 = uVar1 == 99;
    if ((99 < uVar1) || (func_0x000107913f00(), !(bool)uVar2)) goto LAB_107902d74;
    func_0x000107916ee8();
    func_0x000107913df4();
    func_0x000107902f98();
    func_0x000107915b2c();
    func_0x00010791354c();
    func_0x000107902fd0();
  }
  func_0x000107913ef0();
  in_CY = 0;
  if (((bool)uVar2) && (func_0x000107913ee0(), in_CY = 0, (bool)uVar2)) {
    in_CY = 0x62 < uVar1;
    uVar4 = uVar1 == 99;
    if ((uVar1 < 100) && (func_0x000107914718(), (bool)in_CY)) {
      func_0x000107916ee8();
      func_0x000107915338();
      func_0x000107913880(auStack_50);
      func_0x000107902fd0();
      func_0x000107913894(auStack_50);
      func_0x000107902fd0();
      goto LAB_107902dfc;
    }
  }
  func_0x000107913f20();
  func_0x000107902f14();
  func_0x000107913f10();
  func_0x000107902f14();
LAB_107902dfc:
  func_0x0001079155c8();
  if (!(bool)uVar4) {
    func_0x000107914d40();
    if (((((bool)in_CY) && (func_0x000107913ed0(), (bool)in_CY)) &&
        (in_CY = 0x62 < uVar1, uVar1 < 100)) && (func_0x000107914e34(), (bool)in_CY)) {
      func_0x000107913d34();
      auStack_50[0] = param_1;
      uStack_40 = uVar5;
      uStack_38 = uVar6;
      func_0x000107915510();
      func_0x000107915b2c();
      func_0x000107913adc(auStack_140,&uStack_a8);
      func_0x000107902fd0();
      func_0x000107913650();
      func_0x000107902fd0();
    }
    else {
      func_0x000107914858();
      func_0x000107902f14();
      func_0x000107913ec0();
      func_0x000107902f14();
    }
  }
  func_0x000107914d34(uStack_a0);
  if ((((bool)in_CY) && (in_CY = 0x62 < uVar1, uVar1 < 100)) && (func_0x000107913ea0(), (bool)in_CY)
     ) {
    func_0x000107913a0c();
    func_0x000107902fd0();
  }
  else {
    func_0x000107914848();
    func_0x000107902f14();
  }
  func_0x000107913e90();
  if ((((bool)in_CY) && (bVar3 = 0x62 < uVar1, uVar1 < 100)) && (func_0x000107913e80(), bVar3)) {
    func_0x00010791386c(&uStack_90);
    func_0x000107902fd0();
  }
  else {
    func_0x000107913eb0();
    func_0x000107902f14();
  }
  func_0x000107902fd8(auStack_120);
  func_0x000107916e90();
  func_0x000107916cd8();
  func_0x000107915aec();
  func_0x000107915adc();
  func_0x000107915b1c();
  return;
}



/* Entry: 10790307c; end: 1079030d3;  */

void FUN_10790307c(long param_1)

{
  undefined8 uVar1;
  long extraout_x9;
  long lVar2;
  long extraout_x9_00;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  
  func_0x000107914c78();
  func_0x000107916150();
  lVar2 = extraout_x9;
  while (lVar2 != unaff_x21) {
    func_0x0001079161c4();
    func_0x0001079138d4();
    func_0x000107915d84();
    lVar2 = extraout_x9_00;
  }
  for (; param_1 != unaff_x21; param_1 = param_1 + 0x30) {
    func_0x0001079126fc();
  }
  *(undefined8 *)(unaff_x19 + 8) = unaff_x22;
  uVar1 = *unaff_x20;
  *unaff_x20 = unaff_x22;
  unaff_x20[1] = uVar1;
  func_0x00010791351c();
  return;
}



/* Entry: 1079032d0; end: 10790330f;  */

long * FUN_1079032d0(long *param_1,long *param_2)

{
  long *plVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 2);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0x1fffffffffffffff;
    }
    return plVar1;
  }
  func_0x000107903348();
  func_0x000107914c78();
  func_0x000107916138();
  *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010791351c();
  return param_1;
}



/* Entry: 1079035e4; end: 10790363f;  */

void FUN_1079035e4(long param_1,ulong param_2)

{
  ulong extraout_x8;
  long *unaff_x19;
  
  if (param_2 >> 0x3d == 0) {
    func_0x000107918878();
    func_0x000107903354();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    unaff_x19[2] = param_1 + param_2 * 8;
    return;
  }
  func_0x000107903348();
  func_0x00010002bfa0();
  if ((extraout_x8 & 1) == 0) {
    func_0x000107903640(*unaff_x19);
  }
  return;
}



/* Entry: 107906504; end: 107906533;  */

void FUN_107906504(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  param_2[1] = *param_2;
  uStack_20 = 0xffffffffffffffff;
  uStack_18 = 0xffffffffffffffff;
  uStack_28 = 0;
  func_0x0001079065a4(param_1,param_2,&uStack_28);
  return;
}



/* Entry: 107906c0c; end: 107906ecb;  */

void FUN_107906c0c(int *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  char cVar10;
  char cVar11;
  ulong uVar12;
  long lVar13;
  long extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar14;
  undefined8 *extraout_x9;
  undefined8 uVar15;
  undefined8 uVar16;
  int *extraout_x10;
  int *piVar17;
  int *unaff_x19;
  int *unaff_x20;
  long lVar18;
  int *piVar19;
  undefined1 auStack_298 [40];
  long lStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_258;
  undefined8 uStack_250;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  int *piStack_c8;
  int *piStack_c0;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  long lStack_a8;
  int *piStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  int *piStack_30;
  int *piStack_28;
  undefined8 uStack_18;
  long lStack_10;
  
  func_0x000107915f10();
  func_0x000107914d58();
  uVar12 = param_2 + 0x20;
  func_0x000107907300();
  if ((uVar12 & 1) == 0) {
    iVar7 = *param_1;
    puVar14 = *(undefined8 **)(param_1 + 2);
    iVar8 = param_1[4];
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar15 = *(undefined8 *)(param_1 + 10);
    uVar16 = *(undefined8 *)(param_1 + 0xc);
    lVar13 = **(long **)(param_1 + 6);
    if ((((char)unaff_x20[0x14] != '\x01') ||
        (*(ulong *)(unaff_x20 + 0x12) <= *(long *)(unaff_x20 + 0x10) + 1U)) &&
       (((char)unaff_x19[0x14] != '\x01' ||
        (*(ulong *)(unaff_x19 + 0x12) <= *(long *)(unaff_x19 + 0x10) + 1U)))) {
      if (-1 < *(long *)(unaff_x20 + 6)) {
        func_0x000107916bf8();
        lVar13 = extraout_x8;
        puVar14 = extraout_x9;
      }
      uVar1 = *puVar14;
      uVar4 = puVar14[1];
      puVar14 = (undefined8 *)(lVar13 + *(long *)(unaff_x19 + 4) * 0x30);
      if (-1 < *(long *)(unaff_x19 + 6)) {
        func_0x000107915928();
        puVar14 = extraout_x8_00;
      }
      uVar2 = *puVar14;
      iVar5 = *unaff_x20;
      iVar6 = *unaff_x19;
      lStack_10 = *(long *)(unaff_x20 + 0xc);
      uStack_18 = *(undefined8 *)(unaff_x20 + 0x16);
      func_0x000107914184(lStack_10,*(undefined8 *)(unaff_x20 + 0xe));
      FUN_107907428();
      uStack_48 = uVar1;
      uStack_40 = uVar4;
      func_0x000107917648();
      piStack_50 = piStack_28;
      func_0x000107914df8();
      lVar13 = lStack_10;
      while (piVar17 = piStack_28 + 2, piVar17 != piStack_30) {
        cVar10 = SCARRY4(iVar5,1);
        cVar11 = iVar5 + 1 < 0;
        if (iVar5 == -1) {
          func_0x000107915d54();
          piVar17 = extraout_x10;
          if (cVar11 != cVar10) {
            return;
          }
        }
        else if ((iVar5 == 1) && (unaff_x19[10] < *piStack_28)) {
          return;
        }
        uStack_b0 = *(undefined8 *)(unaff_x19 + 0x16);
        lStack_a8 = *(long *)(unaff_x19 + 0xc);
        FUN_107907428(lStack_a8,*(undefined8 *)(unaff_x19 + 0xe),uVar2,auStack_b8,&piStack_c0,
                      &piStack_c8,&lStack_a8,&uStack_b0,iVar6);
        piVar19 = piStack_c0;
        func_0x000107917bb4();
        func_0x000107917bb4();
        piVar9 = piStack_c8;
        lVar18 = lStack_a8;
        while (piVar19 + 2 != piVar9) {
          cVar10 = SCARRY4(iVar6,1);
          cVar11 = iVar6 + 1 < 0;
          if (iVar6 == -1) {
            func_0x000107915d54();
            if (cVar11 != cVar10) break;
          }
          else if ((iVar6 == 1) && (unaff_x20[10] < *piVar19)) break;
          func_0x000107907b94(auStack_298);
          uStack_260 = *(undefined8 *)(unaff_x20 + 6);
          uStack_268 = *(undefined8 *)(unaff_x20 + 4);
          uStack_250 = 0xffffffffffffffff;
          uStack_1c0 = *(undefined8 *)(unaff_x19 + 6);
          uStack_1c8 = *(undefined8 *)(unaff_x19 + 4);
          uStack_1b0 = 0xffffffffffffffff;
          lStack_270 = (long)iVar7;
          lStack_258 = lVar13;
          lStack_1d0 = (long)iVar8;
          lStack_1b8 = lVar18;
          func_0x000107907484(&stack0xffffffffffffff60,&stack0xfffffffffffffec8,auStack_298,uVar3,
                              uVar15,uVar16);
          lVar18 = lVar18 + 1;
          func_0x000107917bb4();
          piVar19 = piVar19 + 2;
        }
        lVar13 = lVar13 + 1;
        func_0x0001079092b0(&piStack_50);
        piStack_28 = piVar17;
      }
    }
  }
  return;
}



/* Entry: 107907250; end: 1079072ab;  */

void FUN_107907250(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  long *unaff_x20;
  long unaff_x22;
  long lVar2;
  
  func_0x000107915c10();
  if ((!(bool)in_ZR) && (func_0x0001079143ac(), !(bool)in_ZR)) {
    func_0x00010791589c();
    lVar1 = extraout_x8;
    lVar2 = extraout_x9;
    while (unaff_x22 != lVar2) {
      lVar2 = *unaff_x20;
      while (lVar2 != lVar1) {
        func_0x00010791415c();
        FUN_107906c0c();
        lVar1 = unaff_x20[1];
      }
      func_0x000107915c04();
      lVar1 = extraout_x8_00;
      lVar2 = extraout_x9_00;
    }
  }
  return;
}



/* Entry: 107907428; end: 107907483;  */

void FUN_107907428(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *in_x3;
  undefined8 *in_x5;
  int extraout_w8;
  int iVar3;
  int extraout_w8_00;
  undefined8 extraout_x9;
  undefined8 uVar4;
  undefined8 extraout_x9_00;
  int extraout_w10;
  int iVar5;
  int extraout_w10_00;
  int extraout_w11;
  int iVar6;
  int extraout_w11_00;
  undefined8 extraout_x12;
  undefined8 uVar7;
  undefined8 extraout_x12_00;
  undefined8 uVar8;
  undefined8 extraout_x13;
  
  func_0x00010791401c();
  iVar3 = extraout_w8;
  uVar4 = extraout_x9;
  iVar5 = extraout_w10;
  iVar6 = extraout_w11;
  uVar7 = extraout_x12;
  uVar2 = extraout_x13;
  while (uVar8 = uVar7, (int *)*in_x3 != (int *)*in_x5) {
    iVar1 = *(int *)*in_x3;
    if (iVar3 == 1) {
      if (iVar6 <= iVar1) break;
    }
    else {
      uVar8 = uVar4;
      if ((iVar3 != -1) || (uVar8 = uVar7, iVar1 <= iVar5)) break;
    }
    func_0x000107914ae0(uVar2);
    iVar3 = extraout_w8_00;
    uVar4 = extraout_x9_00;
    iVar5 = extraout_w10_00;
    iVar6 = extraout_w11_00;
    uVar7 = extraout_x12_00;
  }
  *in_x3 = uVar8;
  return;
}



/* Entry: 107908468; end: 1079088e3;  */

/* WARNING: Possible PIC construction at 0x0001079085f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010790864c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001079085fc) */
/* WARNING: Removing unreachable block (ram,0x000107908650) */

undefined1  [16]
FUN_107908468(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5,uint param_6,uint param_7,uint param_8,uint param_9)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  char cVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  undefined1 uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  mach_header *pmVar21;
  undefined8 *puVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  undefined1 uVar28;
  uint extraout_w8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x19;
  undefined8 unaff_x21;
  ulong uVar29;
  int *piVar30;
  double dVar31;
  undefined8 extraout_var;
  undefined1 auVar32 [16];
  double dVar33;
  undefined8 in_register_00005028;
  double dVar34;
  undefined8 uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  int iStack_178;
  int iStack_174;
  int iStack_168;
  int iStack_164;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  mach_header mStack_138;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  dword dStack_f8;
  dword dStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  mach_header *pmStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  iVar23 = (int)param_5;
  puVar22 = param_4;
  uVar24 = param_6;
  uVar25 = param_7;
  uVar26 = param_8;
  uVar27 = param_9;
  func_0x000107913c90();
  iVar20 = uVar25 - uVar24;
  iVar2 = uVar27 - uVar26;
  uStack_148 = CONCAT44(iVar2,uVar24 - uVar26);
  uStack_80 = extraout_x8_00;
  func_0x00010790831c(&uStack_148);
  uStack_158 = CONCAT44(iVar2,param_7 - param_8);
  func_0x00010790831c(&uStack_158);
  iStack_168 = param_8 - param_6;
  piVar30 = &iStack_168;
  iStack_164 = iVar20;
  func_0x00010790831c(&iStack_168);
  iStack_178 = param_9 - param_6;
  iStack_174 = iVar20;
  func_0x00010790831c(&iStack_178);
  uVar16 = param_6;
  func_0x000107917e20();
  uVar17 = param_7;
  func_0x000107917e20();
  uVar18 = param_8;
  func_0x000107917cf4();
  uVar19 = param_9;
  func_0x000107917cf4();
  uVar35 = 0x100000000;
  uVar27 = uVar16 - 1;
  uVar29 = (ulong)uVar27;
  if (uVar27 == 0) {
LAB_10790854c:
    uStack_148 = uVar35;
    func_0x00010790831c(&uStack_148);
    piVar30[0] = 0;
    piVar30[1] = 1;
    func_0x00010790831c(piVar30);
  }
  else if (uVar16 == 3) {
    piVar30 = &iStack_178;
    uVar35 = 0x100000001;
    goto LAB_10790854c;
  }
  uVar3 = uVar17 - 1;
  if (uVar17 == 1) {
    uStack_158 = 0x100000000;
    piVar30 = &iStack_168;
LAB_10790858c:
    func_0x00010790831c(&uStack_158);
    piVar30[0] = 1;
    piVar30[1] = 1;
    func_0x00010790831c(piVar30);
LAB_1079085a8:
    uVar24 = (uint)((int)param_6 < (int)param_7);
    if ((int)param_7 < (int)param_6) {
      uVar24 = 0xffffffff;
    }
    uVar25 = (uint)((int)param_8 < (int)param_9);
    if ((int)param_9 < (int)param_8) {
      uVar25 = 0xffffffff;
    }
    pmVar21 = &mStack_138;
    func_0x0001079082e4();
    pmStack_a0 = &MACH_HEADER;
    puStack_98 = (undefined8 *)0x0;
    uStack_90 = 0x100000000;
    uStack_88 = 0;
    if (uVar27 < 3) {
      mStack_138._8_8_ = *(undefined8 *)*param_4;
      goto code_r0x0001079088e4;
    }
    if (uVar18 == 2) {
      mStack_138._8_8_ = *(undefined8 *)*param_5;
      goto code_r0x0001079088e4;
    }
    if (uVar3 < 3) {
      func_0x000107916310(&mStack_138);
      *(undefined1 *)(uVar29 + 0x38) = 1;
      *(mach_header **)(uVar29 + 0x18) = pmVar21;
      *(undefined8 **)(uVar29 + 0x20) = puVar22;
      *(undefined8 *)(uVar29 + 0x30) = uStack_150;
      *(undefined8 *)(uVar29 + 0x28) = uStack_158;
      func_0x000107908994();
      pmStack_a0 = pmVar21;
      puStack_98 = puVar22;
    }
    uVar27 = (uint)(uVar3 < 3);
    if (uVar19 == 2 && uVar27 < 2) {
      func_0x000107916310(&mStack_138);
      *(undefined1 *)(uVar29 + 0x38) = 1;
      func_0x0001079178b8(CONCAT44(iStack_174,iStack_178));
    }
    if (uVar27 == 2) {
      puVar22 = &uStack_90;
      func_0x0001079089f4(puVar22,&pmStack_a0);
      uVar8 = uStack_108;
      uVar7 = uStack_110;
      uVar6 = uStack_118;
      uVar35 = mStack_138._24_8_;
      if ((int)puVar22 != 0) {
        auVar32._8_4_ = mStack_138.ncmds;
        auVar32._12_4_ = mStack_138.sizeofcmds;
        auVar32._0_4_ = mStack_138.cpusubtype;
        auVar32._4_4_ = mStack_138.filetype;
        uStack_118 = uStack_f0;
        mStack_138.flags = dStack_f8;
        mStack_138.reserved = dStack_f4;
        uVar5 = mStack_138._24_8_;
        uStack_108 = uStack_e0;
        uStack_110 = uStack_e8;
        uStack_100 = uStack_d8;
        uStack_f0 = uVar6;
        mStack_138.flags = (dword)uVar35;
        mStack_138.reserved = SUB84(uVar35,4);
        dStack_f8 = mStack_138.flags;
        dStack_f4 = mStack_138.reserved;
        uStack_e0 = uVar8;
        uStack_e8 = uVar7;
        auVar32 = NEON_ext(auVar32,auVar32,8,1);
        mStack_138._16_8_ = auVar32._8_8_;
        mStack_138._8_8_ = auVar32._0_8_;
        mStack_138._24_8_ = uVar5;
      }
    }
    uVar26 = uVar19 & 0xfffffffd;
    iVar20 = -(uint)(uVar26 != 1);
    bVar11 = uVar18 - 4 < 0xfffffffd;
    bVar13 = (uVar18 & 0xfffffffd) != 1;
    bVar1 = bVar11;
    if (uVar19 == 2) {
      iVar20 = 1;
      bVar1 = 0xfffffffc < uVar18 - 4 && bVar13;
    }
    uVar18 = uVar17 & 0xfffffffd;
    cVar10 = !bVar13 && !bVar11;
    if (uVar26 == 1) {
      bVar1 = (bool)cVar10;
    }
    if (uVar26 == 1 && uVar19 - 1 < 3) {
      cVar10 = bVar1 + '\x01';
    }
    iVar2 = -(uint)(uVar18 != 1);
    bVar12 = uVar16 - 4 < 0xfffffffd;
    bVar14 = (uVar16 & 0xfffffffd) != 1;
    bVar13 = bVar12;
    if (uVar17 == 2) {
      iVar2 = 1;
      bVar13 = 0xfffffffc < uVar16 - 4 && bVar14;
    }
    cVar9 = !bVar14 && !bVar12;
    if (uVar18 == 1) {
      bVar13 = (bool)cVar9;
    }
    if (uVar18 == 1 && uVar3 < 3) {
      cVar9 = bVar13 + '\x01';
    }
    mStack_138._0_8_ = ZEXT48(uVar27);
    *(undefined1 *)(unaff_x19 + 0x68) = 99;
    *(bool *)(unaff_x19 + 0x69) = uVar24 != uVar25;
    *(undefined8 *)(unaff_x19 + 0x84) = 0;
    *(undefined8 *)(unaff_x19 + 0x7c) = 0;
    *(undefined8 *)(unaff_x19 + 0x74) = 0;
    *(undefined8 *)(unaff_x19 + 0x6c) = 0;
    *(int *)(unaff_x19 + 0x8c) = iVar2;
    *(int *)(unaff_x19 + 0x90) = iVar20;
    if (2 < uVar3) {
      bVar12 = bVar13 == false;
    }
    if (2 < uVar19 - 1) {
      bVar11 = bVar1 == false;
    }
    if (((cVar9 == '\x01' && cVar10 == '\x01') && (bVar12)) && (bVar11)) {
      if (uVar24 == uVar25) {
        uVar28 = 0x61;
        uVar15 = true;
      }
      else {
        uVar15 = iVar2 == 0;
        uVar28 = 0x74;
        if (!(bool)uVar15) {
          uVar28 = 0x66;
        }
      }
LAB_1079088a0:
      *(undefined1 *)(unaff_x19 + 0x68) = uVar28;
    }
    else {
      uVar15 = cVar9 == '\x02' && cVar10 == '\x02';
      if (cVar9 == '\x02' && cVar10 == '\x02') {
        uVar28 = 0x65;
        goto LAB_1079088a0;
      }
    }
    pmVar21 = &mStack_138;
    func_0x000107914ab4();
    func_0x000107913564(uStack_80);
    if ((bool)uVar15) {
      auVar36._8_8_ = pmVar21;
      auVar36._0_8_ = unaff_x19;
      return auVar36;
    }
  }
  else {
    if (uVar17 == 3) {
      piVar30 = &iStack_178;
      uStack_158 = 0x100000001;
      goto LAB_10790858c;
    }
    uVar15 = false;
    if ((uVar16 != 0 || uVar17 != 0) &&
       (uVar15 = 3 < uVar16 && uVar17 == 4, 3 >= uVar16 || uVar17 < 4)) goto LAB_1079085a8;
    func_0x000107913564(uStack_80);
    if ((bool)uVar15) {
      func_0x000107913ca4();
      func_0x0001079082e4();
      uVar35 = func_0x000107916388();
      *(undefined8 *)(unaff_x19 + 0x72) = extraout_var;
      *(undefined8 *)(unaff_x19 + 0x6a) = uVar35;
      *(undefined2 *)(unaff_x19 + 0x68) = 100;
      *(undefined8 *)(unaff_x19 + 0x82) = in_register_00005028;
      *(undefined8 *)(unaff_x19 + 0x7a) = param_2;
      *(undefined8 *)(unaff_x19 + 0x8c) = 0;
      *(undefined8 *)(unaff_x19 + 0x84) = unaff_x21;
      func_0x000107913564(extraout_x8);
      if ((bool)uVar15) {
        auVar37._8_8_ = puVar22;
        auVar37._0_8_ = unaff_x19;
        return auVar37;
      }
      ___stack_chk_fail();
      dVar33 = (double)(int)puVar22;
      dVar34 = (double)iVar23;
      dVar31 = (double)func_0x000107917da8((double)(int)unaff_x19,dVar33,dVar34,(double)(int)uVar24,
                                           (double)(int)uVar25,(double)(int)uVar26);
      cVar10 = NAN(dVar31);
      uVar15 = dVar31 == 0.0;
      cVar9 = dVar31 < 0.0;
      if (!(bool)uVar15) {
        dVar31 = (double)func_0x000107915fcc();
        if (cVar9 == cVar10) {
          uVar27 = 0xffffffff;
          if (0.0 < dVar31) {
            uVar27 = 1;
          }
          uVar29 = (ulong)uVar27;
          goto code_r0x0001079082dc;
        }
        func_0x000107914b3c();
        uVar27 = extraout_w8;
        if (!(bool)uVar15 && cVar9 == cVar10) {
          uVar27 = 1;
        }
        uVar29 = (ulong)uVar27;
        if (dVar33 < dVar34) goto code_r0x0001079082dc;
      }
      uVar29 = 0;
code_r0x0001079082dc:
      auVar38._8_8_ = puVar22;
      auVar38._0_8_ = uVar29;
      return auVar38;
    }
  }
  ___stack_chk_fail();
code_r0x0001079088e4:
  if ((bRam0000000113726a88 & 1) == 0) {
    iVar20 = 0x13726a88;
    ___cxa_guard_acquire();
    if (iVar20 != 0) {
      uRam0000000113726a98 = 0x100000000;
      func_0x00010790831c();
      ___cxa_guard_release(0x113726a88);
    }
  }
  auVar4._8_8_ = uRam0000000113726aa0;
  auVar4._0_8_ = uRam0000000113726a98;
  return auVar4;
}



/* Entry: 107908df8; end: 107908faf;  */

void FUN_107908df8(void)

{
  undefined1 in_ZR;
  bool bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long lVar4;
  long unaff_x19;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong uVar5;
  ulong unaff_x26;
  ulong unaff_x27;
  ulong unaff_x28;
  
  func_0x000107916c08();
  func_0x000107914424();
  func_0x0001079149ec(extraout_x8 * 2 + -1);
  if (!(bool)in_ZR) goto LAB_107908f10;
  bVar1 = 0xf < extraout_x8_00;
  uVar2 = extraout_x8_00 - 0x10 == 0;
  if (bVar1) {
    func_0x0001079150b8();
  }
  else {
    func_0x000107914998(extraout_x8_00 - 0x10);
    if (bVar1) {
      func_0x000107914980();
      func_0x000107909058();
      func_0x000107914554();
      __Znwm(0x1600);
      func_0x0001079179c0();
      uVar3 = 0;
      uVar5 = unaff_x22;
      if ((bool)uVar2) {
        uVar3 = unaff_x28 == unaff_x27;
        if ((bool)uVar3) {
          func_0x000107918610();
          func_0x000107909058(1);
          func_0x00010791451c();
          func_0x000107909034();
          func_0x0001079140f0();
          func_0x0001079090a4();
          func_0x000107915010();
          uVar5 = unaff_x23;
        }
        else {
          func_0x0001079140b0();
        }
      }
      func_0x000107914958();
      while (func_0x000107918764(), !(bool)uVar3) {
        if (unaff_x22 == unaff_x21) {
          uVar3 = uVar5 == unaff_x26;
          if (uVar5 < unaff_x26) {
            func_0x000107914584();
            uVar5 = uVar5 + extraout_x8_01 * 8;
            if (!(bool)uVar3) {
              func_0x00010791548c();
            }
          }
          else {
            uVar3 = unaff_x26 - unaff_x21 == 0;
            lVar4 = (long)(unaff_x26 - unaff_x21) >> 2;
            if ((bool)uVar3) {
              lVar4 = 1;
            }
            func_0x000107909058(lVar4);
            func_0x0001079139dc(lVar4 * 2 + 6);
            func_0x000107915f88();
            func_0x000107909034();
            func_0x000107914920();
            func_0x0001079090a4();
            func_0x000107916300();
          }
        }
        else {
          uVar3 = 0;
        }
        func_0x0001079163f0();
      }
      func_0x0001079140d0();
      func_0x000107909080();
      func_0x0001079090a4(&stack0x00000028);
      goto LAB_107908f10;
    }
    __Znwm(0x1600);
    func_0x0001079186f4();
    if (!(bool)uVar2) {
      func_0x000107918770();
      goto LAB_107908f10;
    }
    if (unaff_x27 == unaff_x23) {
      func_0x000107914538();
      func_0x000107909058();
      func_0x0001079139dc(unaff_x19 + 6);
      func_0x0001079186dc();
      func_0x000107909034();
      func_0x000107914740();
      func_0x0001079090a4();
    }
    func_0x000107915178();
  }
  func_0x000107908fc4();
LAB_107908f10:
  func_0x000107908fb0();
  _memcpy();
  func_0x0001079163d8();
  return;
}



/* Entry: 10790926c; end: 10790928f;  */

undefined4 FUN_10790926c(long param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 extraout_w8;
  double dVar8;
  double dVar9;
  double dVar10;
  
  puVar2 = *(undefined4 **)(param_1 + 0x10);
  func_0x0001079081b4();
  iVar6 = (int)param_1;
  iVar7 = puVar2[1];
  func_0x00010791747c(*puVar2);
  dVar8 = (double)iVar6;
  dVar9 = (double)iVar7;
  dVar10 = (double)param_3;
  func_0x000107917da8();
  cVar5 = NAN(dVar8);
  uVar4 = dVar8 == 0.0;
  cVar3 = dVar8 < 0.0;
  if (!(bool)uVar4) {
    func_0x000107915fcc();
    if (cVar3 == cVar5) {
      if (dVar8 <= 0.0) {
        return 0xffffffff;
      }
      return 1;
    }
    func_0x000107914b3c();
    uVar1 = extraout_w8;
    if (!(bool)uVar4 && cVar3 == cVar5) {
      uVar1 = 1;
    }
    if (dVar9 < dVar10) {
      return uVar1;
    }
  }
  return 0;
}



/* Entry: 1079096bc; end: 1079096ef;  */

/* WARNING: Possible PIC construction at 0x000107909a1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107909b24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107909b14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107909ad8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107909ae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107909a84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107909a8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107909ae4) */
/* WARNING: Removing unreachable block (ram,0x000107909adc) */
/* WARNING: Removing unreachable block (ram,0x000107909b28) */
/* WARNING: Removing unreachable block (ram,0x000107909a20) */
/* WARNING: Removing unreachable block (ram,0x000107909a88) */

void FUN_1079096bc(undefined8 param_1,long *param_2,long *param_3,ulong param_4)

{
  undefined1 uVar1;
  bool bVar2;
  undefined1 uVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  undefined8 unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  long lVar5;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined8 uStack_f0;
  long *plStack_e8;
  
  uVar3 = param_2[1] - *param_2 == 0x80;
  if (((ulong)(param_2[1] - *param_2) < 0x80) || (uVar3 = param_4 == 99, 99 < param_4))
  goto code_r0x00010790997c;
  uVar1 = 0x78 < (ulong)(param_3[1] - *param_3);
  uVar3 = param_3[1] - *param_3 == 0x79;
  if (!(bool)uVar1) goto code_r0x00010790997c;
  unaff_x29 = &stack0xfffffffffffffff0;
  func_0x000107913588();
  func_0x000107907378();
  func_0x000107913304();
  func_0x0001079133b4();
  func_0x000107913398();
  func_0x000107915afc();
  if (!(bool)uVar3) {
    func_0x0001079158b4();
    if ((bool)uVar1) {
      uVar1 = (long *)0x62 < unaff_x20;
      uVar3 = unaff_x20 == (long *)0x63;
      if ((unaff_x20 < (long *)0x64) && (func_0x000107914230(), (bool)uVar1)) {
        func_0x000107914d28();
        uStack_f0 = param_1;
        plStack_e8 = param_2;
        func_0x000107913668();
        FUN_107909b8c();
        func_0x000107914220();
        if (((bool)uVar1) &&
           ((func_0x0001079142c0(), (bool)uVar1 &&
            (uVar3 = unaff_x20 == (long *)0x63, unaff_x20 < (long *)0x64)))) {
          uVar1 = 0x78 < unaff_x21;
          uVar3 = unaff_x21 == 0x79;
          if ((bool)uVar1) {
            func_0x000107916834();
            uStack_f0 = param_1;
            plStack_e8 = param_2;
            func_0x000107913810();
            FUN_107909b8c();
            func_0x0001079137f8();
            FUN_107909b8c();
            goto code_r0x000107909a90;
          }
        }
        func_0x000107914290();
        unaff_x30 = &UNK_107909a88;
        register0x00000008 = (BADSPACEBASE *)&uStack_f0;
        goto code_r0x00010790997c;
      }
    }
    func_0x0001079142a0();
    unaff_x30 = &UNK_107909a20;
    register0x00000008 = (BADSPACEBASE *)&uStack_f0;
    goto code_r0x00010790997c;
  }
code_r0x000107909a90:
  func_0x000107915a78();
  if ((bool)uVar3) {
    func_0x0001079176fc();
    uVar3 = unaff_x21 == 0x80;
    if (0x7f < unaff_x21) {
code_r0x000107909af4:
      uVar1 = (long *)0x62 < unaff_x20;
      uVar3 = unaff_x20 == (long *)0x63;
      if ((unaff_x20 < (long *)0x64) && (func_0x000107914200(), (bool)uVar1)) {
        func_0x0001079137b0();
        FUN_107909b8c();
        func_0x0001079141f0();
        if ((bool)uVar1) {
          bVar2 = (long *)0x62 < unaff_x20;
          uVar3 = unaff_x20 == (long *)0x63;
          if ((unaff_x20 < (long *)0x64) && (func_0x000107914280(), bVar2)) {
            func_0x0001079137c8();
            FUN_107909b8c();
            func_0x000107914e10();
            func_0x000107914df0();
            func_0x000107914dbc();
            func_0x000107914e18();
            func_0x000107914e20();
            func_0x000107914dc4();
            return;
          }
        }
        func_0x0001079142f0();
        unaff_x30 = &UNK_107909b28;
        register0x00000008 = (BADSPACEBASE *)&uStack_f0;
        goto code_r0x00010790997c;
      }
    }
    func_0x0001079145ec();
    unaff_x30 = &UNK_107909b18;
    register0x00000008 = (BADSPACEBASE *)&uStack_f0;
  }
  else {
    func_0x0001079156e4();
    if (((bool)uVar1) && (func_0x000107914210(), (bool)uVar1)) {
      bVar2 = (long *)0x62 < unaff_x20;
      uVar3 = unaff_x20 == (long *)0x63;
      if ((unaff_x20 < (long *)0x64) && (func_0x000107914e34(), bVar2)) {
        func_0x000107916824();
        uStack_f0 = param_1;
        plStack_e8 = param_2;
        func_0x000107913840();
        FUN_107909b8c();
        func_0x000107913828();
        FUN_107909b8c();
        goto code_r0x000107909af4;
      }
    }
    func_0x0001079145fc();
    unaff_x30 = &UNK_107909adc;
    register0x00000008 = (BADSPACEBASE *)&uStack_f0;
  }
code_r0x00010790997c:
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x000107915c10();
  if ((!(bool)uVar3) && (func_0x0001079143ac(), !(bool)uVar3)) {
    func_0x00010791589c();
    lVar4 = extraout_x8;
    lVar5 = extraout_x9;
    while (unaff_x22 != lVar5) {
      lVar5 = *unaff_x20;
      while (lVar5 != lVar4) {
        func_0x00010791415c();
        func_0x0001079093a0();
        lVar4 = unaff_x20[1];
      }
      func_0x000107915c04();
      lVar4 = extraout_x8_00;
      lVar5 = extraout_x9_00;
    }
  }
  return;
}



/* Entry: 107909b8c; end: 107909bef;  */

void FUN_107909b8c(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  bool bVar2;
  undefined1 uVar3;
  long extraout_x8;
  long extraout_x9;
  ulong unaff_x20;
  undefined8 uStack_60;
  
  func_0x000107913588();
  func_0x000107906fdc();
  func_0x000107913304();
  func_0x0001079133b4();
  func_0x000107913398();
  func_0x000107915afc();
  uVar3 = 1;
  if ((bool)in_ZR) goto code_r0x000107909880;
  uVar3 = extraout_x9 - extraout_x8 == 0x80;
  uVar1 = 0;
  if ((ulong)(extraout_x9 - extraout_x8) < 0x80) {
code_r0x000107909808:
    func_0x0001079142a0();
    func_0x00010790997c();
  }
  else {
    uVar1 = 0x62 < unaff_x20;
    uVar3 = unaff_x20 == 99;
    if ((99 < unaff_x20) || (func_0x000107914230(), !(bool)uVar1)) goto code_r0x000107909808;
    func_0x000107914d1c();
    func_0x000107913668();
    func_0x0001079099d8();
  }
  func_0x000107914220();
  in_CY = 0;
  if (((bool)uVar1) && (func_0x0001079142c0(), in_CY = 0, (bool)uVar1)) {
    in_CY = 0x62 < unaff_x20;
    uVar3 = unaff_x20 == 99;
    if ((unaff_x20 < 100) && (func_0x000107914e9c(), (bool)in_CY)) {
      func_0x00010791683c();
      func_0x000107913810();
      func_0x0001079099d8();
      func_0x0001079137f8();
      func_0x0001079099d8();
      goto code_r0x000107909880;
    }
  }
  func_0x000107914290();
  func_0x00010790997c();
  func_0x0001079142b0();
  func_0x00010790997c();
code_r0x000107909880:
  func_0x000107915a78();
  if (!(bool)uVar3) {
    func_0x000107914d40();
    if (((((bool)in_CY) && (func_0x000107914210(), (bool)in_CY)) &&
        (in_CY = 0x62 < unaff_x20, unaff_x20 < 100)) && (func_0x000107914e34(), (bool)in_CY)) {
      func_0x00010791682c();
      func_0x000107913840();
      func_0x0001079099d8();
      func_0x000107913828();
      func_0x0001079099d8();
    }
    else {
      func_0x0001079145fc();
      func_0x00010790997c();
      func_0x0001079142e0();
      func_0x00010790997c();
    }
  }
  func_0x000107914d34(uStack_60);
  if ((((bool)in_CY) && (in_CY = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107914200(), (bool)in_CY)) {
    func_0x0001079137b0();
    func_0x0001079099d8();
  }
  else {
    func_0x0001079145ec();
    func_0x00010790997c();
  }
  func_0x0001079141f0();
  if ((((bool)in_CY) && (bVar2 = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107914280(), bVar2)) {
    func_0x0001079137c8();
    func_0x0001079099d8();
  }
  else {
    func_0x0001079142f0();
    func_0x00010790997c();
  }
  func_0x000107914e10();
  func_0x000107914df0();
  func_0x000107914dbc();
  func_0x000107914e18();
  func_0x000107914e20();
  func_0x000107914dc4();
  return;
}



/* Entry: 10790a218; end: 10790a273;  */

void FUN_10790a218(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  long *unaff_x20;
  long unaff_x22;
  long lVar2;
  
  func_0x000107915c10();
  if ((!(bool)in_ZR) && (func_0x0001079143ac(), !(bool)in_ZR)) {
    func_0x00010791589c();
    lVar1 = extraout_x8;
    lVar2 = extraout_x9;
    while (unaff_x22 != lVar2) {
      lVar2 = *unaff_x20;
      while (lVar2 != lVar1) {
        func_0x00010791415c();
        func_0x000107909c84();
        lVar1 = unaff_x20[1];
      }
      func_0x000107915c04();
      lVar1 = extraout_x8_00;
      lVar2 = extraout_x9_00;
    }
  }
  return;
}



/* Entry: 10790ab6c; end: 10790ac0b;  */

void FUN_10790ab6c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = *(int *)((long)param_2 + 0xc);
  if (*(int *)((long)param_1 + 0xc) < iVar1) {
    if (iVar1 < *(int *)((long)param_3 + 0xc)) {
      uVar3 = param_1[1];
      uVar2 = *param_1;
      uVar4 = *param_3;
      param_1[1] = param_3[1];
      *param_1 = uVar4;
    }
    else {
      uVar3 = param_1[1];
      uVar2 = *param_1;
      uVar4 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar4;
      param_2[1] = uVar3;
      *param_2 = uVar2;
      if (*(int *)((long)param_3 + 0xc) <= *(int *)((long)param_2 + 0xc)) {
        return;
      }
      uVar3 = param_2[1];
      uVar2 = *param_2;
      uVar4 = *param_3;
      param_2[1] = param_3[1];
      *param_2 = uVar4;
    }
    param_3[1] = uVar3;
    *param_3 = uVar2;
  }
  else if (iVar1 < *(int *)((long)param_3 + 0xc)) {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    uVar4 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = uVar4;
    param_3[1] = uVar3;
    *param_3 = uVar2;
    if (*(int *)((long)param_1 + 0xc) < *(int *)((long)param_2 + 0xc)) {
      uVar3 = param_1[1];
      uVar2 = *param_1;
      uVar4 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar4;
      param_2[1] = uVar3;
      *param_2 = uVar2;
    }
  }
  return;
}



/* Entry: 10790afe0; end: 10790b063;  */

bool FUN_10790afe0(long param_1,int param_2,int param_3)

{
  if ((*(int *)(param_1 + 0x20) == param_2) && (*(int *)(param_1 + 0xc0) == param_3)) {
    return true;
  }
  if (*(int *)(param_1 + 0x20) == param_3) {
    return *(int *)(param_1 + 0xc0) == param_2;
  }
  return false;
}



/* Entry: 10790ba50; end: 10790baa7;  */

void FUN_10790ba50(int param_1)

{
  func_0x0001079188e0();
  func_0x000107913908();
  func_0x00010790b9f8();
  func_0x00010791739c();
  func_0x00010790b734();
  if (param_1 != 0) {
    func_0x00010791437c();
    func_0x00010790b734();
    if (param_1 != 0) {
      func_0x0001079134bc();
      func_0x00010790b734();
      if (param_1 != 0) {
        func_0x0001079134ec();
        func_0x00010790b734();
        if (param_1 != 0) {
          func_0x000107913438();
        }
      }
    }
  }
  return;
}



/* Entry: 10790c1a4; end: 10790c1df;  */

undefined8 FUN_10790c1a4(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  func_0x00010790bc1c(param_3,param_4,param_1 + 8,(long)param_2,&uStack_18);
  return uStack_18;
}



/* Entry: 10790d078; end: 10790d0df;  */

void FUN_10790d078(long param_1,long param_2,long param_3,long param_4,int param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = 0x28;
  if (param_5 != 1) {
    lVar1 = 0x30;
  }
  lVar2 = (param_2 - param_1) / 0x68;
  do {
    if (lVar2 == 0) {
      return;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (param_4 < param_3) {
      if (param_3 <= lVar3 || lVar3 <= param_4) {
LAB_10790d0b0:
        *(long *)(param_1 + lVar1) = *(long *)(param_1 + lVar1) + 1;
      }
    }
    else if (param_3 <= lVar3 && lVar3 <= param_4) goto LAB_10790d0b0;
    lVar2 = lVar2 + -1;
    param_1 = param_1 + 0x68;
  } while( true );
}



/* Entry: 10790d530; end: 10790e0b7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10790d530(long param_1,long param_2,long *******param_3,uint param_4,long *******param_5,
                  long *******param_6,long *******param_7)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined1 uVar6;
  long *******ppppppplVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long *******ppppppplVar9;
  long extraout_x8_01;
  long *******ppppppplVar10;
  long extraout_x8_02;
  long *******ppppppplVar11;
  long ******extraout_x8_03;
  ulong extraout_x9;
  ulong extraout_x9_00;
  long extraout_x9_01;
  long *******ppppppplVar12;
  ulong extraout_x9_02;
  long extraout_x9_03;
  ulong extraout_x10;
  ulong extraout_x10_00;
  long extraout_x10_01;
  long extraout_x11;
  ulong extraout_x11_00;
  ulong extraout_x11_01;
  ulong extraout_x11_02;
  long *******ppppppplVar13;
  ulong uVar14;
  long lVar15;
  long *******ppppppplVar16;
  ulong uVar17;
  long *******ppppppplVar18;
  long *******ppppppplVar19;
  long *******ppppppplVar20;
  long ******pppppplVar21;
  long *******ppppppplStack_130;
  long *******ppppppplStack_128;
  undefined8 uStack_120;
  long *******ppppppplStack_110;
  long *******ppppppplStack_108;
  long *******ppppppplStack_100;
  long *******ppppppplStack_f8;
  long *******ppppppplStack_e0;
  long *******ppppppplStack_d8;
  long *******ppppppplStack_d0;
  long *******ppppppplStack_c8;
  long *******ppppppplStack_a8;
  long *******ppppppplStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  param_2 = param_2 + (ulong)param_4 * 0xa0;
  if (*(int *)(param_2 + 0xb8) != 0) {
    return;
  }
  if (*(char *)(param_2 + 0x80) != '\x01') {
    return;
  }
  if ((*(byte *)(param_2 + 0xbc) & 1) != 0) {
    return;
  }
  if (*(int *)(param_2 + 0x20) != 4 && *(int *)(param_2 + 0x20) != 2) {
    return;
  }
  ppppppplStack_128 = (long *******)0x0;
  uStack_120 = 0;
  ppppppplStack_130 = (long *******)0x0;
  func_0x00010791395c();
  ppppppplVar19 = (long *******)(extraout_x8 + (extraout_x9 & 0xffffffff) * 0x160);
  ppppppplVar16 = (long *******)&ppppppplStack_130;
  ppppppplVar11 = ppppppplVar19;
  func_0x00010790e0b8();
  ppppppplStack_110 = (long *******)CONCAT44(ppppppplStack_110._4_4_,param_4);
  ppppppplStack_e0 = param_3;
  func_0x000107918578();
  func_0x000107915a0c();
  func_0x00010790e138();
  if ((int)ppppppplVar16 != 0) {
LAB_10790d5f0:
    ppppppplVar13 = (long *******)*param_6;
    func_0x000107918550();
    lVar8 = *(long *)(extraout_x8_00 + (extraout_x9_00 >> 4) * 8);
    ppppppplVar12 = *(long ********)(param_1 + 0x38);
    ppppppplVar7 = *(long ********)(param_1 + 0x40);
    ppppppplVar20 = *(long ********)(param_1 + 0x60);
    ppppppplVar10 = *(long ********)(param_1 + 0x68);
    *(undefined1 *)param_7 = 0;
    ppppppplVar19 = ppppppplVar7;
    if (((ulong)*param_7 & 0x100) == 0) {
      *(undefined1 *)((long)param_7 + 1) = 1;
      func_0x000107917124();
      ppppppplVar16 = (long *******)&ppppppplStack_a8;
      FUN_107906504(ppppppplVar12);
      ppppppplStack_c8 = (long *******)&ppppppplStack_110;
      ppppppplStack_e0 = ppppppplVar12;
      ppppppplStack_d8 = ppppppplVar20;
      ppppppplStack_d0 = ppppppplVar10;
      func_0x00010791873c();
      ppppppplVar11 = ppppppplStack_a0;
      ppppppplVar19 = ppppppplStack_a8;
      if ((ulong)(((long)ppppppplStack_a0 - (long)ppppppplStack_a8) / 0x68) < 0x11) {
        while (ppppppplVar9 = ppppppplVar19, ppppppplVar9 != ppppppplVar11) {
          ppppppplVar12 = ppppppplVar9 + 0xd;
          ppppppplVar18 = ppppppplVar12;
          while (ppppppplVar19 = ppppppplVar12, ppppppplVar18 != ppppppplVar11) {
            ppppppplVar19 = (long *******)&ppppppplStack_e0;
            ppppppplVar16 = ppppppplVar9;
            func_0x00010790f3ec(ppppppplVar19,ppppppplVar9,ppppppplVar18);
            ppppppplVar18 = ppppppplVar18 + 0xd;
            if (((ulong)ppppppplVar19 & 1) == 0) goto LAB_10790d688;
          }
        }
      }
      else {
        uStack_80 = 0;
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_88 = 0x8000000080000000;
        uStack_90 = 0x7fffffff7fffffff;
        func_0x000107917224();
        func_0x000107918840();
        func_0x00010790f338();
        func_0x000107917aec();
      }
LAB_10790d688:
      func_0x000107917e74();
      ppppppplVar11 = (long *******)&ppppppplStack_110;
      func_0x0001079108c0();
      ppppppplVar19 = ppppppplVar16;
      func_0x000107910770(&ppppppplStack_110);
      do {
        ppppppplVar9 = ppppppplVar16 + -0x1fa;
        do {
          uVar4 = ppppppplVar19 <= ppppppplVar16;
          if (ppppppplVar16 == ppppppplVar19) {
            func_0x000107917b28();
            func_0x000107917124();
            ppppppplVar19 = (long *******)&ppppppplStack_a8;
            func_0x000107906534(ppppppplVar7,ppppppplVar19,0);
            ppppppplStack_e0 = ppppppplVar7;
            ppppppplStack_d8 = ppppppplVar20;
            ppppppplStack_d0 = ppppppplVar10;
            ppppppplStack_c8 = (long *******)&ppppppplStack_110;
            func_0x00010791873c();
            func_0x00010791603c((long)ppppppplStack_a0 - (long)ppppppplStack_a8);
            if (!(bool)uVar4) goto LAB_10790daa4;
            uStack_80 = 0;
            uStack_78 = 0;
            uStack_70 = 0;
            uStack_88 = 0x8000000080000000;
            uStack_90 = 0x7fffffff7fffffff;
            func_0x000107917224();
            func_0x000107918840();
            func_0x000107910978();
            func_0x000107917aec();
            goto LAB_10790d8d8;
          }
          if (*(int *)(ppppppplVar16 + 4) != 1) {
            if ((*(int *)(ppppppplVar16 + 4) == 2) && (*(int *)(ppppppplVar16 + 0xd) == 2))
            goto LAB_10790d6e8;
LAB_10790df84:
            func_0x000107915ff8();
            ppppppplStack_d8 = (long *******)&UNK_10f434a4c;
            ppppppplStack_d0 = (long *******)0x81;
            func_0x00010bdb1574(&ppppppplStack_e0);
            goto LAB_10790e064;
          }
          if (*(int *)(ppppppplVar16 + 0xd) != 1) goto LAB_10790df84;
LAB_10790d6e8:
          if (1 < *(int *)(ppppppplVar16 + 1) - 3U) goto LAB_10790df84;
          ppppppplVar9 = ppppppplVar9 + 0x16;
          ppppppplVar16 = ppppppplVar16 + 0x16;
        } while ((long *******)*ppppppplVar11 != ppppppplVar9);
        ppppppplVar11 = ppppppplVar11 + 1;
        ppppppplVar16 = (long *******)*ppppppplVar11;
      } while( true );
    }
LAB_10790d960:
    ppppppplVar10 = (long *******)param_5[5];
    ppppppplVar7 = (long *******)((long)ppppppplVar13 - (long)ppppppplVar10);
    if (ppppppplVar13 < ppppppplVar10 || ppppppplVar7 == (long *******)0x0) {
      if (ppppppplVar13 < ppppppplVar10) {
        ppppppplVar7 = param_5;
        func_0x0001079112fc();
        func_0x000107916c58();
        ppppppplVar16 = (long *******)&ppppppplStack_110;
        ppppppplStack_110 = ppppppplVar7;
        ppppppplStack_108 = ppppppplVar11;
        func_0x000107911318();
        func_0x000107916c64();
        func_0x00010791732c();
        ppppppplVar11 = ppppppplVar13;
        func_0x00010791135c();
        if (0 < (long)ppppppplVar16) {
          ppppppplStack_e0 = ppppppplVar19;
          ppppppplStack_d8 = param_7;
          func_0x00010791135c(ppppppplVar12,ppppppplVar20,ppppppplVar19,param_7);
          ppppppplVar20 = (long *******)&ppppppplStack_e0;
          func_0x000107911318();
          func_0x000107916c58();
          ppppppplVar11 = ppppppplVar12;
          while (uVar4 = param_7 == ppppppplVar13, !(bool)uVar4) {
            ppppppplVar20 = param_7;
            func_0x000107903640();
            func_0x00010791629c();
            if ((bool)uVar4) {
              ppppppplVar19 = ppppppplVar19 + 1;
              param_7 = (long *******)*ppppppplVar19;
            }
          }
          param_5[5] = (long ******)((long)param_5[5] - (long)ppppppplVar16);
          while (func_0x000107917f94(), (long *******)0x153 < ppppppplVar20) {
            func_0x000107917b64();
            ppppppplVar11 = (long *******)(param_5[2] + -1);
            ppppppplVar20 = param_5;
            func_0x00010791136c();
          }
        }
      }
    }
    else {
      func_0x000107917f94();
      if (ppppppplVar16 < ppppppplVar7) {
        func_0x000107918528();
        ppppppplVar19 = (long *******)0x0;
        if (extraout_x11_00 != 0) {
          ppppppplVar19 = (long *******)(extraout_x9_02 / extraout_x11_00);
        }
        uVar17 = (ulong)(extraout_x9_02 != (long)ppppppplVar19 * extraout_x11_00);
        func_0x000107918180();
        if (extraout_x11_01 < extraout_x10_00) {
          uVar14 = extraout_x10_00 - (long)ppppppplVar20;
          func_0x000107918374();
          if (extraout_x11_02 < uVar14) {
            ppppppplVar11 = (long *******)(extraout_x10_01 >> 2);
            ppppppplVar16 = (long *******)(uVar14 + (extraout_x8_02 >> 3));
            uVar4 = ppppppplVar11 == ppppppplVar16;
            if (ppppppplVar11 <= ppppppplVar16) {
              ppppppplVar11 = ppppppplVar16;
            }
            if (ppppppplVar11 != (long *******)0x0) {
              func_0x00010790f2b4();
            }
            func_0x00010791868c((extraout_x8_02 >> 3) - (long)ppppppplVar20);
            for (; ppppppplVar16 = ppppppplStack_110, ppppppplVar19 = ppppppplStack_108,
                ppppppplVar12 = ppppppplStack_100, ppppppplVar10 = ppppppplStack_f8, uVar14 != 0;
                uVar14 = uVar14 - 1) {
              func_0x000107915748();
              ppppppplVar16 = (long *******)&ppppppplStack_110;
              func_0x00010790f174(ppppppplVar16,ppppppplVar11);
              ppppppplVar11 = ppppppplVar16;
            }
            while (ppppppplVar20 != (long *******)0x0) {
              pppppplVar21 = param_5[1];
              ppppppplVar11 = ppppppplVar16;
              ppppppplVar13 = ppppppplVar19;
              ppppppplVar9 = ppppppplVar10;
              if (ppppppplVar12 == ppppppplVar10) {
                if (ppppppplVar19 < ppppppplVar16 || (long)ppppppplVar19 - (long)ppppppplVar16 == 0)
                {
                  uVar4 = (long)ppppppplVar10 - (long)ppppppplVar16 == 0;
                  uVar17 = (long)ppppppplVar10 - (long)ppppppplVar16 >> 2;
                  if ((bool)uVar4) {
                    uVar17 = 1;
                  }
                  uVar14 = uVar17;
                  func_0x00010790f2b4(uVar17);
                  func_0x0001079162b0(uVar14 + (uVar17 >> 2) * 8);
                  func_0x000107915ddc(&ppppppplStack_e0);
                  FUN_10790f290();
                  ppppppplVar9 = ppppppplStack_c8;
                  ppppppplVar13 = ppppppplStack_d0;
                  ppppppplVar11 = ppppppplStack_e0;
                  ppppppplStack_e0 = ppppppplVar16;
                  ppppppplStack_d8 = ppppppplVar19;
                  ppppppplStack_d0 = ppppppplVar12;
                  ppppppplStack_c8 = ppppppplVar10;
                  func_0x00010790f300(&ppppppplStack_e0);
                  ppppppplVar12 = ppppppplVar13;
                }
                else {
                  uVar4 = (long)ppppppplVar10 - (long)ppppppplVar19 == 0;
                  if (!(bool)uVar4) {
                    func_0x0001079177ec();
                    _memmove();
                  }
                  ppppppplVar12 =
                       (long *******)
                       ((long)ppppppplVar19 +
                       ((long)ppppppplVar10 - (long)ppppppplVar19) +
                       ((((long)ppppppplVar19 - (long)ppppppplVar16 >> 3) + 1) / -2) * 8);
                }
              }
              else {
                uVar4 = 0;
              }
              func_0x000107917068(*pppppplVar21);
              ppppppplVar16 = ppppppplVar11;
              ppppppplVar19 = ppppppplVar13;
              ppppppplVar10 = ppppppplVar9;
            }
            ppppppplVar13 = (long *******)param_5[2];
            ppppppplStack_110 = ppppppplVar16;
            ppppppplStack_108 = ppppppplVar19;
            ppppppplStack_100 = ppppppplVar12;
            ppppppplStack_f8 = ppppppplVar10;
            while (func_0x00010791763c(), !(bool)uVar4) {
              ppppppplVar13 = ppppppplVar13 + -1;
              func_0x00010790f1f8(&ppppppplStack_110,ppppppplVar13);
            }
            func_0x000107916944();
            param_5[4] = extraout_x8_03;
            ppppppplVar16 = (long *******)&ppppppplStack_110;
            func_0x00010790f300();
            ppppppplVar19 = (long *******)0x0;
          }
          else {
            lVar15 = uVar17 - (long)ppppppplVar20;
            for (; lVar15 + (long)ppppppplVar19 != 0;
                ppppppplVar19 = (long *******)((long)ppppppplVar19 + -1)) {
              if (param_5[3] == param_5[2]) {
                ppppppplVar20 = (long *******)(uVar17 + (long)ppppppplVar19);
                break;
              }
              func_0x000107915748();
              ppppppplVar11 = param_5;
              func_0x00010790f074(param_5,ppppppplVar16);
              ppppppplVar16 = ppppppplVar11;
            }
            lVar15 = lVar15 + (long)ppppppplVar19;
            ppppppplVar19 = (long *******)0xa9;
            while (lVar15 != 0) {
              func_0x000107915748();
              ppppppplVar11 = param_5;
              func_0x00010790f0e4(param_5,ppppppplVar16);
              lVar15 = lVar15 + -1;
              lVar1 = 0xa9;
              if ((long)param_5[2] - (long)param_5[1] != 8) {
                lVar1 = 0xaa;
              }
              param_5[4] = (long ******)(lVar1 + (long)param_5[4]);
              ppppppplVar16 = ppppppplVar11;
            }
            func_0x000107918498(0xffffffffffffff56);
            ppppppplVar13 = (long *******)0x0;
            for (; ppppppplVar20 != (long *******)0x0;
                ppppppplVar20 = (long *******)((long)ppppppplVar20 + -1)) {
              func_0x000107914e6c();
              func_0x000107917f8c();
            }
          }
        }
        else {
          func_0x000107918498(0xffffffffffffff56);
          for (; ppppppplVar20 != (long *******)0x0;
              ppppppplVar20 = (long *******)((long)ppppppplVar20 + -1)) {
            func_0x000107914e6c();
            func_0x000107917f8c();
          }
        }
      }
      func_0x00010791732c();
      func_0x00010791801c();
      func_0x000107911318();
      while (ppppppplVar11 = ppppppplVar7, ppppppplVar13 != ppppppplVar7) {
        ppppppplVar11 = ppppppplVar13;
        ppppppplVar12 = ppppppplVar7;
        if (ppppppplVar19 != ppppppplVar16) {
          ppppppplVar12 = (long *******)(*ppppppplVar19 + 0x1fe);
        }
        for (; bVar5 = ppppppplVar11 == ppppppplVar12, !bVar5; ppppppplVar11 = ppppppplVar11 + 3) {
          *ppppppplVar11 = (long ******)0x0;
          ppppppplVar11[1] = (long ******)0x0;
          ppppppplVar11[2] = (long ******)0x0;
        }
        func_0x000107916598();
        if (!bVar5) {
          ppppppplVar19 = (long *******)(extraout_x9_03 + 8);
          ppppppplVar13 = (long *******)*ppppppplVar19;
        }
      }
    }
    lVar8 = lVar8 + (extraout_x9_00 & 0xf) * 0x160 + (ulong)param_4 * 0xa0;
    ppppppplStack_128 = ppppppplStack_130;
    *(undefined4 *)(lVar8 + 0xb8) = 4;
    *(undefined1 *)(lVar8 + 0xbc) = 1;
    ppppppplVar16 = param_6;
    func_0x00010790a48c();
    while (ppppppplVar19 = param_6, func_0x000107908fb0(), ppppppplVar11 != ppppppplVar19) {
      for (lVar8 = 0; lVar8 != 0x140; lVar8 = lVar8 + 0xa0) {
        if (((*(byte *)((long)ppppppplVar11 + lVar8 + 0xbc) & 1) == 0) &&
           ((*(byte *)((long)ppppppplVar11 + lVar8 + 0xbd) & 1) == 0)) {
          *(undefined4 *)((long)ppppppplVar11 + lVar8 + 0xb8) = 0;
        }
      }
      ppppppplVar11 = ppppppplVar11 + 0x2c;
      if ((long)ppppppplVar11 - (long)*ppppppplVar16 == 0x1600) {
        ppppppplVar16 = ppppppplVar16 + 1;
        ppppppplVar11 = (long *******)*ppppppplVar16;
      }
    }
    goto LAB_10790df50;
  }
  ppppppplVar12 = ppppppplVar19 + (ulong)param_4 * 0x14;
  if (ppppppplStack_e0 != param_3) {
    lVar8 = *(long *)(param_1 + 0x48);
    if (0 < (long)ppppppplVar19[2]) {
      func_0x0001079170a8();
      lVar15 = extraout_x11 + (extraout_x10 & 0xffffffff) * 0x160;
      lVar8 = extraout_x8_01;
      if (*(long *)(lVar15 + 0x10) == extraout_x9_01) {
        ppppppplVar12 = (long *******)(lVar15 + (long)(int)(uint)ppppppplStack_110 * 0xa0);
        ppppppplVar20 = (long *******)ppppppplVar12[0xf];
        if (ppppppplVar20 == (long *******)0xffffffffffffffff) {
          ppppppplVar20 = (long *******)ppppppplVar12[0xe];
        }
        if (ppppppplVar20 == param_3) goto LAB_10790d7c4;
      }
    }
    lVar8 = *(long *)(lVar8 + 0x28) * 2 + 4;
    do {
      lVar8 = lVar8 + -1;
      if (lVar8 == 0) goto LAB_10790d5f0;
      func_0x000107918578();
      func_0x000107915a0c();
      func_0x00010790e138();
      if ((int)ppppppplVar16 != 0) goto LAB_10790d5f0;
      ppppppplVar12 = ppppppplVar19 + (ulong)param_4 * 0x14;
    } while (ppppppplStack_e0 != param_3 || (uint)ppppppplStack_110 != param_4);
  }
LAB_10790d7c4:
  *(undefined4 *)(ppppppplVar12 + 0x17) = 3;
  uVar17 = (long)ppppppplStack_128 - (long)ppppppplStack_130;
  ppppppplVar12 = ppppppplStack_130;
  ppppppplVar19 = ppppppplStack_128;
  if (uVar17 < 0x19) goto LAB_10790df50;
  while (ppppppplStack_130 = ppppppplVar12, ppppppplStack_128 = ppppppplVar19, 0x20 < uVar17) {
    ppppppplVar16 = (long *******)(ulong)*(uint *)(ppppppplVar19 + -2);
    ppppppplVar11 = (long *******)(ulong)*(uint *)((long)ppppppplVar19 + -0xc);
    func_0x00010790827c(ppppppplVar16,ppppppplVar11,*(undefined4 *)ppppppplVar12,
                        *(undefined4 *)((long)ppppppplVar12 + 4),*(undefined4 *)(ppppppplVar12 + 1),
                        *(undefined4 *)((long)ppppppplVar12 + 0xc));
    if ((int)ppppppplVar16 != 0) break;
    lVar8 = (long)ppppppplVar19 - (long)(ppppppplVar12 + 1);
    if (lVar8 != 0) {
      _memmove(ppppppplVar12,ppppppplVar12 + 1,lVar8);
      ppppppplVar12 = ppppppplStack_130;
      ppppppplVar19 = ppppppplStack_128;
    }
    func_0x00010790ead0(&ppppppplStack_130,((long)ppppppplVar19 - (long)ppppppplVar12 >> 3) + -1);
    func_0x00010790ead0(&ppppppplStack_130,
                        ((long)ppppppplStack_128 - (long)ppppppplStack_130 >> 3) + -1);
    ppppppplVar16 = (long *******)&ppppppplStack_130;
    ppppppplVar11 = ppppppplStack_130;
    func_0x000107903230(ppppppplVar16,ppppppplStack_130);
    ppppppplVar12 = ppppppplStack_130;
    ppppppplVar19 = ppppppplStack_128;
    uVar17 = (long)ppppppplStack_128 - (long)ppppppplStack_130;
  }
  func_0x000107917f94();
  if (ppppppplVar16 == (long *******)0x0) {
    bVar5 = (long ******)0xa9 < param_5[4];
    pppppplVar21 = (long ******)((long)param_5[4] + -0xaa);
    uVar4 = pppppplVar21 == (long ******)0x0;
    if (bVar5) {
      param_5[4] = pppppplVar21;
      ppppppplVar16 = ppppppplVar11;
LAB_10790d870:
      func_0x000107914e6c();
      func_0x000107917f8c();
      ppppppplVar11 = ppppppplVar16;
    }
    else {
      func_0x000107916a74();
      if (bVar5) {
        func_0x0001079183c8();
        func_0x00010790f2b4();
        func_0x0001079162b0((undefined1 *)((long)ppppppplVar16 + (long)ppppppplVar19));
        func_0x000107915748();
        func_0x000107918064();
        func_0x00010790f174(&ppppppplStack_e0);
        ppppppplStack_110 = (long *******)0x0;
        ppppppplVar12 = (long *******)param_5[2];
        ppppppplVar11 = ppppppplVar16;
        while (func_0x00010791763c(), !(bool)uVar4) {
          ppppppplVar12 = ppppppplVar12 + -1;
          ppppppplVar11 = ppppppplVar12;
          func_0x00010790f1f8(&ppppppplStack_e0,ppppppplVar12);
        }
        func_0x000107916964();
        func_0x00010790f2dc();
        func_0x00010790f300(&ppppppplStack_e0);
      }
      else {
        func_0x000107915748();
        if (param_7 == ppppppplVar12) {
          func_0x00010790f0e4(param_5,ppppppplVar16);
          goto LAB_10790d870;
        }
        func_0x00010790f074(param_5);
        ppppppplVar11 = ppppppplVar16;
      }
    }
  }
  func_0x00010791732c();
  func_0x000107903654(ppppppplVar11,&ppppppplStack_130);
  func_0x0001079170cc();
  func_0x00010790a48c();
  func_0x000107917618();
  while( true ) {
    func_0x000107908fb0();
    uVar4 = param_7 <= ppppppplVar19;
    if (ppppppplVar19 == param_7) break;
    lVar8 = 0;
    lVar15 = 0x140;
    uVar6 = 0;
    do {
      func_0x000107915f64(*(undefined4 *)((long)ppppppplVar19 + lVar8 + 0xb8));
      if (!(bool)uVar4 || (bool)uVar6) {
        ppppppplStack_d0 = *(long ********)((long)ppppppplVar19 + lVar8 + 0x38);
        ppppppplStack_d8 = *(long ********)((long)ppppppplVar19 + lVar8 + 0x30);
        ppppppplStack_e0 = *(long ********)((long)ppppppplVar19 + lVar8 + 0x28);
        func_0x000107917324();
        *(undefined1 *)param_7 = 1;
        uVar2 = *(uint *)((long)ppppppplVar19 + lVar8 + 0x20);
        uVar4 = 3 < uVar2;
        uVar6 = uVar2 == 4;
        if ((bool)uVar6) {
          func_0x000107917678();
          func_0x000107917324();
          *(undefined1 *)param_7 = 1;
        }
        func_0x000107915f64(*(undefined4 *)((long)ppppppplVar19 + lVar8 + 0xb8));
        if (!(bool)uVar4 || (bool)uVar6) {
          *(undefined1 *)((long)ppppppplVar19 + lVar8 + 0xbd) = 1;
        }
      }
      lVar15 = lVar15 + -0xa0;
      lVar8 = lVar8 + 0xa0;
    } while (lVar15 != 0);
    ppppppplVar19 = ppppppplVar19 + 0x2c;
    if ((long)ppppppplVar19 - (long)*ppppppplVar12 == 0x1600) {
      ppppppplVar12 = ppppppplVar12 + 1;
      ppppppplVar19 = (long *******)*ppppppplVar12;
    }
    param_7 = *(long ********)(param_1 + 0x10);
  }
  func_0x00010791753c();
LAB_10790df50:
  func_0x000107903640(&ppppppplStack_130);
  return;
LAB_10790daa4:
  ppppppplVar16 = ppppppplStack_a8;
  if (ppppppplVar16 == ppppppplStack_a0) {
LAB_10790d8d8:
    func_0x000107917e74();
    ppppppplVar7 = (long *******)&ppppppplStack_110;
    func_0x0001079108c0();
    ppppppplVar16 = (long *******)&ppppppplStack_110;
    ppppppplVar11 = ppppppplVar19;
    func_0x000107910770();
    do {
      ppppppplVar10 = ppppppplVar19 + -0x1fa;
      do {
        if (ppppppplVar19 == ppppppplVar11) {
          func_0x000107917b28();
          param_7 = ppppppplStack_a0;
          goto LAB_10790d960;
        }
        if (*(int *)(ppppppplVar19 + 4) == 1) {
          if (*(int *)(ppppppplVar19 + 0xd) != 1) goto LAB_10790dfb0;
        }
        else if ((*(int *)(ppppppplVar19 + 4) != 2) || (*(int *)(ppppppplVar19 + 0xd) != 2))
        goto LAB_10790dfb0;
        if (1 < *(int *)(ppppppplVar19 + 1) - 3U) {
LAB_10790dfb0:
          func_0x000107915ff8();
          ppppppplStack_d8 = (long *******)&UNK_10f434b9a;
          ppppppplStack_d0 = (long *******)0x81;
          func_0x00010bdb1574(&ppppppplStack_e0);
LAB_10790e064:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10790e068);
          (*pcVar3)();
        }
        ppppppplVar10 = ppppppplVar10 + 0x16;
        ppppppplVar19 = ppppppplVar19 + 0x16;
      } while ((long *******)*ppppppplVar7 != ppppppplVar10);
      ppppppplVar7 = ppppppplVar7 + 1;
      ppppppplVar19 = (long *******)*ppppppplVar7;
    } while( true );
  }
  ppppppplVar12 = ppppppplVar16 + 0xd;
  ppppppplVar11 = ppppppplVar12;
  while (ppppppplStack_a8 = ppppppplVar12, ppppppplVar11 != ppppppplStack_a0) {
    ppppppplVar7 = (long *******)&ppppppplStack_e0;
    ppppppplVar19 = ppppppplVar16;
    func_0x000107910a2c(ppppppplVar7,ppppppplVar16,ppppppplVar11);
    ppppppplVar11 = ppppppplVar11 + 0xd;
    if (((ulong)ppppppplVar7 & 1) == 0) goto LAB_10790d8d8;
  }
  goto LAB_10790daa4;
}



/* Entry: 10790ef64; end: 10790ef6f;  */

undefined8 FUN_10790ef64(long param_1,long param_2,long param_3,int param_4)

{
  int *piVar1;
  long lVar2;
  
  func_0x000107913ad0();
  piVar1 = (int *)(param_1 + 0x24);
  lVar2 = (param_2 - param_1) / 0x68;
  while( true ) {
    if (lVar2 == 0) {
      return 0xffffffffffffffff;
    }
    if (((*(long *)(piVar1 + -3) == param_3) && (piVar1[-1] == param_4)) && (*piVar1 == 1)) break;
    piVar1 = piVar1 + 0x1a;
    lVar2 = lVar2 + -1;
  }
  return *(undefined8 *)(piVar1 + -7);
}



/* Entry: 10790f290; end: 10790f2b3;  */

void FUN_10790f290(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 - (long)param_2;
  lVar1 = (long)*(undefined8 **)(param_1 + 0x10) + param_3;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (; param_3 != 0; param_3 = param_3 + -8) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}


